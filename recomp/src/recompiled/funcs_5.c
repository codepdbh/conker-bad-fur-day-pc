#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_10008C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10008C04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10008C08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x10008C0C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x10008C10: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x10008C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10008C18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x10008C1C: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x10008C20: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x10008C24: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x10008C28: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x10008C2C: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x10008C30: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x10008C34: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x10008C38: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x10008C3C: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x10008C40: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x10008C44: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x10008C48: addiu       $t0, $t0, -0x32B8
    ctx->r8 = ADD32(ctx->r8, -0X32B8);
    // 0x10008C4C: addiu       $t8, $t8, -0x35A8
    ctx->r24 = ADD32(ctx->r24, -0X35A8);
    // 0x10008C50: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x10008C54: jal         0x10018790
    // 0x10008C58: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    func_10018790(rdram, ctx);
        goto after_0;
    // 0x10008C58: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    after_0:
    // 0x10008C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10008C60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10008C64: jr          $ra
    // 0x10008C68: nop

    return;
    return;
    // 0x10008C68: nop

;}
RECOMP_FUNC void alSeqFileNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100128D0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x100128D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x100128D8: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x100128DC: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x100128E0: blez        $t6, L_10012924
    if (SIGNED(ctx->r14) <= 0) {
        // 0x100128E4: nop
    
            goto L_10012924;
    }
    // 0x100128E4: nop

L_100128E8:
    // 0x100128E8: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x100128EC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x100128F0: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x100128F4: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x100128F8: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x100128FC: addu        $t3, $a0, $t8
    ctx->r11 = ADD32(ctx->r4, ctx->r24);
    // 0x10012900: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x10012904: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x10012908: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x1001290C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x10012910: sw          $t5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r13;
    // 0x10012914: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x10012918: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1001291C: bne         $at, $zero, L_100128E8
    if (ctx->r1 != 0) {
        // 0x10012920: nop
    
            goto L_100128E8;
    }
    // 0x10012920: nop

L_10012924:
    // 0x10012924: b           L_1001292C
    // 0x10012928: nop

        goto L_1001292C;
    // 0x10012928: nop

L_1001292C:
    // 0x1001292C: jr          $ra
    // 0x10012930: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x10012930: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_151D6BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D6BFC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x151D6C00: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151D6C04: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x151D6C08: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x151D6C0C: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x151D6C10: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151D6C14: sb          $t9, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r25;
    // 0x151D6C18: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x151D6C1C: addiu       $t6, $zero, 0x27
    ctx->r14 = ADD32(0, 0X27);
    // 0x151D6C20: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151D6C24: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x151D6C28: sb          $t0, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r8;
    // 0x151D6C2C: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x151D6C30: sb          $t6, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r14;
    // 0x151D6C34: sb          $t7, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r15;
    // 0x151D6C38: sb          $t8, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r24;
    // 0x151D6C3C: lui         $t4, 0x22
    ctx->r12 = S32(0X22 << 16);
    // 0x151D6C40: lui         $t5, 0x4
    ctx->r13 = S32(0X4 << 16);
    // 0x151D6C44: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
    // 0x151D6C48: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x151D6C4C: lw          $t9, 0xA8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA8);
    // 0x151D6C50: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x151D6C54: addiu       $t2, $zero, 0xA5
    ctx->r10 = ADD32(0, 0XA5);
    // 0x151D6C58: addiu       $t3, $zero, 0x17
    ctx->r11 = ADD32(0, 0X17);
    // 0x151D6C5C: ori         $t4, $t4, 0x405
    ctx->r12 = ctx->r12 | 0X405;
    // 0x151D6C60: ori         $t5, $t5, 0x200
    ctx->r13 = ctx->r13 | 0X200;
    // 0x151D6C64: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x151D6C68: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151D6C6C: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x151D6C70: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x151D6C74: lw          $t0, 0xA8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA8);
    // 0x151D6C78: sh          $t1, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r9;
    // 0x151D6C7C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x151D6C80: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x151D6C84: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x151D6C88: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x151D6C8C: sb          $t6, 0x7D($sp)
    MEM_B(0X7D, ctx->r29) = ctx->r14;
    // 0x151D6C90: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    // 0x151D6C94: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x151D6C98: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151D6C9C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151D6CA0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151D6CA4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151D6CA8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151D6CAC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151D6CB0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151D6CB4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151D6CB8: sb          $zero, 0x88($sp)
    MEM_B(0X88, ctx->r29) = 0;
    // 0x151D6CBC: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x151D6CC0: sb          $zero, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = 0;
    // 0x151D6CC4: sb          $t1, 0x80($sp)
    MEM_B(0X80, ctx->r29) = ctx->r9;
    // 0x151D6CC8: sb          $t2, 0x81($sp)
    MEM_B(0X81, ctx->r29) = ctx->r10;
    // 0x151D6CCC: sb          $t3, 0x82($sp)
    MEM_B(0X82, ctx->r29) = ctx->r11;
    // 0x151D6CD0: sb          $t4, 0x83($sp)
    MEM_B(0X83, ctx->r29) = ctx->r12;
    // 0x151D6CD4: sb          $t5, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r13;
    // 0x151D6CD8: sb          $t6, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r14;
    // 0x151D6CDC: sb          $t7, 0x86($sp)
    MEM_B(0X86, ctx->r29) = ctx->r15;
    // 0x151D6CE0: sb          $t8, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r24;
    // 0x151D6CE4: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x151D6CE8: lbu         $t1, 0x3B($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X3B);
    // 0x151D6CEC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151D6CF0: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x151D6CF4: sb          $t2, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r10;
    // 0x151D6CF8: addiu       $t4, $t4, 0x5480
    ctx->r12 = ADD32(ctx->r12, 0X5480);
    // 0x151D6CFC: sb          $t1, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r9;
    // 0x151D6D00: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151D6D04: addiu       $t3, $sp, 0x94
    ctx->r11 = ADD32(ctx->r29, 0X94);
    // 0x151D6D08: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x151D6D0C: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151D6D10: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151D6D14: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x151D6D18: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x151D6D1C: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151D6D20: lw          $t1, 0xB0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB0);
    // 0x151D6D24: lbu         $t0, 0xAF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XAF);
    // 0x151D6D28: addiu       $t9, $zero, 0x1F
    ctx->r25 = ADD32(0, 0X1F);
    // 0x151D6D2C: sh          $t8, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r24;
    // 0x151D6D30: sh          $t9, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r25;
    // 0x151D6D34: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151D6D38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151D6D3C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x151D6D40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151D6D44: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x151D6D48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151D6D4C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151D6D50: jal         0x15157010
    // 0x151D6D54: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_15157010(rdram, ctx);
        goto after_0;
    // 0x151D6D54: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_0:
    // 0x151D6D58: lw          $v1, 0xA8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA8);
    // 0x151D6D5C: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x151D6D60: lw          $t2, -0x4DB0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4DB0);
    // 0x151D6D64: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x151D6D68: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x151D6D6C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x151D6D70: lbu         $t6, 0x3B($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3B);
    // 0x151D6D74: addiu       $t3, $zero, 0x1F
    ctx->r11 = ADD32(0, 0X1F);
    // 0x151D6D78: sh          $t5, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r13;
    // 0x151D6D7C: sh          $t3, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r11;
    // 0x151D6D80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151D6D84: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x151D6D88: jal         0x150859AC
    // 0x151D6D8C: sb          $t6, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r14;
    func_150859AC(rdram, ctx);
        goto after_1;
    // 0x151D6D8C: sb          $t6, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r14;
    after_1:
    // 0x151D6D90: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x151D6D94: jal         0x1509B570
    // 0x151D6D98: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    func_1509B570(rdram, ctx);
        goto after_2;
    // 0x151D6D98: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    after_2:
    // 0x151D6D9C: beq         $v0, $zero, L_151D6E08
    if (ctx->r2 == 0) {
        // 0x151D6DA0: addiu       $a0, $zero, 0x63
        ctx->r4 = ADD32(0, 0X63);
            goto L_151D6E08;
    }
    // 0x151D6DA0: addiu       $a0, $zero, 0x63
    ctx->r4 = ADD32(0, 0X63);
    // 0x151D6DA4: lw          $v1, 0x64($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X64);
    // 0x151D6DA8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x151D6DAC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151D6DB0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x151D6DB4: bne         $v1, $at, L_151D6DC4
    if (ctx->r3 != ctx->r1) {
        // 0x151D6DB8: addiu       $t7, $t4, 0x64
        ctx->r15 = ADD32(ctx->r12, 0X64);
            goto L_151D6DC4;
    }
    // 0x151D6DB8: addiu       $t7, $t4, 0x64
    ctx->r15 = ADD32(ctx->r12, 0X64);
    // 0x151D6DBC: b           L_151D6E0C
    // 0x151D6DC0: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
        goto L_151D6E0C;
    // 0x151D6DC0: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
L_151D6DC4:
    // 0x151D6DC4: bne         $v1, $zero, L_151D6DD4
    if (ctx->r3 != 0) {
        // 0x151D6DC8: slti        $at, $v1, 0x3
        ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_151D6DD4;
    }
    // 0x151D6DC8: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x151D6DCC: b           L_151D6E0C
    // 0x151D6DD0: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
        goto L_151D6E0C;
    // 0x151D6DD0: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_151D6DD4:
    // 0x151D6DD4: beq         $at, $zero, L_151D6E0C
    if (ctx->r1 == 0) {
        // 0x151D6DD8: lw          $t8, 0x44($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X44);
            goto L_151D6E0C;
    }
    // 0x151D6DD8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x151D6DDC: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D6DE0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151D6DE4: mflo        $t9
    ctx->r25 = lo;
    // 0x151D6DE8: nop

    // 0x151D6DEC: nop

    // 0x151D6DF0: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x151D6DF4: mflo        $t0
    ctx->r8 = lo;
    // 0x151D6DF8: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x151D6DFC: nop

    // 0x151D6E00: b           L_151D6E10
    // 0x151D6E04: lbu         $t6, 0xAF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XAF);
        goto L_151D6E10;
    // 0x151D6E04: lbu         $t6, 0xAF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XAF);
L_151D6E08:
    // 0x151D6E08: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_151D6E0C:
    // 0x151D6E0C: lbu         $t6, 0xAF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XAF);
L_151D6E10:
    // 0x151D6E10: lw          $t5, 0xB0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB0);
    // 0x151D6E14: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151D6E18: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151D6E1C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151D6E20: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151D6E24: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x151D6E28: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x151D6E2C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x151D6E30: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151D6E34: jal         0x150CFF10
    // 0x151D6E38: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    func_150CFF10(rdram, ctx);
        goto after_3;
    // 0x151D6E38: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_3:
    // 0x151D6E3C: beq         $v0, $zero, L_151D6E50
    if (ctx->r2 == 0) {
        // 0x151D6E40: addiu       $a1, $sp, 0x3C
        ctx->r5 = ADD32(ctx->r29, 0X3C);
            goto L_151D6E50;
    }
    // 0x151D6E40: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x151D6E44: lw          $a0, 0x48($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X48);
    // 0x151D6E48: jal         0x10022EC0
    // 0x151D6E4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x151D6E4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
L_151D6E50:
    // 0x151D6E50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151D6E54: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x151D6E58: jr          $ra
    // 0x151D6E5C: nop

    return;
    return;
    // 0x151D6E5C: nop

;}
RECOMP_FUNC void func_1515D480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515D480: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1515D484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515D488: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1515D48C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1515D490: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1515D494: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1515D498: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1515D49C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1515D4A0: sll         $a0, $t6, 5
    ctx->r4 = S32(ctx->r14 << 5);
    // 0x1515D4A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1515D4A8: jal         0x10003C40
    // 0x1515D4AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1515D4AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1515D4B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1515D4B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1515D4B8: jal         0x100226F0
    // 0x1515D4BC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x1515D4BC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1515D4C0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x1515D4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515D4C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1515D4CC: jr          $ra
    // 0x1515D4D0: nop

    return;
    return;
    // 0x1515D4D0: nop

;}
RECOMP_FUNC void __osPfsGetInitData2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F1FAC: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x151F1FB0: lbu         $t7, 0x2A51($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2A51);
    // 0x151F1FB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151F1FB8: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x151F1FBC: addiu       $t6, $t6, 0x29D0
    ctx->r14 = ADD32(ctx->r14, 0X29D0);
    // 0x151F1FC0: sb          $zero, 0x7($sp)
    MEM_B(0X7, ctx->r29) = 0;
    // 0x151F1FC4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151F1FC8: blez        $t7, L_151F206C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x151F1FCC: sw          $zero, 0x8($sp)
        MEM_W(0X8, ctx->r29) = 0;
            goto L_151F206C;
    }
    // 0x151F1FCC: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_151F1FD0:
    // 0x151F1FD0: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x151F1FD4: addiu       $t8, $sp, 0xC
    ctx->r24 = ADD32(ctx->r29, 0XC);
    // 0x151F1FD8: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x151F1FDC: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x151F1FE0: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151F1FE4: lwl         $t1, 0x4($t9)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r25, 0X4);
    // 0x151F1FE8: lwr         $t1, 0x7($t9)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r25, 0X7);
    // 0x151F1FEC: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x151F1FF0: lbu         $t2, 0xE($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XE);
    // 0x151F1FF4: andi        $t3, $t2, 0xC0
    ctx->r11 = ctx->r10 & 0XC0;
    // 0x151F1FF8: sra         $t4, $t3, 4
    ctx->r12 = S32(SIGNED(ctx->r11) >> 4);
    // 0x151F1FFC: sb          $t4, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r12;
    // 0x151F2000: lbu         $t5, 0x3($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X3);
    // 0x151F2004: bne         $t5, $zero, L_151F2040
    if (ctx->r13 != 0) {
        // 0x151F2008: nop
    
            goto L_151F2040;
    }
    // 0x151F2008: nop

    // 0x151F200C: lbu         $t6, 0x11($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X11);
    // 0x151F2010: lbu         $t0, 0x10($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X10);
    // 0x151F2014: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151F2018: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x151F201C: or          $t8, $t7, $t0
    ctx->r24 = ctx->r15 | ctx->r8;
    // 0x151F2020: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x151F2024: lbu         $t9, 0x12($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X12);
    // 0x151F2028: sb          $t9, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r25;
    // 0x151F202C: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x151F2030: lbu         $t1, 0x7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X7);
    // 0x151F2034: sllv        $t4, $t3, $t2
    ctx->r12 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x151F2038: or          $t5, $t1, $t4
    ctx->r13 = ctx->r9 | ctx->r12;
    // 0x151F203C: sb          $t5, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r13;
L_151F2040:
    // 0x151F2040: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x151F2044: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x151F2048: lbu         $t9, 0x2A51($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2A51);
    // 0x151F204C: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x151F2050: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151F2054: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151F2058: addiu       $t8, $t0, 0x8
    ctx->r24 = ADD32(ctx->r8, 0X8);
    // 0x151F205C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151F2060: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x151F2064: bne         $at, $zero, L_151F1FD0
    if (ctx->r1 != 0) {
        // 0x151F2068: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_151F1FD0;
    }
    // 0x151F2068: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_151F206C:
    // 0x151F206C: lbu         $t3, 0x7($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X7);
    // 0x151F2070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151F2074: jr          $ra
    // 0x151F2078: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
    return;
    return;
    // 0x151F2078: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
    // 0x151F207C: nop

;}
RECOMP_FUNC void func_1000D758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000D758: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1000D75C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1000D760: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1000D764: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1000D768: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1000D76C: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x1000D770: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x1000D774: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1000D778: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x1000D77C: lbu         $t6, 0x1F00($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1F00);
    // 0x1000D780: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1000D784: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1000D788: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1000D78C: bne         $t6, $zero, L_1000D954
    if (ctx->r14 != 0) {
        // 0x1000D790: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_1000D954;
    }
    // 0x1000D790: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x1000D794: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x1000D798: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x1000D79C: addiu       $a2, $a2, -0x4F8C
    ctx->r6 = ADD32(ctx->r6, -0X4F8C);
    // 0x1000D7A0: addiu       $a1, $a1, 0x17B0
    ctx->r5 = ADD32(ctx->r5, 0X17B0);
    // 0x1000D7A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1000D7A8: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x1000D7AC: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
    // 0x1000D7B0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x1000D7B4: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x1000D7B8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x1000D7BC: addiu       $t2, $zero, -0xF1
    ctx->r10 = ADD32(0, -0XF1);
L_1000D7C0:
    // 0x1000D7C0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x1000D7C4: beql        $v0, $zero, L_1000D83C
    if (ctx->r2 == 0) {
        // 0x1000D7C8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1000D83C;
    }
    goto skip_0;
    // 0x1000D7C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x1000D7CC: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x1000D7D0: blez        $v1, L_1000D838
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1000D7D4: sll         $t7, $v1, 4
        ctx->r15 = S32(ctx->r3 << 4);
            goto L_1000D838;
    }
    // 0x1000D7D4: sll         $t7, $v1, 4
    ctx->r15 = S32(ctx->r3 << 4);
    // 0x1000D7D8: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x1000D7DC: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x1000D7E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1000D7E4: sllv        $t7, $t6, $s0
    ctx->r15 = S32(ctx->r14 << (ctx->r16 & 31));
    // 0x1000D7E8: andi        $t9, $a0, 0x40
    ctx->r25 = ctx->r4 & 0X40;
    // 0x1000D7EC: beq         $t9, $zero, L_1000D7F8
    if (ctx->r25 == 0) {
        // 0x1000D7F0: and         $v0, $a0, $t2
        ctx->r2 = ctx->r4 & ctx->r10;
            goto L_1000D7F8;
    }
    // 0x1000D7F0: and         $v0, $a0, $t2
    ctx->r2 = ctx->r4 & ctx->r10;
    // 0x1000D7F4: or          $t0, $t0, $t7
    ctx->r8 = ctx->r8 | ctx->r15;
L_1000D7F8:
    // 0x1000D7F8: bne         $v0, $t3, L_1000D80C
    if (ctx->r2 != ctx->r11) {
        // 0x1000D7FC: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_1000D80C;
    }
    // 0x1000D7FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1000D800: sllv        $t9, $t8, $s0
    ctx->r25 = S32(ctx->r24 << (ctx->r16 & 31));
    // 0x1000D804: b           L_1000D838
    // 0x1000D808: or          $a3, $a3, $t9
    ctx->r7 = ctx->r7 | ctx->r25;
        goto L_1000D838;
    // 0x1000D808: or          $a3, $a3, $t9
    ctx->r7 = ctx->r7 | ctx->r25;
L_1000D80C:
    // 0x1000D80C: beq         $v0, $t4, L_1000D818
    if (ctx->r2 == ctx->r12) {
        // 0x1000D810: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_1000D818;
    }
    // 0x1000D810: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1000D814: bne         $v0, $s2, L_1000D824
    if (ctx->r2 != ctx->r18) {
        // 0x1000D818: sllv        $t7, $t6, $s0
        ctx->r15 = S32(ctx->r14 << (ctx->r16 & 31));
            goto L_1000D824;
    }
L_1000D818:
    // 0x1000D818: sllv        $t7, $t6, $s0
    ctx->r15 = S32(ctx->r14 << (ctx->r16 & 31));
    // 0x1000D81C: b           L_1000D838
    // 0x1000D820: or          $s1, $s1, $t7
    ctx->r17 = ctx->r17 | ctx->r15;
        goto L_1000D838;
    // 0x1000D820: or          $s1, $s1, $t7
    ctx->r17 = ctx->r17 | ctx->r15;
L_1000D824:
    // 0x1000D824: beq         $v0, $ra, L_1000D830
    if (ctx->r2 == ctx->r31) {
        // 0x1000D828: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_1000D830;
    }
    // 0x1000D828: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1000D82C: bne         $v0, $t5, L_1000D838
    if (ctx->r2 != ctx->r13) {
        // 0x1000D830: sllv        $t9, $t8, $s0
        ctx->r25 = S32(ctx->r24 << (ctx->r16 & 31));
            goto L_1000D838;
    }
L_1000D830:
    // 0x1000D830: sllv        $t9, $t8, $s0
    ctx->r25 = S32(ctx->r24 << (ctx->r16 & 31));
    // 0x1000D834: or          $t1, $t1, $t9
    ctx->r9 = ctx->r9 | ctx->r25;
L_1000D838:
    // 0x1000D838: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1000D83C:
    // 0x1000D83C: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x1000D840: bne         $at, $zero, L_1000D7C0
    if (ctx->r1 != 0) {
        // 0x1000D844: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_1000D7C0;
    }
    // 0x1000D844: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x1000D848: beq         $a3, $zero, L_1000D87C
    if (ctx->r7 == 0) {
        // 0x1000D84C: addiu       $a0, $zero, 0x1770
        ctx->r4 = ADD32(0, 0X1770);
            goto L_1000D87C;
    }
    // 0x1000D84C: addiu       $a0, $zero, 0x1770
    ctx->r4 = ADD32(0, 0X1770);
    // 0x1000D850: xori        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 ^ 0XFF;
    // 0x1000D854: xor         $a2, $t6, $t0
    ctx->r6 = ctx->r14 ^ ctx->r8;
    // 0x1000D858: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x1000D85C: jal         0x1000CBF0
    // 0x1000D860: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_1000CBF0(rdram, ctx);
        goto after_0;
    // 0x1000D860: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x1000D864: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x1000D868: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
    // 0x1000D86C: jal         0x1000CBF0
    // 0x1000D870: addiu       $a1, $zero, 0x6400
    ctx->r5 = ADD32(0, 0X6400);
    func_1000CBF0(rdram, ctx);
        goto after_1;
    // 0x1000D870: addiu       $a1, $zero, 0x6400
    ctx->r5 = ADD32(0, 0X6400);
    after_1:
    // 0x1000D874: b           L_1000D918
    // 0x1000D878: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_1000D918;
    // 0x1000D878: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1000D87C:
    // 0x1000D87C: beq         $s1, $zero, L_1000D8A8
    if (ctx->r17 == 0) {
        // 0x1000D880: addiu       $a0, $zero, 0x1F4
        ctx->r4 = ADD32(0, 0X1F4);
            goto L_1000D8A8;
    }
    // 0x1000D880: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x1000D884: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x1000D888: jal         0x1000CBF0
    // 0x1000D88C: xori        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 ^ 0XFF;
    func_1000CBF0(rdram, ctx);
        goto after_2;
    // 0x1000D88C: xori        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 ^ 0XFF;
    after_2:
    // 0x1000D890: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
    // 0x1000D894: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x1000D898: jal         0x1000CBF0
    // 0x1000D89C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_1000CBF0(rdram, ctx);
        goto after_3;
    // 0x1000D89C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x1000D8A0: b           L_1000D918
    // 0x1000D8A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_1000D918;
    // 0x1000D8A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1000D8A8:
    // 0x1000D8A8: jal         0x151F2CDC
    // 0x1000D8AC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    func_151F2CDC(rdram, ctx);
        goto after_4;
    // 0x1000D8AC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    after_4:
    // 0x1000D8B0: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
    // 0x1000D8B4: bne         $v0, $ra, L_1000D904
    if (ctx->r2 != ctx->r31) {
        // 0x1000D8B8: lw          $t1, 0x2C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X2C);
            goto L_1000D904;
    }
    // 0x1000D8B8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x1000D8BC: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000D8C0: lhu         $v0, 0x27F4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X27F4);
    // 0x1000D8C4: slti        $at, $v0, 0x7D
    ctx->r1 = SIGNED(ctx->r2) < 0X7D ? 1 : 0;
    // 0x1000D8C8: bne         $at, $zero, L_1000D8D4
    if (ctx->r1 != 0) {
        // 0x1000D8CC: slti        $at, $v0, 0x81
        ctx->r1 = SIGNED(ctx->r2) < 0X81 ? 1 : 0;
            goto L_1000D8D4;
    }
    // 0x1000D8CC: slti        $at, $v0, 0x81
    ctx->r1 = SIGNED(ctx->r2) < 0X81 ? 1 : 0;
    // 0x1000D8D0: bne         $at, $zero, L_1000D904
    if (ctx->r1 != 0) {
        // 0x1000D8D4: slti        $at, $v0, 0x1C9
        ctx->r1 = SIGNED(ctx->r2) < 0X1C9 ? 1 : 0;
            goto L_1000D904;
    }
L_1000D8D4:
    // 0x1000D8D4: slti        $at, $v0, 0x1C9
    ctx->r1 = SIGNED(ctx->r2) < 0X1C9 ? 1 : 0;
    // 0x1000D8D8: beq         $at, $zero, L_1000D904
    if (ctx->r1 == 0) {
        // 0x1000D8DC: addiu       $at, $zero, 0x170
        ctx->r1 = ADD32(0, 0X170);
            goto L_1000D904;
    }
    // 0x1000D8DC: addiu       $at, $zero, 0x170
    ctx->r1 = ADD32(0, 0X170);
    // 0x1000D8E0: beq         $v0, $at, L_1000D904
    if (ctx->r2 == ctx->r1) {
        // 0x1000D8E4: addiu       $at, $zero, 0x171
        ctx->r1 = ADD32(0, 0X171);
            goto L_1000D904;
    }
    // 0x1000D8E4: addiu       $at, $zero, 0x171
    ctx->r1 = ADD32(0, 0X171);
    // 0x1000D8E8: beq         $v0, $at, L_1000D904
    if (ctx->r2 == ctx->r1) {
        // 0x1000D8EC: addiu       $a0, $zero, 0x36B0
        ctx->r4 = ADD32(0, 0X36B0);
            goto L_1000D904;
    }
    // 0x1000D8EC: addiu       $a0, $zero, 0x36B0
    ctx->r4 = ADD32(0, 0X36B0);
    // 0x1000D8F0: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x1000D8F4: jal         0x1000CBF0
    // 0x1000D8F8: xori        $a2, $t1, 0xFF
    ctx->r6 = ctx->r9 ^ 0XFF;
    func_1000CBF0(rdram, ctx);
        goto after_5;
    // 0x1000D8F8: xori        $a2, $t1, 0xFF
    ctx->r6 = ctx->r9 ^ 0XFF;
    after_5:
    // 0x1000D8FC: b           L_1000D918
    // 0x1000D900: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_1000D918;
    // 0x1000D900: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1000D904:
    // 0x1000D904: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
    // 0x1000D908: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x1000D90C: jal         0x1000CBF0
    // 0x1000D910: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_1000CBF0(rdram, ctx);
        goto after_6;
    // 0x1000D910: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_6:
    // 0x1000D914: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1000D918:
    // 0x1000D918: jal         0x1000CEAC
    // 0x1000D91C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1000CEAC(rdram, ctx);
        goto after_7;
    // 0x1000D91C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x1000D920: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1000D924: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x1000D928: bne         $at, $zero, L_1000D918
    if (ctx->r1 != 0) {
        // 0x1000D92C: nop
    
            goto L_1000D918;
    }
    // 0x1000D92C: nop

    // 0x1000D930: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1000D934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_1000D938:
    // 0x1000D938: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x1000D93C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x1000D940: jal         0x1000D2F8
    // 0x1000D944: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    func_1000D2F8(rdram, ctx);
        goto after_8;
    // 0x1000D944: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    after_8:
    // 0x1000D948: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1000D94C: bnel        $s0, $s2, L_1000D938
    if (ctx->r16 != ctx->r18) {
        // 0x1000D950: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1000D938;
    }
    goto skip_1;
    // 0x1000D950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_1000D954:
    // 0x1000D954: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1000D958: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1000D95C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1000D960: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1000D964: jr          $ra
    // 0x1000D968: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x1000D968: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_15013DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15013DE8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x15013DEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15013DF0: lbu         $t6, 0x16($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X16);
    // 0x15013DF4: lh          $t8, 0x6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X6);
    // 0x15013DF8: lh          $t9, 0x8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8);
    // 0x15013DFC: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x15013E00: sb          $t7, 0x16($a0)
    MEM_B(0X16, ctx->r4) = ctx->r15;
    // 0x15013E04: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013E08: lwc1        $f8, 0x6654($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6654);
    // 0x15013E0C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15013E10: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013E14: lwc1        $f18, 0x6658($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6658);
    // 0x15013E18: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15013E1C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013E20: lwc1        $f4, 0x665C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X665C);
    // 0x15013E24: addiu       $t0, $zero, 0x6231
    ctx->r8 = ADD32(0, 0X6231);
    // 0x15013E28: addiu       $t1, $zero, 0x1A4D
    ctx->r9 = ADD32(0, 0X1A4D);
    // 0x15013E2C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15013E30: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15013E34: sh          $t1, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r9;
    // 0x15013E38: sh          $t0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r8;
    // 0x15013E3C: sb          $zero, 0x56($sp)
    MEM_B(0X56, ctx->r29) = 0;
    // 0x15013E40: sb          $zero, 0x57($sp)
    MEM_B(0X57, ctx->r29) = 0;
    // 0x15013E44: sb          $zero, 0x58($sp)
    MEM_B(0X58, ctx->r29) = 0;
    // 0x15013E48: sb          $t2, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r10;
    // 0x15013E4C: sh          $zero, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = 0;
    // 0x15013E50: sb          $t3, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r11;
    // 0x15013E54: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x15013E58: sb          $zero, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = 0;
    // 0x15013E5C: sb          $zero, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = 0;
    // 0x15013E60: sb          $zero, 0x64($sp)
    MEM_B(0X64, ctx->r29) = 0;
    // 0x15013E64: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x15013E68: lh          $t4, 0x0($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X0);
    // 0x15013E6C: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15013E70: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x15013E74: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x15013E78: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013E7C: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x15013E80: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15013E84: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15013E88: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15013E8C: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x15013E90: lh          $t5, 0x2($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X2);
    // 0x15013E94: lwc1        $f8, 0x6660($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6660);
    // 0x15013E98: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013E9C: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x15013EA0: mul.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15013EA4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15013EA8: lwc1        $f10, 0x6664($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6664);
    // 0x15013EAC: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x15013EB0: lh          $t6, 0x4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X4);
    // 0x15013EB4: sh          $t7, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r15;
    // 0x15013EB8: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x15013EBC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x15013EC0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x15013EC4: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x15013EC8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15013ECC: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x15013ED0: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x15013ED4: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x15013ED8: jal         0x150ADA20
    // 0x15013EDC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15013EDC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x15013EE0: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x15013EE4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15013EE8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013EEC: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15013EF0: lwc1        $f16, 0x6668($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6668);
    // 0x15013EF4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013EF8: lwc1        $f4, 0x666C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X666C);
    // 0x15013EFC: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x15013F00: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013F04: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15013F08: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15013F0C: lwc1        $f8, 0x6670($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6670);
    // 0x15013F10: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013F14: lwc1        $f16, 0x6674($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6674);
    // 0x15013F18: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15013F1C: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x15013F20: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013F24: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15013F28: lwc1        $f4, 0x6678($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6678);
    // 0x15013F2C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x15013F30: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x15013F34: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15013F38: mfhi        $t8
    ctx->r24 = hi;
    // 0x15013F3C: addiu       $t9, $t8, 0xC8
    ctx->r25 = ADD32(ctx->r24, 0XC8);
    // 0x15013F40: sb          $t9, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r25;
    // 0x15013F44: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x15013F48: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x15013F4C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x15013F50: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x15013F54: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x15013F58: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x15013F5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15013F60: beq         $t0, $zero, L_15013F70
    if (ctx->r8 == 0) {
        // 0x15013F64: addiu       $t1, $zero, 0xFF
        ctx->r9 = ADD32(0, 0XFF);
            goto L_15013F70;
    }
    // 0x15013F64: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15013F68: b           L_15013F74
    // 0x15013F6C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_15013F74;
    // 0x15013F6C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_15013F70:
    // 0x15013F70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15013F74:
    // 0x15013F74: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15013F78: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15013F7C: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x15013F80: jal         0x15149550
    // 0x15013F84: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_15149550(rdram, ctx);
        goto after_1;
    // 0x15013F84: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x15013F88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15013F8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15013F90: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x15013F94: jr          $ra
    // 0x15013F98: nop

    return;
    return;
    // 0x15013F98: nop

;}
RECOMP_FUNC void func_1500727C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500727C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15007280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15007284: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007288: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1500728C: addiu       $a2, $a2, -0x1D10
    ctx->r6 = ADD32(ctx->r6, -0X1D10);
    // 0x15007290: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    // 0x15007294: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    // 0x15007298: jal         0x151DD3A0
    // 0x1500729C: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_151DD3A0(rdram, ctx);
        goto after_0;
    // 0x1500729C: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x150072A0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150072A4: lbu         $v0, -0x1D0E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1D0E);
    // 0x150072A8: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150072AC: lbu         $t8, -0x1D0D($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1D0D);
    // 0x150072B0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x150072B4: addiu       $t7, $t6, 0xCC
    ctx->r15 = ADD32(ctx->r14, 0XCC);
    // 0x150072B8: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x150072BC: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x150072C0: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x150072C4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150072C8: addiu       $a0, $a0, -0x1D0C
    ctx->r4 = ADD32(ctx->r4, -0X1D0C);
    // 0x150072CC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x150072D0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x150072D4: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
L_150072D8:
    // 0x150072D8: lbu         $t1, 0x0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X0);
    // 0x150072DC: lbu         $t5, 0x1($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X1);
    // 0x150072E0: andi        $t2, $v1, 0x3
    ctx->r10 = ctx->r3 & 0X3;
    // 0x150072E4: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x150072E8: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x150072EC: sllv        $t3, $t1, $t2
    ctx->r11 = S32(ctx->r9 << (ctx->r10 & 31));
    // 0x150072F0: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x150072F4: sllv        $t8, $t5, $t7
    ctx->r24 = S32(ctx->r13 << (ctx->r15 & 31));
    // 0x150072F8: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x150072FC: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x15007300: addiu       $t1, $v1, 0x2
    ctx->r9 = ADD32(ctx->r3, 0X2);
    // 0x15007304: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x15007308: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x1500730C: addiu       $t5, $v1, 0x3
    ctx->r13 = ADD32(ctx->r3, 0X3);
    // 0x15007310: andi        $t7, $t5, 0x3
    ctx->r15 = ctx->r13 & 0X3;
    // 0x15007314: sllv        $t3, $t0, $t2
    ctx->r11 = S32(ctx->r8 << (ctx->r10 & 31));
    // 0x15007318: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x1500731C: sllv        $t8, $t6, $t7
    ctx->r24 = S32(ctx->r14 << (ctx->r15 & 31));
    // 0x15007320: addu        $v0, $t4, $t8
    ctx->r2 = ADD32(ctx->r12, ctx->r24);
    // 0x15007324: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x15007328: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1500732C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x15007330: bne         $v1, $a1, L_150072D8
    if (ctx->r3 != ctx->r5) {
        // 0x15007334: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_150072D8;
    }
    // 0x15007334: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x15007338: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1500733C: lhu         $t1, -0x1D10($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1D10);
    // 0x15007340: beql        $t9, $t1, L_15007354
    if (ctx->r25 == ctx->r9) {
        // 0x15007344: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15007354;
    }
    goto skip_0;
    // 0x15007344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15007348: jal         0x15007168
    // 0x1500734C: nop

    func_15007168(rdram, ctx);
        goto after_1;
    // 0x1500734C: nop

    after_1:
    // 0x15007350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15007354:
    // 0x15007354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15007358: jr          $ra
    // 0x1500735C: nop

    return;
    return;
    // 0x1500735C: nop

;}
RECOMP_FUNC void func_150076BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150076BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150076C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150076C4: bgez        $a0, L_150076D8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x150076C8: nop
    
            goto L_150076D8;
    }
    // 0x150076C8: nop

    // 0x150076CC: jal         0x150064E0
    // 0x150076D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150064E0(rdram, ctx);
        goto after_0;
    // 0x150076D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150076D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_150076D8:
    // 0x150076D8: bltz        $a0, L_15007708
    if (SIGNED(ctx->r4) < 0) {
        // 0x150076DC: slti        $at, $a0, 0x4
        ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
            goto L_15007708;
    }
    // 0x150076DC: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x150076E0: beq         $at, $zero, L_15007708
    if (ctx->r1 == 0) {
        // 0x150076E4: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_15007708;
    }
    // 0x150076E4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150076E8: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x150076EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150076F0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x150076F4: bnel        $t6, $zero, L_1500770C
    if (ctx->r14 != 0) {
        // 0x150076F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1500770C;
    }
    goto skip_0;
    // 0x150076F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150076FC: sb          $t7, 0x2BB4($at)
    MEM_B(0X2BB4, ctx->r1) = ctx->r15;
    // 0x15007700: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007704: sb          $a0, -0x1C14($at)
    MEM_B(-0X1C14, ctx->r1) = ctx->r4;
L_15007708:
    // 0x15007708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1500770C:
    // 0x1500770C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15007710: jr          $ra
    // 0x15007714: nop

    return;
    return;
    // 0x15007714: nop

;}
RECOMP_FUNC void func_1000480C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000480C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x10004810: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x10004814: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x10004818: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000481C: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x10004820: addiu       $t1, $t1, -0x5A8E
    ctx->r9 = ADD32(ctx->r9, -0X5A8E);
    // 0x10004824: addiu       $v0, $v0, -0x5A8D
    ctx->r2 = ADD32(ctx->r2, -0X5A8D);
    // 0x10004828: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x1000482C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x10004830: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10004834: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x10004838: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1000483C: sb          $t6, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r14;
    // 0x10004840: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x10004844: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x10004848: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x1000484C: and         $t7, $s0, $at
    ctx->r15 = ctx->r16 & ctx->r1;
    // 0x10004850: beq         $t8, $zero, L_10004864
    if (ctx->r24 == 0) {
        // 0x10004854: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_10004864;
    }
    // 0x10004854: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x10004858: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
L_1000485C:
    // 0x1000485C: bnel        $t9, $zero, L_1000485C
    if (ctx->r25 != 0) {
        // 0x10004860: lbu         $t9, 0x0($v0)
        ctx->r25 = MEM_BU(ctx->r2, 0X0);
            goto L_1000485C;
    }
    goto skip_0;
    // 0x10004860: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    skip_0:
L_10004864:
    // 0x10004864: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x10004868: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x1000486C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x10004870: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x10004874: lui         $a3, 0xA000
    ctx->r7 = S32(0XA000 << 16);
    // 0x10004878: andi        $t2, $v0, 0x3
    ctx->r10 = ctx->r2 & 0X3;
    // 0x1000487C: beq         $t2, $zero, L_10004894
    if (ctx->r10 == 0) {
        // 0x10004880: addiu       $a2, $s0, -0x2
        ctx->r6 = ADD32(ctx->r16, -0X2);
            goto L_10004894;
    }
    // 0x10004880: addiu       $a2, $s0, -0x2
    ctx->r6 = ADD32(ctx->r16, -0X2);
    // 0x10004884: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_10004888:
    // 0x10004888: andi        $t3, $v0, 0x3
    ctx->r11 = ctx->r2 & 0X3;
    // 0x1000488C: bnel        $t3, $zero, L_10004888
    if (ctx->r11 != 0) {
        // 0x10004890: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_10004888;
    }
    goto skip_1;
    // 0x10004890: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_1:
L_10004894:
    // 0x10004894: lw          $t4, 0x308($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X308);
    // 0x10004898: addiu       $t0, $sp, 0x38
    ctx->r8 = ADD32(ctx->r29, 0X38);
    // 0x1000489C: andi        $t3, $s0, 0x2
    ctx->r11 = ctx->r16 & 0X2;
    // 0x100048A0: or          $s1, $s1, $t4
    ctx->r17 = ctx->r17 | ctx->r12;
    // 0x100048A4: andi        $t5, $s1, 0x2
    ctx->r13 = ctx->r17 & 0X2;
    // 0x100048A8: beq         $t5, $zero, L_10004940
    if (ctx->r13 == 0) {
        // 0x100048AC: addiu       $t6, $s1, -0x2
        ctx->r14 = ADD32(ctx->r17, -0X2);
            goto L_10004940;
    }
    // 0x100048AC: addiu       $t6, $s1, -0x2
    ctx->r14 = ADD32(ctx->r17, -0X2);
    // 0x100048B0: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x100048B4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x100048B8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x100048BC: addiu       $s0, $s0, -0x2
    ctx->r16 = ADD32(ctx->r16, -0X2);
    // 0x100048C0: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x100048C4: lhu         $t9, 0x2($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X2);
    // 0x100048C8: addiu       $a2, $s0, -0x2
    ctx->r6 = ADD32(ctx->r16, -0X2);
    // 0x100048CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x100048D0: beq         $a2, $zero, L_10004910
    if (ctx->r6 == 0) {
        // 0x100048D4: sh          $t9, 0x0($t2)
        MEM_H(0X0, ctx->r10) = ctx->r25;
            goto L_10004910;
    }
    // 0x100048D4: sh          $t9, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r25;
    // 0x100048D8: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    // 0x100048DC: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_100048E0:
    // 0x100048E0: or          $t3, $a1, $a3
    ctx->r11 = ctx->r5 | ctx->r7;
    // 0x100048E4: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x100048E8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x100048EC: sltu        $at, $a0, $a2
    ctx->r1 = ctx->r4 < ctx->r6 ? 1 : 0;
    // 0x100048F0: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x100048F4: sra         $t6, $t4, 16
    ctx->r14 = S32(SIGNED(ctx->r12) >> 16);
    // 0x100048F8: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x100048FC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x10004900: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x10004904: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x10004908: bne         $at, $zero, L_100048E0
    if (ctx->r1 != 0) {
        // 0x1000490C: sh          $t8, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r24;
            goto L_100048E0;
    }
    // 0x1000490C: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_10004910:
    // 0x10004910: andi        $t9, $s0, 0x2
    ctx->r25 = ctx->r16 & 0X2;
    // 0x10004914: beq         $t9, $zero, L_100049A0
    if (ctx->r25 == 0) {
        // 0x10004918: addu        $t2, $s1, $a0
        ctx->r10 = ADD32(ctx->r17, ctx->r4);
            goto L_100049A0;
    }
    // 0x10004918: addu        $t2, $s1, $a0
    ctx->r10 = ADD32(ctx->r17, ctx->r4);
    // 0x1000491C: addiu       $t3, $t2, 0x2
    ctx->r11 = ADD32(ctx->r10, 0X2);
    // 0x10004920: or          $t4, $t3, $a3
    ctx->r12 = ctx->r11 | ctx->r7;
    // 0x10004924: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x10004928: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x1000492C: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x10004930: lhu         $t6, 0x0($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X0);
    // 0x10004934: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x10004938: b           L_100049A0
    // 0x1000493C: sh          $t6, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r14;
        goto L_100049A0;
    // 0x1000493C: sh          $t6, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r14;
L_10004940:
    // 0x10004940: beq         $a2, $zero, L_10004974
    if (ctx->r6 == 0) {
        // 0x10004944: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_10004974;
    }
    // 0x10004944: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10004948: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x1000494C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x10004950: lui         $a3, 0xA000
    ctx->r7 = S32(0XA000 << 16);
L_10004954:
    // 0x10004954: or          $t9, $v1, $a3
    ctx->r25 = ctx->r3 | ctx->r7;
    // 0x10004958: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x1000495C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x10004960: sltu        $at, $a0, $a2
    ctx->r1 = ctx->r4 < ctx->r6 ? 1 : 0;
    // 0x10004964: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x10004968: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1000496C: bne         $at, $zero, L_10004954
    if (ctx->r1 != 0) {
        // 0x10004970: sw          $t2, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r10;
            goto L_10004954;
    }
    // 0x10004970: sw          $t2, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r10;
L_10004974:
    // 0x10004974: beq         $t3, $zero, L_100049A0
    if (ctx->r11 == 0) {
        // 0x10004978: lui         $a3, 0xA000
        ctx->r7 = S32(0XA000 << 16);
            goto L_100049A0;
    }
    // 0x10004978: lui         $a3, 0xA000
    ctx->r7 = S32(0XA000 << 16);
    // 0x1000497C: addu        $t4, $a0, $s1
    ctx->r12 = ADD32(ctx->r4, ctx->r17);
    // 0x10004980: or          $t5, $t4, $a3
    ctx->r13 = ctx->r12 | ctx->r7;
    // 0x10004984: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x10004988: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x1000498C: addiu       $t0, $sp, 0x38
    ctx->r8 = ADD32(ctx->r29, 0X38);
    // 0x10004990: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x10004994: lhu         $t6, 0x0($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X0);
    // 0x10004998: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x1000499C: sh          $t6, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r14;
L_100049A0:
    // 0x100049A0: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x100049A4: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x100049A8: addiu       $t2, $t2, -0x5A8B
    ctx->r10 = ADD32(ctx->r10, -0X5A8B);
    // 0x100049AC: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x100049B0: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x100049B4: beql        $t3, $zero, L_100049C8
    if (ctx->r11 == 0) {
        // 0x100049B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_100049C8;
    }
    goto skip_2;
    // 0x100049B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x100049BC: jal         0x10022A60
    // 0x100049C0: addiu       $a0, $a0, 0x5910
    ctx->r4 = ADD32(ctx->r4, 0X5910);
    osStartThread_recomp(rdram, ctx);
        goto after_0;
    // 0x100049C0: addiu       $a0, $a0, 0x5910
    ctx->r4 = ADD32(ctx->r4, 0X5910);
    after_0:
    // 0x100049C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_100049C8:
    // 0x100049C8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x100049CC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x100049D0: jr          $ra
    // 0x100049D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x100049D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x100049D8: nop

    // 0x100049DC: nop

;}
RECOMP_FUNC void func_15086CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15086CBC: bltz        $a0, L_15086CDC
    if (SIGNED(ctx->r4) < 0) {
        // 0x15086CC0: lui         $t6, 0x8008
        ctx->r14 = S32(0X8008 << 16);
            goto L_15086CDC;
    }
    // 0x15086CC0: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x15086CC4: lh          $t6, 0x7290($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7290);
    // 0x15086CC8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15086CCC: addiu       $t0, $t0, 0x2350
    ctx->r8 = ADD32(ctx->r8, 0X2350);
    // 0x15086CD0: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15086CD4: bnel        $at, $zero, L_15086CE8
    if (ctx->r1 != 0) {
        // 0x15086CD8: lw          $t7, 0x0($t0)
        ctx->r15 = MEM_W(ctx->r8, 0X0);
            goto L_15086CE8;
    }
    goto skip_0;
    // 0x15086CD8: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    skip_0:
L_15086CDC:
    // 0x15086CDC: jr          $ra
    // 0x15086CE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15086CE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15086CE4: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
L_15086CE8:
    // 0x15086CE8: sll         $v1, $a0, 4
    ctx->r3 = S32(ctx->r4 << 4);
    // 0x15086CEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15086CF0: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x15086CF4: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x15086CF8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15086CFC: nop

    // 0x15086D00: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15086D04: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x15086D08: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x15086D0C: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x15086D10: lh          $t3, 0x2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2);
    // 0x15086D14: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x15086D18: nop

    // 0x15086D1C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15086D20: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x15086D24: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x15086D28: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x15086D2C: lh          $t6, 0x4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X4);
    // 0x15086D30: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x15086D34: nop

    // 0x15086D38: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15086D3C: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
    // 0x15086D40: jr          $ra
    // 0x15086D44: nop

    return;
    return;
    // 0x15086D44: nop

;}
RECOMP_FUNC void func_1513D594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513D594: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1513D598: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1513D59C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x1513D5A0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1513D5A4: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x1513D5A8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x1513D5AC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1513D5B0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1513D5B4: bne         $a1, $zero, L_1513D5C4
    if (ctx->r5 != 0) {
        // 0x1513D5B8: lbu         $t8, 0x53($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X53);
            goto L_1513D5C4;
    }
    // 0x1513D5B8: lbu         $t8, 0x53($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X53);
    // 0x1513D5BC: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x1513D5C0: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
L_1513D5C4:
    // 0x1513D5C4: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x1513D5C8: lbu         $t0, 0x57($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X57);
    // 0x1513D5CC: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x1513D5D0: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x1513D5D4: lbu         $t5, 0x7F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X7F);
    // 0x1513D5D8: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x1513D5DC: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x1513D5E0: addiu       $t4, $t3, 0x18
    ctx->r12 = ADD32(ctx->r11, 0X18);
    // 0x1513D5E4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x1513D5E8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1513D5EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1513D5F0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1513D5F4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1513D5F8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x1513D5FC: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x1513D600: jal         0x1513D2F0
    // 0x1513D604: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    func_1513D2F0(rdram, ctx);
        goto after_0;
    // 0x1513D604: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    after_0:
    // 0x1513D608: beq         $v0, $zero, L_1513D654
    if (ctx->r2 == 0) {
        // 0x1513D60C: sw          $v0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r2;
            goto L_1513D654;
    }
    // 0x1513D60C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x1513D610: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x1513D614: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x1513D618: lbu         $t9, 0x77($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X77);
    // 0x1513D61C: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x1513D620: lh          $a1, 0x5A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X5A);
    // 0x1513D624: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x1513D628: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x1513D62C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1513D630: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1513D634: jal         0x1513D6FC
    // 0x1513D638: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_1513D6FC(rdram, ctx);
        goto after_1;
    // 0x1513D638: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_1:
    // 0x1513D63C: bnel        $v0, $zero, L_1513D658
    if (ctx->r2 != 0) {
        // 0x1513D640: lw          $v0, 0x3C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X3C);
            goto L_1513D658;
    }
    goto skip_0;
    // 0x1513D640: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x1513D644: jal         0x1516972C
    // 0x1513D648: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x1513D648: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_2:
    // 0x1513D64C: b           L_1513D658
    // 0x1513D650: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513D658;
    // 0x1513D650: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513D654:
    // 0x1513D654: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_1513D658:
    // 0x1513D658: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1513D65C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1513D660: jr          $ra
    // 0x1513D664: nop

    return;
    return;
    // 0x1513D664: nop

;}
RECOMP_FUNC void func_151AF5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AF5C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151AF5C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151AF5C8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x151AF5CC: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x151AF5D0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x151AF5D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151AF5D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151AF5DC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x151AF5E0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x151AF5E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151AF5E8: beq         $v1, $a3, L_151AF604
    if (ctx->r3 == ctx->r7) {
        // 0x151AF5EC: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_151AF604;
    }
    // 0x151AF5EC: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x151AF5F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151AF5F4: beq         $a3, $at, L_151AF604
    if (ctx->r7 == ctx->r1) {
        // 0x151AF5F8: nop
    
            goto L_151AF604;
    }
    // 0x151AF5F8: nop

    // 0x151AF5FC: b           L_151AF6AC
    // 0x151AF600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151AF6AC;
    // 0x151AF600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151AF604:
    // 0x151AF604: bne         $v1, $v0, L_151AF618
    if (ctx->r3 != ctx->r2) {
        // 0x151AF608: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_151AF618;
    }
    // 0x151AF608: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151AF60C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151AF610: b           L_151AF61C
    // 0x151AF614: addiu       $a0, $a0, -0x5F04
    ctx->r4 = ADD32(ctx->r4, -0X5F04);
        goto L_151AF61C;
    // 0x151AF614: addiu       $a0, $a0, -0x5F04
    ctx->r4 = ADD32(ctx->r4, -0X5F04);
L_151AF618:
    // 0x151AF618: addiu       $a0, $a0, -0x5F10
    ctx->r4 = ADD32(ctx->r4, -0X5F10);
L_151AF61C:
    // 0x151AF61C: bne         $v1, $v0, L_151AF634
    if (ctx->r3 != ctx->r2) {
        // 0x151AF620: lw          $t8, 0x3C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X3C);
            goto L_151AF634;
    }
    // 0x151AF620: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x151AF624: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x151AF628: lw          $a2, 0x1D4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X1D4);
    // 0x151AF62C: b           L_151AF63C
    // 0x151AF630: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
        goto L_151AF63C;
    // 0x151AF630: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
L_151AF634:
    // 0x151AF634: lw          $a2, 0x1D4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X1D4);
    // 0x151AF638: addiu       $a2, $a2, 0x640
    ctx->r6 = ADD32(ctx->r6, 0X640);
L_151AF63C:
    // 0x151AF63C: jal         0x15143134
    // 0x151AF640: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x151AF640: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x151AF644: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x151AF648: bnel        $a0, $zero, L_151AF65C
    if (ctx->r4 != 0) {
        // 0x151AF64C: lwc1        $f4, 0x0($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
            goto L_151AF65C;
    }
    goto skip_0;
    // 0x151AF64C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x151AF650: b           L_151AF6AC
    // 0x151AF654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151AF6AC;
    // 0x151AF654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151AF658: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
L_151AF65C:
    // 0x151AF65C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151AF660: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AF664: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x151AF668: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151AF66C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x151AF670: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AF674: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x151AF678: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151AF67C: jal         0x1504715C
    // 0x151AF680: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x151AF680: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x151AF684: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x151AF688: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AF68C: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151AF690: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x151AF694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151AF698: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x151AF69C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x151AF6A0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x151AF6A4: jal         0x15046C80
    // 0x151AF6A8: nop

    func_15046C80(rdram, ctx);
        goto after_2;
    // 0x151AF6A8: nop

    after_2:
L_151AF6AC:
    // 0x151AF6AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151AF6B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151AF6B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151AF6B8: jr          $ra
    // 0x151AF6BC: nop

    return;
    return;
    // 0x151AF6BC: nop

;}
RECOMP_FUNC void func_1506B984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506B988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506B98C: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    // 0x1506B990: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x1506B994: jal         0x1506B100
    // 0x1506B998: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_1506B100(rdram, ctx);
        goto after_0;
    // 0x1506B998: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
    // 0x1506B99C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506B9A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506B9A4: jr          $ra
    // 0x1506B9A8: nop

    return;
    return;
    // 0x1506B9A8: nop

;}
RECOMP_FUNC void func_150FC614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FC614: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x150FC618: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x150FC61C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150FC620: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150FC624: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x150FC628: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150FC62C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150FC630: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150FC634: lw          $s1, 0x28($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X28);
    // 0x150FC638: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x150FC63C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x150FC640: beq         $t6, $zero, L_150FC680
    if (ctx->r14 == 0) {
        // 0x150FC644: nop
    
            goto L_150FC680;
    }
    // 0x150FC644: nop

    // 0x150FC648: lbu         $t7, 0x4($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X4);
    // 0x150FC64C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150FC650: addiu       $s0, $s2, 0x28
    ctx->r16 = ADD32(ctx->r18, 0X28);
    // 0x150FC654: beq         $t7, $at, L_150FC680
    if (ctx->r15 == ctx->r1) {
        // 0x150FC658: nop
    
            goto L_150FC680;
    }
    // 0x150FC658: nop

    // 0x150FC65C: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    // 0x150FC660: lbu         $t9, 0x3B($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X3B);
    // 0x150FC664: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150FC668: bne         $t8, $t9, L_150FC680
    if (ctx->r24 != ctx->r25) {
        // 0x150FC66C: nop
    
            goto L_150FC680;
    }
    // 0x150FC66C: nop

    // 0x150FC670: lbu         $t0, 0x35EA($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X35EA);
    // 0x150FC674: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150FC678: bnel        $t0, $at, L_150FC68C
    if (ctx->r8 != ctx->r1) {
        // 0x150FC67C: lbu         $t2, 0x1D($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X1D);
            goto L_150FC68C;
    }
    goto skip_0;
    // 0x150FC67C: lbu         $t2, 0x1D($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1D);
    skip_0:
L_150FC680:
    // 0x150FC680: b           L_150FC7F8
    // 0x150FC684: sh          $t1, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r9;
        goto L_150FC7F8;
    // 0x150FC684: sh          $t1, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r9;
    // 0x150FC688: lbu         $t2, 0x1D($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1D);
L_150FC68C:
    // 0x150FC68C: lhu         $t3, 0x84($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X84);
    // 0x150FC690: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150FC694: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150FC698: beql        $t2, $t3, L_150FC6AC
    if (ctx->r10 == ctx->r11) {
        // 0x150FC69C: lwc1        $f4, 0x8($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
            goto L_150FC6AC;
    }
    goto skip_1;
    // 0x150FC69C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    skip_1:
    // 0x150FC6A0: b           L_150FC7F8
    // 0x150FC6A4: sh          $t4, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r12;
        goto L_150FC7F8;
    // 0x150FC6A4: sh          $t4, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r12;
    // 0x150FC6A8: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
L_150FC6AC:
    // 0x150FC6AC: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150FC6B0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x150FC6B4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150FC6B8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150FC6BC: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x150FC6C0: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150FC6C4: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
    // 0x150FC6C8: nop

    // 0x150FC6CC: bc1fl       L_150FC764
    if (!c1cs) {
        // 0x150FC6D0: lb          $t1, 0x16($s0)
        ctx->r9 = MEM_B(ctx->r16, 0X16);
            goto L_150FC764;
    }
    goto skip_2;
    // 0x150FC6D0: lb          $t1, 0x16($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X16);
    skip_2:
    // 0x150FC6D4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150FC6D8: nop

    // 0x150FC6DC: lbu         $t5, 0xC($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0XC);
L_150FC6E0:
    // 0x150FC6E0: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x150FC6E4: lbu         $a3, 0xD($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XD);
    // 0x150FC6E8: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x150FC6EC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x150FC6F0: lbu         $t6, 0x1($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X1);
    // 0x150FC6F4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150FC6F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150FC6FC: jal         0x150FB8C0
    // 0x150FC700: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_150FB8C0(rdram, ctx);
        goto after_0;
    // 0x150FC700: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_0:
    // 0x150FC704: lbu         $t7, 0xC($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC);
    // 0x150FC708: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x150FC70C: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x150FC710: beq         $v1, $zero, L_150FC730
    if (ctx->r3 == 0) {
        // 0x150FC714: sb          $t8, 0xC($s0)
        MEM_B(0XC, ctx->r16) = ctx->r24;
            goto L_150FC730;
    }
    // 0x150FC714: sb          $t8, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r24;
    // 0x150FC718: lw          $v0, 0x31C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X31C);
    // 0x150FC71C: beq         $v0, $zero, L_150FC730
    if (ctx->r2 == 0) {
        // 0x150FC720: nop
    
            goto L_150FC730;
    }
    // 0x150FC720: nop

    // 0x150FC724: lh          $t9, 0x1AA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X1AA);
    // 0x150FC728: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x150FC72C: sh          $t0, 0x1AA($v0)
    MEM_H(0X1AA, ctx->r2) = ctx->r8;
L_150FC730:
    // 0x150FC730: jal         0x150ADA68
    // 0x150FC734: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150FC734: nop

    after_1:
    // 0x150FC738: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150FC73C: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150FC740: add.s       $f4, $f20, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x150FC744: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x150FC748: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x150FC74C: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150FC750: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
    // 0x150FC754: nop

    // 0x150FC758: bc1tl       L_150FC6E0
    if (c1cs) {
        // 0x150FC75C: lbu         $t5, 0xC($s2)
        ctx->r13 = MEM_BU(ctx->r18, 0XC);
            goto L_150FC6E0;
    }
    goto skip_3;
    // 0x150FC75C: lbu         $t5, 0xC($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0XC);
    skip_3:
    // 0x150FC760: lb          $t1, 0x16($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X16);
L_150FC764:
    // 0x150FC764: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150FC768: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x150FC76C: beql        $t1, $at, L_150FC7FC
    if (ctx->r9 == ctx->r1) {
        // 0x150FC770: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150FC7FC;
    }
    goto skip_4;
    // 0x150FC770: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_4:
    // 0x150FC774: lh          $t2, 0x14($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X14);
    // 0x150FC778: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x150FC77C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150FC780: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x150FC784: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
    // 0x150FC788: lh          $t5, 0x14($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X14);
    // 0x150FC78C: bgezl       $t5, L_150FC7FC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x150FC790: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150FC7FC;
    }
    goto skip_5;
    // 0x150FC790: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_5:
    // 0x150FC794: jal         0x150ADA20
    // 0x150FC798: sb          $t6, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150FC798: sb          $t6, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r14;
    after_2:
    // 0x150FC79C: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x150FC7A0: sh          $t7, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r15;
    // 0x150FC7A4: lb          $t8, 0x16($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X16);
    // 0x150FC7A8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150FC7AC: sllv        $t0, $t9, $t8
    ctx->r8 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x150FC7B0: jal         0x150ADA20
    // 0x150FC7B4: sb          $t0, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150FC7B4: sb          $t0, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r8;
    after_3:
    // 0x150FC7B8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150FC7BC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150FC7C0: mfhi        $t1
    ctx->r9 = hi;
    // 0x150FC7C4: addiu       $t2, $t1, 0x3
    ctx->r10 = ADD32(ctx->r9, 0X3);
    // 0x150FC7C8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150FC7CC: sb          $t2, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r10;
    // 0x150FC7D0: sb          $t3, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r11;
    // 0x150FC7D4: lbu         $a3, 0x1($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X1);
    // 0x150FC7D8: lbu         $a2, 0xC($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0XC);
    // 0x150FC7DC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x150FC7E0: jal         0x151D8868
    // 0x150FC7E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151D8868(rdram, ctx);
        goto after_4;
    // 0x150FC7E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x150FC7E8: jal         0x150ADA20
    // 0x150FC7EC: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150FC7EC: nop

    after_5:
    // 0x150FC7F0: addiu       $t4, $zero, 0xFA
    ctx->r12 = ADD32(0, 0XFA);
    // 0x150FC7F4: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
L_150FC7F8:
    // 0x150FC7F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_150FC7FC:
    // 0x150FC7FC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150FC800: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150FC804: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150FC808: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x150FC80C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x150FC810: jr          $ra
    // 0x150FC814: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x150FC814: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_1503F2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503F2B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1503F2B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1503F2B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1503F2BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1503F2C0: jal         0x1503ECA0
    // 0x1503F2C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1503ECA0(rdram, ctx);
        goto after_0;
    // 0x1503F2C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x1503F2C8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1503F2CC: addiu       $t7, $t7, 0x6660
    ctx->r15 = ADD32(ctx->r15, 0X6660);
    // 0x1503F2D0: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x1503F2D4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1503F2D8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1503F2DC: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x1503F2E0: lh          $t8, 0xC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC);
    // 0x1503F2E4: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x1503F2E8: sh          $t0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r8;
    // 0x1503F2EC: lh          $t1, 0xC($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XC);
    // 0x1503F2F0: bgtzl       $t1, L_1503F3F4
    if (SIGNED(ctx->r9) > 0) {
        // 0x1503F2F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1503F3F4;
    }
    goto skip_0;
    // 0x1503F2F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1503F2F8: jal         0x1503E260
    // 0x1503F2FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1503E260(rdram, ctx);
        goto after_1;
    // 0x1503F2FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x1503F300: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1503F304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1503F308: jal         0x1503EF4C
    // 0x1503F30C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1503EF4C(rdram, ctx);
        goto after_2;
    // 0x1503F30C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x1503F310: beq         $v0, $zero, L_1503F354
    if (ctx->r2 == 0) {
        // 0x1503F314: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_1503F354;
    }
    // 0x1503F314: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1503F318: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x1503F31C: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x1503F320: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1503F324: addu        $t2, $t2, $s0
    ctx->r10 = ADD32(ctx->r10, ctx->r16);
    // 0x1503F328: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1503F32C: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x1503F330: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1503F334: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x1503F338: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1503F33C: addiu       $t3, $t3, -0x3D30
    ctx->r11 = ADD32(ctx->r11, -0X3D30);
    // 0x1503F340: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1503F344: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x1503F348: lw          $t4, 0x94($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X94);
    // 0x1503F34C: ori         $t5, $t4, 0x8
    ctx->r13 = ctx->r12 | 0X8;
    // 0x1503F350: sw          $t5, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r13;
L_1503F354:
    // 0x1503F354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1503F358: jal         0x1503EF4C
    // 0x1503F35C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1503EF4C(rdram, ctx);
        goto after_3;
    // 0x1503F35C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x1503F360: beq         $v0, $zero, L_1503F3A4
    if (ctx->r2 == 0) {
        // 0x1503F364: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_1503F3A4;
    }
    // 0x1503F364: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1503F368: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x1503F36C: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x1503F370: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503F374: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x1503F378: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503F37C: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x1503F380: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503F384: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x1503F388: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1503F38C: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1503F390: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503F394: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1503F398: lw          $t8, 0x94($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X94);
    // 0x1503F39C: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x1503F3A0: sw          $t9, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r25;
L_1503F3A4:
    // 0x1503F3A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1503F3A8: jal         0x1503EF4C
    // 0x1503F3AC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1503EF4C(rdram, ctx);
        goto after_4;
    // 0x1503F3AC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x1503F3B0: beq         $v0, $zero, L_1503F3F0
    if (ctx->r2 == 0) {
        // 0x1503F3B4: sll         $t0, $s0, 2
        ctx->r8 = S32(ctx->r16 << 2);
            goto L_1503F3F0;
    }
    // 0x1503F3B4: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x1503F3B8: subu        $t0, $t0, $s0
    ctx->r8 = SUB32(ctx->r8, ctx->r16);
    // 0x1503F3BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1503F3C0: addu        $t0, $t0, $s0
    ctx->r8 = ADD32(ctx->r8, ctx->r16);
    // 0x1503F3C4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1503F3C8: subu        $t0, $t0, $s0
    ctx->r8 = SUB32(ctx->r8, ctx->r16);
    // 0x1503F3CC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1503F3D0: subu        $t0, $t0, $s0
    ctx->r8 = SUB32(ctx->r8, ctx->r16);
    // 0x1503F3D4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1503F3D8: addiu       $t1, $t1, -0x3D30
    ctx->r9 = ADD32(ctx->r9, -0X3D30);
    // 0x1503F3DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1503F3E0: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x1503F3E4: lw          $t2, 0x94($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X94);
    // 0x1503F3E8: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x1503F3EC: sw          $t3, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r11;
L_1503F3F0:
    // 0x1503F3F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1503F3F4:
    // 0x1503F3F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1503F3F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1503F3FC: jr          $ra
    // 0x1503F400: nop

    return;
    return;
    // 0x1503F400: nop

;}
RECOMP_FUNC void tanf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504A5E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1504A5E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1504A5E8: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x1504A5EC: jal         0x15047D60
    // 0x1504A5F0: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x1504A5F0: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x1504A5F4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x1504A5F8: jal         0x15047C00
    // 0x1504A5FC: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x1504A5FC: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x1504A600: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1504A604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1504A608: div.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1504A60C: jr          $ra
    // 0x1504A610: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1504A610: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_15163704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15163704: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15163708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516370C: lwc1        $f12, 0x20($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15163710: jal         0x15047D60
    // 0x15163714: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x15163714: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x15163718: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1516371C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15163720: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15163724: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x15163728: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1516372C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15163730: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15163734: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15163738: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x1516373C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15163740: nop

    // 0x15163744: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x15163748: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x1516374C: nop

    // 0x15163750: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x15163754: beql        $t7, $zero, L_151637A4
    if (ctx->r15 == 0) {
        // 0x15163758: mfc1        $t7, $f16
        ctx->r15 = (int32_t)ctx->f16.u32l;
            goto L_151637A4;
    }
    goto skip_0;
    // 0x15163758: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x1516375C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15163760: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15163764: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15163768: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x1516376C: nop

    // 0x15163770: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x15163774: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15163778: nop

    // 0x1516377C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x15163780: bne         $t7, $zero, L_15163798
    if (ctx->r15 != 0) {
        // 0x15163784: nop
    
            goto L_15163798;
    }
    // 0x15163784: nop

    // 0x15163788: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x1516378C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15163790: b           L_151637B0
    // 0x15163794: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_151637B0;
    // 0x15163794: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_15163798:
    // 0x15163798: b           L_151637B0
    // 0x1516379C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_151637B0;
    // 0x1516379C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151637A0: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
L_151637A4:
    // 0x151637A4: nop

    // 0x151637A8: bltz        $t7, L_15163798
    if (SIGNED(ctx->r15) < 0) {
        // 0x151637AC: nop
    
            goto L_15163798;
    }
    // 0x151637AC: nop

L_151637B0:
    // 0x151637B0: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x151637B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151637B8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x151637BC: sb          $t7, 0x2F($t8)
    MEM_B(0X2F, ctx->r24) = ctx->r15;
    // 0x151637C0: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151637C4: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151637C8: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151637CC: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x151637D0: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151637D4: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x151637D8: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151637DC: jal         0x15144B68
    // 0x151637E0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_15144B68(rdram, ctx);
        goto after_1;
    // 0x151637E0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x151637E4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151637E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151637EC: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x151637F0: lwc1        $f16, 0x6B04($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6B04);
    // 0x151637F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151637F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151637FC: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x15163800: nop

    // 0x15163804: bc1f        L_15163814
    if (!c1cs) {
        // 0x15163808: nop
    
            goto L_15163814;
    }
    // 0x15163808: nop

    // 0x1516380C: b           L_15163814
    // 0x15163810: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15163814;
    // 0x15163810: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15163814:
    // 0x15163814: jr          $ra
    // 0x15163818: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15163818: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1515C534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515C534: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1515C538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515C53C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1515C540: lw          $a1, 0x98($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X98);
    // 0x1515C544: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1515C548: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1515C54C: lb          $v0, 0x39($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X39);
    // 0x1515C550: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1515C554: beq         $v0, $at, L_1515C588
    if (ctx->r2 == ctx->r1) {
        // 0x1515C558: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_1515C588;
    }
    // 0x1515C558: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1515C55C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x1515C560: lw          $t9, -0x4F7C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4F7C);
    // 0x1515C564: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1515C568: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1515C56C: jalr        $t9
    // 0x1515C570: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1515C570: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x1515C574: sltiu       $a3, $v0, 0x1
    ctx->r7 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x1515C578: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x1515C57C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x1515C580: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x1515C584: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_1515C588:
    // 0x1515C588: bne         $a3, $zero, L_1515C6D8
    if (ctx->r7 != 0) {
        // 0x1515C58C: nop
    
            goto L_1515C6D8;
    }
    // 0x1515C58C: nop

    // 0x1515C590: lbu         $a0, 0x14($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X14);
    // 0x1515C594: andi        $t8, $a0, 0x4
    ctx->r24 = ctx->r4 & 0X4;
    // 0x1515C598: beql        $t8, $zero, L_1515C5DC
    if (ctx->r24 == 0) {
        // 0x1515C59C: andi        $t3, $a0, 0x8
        ctx->r11 = ctx->r4 & 0X8;
            goto L_1515C5DC;
    }
    goto skip_0;
    // 0x1515C59C: andi        $t3, $a0, 0x8
    ctx->r11 = ctx->r4 & 0X8;
    skip_0:
    // 0x1515C5A0: lh          $v0, 0x1C($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X1C);
    // 0x1515C5A4: lh          $t0, 0x2C($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X2C);
    // 0x1515C5A8: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1515C5AC: beql        $at, $zero, L_1515C5DC
    if (ctx->r1 == 0) {
        // 0x1515C5B0: andi        $t3, $a0, 0x8
        ctx->r11 = ctx->r4 & 0X8;
            goto L_1515C5DC;
    }
    goto skip_1;
    // 0x1515C5B0: andi        $t3, $a0, 0x8
    ctx->r11 = ctx->r4 & 0X8;
    skip_1:
    // 0x1515C5B4: lh          $t1, 0x2E($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X2E);
    // 0x1515C5B8: lbu         $t2, 0x1A($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X1A);
    // 0x1515C5BC: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515C5C0: mflo        $v1
    ctx->r3 = lo;
    // 0x1515C5C4: slt         $at, $v1, $t2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1515C5C8: beql        $at, $zero, L_1515C5DC
    if (ctx->r1 == 0) {
        // 0x1515C5CC: andi        $t3, $a0, 0x8
        ctx->r11 = ctx->r4 & 0X8;
            goto L_1515C5DC;
    }
    goto skip_2;
    // 0x1515C5CC: andi        $t3, $a0, 0x8
    ctx->r11 = ctx->r4 & 0X8;
    skip_2:
    // 0x1515C5D0: sb          $v1, 0x1A($a1)
    MEM_B(0X1A, ctx->r5) = ctx->r3;
    // 0x1515C5D4: lbu         $a0, 0x14($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X14);
    // 0x1515C5D8: andi        $t3, $a0, 0x8
    ctx->r11 = ctx->r4 & 0X8;
L_1515C5DC:
    // 0x1515C5DC: beq         $t3, $zero, L_1515C6D8
    if (ctx->r11 == 0) {
        // 0x1515C5E0: nop
    
            goto L_1515C6D8;
    }
    // 0x1515C5E0: nop

    // 0x1515C5E4: lh          $t4, 0x1C($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X1C);
    // 0x1515C5E8: lh          $t5, 0x30($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X30);
    // 0x1515C5EC: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x1515C5F0: beq         $at, $zero, L_1515C6D8
    if (ctx->r1 == 0) {
        // 0x1515C5F4: nop
    
            goto L_1515C6D8;
    }
    // 0x1515C5F4: nop

    // 0x1515C5F8: lbu         $t6, 0x32($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X32);
    // 0x1515C5FC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1515C600: bne         $t6, $zero, L_1515C6D8
    if (ctx->r14 != 0) {
        // 0x1515C604: nop
    
            goto L_1515C6D8;
    }
    // 0x1515C604: nop

    // 0x1515C608: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x1515C60C: beq         $v0, $zero, L_1515C6D8
    if (ctx->r2 == 0) {
        // 0x1515C610: andi        $a0, $v0, 0x3
        ctx->r4 = ctx->r2 & 0X3;
            goto L_1515C6D8;
    }
    // 0x1515C610: andi        $a0, $v0, 0x3
    ctx->r4 = ctx->r2 & 0X3;
    // 0x1515C614: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x1515C618: beq         $a0, $zero, L_1515C65C
    if (ctx->r4 == 0) {
        // 0x1515C61C: addu        $v1, $a0, $v0
        ctx->r3 = ADD32(ctx->r4, ctx->r2);
            goto L_1515C65C;
    }
    // 0x1515C61C: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x1515C620: lwc1        $f0, 0x34($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X34);
    // 0x1515C624: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1515C628: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1515C62C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1515C630: beql        $v1, $v0, L_1515C654
    if (ctx->r3 == ctx->r2) {
        // 0x1515C634: swc1        $f18, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
            goto L_1515C654;
    }
    goto skip_3;
    // 0x1515C634: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    skip_3:
    // 0x1515C638: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
L_1515C63C:
    // 0x1515C63C: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1515C640: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1515C644: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1515C648: bnel        $v1, $v0, L_1515C63C
    if (ctx->r3 != ctx->r2) {
        // 0x1515C64C: swc1        $f18, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
            goto L_1515C63C;
    }
    goto skip_4;
    // 0x1515C64C: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    skip_4:
    // 0x1515C650: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
L_1515C654:
    // 0x1515C654: beq         $v0, $zero, L_1515C6D8
    if (ctx->r2 == 0) {
        // 0x1515C658: nop
    
            goto L_1515C6D8;
    }
    // 0x1515C658: nop

L_1515C65C:
    // 0x1515C65C: lwc1        $f0, 0x34($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X34);
    // 0x1515C660: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1515C664: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x1515C668: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1515C66C: beql        $v0, $zero, L_1515C6B4
    if (ctx->r2 == 0) {
        // 0x1515C670: swc1        $f18, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
            goto L_1515C6B4;
    }
    goto skip_5;
    // 0x1515C670: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    skip_5:
    // 0x1515C674: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
L_1515C678:
    // 0x1515C678: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1515C67C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x1515C680: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1515C684: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x1515C688: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1515C68C: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1515C690: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x1515C694: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1515C698: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1515C69C: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x1515C6A0: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1515C6A4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1515C6A8: bnel        $v0, $zero, L_1515C678
    if (ctx->r2 != 0) {
        // 0x1515C6AC: swc1        $f18, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
            goto L_1515C678;
    }
    goto skip_6;
    // 0x1515C6AC: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    skip_6:
    // 0x1515C6B0: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
L_1515C6B4:
    // 0x1515C6B4: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1515C6B8: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1515C6BC: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x1515C6C0: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1515C6C4: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1515C6C8: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x1515C6CC: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1515C6D0: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1515C6D4: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
L_1515C6D8:
    // 0x1515C6D8: beq         $a3, $zero, L_1515C6E8
    if (ctx->r7 == 0) {
        // 0x1515C6DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1515C6E8;
    }
    // 0x1515C6DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515C6E0: b           L_1515C6EC
    // 0x1515C6E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1515C6EC;
    // 0x1515C6E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1515C6E8:
    // 0x1515C6E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1515C6EC:
    // 0x1515C6EC: jr          $ra
    // 0x1515C6F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1515C6F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_151337C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151337C0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151337C4: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x151337C8: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x151337CC: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151337D0: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151337D4: lwc1        $f12, 0x5C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x151337D8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151337DC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151337E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151337E4: lwc1        $f2, 0x48($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X48);
    // 0x151337E8: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151337EC: swc1        $f16, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f16.u32l;
    // 0x151337F0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151337F4: mul.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x151337F8: nop

    // 0x151337FC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15133800: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15133804: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15133808: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x1513380C: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x15133810: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15133814: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x15133818: lwc1        $f18, 0x40($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X40);
    // 0x1513381C: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x15133820: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15133824: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15133828: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x1513382C: lwc1        $f18, 0x50($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X50);
    // 0x15133830: swc1        $f16, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f16.u32l;
    // 0x15133834: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15133838: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x1513383C: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15133840: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x15133844: swc1        $f8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f8.u32l;
    // 0x15133848: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1513384C: lwc1        $f8, 0x54($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X54);
    // 0x15133850: mul.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x15133854: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x15133858: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x1513385C: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
    // 0x15133860: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15133864: lwc1        $f6, 0x58($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X58);
    // 0x15133868: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1513386C: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15133870: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x15133874: swc1        $f16, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f16.u32l;
    // 0x15133878: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1513387C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15133880: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15133884: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x15133888: swc1        $f10, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f10.u32l;
    // 0x1513388C: jr          $ra
    // 0x15133890: nop

    return;
    return;
    // 0x15133890: nop

;}
RECOMP_FUNC void func_15043FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15043FF0: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x15043FF4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15043FF8: nop

    // 0x15043FFC: lh          $t6, 0x18($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X18);
    // 0x15044000: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15044004: nop

    // 0x15044008: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1504400C: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x15044010: lh          $t7, 0x1A($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X1A);
    // 0x15044014: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15044018: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1504401C: nop

    // 0x15044020: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15044024: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x15044028: lh          $t8, 0x1C($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X1C);
    // 0x1504402C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x15044030: nop

    // 0x15044034: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15044038: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    // 0x1504403C: lh          $t9, 0x38($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X38);
    // 0x15044040: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15044044: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15044048: nop

    // 0x1504404C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15044050: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15044054: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15044058: swc1        $f16, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
    // 0x1504405C: lh          $t0, 0x3A($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X3A);
    // 0x15044060: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15044064: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x15044068: nop

    // 0x1504406C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15044070: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15044074: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15044078: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x1504407C: lh          $t1, 0x3C($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X3C);
    // 0x15044080: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x15044084: nop

    // 0x15044088: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1504408C: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15044090: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15044094: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x15044098: jr          $ra
    // 0x1504409C: nop

    return;
    return;
    // 0x1504409C: nop

;}
RECOMP_FUNC void __n_vsVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001B200: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1001B204: lbu         $t6, 0x3A($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3A);
    // 0x1001B208: lbu         $t7, 0x37($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X37);
    // 0x1001B20C: lbu         $t9, 0x34($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X34);
    // 0x1001B210: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1001B214: mflo        $t8
    ctx->r24 = lo;
    // 0x1001B218: nop

    // 0x1001B21C: nop

    // 0x1001B220: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1001B224: mflo        $t0
    ctx->r8 = lo;
    // 0x1001B228: sra         $t1, $t0, 6
    ctx->r9 = S32(SIGNED(ctx->r8) >> 6);
    // 0x1001B22C: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x1001B230: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x1001B234: lh          $t9, 0x32($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X32);
    // 0x1001B238: lbu         $t3, 0x35($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X35);
    // 0x1001B23C: lbu         $t8, 0xD($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XD);
    // 0x1001B240: lw          $t2, 0x60($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X60);
    // 0x1001B244: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x1001B248: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1001B24C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x1001B250: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1001B254: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x1001B258: lbu         $t6, 0x9($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X9);
    // 0x1001B25C: mflo        $t0
    ctx->r8 = lo;
    // 0x1001B260: nop

    // 0x1001B264: nop

    // 0x1001B268: multu       $t6, $t0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1001B26C: mflo        $t1
    ctx->r9 = lo;
    // 0x1001B270: sra         $t3, $t1, 14
    ctx->r11 = S32(SIGNED(ctx->r9) >> 14);
    // 0x1001B274: sw          $t3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r11;
    // 0x1001B278: lbu         $t4, 0x35($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X35);
    // 0x1001B27C: lw          $t2, 0x60($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X60);
    // 0x1001B280: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1001B284: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x1001B288: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x1001B28C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1001B290: addu        $t7, $t2, $t5
    ctx->r15 = ADD32(ctx->r10, ctx->r13);
    // 0x1001B294: lbu         $t8, 0xD($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XD);
    // 0x1001B298: beq         $t8, $at, L_1001B2D4
    if (ctx->r24 == ctx->r1) {
        // 0x1001B29C: nop
    
            goto L_1001B2D4;
    }
    // 0x1001B29C: nop

    // 0x1001B2A0: lbu         $t6, 0x35($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X35);
    // 0x1001B2A4: lw          $t9, 0x60($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X60);
    // 0x1001B2A8: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x1001B2AC: sll         $t0, $t6, 4
    ctx->r8 = S32(ctx->r14 << 4);
    // 0x1001B2B0: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x1001B2B4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1001B2B8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x1001B2BC: lbu         $t3, 0xD($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0XD);
    // 0x1001B2C0: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1001B2C4: mflo        $t2
    ctx->r10 = lo;
    // 0x1001B2C8: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x1001B2CC: srl         $t7, $t5, 8
    ctx->r15 = S32(U32(ctx->r13) >> 8);
    // 0x1001B2D0: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
L_1001B2D4:
    // 0x1001B2D4: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x1001B2D8: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x1001B2DC: multu       $t8, $t6
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1001B2E0: mflo        $t9
    ctx->r25 = lo;
    // 0x1001B2E4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x1001B2E8: nop

    // 0x1001B2EC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x1001B2F0: srl         $t1, $t0, 15
    ctx->r9 = S32(U32(ctx->r8) >> 15);
    // 0x1001B2F4: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x1001B2F8: b           L_1001B308
    // 0x1001B2FC: lh          $v0, 0x6($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X6);
        goto L_1001B308;
    // 0x1001B2FC: lh          $v0, 0x6($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X6);
    // 0x1001B300: b           L_1001B308
    // 0x1001B304: nop

        goto L_1001B308;
    // 0x1001B304: nop

L_1001B308:
    // 0x1001B308: jr          $ra
    // 0x1001B30C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x1001B30C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_151C455C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C455C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151C4560: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x151C4564: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x151C4568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151C456C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151C4570: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151C4574: lwc1        $f4, 0x8C($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8C);
    // 0x151C4578: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151C457C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151C4580: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x151C4584: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151C4588: swc1        $f6, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->f6.u32l;
    // 0x151C458C: lwc1        $f10, 0x8C($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8C);
    // 0x151C4590: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x151C4594: nop

    // 0x151C4598: bc1fl       L_151C4634
    if (!c1cs) {
        // 0x151C459C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_151C4634;
    }
    goto skip_0;
    // 0x151C459C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x151C45A0: lw          $v0, 0x940($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X940);
    // 0x151C45A4: beql        $v0, $zero, L_151C45F8
    if (ctx->r2 == 0) {
        // 0x151C45A8: lbu         $t0, 0x0($a2)
        ctx->r8 = MEM_BU(ctx->r6, 0X0);
            goto L_151C45F8;
    }
    goto skip_1;
    // 0x151C45A8: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
    skip_1:
    // 0x151C45AC: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x151C45B0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151C45B4: beql        $t7, $zero, L_151C45F8
    if (ctx->r15 == 0) {
        // 0x151C45B8: lbu         $t0, 0x0($a2)
        ctx->r8 = MEM_BU(ctx->r6, 0X0);
            goto L_151C45F8;
    }
    goto skip_2;
    // 0x151C45B8: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
    skip_2:
    // 0x151C45BC: lw          $v1, 0x84($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X84);
    // 0x151C45C0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151C45C4: beql        $v1, $zero, L_151C45F8
    if (ctx->r3 == 0) {
        // 0x151C45C8: lbu         $t0, 0x0($a2)
        ctx->r8 = MEM_BU(ctx->r6, 0X0);
            goto L_151C45F8;
    }
    goto skip_3;
    // 0x151C45C8: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
    skip_3:
    // 0x151C45CC: lw          $t8, -0x410C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X410C);
    // 0x151C45D0: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x151C45D4: addiu       $a0, $a2, 0x30
    ctx->r4 = ADD32(ctx->r6, 0X30);
    // 0x151C45D8: subu        $a1, $v1, $t8
    ctx->r5 = SUB32(ctx->r3, ctx->r24);
    // 0x151C45DC: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x151C45E0: mflo        $a1
    ctx->r5 = lo;
    // 0x151C45E4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x151C45E8: jalr        $v0
    // 0x151C45EC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x151C45EC: nop

    after_0:
    // 0x151C45F0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x151C45F4: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
L_151C45F8:
    // 0x151C45F8: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x151C45FC: beql        $t1, $zero, L_151C4630
    if (ctx->r9 == 0) {
        // 0x151C4600: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151C4630;
    }
    goto skip_4;
    // 0x151C4600: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_4:
    // 0x151C4604: lb          $v0, 0x9C($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X9C);
    // 0x151C4608: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151C460C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151C4610: beq         $v0, $at, L_151C462C
    if (ctx->r2 == ctx->r1) {
        // 0x151C4614: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_151C462C;
    }
    // 0x151C4614: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x151C4618: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x151C461C: lw          $t9, -0x430($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X430);
    // 0x151C4620: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151C4624: jalr        $t9
    // 0x151C4628: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x151C4628: nop

    after_1:
L_151C462C:
    // 0x151C462C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151C4630:
    // 0x151C4630: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151C4634:
    // 0x151C4634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151C4638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151C463C: jr          $ra
    // 0x151C4640: nop

    return;
    return;
    // 0x151C4640: nop

;}
RECOMP_FUNC void func_151C2F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C2F48: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x151C2F4C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151C2F50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151C2F54: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151C2F58: jal         0x150ADA68
    // 0x151C2F5C: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151C2F5C: nop

    after_0:
    // 0x151C2F60: jal         0x150ADA20
    // 0x151C2F64: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151C2F64: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x151C2F68: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x151C2F6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C2F70: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x151C2F74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151C2F78: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x151C2F7C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C2F80: mfhi        $t6
    ctx->r14 = hi;
    // 0x151C2F84: addiu       $t7, $t6, 0x19
    ctx->r15 = ADD32(ctx->r14, 0X19);
    // 0x151C2F88: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151C2F8C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151C2F90: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151C2F94: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151C2F98: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151C2F9C: addiu       $v1, $s0, 0x110
    ctx->r3 = ADD32(ctx->r16, 0X110);
    // 0x151C2FA0: lw          $t0, 0x88($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X88);
    // 0x151C2FA4: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151C2FA8: addiu       $a3, $v1, 0x30
    ctx->r7 = ADD32(ctx->r3, 0X30);
    // 0x151C2FAC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151C2FB0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151C2FB4: lbu         $t1, 0xC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XC);
    // 0x151C2FB8: addiu       $a2, $v1, 0x6C
    ctx->r6 = ADD32(ctx->r3, 0X6C);
    // 0x151C2FBC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151C2FC0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x151C2FC4: lbu         $t2, 0x1($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1);
    // 0x151C2FC8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x151C2FCC: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x151C2FD0: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151C2FD4: jal         0x15102920
    // 0x151C2FD8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    func_15102920(rdram, ctx);
        goto after_2;
    // 0x151C2FD8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_2:
    // 0x151C2FDC: jal         0x150ADA68
    // 0x151C2FE0: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151C2FE0: nop

    after_3:
    // 0x151C2FE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C2FE8: lwc1        $f16, -0x55C4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X55C4);
    // 0x151C2FEC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151C2FF0: lwc1        $f18, -0x35DC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X35DC);
    // 0x151C2FF4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x151C2FF8: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x151C2FFC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151C3000: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151C3004: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x151C3008: nop

    // 0x151C300C: bc1fl       L_151C328C
    if (!c1cs) {
        // 0x151C3010: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_151C328C;
    }
    goto skip_0;
    // 0x151C3010: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x151C3014: sb          $t3, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r11;
    // 0x151C3018: sb          $t4, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r12;
    // 0x151C301C: jal         0x150ADA20
    // 0x151C3020: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151C3020: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_4:
    // 0x151C3024: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151C3028: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C302C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x151C3030: mfhi        $t5
    ctx->r13 = hi;
    // 0x151C3034: addiu       $t6, $t5, 0x4
    ctx->r14 = ADD32(ctx->r13, 0X4);
    // 0x151C3038: sh          $t6, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r14;
    // 0x151C303C: sb          $zero, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = 0;
    // 0x151C3040: lwc1        $f6, 0x30($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X30);
    // 0x151C3044: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C3048: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x151C304C: nop

    // 0x151C3050: sw          $t8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r24;
    // 0x151C3054: lwc1        $f10, 0x34($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X34);
    // 0x151C3058: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C305C: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x151C3060: nop

    // 0x151C3064: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    // 0x151C3068: lwc1        $f18, 0x38($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X38);
    // 0x151C306C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151C3070: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x151C3074: jal         0x150ADA20
    // 0x151C3078: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151C3078: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    after_5:
    // 0x151C307C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x151C3080: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C3084: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151C3088: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151C308C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151C3090: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x151C3094: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151C3098: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151C309C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C30A0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151C30A4: lbu         $t6, 0xC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XC);
    // 0x151C30A8: mfhi        $a2
    ctx->r6 = hi;
    // 0x151C30AC: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x151C30B0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x151C30B4: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
    // 0x151C30B8: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x151C30BC: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    // 0x151C30C0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151C30C4: jal         0x151602C0
    // 0x151C30C8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_151602C0(rdram, ctx);
        goto after_6;
    // 0x151C30C8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_6:
    // 0x151C30CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151C30D0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151C30D4: lbu         $v1, -0x35E0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X35E0);
    // 0x151C30D8: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x151C30DC: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x151C30E0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x151C30E4: srav        $t9, $t8, $v1
    ctx->r25 = S32(SIGNED(ctx->r24) >> (ctx->r3 & 31));
    // 0x151C30E8: srav        $t1, $t0, $v1
    ctx->r9 = S32(SIGNED(ctx->r8) >> (ctx->r3 & 31));
    // 0x151C30EC: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x151C30F0: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x151C30F4: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x151C30F8: addiu       $t2, $sp, 0x5C
    ctx->r10 = ADD32(ctx->r29, 0X5C);
    // 0x151C30FC: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x151C3100: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151C3104: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x151C3108: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x151C310C: addiu       $t8, $zero, -0x3D
    ctx->r24 = ADD32(0, -0X3D);
    // 0x151C3110: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x151C3114: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x151C3118: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151C311C: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x151C3120: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151C3124: lui         $at, 0x4104
    ctx->r1 = S32(0X4104 << 16);
    // 0x151C3128: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C312C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C3130: lwc1        $f8, -0x55C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X55C0);
    // 0x151C3134: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x151C3138: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151C313C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x151C3140: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151C3144: sh          $t9, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r25;
    // 0x151C3148: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
    // 0x151C314C: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x151C3150: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151C3154: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x151C3158: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x151C315C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151C3160: sh          $t8, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r24;
    // 0x151C3164: sw          $t1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r9;
    // 0x151C3168: sh          $t5, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r13;
    // 0x151C316C: sh          $t4, 0x92($sp)
    MEM_H(0X92, ctx->r29) = ctx->r12;
    // 0x151C3170: sh          $t2, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r10;
    // 0x151C3174: sb          $t3, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r11;
    // 0x151C3178: sb          $t6, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r14;
    // 0x151C317C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C3180: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151C3184: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C3188: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151C318C: sh          $t7, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r15;
    // 0x151C3190: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C3194: sb          $t9, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = ctx->r25;
    // 0x151C3198: sb          $t0, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r8;
    // 0x151C319C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151C31A0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151C31A4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151C31A8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151C31AC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151C31B0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151C31B4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x151C31B8: sb          $t8, 0x99($sp)
    MEM_B(0X99, ctx->r29) = ctx->r24;
    // 0x151C31BC: sb          $t1, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r9;
    // 0x151C31C0: sb          $t5, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r13;
    // 0x151C31C4: sb          $t4, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r12;
    // 0x151C31C8: sb          $t2, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r10;
    // 0x151C31CC: sb          $t3, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r11;
    // 0x151C31D0: sb          $t6, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r14;
    // 0x151C31D4: lui         $t9, 0x20
    ctx->r25 = S32(0X20 << 16);
    // 0x151C31D8: lui         $t0, 0x6
    ctx->r8 = S32(0X6 << 16);
    // 0x151C31DC: addiu       $t8, $zero, 0x24
    ctx->r24 = ADD32(0, 0X24);
    // 0x151C31E0: ori         $t9, $t9, 0x5
    ctx->r25 = ctx->r25 | 0X5;
    // 0x151C31E4: ori         $t0, $t0, 0x600
    ctx->r8 = ctx->r8 | 0X600;
    // 0x151C31E8: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x151C31EC: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x151C31F0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151C31F4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151C31F8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151C31FC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x151C3200: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x151C3204: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x151C3208: sh          $zero, 0x80($sp)
    MEM_H(0X80, ctx->r29) = 0;
    // 0x151C320C: sb          $t7, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r15;
    // 0x151C3210: sb          $zero, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = 0;
    // 0x151C3214: sb          $zero, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = 0;
    // 0x151C3218: sb          $zero, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = 0;
    // 0x151C321C: sb          $zero, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = 0;
    // 0x151C3220: sb          $zero, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = 0;
    // 0x151C3224: sb          $zero, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = 0;
    // 0x151C3228: sb          $zero, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = 0;
    // 0x151C322C: sb          $zero, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = 0;
    // 0x151C3230: sb          $zero, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = 0;
    // 0x151C3234: sb          $t7, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r15;
    // 0x151C3238: sb          $t8, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r24;
    // 0x151C323C: sw          $t9, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r25;
    // 0x151C3240: sw          $t0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r8;
    // 0x151C3244: sh          $t1, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r9;
    // 0x151C3248: sh          $t5, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r13;
    // 0x151C324C: sh          $t4, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r12;
    // 0x151C3250: sb          $zero, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = 0;
    // 0x151C3254: sb          $t2, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r10;
    // 0x151C3258: sb          $zero, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = 0;
    // 0x151C325C: sb          $t3, 0xC6($sp)
    MEM_B(0XC6, ctx->r29) = ctx->r11;
    // 0x151C3260: sb          $t6, 0xC7($sp)
    MEM_B(0XC7, ctx->r29) = ctx->r14;
    // 0x151C3264: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x151C3268: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x151C326C: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x151C3270: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    // 0x151C3274: swc1        $f18, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f18.u32l;
    // 0x151C3278: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x151C327C: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x151C3280: jal         0x15152B38
    // 0x151C3284: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    func_15152B38(rdram, ctx);
        goto after_7;
    // 0x151C3284: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    after_7:
    // 0x151C3288: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_151C328C:
    // 0x151C328C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151C3290: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x151C3294: jr          $ra
    // 0x151C3298: nop

    return;
    return;
    // 0x151C3298: nop

;}
RECOMP_FUNC void func_150BEC30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BEC30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150BEC34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150BEC38: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x150BEC3C: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x150BEC40: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x150BEC44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150BEC48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150BEC4C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x150BEC50: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x150BEC54: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150BEC58: beq         $a3, $at, L_150BEC88
    if (ctx->r7 == ctx->r1) {
        // 0x150BEC5C: lw          $t7, 0x3C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X3C);
            goto L_150BEC88;
    }
    // 0x150BEC5C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x150BEC60: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150BEC64: beq         $a3, $at, L_150BEC90
    if (ctx->r7 == ctx->r1) {
        // 0x150BEC68: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_150BEC90;
    }
    // 0x150BEC68: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150BEC6C: beq         $a3, $at, L_150BEC98
    if (ctx->r7 == ctx->r1) {
        // 0x150BEC70: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_150BEC98;
    }
    // 0x150BEC70: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x150BEC74: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x150BEC78: beq         $a3, $at, L_150BECA0
    if (ctx->r7 == ctx->r1) {
        // 0x150BEC7C: nop
    
            goto L_150BECA0;
    }
    // 0x150BEC7C: nop

    // 0x150BEC80: b           L_150BECA0
    // 0x150BEC84: nop

        goto L_150BECA0;
    // 0x150BEC84: nop

L_150BEC88:
    // 0x150BEC88: b           L_150BECA0
    // 0x150BEC8C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
        goto L_150BECA0;
    // 0x150BEC8C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
L_150BEC90:
    // 0x150BEC90: b           L_150BECA0
    // 0x150BEC94: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
        goto L_150BECA0;
    // 0x150BEC94: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
L_150BEC98:
    // 0x150BEC98: b           L_150BECA0
    // 0x150BEC9C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
        goto L_150BECA0;
    // 0x150BEC9C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
L_150BECA0:
    // 0x150BECA0: lw          $a0, 0x1D4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D4);
    // 0x150BECA4: jal         0x15142314
    // 0x150BECA8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_15142314(rdram, ctx);
        goto after_0;
    // 0x150BECA8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
    // 0x150BECAC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x150BECB0: bnel        $a0, $zero, L_150BECC4
    if (ctx->r4 != 0) {
        // 0x150BECB4: lwc1        $f4, 0x0($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
            goto L_150BECC4;
    }
    goto skip_0;
    // 0x150BECB4: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x150BECB8: b           L_150BED14
    // 0x150BECBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150BED14;
    // 0x150BECBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150BECC0: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
L_150BECC4:
    // 0x150BECC4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150BECC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BECCC: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x150BECD0: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150BECD4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x150BECD8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150BECDC: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x150BECE0: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150BECE4: jal         0x1504715C
    // 0x150BECE8: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x150BECE8: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x150BECEC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150BECF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BECF4: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150BECF8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x150BECFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150BED00: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150BED04: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x150BED08: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150BED0C: jal         0x15046C80
    // 0x150BED10: nop

    func_15046C80(rdram, ctx);
        goto after_2;
    // 0x150BED10: nop

    after_2:
L_150BED14:
    // 0x150BED14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150BED18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150BED1C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150BED20: jr          $ra
    // 0x150BED24: nop

    return;
    return;
    // 0x150BED24: nop

;}
RECOMP_FUNC void func_1507BAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507BAD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507BAD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507BAD8: jal         0x1507A3E8
    // 0x1507BADC: nop

    func_1507A3E8(rdram, ctx);
        goto after_0;
    // 0x1507BADC: nop

    after_0:
    // 0x1507BAE0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507BAE4: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1507BAE8: sw          $v0, 0xFC($t6)
    MEM_W(0XFC, ctx->r14) = ctx->r2;
    // 0x1507BAEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507BAF0: jr          $ra
    // 0x1507BAF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1507BAF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1501878C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501878C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15018790: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15018794: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x15018798: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1501879C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150187A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150187A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150187A8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150187AC: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x150187B0: addiu       $a0, $a0, -0x15F0
    ctx->r4 = ADD32(ctx->r4, -0X15F0);
    // 0x150187B4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x150187B8: jal         0x10023440
    // 0x150187BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x150187BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x150187C0: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x150187C4: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x150187C8: sb          $zero, -0x53A0($at)
    MEM_B(-0X53A0, ctx->r1) = 0;
    // 0x150187CC: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x150187D0: addiu       $t6, $zero, 0x320
    ctx->r14 = ADD32(0, 0X320);
    // 0x150187D4: sh          $t6, -0x539C($at)
    MEM_H(-0X539C, ctx->r1) = ctx->r14;
    // 0x150187D8: lh          $v1, 0x0($t7)
    ctx->r3 = MEM_H(ctx->r15, 0X0);
    // 0x150187DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150187E0: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x150187E4: beq         $v1, $at, L_15018884
    if (ctx->r3 == ctx->r1) {
        // 0x150187E8: addiu       $s0, $s0, -0x19EB
        ctx->r16 = ADD32(ctx->r16, -0X19EB);
            goto L_15018884;
    }
    // 0x150187E8: addiu       $s0, $s0, -0x19EB
    ctx->r16 = ADD32(ctx->r16, -0X19EB);
    // 0x150187EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150187F0: beq         $v1, $at, L_15018808
    if (ctx->r3 == ctx->r1) {
        // 0x150187F4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_15018808;
    }
    // 0x150187F4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150187F8: beq         $v1, $at, L_15018DB0
    if (ctx->r3 == ctx->r1) {
        // 0x150187FC: nop
    
            goto L_15018DB0;
    }
    // 0x150187FC: nop

    // 0x15018800: b           L_15018DDC
    // 0x15018804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15018DDC;
    // 0x15018804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15018808:
    // 0x15018808: jal         0x1517E1AC
    // 0x1501880C: nop

    func_1517E1AC(rdram, ctx);
        goto after_1;
    // 0x1501880C: nop

    after_1:
    // 0x15018810: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15018814: lw          $t8, -0x3610($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3610);
    // 0x15018818: beq         $t8, $zero, L_15018828
    if (ctx->r24 == 0) {
        // 0x1501881C: nop
    
            goto L_15018828;
    }
    // 0x1501881C: nop

    // 0x15018820: jal         0x151412BC
    // 0x15018824: nop

    func_151412BC(rdram, ctx);
        goto after_2;
    // 0x15018824: nop

    after_2:
L_15018828:
    // 0x15018828: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1501882C: addiu       $v0, $v0, -0x1558
    ctx->r2 = ADD32(ctx->r2, -0X1558);
    // 0x15018830: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x15018834: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x15018838: addiu       $s0, $s0, -0x19EB
    ctx->r16 = ADD32(ctx->r16, -0X19EB);
    // 0x1501883C: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x15018840: addiu       $t3, $t9, -0x1
    ctx->r11 = ADD32(ctx->r25, -0X1);
    // 0x15018844: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x15018848: beql        $t4, $zero, L_15018DDC
    if (ctx->r12 == 0) {
        // 0x1501884C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15018DDC;
    }
    goto skip_0;
    // 0x1501884C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15018850: lh          $t5, 0x0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X0);
    // 0x15018854: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15018858: bnel        $t5, $zero, L_15018DDC
    if (ctx->r13 != 0) {
        // 0x1501885C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15018DDC;
    }
    goto skip_1;
    // 0x1501885C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x15018860: jal         0x10004074
    // 0x15018864: lw          $a0, -0x1638($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1638);
    func_10004074(rdram, ctx);
        goto after_3;
    // 0x15018864: lw          $a0, -0x1638($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1638);
    after_3:
    // 0x15018868: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1501886C: jal         0x10004074
    // 0x15018870: lw          $a0, -0x1634($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1634);
    func_10004074(rdram, ctx);
        goto after_4;
    // 0x15018870: lw          $a0, -0x1634($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1634);
    after_4:
    // 0x15018874: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15018878: sw          $zero, -0x1638($at)
    MEM_W(-0X1638, ctx->r1) = 0;
    // 0x1501887C: b           L_15018DDC
    // 0x15018880: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15018DDC;
    // 0x15018880: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15018884:
    // 0x15018884: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x15018888: bnel        $t6, $zero, L_15018DDC
    if (ctx->r14 != 0) {
        // 0x1501888C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15018DDC;
    }
    goto skip_2;
    // 0x1501888C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x15018890: jal         0x151E51EC
    // 0x15018894: nop

    func_151E51EC(rdram, ctx);
        goto after_5;
    // 0x15018894: nop

    after_5:
    // 0x15018898: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x1501889C: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x150188A0: addiu       $s0, $s0, -0x19EC
    ctx->r16 = ADD32(ctx->r16, -0X19EC);
    // 0x150188A4: bnel        $t7, $zero, L_15018DDC
    if (ctx->r15 != 0) {
        // 0x150188A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15018DDC;
    }
    goto skip_3;
    // 0x150188A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_3:
    // 0x150188AC: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x150188B0: beq         $t8, $zero, L_150188C4
    if (ctx->r24 == 0) {
        // 0x150188B4: nop
    
            goto L_150188C4;
    }
    // 0x150188B4: nop

    // 0x150188B8: jal         0x1501A39C
    // 0x150188BC: nop

    func_1501A39C(rdram, ctx);
        goto after_6;
    // 0x150188BC: nop

    after_6:
    // 0x150188C0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_150188C4:
    // 0x150188C4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x150188C8: lbu         $t9, -0x6510($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X6510);
    // 0x150188CC: beq         $t9, $zero, L_150188DC
    if (ctx->r25 == 0) {
        // 0x150188D0: nop
    
            goto L_150188DC;
    }
    // 0x150188D0: nop

    // 0x150188D4: jal         0x1510B3B0
    // 0x150188D8: nop

    func_1510B3B0(rdram, ctx);
        goto after_7;
    // 0x150188D8: nop

    after_7:
L_150188DC:
    // 0x150188DC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x150188E0: lbu         $t3, -0x64E8($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X64E8);
    // 0x150188E4: beq         $t3, $zero, L_150188F4
    if (ctx->r11 == 0) {
        // 0x150188E8: nop
    
            goto L_150188F4;
    }
    // 0x150188E8: nop

    // 0x150188EC: jal         0x1510B51C
    // 0x150188F0: nop

    func_1510B51C(rdram, ctx);
        goto after_8;
    // 0x150188F0: nop

    after_8:
L_150188F4:
    // 0x150188F4: jal         0x1501905C
    // 0x150188F8: nop

    func_1501905C(rdram, ctx);
        goto after_9;
    // 0x150188F8: nop

    after_9:
    // 0x150188FC: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15018900: lbu         $t4, -0x1540($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1540);
    // 0x15018904: bne         $t4, $zero, L_15018918
    if (ctx->r12 != 0) {
        // 0x15018908: nop
    
            goto L_15018918;
    }
    // 0x15018908: nop

    // 0x1501890C: jal         0x15019130
    // 0x15018910: nop

    func_15019130(rdram, ctx);
        goto after_10;
    // 0x15018910: nop

    after_10:
    // 0x15018914: beq         $v0, $zero, L_15018DD8
    if (ctx->r2 == 0) {
        // 0x15018918: lui         $s1, 0x800C
        ctx->r17 = S32(0X800C << 16);
            goto L_15018DD8;
    }
L_15018918:
    // 0x15018918: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x1501891C: addiu       $s1, $s1, -0x1630
    ctx->r17 = ADD32(ctx->r17, -0X1630);
    // 0x15018920: jal         0x1501A680
    // 0x15018924: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_1501A680(rdram, ctx);
        goto after_11;
    // 0x15018924: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_11:
    // 0x15018928: jal         0x1515D69C
    // 0x1501892C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_1515D69C(rdram, ctx);
        goto after_12;
    // 0x1501892C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_12:
    // 0x15018930: jal         0x15167310
    // 0x15018934: nop

    func_15167310(rdram, ctx);
        goto after_13;
    // 0x15018934: nop

    after_13:
    // 0x15018938: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x1501893C: addiu       $s3, $s3, 0x2FA0
    ctx->r19 = ADD32(ctx->r19, 0X2FA0);
    // 0x15018940: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x15018944: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15018948: bltz        $v1, L_1501899C
    if (SIGNED(ctx->r3) < 0) {
        // 0x1501894C: lui         $s4, 0x800C
        ctx->r20 = S32(0X800C << 16);
            goto L_1501899C;
    }
    // 0x1501894C: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x15018950: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x15018954: addiu       $s2, $s2, 0x2FA4
    ctx->r18 = ADD32(ctx->r18, 0X2FA4);
    // 0x15018958: addiu       $s4, $s4, -0x19D0
    ctx->r20 = ADD32(ctx->r20, -0X19D0);
L_1501895C:
    // 0x1501895C: addu        $t5, $s4, $s0
    ctx->r13 = ADD32(ctx->r20, ctx->r16);
    // 0x15018960: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x15018964: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x15018968: jal         0x15018F80
    // 0x1501896C: lh          $a0, 0x2($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X2);
    func_15018F80(rdram, ctx);
        goto after_14;
    // 0x1501896C: lh          $a0, 0x2($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X2);
    after_14:
    // 0x15018970: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x15018974: jal         0x15019464
    // 0x15018978: lh          $a1, 0x2($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X2);
    func_15019464(rdram, ctx);
        goto after_15;
    // 0x15018978: lh          $a1, 0x2($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X2);
    after_15:
    // 0x1501897C: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x15018980: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15018984: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x15018988: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1501898C: slt         $at, $v1, $s0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x15018990: beq         $at, $zero, L_1501895C
    if (ctx->r1 == 0) {
        // 0x15018994: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_1501895C;
    }
    // 0x15018994: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x15018998: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1501899C:
    // 0x1501899C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150189A0: lbu         $t9, -0x1460($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1460);
    // 0x150189A4: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x150189A8: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x150189AC: addiu       $s4, $s4, -0x19D0
    ctx->r20 = ADD32(ctx->r20, -0X19D0);
    // 0x150189B0: bne         $t9, $zero, L_15018AC8
    if (ctx->r25 != 0) {
        // 0x150189B4: addiu       $s2, $s2, 0x2FA4
        ctx->r18 = ADD32(ctx->r18, 0X2FA4);
            goto L_15018AC8;
    }
    // 0x150189B4: addiu       $s2, $s2, 0x2FA4
    ctx->r18 = ADD32(ctx->r18, 0X2FA4);
    // 0x150189B8: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x150189BC: addiu       $t2, $t2, -0x6470
    ctx->r10 = ADD32(ctx->r10, -0X6470);
    // 0x150189C0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x150189C4: lui         $t4, 0xE100
    ctx->r12 = S32(0XE100 << 16);
    // 0x150189C8: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x150189CC: addiu       $t3, $a0, 0x8
    ctx->r11 = ADD32(ctx->r4, 0X8);
    // 0x150189D0: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x150189D4: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x150189D8: lw          $t5, -0x1464($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1464);
    // 0x150189DC: lui         $t7, 0xDD00
    ctx->r15 = S32(0XDD00 << 16);
    // 0x150189E0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150189E4: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x150189E8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x150189EC: addiu       $t8, $t8, 0x1060
    ctx->r24 = ADD32(ctx->r24, 0X1060);
    // 0x150189F0: ori         $t7, $t7, 0x7FF
    ctx->r15 = ctx->r15 | 0X7FF;
    // 0x150189F4: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x150189F8: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x150189FC: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x15018A00: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x15018A04: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x15018A08: lui         $t3, 0xD9C2
    ctx->r11 = S32(0XD9C2 << 16);
    // 0x15018A0C: ori         $t3, $t3, 0xF9FA
    ctx->r11 = ctx->r11 | 0XF9FA;
    // 0x15018A10: addiu       $t9, $a0, 0x8
    ctx->r25 = ADD32(ctx->r4, 0X8);
    // 0x15018A14: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x15018A18: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x15018A1C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x15018A20: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x15018A24: lui         $t5, 0xD9FF
    ctx->r13 = S32(0XD9FF << 16);
    // 0x15018A28: lui         $t6, 0x22
    ctx->r14 = S32(0X22 << 16);
    // 0x15018A2C: addiu       $t4, $a0, 0x8
    ctx->r12 = ADD32(ctx->r4, 0X8);
    // 0x15018A30: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x15018A34: ori         $t6, $t6, 0x5
    ctx->r14 = ctx->r14 | 0X5;
    // 0x15018A38: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x15018A3C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x15018A40: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x15018A44: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x15018A48: lui         $t8, 0xDA38
    ctx->r24 = S32(0XDA38 << 16);
    // 0x15018A4C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15018A50: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x15018A54: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x15018A58: addiu       $t9, $t9, -0x6B90
    ctx->r25 = ADD32(ctx->r25, -0X6B90);
    // 0x15018A5C: ori         $t8, $t8, 0x3
    ctx->r24 = ctx->r24 | 0X3;
    // 0x15018A60: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x15018A64: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x15018A68: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x15018A6C: lui         $t4, 0xDC08
    ctx->r12 = S32(0XDC08 << 16);
    // 0x15018A70: ori         $t4, $t4, 0xA
    ctx->r12 = ctx->r12 | 0XA;
    // 0x15018A74: addiu       $t3, $a0, 0x8
    ctx->r11 = ADD32(ctx->r4, 0X8);
    // 0x15018A78: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x15018A7C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15018A80: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x15018A84: lbu         $t5, -0x1640($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1640);
    // 0x15018A88: lui         $t9, 0xDC08
    ctx->r25 = S32(0XDC08 << 16);
    // 0x15018A8C: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x15018A90: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x15018A94: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x15018A98: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x15018A9C: ori         $t9, $t9, 0x60A
    ctx->r25 = ctx->r25 | 0X60A;
    // 0x15018AA0: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15018AA4: addiu       $t8, $a0, 0x8
    ctx->r24 = ADD32(ctx->r4, 0X8);
    // 0x15018AA8: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x15018AAC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x15018AB0: lbu         $t3, -0x1640($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1640);
    // 0x15018AB4: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x15018AB8: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x15018ABC: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x15018AC0: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x15018AC4: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
L_15018AC8:
    // 0x15018AC8: bltz        $v1, L_15018B60
    if (SIGNED(ctx->r3) < 0) {
        // 0x15018ACC: addu        $t7, $s4, $s0
        ctx->r15 = ADD32(ctx->r20, ctx->r16);
            goto L_15018B60;
    }
    // 0x15018ACC: addu        $t7, $s4, $s0
    ctx->r15 = ADD32(ctx->r20, ctx->r16);
L_15018AD0:
    // 0x15018AD0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x15018AD4: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    // 0x15018AD8: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x15018ADC: jal         0x1515D6D0
    // 0x15018AE0: sw          $a1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r5;
    func_1515D6D0(rdram, ctx);
        goto after_16;
    // 0x15018AE0: sw          $a1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r5;
    after_16:
    // 0x15018AE4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x15018AE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15018AEC: jal         0x150195A0
    // 0x15018AF0: lh          $a1, 0x2($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X2);
    func_150195A0(rdram, ctx);
        goto after_17;
    // 0x15018AF0: lh          $a1, 0x2($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X2);
    after_17:
    // 0x15018AF4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x15018AF8: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15018AFC: lbu         $t4, -0x1640($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1640);
    // 0x15018B00: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15018B04: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15018B08: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x15018B0C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x15018B10: lw          $t6, -0x1638($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1638);
    // 0x15018B14: lw          $t9, -0x145C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X145C);
    // 0x15018B18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15018B1C: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x15018B20: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x15018B24: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x15018B28: beq         $at, $zero, L_15018B38
    if (ctx->r1 == 0) {
        // 0x15018B2C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15018B38;
    }
    // 0x15018B2C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15018B30: b           L_15018B38
    // 0x15018B34: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_15018B38;
    // 0x15018B34: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15018B38:
    // 0x15018B38: beq         $v1, $zero, L_15018B44
    if (ctx->r3 == 0) {
        // 0x15018B3C: lw          $t4, 0x44($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X44);
            goto L_15018B44;
    }
    // 0x15018B3C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x15018B40: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
L_15018B44:
    // 0x15018B44: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x15018B48: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x15018B4C: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x15018B50: slt         $at, $t6, $s0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x15018B54: beql        $at, $zero, L_15018AD0
    if (ctx->r1 == 0) {
        // 0x15018B58: addu        $t7, $s4, $s0
        ctx->r15 = ADD32(ctx->r20, ctx->r16);
            goto L_15018AD0;
    }
    goto skip_4;
    // 0x15018B58: addu        $t7, $s4, $s0
    ctx->r15 = ADD32(ctx->r20, ctx->r16);
    skip_4:
    // 0x15018B5C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_15018B60:
    // 0x15018B60: jal         0x15019414
    // 0x15018B64: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    func_15019414(rdram, ctx);
        goto after_18;
    // 0x15018B64: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    after_18:
    // 0x15018B68: jal         0x150198FC
    // 0x15018B6C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_150198FC(rdram, ctx);
        goto after_19;
    // 0x15018B6C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_19:
    // 0x15018B70: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x15018B74: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x15018B78: bltz        $t7, L_15018BEC
    if (SIGNED(ctx->r15) < 0) {
        // 0x15018B7C: addu        $t9, $s4, $s0
        ctx->r25 = ADD32(ctx->r20, ctx->r16);
            goto L_15018BEC;
    }
    // 0x15018B7C: addu        $t9, $s4, $s0
    ctx->r25 = ADD32(ctx->r20, ctx->r16);
L_15018B80:
    // 0x15018B80: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
    // 0x15018B84: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x15018B88: jal         0x1515D6D0
    // 0x15018B8C: sw          $a1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r5;
    func_1515D6D0(rdram, ctx);
        goto after_20;
    // 0x15018B8C: sw          $a1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r5;
    after_20:
    // 0x15018B90: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x15018B94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15018B98: jal         0x15019CC8
    // 0x15018B9C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    func_15019CC8(rdram, ctx);
        goto after_21;
    // 0x15018B9C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    after_21:
    // 0x15018BA0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x15018BA4: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15018BA8: lbu         $t4, -0x1540($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1540);
    // 0x15018BAC: bnel        $t4, $zero, L_15018BD4
    if (ctx->r12 != 0) {
        // 0x15018BB0: lw          $t7, 0x0($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X0);
            goto L_15018BD4;
    }
    goto skip_5;
    // 0x15018BB0: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    skip_5:
    // 0x15018BB4: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x15018BB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15018BBC: blezl       $t5, L_15018BD4
    if (SIGNED(ctx->r13) <= 0) {
        // 0x15018BC0: lw          $t7, 0x0($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X0);
            goto L_15018BD4;
    }
    goto skip_6;
    // 0x15018BC0: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    skip_6:
    // 0x15018BC4: jal         0x15019BB8
    // 0x15018BC8: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    func_15019BB8(rdram, ctx);
        goto after_22;
    // 0x15018BC8: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    after_22:
    // 0x15018BCC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x15018BD0: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
L_15018BD4:
    // 0x15018BD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15018BD8: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x15018BDC: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x15018BE0: slt         $at, $t7, $s0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x15018BE4: beql        $at, $zero, L_15018B80
    if (ctx->r1 == 0) {
        // 0x15018BE8: addu        $t9, $s4, $s0
        ctx->r25 = ADD32(ctx->r20, ctx->r16);
            goto L_15018B80;
    }
    goto skip_7;
    // 0x15018BE8: addu        $t9, $s4, $s0
    ctx->r25 = ADD32(ctx->r20, ctx->r16);
    skip_7:
L_15018BEC:
    // 0x15018BEC: jal         0x15019E60
    // 0x15018BF0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_15019E60(rdram, ctx);
        goto after_23;
    // 0x15018BF0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_23:
    // 0x15018BF4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x15018BF8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15018BFC: lbu         $t9, -0x1540($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1540);
    // 0x15018C00: bne         $t9, $zero, L_15018C4C
    if (ctx->r25 != 0) {
        // 0x15018C04: nop
    
            goto L_15018C4C;
    }
    // 0x15018C04: nop

    // 0x15018C08: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x15018C0C: bne         $v1, $zero, L_15018C4C
    if (ctx->r3 != 0) {
        // 0x15018C10: nop
    
            goto L_15018C4C;
    }
    // 0x15018C10: nop

    // 0x15018C14: bltz        $v1, L_15018C4C
    if (SIGNED(ctx->r3) < 0) {
        // 0x15018C18: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_15018C4C;
    }
    // 0x15018C18: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_15018C1C:
    // 0x15018C1C: addu        $t8, $s4, $s0
    ctx->r24 = ADD32(ctx->r20, ctx->r16);
    // 0x15018C20: lbu         $a1, 0x0($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X0);
    // 0x15018C24: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x15018C28: jal         0x15019BB8
    // 0x15018C2C: sw          $a1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r5;
    func_15019BB8(rdram, ctx);
        goto after_24;
    // 0x15018C2C: sw          $a1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r5;
    after_24:
    // 0x15018C30: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x15018C34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15018C38: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x15018C3C: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x15018C40: slt         $at, $t6, $s0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x15018C44: beq         $at, $zero, L_15018C1C
    if (ctx->r1 == 0) {
        // 0x15018C48: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_15018C1C;
    }
    // 0x15018C48: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_15018C4C:
    // 0x15018C4C: jal         0x151E84B0
    // 0x15018C50: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_151E84B0(rdram, ctx);
        goto after_25;
    // 0x15018C50: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_25:
    // 0x15018C54: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x15018C58: jal         0x15043384
    // 0x15018C5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15043384(rdram, ctx);
        goto after_26;
    // 0x15018C5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_26:
    // 0x15018C60: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x15018C64: jal         0x150347E8
    // 0x15018C68: nop

    func_150347E8(rdram, ctx);
        goto after_27;
    // 0x15018C68: nop

    after_27:
    // 0x15018C6C: jal         0x1502E474
    // 0x15018C70: nop

    func_1502E474(rdram, ctx);
        goto after_28;
    // 0x15018C70: nop

    after_28:
    // 0x15018C74: jal         0x15189118
    // 0x15018C78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15189118(rdram, ctx);
        goto after_29;
    // 0x15018C78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_29:
    // 0x15018C7C: jal         0x15084A18
    // 0x15018C80: nop

    func_15084A18(rdram, ctx);
        goto after_30;
    // 0x15018C80: nop

    after_30:
    // 0x15018C84: jal         0x15125628
    // 0x15018C88: nop

    func_15125628(rdram, ctx);
        goto after_31;
    // 0x15018C88: nop

    after_31:
    // 0x15018C8C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x15018C90: lui         $t9, 0xE900
    ctx->r25 = S32(0XE900 << 16);
    // 0x15018C94: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x15018C98: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x15018C9C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x15018CA0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x15018CA4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x15018CA8: lui         $t4, 0xDF00
    ctx->r12 = S32(0XDF00 << 16);
    // 0x15018CAC: addiu       $t8, $a0, 0x8
    ctx->r24 = ADD32(ctx->r4, 0X8);
    // 0x15018CB0: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x15018CB4: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x15018CB8: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x15018CBC: jal         0x10004674
    // 0x15018CC0: nop

    func_10004674(rdram, ctx);
        goto after_32;
    // 0x15018CC0: nop

    after_32:
    // 0x15018CC4: jal         0x1510D404
    // 0x15018CC8: nop

    func_1510D404(rdram, ctx);
        goto after_33;
    // 0x15018CC8: nop

    after_33:
    // 0x15018CCC: jal         0x15114A1C
    // 0x15018CD0: nop

    func_15114A1C(rdram, ctx);
        goto after_34;
    // 0x15018CD0: nop

    after_34:
    // 0x15018CD4: jal         0x1517CFC4
    // 0x15018CD8: nop

    func_1517CFC4(rdram, ctx);
        goto after_35;
    // 0x15018CD8: nop

    after_35:
    // 0x15018CDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15018CE0: jal         0x1501C880
    // 0x15018CE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1501C880(rdram, ctx);
        goto after_36;
    // 0x15018CE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_36:
    // 0x15018CE8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15018CEC: lbu         $v0, -0x1540($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1540);
    // 0x15018CF0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15018CF4: sb          $zero, -0x164C($at)
    MEM_B(-0X164C, ctx->r1) = 0;
    // 0x15018CF8: beq         $v0, $zero, L_15018D14
    if (ctx->r2 == 0) {
        // 0x15018CFC: lui         $a0, 0x800C
        ctx->r4 = S32(0X800C << 16);
            goto L_15018D14;
    }
    // 0x15018CFC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15018D00: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15018D04: addiu       $a0, $a0, -0x153E
    ctx->r4 = ADD32(ctx->r4, -0X153E);
    // 0x15018D08: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x15018D0C: b           L_15018D28
    // 0x15018D10: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
        goto L_15018D28;
    // 0x15018D10: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
L_15018D14:
    // 0x15018D14: addiu       $a0, $a0, -0x153E
    ctx->r4 = ADD32(ctx->r4, -0X153E);
    // 0x15018D18: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x15018D1C: blez        $v1, L_15018D28
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15018D20: addiu       $t3, $v1, -0x1
        ctx->r11 = ADD32(ctx->r3, -0X1);
            goto L_15018D28;
    }
    // 0x15018D20: addiu       $t3, $v1, -0x1
    ctx->r11 = ADD32(ctx->r3, -0X1);
    // 0x15018D24: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
L_15018D28:
    // 0x15018D28: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15018D2C: lbu         $v1, -0x153F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X153F);
    // 0x15018D30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15018D34: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15018D38: beql        $v1, $v0, L_15018DDC
    if (ctx->r3 == ctx->r2) {
        // 0x15018D3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15018DDC;
    }
    goto skip_8;
    // 0x15018D3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_8:
    // 0x15018D40: sb          $v1, -0x1540($at)
    MEM_B(-0X1540, ctx->r1) = ctx->r3;
    // 0x15018D44: lbu         $t6, -0x1540($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1540);
    // 0x15018D48: beq         $t6, $zero, L_15018D80
    if (ctx->r14 == 0) {
        // 0x15018D4C: nop
    
            goto L_15018D80;
    }
    // 0x15018D4C: nop

    // 0x15018D50: jal         0x1000E2F4
    // 0x15018D54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_1000E2F4(rdram, ctx);
        goto after_37;
    // 0x15018D54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_37:
    // 0x15018D58: jal         0x10011E94
    // 0x15018D5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_10011E94(rdram, ctx);
        goto after_38;
    // 0x15018D5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_38:
    // 0x15018D60: jal         0x151F2CDC
    // 0x15018D64: nop

    func_151F2CDC(rdram, ctx);
        goto after_39;
    // 0x15018D64: nop

    after_39:
    // 0x15018D68: beql        $v0, $zero, L_15018DDC
    if (ctx->r2 == 0) {
        // 0x15018D6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15018DDC;
    }
    goto skip_9;
    // 0x15018D6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_9:
    // 0x15018D70: jal         0x151F2BE8
    // 0x15018D74: nop

    func_151F2BE8(rdram, ctx);
        goto after_40;
    // 0x15018D74: nop

    after_40:
    // 0x15018D78: b           L_15018DDC
    // 0x15018D7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15018DDC;
    // 0x15018D7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15018D80:
    // 0x15018D80: jal         0x1000E2F4
    // 0x15018D84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1000E2F4(rdram, ctx);
        goto after_41;
    // 0x15018D84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_41:
    // 0x15018D88: jal         0x10011E94
    // 0x15018D8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_10011E94(rdram, ctx);
        goto after_42;
    // 0x15018D8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_42:
    // 0x15018D90: jal         0x151F2CDC
    // 0x15018D94: nop

    func_151F2CDC(rdram, ctx);
        goto after_43;
    // 0x15018D94: nop

    after_43:
    // 0x15018D98: beql        $v0, $zero, L_15018DDC
    if (ctx->r2 == 0) {
        // 0x15018D9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15018DDC;
    }
    goto skip_10;
    // 0x15018D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_10:
    // 0x15018DA0: jal         0x151F2C4C
    // 0x15018DA4: nop

    func_151F2C4C(rdram, ctx);
        goto after_44;
    // 0x15018DA4: nop

    after_44:
    // 0x15018DA8: b           L_15018DDC
    // 0x15018DAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15018DDC;
    // 0x15018DAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15018DB0:
    // 0x15018DB0: jal         0x151DCFD8
    // 0x15018DB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_151DCFD8(rdram, ctx);
        goto after_45;
    // 0x15018DB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_45:
    // 0x15018DB8: beq         $v0, $zero, L_15018DD0
    if (ctx->r2 == 0) {
        // 0x15018DBC: nop
    
            goto L_15018DD0;
    }
    // 0x15018DBC: nop

L_15018DC0:
    // 0x15018DC0: jal         0x151DCFD8
    // 0x15018DC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_151DCFD8(rdram, ctx);
        goto after_46;
    // 0x15018DC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_46:
    // 0x15018DC8: bne         $v0, $zero, L_15018DC0
    if (ctx->r2 != 0) {
        // 0x15018DCC: nop
    
            goto L_15018DC0;
    }
    // 0x15018DCC: nop

L_15018DD0:
    // 0x15018DD0: b           L_15018DD0
    pause_self(rdram);
    // 0x15018DD4: nop

L_15018DD8:
    // 0x15018DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15018DDC:
    // 0x15018DDC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15018DE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15018DE4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15018DE8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15018DEC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15018DF0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15018DF4: jr          $ra
    // 0x15018DF8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x15018DF8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_151A8560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A8560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A8564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A8568: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151A856C: jal         0x151D5E30
    // 0x151A8570: addiu       $a0, $a1, 0x6C
    ctx->r4 = ADD32(ctx->r5, 0X6C);
    func_151D5E30(rdram, ctx);
        goto after_0;
    // 0x151A8570: addiu       $a0, $a1, 0x6C
    ctx->r4 = ADD32(ctx->r5, 0X6C);
    after_0:
    // 0x151A8574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151A8578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A857C: jr          $ra
    // 0x151A8580: nop

    return;
    return;
    // 0x151A8580: nop

;}
RECOMP_FUNC void func_1507A8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A8EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507A8F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507A8F4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507A8F8: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507A8FC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1507A900: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507A904: lbu         $t8, 0x222($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X222);
    // 0x1507A908: lbu         $t6, 0x1891($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1891);
    // 0x1507A90C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507A910: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1507A914: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1507A918: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507A91C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1507A920: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507A924: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1507A928: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507A92C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1507A930: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507A934: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1507A938: lbu         $t0, -0x3D2C($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X3D2C);
    // 0x1507A93C: addiu       $v0, $v0, 0x1892
    ctx->r2 = ADD32(ctx->r2, 0X1892);
    // 0x1507A940: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507A944: bne         $t6, $t0, L_1507A958
    if (ctx->r14 != ctx->r8) {
        // 0x1507A948: nop
    
            goto L_1507A958;
    }
    // 0x1507A948: nop

    // 0x1507A94C: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x1507A950: xori        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 ^ 0X1;
    // 0x1507A954: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_1507A958:
    // 0x1507A958: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507A95C: addiu       $v0, $v0, 0x1892
    ctx->r2 = ADD32(ctx->r2, 0X1892);
    // 0x1507A960: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x1507A964: beql        $t3, $zero, L_1507A978
    if (ctx->r11 == 0) {
        // 0x1507A968: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507A978;
    }
    goto skip_0;
    // 0x1507A968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1507A96C: jal         0x15075400
    // 0x1507A970: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x1507A970: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x1507A974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507A978:
    // 0x1507A978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507A97C: jr          $ra
    // 0x1507A980: nop

    return;
    return;
    // 0x1507A980: nop

;}
RECOMP_FUNC void func_150FC974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FC974: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150FC978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150FC97C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150FC980: lw          $t6, 0x38($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X38);
    // 0x150FC984: beql        $t6, $zero, L_150FC998
    if (ctx->r14 == 0) {
        // 0x150FC988: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150FC998;
    }
    goto skip_0;
    // 0x150FC988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150FC98C: jal         0x1516972C
    // 0x150FC990: lw          $a0, 0x38($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X38);
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150FC990: lw          $a0, 0x38($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X38);
    after_0:
    // 0x150FC994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150FC998:
    // 0x150FC998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150FC99C: jr          $ra
    // 0x150FC9A0: nop

    return;
    return;
    // 0x150FC9A0: nop

;}
RECOMP_FUNC void func_1504098C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504098C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040990: jr          $ra
    // 0x15040994: nop

    return;
    return;
    // 0x15040994: nop

;}
RECOMP_FUNC void func_10004470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10004470: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10004474: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x10004478: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1000447C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x10004480: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x10004484: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x10004488: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x1000448C: addiu       $a2, $a2, -0x7F20
    ctx->r6 = ADD32(ctx->r6, -0X7F20);
    // 0x10004490: addiu       $a1, $a1, -0x7750
    ctx->r5 = ADD32(ctx->r5, -0X7750);
    // 0x10004494: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x10004498: jal         0x100030A0
    // 0x1000449C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    osCreatePiManager_recomp(rdram, ctx);
        goto after_0;
    // 0x1000449C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x100044A0: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x100044A4: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x100044A8: lui         $s2, 0x8004
    ctx->r18 = S32(0X8004 << 16);
    // 0x100044AC: addiu       $s2, $s2, -0x76FC
    ctx->r18 = ADD32(ctx->r18, -0X76FC);
    // 0x100044B0: addiu       $s0, $s0, -0x7708
    ctx->r16 = ADD32(ctx->r16, -0X7708);
    // 0x100044B4: addiu       $s1, $s1, -0x76F8
    ctx->r17 = ADD32(ctx->r17, -0X76F8);
L_100044B8:
    // 0x100044B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x100044BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x100044C0: jal         0x10023790
    // 0x100044C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x100044C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x100044C8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x100044CC: bne         $s0, $s2, L_100044B8
    if (ctx->r16 != ctx->r18) {
        // 0x100044D0: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_100044B8;
    }
    // 0x100044D0: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    // 0x100044D4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x100044D8: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x100044DC: addiu       $a1, $a1, -0x7C00
    ctx->r5 = ADD32(ctx->r5, -0X7C00);
    // 0x100044E0: addiu       $a0, $a0, -0x7738
    ctx->r4 = ADD32(ctx->r4, -0X7738);
    // 0x100044E4: jal         0x10023790
    // 0x100044E8: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x100044E8: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_2:
    // 0x100044EC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x100044F0: sb          $zero, -0x5A90($at)
    MEM_B(-0X5A90, ctx->r1) = 0;
    // 0x100044F4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x100044F8: sb          $zero, -0x5A8F($at)
    MEM_B(-0X5A8F, ctx->r1) = 0;
    // 0x100044FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x10004500: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x10004504: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x10004508: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1000450C: jr          $ra
    // 0x10004510: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x10004510: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1506A968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506A968: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1506A96C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506A970: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506A974: addiu       $v1, $v1, 0x1560
    ctx->r3 = ADD32(ctx->r3, 0X1560);
    // 0x1506A978: addiu       $v0, $v0, 0x1570
    ctx->r2 = ADD32(ctx->r2, 0X1570);
    // 0x1506A97C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1506A980: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1506A984: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1506A988: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x1506A98C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1506A990: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1506A994: lwc1        $f4, 0x14($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X14);
    // 0x1506A998: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1506A99C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1506A9A0: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x1506A9A4: lwc1        $f6, 0x18($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X18);
    // 0x1506A9A8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1506A9AC: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1506A9B0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x1506A9B4: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x1506A9B8: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1506A9BC: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1506A9C0: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x1506A9C4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x1506A9C8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1506A9CC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1506A9D0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1506A9D4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1506A9D8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x1506A9DC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1506A9E0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x1506A9E4: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x1506A9E8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x1506A9EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1506A9F0: jal         0x151D3480
    // 0x1506A9F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151D3480(rdram, ctx);
        goto after_0;
    // 0x1506A9F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1506A9F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1506A9FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1506AA00: jr          $ra
    // 0x1506AA04: nop

    return;
    return;
    // 0x1506AA04: nop

;}
RECOMP_FUNC void func_150CB008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CB008: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150CB00C: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x150CB010: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x150CB014: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CB018: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x150CB01C: lwc1        $f12, 0x5C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x150CB020: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CB024: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150CB028: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150CB02C: lwc1        $f2, 0x48($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X48);
    // 0x150CB030: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150CB034: swc1        $f16, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f16.u32l;
    // 0x150CB038: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CB03C: mul.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x150CB040: nop

    // 0x150CB044: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150CB048: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x150CB04C: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CB050: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x150CB054: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150CB058: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150CB05C: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x150CB060: lwc1        $f18, 0x40($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X40);
    // 0x150CB064: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x150CB068: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CB06C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150CB070: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x150CB074: lwc1        $f18, 0x50($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X50);
    // 0x150CB078: swc1        $f16, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f16.u32l;
    // 0x150CB07C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CB080: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x150CB084: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x150CB088: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x150CB08C: swc1        $f8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f8.u32l;
    // 0x150CB090: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CB094: lwc1        $f8, 0x54($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X54);
    // 0x150CB098: mul.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x150CB09C: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x150CB0A0: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x150CB0A4: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
    // 0x150CB0A8: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CB0AC: lwc1        $f6, 0x58($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CB0B0: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x150CB0B4: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150CB0B8: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x150CB0BC: swc1        $f16, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f16.u32l;
    // 0x150CB0C0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CB0C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CB0C8: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150CB0CC: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x150CB0D0: swc1        $f10, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f10.u32l;
    // 0x150CB0D4: jr          $ra
    // 0x150CB0D8: nop

    return;
    return;
    // 0x150CB0D8: nop

;}
RECOMP_FUNC void func_151B3A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B3A7C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x151B3A80: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x151B3A84: addiu       $t2, $sp, 0x44
    ctx->r10 = ADD32(ctx->r29, 0X44);
    // 0x151B3A88: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x151B3A8C: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151B3A90: lw          $at, 0x14($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X14);
    // 0x151B3A94: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x151B3A98: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B3A9C: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x151B3AA0: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x151B3AA4: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x151B3AA8: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151B3AAC: lw          $t8, 0x18($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X18);
    // 0x151B3AB0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x151B3AB4: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151B3AB8: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x151B3ABC: lw          $at, 0x1C($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X1C);
    // 0x151B3AC0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B3AC4: addiu       $v1, $a0, 0x30
    ctx->r3 = ADD32(ctx->r4, 0X30);
    // 0x151B3AC8: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151B3ACC: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x151B3AD0: addiu       $a1, $v1, 0x48
    ctx->r5 = ADD32(ctx->r3, 0X48);
    // 0x151B3AD4: addiu       $a2, $v1, 0x60
    ctx->r6 = ADD32(ctx->r3, 0X60);
    // 0x151B3AD8: sw          $at, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r1;
    // 0x151B3ADC: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x151B3AE0: addiu       $a3, $v1, 0x78
    ctx->r7 = ADD32(ctx->r3, 0X78);
    // 0x151B3AE4: addiu       $t0, $v1, 0x90
    ctx->r8 = ADD32(ctx->r3, 0X90);
    // 0x151B3AE8: sw          $t4, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r12;
    // 0x151B3AEC: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x151B3AF0: swc1        $f20, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f20.u32l;
    // 0x151B3AF4: swc1        $f20, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f20.u32l;
    // 0x151B3AF8: sw          $at, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r1;
    // 0x151B3AFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B3B00: swc1        $f20, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f20.u32l;
    // 0x151B3B04: lwc1        $f8, -0x5C6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5C6C);
    // 0x151B3B08: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151B3B0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B3B10: mul.s       $f14, $f0, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151B3B14: lwc1        $f6, -0x5C68($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5C68);
    // 0x151B3B18: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B3B1C: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151B3B20: mul.s       $f16, $f2, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x151B3B24: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151B3B28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x151B3B2C: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x151B3B30: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x151B3B34: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x151B3B38: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x151B3B3C: lwc1        $f4, -0x5C64($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5C64);
    // 0x151B3B40: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x151B3B44: mul.s       $f18, $f12, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x151B3B48: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x151B3B4C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x151B3B50: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x151B3B54: sw          $at, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r1;
    // 0x151B3B58: lw          $t6, 0x4($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X4);
    // 0x151B3B5C: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
    // 0x151B3B60: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x151B3B64: swc1        $f20, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f20.u32l;
    // 0x151B3B68: swc1        $f20, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f20.u32l;
    // 0x151B3B6C: swc1        $f20, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f20.u32l;
    // 0x151B3B70: sw          $at, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r1;
    // 0x151B3B74: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151B3B78: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151B3B7C: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x151B3B80: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151B3B84: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151B3B88: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x151B3B8C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x151B3B90: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x151B3B94: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
L_151B3B98:
    // 0x151B3B98: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x151B3B9C: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x151B3BA0: lw          $t9, 0x4($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X4);
    // 0x151B3BA4: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x151B3BA8: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x151B3BAC: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x151B3BB0: swc1        $f20, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f20.u32l;
    // 0x151B3BB4: swc1        $f20, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f20.u32l;
    // 0x151B3BB8: swc1        $f20, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->f20.u32l;
    // 0x151B3BBC: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151B3BC0: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151B3BC4: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x151B3BC8: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151B3BCC: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151B3BD0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x151B3BD4: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x151B3BD8: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x151B3BDC: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x151B3BE0: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x151B3BE4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x151B3BE8: addiu       $v1, $v1, 0x60
    ctx->r3 = ADD32(ctx->r3, 0X60);
    // 0x151B3BEC: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x151B3BF0: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x151B3BF4: addiu       $a1, $a1, 0x60
    ctx->r5 = ADD32(ctx->r5, 0X60);
    // 0x151B3BF8: addiu       $a2, $a2, 0x60
    ctx->r6 = ADD32(ctx->r6, 0X60);
    // 0x151B3BFC: sw          $t5, -0x5C($a2)
    MEM_W(-0X5C, ctx->r6) = ctx->r13;
    // 0x151B3C00: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x151B3C04: addiu       $a3, $a3, 0x60
    ctx->r7 = ADD32(ctx->r7, 0X60);
    // 0x151B3C08: addiu       $t0, $t0, 0x60
    ctx->r8 = ADD32(ctx->r8, 0X60);
    // 0x151B3C0C: sw          $at, -0x58($a2)
    MEM_W(-0X58, ctx->r6) = ctx->r1;
    // 0x151B3C10: swc1        $f20, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f20.u32l;
    // 0x151B3C14: swc1        $f20, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f20.u32l;
    // 0x151B3C18: swc1        $f20, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f20.u32l;
    // 0x151B3C1C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151B3C20: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151B3C24: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x151B3C28: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151B3C2C: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151B3C30: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x151B3C34: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x151B3C38: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x151B3C3C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x151B3C40: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x151B3C44: sw          $at, -0x60($a3)
    MEM_W(-0X60, ctx->r7) = ctx->r1;
    // 0x151B3C48: lw          $t8, 0x4($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X4);
    // 0x151B3C4C: sw          $t8, -0x5C($a3)
    MEM_W(-0X5C, ctx->r7) = ctx->r24;
    // 0x151B3C50: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x151B3C54: sw          $at, -0x58($a3)
    MEM_W(-0X58, ctx->r7) = ctx->r1;
    // 0x151B3C58: swc1        $f20, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f20.u32l;
    // 0x151B3C5C: swc1        $f20, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f20.u32l;
    // 0x151B3C60: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
    // 0x151B3C64: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151B3C68: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151B3C6C: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x151B3C70: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151B3C74: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151B3C78: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x151B3C7C: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x151B3C80: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x151B3C84: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x151B3C88: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x151B3C8C: sw          $at, -0x60($t0)
    MEM_W(-0X60, ctx->r8) = ctx->r1;
    // 0x151B3C90: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x151B3C94: sw          $t4, -0x5C($t0)
    MEM_W(-0X5C, ctx->r8) = ctx->r12;
    // 0x151B3C98: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x151B3C9C: sw          $at, -0x58($t0)
    MEM_W(-0X58, ctx->r8) = ctx->r1;
    // 0x151B3CA0: swc1        $f20, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f20.u32l;
    // 0x151B3CA4: swc1        $f20, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f20.u32l;
    // 0x151B3CA8: swc1        $f20, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f20.u32l;
    // 0x151B3CAC: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151B3CB0: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151B3CB4: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x151B3CB8: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151B3CBC: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151B3CC0: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x151B3CC4: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x151B3CC8: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x151B3CCC: bne         $v0, $t1, L_151B3B98
    if (ctx->r2 != ctx->r9) {
        // 0x151B3CD0: swc1        $f4, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
            goto L_151B3B98;
    }
    // 0x151B3CD0: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x151B3CD4: lbu         $t5, 0x10($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X10);
    // 0x151B3CD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151B3CDC: andi        $t3, $t5, 0xFFFD
    ctx->r11 = ctx->r13 & 0XFFFD;
    // 0x151B3CE0: sb          $t3, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r11;
    // 0x151B3CE4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x151B3CE8: jr          $ra
    // 0x151B3CEC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x151B3CEC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_151A1EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A1EE8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x151A1EEC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151A1EF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151A1EF4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151A1EF8: lw          $at, 0x28($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X28);
    // 0x151A1EFC: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x151A1F00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151A1F04: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151A1F08: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
    // 0x151A1F0C: addiu       $t8, $zero, 0x24
    ctx->r24 = ADD32(0, 0X24);
    // 0x151A1F10: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151A1F14: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151A1F18: lw          $at, 0x30($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X30);
    // 0x151A1F1C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x151A1F20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151A1F24: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151A1F28: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A1F2C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x151A1F30: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x151A1F34: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151A1F38: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x151A1F3C: lh          $t0, 0x3E($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X3E);
    // 0x151A1F40: sh          $t0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r8;
    // 0x151A1F44: lh          $t1, 0x40($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X40);
    // 0x151A1F48: sh          $t1, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r9;
    // 0x151A1F4C: lh          $t2, 0x42($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X42);
    // 0x151A1F50: sh          $t2, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r10;
    // 0x151A1F54: lh          $t3, 0x44($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X44);
    // 0x151A1F58: sh          $t3, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r11;
    // 0x151A1F5C: lh          $t4, 0x46($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X46);
    // 0x151A1F60: sh          $t4, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r12;
    // 0x151A1F64: lh          $t5, 0x48($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X48);
    // 0x151A1F68: sh          $t5, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r13;
    // 0x151A1F6C: lh          $a0, 0x3C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X3C);
    // 0x151A1F70: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151A1F74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151A1F78: lbu         $t7, 0xC($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC);
    // 0x151A1F7C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151A1F80: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x151A1F84: jal         0x151491F4
    // 0x151A1F88: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_151491F4(rdram, ctx);
        goto after_0;
    // 0x151A1F88: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x151A1F8C: beq         $v0, $zero, L_151A1FA0
    if (ctx->r2 == 0) {
        // 0x151A1F90: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_151A1FA0;
    }
    // 0x151A1F90: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151A1F94: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x151A1F98: jal         0x10022EC0
    // 0x151A1F9C: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151A1F9C: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_1:
L_151A1FA0:
    // 0x151A1FA0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151A1FA4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151A1FA8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x151A1FAC: jr          $ra
    // 0x151A1FB0: nop

    return;
    return;
    // 0x151A1FB0: nop

;}
RECOMP_FUNC void func_15009EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009EF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15009EF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15009EFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15009F00: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15009F04: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15009F08: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15009F0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15009F10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15009F14: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x15009F18: jal         0x151615F8
    // 0x15009F1C: addiu       $a3, $zero, 0x23
    ctx->r7 = ADD32(0, 0X23);
    func_151615F8(rdram, ctx);
        goto after_0;
    // 0x15009F1C: addiu       $a3, $zero, 0x23
    ctx->r7 = ADD32(0, 0X23);
    after_0:
    // 0x15009F20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15009F24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15009F28: jr          $ra
    // 0x15009F2C: nop

    return;
    return;
    // 0x15009F2C: nop

;}
RECOMP_FUNC void _getRate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10020E18: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x10020E1C: bne         $a2, $zero, L_10020E58
    if (ctx->r6 != 0) {
        // 0x10020E20: nop
    
            goto L_10020E58;
    }
    // 0x10020E20: nop

    // 0x10020E24: c.le.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl <= ctx->f14.fl;
    // 0x10020E28: nop

    // 0x10020E2C: bc1f        L_10020E4C
    if (!c1cs) {
        // 0x10020E30: nop
    
            goto L_10020E4C;
    }
    // 0x10020E30: nop

    // 0x10020E34: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x10020E38: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
    // 0x10020E3C: b           L_10021020
    // 0x10020E40: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_10021020;
    // 0x10020E40: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x10020E44: b           L_10020E58
    // 0x10020E48: nop

        goto L_10020E58;
    // 0x10020E48: nop

L_10020E4C:
    // 0x10020E4C: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    // 0x10020E50: b           L_10021020
    // 0x10020E54: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
        goto L_10021020;
    // 0x10020E54: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
L_10020E58:
    // 0x10020E58: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x10020E5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x10020E60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x10020E64: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x10020E68: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x10020E6C: swc1        $f10, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f10.u32l;
    // 0x10020E70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x10020E74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x10020E78: nop

    // 0x10020E7C: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x10020E80: nop

    // 0x10020E84: bc1f        L_10020E98
    if (!c1cs) {
        // 0x10020E88: nop
    
            goto L_10020E98;
    }
    // 0x10020E88: nop

    // 0x10020E8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x10020E90: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x10020E94: nop

L_10020E98:
    // 0x10020E98: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x10020E9C: nop

    // 0x10020EA0: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x10020EA4: nop

    // 0x10020EA8: bc1f        L_10020EBC
    if (!c1cs) {
        // 0x10020EAC: nop
    
            goto L_10020EBC;
    }
    // 0x10020EAC: nop

    // 0x10020EB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x10020EB4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x10020EB8: nop

L_10020EBC:
    // 0x10020EBC: sub.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x10020EC0: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x10020EC4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x10020EC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x10020ECC: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x10020ED0: nop

    // 0x10020ED4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x10020ED8: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x10020EDC: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x10020EE0: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x10020EE4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x10020EE8: nop

    // 0x10020EEC: sh          $t8, 0xE($sp)
    MEM_H(0XE, ctx->r29) = ctx->r24;
    // 0x10020EF0: lh          $t9, 0xE($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XE);
    // 0x10020EF4: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x10020EF8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x10020EFC: nop

    // 0x10020F00: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x10020F04: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x10020F08: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
    // 0x10020F0C: lh          $t0, 0xE($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XE);
    // 0x10020F10: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x10020F14: sh          $t1, 0xE($sp)
    MEM_H(0XE, ctx->r29) = ctx->r9;
    // 0x10020F18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x10020F1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x10020F20: lwc1        $f18, 0x0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X0);
    // 0x10020F24: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x10020F28: swc1        $f8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f8.u32l;
    // 0x10020F2C: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x10020F30: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x10020F34: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x10020F38: nop

    // 0x10020F3C: sh          $t3, 0xC($sp)
    MEM_H(0XC, ctx->r29) = ctx->r11;
    // 0x10020F40: lh          $t4, 0xE($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XE);
    // 0x10020F44: lh          $t5, 0xC($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XC);
    // 0x10020F48: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x10020F4C: sh          $t6, 0xE($sp)
    MEM_H(0XE, ctx->r29) = ctx->r14;
    // 0x10020F50: lh          $t7, 0xC($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XC);
    // 0x10020F54: lwc1        $f16, 0x0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X0);
    // 0x10020F58: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x10020F5C: nop

    // 0x10020F60: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x10020F64: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x10020F68: swc1        $f8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f8.u32l;
    // 0x10020F6C: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10020F70: lwc1        $f4, -0x37EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X37EC);
    // 0x10020F74: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x10020F78: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x10020F7C: mul.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x10020F80: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x10020F84: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x10020F88: nop

    // 0x10020F8C: cvt.w.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_S(ctx->f18.fl);
    // 0x10020F90: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x10020F94: nop

    // 0x10020F98: andi        $at, $t9, 0x4
    ctx->r1 = ctx->r25 & 0X4;
    // 0x10020F9C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x10020FA0: beq         $t9, $zero, L_10020FF4
    if (ctx->r25 == 0) {
        // 0x10020FA4: nop
    
            goto L_10020FF4;
    }
    // 0x10020FA4: nop

    // 0x10020FA8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x10020FAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x10020FB0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x10020FB4: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x10020FB8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x10020FBC: nop

    // 0x10020FC0: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x10020FC4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x10020FC8: nop

    // 0x10020FCC: andi        $at, $t9, 0x4
    ctx->r1 = ctx->r25 & 0X4;
    // 0x10020FD0: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x10020FD4: bne         $t9, $zero, L_10020FEC
    if (ctx->r25 != 0) {
        // 0x10020FD8: nop
    
            goto L_10020FEC;
    }
    // 0x10020FD8: nop

    // 0x10020FDC: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x10020FE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x10020FE4: b           L_10021004
    // 0x10020FE8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_10021004;
    // 0x10020FE8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_10020FEC:
    // 0x10020FEC: b           L_10021004
    // 0x10020FF0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_10021004;
    // 0x10020FF0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
L_10020FF4:
    // 0x10020FF4: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x10020FF8: nop

    // 0x10020FFC: bltz        $t9, L_10020FEC
    if (SIGNED(ctx->r25) < 0) {
        // 0x10021000: nop
    
            goto L_10020FEC;
    }
    // 0x10021000: nop

L_10021004:
    // 0x10021004: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x10021008: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
    // 0x1002100C: nop

    // 0x10021010: b           L_10021020
    // 0x10021014: lh          $v0, 0xE($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XE);
        goto L_10021020;
    // 0x10021014: lh          $v0, 0xE($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XE);
    // 0x10021018: b           L_10021020
    // 0x1002101C: nop

        goto L_10021020;
    // 0x1002101C: nop

L_10021020:
    // 0x10021020: jr          $ra
    // 0x10021024: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x10021024: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_100114D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100114D0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x100114D4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x100114D8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x100114DC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x100114E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x100114E4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x100114E8: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x100114EC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x100114F0: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x100114F4: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x100114F8: lw          $v0, 0x2FA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2FA0);
    // 0x100114FC: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x10011500: addiu       $t6, $t6, 0x1F68
    ctx->r14 = ADD32(ctx->r14, 0X1F68);
    // 0x10011504: beq         $v0, $zero, L_10011584
    if (ctx->r2 == 0) {
        // 0x10011508: or          $t1, $t6, $zero
        ctx->r9 = ctx->r14 | 0;
            goto L_10011584;
    }
    // 0x10011508: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x1001150C: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x10011510: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x10011514: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x10011518: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_1001151C:
    // 0x1001151C: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x10011520: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x10011524: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x10011528: subu        $v1, $s0, $t7
    ctx->r3 = SUB32(ctx->r16, ctx->r15);
    // 0x1001152C: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10011530: subu        $a0, $s1, $t8
    ctx->r4 = SUB32(ctx->r17, ctx->r24);
    // 0x10011534: subu        $a1, $s2, $t9
    ctx->r5 = SUB32(ctx->r18, ctx->r25);
    // 0x10011538: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x1001153C: mflo        $t3
    ctx->r11 = lo;
    // 0x10011540: nop

    // 0x10011544: nop

    // 0x10011548: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1001154C: mflo        $t4
    ctx->r12 = lo;
    // 0x10011550: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x10011554: nop

    // 0x10011558: multu       $a1, $a1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1001155C: mflo        $t6
    ctx->r14 = lo;
    // 0x10011560: addu        $a3, $t5, $t6
    ctx->r7 = ADD32(ctx->r13, ctx->r14);
    // 0x10011564: sltu        $at, $a3, $t0
    ctx->r1 = ctx->r7 < ctx->r8 ? 1 : 0;
    // 0x10011568: beql        $at, $zero, L_1001157C
    if (ctx->r1 == 0) {
        // 0x1001156C: sltu        $at, $t2, $a2
        ctx->r1 = ctx->r10 < ctx->r6 ? 1 : 0;
            goto L_1001157C;
    }
    goto skip_0;
    // 0x1001156C: sltu        $at, $t2, $a2
    ctx->r1 = ctx->r10 < ctx->r6 ? 1 : 0;
    skip_0:
    // 0x10011570: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x10011574: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x10011578: sltu        $at, $t2, $a2
    ctx->r1 = ctx->r10 < ctx->r6 ? 1 : 0;
L_1001157C:
    // 0x1001157C: beq         $at, $zero, L_1001151C
    if (ctx->r1 == 0) {
        // 0x10011580: addiu       $v0, $v0, 0x1C
        ctx->r2 = ADD32(ctx->r2, 0X1C);
            goto L_1001151C;
    }
    // 0x10011580: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
L_10011584:
    // 0x10011584: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x10011588: lw          $t7, 0xC($t1)
    ctx->r15 = MEM_W(ctx->r9, 0XC);
    // 0x1001158C: lw          $t8, 0x10($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X10);
    // 0x10011590: lw          $t9, 0x14($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X14);
    // 0x10011594: lw          $a3, 0x18($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X18);
    // 0x10011598: subu        $t4, $s0, $t3
    ctx->r12 = SUB32(ctx->r16, ctx->r11);
    // 0x1001159C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x100115A0: lw          $t5, 0x4($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X4);
    // 0x100115A4: subu        $a0, $s0, $t7
    ctx->r4 = SUB32(ctx->r16, ctx->r15);
    // 0x100115A8: subu        $a2, $s2, $t9
    ctx->r6 = SUB32(ctx->r18, ctx->r25);
    // 0x100115AC: subu        $t6, $s1, $t5
    ctx->r14 = SUB32(ctx->r17, ctx->r13);
    // 0x100115B0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x100115B4: lw          $t7, 0x8($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X8);
    // 0x100115B8: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x100115BC: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x100115C0: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x100115C4: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x100115C8: subu        $a1, $s1, $t8
    ctx->r5 = SUB32(ctx->r17, ctx->r24);
    // 0x100115CC: addiu       $t5, $sp, 0x5C
    ctx->r13 = ADD32(ctx->r29, 0X5C);
    // 0x100115D0: subu        $t8, $s2, $t7
    ctx->r24 = SUB32(ctx->r18, ctx->r15);
    // 0x100115D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x100115D8: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x100115DC: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x100115E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x100115E4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x100115E8: jal         0x1000A420
    // 0x100115EC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_1000A420(rdram, ctx);
        goto after_0;
    // 0x100115EC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_0:
    // 0x100115F0: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x100115F4: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x100115F8: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x100115FC: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10011600: mflo        $t9
    ctx->r25 = lo;
    // 0x10011604: srl         $t3, $t9, 15
    ctx->r11 = S32(U32(ctx->r25) >> 15);
    // 0x10011608: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x1001160C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x10011610: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x10011614: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x10011618: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x1001161C: jr          $ra
    // 0x10011620: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x10011620: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_1518EF54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518EF54: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1518EF58: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x1518EF5C: lwc1        $f0, 0x150($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X150);
    // 0x1518EF60: lwc1        $f4, 0x140($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X140);
    // 0x1518EF64: lwc1        $f8, 0x14C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x1518EF68: addiu       $v1, $a0, 0x110
    ctx->r3 = ADD32(ctx->r4, 0X110);
    // 0x1518EF6C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1518EF70: swc1        $f6, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->f6.u32l;
    // 0x1518EF74: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1518EF78: lwc1        $f6, 0x144($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X144);
    // 0x1518EF7C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1518EF80: lwc1        $f10, 0x148($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X148);
    // 0x1518EF84: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1518EF88: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1518EF8C: lwc1        $f4, 0x140($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X140);
    // 0x1518EF90: swc1        $f8, 0x144($a0)
    MEM_W(0X144, ctx->r4) = ctx->f8.u32l;
    // 0x1518EF94: lwc1        $f8, 0x144($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X144);
    // 0x1518EF98: swc1        $f6, 0x148($a0)
    MEM_W(0X148, ctx->r4) = ctx->f6.u32l;
    // 0x1518EF9C: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1518EFA0: lwc1        $f10, 0x148($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X148);
    // 0x1518EFA4: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x1518EFA8: mul.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1518EFAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518EFB0: mul.s       $f14, $f8, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1518EFB4: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1518EFB8: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1518EFBC: add.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x1518EFC0: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1518EFC4: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x1518EFC8: lwc1        $f8, 0x40($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X40);
    // 0x1518EFCC: swc1        $f4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f4.u32l;
    // 0x1518EFD0: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x1518EFD4: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x1518EFD8: lwc1        $f6, 0x44($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X44);
    // 0x1518EFDC: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x1518EFE0: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x1518EFE4: lwc1        $f8, 0x48($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X48);
    // 0x1518EFE8: add.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x1518EFEC: swc1        $f10, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f10.u32l;
    // 0x1518EFF0: lwc1        $f6, 0x40($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X40);
    // 0x1518EFF4: lwc1        $f18, 0x34($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X34);
    // 0x1518EFF8: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1518EFFC: swc1        $f4, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f4.u32l;
    // 0x1518F000: lwc1        $f8, 0x15C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X15C);
    // 0x1518F004: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x1518F008: swc1        $f10, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f10.u32l;
    // 0x1518F00C: lwc1        $f0, 0x38($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1518F010: lwc1        $f2, 0x3C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1518F014: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1518F018: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x1518F01C: sub.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x1518F020: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x1518F024: swc1        $f6, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f6.u32l;
    // 0x1518F028: lwc1        $f10, 0x4C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x1518F02C: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1518F030: lwc1        $f8, 0x48($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X48);
    // 0x1518F034: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x1518F038: add.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x1518F03C: swc1        $f4, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f4.u32l;
    // 0x1518F040: lwc1        $f6, 0x4C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x1518F044: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1518F048: add.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1518F04C: swc1        $f8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f8.u32l;
    // 0x1518F050: jr          $ra
    // 0x1518F054: nop

    return;
    return;
    // 0x1518F054: nop

;}
RECOMP_FUNC void func_150CFF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CFF10: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x150CFF14: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150CFF18: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x150CFF1C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x150CFF20: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x150CFF24: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x150CFF28: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x150CFF2C: lbu         $t6, 0x7F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X7F);
    // 0x150CFF30: lb          $t7, 0x7B($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X7B);
    // 0x150CFF34: lbu         $t0, 0x6B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X6B);
    // 0x150CFF38: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150CFF3C: sb          $zero, 0x55($sp)
    MEM_B(0X55, ctx->r29) = 0;
    // 0x150CFF40: sb          $t8, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r24;
    // 0x150CFF44: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x150CFF48: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x150CFF4C: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x150CFF50: sb          $t6, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r14;
    // 0x150CFF54: sb          $t7, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r15;
    // 0x150CFF58: jal         0x150CFD84
    // 0x150CFF5C: sb          $t0, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r8;
    func_150CFD84(rdram, ctx);
        goto after_0;
    // 0x150CFF5C: sb          $t0, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r8;
    after_0:
    // 0x150CFF60: sb          $v0, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r2;
    // 0x150CFF64: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x150CFF68: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x150CFF6C: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x150CFF70: jal         0x150CFDB8
    // 0x150CFF74: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    func_150CFDB8(rdram, ctx);
        goto after_1;
    // 0x150CFF74: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    after_1:
    // 0x150CFF78: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x150CFF7C: sll         $t5, $v0, 1
    ctx->r13 = S32(ctx->r2 << 1);
    // 0x150CFF80: lbu         $t8, 0x83($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X83);
    // 0x150CFF84: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x150CFF88: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150CFF8C: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x150CFF90: addiu       $t7, $t6, 0x2A
    ctx->r15 = ADD32(ctx->r14, 0X2A);
    // 0x150CFF94: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150CFF98: addiu       $t3, $zero, 0x47
    ctx->r11 = ADD32(0, 0X47);
    // 0x150CFF9C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x150CFFA0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150CFFA4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150CFFA8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150CFFAC: lh          $a0, 0x72($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X72);
    // 0x150CFFB0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150CFFB4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x150CFFB8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x150CFFBC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x150CFFC0: jal         0x15149130
    // 0x150CFFC4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_15149130(rdram, ctx);
        goto after_2;
    // 0x150CFFC4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_2:
    // 0x150CFFC8: beq         $v0, $zero, L_150D0020
    if (ctx->r2 == 0) {
        // 0x150CFFCC: sw          $v0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r2;
            goto L_150D0020;
    }
    // 0x150CFFCC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x150CFFD0: addiu       $a3, $v0, 0x28
    ctx->r7 = ADD32(ctx->r2, 0X28);
    // 0x150CFFD4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x150CFFD8: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x150CFFDC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x150CFFE0: jal         0x10022EC0
    // 0x150CFFE4: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x150CFFE4: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_3:
    // 0x150CFFE8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x150CFFEC: addiu       $a1, $a3, 0x28
    ctx->r5 = ADD32(ctx->r7, 0X28);
    // 0x150CFFF0: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x150CFFF4: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x150CFFF8: addu        $v1, $a1, $t9
    ctx->r3 = ADD32(ctx->r5, ctx->r25);
    // 0x150CFFFC: sw          $v1, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r3;
    // 0x150D0000: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x150D0004: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x150D0008: sw          $t2, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r10;
    // 0x150D000C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x150D0010: lw          $t3, 0x1C($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X1C);
    // 0x150D0014: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x150D0018: jal         0x150CFE3C
    // 0x150D001C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_150CFE3C(rdram, ctx);
        goto after_4;
    // 0x150D001C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_4:
L_150D0020:
    // 0x150D0020: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x150D0024: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150D0028: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x150D002C: jr          $ra
    // 0x150D0030: nop

    return;
    return;
    // 0x150D0030: nop

;}
RECOMP_FUNC void func_1508C1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508C1A4: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x1508C1A8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1508C1AC: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x1508C1B0: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x1508C1B4: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x1508C1B8: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x1508C1BC: ori         $at, $at, 0xFFF
    ctx->r1 = ctx->r1 | 0XFFF;
    // 0x1508C1C0: and         $t7, $a0, $at
    ctx->r15 = ctx->r4 & ctx->r1;
    // 0x1508C1C4: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x1508C1C8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x1508C1CC: jal         0x1505EEF4
    // 0x1508C1D0: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    func_1505EEF4(rdram, ctx);
        goto after_0;
    // 0x1508C1D0: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    after_0:
    // 0x1508C1D4: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x1508C1D8: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x1508C1DC: ori         $at, $at, 0xFFF
    ctx->r1 = ctx->r1 | 0XFFF;
    // 0x1508C1E0: and         $t9, $a0, $at
    ctx->r25 = ctx->r4 & ctx->r1;
    // 0x1508C1E4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x1508C1E8: jal         0x1505EEF4
    // 0x1508C1EC: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    func_1505EEF4(rdram, ctx);
        goto after_1;
    // 0x1508C1EC: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    after_1:
    // 0x1508C1F0: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x1508C1F4: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x1508C1F8: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x1508C1FC: beq         $v1, $zero, L_1508C508
    if (ctx->r3 == 0) {
        // 0x1508C200: nop
    
            goto L_1508C508;
    }
    // 0x1508C200: nop

    // 0x1508C204: beq         $v0, $zero, L_1508C508
    if (ctx->r2 == 0) {
        // 0x1508C208: nop
    
            goto L_1508C508;
    }
    // 0x1508C208: nop

    // 0x1508C20C: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1508C210: lwc1        $f12, 0x14($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1508C214: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x1508C218: lw          $a0, 0x31C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X31C);
    // 0x1508C21C: lbu         $a2, 0x84($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X84);
    // 0x1508C220: beql        $a2, $zero, L_1508C278
    if (ctx->r6 == 0) {
        // 0x1508C224: lw          $t4, 0x0($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X0);
            goto L_1508C278;
    }
    goto skip_0;
    // 0x1508C224: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x1508C228: lh          $t8, 0x114($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X114);
    // 0x1508C22C: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x1508C230: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508C234: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1508C238: lbu         $t3, 0x75($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X75);
    // 0x1508C23C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1508C240: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1508C244: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1508C248: andi        $t2, $t3, 0x7F
    ctx->r10 = ctx->r11 & 0X7F;
    // 0x1508C24C: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1508C250: bne         $t2, $at, L_1508C268
    if (ctx->r10 != ctx->r1) {
        // 0x1508C254: add.s       $f14, $f8, $f4
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f4.fl;
            goto L_1508C268;
    }
    // 0x1508C254: add.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1508C258: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1508C25C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508C260: nop

    // 0x1508C264: sub.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f10.fl;
L_1508C268:
    // 0x1508C268: lw          $a0, 0x31C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X31C);
    // 0x1508C26C: b           L_1508C310
    // 0x1508C270: lbu         $a1, 0x84($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X84);
        goto L_1508C310;
    // 0x1508C270: lbu         $a1, 0x84($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X84);
    // 0x1508C274: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
L_1508C278:
    // 0x1508C278: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x1508C27C: bnel        $t4, $at, L_1508C2A4
    if (ctx->r12 != ctx->r1) {
        // 0x1508C280: lw          $a0, 0x31C($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X31C);
            goto L_1508C2A4;
    }
    goto skip_1;
    // 0x1508C280: lw          $a0, 0x31C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X31C);
    skip_1:
    // 0x1508C284: lwc1        $f18, 0x18($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1508C288: lw          $a0, 0x31C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X31C);
    // 0x1508C28C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1508C290: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1508C294: lbu         $a1, 0x84($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X84);
    // 0x1508C298: b           L_1508C310
    // 0x1508C29C: add.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
        goto L_1508C310;
    // 0x1508C29C: add.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x1508C2A0: lw          $a0, 0x31C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X31C);
L_1508C2A4:
    // 0x1508C2A4: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x1508C2A8: lbu         $a1, 0x84($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X84);
    // 0x1508C2AC: beql        $a1, $zero, L_1508C304
    if (ctx->r5 == 0) {
        // 0x1508C2B0: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_1508C304;
    }
    goto skip_2;
    // 0x1508C2B0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    skip_2:
    // 0x1508C2B4: lb          $t5, 0xBD0($t5)
    ctx->r13 = MEM_B(ctx->r13, 0XBD0);
    // 0x1508C2B8: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1508C2BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1508C2C0: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x1508C2C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1508C2C8: lh          $t7, 0x72C4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X72C4);
    // 0x1508C2CC: beql        $t7, $at, L_1508C304
    if (ctx->r15 == ctx->r1) {
        // 0x1508C2D0: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_1508C304;
    }
    goto skip_3;
    // 0x1508C2D0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    skip_3:
    // 0x1508C2D4: lh          $t3, 0x1A8($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X1A8);
    // 0x1508C2D8: lh          $t9, 0x1A4($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X1A4);
    // 0x1508C2DC: lh          $t8, 0x1A6($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X1A6);
    // 0x1508C2E0: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x1508C2E4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1508C2E8: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1508C2EC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508C2F0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508C2F4: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x1508C2F8: b           L_1508C310
    // 0x1508C2FC: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
        goto L_1508C310;
    // 0x1508C2FC: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508C300: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
L_1508C304:
    // 0x1508C304: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508C308: lwc1        $f4, 0x18($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1508C30C: add.s       $f14, $f4, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f10.fl;
L_1508C310:
    // 0x1508C310: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1508C314: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x1508C318: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1508C31C: beq         $a1, $zero, L_1508C364
    if (ctx->r5 == 0) {
        // 0x1508C320: swc1        $f8, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
            goto L_1508C364;
    }
    // 0x1508C320: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x1508C324: lh          $t2, 0x114($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X114);
    // 0x1508C328: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x1508C32C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508C330: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x1508C334: lbu         $t4, 0x75($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X75);
    // 0x1508C338: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1508C33C: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508C340: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1508C344: andi        $t5, $t4, 0x7F
    ctx->r13 = ctx->r12 & 0X7F;
    // 0x1508C348: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1508C34C: bne         $t5, $at, L_1508C3F0
    if (ctx->r13 != ctx->r1) {
        // 0x1508C350: add.s       $f16, $f4, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f8.fl;
            goto L_1508C3F0;
    }
    // 0x1508C350: add.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1508C354: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1508C358: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508C35C: b           L_1508C3F0
    // 0x1508C360: sub.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f10.fl;
        goto L_1508C3F0;
    // 0x1508C360: sub.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f10.fl;
L_1508C364:
    // 0x1508C364: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1508C368: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x1508C36C: bne         $t6, $at, L_1508C384
    if (ctx->r14 != ctx->r1) {
        // 0x1508C370: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_1508C384;
    }
    // 0x1508C370: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1508C374: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1508C378: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1508C37C: b           L_1508C3F0
    // 0x1508C380: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
        goto L_1508C3F0;
    // 0x1508C380: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
L_1508C384:
    // 0x1508C384: beq         $a2, $zero, L_1508C3E0
    if (ctx->r6 == 0) {
        // 0x1508C388: lui         $t7, 0x800E
        ctx->r15 = S32(0X800E << 16);
            goto L_1508C3E0;
    }
    // 0x1508C388: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1508C38C: lb          $t7, 0xBD0($t7)
    ctx->r15 = MEM_B(ctx->r15, 0XBD0);
    // 0x1508C390: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x1508C394: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1508C398: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x1508C39C: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x1508C3A0: lh          $t8, 0x72C4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X72C4);
    // 0x1508C3A4: beql        $t8, $at, L_1508C3E4
    if (ctx->r24 == ctx->r1) {
        // 0x1508C3A8: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_1508C3E4;
    }
    goto skip_4;
    // 0x1508C3A8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    skip_4:
    // 0x1508C3AC: lh          $t3, 0x1A4($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X1A4);
    // 0x1508C3B0: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x1508C3B4: nop

    // 0x1508C3B8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1508C3BC: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x1508C3C0: lh          $t4, 0x1A8($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X1A8);
    // 0x1508C3C4: lh          $t2, 0x1A6($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X1A6);
    // 0x1508C3C8: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1508C3CC: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x1508C3D0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508C3D4: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508C3D8: b           L_1508C3F0
    // 0x1508C3DC: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
        goto L_1508C3F0;
    // 0x1508C3DC: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
L_1508C3E0:
    // 0x1508C3E0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
L_1508C3E4:
    // 0x1508C3E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508C3E8: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1508C3EC: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
L_1508C3F0:
    // 0x1508C3F0: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1508C3F4: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1508C3F8: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1508C3FC: sub.s       $f2, $f16, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x1508C400: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x1508C404: addiu       $t5, $sp, 0x84
    ctx->r13 = ADD32(ctx->r29, 0X84);
    // 0x1508C408: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1508C40C: addiu       $t6, $sp, 0x80
    ctx->r14 = ADD32(ctx->r29, 0X80);
    // 0x1508C410: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x1508C414: sub.s       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x1508C418: mul.s       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x1508C41C: addiu       $t9, $sp, 0x78
    ctx->r25 = ADD32(ctx->r29, 0X78);
    // 0x1508C420: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x1508C424: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x1508C428: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x1508C42C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x1508C430: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1508C434: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x1508C438: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x1508C43C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1508C440: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x1508C444: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x1508C448: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x1508C44C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1508C450: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1508C454: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1508C458: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1508C45C: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1508C460: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1508C464: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x1508C468: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1508C46C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1508C470: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1508C474: sw          $t0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r8;
    // 0x1508C478: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    // 0x1508C47C: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x1508C480: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x1508C484: jal         0x150AC9C0
    // 0x1508C488: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    func_150AC9C0(rdram, ctx);
        goto after_2;
    // 0x1508C488: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x1508C48C: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x1508C490: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x1508C494: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1508C498: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1508C49C: bne         $v0, $zero, L_1508C4AC
    if (ctx->r2 != 0) {
        // 0x1508C4A0: lwc1        $f18, 0x5C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_1508C4AC;
    }
    // 0x1508C4A0: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1508C4A4: b           L_1508C4C8
    // 0x1508C4A8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_1508C4C8;
    // 0x1508C4A8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_1508C4AC:
    // 0x1508C4AC: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1508C4B0: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1508C4B4: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x1508C4B8: nop

    // 0x1508C4BC: bc1f        L_1508C4C8
    if (!c1cs) {
        // 0x1508C4C0: nop
    
            goto L_1508C4C8;
    }
    // 0x1508C4C0: nop

    // 0x1508C4C4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_1508C4C8:
    // 0x1508C4C8: beq         $t0, $zero, L_1508C508
    if (ctx->r8 == 0) {
        // 0x1508C4CC: sw          $t0, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r8;
            goto L_1508C508;
    }
    // 0x1508C4CC: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x1508C4D0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1508C4D4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x1508C4D8: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x1508C4DC: sw          $t0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r8;
    // 0x1508C4E0: jal         0x15086D94
    // 0x1508C4E4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_15086D94(rdram, ctx);
        goto after_3;
    // 0x1508C4E4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x1508C4E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1508C4EC: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x1508C4F0: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x1508C4F4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x1508C4F8: nop

    // 0x1508C4FC: bc1f        L_1508C508
    if (!c1cs) {
        // 0x1508C500: nop
    
            goto L_1508C508;
    }
    // 0x1508C500: nop

    // 0x1508C504: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_1508C508:
    // 0x1508C508: beq         $t0, $zero, L_1508C558
    if (ctx->r8 == 0) {
        // 0x1508C50C: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_1508C558;
    }
    // 0x1508C50C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1508C510: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x1508C514: addiu       $a0, $a0, 0x23B0
    ctx->r4 = ADD32(ctx->r4, 0X23B0);
    // 0x1508C518: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x1508C51C: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x1508C520: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1508C524: addu        $v0, $t8, $t3
    ctx->r2 = ADD32(ctx->r24, ctx->r11);
    // 0x1508C528: lw          $t2, 0x16C0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X16C0);
    // 0x1508C52C: sllv        $t5, $t4, $t1
    ctx->r13 = S32(ctx->r12 << (ctx->r9 & 31));
    // 0x1508C530: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x1508C534: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x1508C538: sw          $t6, 0x16C0($v0)
    MEM_W(0X16C0, ctx->r2) = ctx->r14;
    // 0x1508C53C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x1508C540: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1508C544: sllv        $t4, $t3, $a2
    ctx->r12 = S32(ctx->r11 << (ctx->r6 & 31));
    // 0x1508C548: addu        $v1, $t7, $t9
    ctx->r3 = ADD32(ctx->r15, ctx->r25);
    // 0x1508C54C: lw          $t8, 0x16C0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X16C0);
    // 0x1508C550: or          $t2, $t8, $t4
    ctx->r10 = ctx->r24 | ctx->r12;
    // 0x1508C554: sw          $t2, 0x16C0($v1)
    MEM_W(0X16C0, ctx->r3) = ctx->r10;
L_1508C558:
    // 0x1508C558: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x1508C55C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1508C560: addiu       $a0, $a0, 0x23B0
    ctx->r4 = ADD32(ctx->r4, 0X23B0);
    // 0x1508C564: beq         $t5, $zero, L_1508C5A8
    if (ctx->r13 == 0) {
        // 0x1508C568: lw          $a2, 0xA8($sp)
        ctx->r6 = MEM_W(ctx->r29, 0XA8);
            goto L_1508C5A8;
    }
    // 0x1508C568: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x1508C56C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x1508C570: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x1508C574: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x1508C578: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1508C57C: lw          $t9, 0x16C0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X16C0);
    // 0x1508C580: sllv        $t3, $a1, $t1
    ctx->r11 = S32(ctx->r5 << (ctx->r9 & 31));
    // 0x1508C584: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x1508C588: or          $t8, $t9, $t3
    ctx->r24 = ctx->r25 | ctx->r11;
    // 0x1508C58C: sw          $t8, 0x16C0($v0)
    MEM_W(0X16C0, ctx->r2) = ctx->r24;
    // 0x1508C590: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x1508C594: sllv        $t6, $a1, $a2
    ctx->r14 = S32(ctx->r5 << (ctx->r6 & 31));
    // 0x1508C598: addu        $v1, $t4, $t2
    ctx->r3 = ADD32(ctx->r12, ctx->r10);
    // 0x1508C59C: lw          $t5, 0x16C0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X16C0);
    // 0x1508C5A0: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x1508C5A4: sw          $t7, 0x16C0($v1)
    MEM_W(0X16C0, ctx->r3) = ctx->r15;
L_1508C5A8:
    // 0x1508C5A8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1508C5AC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x1508C5B0: jr          $ra
    // 0x1508C5B4: nop

    return;
    return;
    // 0x1508C5B4: nop

;}
RECOMP_FUNC void func_100051E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100051E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x100051EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100051F0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x100051F4: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x100051F8: addiu       $a1, $a1, -0x4DC0
    ctx->r5 = ADD32(ctx->r5, -0X4DC0);
    // 0x100051FC: lw          $a0, -0x4DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DD0);
    // 0x10005200: jal         0x10023580
    // 0x10005204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x10005204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x10005208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000520C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10005210: jr          $ra
    // 0x10005214: nop

    return;
    return;
    // 0x10005214: nop

;}
RECOMP_FUNC void func_15013778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15013778: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x1501377C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15013780: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15013784: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15013788: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x1501378C: beql        $v0, $zero, L_15013958
    if (ctx->r2 == 0) {
        // 0x15013790: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15013958;
    }
    goto skip_0;
    // 0x15013790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15013794: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15013798: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1501379C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150137A0: add.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x150137A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150137A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150137AC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150137B0: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x150137B4: lh          $t6, 0x6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X6);
    // 0x150137B8: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150137BC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x150137C0: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x150137C4: div.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150137C8: lwc1        $f8, 0x6640($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6640);
    // 0x150137CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150137D0: lwc1        $f10, 0x6644($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6644);
    // 0x150137D4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150137D8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x150137DC: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
    // 0x150137E0: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x150137E4: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
    // 0x150137E8: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150137EC: swc1        $f12, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f12.u32l;
    // 0x150137F0: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x150137F4: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x150137F8: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x150137FC: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x15013800: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x15013804: nop

    // 0x15013808: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1501380C: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x15013810: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x15013814: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15013818: nop

    // 0x1501381C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15013820: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x15013824: lh          $t9, 0x4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X4);
    // 0x15013828: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x1501382C: nop

    // 0x15013830: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15013834: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x15013838: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x1501383C: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x15013840: jal         0x150A8050
    // 0x15013844: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x15013844: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x15013848: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1501384C: addiu       $t0, $sp, 0x9C
    ctx->r8 = ADD32(ctx->r29, 0X9C);
    // 0x15013850: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x15013854: addiu       $t2, $sp, 0xA4
    ctx->r10 = ADD32(ctx->r29, 0XA4);
    // 0x15013858: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x1501385C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x15013860: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x15013864: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15013868: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1501386C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x15013870: jal         0x150A7960
    // 0x15013874: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15013874: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    after_1:
    // 0x15013878: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1501387C: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x15013880: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x15013884: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x15013888: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1501388C: addiu       $t3, $zero, 0x17
    ctx->r11 = ADD32(0, 0X17);
    // 0x15013890: addiu       $t4, $zero, 0x34
    ctx->r12 = ADD32(0, 0X34);
    // 0x15013894: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15013898: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1501389C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x150138A0: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150138A4: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    // 0x150138A8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150138AC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150138B0: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x150138B4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150138B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150138BC: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    // 0x150138C0: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x150138C4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150138C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150138CC: jal         0x15149130
    // 0x150138D0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_2;
    // 0x150138D0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_2:
    // 0x150138D4: beq         $v0, $zero, L_150138E8
    if (ctx->r2 == 0) {
        // 0x150138D8: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150138E8;
    }
    // 0x150138D8: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150138DC: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x150138E0: jal         0x10022EC0
    // 0x150138E4: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x150138E4: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_3:
L_150138E8:
    // 0x150138E8: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x150138EC: lh          $t6, 0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2);
    // 0x150138F0: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x150138F4: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x150138F8: addu        $a2, $t6, $v0
    ctx->r6 = ADD32(ctx->r14, ctx->r2);
    // 0x150138FC: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x15013900: lui         $t2, 0x1001
    ctx->r10 = S32(0X1001 << 16);
    // 0x15013904: addiu       $t2, $t2, -0x10C0
    ctx->r10 = ADD32(ctx->r10, -0X10C0);
    // 0x15013908: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1501390C: addiu       $t9, $zero, 0x2EE0
    ctx->r25 = ADD32(0, 0X2EE0);
    // 0x15013910: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x15013914: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x15013918: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1501391C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x15013920: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15013924: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x15013928: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1501392C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15013930: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15013934: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15013938: addiu       $a0, $zero, 0x67C
    ctx->r4 = ADD32(0, 0X67C);
    // 0x1501393C: bgez        $v0, L_1501394C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15013940: sra         $t1, $v0, 1
        ctx->r9 = S32(SIGNED(ctx->r2) >> 1);
            goto L_1501394C;
    }
    // 0x15013940: sra         $t1, $v0, 1
    ctx->r9 = S32(SIGNED(ctx->r2) >> 1);
    // 0x15013944: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x15013948: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_1501394C:
    // 0x1501394C: jal         0x1000FA64
    // 0x15013950: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_1000FA64(rdram, ctx);
        goto after_4;
    // 0x15013950: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_4:
    // 0x15013954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15013958:
    // 0x15013958: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1501395C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x15013960: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x15013964: jr          $ra
    // 0x15013968: nop

    return;
    return;
    // 0x15013968: nop

;}
RECOMP_FUNC void func_15041480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15041480: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15041484: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15041488: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1504148C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15041490: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x15041494: addiu       $a1, $a1, 0x48D0
    ctx->r5 = ADD32(ctx->r5, 0X48D0);
    // 0x15041498: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x1504149C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150414A0:
    // 0x150414A0: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x150414A4: bnel        $v0, $t7, L_150414B8
    if (ctx->r2 != ctx->r15) {
        // 0x150414A8: lbu         $t8, 0x1($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X1);
            goto L_150414B8;
    }
    goto skip_0;
    // 0x150414A8: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    skip_0:
    // 0x150414AC: jr          $ra
    // 0x150414B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x150414B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150414B4: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
L_150414B8:
    // 0x150414B8: bnel        $v0, $t8, L_150414CC
    if (ctx->r2 != ctx->r24) {
        // 0x150414BC: lbu         $t9, 0x2($a1)
        ctx->r25 = MEM_BU(ctx->r5, 0X2);
            goto L_150414CC;
    }
    goto skip_1;
    // 0x150414BC: lbu         $t9, 0x2($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2);
    skip_1:
    // 0x150414C0: jr          $ra
    // 0x150414C4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    return;
    // 0x150414C4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x150414C8: lbu         $t9, 0x2($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2);
L_150414CC:
    // 0x150414CC: bnel        $v0, $t9, L_150414E0
    if (ctx->r2 != ctx->r25) {
        // 0x150414D0: lbu         $t0, 0x3($a1)
        ctx->r8 = MEM_BU(ctx->r5, 0X3);
            goto L_150414E0;
    }
    goto skip_2;
    // 0x150414D0: lbu         $t0, 0x3($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X3);
    skip_2:
    // 0x150414D4: jr          $ra
    // 0x150414D8: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    return;
    // 0x150414D8: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x150414DC: lbu         $t0, 0x3($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X3);
L_150414E0:
    // 0x150414E0: bnel        $v0, $t0, L_150414F4
    if (ctx->r2 != ctx->r8) {
        // 0x150414E4: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_150414F4;
    }
    goto skip_3;
    // 0x150414E4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_3:
    // 0x150414E8: jr          $ra
    // 0x150414EC: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    return;
    // 0x150414EC: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    // 0x150414F0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_150414F4:
    // 0x150414F4: bne         $v1, $a0, L_150414A0
    if (ctx->r3 != ctx->r4) {
        // 0x150414F8: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_150414A0;
    }
    // 0x150414F8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x150414FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15041500: jr          $ra
    // 0x15041504: nop

    return;
    return;
    // 0x15041504: nop

;}
RECOMP_FUNC void func_15045780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15045780: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15045784: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15045788: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x1504578C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x15045790: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15045794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15045798: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x1504579C: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x150457A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x150457A4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x150457A8: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x150457AC: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x150457B0: bc1fl       L_150457D0
    if (!c1cs) {
        // 0x150457B4: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_150457D0;
    }
    goto skip_0;
    // 0x150457B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    skip_0:
    // 0x150457B8: lbu         $t8, 0x1C($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1C);
    // 0x150457BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150457C0: andi        $t9, $t8, 0xFFFD
    ctx->r25 = ctx->r24 & 0XFFFD;
    // 0x150457C4: b           L_150457F0
    // 0x150457C8: sb          $t9, 0x1C($t7)
    MEM_B(0X1C, ctx->r15) = ctx->r25;
        goto L_150457F0;
    // 0x150457C8: sb          $t9, 0x1C($t7)
    MEM_B(0X1C, ctx->r15) = ctx->r25;
    // 0x150457CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
L_150457D0:
    // 0x150457D0: jal         0x15045714
    // 0x150457D4: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    func_15045714(rdram, ctx);
        goto after_0;
    // 0x150457D4: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x150457D8: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150457DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x150457E0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x150457E4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x150457E8: jal         0x15045F8C
    // 0x150457EC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    func_15045F8C(rdram, ctx);
        goto after_1;
    // 0x150457EC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_1:
L_150457F0:
    // 0x150457F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150457F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150457F8: jr          $ra
    // 0x150457FC: nop

    return;
    return;
    // 0x150457FC: nop

;}
RECOMP_FUNC void func_151DC8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DC8BC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151DC8C0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x151DC8C4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151DC8C8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151DC8CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151DC8D0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x151DC8D4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x151DC8D8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x151DC8DC: beq         $a2, $zero, L_151DC8F0
    if (ctx->r6 == 0) {
        // 0x151DC8E0: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_151DC8F0;
    }
    // 0x151DC8E0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x151DC8E4: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    // 0x151DC8E8: jal         0x151DC6A0
    // 0x151DC8EC: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    func_151DC6A0(rdram, ctx);
        goto after_0;
    // 0x151DC8EC: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    after_0:
L_151DC8F0:
    // 0x151DC8F0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151DC8F4: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x151DC8F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151DC8FC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151DC900: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151DC904: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x151DC908: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151DC90C: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x151DC910: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151DC914: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x151DC918: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x151DC91C: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x151DC920: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151DC924: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x151DC928: lbu         $t1, 0x57($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X57);
    // 0x151DC92C: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x151DC930: lbu         $t4, 0x5B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X5B);
    // 0x151DC934: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151DC938: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151DC93C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x151DC940: lh          $a0, 0x4E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X4E);
    // 0x151DC944: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x151DC948: sb          $t1, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r9;
    // 0x151DC94C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x151DC950: jal         0x15149130
    // 0x151DC954: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    func_15149130(rdram, ctx);
        goto after_1;
    // 0x151DC954: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_1:
    // 0x151DC958: beq         $v0, $zero, L_151DC96C
    if (ctx->r2 == 0) {
        // 0x151DC95C: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_151DC96C;
    }
    // 0x151DC95C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151DC960: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151DC964: jal         0x10022EC0
    // 0x151DC968: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151DC968: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_2:
L_151DC96C:
    // 0x151DC96C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151DC970: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151DC974: jr          $ra
    // 0x151DC978: nop

    return;
    return;
    // 0x151DC978: nop

;}
RECOMP_FUNC void func_15145974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15145974: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15145978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514597C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15145980: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15145984: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15145988: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1514598C: jal         0x150484A0
    // 0x15145990: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150484A0(rdram, ctx);
        goto after_0;
    // 0x15145990: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15145994: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15145998: lwc1        $f4, 0x56BC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X56BC);
    // 0x1514599C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x151459A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151459A4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151459A8: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x151459AC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x151459B0: beql        $t7, $zero, L_15145A00
    if (ctx->r15 == 0) {
        // 0x151459B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15145A00;
    }
    goto skip_0;
    // 0x151459B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151459B8: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151459BC: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151459C0: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151459C4: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151459C8: nop

    // 0x151459CC: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x151459D0: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151459D4: jal         0x150484A0
    // 0x151459D8: sqrt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = sqrtf(ctx->f0.fl);
    func_150484A0(rdram, ctx);
        goto after_1;
    // 0x151459D8: sqrt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = sqrtf(ctx->f0.fl);
    after_1:
    // 0x151459DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151459E0: lwc1        $f18, 0x56C0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X56C0);
    // 0x151459E4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x151459E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151459EC: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151459F0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x151459F4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151459F8: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x151459FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15145A00:
    // 0x15145A00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15145A04: jr          $ra
    // 0x15145A08: nop

    return;
    return;
    // 0x15145A08: nop

;}
RECOMP_FUNC void func_151CE51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CE51C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151CE520: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151CE524: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x151CE528: jal         0x151CE634
    // 0x151CE52C: lw          $a0, 0x18($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X18);
    func_151CE634(rdram, ctx);
        goto after_0;
    // 0x151CE52C: lw          $a0, 0x18($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X18);
    after_0:
    // 0x151CE530: beq         $v0, $zero, L_151CE624
    if (ctx->r2 == 0) {
        // 0x151CE534: lw          $a0, 0x50($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X50);
            goto L_151CE624;
    }
    // 0x151CE534: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x151CE538: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x151CE53C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x151CE540: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x151CE544: jal         0x1515C1A0
    // 0x151CE548: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_1515C1A0(rdram, ctx);
        goto after_1;
    // 0x151CE548: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_1:
    // 0x151CE54C: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x151CE550: lhu         $t6, 0x1E($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X1E);
    // 0x151CE554: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x151CE558: beql        $t7, $zero, L_151CE5D4
    if (ctx->r15 == 0) {
        // 0x151CE55C: lb          $t1, 0x2C($v1)
        ctx->r9 = MEM_B(ctx->r3, 0X2C);
            goto L_151CE5D4;
    }
    goto skip_0;
    // 0x151CE55C: lb          $t1, 0x2C($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X2C);
    skip_0:
    // 0x151CE560: lb          $t8, 0x2C($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X2C);
    // 0x151CE564: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151CE568: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151CE56C: blezl       $t8, L_151CE628
    if (SIGNED(ctx->r24) <= 0) {
        // 0x151CE570: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151CE628;
    }
    goto skip_1;
    // 0x151CE570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151CE574: lb          $v0, 0x2E($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X2E);
    // 0x151CE578: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x151CE57C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151CE580: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x151CE584: bgez        $v0, L_151CE594
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151CE588: ori         $a1, $a1, 0x19
        ctx->r5 = ctx->r5 | 0X19;
            goto L_151CE594;
    }
    // 0x151CE588: ori         $a1, $a1, 0x19
    ctx->r5 = ctx->r5 | 0X19;
    // 0x151CE58C: lbu         $v0, 0x25($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X25);
    // 0x151CE590: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_151CE594:
    // 0x151CE594: lw          $a0, 0x94($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X94);
    // 0x151CE598: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x151CE59C: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x151CE5A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x151CE5A4: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x151CE5A8: lwc1        $f0, 0x4($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
    // 0x151CE5AC: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x151CE5B0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x151CE5B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CE5B8: bc1fl       L_151CE628
    if (!c1cs) {
        // 0x151CE5BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151CE628;
    }
    goto skip_2;
    // 0x151CE5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x151CE5C0: jal         0x1505D024
    // 0x151CE5C4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_1505D024(rdram, ctx);
        goto after_2;
    // 0x151CE5C4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_2:
    // 0x151CE5C8: b           L_151CE628
    // 0x151CE5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151CE628;
    // 0x151CE5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151CE5D0: lb          $t1, 0x2C($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X2C);
L_151CE5D4:
    // 0x151CE5D4: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151CE5D8: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151CE5DC: blezl       $t1, L_151CE628
    if (SIGNED(ctx->r9) <= 0) {
        // 0x151CE5E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151CE628;
    }
    goto skip_3;
    // 0x151CE5E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x151CE5E4: lb          $t2, 0x2D($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X2D);
    // 0x151CE5E8: lw          $v0, 0x94($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X94);
    // 0x151CE5EC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151CE5F0: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x151CE5F4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x151CE5F8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151CE5FC: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x151CE600: lwc1        $f0, 0x4($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X4);
    // 0x151CE604: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x151CE608: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x151CE60C: ori         $a1, $a1, 0x19
    ctx->r5 = ctx->r5 | 0X19;
    // 0x151CE610: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x151CE614: bc1f        L_151CE624
    if (!c1cs) {
        // 0x151CE618: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_151CE624;
    }
    // 0x151CE618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CE61C: jal         0x1505D024
    // 0x151CE620: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_1505D024(rdram, ctx);
        goto after_3;
    // 0x151CE620: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_3:
L_151CE624:
    // 0x151CE624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151CE628:
    // 0x151CE628: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151CE62C: jr          $ra
    // 0x151CE630: nop

    return;
    return;
    // 0x151CE630: nop

;}
RECOMP_FUNC void func_15084CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15084CB0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15084CB4: lbu         $a1, -0x1A70($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1A70);
    // 0x15084CB8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15084CBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15084CC0: blez        $a1, L_15084CF0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x15084CC4: lui         $a2, 0x800C
        ctx->r6 = S32(0X800C << 16);
            goto L_15084CF0;
    }
    // 0x15084CC4: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15084CC8: addiu       $a2, $a2, -0x1A68
    ctx->r6 = ADD32(ctx->r6, -0X1A68);
L_15084CCC:
    // 0x15084CCC: lhu         $t6, 0x0($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X0);
    // 0x15084CD0: bnel        $a0, $t6, L_15084CE4
    if (ctx->r4 != ctx->r14) {
        // 0x15084CD4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_15084CE4;
    }
    goto skip_0;
    // 0x15084CD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x15084CD8: b           L_15084CF0
    // 0x15084CDC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_15084CF0;
    // 0x15084CDC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15084CE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_15084CE4:
    // 0x15084CE4: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15084CE8: bne         $at, $zero, L_15084CCC
    if (ctx->r1 != 0) {
        // 0x15084CEC: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_15084CCC;
    }
    // 0x15084CEC: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_15084CF0:
    // 0x15084CF0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15084CF4: jr          $ra
    // 0x15084CF8: nop

    return;
    return;
    // 0x15084CF8: nop

;}
RECOMP_FUNC void func_150A6210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A6210: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x150A6214: mfc1        $t1, $f20
    ctx->r9 = (int32_t)ctx->f20.u32l;
    // 0x150A6218: mfc1        $t2, $f21
    ctx->r10 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x150A621C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x150A6220: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x150A6224: mtc1        $a3, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r7;
    // 0x150A6228: lwc1        $f15, 0x10($sp)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x150A622C: lwc1        $f16, 0x14($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14);
    // 0x150A6230: lwc1        $f17, 0x18($sp)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x150A6234: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150A6238: lwc1        $f5, -0x64E0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X64E0);
    // 0x150A623C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150A6240: lwc1        $f8, -0x960($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X960);
    // 0x150A6244: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x150A6248: lwc1        $f1, 0x18($t0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r8, 0X18);
    // 0x150A624C: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x150A6250: lwc1        $f2, 0x28($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X28);
    // 0x150A6254: mul.s       $f10, $f1, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x150A6258: lwc1        $f3, 0x38($t0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r8, 0X38);
    // 0x150A625C: mul.s       $f11, $f2, $f13
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f11.fl = MUL_S(ctx->f2.fl, ctx->f13.fl);
    // 0x150A6260: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150A6264: add.s       $f4, $f11, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f11.fl + ctx->f3.fl;
    // 0x150A6268: neg.s       $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = -ctx->f5.fl;
    // 0x150A626C: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150A6270: neg.s       $f17, $f17
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f17.fl); 
    ctx->f17.fl = -ctx->f17.fl;
    // 0x150A6274: sub.s       $f4, $f18, $f15
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f15.fl;
    // 0x150A6278: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x150A627C: c.ule.s     $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f4.fl <= ctx->f5.fl;
    // 0x150A6280: bc1f        L_150A634C
    if (!c1cs) {
        // 0x150A6284: add.s       $f4, $f18, $f15
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f15.fl;
            goto L_150A634C;
    }
    // 0x150A6284: add.s       $f4, $f18, $f15
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f15.fl;
    // 0x150A6288: lwc1        $f1, 0x10($t0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r8, 0X10);
    // 0x150A628C: c.olt.s     $f4, $f17
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 17);
    c1cs = ctx->f4.fl < ctx->f17.fl;
    // 0x150A6290: bc1t        L_150A634C
    if (c1cs) {
        // 0x150A6294: neg.s       $f18, $f18
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
            goto L_150A634C;
    }
    // 0x150A6294: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
    // 0x150A6298: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x150A629C: lwc1        $f2, 0x20($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X20);
    // 0x150A62A0: mul.s       $f10, $f1, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x150A62A4: lwc1        $f3, 0x30($t0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r8, 0X30);
    // 0x150A62A8: mul.s       $f11, $f2, $f13
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f11.fl = MUL_S(ctx->f2.fl, ctx->f13.fl);
    // 0x150A62AC: add.s       $f9, $f4, $f10
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f9.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150A62B0: add.s       $f4, $f11, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f11.fl + ctx->f3.fl;
    // 0x150A62B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150A62B8: lwc1        $f6, 0x35E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X35E0);
    // 0x150A62BC: add.s       $f9, $f9, $f4
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f4.fl;
    // 0x150A62C0: lwc1        $f0, 0x4($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
    // 0x150A62C4: mul.s       $f15, $f15, $f8
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f15.fl = MUL_S(ctx->f15.fl, ctx->f8.fl);
    // 0x150A62C8: sub.s       $f4, $f9, $f15
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f4.fl = ctx->f9.fl - ctx->f15.fl;
    // 0x150A62CC: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150A62D0: add.s       $f20, $f18, $f15
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f15.fl;
    // 0x150A62D4: c.ule.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl <= ctx->f20.fl;
    // 0x150A62D8: bc1f        L_150A634C
    if (!c1cs) {
        // 0x150A62DC: add.s       $f4, $f9, $f15
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f4.fl = ctx->f9.fl + ctx->f15.fl;
            goto L_150A634C;
    }
    // 0x150A62DC: add.s       $f4, $f9, $f15
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f4.fl = ctx->f9.fl + ctx->f15.fl;
    // 0x150A62E0: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150A62E4: neg.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = -ctx->f20.fl;
    // 0x150A62E8: c.olt.s     $f4, $f21
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f4.fl < ctx->f21.fl;
    // 0x150A62EC: bc1t        L_150A634C
    if (c1cs) {
        // 0x150A62F0: lwc1        $f1, 0x14($t0)
        ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r8, 0X14);
            goto L_150A634C;
    }
    // 0x150A62F0: lwc1        $f1, 0x14($t0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r8, 0X14);
    // 0x150A62F4: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x150A62F8: lwc1        $f2, 0x24($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X24);
    // 0x150A62FC: mul.s       $f10, $f1, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x150A6300: lwc1        $f3, 0x34($t0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r8, 0X34);
    // 0x150A6304: mul.s       $f11, $f2, $f13
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f11.fl = MUL_S(ctx->f2.fl, ctx->f13.fl);
    // 0x150A6308: add.s       $f9, $f4, $f10
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f9.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150A630C: add.s       $f4, $f11, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f11.fl + ctx->f3.fl;
    // 0x150A6310: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150A6314: lwc1        $f7, 0x35E4($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X35E4);
    // 0x150A6318: add.s       $f9, $f9, $f4
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f4.fl;
    // 0x150A631C: mul.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x150A6320: sub.s       $f4, $f9, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f9.fl - ctx->f16.fl;
    // 0x150A6324: mul.s       $f4, $f4, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f7.fl);
    // 0x150A6328: c.ule.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl <= ctx->f20.fl;
    // 0x150A632C: bc1f        L_150A634C
    if (!c1cs) {
        // 0x150A6330: add.s       $f4, $f9, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f9.fl + ctx->f16.fl;
            goto L_150A634C;
    }
    // 0x150A6330: add.s       $f4, $f9, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f9.fl + ctx->f16.fl;
    // 0x150A6334: mul.s       $f4, $f4, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f7.fl);
    // 0x150A6338: c.olt.s     $f4, $f21
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f4.fl < ctx->f21.fl;
    // 0x150A633C: bc1t        L_150A634C
    if (c1cs) {
        // 0x150A6340: cvt.w.s     $f18, $f18
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
            goto L_150A634C;
    }
    // 0x150A6340: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150A6344: j           L_150A6354
    // 0x150A6348: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    func_150A6354(rdram, ctx);
    return;
    // 0x150A6348: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
L_150A634C:
    // 0x150A634C: j           L_150A6354
    // 0x150A6350: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    func_150A6354(rdram, ctx);
    return;
    // 0x150A6350: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_15055C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15055C88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15055C8C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15055C90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15055C94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15055C98: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x15055C9C: ori         $t6, $t6, 0x7E4
    ctx->r14 = ctx->r14 | 0X7E4;
    // 0x15055CA0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x15055CA4: lw          $t7, 0x9C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X9C);
    // 0x15055CA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15055CAC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x15055CB0: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x15055CB4: bnel        $t8, $zero, L_15055CD8
    if (ctx->r24 != 0) {
        // 0x15055CB8: lw          $t0, 0x31C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X31C);
            goto L_15055CD8;
    }
    goto skip_0;
    // 0x15055CB8: lw          $t0, 0x31C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X31C);
    skip_0:
    // 0x15055CBC: jal         0x1506E46C
    // 0x15055CC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x15055CC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x15055CC4: beq         $v0, $zero, L_15055CD4
    if (ctx->r2 == 0) {
        // 0x15055CC8: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_15055CD4;
    }
    // 0x15055CC8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x15055CCC: jal         0x15060A30
    // 0x15055CD0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_15060A30(rdram, ctx);
        goto after_1;
    // 0x15055CD0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_15055CD4:
    // 0x15055CD4: lw          $t0, 0x31C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X31C);
L_15055CD8:
    // 0x15055CD8: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x15055CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15055CE0: sb          $t9, 0x36($t0)
    MEM_B(0X36, ctx->r8) = ctx->r25;
    // 0x15055CE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15055CE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15055CEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15055CF0: jal         0x1506160C
    // 0x15055CF4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_1506160C(rdram, ctx);
        goto after_2;
    // 0x15055CF4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x15055CF8: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x15055CFC: sb          $v0, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r2;
    // 0x15055D00: sb          $v0, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r2;
    // 0x15055D04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15055D08: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15055D0C: lwc1        $f4, -0x6BE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6BE8);
    // 0x15055D10: addiu       $t1, $zero, 0x29
    ctx->r9 = ADD32(0, 0X29);
    // 0x15055D14: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x15055D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15055D1C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x15055D20: swc1        $f4, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f4.u32l;
    // 0x15055D24: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x15055D28: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x15055D2C: jal         0x1507CD64
    // 0x15055D30: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    func_1507CD64(rdram, ctx);
        goto after_3;
    // 0x15055D30: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x15055D34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15055D38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15055D3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15055D40: jr          $ra
    // 0x15055D44: nop

    return;
    return;
    // 0x15055D44: nop

;}
RECOMP_FUNC void func_151D71B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D71B0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151D71B4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x151D71B8: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x151D71BC: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x151D71C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151D71C4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151D71C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151D71CC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x151D71D0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x151D71D4: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x151D71D8: lbu         $t8, 0x5B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5B);
    // 0x151D71DC: lbu         $t9, 0x57($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X57);
    // 0x151D71E0: lbu         $t3, 0x67($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X67);
    // 0x151D71E4: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x151D71E8: addiu       $t0, $zero, 0x36
    ctx->r8 = ADD32(0, 0X36);
    // 0x151D71EC: addiu       $t2, $t1, 0x18
    ctx->r10 = ADD32(ctx->r9, 0X18);
    // 0x151D71F0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151D71F4: sb          $zero, 0x39($sp)
    MEM_B(0X39, ctx->r29) = 0;
    // 0x151D71F8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x151D71FC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x151D7200: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x151D7204: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x151D7208: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151D720C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x151D7210: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151D7214: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x151D7218: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151D721C: sb          $t8, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r24;
    // 0x151D7220: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151D7224: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x151D7228: jal         0x15149130
    // 0x151D722C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x151D722C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_0:
    // 0x151D7230: beq         $v0, $zero, L_151D7250
    if (ctx->r2 == 0) {
        // 0x151D7234: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151D7250;
    }
    // 0x151D7234: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151D7238: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151D723C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151D7240: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x151D7244: jal         0x10022EC0
    // 0x151D7248: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151D7248: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x151D724C: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
L_151D7250:
    // 0x151D7250: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151D7254: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151D7258: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151D725C: jr          $ra
    // 0x151D7260: nop

    return;
    return;
    // 0x151D7260: nop

;}
RECOMP_FUNC void getTime2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F04C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151F04C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151F04C8: jal         0x10022DC0
    // 0x151F04CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x151F04CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x151F04D0: jal         0x10024770
    // 0x151F04D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    osGetCount_recomp(rdram, ctx);
        goto after_1;
    // 0x151F04D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x151F04D8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x151F04DC: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x151F04E0: lw          $t7, 0x29B8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X29B8);
    // 0x151F04E4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x151F04E8: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x151F04EC: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x151F04F0: lw          $t1, 0x29B4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X29B4);
    // 0x151F04F4: lw          $t0, 0x29B0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X29B0);
    // 0x151F04F8: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x151F04FC: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x151F0500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151F0504: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x151F0508: jal         0x10022DE0
    // 0x151F050C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    __osRestoreInt_recomp(rdram, ctx);
        goto after_2;
    // 0x151F050C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_2:
    // 0x151F0510: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x151F0514: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x151F0518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151F051C: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x151F0520: addu        $v1, $t3, $t5
    ctx->r3 = ADD32(ctx->r11, ctx->r13);
    // 0x151F0524: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x151F0528: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x151F052C: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
    // 0x151F0530: addu        $v0, $at, $t2
    ctx->r2 = ADD32(ctx->r1, ctx->r10);
    // 0x151F0534: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151F0538: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151F053C: jr          $ra
    // 0x151F0540: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    return;
    return;
    // 0x151F0540: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
;}
RECOMP_FUNC void func_15167310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15167310: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15167314: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15167318: lui         $s4, 0x8008
    ctx->r20 = S32(0X8008 << 16);
    // 0x1516731C: addiu       $s4, $s4, 0x2FA0
    ctx->r20 = ADD32(ctx->r20, 0X2FA0);
    // 0x15167320: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15167324: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x15167328: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x1516732C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x15167330: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x15167334: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15167338: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1516733C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15167340: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15167344: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15167348: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x1516734C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15167350: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15167354: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x15167358: blez        $t7, L_151673B4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x1516735C: lui         $s2, 0x800E
        ctx->r18 = S32(0X800E << 16);
            goto L_151673B4;
    }
    // 0x1516735C: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x15167360: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x15167364: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x15167368: addiu       $s5, $s5, -0x4010
    ctx->r21 = ADD32(ctx->r21, -0X4010);
    // 0x1516736C: addiu       $s3, $s3, -0x2E18
    ctx->r19 = ADD32(ctx->r19, -0X2E18);
    // 0x15167370: addiu       $s2, $s2, -0x2E28
    ctx->r18 = ADD32(ctx->r18, -0X2E28);
L_15167374:
    // 0x15167374: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x15167378: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x1516737C: lwc1        $f20, 0x3A0($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X3A0);
    // 0x15167380: jal         0x15047D60
    // 0x15167384: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x15167384: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x15167388: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x1516738C: jal         0x15047C00
    // 0x15167390: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x15167390: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x15167394: lw          $t0, 0x0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X0);
    // 0x15167398: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1516739C: addiu       $s1, $s1, 0x9A0
    ctx->r17 = ADD32(ctx->r17, 0X9A0);
    // 0x151673A0: slt         $at, $t0, $s0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x151673A4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x151673A8: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x151673AC: beq         $at, $zero, L_15167374
    if (ctx->r1 == 0) {
        // 0x151673B0: swc1        $f0, -0x4($s3)
        MEM_W(-0X4, ctx->r19) = ctx->f0.u32l;
            goto L_15167374;
    }
    // 0x151673B0: swc1        $f0, -0x4($s3)
    MEM_W(-0X4, ctx->r19) = ctx->f0.u32l;
L_151673B4:
    // 0x151673B4: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x151673B8: addiu       $s5, $s5, -0x4010
    ctx->r21 = ADD32(ctx->r21, -0X4010);
    // 0x151673BC: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x151673C0: lwc1        $f20, 0x3A0($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X3A0);
    // 0x151673C4: jal         0x15047D60
    // 0x151673C8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x151673C8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x151673CC: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x151673D0: addiu       $s0, $s0, -0x2E30
    ctx->r16 = ADD32(ctx->r16, -0X2E30);
    // 0x151673D4: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x151673D8: jal         0x15047C00
    // 0x151673DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x151673DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x151673E0: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x151673E4: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x151673E8: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x151673EC: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x151673F0: addiu       $s3, $s3, -0x2E70
    ctx->r19 = ADD32(ctx->r19, -0X2E70);
    // 0x151673F4: addiu       $s4, $s4, -0x2E68
    ctx->r20 = ADD32(ctx->r20, -0X2E68);
    // 0x151673F8: addiu       $fp, $fp, -0x4B58
    ctx->r30 = ADD32(ctx->r30, -0X4B58);
    // 0x151673FC: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x15167400: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
L_15167404:
    // 0x15167404: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x15167408: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1516740C: addiu       $s5, $t2, -0x31B0
    ctx->r21 = ADD32(ctx->r10, -0X31B0);
    // 0x15167410: addu        $s6, $t3, $s5
    ctx->r22 = ADD32(ctx->r11, ctx->r21);
L_15167414:
    // 0x15167414: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x15167418: sll         $t4, $s7, 2
    ctx->r12 = S32(ctx->r23 << 2);
    // 0x1516741C: subu        $t4, $t4, $s7
    ctx->r12 = SUB32(ctx->r12, ctx->r23);
    // 0x15167420: beq         $v0, $zero, L_15167498
    if (ctx->r2 == 0) {
        // 0x15167424: sll         $t4, $t4, 2
        ctx->r12 = S32(ctx->r12 << 2);
            goto L_15167498;
    }
    // 0x15167424: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x15167428: addu        $t4, $t4, $s7
    ctx->r12 = ADD32(ctx->r12, ctx->r23);
    // 0x1516742C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x15167430: addu        $s2, $fp, $t4
    ctx->r18 = ADD32(ctx->r30, ctx->r12);
    // 0x15167434: lw          $t5, 0xC($s2)
    ctx->r13 = MEM_W(ctx->r18, 0XC);
    // 0x15167438: beq         $t5, $zero, L_15167498
    if (ctx->r13 == 0) {
        // 0x1516743C: nop
    
            goto L_15167498;
    }
    // 0x1516743C: nop

    // 0x15167440: lb          $t6, 0x0($s3)
    ctx->r14 = MEM_B(ctx->r19, 0X0);
    // 0x15167444: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15167448: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x1516744C: beq         $v0, $zero, L_1516748C
    if (ctx->r2 == 0) {
        // 0x15167450: sb          $t7, 0x0($s3)
        MEM_B(0X0, ctx->r19) = ctx->r15;
            goto L_1516748C;
    }
    // 0x15167450: sb          $t7, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r15;
    // 0x15167454: lb          $t8, 0x0($s3)
    ctx->r24 = MEM_B(ctx->r19, 0X0);
    // 0x15167458: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1516745C: addu        $s1, $s4, $t9
    ctx->r17 = ADD32(ctx->r20, ctx->r25);
    // 0x15167460: lw          $t9, 0xC($s2)
    ctx->r25 = MEM_W(ctx->r18, 0XC);
L_15167464:
    // 0x15167464: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x15167468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1516746C: jalr        $t9
    // 0x15167470: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x15167470: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    after_4:
    // 0x15167474: lb          $t1, 0x0($s3)
    ctx->r9 = MEM_B(ctx->r19, 0X0);
    // 0x15167478: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x1516747C: addu        $s1, $s4, $t3
    ctx->r17 = ADD32(ctx->r20, ctx->r11);
    // 0x15167480: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x15167484: bnel        $s0, $zero, L_15167464
    if (ctx->r16 != 0) {
        // 0x15167488: lw          $t9, 0xC($s2)
        ctx->r25 = MEM_W(ctx->r18, 0XC);
            goto L_15167464;
    }
    goto skip_0;
    // 0x15167488: lw          $t9, 0xC($s2)
    ctx->r25 = MEM_W(ctx->r18, 0XC);
    skip_0:
L_1516748C:
    // 0x1516748C: lb          $t2, 0x0($s3)
    ctx->r10 = MEM_B(ctx->r19, 0X0);
    // 0x15167490: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x15167494: sb          $t4, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r12;
L_15167498:
    // 0x15167498: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x1516749C: addiu       $t5, $t5, -0x2E70
    ctx->r13 = ADD32(ctx->r13, -0X2E70);
    // 0x151674A0: addiu       $s5, $s5, 0x1A0
    ctx->r21 = ADD32(ctx->r21, 0X1A0);
    // 0x151674A4: bne         $s5, $t5, L_15167414
    if (ctx->r21 != ctx->r13) {
        // 0x151674A8: addiu       $s6, $s6, 0x1A0
        ctx->r22 = ADD32(ctx->r22, 0X1A0);
            goto L_15167414;
    }
    // 0x151674A8: addiu       $s6, $s6, 0x1A0
    ctx->r22 = ADD32(ctx->r22, 0X1A0);
    // 0x151674AC: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x151674B0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x151674B4: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x151674B8: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x151674BC: bne         $s7, $at, L_15167404
    if (ctx->r23 != ctx->r1) {
        // 0x151674C0: sw          $t7, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r15;
            goto L_15167404;
    }
    // 0x151674C0: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x151674C4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151674C8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x151674CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151674D0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x151674D4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x151674D8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x151674DC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x151674E0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x151674E4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x151674E8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x151674EC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x151674F0: jr          $ra
    // 0x151674F4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x151674F4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_150CA07C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CA07C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150CA080: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x150CA084: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x150CA088: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CA08C: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x150CA090: lwc1        $f12, 0x5C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x150CA094: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CA098: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150CA09C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150CA0A0: lwc1        $f2, 0x48($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X48);
    // 0x150CA0A4: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150CA0A8: swc1        $f16, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f16.u32l;
    // 0x150CA0AC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CA0B0: mul.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x150CA0B4: nop

    // 0x150CA0B8: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150CA0BC: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x150CA0C0: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CA0C4: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x150CA0C8: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150CA0CC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150CA0D0: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x150CA0D4: lwc1        $f18, 0x40($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X40);
    // 0x150CA0D8: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x150CA0DC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CA0E0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150CA0E4: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x150CA0E8: lwc1        $f18, 0x50($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X50);
    // 0x150CA0EC: swc1        $f16, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f16.u32l;
    // 0x150CA0F0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CA0F4: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x150CA0F8: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x150CA0FC: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x150CA100: swc1        $f8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f8.u32l;
    // 0x150CA104: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CA108: lwc1        $f8, 0x54($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X54);
    // 0x150CA10C: mul.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x150CA110: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x150CA114: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x150CA118: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
    // 0x150CA11C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CA120: lwc1        $f6, 0x58($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CA124: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x150CA128: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150CA12C: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x150CA130: swc1        $f16, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f16.u32l;
    // 0x150CA134: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CA138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CA13C: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150CA140: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x150CA144: swc1        $f10, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f10.u32l;
    // 0x150CA148: jr          $ra
    // 0x150CA14C: nop

    return;
    return;
    // 0x150CA14C: nop

;}
RECOMP_FUNC void func_151B6420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B6420: lb          $v1, 0x2C($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X2C);
    // 0x151B6424: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x151B6428: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x151B642C: beql        $at, $zero, L_151B6450
    if (ctx->r1 == 0) {
        // 0x151B6430: lb          $a1, 0x2E($a0)
        ctx->r5 = MEM_B(ctx->r4, 0X2E);
            goto L_151B6450;
    }
    goto skip_0;
    // 0x151B6430: lb          $a1, 0x2E($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X2E);
    skip_0:
    // 0x151B6434: lhu         $t6, 0x1E($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1E);
    // 0x151B6438: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x151B643C: beql        $t7, $zero, L_151B6450
    if (ctx->r15 == 0) {
        // 0x151B6440: lb          $a1, 0x2E($a0)
        ctx->r5 = MEM_B(ctx->r4, 0X2E);
            goto L_151B6450;
    }
    goto skip_1;
    // 0x151B6440: lb          $a1, 0x2E($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X2E);
    skip_1:
    // 0x151B6444: jr          $ra
    // 0x151B6448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151B6448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151B644C: lb          $a1, 0x2E($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X2E);
L_151B6450:
    // 0x151B6450: lb          $a2, 0x2D($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X2D);
    // 0x151B6454: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151B6458: addiu       $t0, $t0, -0x165C
    ctx->r8 = ADD32(ctx->r8, -0X165C);
    // 0x151B645C: beql        $a1, $a2, L_151B64FC
    if (ctx->r5 == ctx->r6) {
        // 0x151B6460: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_151B64FC;
    }
    goto skip_2;
    // 0x151B6460: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_2:
    // 0x151B6464: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x151B6468: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    // 0x151B646C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_151B6470:
    // 0x151B6470: bgez        $a1, L_151B6480
    if (SIGNED(ctx->r5) >= 0) {
        // 0x151B6474: nop
    
            goto L_151B6480;
    }
    // 0x151B6474: nop

    // 0x151B6478: lbu         $a1, 0x25($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X25);
    // 0x151B647C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_151B6480:
    // 0x151B6480: multu       $a1, $a3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B6484: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151B6488: mflo        $t8
    ctx->r24 = lo;
    // 0x151B648C: addu        $v1, $t8, $v0
    ctx->r3 = ADD32(ctx->r24, ctx->r2);
    // 0x151B6490: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151B6494: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B6498: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x151B649C: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151B64A0: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x151B64A4: nop

    // 0x151B64A8: bc1fl       L_151B64EC
    if (!c1cs) {
        // 0x151B64AC: lb          $a2, 0x2D($a0)
        ctx->r6 = MEM_B(ctx->r4, 0X2D);
            goto L_151B64EC;
    }
    goto skip_3;
    // 0x151B64AC: lb          $a2, 0x2D($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X2D);
    skip_3:
    // 0x151B64B0: lb          $a2, 0x2D($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X2D);
    // 0x151B64B4: beq         $a1, $a2, L_151B64E8
    if (ctx->r5 == ctx->r6) {
        // 0x151B64B8: addiu       $t9, $a2, 0x1
        ctx->r25 = ADD32(ctx->r6, 0X1);
            goto L_151B64E8;
    }
L_151B64B8:
    // 0x151B64B8: addiu       $t9, $a2, 0x1
    ctx->r25 = ADD32(ctx->r6, 0X1);
    // 0x151B64BC: sb          $t9, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = ctx->r25;
    // 0x151B64C0: lb          $a2, 0x2D($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X2D);
    // 0x151B64C4: lbu         $t1, 0x25($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X25);
    // 0x151B64C8: bnel        $t1, $a2, L_151B64DC
    if (ctx->r9 != ctx->r6) {
        // 0x151B64CC: lb          $t2, 0x2C($a0)
        ctx->r10 = MEM_B(ctx->r4, 0X2C);
            goto L_151B64DC;
    }
    goto skip_4;
    // 0x151B64CC: lb          $t2, 0x2C($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X2C);
    skip_4:
    // 0x151B64D0: sb          $zero, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = 0;
    // 0x151B64D4: lb          $a2, 0x2D($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X2D);
    // 0x151B64D8: lb          $t2, 0x2C($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X2C);
L_151B64DC:
    // 0x151B64DC: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x151B64E0: bne         $a1, $a2, L_151B64B8
    if (ctx->r5 != ctx->r6) {
        // 0x151B64E4: sb          $t3, 0x2C($a0)
        MEM_B(0X2C, ctx->r4) = ctx->r11;
            goto L_151B64B8;
    }
    // 0x151B64E4: sb          $t3, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r11;
L_151B64E8:
    // 0x151B64E8: lb          $a2, 0x2D($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X2D);
L_151B64EC:
    // 0x151B64EC: bnel        $a1, $a2, L_151B6470
    if (ctx->r5 != ctx->r6) {
        // 0x151B64F0: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_151B6470;
    }
    goto skip_5;
    // 0x151B64F0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    skip_5:
    // 0x151B64F4: lb          $v1, 0x2C($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X2C);
    // 0x151B64F8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_151B64FC:
    // 0x151B64FC: blez        $v1, L_151B6588
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151B6500: addiu       $a3, $zero, 0x1C
        ctx->r7 = ADD32(0, 0X1C);
            goto L_151B6588;
    }
    // 0x151B6500: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    // 0x151B6504: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B6508: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B650C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x151B6510: lwc1        $f14, -0x5B90($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X5B90);
    // 0x151B6514: addiu       $t0, $zero, 0x9B
    ctx->r8 = ADD32(0, 0X9B);
    // 0x151B6518: mflo        $t4
    ctx->r12 = lo;
    // 0x151B651C: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x151B6520: lwc1        $f0, 0x18($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0X18);
L_151B6524:
    // 0x151B6524: multu       $a1, $a3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B6528: mflo        $t6
    ctx->r14 = lo;
    // 0x151B652C: addu        $v1, $t6, $v0
    ctx->r3 = ADD32(ctx->r14, ctx->r2);
    // 0x151B6530: lwc1        $f16, 0x18($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
    // 0x151B6534: sub.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x151B6538: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x151B653C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151B6540: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x151B6544: nop

    // 0x151B6548: slti        $at, $a2, 0x9C
    ctx->r1 = SIGNED(ctx->r6) < 0X9C ? 1 : 0;
    // 0x151B654C: bnel        $at, $zero, L_151B6560
    if (ctx->r1 != 0) {
        // 0x151B6550: sb          $a2, 0x10($v1)
        MEM_B(0X10, ctx->r3) = ctx->r6;
            goto L_151B6560;
    }
    goto skip_6;
    // 0x151B6550: sb          $a2, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r6;
    skip_6:
    // 0x151B6554: b           L_151B6560
    // 0x151B6558: sb          $t0, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r8;
        goto L_151B6560;
    // 0x151B6558: sb          $t0, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r8;
    // 0x151B655C: sb          $a2, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r6;
L_151B6560:
    // 0x151B6560: lbu         $t8, 0x25($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X25);
    // 0x151B6564: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x151B6568: slt         $at, $a1, $t8
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151B656C: bnel        $at, $zero, L_151B657C
    if (ctx->r1 != 0) {
        // 0x151B6570: lb          $t9, 0x2E($a0)
        ctx->r25 = MEM_B(ctx->r4, 0X2E);
            goto L_151B657C;
    }
    goto skip_7;
    // 0x151B6570: lb          $t9, 0x2E($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X2E);
    skip_7:
    // 0x151B6574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151B6578: lb          $t9, 0x2E($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X2E);
L_151B657C:
    // 0x151B657C: bne         $a1, $t9, L_151B6524
    if (ctx->r5 != ctx->r25) {
        // 0x151B6580: nop
    
            goto L_151B6524;
    }
    // 0x151B6580: nop

    // 0x151B6584: lb          $v1, 0x2C($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X2C);
L_151B6588:
    // 0x151B6588: blezl       $v1, L_151B65C0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151B658C: swc1        $f12, 0x54($a0)
        MEM_W(0X54, ctx->r4) = ctx->f12.u32l;
            goto L_151B65C0;
    }
    goto skip_8;
    // 0x151B658C: swc1        $f12, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f12.u32l;
    skip_8:
    // 0x151B6590: lb          $t1, 0x2D($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X2D);
    // 0x151B6594: multu       $t1, $a3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B6598: mflo        $t2
    ctx->r10 = lo;
    // 0x151B659C: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x151B65A0: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x151B65A4: sw          $at, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r1;
    // 0x151B65A8: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x151B65AC: sw          $t5, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r13;
    // 0x151B65B0: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x151B65B4: b           L_151B65C8
    // 0x151B65B8: sw          $at, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r1;
        goto L_151B65C8;
    // 0x151B65B8: sw          $at, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r1;
    // 0x151B65BC: swc1        $f12, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f12.u32l;
L_151B65C0:
    // 0x151B65C0: swc1        $f12, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f12.u32l;
    // 0x151B65C4: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
L_151B65C8:
    // 0x151B65C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151B65CC: jr          $ra
    // 0x151B65D0: nop

    return;
    return;
    // 0x151B65D0: nop

;}
RECOMP_FUNC void func_15073F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073F78: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15073F7C: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15073F80: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15073F84: lw          $t7, 0x1580($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1580);
    // 0x15073F88: lbu         $t6, 0x10B($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X10B);
    // 0x15073F8C: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x15073F90: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x15073F94: sb          $t9, 0x10B($v0)
    MEM_B(0X10B, ctx->r2) = ctx->r25;
    // 0x15073F98: jr          $ra
    // 0x15073F9C: nop

    return;
    return;
    // 0x15073F9C: nop

;}
RECOMP_FUNC void func_150C09F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C09F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C09F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C09F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150C09FC: jal         0x150C0A48
    // 0x150C0A00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150C0A48(rdram, ctx);
        goto after_0;
    // 0x150C0A00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150C0A04: jal         0x15169804
    // 0x150C0A08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169804(rdram, ctx);
        goto after_1;
    // 0x150C0A08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150C0A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C0A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C0A14: jr          $ra
    // 0x150C0A18: nop

    return;
    return;
    // 0x150C0A18: nop

;}
RECOMP_FUNC void func_15161804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15161804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15161808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516180C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15161810: lbu         $t6, 0xE($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XE);
    // 0x15161814: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x15161818: beql        $t7, $zero, L_15161834
    if (ctx->r15 == 0) {
        // 0x1516181C: lbu         $t8, 0x12($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X12);
            goto L_15161834;
    }
    goto skip_0;
    // 0x1516181C: lbu         $t8, 0x12($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X12);
    skip_0:
    // 0x15161820: lw          $a0, 0x14($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X14);
    // 0x15161824: jal         0x1515F10C
    // 0x15161828: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_1515F10C(rdram, ctx);
        goto after_0;
    // 0x15161828: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x1516182C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x15161830: lbu         $t8, 0x12($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X12);
L_15161834:
    // 0x15161834: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15161838: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x1516183C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15161840: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x15161844: lw          $t9, -0x4DF8($at)
    ctx->r25 = MEM_W(ctx->r1, -0X4DF8);
    // 0x15161848: jalr        $t9
    // 0x1516184C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x1516184C: nop

    after_1:
    // 0x15161850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15161854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15161858: jr          $ra
    // 0x1516185C: nop

    return;
    return;
    // 0x1516185C: nop

;}
RECOMP_FUNC void func_15147740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15147740: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15147744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15147748: lhu         $t6, 0x1E($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1E);
    // 0x1514774C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15147750: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15147754: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x15147758: beql        $t7, $zero, L_15147784
    if (ctx->r15 == 0) {
        // 0x1514775C: lbu         $v0, 0x2F($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X2F);
            goto L_15147784;
    }
    goto skip_0;
    // 0x1514775C: lbu         $v0, 0x2F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2F);
    skip_0:
    // 0x15147760: lh          $t8, 0x1C($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X1C);
    // 0x15147764: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x15147768: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x1514776C: sh          $t0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r8;
    // 0x15147770: lh          $t1, 0x1C($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X1C);
    // 0x15147774: bgezl       $t1, L_15147784
    if (SIGNED(ctx->r9) >= 0) {
        // 0x15147778: lbu         $v0, 0x2F($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X2F);
            goto L_15147784;
    }
    goto skip_1;
    // 0x15147778: lbu         $v0, 0x2F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2F);
    skip_1:
    // 0x1514777C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15147780: lbu         $v0, 0x2F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2F);
L_15147784:
    // 0x15147784: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x15147788: bne         $at, $zero, L_151477A0
    if (ctx->r1 != 0) {
        // 0x1514778C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151477A0;
    }
    // 0x1514778C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15147790: jal         0x1516972C
    // 0x15147794: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15147794: nop

    after_0:
    // 0x15147798: b           L_151478C4
    // 0x1514779C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151478C4;
    // 0x1514779C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151477A0:
    // 0x151477A0: beql        $v1, $zero, L_151477E0
    if (ctx->r3 == 0) {
        // 0x151477A4: lbu         $v0, 0x30($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X30);
            goto L_151477E0;
    }
    goto skip_2;
    // 0x151477A4: lbu         $v0, 0x30($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X30);
    skip_2:
    // 0x151477A8: bne         $a1, $zero, L_151477DC
    if (ctx->r5 != 0) {
        // 0x151477AC: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_151477DC;
    }
    // 0x151477AC: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x151477B0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151477B4: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x151477B8: lw          $t9, -0x5E00($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5E00);
    // 0x151477BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151477C0: sb          $a1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r5;
    // 0x151477C4: jalr        $t9
    // 0x151477C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x151477C8: nop

    after_1:
    // 0x151477CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x151477D0: bne         $v0, $zero, L_151477DC
    if (ctx->r2 != 0) {
        // 0x151477D4: lb          $a1, 0x1B($sp)
        ctx->r5 = MEM_B(ctx->r29, 0X1B);
            goto L_151477DC;
    }
    // 0x151477D4: lb          $a1, 0x1B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1B);
    // 0x151477D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_151477DC:
    // 0x151477DC: lbu         $v0, 0x30($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X30);
L_151477E0:
    // 0x151477E0: slti        $at, $v0, 0x12
    ctx->r1 = SIGNED(ctx->r2) < 0X12 ? 1 : 0;
    // 0x151477E4: bne         $at, $zero, L_151477FC
    if (ctx->r1 != 0) {
        // 0x151477E8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151477FC;
    }
    // 0x151477E8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151477EC: jal         0x1516972C
    // 0x151477F0: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x151477F0: nop

    after_2:
    // 0x151477F4: b           L_151478C4
    // 0x151477F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151478C4;
    // 0x151477F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151477FC:
    // 0x151477FC: beql        $v1, $zero, L_1514783C
    if (ctx->r3 == 0) {
        // 0x15147800: lhu         $t4, 0x1E($a0)
        ctx->r12 = MEM_HU(ctx->r4, 0X1E);
            goto L_1514783C;
    }
    goto skip_3;
    // 0x15147800: lhu         $t4, 0x1E($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X1E);
    skip_3:
    // 0x15147804: bne         $a1, $zero, L_15147838
    if (ctx->r5 != 0) {
        // 0x15147808: sll         $t3, $v0, 2
        ctx->r11 = S32(ctx->r2 << 2);
            goto L_15147838;
    }
    // 0x15147808: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x1514780C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15147810: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x15147814: lw          $t9, -0x5DC4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5DC4);
    // 0x15147818: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1514781C: sb          $a1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r5;
    // 0x15147820: jalr        $t9
    // 0x15147824: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x15147824: nop

    after_3:
    // 0x15147828: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1514782C: bne         $v0, $zero, L_15147838
    if (ctx->r2 != 0) {
        // 0x15147830: lb          $a1, 0x1B($sp)
        ctx->r5 = MEM_B(ctx->r29, 0X1B);
            goto L_15147838;
    }
    // 0x15147830: lb          $a1, 0x1B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1B);
    // 0x15147834: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_15147838:
    // 0x15147838: lhu         $t4, 0x1E($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X1E);
L_1514783C:
    // 0x1514783C: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x15147840: beq         $t5, $zero, L_151478B0
    if (ctx->r13 == 0) {
        // 0x15147844: nop
    
            goto L_151478B0;
    }
    // 0x15147844: nop

    // 0x15147848: lb          $v0, 0x24($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X24);
    // 0x1514784C: slti        $at, $v0, -0x1
    ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x15147850: bne         $at, $zero, L_15147860
    if (ctx->r1 != 0) {
        // 0x15147854: slti        $at, $v0, 0x8
        ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
            goto L_15147860;
    }
    // 0x15147854: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x15147858: bnel        $at, $zero, L_15147874
    if (ctx->r1 != 0) {
        // 0x1514785C: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_15147874;
    }
    goto skip_4;
    // 0x1514785C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    skip_4:
L_15147860:
    // 0x15147860: jal         0x1516972C
    // 0x15147864: nop

    func_1516972C(rdram, ctx);
        goto after_4;
    // 0x15147864: nop

    after_4:
    // 0x15147868: b           L_151478C4
    // 0x1514786C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151478C4;
    // 0x1514786C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15147870: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_15147874:
    // 0x15147874: beq         $v0, $at, L_151478B0
    if (ctx->r2 == ctx->r1) {
        // 0x15147878: nop
    
            goto L_151478B0;
    }
    // 0x15147878: nop

    // 0x1514787C: bne         $a1, $zero, L_151478B0
    if (ctx->r5 != 0) {
        // 0x15147880: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_151478B0;
    }
    // 0x15147880: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15147884: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15147888: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x1514788C: lw          $t9, -0x5D7C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5D7C);
    // 0x15147890: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15147894: sb          $a1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r5;
    // 0x15147898: jalr        $t9
    // 0x1514789C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x1514789C: nop

    after_5:
    // 0x151478A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x151478A4: bne         $v0, $zero, L_151478B0
    if (ctx->r2 != 0) {
        // 0x151478A8: lb          $a1, 0x1B($sp)
        ctx->r5 = MEM_B(ctx->r29, 0X1B);
            goto L_151478B0;
    }
    // 0x151478A8: lb          $a1, 0x1B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1B);
    // 0x151478AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_151478B0:
    // 0x151478B0: beql        $a1, $zero, L_151478C4
    if (ctx->r5 == 0) {
        // 0x151478B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151478C4;
    }
    goto skip_5;
    // 0x151478B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x151478B8: jal         0x1516972C
    // 0x151478BC: nop

    func_1516972C(rdram, ctx);
        goto after_6;
    // 0x151478BC: nop

    after_6:
    // 0x151478C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151478C4:
    // 0x151478C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151478C8: jr          $ra
    // 0x151478CC: nop

    return;
    return;
    // 0x151478CC: nop

;}
RECOMP_FUNC void func_15030E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15030E08: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15030E0C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x15030E10: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x15030E14: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15030E18: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x15030E1C: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x15030E20: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x15030E24: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15030E28: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x15030E2C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x15030E30: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15030E34: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x15030E38: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15030E3C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15030E40: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x15030E44: lw          $s0, 0x3EE0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X3EE0);
    // 0x15030E48: addiu       $fp, $zero, 0x7
    ctx->r30 = ADD32(0, 0X7);
    // 0x15030E4C: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x15030E50: beq         $s0, $zero, L_15030F60
    if (ctx->r16 == 0) {
        // 0x15030E54: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_15030F60;
    }
    // 0x15030E54: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x15030E58: lbu         $t6, 0x3($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3);
L_15030E5C:
    // 0x15030E5C: lw          $s2, 0x54($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X54);
    // 0x15030E60: bne         $t6, $zero, L_15030E70
    if (ctx->r14 != 0) {
        // 0x15030E64: nop
    
            goto L_15030E70;
    }
    // 0x15030E64: nop

    // 0x15030E68: b           L_15030F58
    // 0x15030E6C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
        goto L_15030F58;
    // 0x15030E6C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_15030E70:
    // 0x15030E70: jal         0x15083E90
    // 0x15030E74: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x15030E74: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_0:
    // 0x15030E78: beq         $v0, $zero, L_15030EA4
    if (ctx->r2 == 0) {
        // 0x15030E7C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_15030EA4;
    }
    // 0x15030E7C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15030E80: lw          $t7, 0x1D4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1D4);
    // 0x15030E84: beq         $t7, $zero, L_15030EA4
    if (ctx->r15 == 0) {
        // 0x15030E88: nop
    
            goto L_15030EA4;
    }
    // 0x15030E88: nop

    // 0x15030E8C: lbu         $t9, 0x74($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X74);
    // 0x15030E90: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15030E94: sllv        $v1, $t8, $s3
    ctx->r3 = S32(ctx->r24 << (ctx->r19 & 31));
    // 0x15030E98: and         $t0, $t9, $v1
    ctx->r8 = ctx->r25 & ctx->r3;
    // 0x15030E9C: bne         $v1, $t0, L_15030EAC
    if (ctx->r3 != ctx->r8) {
        // 0x15030EA0: nop
    
            goto L_15030EAC;
    }
    // 0x15030EA0: nop

L_15030EA4:
    // 0x15030EA4: b           L_15030F58
    // 0x15030EA8: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
        goto L_15030F58;
    // 0x15030EA8: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_15030EAC:
    // 0x15030EAC: bne         $s5, $s7, L_15030EC8
    if (ctx->r21 != ctx->r23) {
        // 0x15030EB0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_15030EC8;
    }
    // 0x15030EB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15030EB4: lbu         $t1, 0x5($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X5);
    // 0x15030EB8: beql        $fp, $t1, L_15030F3C
    if (ctx->r30 == ctx->r9) {
        // 0x15030EBC: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_15030F3C;
    }
    goto skip_0;
    // 0x15030EBC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_0:
    // 0x15030EC0: b           L_15030F58
    // 0x15030EC4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
        goto L_15030F58;
    // 0x15030EC4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_15030EC8:
    // 0x15030EC8: jal         0x1506196C
    // 0x15030ECC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_1506196C(rdram, ctx);
        goto after_1;
    // 0x15030ECC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x15030ED0: bnel        $s5, $s4, L_15030F0C
    if (ctx->r21 != ctx->r20) {
        // 0x15030ED4: lbu         $t5, 0x4($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X4);
            goto L_15030F0C;
    }
    goto skip_1;
    // 0x15030ED4: lbu         $t5, 0x4($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X4);
    skip_1:
    // 0x15030ED8: lbu         $t2, 0x4($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X4);
    // 0x15030EDC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15030EE0: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x15030EE4: bnel        $t3, $zero, L_15030F3C
    if (ctx->r11 != 0) {
        // 0x15030EE8: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_15030F3C;
    }
    goto skip_2;
    // 0x15030EE8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_2:
    // 0x15030EEC: bnel        $v0, $at, L_15030F3C
    if (ctx->r2 != ctx->r1) {
        // 0x15030EF0: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_15030F3C;
    }
    goto skip_3;
    // 0x15030EF0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_3:
    // 0x15030EF4: lbu         $t4, 0x5($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X5);
    // 0x15030EF8: beql        $s4, $t4, L_15030F3C
    if (ctx->r20 == ctx->r12) {
        // 0x15030EFC: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_15030F3C;
    }
    goto skip_4;
    // 0x15030EFC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_4:
    // 0x15030F00: b           L_15030F58
    // 0x15030F04: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
        goto L_15030F58;
    // 0x15030F04: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x15030F08: lbu         $t5, 0x4($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X4);
L_15030F0C:
    // 0x15030F0C: slti        $at, $v0, 0xFF
    ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x15030F10: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x15030F14: bne         $t6, $zero, L_15030F30
    if (ctx->r14 != 0) {
        // 0x15030F18: nop
    
            goto L_15030F30;
    }
    // 0x15030F18: nop

    // 0x15030F1C: bne         $at, $zero, L_15030F30
    if (ctx->r1 != 0) {
        // 0x15030F20: nop
    
            goto L_15030F30;
    }
    // 0x15030F20: nop

    // 0x15030F24: lbu         $t7, 0x5($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X5);
    // 0x15030F28: bnel        $s4, $t7, L_15030F3C
    if (ctx->r20 != ctx->r15) {
        // 0x15030F2C: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_15030F3C;
    }
    goto skip_5;
    // 0x15030F2C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_5:
L_15030F30:
    // 0x15030F30: b           L_15030F58
    // 0x15030F34: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
        goto L_15030F58;
    // 0x15030F34: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x15030F38: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_15030F3C:
    // 0x15030F3C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15030F40: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x15030F44: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x15030F48: jal         0x150311C4
    // 0x15030F4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_150311C4(rdram, ctx);
        goto after_2;
    // 0x15030F4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x15030F50: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x15030F54: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_15030F58:
    // 0x15030F58: bnel        $s0, $zero, L_15030E5C
    if (ctx->r16 != 0) {
        // 0x15030F5C: lbu         $t6, 0x3($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X3);
            goto L_15030E5C;
    }
    goto skip_6;
    // 0x15030F5C: lbu         $t6, 0x3($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3);
    skip_6:
L_15030F60:
    // 0x15030F60: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x15030F64: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15030F68: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15030F6C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15030F70: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x15030F74: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15030F78: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x15030F7C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x15030F80: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x15030F84: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x15030F88: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x15030F8C: jr          $ra
    // 0x15030F90: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x15030F90: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_151DC484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DC484: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x151DC488: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x151DC48C: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x151DC490: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DC494: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x151DC498: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x151DC49C: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x151DC4A0: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x151DC4A4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151DC4A8: addiu       $t3, $zero, -0x40
    ctx->r11 = ADD32(0, -0X40);
    // 0x151DC4AC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x151DC4B0: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x151DC4B4: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x151DC4B8: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x151DC4BC: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x151DC4C0: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x151DC4C4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151DC4C8: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x151DC4CC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x151DC4D0: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x151DC4D4: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x151DC4D8: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x151DC4DC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x151DC4E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151DC4E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x151DC4E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151DC4EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DC4F0: lwc1        $f8, -0x4B1C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4B1C);
    // 0x151DC4F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DC4F8: lwc1        $f10, -0x4B18($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4B18);
    // 0x151DC4FC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x151DC500: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151DC504: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151DC508: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151DC50C: sh          $t2, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r10;
    // 0x151DC510: sh          $t3, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r11;
    // 0x151DC514: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151DC518: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x151DC51C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151DC520: lbu         $t2, 0xC3($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XC3);
    // 0x151DC524: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x151DC528: sh          $t0, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r8;
    // 0x151DC52C: sh          $t1, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r9;
    // 0x151DC530: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x151DC534: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x151DC538: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x151DC53C: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x151DC540: sh          $zero, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = 0;
    // 0x151DC544: sh          $t4, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r12;
    // 0x151DC548: sh          $t5, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r13;
    // 0x151DC54C: sh          $zero, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = 0;
    // 0x151DC550: sh          $t8, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r24;
    // 0x151DC554: sh          $t7, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r15;
    // 0x151DC558: sh          $t6, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r14;
    // 0x151DC55C: sh          $t9, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r25;
    // 0x151DC560: sh          $t0, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r8;
    // 0x151DC564: sh          $t1, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r9;
    // 0x151DC568: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x151DC56C: lbu         $a3, 0xC7($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XC7);
    // 0x151DC570: lw          $a2, 0xBC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XBC);
    // 0x151DC574: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x151DC578: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x151DC57C: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x151DC580: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x151DC584: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x151DC588: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
    // 0x151DC58C: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x151DC590: sb          $t2, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r10;
    // 0x151DC594: jal         0x15153F18
    // 0x151DC598: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_15153F18(rdram, ctx);
        goto after_0;
    // 0x151DC598: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_0:
    // 0x151DC59C: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x151DC5A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151DC5A4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151DC5A8: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
    // 0x151DC5AC: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x151DC5B0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151DC5B4: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151DC5B8: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x151DC5BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151DC5C0: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x151DC5C4: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x151DC5C8: addiu       $t1, $zero, -0x40
    ctx->r9 = ADD32(0, -0X40);
    // 0x151DC5CC: addiu       $t2, $zero, 0x1A
    ctx->r10 = ADD32(0, 0X1A);
    // 0x151DC5D0: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x151DC5D4: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151DC5D8: addiu       $t3, $zero, 0x23
    ctx->r11 = ADD32(0, 0X23);
    // 0x151DC5DC: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x151DC5E0: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x151DC5E4: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x151DC5E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151DC5EC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x151DC5F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151DC5F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DC5F8: lwc1        $f10, -0x4B14($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4B14);
    // 0x151DC5FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DC600: lwc1        $f16, -0x4B10($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4B10);
    // 0x151DC604: sh          $t6, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r14;
    // 0x151DC608: sh          $t0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r8;
    // 0x151DC60C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DC610: lbu         $t6, 0xC3($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XC3);
    // 0x151DC614: lwc1        $f18, -0x4B0C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4B0C);
    // 0x151DC618: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x151DC61C: sh          $t9, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r25;
    // 0x151DC620: addiu       $t5, $zero, 0x9B
    ctx->r13 = ADD32(0, 0X9B);
    // 0x151DC624: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x151DC628: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151DC62C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151DC630: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    // 0x151DC634: sh          $t1, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r9;
    // 0x151DC638: sh          $t2, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r10;
    // 0x151DC63C: sh          $t3, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r11;
    // 0x151DC640: sh          $t8, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r24;
    // 0x151DC644: sb          $t5, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r13;
    // 0x151DC648: sb          $t4, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r12;
    // 0x151DC64C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x151DC650: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x151DC654: sb          $t7, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r15;
    // 0x151DC658: sb          $t9, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r25;
    // 0x151DC65C: lbu         $a3, 0xC7($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XC7);
    // 0x151DC660: lw          $a2, 0xBC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XBC);
    // 0x151DC664: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x151DC668: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x151DC66C: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x151DC670: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x151DC674: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x151DC678: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x151DC67C: sb          $t6, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r14;
    // 0x151DC680: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x151DC684: jal         0x15150178
    // 0x151DC688: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_15150178(rdram, ctx);
        goto after_1;
    // 0x151DC688: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_1:
    // 0x151DC68C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151DC690: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x151DC694: jr          $ra
    // 0x151DC698: nop

    return;
    return;
    // 0x151DC698: nop

    // 0x151DC69C: nop

;}
RECOMP_FUNC void func_15011CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15011CC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15011CC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15011CC8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x15011CCC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15011CD0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x15011CD4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x15011CD8: lw          $a1, 0x2E4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2E4);
    // 0x15011CDC: lw          $a0, 0xE00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE00);
    // 0x15011CE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15011CE4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15011CE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15011CEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15011CF0: jal         0x15195AA8
    // 0x15011CF4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_0;
    // 0x15011CF4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x15011CF8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x15011CFC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15011D00: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15011D04: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x15011D08: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x15011D0C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15011D10: lw          $a1, 0x2E4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2E4);
    // 0x15011D14: lw          $a0, 0xE04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE04);
    // 0x15011D18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15011D1C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15011D20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15011D24: jal         0x15195AA8
    // 0x15011D28: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_1;
    // 0x15011D28: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x15011D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15011D30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15011D34: jr          $ra
    // 0x15011D38: nop

    return;
    return;
    // 0x15011D38: nop

;}
RECOMP_FUNC void func_151872B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151872B0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151872B4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151872B8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151872BC: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x151872C0: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x151872C4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151872C8: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151872CC: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151872D0: addiu       $t5, $t5, -0x1FBF
    ctx->r13 = ADD32(ctx->r13, -0X1FBF);
    // 0x151872D4: addiu       $t2, $t2, -0x1FCC
    ctx->r10 = ADD32(ctx->r10, -0X1FCC);
    // 0x151872D8: addiu       $t1, $t1, -0x1FD0
    ctx->r9 = ADD32(ctx->r9, -0X1FD0);
    // 0x151872DC: addiu       $a3, $a3, -0x1FC0
    ctx->r7 = ADD32(ctx->r7, -0X1FC0);
    // 0x151872E0: addiu       $a2, $a2, -0x1FC8
    ctx->r6 = ADD32(ctx->r6, -0X1FC8);
    // 0x151872E4: addiu       $a1, $a1, -0x1FDC
    ctx->r5 = ADD32(ctx->r5, -0X1FDC);
    // 0x151872E8: addiu       $v1, $v1, -0x1FE0
    ctx->r3 = ADD32(ctx->r3, -0X1FE0);
    // 0x151872EC: addiu       $v0, $v0, -0x1FE4
    ctx->r2 = ADD32(ctx->r2, -0X1FE4);
    // 0x151872F0: addiu       $t0, $zero, 0x258
    ctx->r8 = ADD32(0, 0X258);
    // 0x151872F4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151872F8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151872FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15187300: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15187304: addiu       $t6, $zero, 0xB4
    ctx->r14 = ADD32(0, 0XB4);
    // 0x15187308: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x1518730C: addiu       $t8, $zero, 0x3F8
    ctx->r24 = ADD32(0, 0X3F8);
    // 0x15187310: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x15187314: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x15187318: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x1518731C: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x15187320: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x15187324: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x15187328: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1518732C: swc1        $f4, -0x1FC4($at)
    MEM_W(-0X1FC4, ctx->r1) = ctx->f4.u32l;
    // 0x15187330: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x15187334: sb          $t4, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r12;
    // 0x15187338: beq         $a0, $at, L_151873C0
    if (ctx->r4 == ctx->r1) {
        // 0x1518733C: sb          $t4, 0x0($t5)
        MEM_B(0X0, ctx->r13) = ctx->r12;
            goto L_151873C0;
    }
    // 0x1518733C: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
    // 0x15187340: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x15187344: beq         $a0, $at, L_15187368
    if (ctx->r4 == ctx->r1) {
        // 0x15187348: addiu       $t9, $zero, 0x12C0
        ctx->r25 = ADD32(0, 0X12C0);
            goto L_15187368;
    }
    // 0x15187348: addiu       $t9, $zero, 0x12C0
    ctx->r25 = ADD32(0, 0X12C0);
    // 0x1518734C: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x15187350: beq         $a0, $at, L_15187398
    if (ctx->r4 == ctx->r1) {
        // 0x15187354: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_15187398;
    }
    // 0x15187354: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x15187358: beql        $a0, $at, L_151873CC
    if (ctx->r4 == ctx->r1) {
        // 0x1518735C: addiu       $t6, $zero, 0x4B0
        ctx->r14 = ADD32(0, 0X4B0);
            goto L_151873CC;
    }
    goto skip_0;
    // 0x1518735C: addiu       $t6, $zero, 0x4B0
    ctx->r14 = ADD32(0, 0X4B0);
    skip_0:
    // 0x15187360: jr          $ra
    // 0x15187364: nop

    return;
    return;
    // 0x15187364: nop

L_15187368:
    // 0x15187368: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1518736C: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x15187370: addiu       $t7, $t9, -0x2
    ctx->r15 = ADD32(ctx->r25, -0X2);
    // 0x15187374: addiu       $t8, $zero, 0x3F2
    ctx->r24 = ADD32(0, 0X3F2);
    // 0x15187378: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x1518737C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x15187380: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x15187384: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x15187388: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x1518738C: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x15187390: jr          $ra
    // 0x15187394: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    return;
    return;
    // 0x15187394: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
L_15187398:
    // 0x15187398: addiu       $t6, $zero, 0x960
    ctx->r14 = ADD32(0, 0X960);
    // 0x1518739C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x151873A0: addiu       $t8, $t6, -0x2
    ctx->r24 = ADD32(ctx->r14, -0X2);
    // 0x151873A4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x151873A8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x151873AC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x151873B0: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x151873B4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x151873B8: jr          $ra
    // 0x151873BC: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    return;
    return;
    // 0x151873BC: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
L_151873C0:
    // 0x151873C0: jr          $ra
    // 0x151873C4: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
    return;
    return;
    // 0x151873C4: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
    // 0x151873C8: addiu       $t6, $zero, 0x4B0
    ctx->r14 = ADD32(0, 0X4B0);
L_151873CC:
    // 0x151873CC: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x151873D0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x151873D4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x151873D8: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x151873DC: jr          $ra
    // 0x151873E0: nop

    return;
    return;
    // 0x151873E0: nop

;}
RECOMP_FUNC void func_15155F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15155F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15155F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15155F98: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15155F9C: jal         0x15155FD4
    // 0x15155FA0: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    func_15155FD4(rdram, ctx);
        goto after_0;
    // 0x15155FA0: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    after_0:
    // 0x15155FA4: beql        $v0, $zero, L_15155FC8
    if (ctx->r2 == 0) {
        // 0x15155FA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15155FC8;
    }
    goto skip_0;
    // 0x15155FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15155FAC: lbu         $t6, 0x11($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X11);
    // 0x15155FB0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15155FB4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15155FB8: bnel        $t6, $at, L_15155FC8
    if (ctx->r14 != ctx->r1) {
        // 0x15155FBC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15155FC8;
    }
    goto skip_1;
    // 0x15155FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15155FC0: sb          $t7, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r15;
    // 0x15155FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15155FC8:
    // 0x15155FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15155FCC: jr          $ra
    // 0x15155FD0: nop

    return;
    return;
    // 0x15155FD0: nop

;}
RECOMP_FUNC void func_1514FBFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514FBFC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1514FC00: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1514FC04: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x1514FC08: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x1514FC0C: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x1514FC10: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x1514FC14: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x1514FC18: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x1514FC1C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    // 0x1514FC20: jal         0x15144E80
    // 0x1514FC24: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_15144E80(rdram, ctx);
        goto after_0;
    // 0x1514FC24: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x1514FC28: beq         $v0, $zero, L_1514FCD8
    if (ctx->r2 == 0) {
        // 0x1514FC2C: addiu       $a0, $sp, 0x5C
        ctx->r4 = ADD32(ctx->r29, 0X5C);
            goto L_1514FCD8;
    }
    // 0x1514FC2C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x1514FC30: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1514FC34: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x1514FC38: jal         0x15145128
    // 0x1514FC3C: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    func_15145128(rdram, ctx);
        goto after_1;
    // 0x1514FC3C: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    after_1:
    // 0x1514FC40: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x1514FC44: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1514FC48: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x1514FC4C: jal         0x15145128
    // 0x1514FC50: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_15145128(rdram, ctx);
        goto after_2;
    // 0x1514FC50: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x1514FC54: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x1514FC58: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1514FC5C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x1514FC60: jal         0x15145128
    // 0x1514FC64: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_15145128(rdram, ctx);
        goto after_3;
    // 0x1514FC64: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x1514FC68: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x1514FC6C: jal         0x15144A74
    // 0x1514FC70: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    func_15144A74(rdram, ctx);
        goto after_4;
    // 0x1514FC70: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_4:
    // 0x1514FC74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1514FC78: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1514FC7C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x1514FC80: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x1514FC84: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x1514FC88: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x1514FC8C: bc1fl       L_1514FCB8
    if (!c1cs) {
        // 0x1514FC90: lw          $t6, 0x68($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X68);
            goto L_1514FCB8;
    }
    goto skip_0;
    // 0x1514FC90: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    skip_0:
    // 0x1514FC94: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1514FC98: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1514FC9C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x1514FCA0: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x1514FCA4: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x1514FCA8: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x1514FCAC: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x1514FCB0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x1514FCB4: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
L_1514FCB8:
    // 0x1514FCB8: lbu         $t7, 0x6F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6F);
    // 0x1514FCBC: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x1514FCC0: lwc1        $f6, 0x20($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X20);
    // 0x1514FCC4: addiu       $a0, $t6, 0x24
    ctx->r4 = ADD32(ctx->r14, 0X24);
    // 0x1514FCC8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1514FCCC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1514FCD0: jal         0x1514F8F8
    // 0x1514FCD4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_1514F8F8(rdram, ctx);
        goto after_5;
    // 0x1514FCD4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_5:
L_1514FCD8:
    // 0x1514FCD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1514FCDC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x1514FCE0: jr          $ra
    // 0x1514FCE4: nop

    return;
    return;
    // 0x1514FCE4: nop

;}
RECOMP_FUNC void func_150642AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150642AC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150642B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150642B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150642B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150642BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150642C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150642C4: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x150642C8: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x150642CC: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x150642D0: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x150642D4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150642D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150642DC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x150642E0: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
    // 0x150642E4: beq         $t6, $zero, L_15064310
    if (ctx->r14 == 0) {
        // 0x150642E8: swc1        $f4, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
            goto L_15064310;
    }
    // 0x150642E8: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x150642EC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150642F0: addiu       $v1, $v1, -0x3D74
    ctx->r3 = ADD32(ctx->r3, -0X3D74);
    // 0x150642F4: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x150642F8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x150642FC: addiu       $v0, $zero, -0x4001
    ctx->r2 = ADD32(0, -0X4001);
    // 0x15064300: and         $t8, $t7, $v0
    ctx->r24 = ctx->r15 & ctx->r2;
    // 0x15064304: and         $t1, $t9, $v0
    ctx->r9 = ctx->r25 & ctx->r2;
    // 0x15064308: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x1506430C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_15064310:
    // 0x15064310: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    // 0x15064314: lbu         $v0, 0x7B($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X7B);
    // 0x15064318: beq         $v0, $zero, L_1506477C
    if (ctx->r2 == 0) {
        // 0x1506431C: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_1506477C;
    }
    // 0x1506431C: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x15064320: sltiu       $at, $t2, 0xC
    ctx->r1 = ctx->r10 < 0XC ? 1 : 0;
    // 0x15064324: beq         $at, $zero, L_15064774
    if (ctx->r1 == 0) {
        // 0x15064328: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_15064774;
    }
    // 0x15064328: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1506432C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15064330: addu        $at, $at, $t2
    gpr jr_addend_15064338 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x15064334: lw          $t2, -0x6860($at)
    ctx->r10 = ADD32(ctx->r1, -0X6860);
    // 0x15064338: jr          $t2
    // 0x1506433C: nop

    switch (jr_addend_15064338 >> 2) {
        case 0: goto L_15064340; break;
        case 1: goto L_150643A4; break;
        case 2: goto L_150643C4; break;
        case 3: goto L_1506446C; break;
        case 4: goto L_15064504; break;
        case 5: goto L_150645D0; break;
        case 6: goto L_15064774; break;
        case 7: goto L_150645D0; break;
        case 8: goto L_1506461C; break;
        case 9: goto L_15064634; break;
        case 10: goto L_1506469C; break;
        case 11: goto L_15064668; break;
        default: switch_error(__func__, 0x15064338, 0x800997A0);
    }
    // 0x1506433C: nop

L_15064340:
    // 0x15064340: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15064344: lw          $a1, 0x2E4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2E4);
    // 0x15064348: sb          $a2, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r6;
    // 0x1506434C: sb          $a2, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r6;
    // 0x15064350: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x15064354: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x15064358: sra         $a0, $t4, 16
    ctx->r4 = S32(SIGNED(ctx->r12) >> 16);
    // 0x1506435C: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x15064360: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x15064364: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15064368: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1506436C: mtc1        $a1, $f10
    ctx->f10.u32l = ctx->r5;
    // 0x15064370: sh          $zero, 0x84($s0)
    MEM_H(0X84, ctx->r16) = 0;
    // 0x15064374: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x15064378: sb          $t8, 0x30($v1)
    MEM_B(0X30, ctx->r3) = ctx->r24;
    // 0x1506437C: lw          $t9, 0x31C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X31C);
    // 0x15064380: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15064384: addiu       $t0, $zero, 0x96
    ctx->r8 = ADD32(0, 0X96);
    // 0x15064388: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
    // 0x1506438C: lw          $t1, 0x31C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X31C);
    // 0x15064390: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x15064394: lw          $t3, 0x2E8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X2E8);
    // 0x15064398: sh          $t3, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r11;
    // 0x1506439C: b           L_15064774
    // 0x150643A0: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
        goto L_15064774;
    // 0x150643A0: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
L_150643A4:
    // 0x150643A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150643A8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150643AC: lwc1        $f16, -0x6830($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6830);
    // 0x150643B0: addiu       $t0, $zero, 0xDD
    ctx->r8 = ADD32(0, 0XDD);
    // 0x150643B4: sb          $a2, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r6;
    // 0x150643B8: sb          $a2, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r6;
    // 0x150643BC: b           L_15064774
    // 0x150643C0: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
        goto L_15064774;
    // 0x150643C0: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
L_150643C4:
    // 0x150643C4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150643C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150643CC: sw          $t4, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r12;
    // 0x150643D0: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x150643D4: jal         0x15074664
    // 0x150643D8: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    func_15074664(rdram, ctx);
        goto after_0;
    // 0x150643D8: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x150643DC: lbu         $t5, 0xAD($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XAD);
    // 0x150643E0: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x150643E4: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150643E8: bne         $t5, $zero, L_15064410
    if (ctx->r13 != 0) {
        // 0x150643EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15064410;
    }
    // 0x150643EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150643F0: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150643F4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150643F8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150643FC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15064400: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15064404: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x15064408: nop

    // 0x1506440C: beq         $t7, $zero, L_15064440
    if (ctx->r15 == 0) {
        // 0x15064410: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_15064440;
    }
L_15064410:
    // 0x15064410: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x15064414: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x15064418: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1506441C: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x15064420: jal         0x15083568
    // 0x15064424: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    func_15083568(rdram, ctx);
        goto after_1;
    // 0x15064424: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x15064428: lw          $t9, 0x31C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X31C);
    // 0x1506442C: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x15064430: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15064434: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x15064438: b           L_1506445C
    // 0x1506443C: sb          $t8, 0x11A($t9)
    MEM_B(0X11A, ctx->r25) = ctx->r24;
        goto L_1506445C;
    // 0x1506443C: sb          $t8, 0x11A($t9)
    MEM_B(0X11A, ctx->r25) = ctx->r24;
L_15064440:
    // 0x15064440: lw          $t2, 0x31C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X31C);
    // 0x15064444: sb          $a2, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r6;
    // 0x15064448: sb          $a2, 0x8A($s0)
    MEM_B(0X8A, ctx->r16) = ctx->r6;
    // 0x1506444C: sb          $a2, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r6;
    // 0x15064450: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15064454: addiu       $t0, $zero, 0x151
    ctx->r8 = ADD32(0, 0X151);
    // 0x15064458: sb          $t1, 0x11A($t2)
    MEM_B(0X11A, ctx->r10) = ctx->r9;
L_1506445C:
    // 0x1506445C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15064460: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15064464: b           L_15064774
    // 0x15064468: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
        goto L_15064774;
    // 0x15064468: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
L_1506446C:
    // 0x1506446C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15064470: sw          $zero, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = 0;
    // 0x15064474: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x15064478: jal         0x15074664
    // 0x1506447C: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    func_15074664(rdram, ctx);
        goto after_2;
    // 0x1506447C: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x15064480: lbu         $t3, 0xAD($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XAD);
    // 0x15064484: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x15064488: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1506448C: bne         $t3, $zero, L_150644B4
    if (ctx->r11 != 0) {
        // 0x15064490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150644B4;
    }
    // 0x15064490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15064494: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15064498: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1506449C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150644A0: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150644A4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x150644A8: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x150644AC: nop

    // 0x150644B0: beq         $t5, $zero, L_150644D8
    if (ctx->r13 == 0) {
        // 0x150644B4: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_150644D8;
    }
L_150644B4:
    // 0x150644B4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x150644B8: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x150644BC: jal         0x150836CC
    // 0x150644C0: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    func_150836CC(rdram, ctx);
        goto after_3;
    // 0x150644C0: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x150644C4: lw          $t6, 0x31C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X31C);
    // 0x150644C8: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x150644CC: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150644D0: b           L_150644F4
    // 0x150644D4: sb          $zero, 0x11A($t6)
    MEM_B(0X11A, ctx->r14) = 0;
        goto L_150644F4;
    // 0x150644D4: sb          $zero, 0x11A($t6)
    MEM_B(0X11A, ctx->r14) = 0;
L_150644D8:
    // 0x150644D8: lw          $t8, 0x31C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X31C);
    // 0x150644DC: sb          $a2, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r6;
    // 0x150644E0: sb          $a2, 0x8A($s0)
    MEM_B(0X8A, ctx->r16) = ctx->r6;
    // 0x150644E4: sb          $a2, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r6;
    // 0x150644E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150644EC: addiu       $t0, $zero, 0x14E
    ctx->r8 = ADD32(0, 0X14E);
    // 0x150644F0: sb          $t7, 0x11A($t8)
    MEM_B(0X11A, ctx->r24) = ctx->r15;
L_150644F4:
    // 0x150644F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150644F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150644FC: b           L_15064774
    // 0x15064500: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
        goto L_15064774;
    // 0x15064500: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
L_15064504:
    // 0x15064504: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    // 0x15064508: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x1506450C: jal         0x1505F0AC
    // 0x15064510: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    func_1505F0AC(rdram, ctx);
        goto after_4;
    // 0x15064510: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x15064514: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x15064518: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1506451C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15064520: sb          $t9, 0x81($s0)
    MEM_B(0X81, ctx->r16) = ctx->r25;
    // 0x15064524: lw          $v1, 0x2E4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X2E4);
    // 0x15064528: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x1506452C: bnel        $v1, $zero, L_1506454C
    if (ctx->r3 != 0) {
        // 0x15064530: slti        $at, $v1, 0x64
        ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
            goto L_1506454C;
    }
    goto skip_0;
    // 0x15064530: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    skip_0:
    // 0x15064534: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15064538: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x1506453C: addiu       $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
    // 0x15064540: swc1        $f6, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f6.u32l;
    // 0x15064544: sw          $v1, 0x2E4($v0)
    MEM_W(0X2E4, ctx->r2) = ctx->r3;
    // 0x15064548: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
L_1506454C:
    // 0x1506454C: bnel        $at, $zero, L_1506457C
    if (ctx->r1 != 0) {
        // 0x15064550: lw          $t4, 0x74($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X74);
            goto L_1506457C;
    }
    goto skip_1;
    // 0x15064550: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    skip_1:
    // 0x15064554: lw          $a0, 0x1D4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1D4);
    // 0x15064558: beq         $a0, $zero, L_15064578
    if (ctx->r4 == 0) {
        // 0x1506455C: addiu       $v1, $a0, 0x140
        ctx->r3 = ADD32(ctx->r4, 0X140);
            goto L_15064578;
    }
    // 0x1506455C: addiu       $v1, $a0, 0x140
    ctx->r3 = ADD32(ctx->r4, 0X140);
    // 0x15064560: lh          $t2, 0x1A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X1A);
    // 0x15064564: addiu       $t3, $t2, 0x14
    ctx->r11 = ADD32(ctx->r10, 0X14);
    // 0x15064568: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x1506456C: nop

    // 0x15064570: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15064574: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
L_15064578:
    // 0x15064578: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
L_1506457C:
    // 0x1506457C: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x15064580: beql        $t5, $zero, L_150645C4
    if (ctx->r13 == 0) {
        // 0x15064584: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150645C4;
    }
    goto skip_2;
    // 0x15064584: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_2:
    // 0x15064588: lw          $t6, 0x2E4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2E4);
    // 0x1506458C: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x15064590: addiu       $v0, $zero, 0x7A
    ctx->r2 = ADD32(0, 0X7A);
    // 0x15064594: bne         $t6, $at, L_150645C0
    if (ctx->r14 != ctx->r1) {
        // 0x15064598: addiu       $a0, $zero, 0x38E
        ctx->r4 = ADD32(0, 0X38E);
            goto L_150645C0;
    }
    // 0x15064598: addiu       $a0, $zero, 0x38E
    ctx->r4 = ADD32(0, 0X38E);
    // 0x1506459C: sw          $v0, 0x2E4($a2)
    MEM_W(0X2E4, ctx->r6) = ctx->r2;
    // 0x150645A0: sw          $v0, 0x2E8($a2)
    MEM_W(0X2E8, ctx->r6) = ctx->r2;
    // 0x150645A4: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x150645A8: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x150645AC: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x150645B0: jal         0x15060A30
    // 0x150645B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_15060A30(rdram, ctx);
        goto after_5;
    // 0x150645B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x150645B8: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x150645BC: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
L_150645C0:
    // 0x150645C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_150645C4:
    // 0x150645C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150645C8: b           L_15064774
    // 0x150645CC: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
        goto L_15064774;
    // 0x150645CC: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
L_150645D0:
    // 0x150645D0: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x150645D4: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150645D8: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x150645DC: beq         $t8, $zero, L_15064614
    if (ctx->r24 == 0) {
        // 0x150645E0: nop
    
            goto L_15064614;
    }
    // 0x150645E0: nop

    // 0x150645E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150645E8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150645EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150645F0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x150645F4: nop

    // 0x150645F8: bc1f        L_15064614
    if (!c1cs) {
        // 0x150645FC: nop
    
            goto L_15064614;
    }
    // 0x150645FC: nop

    // 0x15064600: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15064604: sb          $a2, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r6;
    // 0x15064608: sb          $a2, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r6;
    // 0x1506460C: addiu       $t0, $zero, 0x33
    ctx->r8 = ADD32(0, 0X33);
    // 0x15064610: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
L_15064614:
    // 0x15064614: b           L_15064778
    // 0x15064618: sb          $zero, 0x7B($v1)
    MEM_B(0X7B, ctx->r3) = 0;
        goto L_15064778;
    // 0x15064618: sb          $zero, 0x7B($v1)
    MEM_B(0X7B, ctx->r3) = 0;
L_1506461C:
    // 0x1506461C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15064620: addiu       $t0, $zero, 0x22D
    ctx->r8 = ADD32(0, 0X22D);
    // 0x15064624: sb          $a2, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r6;
    // 0x15064628: sb          $a2, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r6;
    // 0x1506462C: b           L_15064774
    // 0x15064630: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
        goto L_15064774;
    // 0x15064630: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
L_15064634:
    // 0x15064634: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15064638: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1506463C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x15064640: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x15064644: nop

    // 0x15064648: bc1fl       L_1506465C
    if (!c1cs) {
        // 0x1506464C: sb          $v0, 0x89($s0)
        MEM_B(0X89, ctx->r16) = ctx->r2;
            goto L_1506465C;
    }
    goto skip_3;
    // 0x1506464C: sb          $v0, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r2;
    skip_3:
    // 0x15064650: addiu       $t0, $zero, 0x19A
    ctx->r8 = ADD32(0, 0X19A);
    // 0x15064654: sb          $a2, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r6;
    // 0x15064658: sb          $v0, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r2;
L_1506465C:
    // 0x1506465C: sb          $v0, 0x8A($s0)
    MEM_B(0X8A, ctx->r16) = ctx->r2;
    // 0x15064660: b           L_15064774
    // 0x15064664: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
        goto L_15064774;
    // 0x15064664: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
L_15064668:
    // 0x15064668: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1506466C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15064670: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x15064674: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x15064678: nop

    // 0x1506467C: bc1fl       L_15064690
    if (!c1cs) {
        // 0x15064680: sb          $v0, 0x89($s0)
        MEM_B(0X89, ctx->r16) = ctx->r2;
            goto L_15064690;
    }
    goto skip_4;
    // 0x15064680: sb          $v0, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r2;
    skip_4:
    // 0x15064684: addiu       $t0, $zero, 0x2E7
    ctx->r8 = ADD32(0, 0X2E7);
    // 0x15064688: sb          $a2, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r6;
    // 0x1506468C: sb          $v0, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r2;
L_15064690:
    // 0x15064690: sb          $v0, 0x8A($s0)
    MEM_B(0X8A, ctx->r16) = ctx->r2;
    // 0x15064694: b           L_15064774
    // 0x15064698: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
        goto L_15064774;
    // 0x15064698: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
L_1506469C:
    // 0x1506469C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150646A0: lwc1        $f6, -0x682C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X682C);
    // 0x150646A4: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150646A8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150646AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150646B0: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150646B4: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150646B8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x150646BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150646C0: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150646C4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150646C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150646CC: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x150646D0: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150646D4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150646D8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x150646DC: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x150646E0: bc1f        L_1506476C
    if (!c1cs) {
        // 0x150646E4: nop
    
            goto L_1506476C;
    }
    // 0x150646E4: nop

    // 0x150646E8: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    // 0x150646EC: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x150646F0: jal         0x1505A630
    // 0x150646F4: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    func_1505A630(rdram, ctx);
        goto after_6;
    // 0x150646F4: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x150646F8: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x150646FC: addiu       $t1, $sp, 0x3C
    ctx->r9 = ADD32(ctx->r29, 0X3C);
    // 0x15064700: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15064704: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15064708: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x1506470C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x15064710: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x15064714: jal         0x1505A184
    // 0x15064718: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    func_1505A184(rdram, ctx);
        goto after_7;
    // 0x15064718: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_7:
    // 0x1506471C: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x15064720: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15064724: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x15064728: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506472C: lwc1        $f8, -0x6828($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6828);
    // 0x15064730: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15064734: addiu       $t2, $s0, 0x170
    ctx->r10 = ADD32(ctx->r16, 0X170);
    // 0x15064738: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1506473C: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15064740: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15064744: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15064748: addiu       $a3, $s0, 0x16C
    ctx->r7 = ADD32(ctx->r16, 0X16C);
    // 0x1506474C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15064750: jal         0x1505A250
    // 0x15064754: nop

    func_1505A250(rdram, ctx);
        goto after_8;
    // 0x15064754: nop

    after_8:
    // 0x15064758: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x1506475C: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15064760: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15064764: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15064768: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
L_1506476C:
    // 0x1506476C: b           L_15064778
    // 0x15064770: sb          $zero, 0x7B($v1)
    MEM_B(0X7B, ctx->r3) = 0;
        goto L_15064778;
    // 0x15064770: sb          $zero, 0x7B($v1)
    MEM_B(0X7B, ctx->r3) = 0;
L_15064774:
    // 0x15064774: sb          $zero, 0x7B($v1)
    MEM_B(0X7B, ctx->r3) = 0;
L_15064778:
    // 0x15064778: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
L_1506477C:
    // 0x1506477C: lbu         $t3, 0x198($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X198);
    // 0x15064780: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15064784: bne         $t3, $zero, L_15064950
    if (ctx->r11 != 0) {
        // 0x15064788: nop
    
            goto L_15064950;
    }
    // 0x15064788: nop

    // 0x1506478C: bne         $t0, $zero, L_15064950
    if (ctx->r8 != 0) {
        // 0x15064790: lw          $t4, 0x74($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X74);
            goto L_15064950;
    }
    // 0x15064790: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x15064794: andi        $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 & 0X4000;
    // 0x15064798: beq         $t5, $zero, L_15064950
    if (ctx->r13 == 0) {
        // 0x1506479C: nop
    
            goto L_15064950;
    }
    // 0x1506479C: nop

    // 0x150647A0: lbu         $v0, 0x4E($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4E);
    // 0x150647A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150647A8: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150647AC: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x150647B0: beq         $t6, $at, L_15064950
    if (ctx->r14 == ctx->r1) {
        // 0x150647B4: nop
    
            goto L_15064950;
    }
    // 0x150647B4: nop

    // 0x150647B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150647BC: nop

    // 0x150647C0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x150647C4: nop

    // 0x150647C8: bc1f        L_15064950
    if (!c1cs) {
        // 0x150647CC: nop
    
            goto L_15064950;
    }
    // 0x150647CC: nop

    // 0x150647D0: lbu         $t7, 0x89($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X89);
    // 0x150647D4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150647D8: beq         $t7, $at, L_15064950
    if (ctx->r15 == ctx->r1) {
        // 0x150647DC: nop
    
            goto L_15064950;
    }
    // 0x150647DC: nop

    // 0x150647E0: lbu         $t8, 0x13C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X13C);
    // 0x150647E4: slti        $at, $t8, 0x64
    ctx->r1 = SIGNED(ctx->r24) < 0X64 ? 1 : 0;
    // 0x150647E8: bnel        $at, $zero, L_15064848
    if (ctx->r1 != 0) {
        // 0x150647EC: lbu         $t4, 0x75($v1)
        ctx->r12 = MEM_BU(ctx->r3, 0X75);
            goto L_15064848;
    }
    goto skip_5;
    // 0x150647EC: lbu         $t4, 0x75($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X75);
    skip_5:
    // 0x150647F0: lw          $t9, 0x25C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X25C);
    // 0x150647F4: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x150647F8: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x150647FC: andi        $t1, $t9, 0x20
    ctx->r9 = ctx->r25 & 0X20;
    // 0x15064800: bne         $t1, $zero, L_15064950
    if (ctx->r9 != 0) {
        // 0x15064804: nop
    
            goto L_15064950;
    }
    // 0x15064804: nop

    // 0x15064808: lbu         $t2, -0x19EA($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X19EA);
    // 0x1506480C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15064810: addiu       $t0, $zero, 0xD6
    ctx->r8 = ADD32(0, 0XD6);
    // 0x15064814: beq         $t2, $zero, L_15064824
    if (ctx->r10 == 0) {
        // 0x15064818: lwc1        $f16, -0x6824($at)
        ctx->f16.u32l = MEM_W(ctx->r1, -0X6824);
            goto L_15064824;
    }
    // 0x15064818: lwc1        $f16, -0x6824($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6824);
    // 0x1506481C: addiu       $t0, $zero, 0x118
    ctx->r8 = ADD32(0, 0X118);
    // 0x15064820: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
L_15064824:
    // 0x15064824: lw          $t3, -0x1610($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1610);
    // 0x15064828: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x1506482C: bnel        $t3, $at, L_1506483C
    if (ctx->r11 != ctx->r1) {
        // 0x15064830: sb          $a2, 0x83($s0)
        MEM_B(0X83, ctx->r16) = ctx->r6;
            goto L_1506483C;
    }
    goto skip_6;
    // 0x15064830: sb          $a2, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r6;
    skip_6:
    // 0x15064834: addiu       $t0, $zero, 0x28D
    ctx->r8 = ADD32(0, 0X28D);
    // 0x15064838: sb          $a2, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r6;
L_1506483C:
    // 0x1506483C: b           L_15064950
    // 0x15064840: sb          $a2, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r6;
        goto L_15064950;
    // 0x15064840: sb          $a2, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r6;
    // 0x15064844: lbu         $t4, 0x75($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X75);
L_15064848:
    // 0x15064848: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1506484C: bne         $t4, $zero, L_15064860
    if (ctx->r12 != 0) {
        // 0x15064850: nop
    
            goto L_15064860;
    }
    // 0x15064850: nop

    // 0x15064854: lbu         $t5, 0x7C($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X7C);
    // 0x15064858: beq         $t5, $zero, L_15064864
    if (ctx->r13 == 0) {
        // 0x1506485C: nop
    
            goto L_15064864;
    }
    // 0x1506485C: nop

L_15064860:
    // 0x15064860: bne         $v0, $at, L_15064950
    if (ctx->r2 != ctx->r1) {
        // 0x15064864: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_15064950;
    }
L_15064864:
    // 0x15064864: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15064868: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x1506486C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x15064870: beq         $v0, $at, L_15064950
    if (ctx->r2 == ctx->r1) {
        // 0x15064874: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_15064950;
    }
    // 0x15064874: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x15064878: beq         $v0, $at, L_15064950
    if (ctx->r2 == ctx->r1) {
        // 0x1506487C: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_15064950;
    }
    // 0x1506487C: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x15064880: beq         $v0, $at, L_15064950
    if (ctx->r2 == ctx->r1) {
        // 0x15064884: addiu       $at, $zero, 0x34
        ctx->r1 = ADD32(0, 0X34);
            goto L_15064950;
    }
    // 0x15064884: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x15064888: beq         $v0, $at, L_15064950
    if (ctx->r2 == ctx->r1) {
        // 0x1506488C: nop
    
            goto L_15064950;
    }
    // 0x1506488C: nop

    // 0x15064890: lh          $t6, 0x8($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X8);
    // 0x15064894: addiu       $t0, $zero, 0x33
    ctx->r8 = ADD32(0, 0X33);
    // 0x15064898: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506489C: beq         $t6, $zero, L_150648B4
    if (ctx->r14 == 0) {
        // 0x150648A0: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_150648B4;
    }
    // 0x150648A0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150648A4: sb          $a2, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r6;
    // 0x150648A8: sb          $a2, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r6;
    // 0x150648AC: b           L_15064950
    // 0x150648B0: lwc1        $f16, -0x6820($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6820);
        goto L_15064950;
    // 0x150648B0: lwc1        $f16, -0x6820($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6820);
L_150648B4:
    // 0x150648B4: sb          $a2, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r6;
    // 0x150648B8: lbu         $t7, -0x19EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X19EA);
    // 0x150648BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150648C0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x150648C4: bne         $t7, $zero, L_150648D4
    if (ctx->r15 != 0) {
        // 0x150648C8: nop
    
            goto L_150648D4;
    }
    // 0x150648C8: nop

    // 0x150648CC: b           L_150648FC
    // 0x150648D0: addiu       $t0, $zero, 0x1DC
    ctx->r8 = ADD32(0, 0X1DC);
        goto L_150648FC;
    // 0x150648D0: addiu       $t0, $zero, 0x1DC
    ctx->r8 = ADD32(0, 0X1DC);
L_150648D4:
    // 0x150648D4: lw          $v0, -0x6300($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6300);
    // 0x150648D8: andi        $t8, $v0, 0x400
    ctx->r24 = ctx->r2 & 0X400;
    // 0x150648DC: beq         $t8, $zero, L_150648EC
    if (ctx->r24 == 0) {
        // 0x150648E0: andi        $t9, $v0, 0x800
        ctx->r25 = ctx->r2 & 0X800;
            goto L_150648EC;
    }
    // 0x150648E0: andi        $t9, $v0, 0x800
    ctx->r25 = ctx->r2 & 0X800;
    // 0x150648E4: b           L_150648FC
    // 0x150648E8: addiu       $t0, $zero, 0x355
    ctx->r8 = ADD32(0, 0X355);
        goto L_150648FC;
    // 0x150648E8: addiu       $t0, $zero, 0x355
    ctx->r8 = ADD32(0, 0X355);
L_150648EC:
    // 0x150648EC: beq         $t9, $zero, L_150648FC
    if (ctx->r25 == 0) {
        // 0x150648F0: addiu       $t0, $zero, 0x354
        ctx->r8 = ADD32(0, 0X354);
            goto L_150648FC;
    }
    // 0x150648F0: addiu       $t0, $zero, 0x354
    ctx->r8 = ADD32(0, 0X354);
    // 0x150648F4: b           L_150648FC
    // 0x150648F8: addiu       $t0, $zero, 0x1DC
    ctx->r8 = ADD32(0, 0X1DC);
        goto L_150648FC;
    // 0x150648F8: addiu       $t0, $zero, 0x1DC
    ctx->r8 = ADD32(0, 0X1DC);
L_150648FC:
    // 0x150648FC: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    // 0x15064900: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15064904: lwc1        $f16, -0x681C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X681C);
    // 0x15064908: lbu         $t1, 0x84($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X84);
    // 0x1506490C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15064910: bnel        $t1, $zero, L_1506494C
    if (ctx->r9 != 0) {
        // 0x15064914: sb          $t4, 0x80($s0)
        MEM_B(0X80, ctx->r16) = ctx->r12;
            goto L_1506494C;
    }
    goto skip_7;
    // 0x15064914: sb          $t4, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r12;
    skip_7:
    // 0x15064918: lbu         $t2, 0x4E($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X4E);
    // 0x1506491C: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x15064920: bnel        $t2, $zero, L_1506494C
    if (ctx->r10 != 0) {
        // 0x15064924: sb          $t4, 0x80($s0)
        MEM_B(0X80, ctx->r16) = ctx->r12;
            goto L_1506494C;
    }
    goto skip_8;
    // 0x15064924: sb          $t4, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r12;
    skip_8:
    // 0x15064928: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1506492C: sb          $a2, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r6;
    // 0x15064930: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15064934: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x15064938: lhu         $t3, 0x4C($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X4C);
    // 0x1506493C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15064940: addiu       $t0, $zero, 0x46
    ctx->r8 = ADD32(0, 0X46);
    // 0x15064944: sh          $t3, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r11;
    // 0x15064948: sb          $t4, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r12;
L_1506494C:
    // 0x1506494C: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
L_15064950:
    // 0x15064950: beq         $t0, $zero, L_1506498C
    if (ctx->r8 == 0) {
        // 0x15064954: addiu       $at, $zero, 0x3E7
        ctx->r1 = ADD32(0, 0X3E7);
            goto L_1506498C;
    }
    // 0x15064954: addiu       $at, $zero, 0x3E7
    ctx->r1 = ADD32(0, 0X3E7);
    // 0x15064958: beq         $t0, $at, L_1506498C
    if (ctx->r8 == ctx->r1) {
        // 0x1506495C: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_1506498C;
    }
    // 0x1506495C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x15064960: bne         $t5, $zero, L_1506498C
    if (ctx->r13 != 0) {
        // 0x15064964: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1506498C;
    }
    // 0x15064964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15064968: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1506496C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15064970: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x15064974: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    // 0x15064978: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x1506497C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15064980: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15064984: jal         0x1505E650
    // 0x15064988: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_1505E650(rdram, ctx);
        goto after_9;
    // 0x15064988: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_9:
L_1506498C:
    // 0x1506498C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15064990: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15064994: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x15064998: jr          $ra
    // 0x1506499C: nop

    return;
    return;
    // 0x1506499C: nop

;}
RECOMP_FUNC void func_150DFDA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DFDA4: lw          $v0, 0x1D4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1D4);
    // 0x150DFDA8: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x150DFDAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DFDB0: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x150DFDB4: swc1        $f4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f4.u32l;
    // 0x150DFDB8: lwc1        $f6, 0xFB0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XFB0);
    // 0x150DFDBC: swc1        $f6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f6.u32l;
    // 0x150DFDC0: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x150DFDC4: swc1        $f8, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f8.u32l;
    // 0x150DFDC8: jr          $ra
    // 0x150DFDCC: nop

    return;
    return;
    // 0x150DFDCC: nop

;}
RECOMP_FUNC void func_1506F9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506F9C0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1506F9C4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1506F9C8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1506F9CC: jal         0x150ADA68
    // 0x1506F9D0: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x1506F9D0: nop

    after_0:
    // 0x1506F9D4: lui         $at, 0x4371
    ctx->r1 = S32(0X4371 << 16);
    // 0x1506F9D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506F9DC: lui         $at, 0xC2FE
    ctx->r1 = S32(0XC2FE << 16);
    // 0x1506F9E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506F9E4: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x1506F9E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1506F9EC: lui         $at, 0x43D1
    ctx->r1 = S32(0X43D1 << 16);
    // 0x1506F9F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506F9F4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506F9F8: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506F9FC: lui         $at, 0xC353
    ctx->r1 = S32(0XC353 << 16);
    // 0x1506FA00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1506FA04: lui         $at, 0xC2E4
    ctx->r1 = S32(0XC2E4 << 16);
    // 0x1506FA08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1506FA0C: lbu         $a1, 0x3B($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X3B);
    // 0x1506FA10: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1506FA14: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1506FA18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506FA1C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1506FA20: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x1506FA24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506FA28: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x1506FA2C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x1506FA30: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1506FA34: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x1506FA38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506FA3C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x1506FA40: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x1506FA44: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1506FA48: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x1506FA4C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1506FA50: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x1506FA54: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x1506FA58: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x1506FA5C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x1506FA60: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x1506FA64: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x1506FA68: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1506FA6C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x1506FA70: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1506FA74: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x1506FA78: jal         0x150E2EA4
    // 0x1506FA7C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    func_150E2EA4(rdram, ctx);
        goto after_1;
    // 0x1506FA7C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x1506FA80: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1506FA84: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1506FA88: jr          $ra
    // 0x1506FA8C: nop

    return;
    return;
    // 0x1506FA8C: nop

;}
RECOMP_FUNC void func_150DE2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DE2A4: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x150DE2A8: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x150DE2AC: beq         $at, $zero, L_150DE2B8
    if (ctx->r1 == 0) {
        // 0x150DE2B0: sll         $t6, $v0, 3
        ctx->r14 = S32(ctx->r2 << 3);
            goto L_150DE2B8;
    }
    // 0x150DE2B0: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x150DE2B4: sb          $t6, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r14;
L_150DE2B8:
    // 0x150DE2B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150DE2BC: jr          $ra
    // 0x150DE2C0: nop

    return;
    return;
    // 0x150DE2C0: nop

;}
RECOMP_FUNC void func_1505D6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505D6F0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x1505D6F4: sw          $s4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r20;
    // 0x1505D6F8: sw          $s3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r19;
    // 0x1505D6FC: sw          $s2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r18;
    // 0x1505D700: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1505D704: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x1505D708: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x1505D70C: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x1505D710: sw          $s5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r21;
    // 0x1505D714: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x1505D718: sw          $s0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r16;
    // 0x1505D71C: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x1505D720: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x1505D724: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x1505D728: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x1505D72C: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x1505D730: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x1505D734: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D738: sw          $zero, -0x3D98($at)
    MEM_W(-0X3D98, ctx->r1) = 0;
    // 0x1505D73C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D740: sb          $zero, -0x3D94($at)
    MEM_B(-0X3D94, ctx->r1) = 0;
    // 0x1505D744: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D748: sb          $zero, -0x3D93($at)
    MEM_B(-0X3D93, ctx->r1) = 0;
    // 0x1505D74C: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x1505D750: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x1505D754: addiu       $s5, $zero, 0x19
    ctx->r21 = ADD32(0, 0X19);
    // 0x1505D758: bne         $s4, $t6, L_1505D7A0
    if (ctx->r20 != ctx->r14) {
        // 0x1505D75C: subu        $t7, $t7, $s3
        ctx->r15 = SUB32(ctx->r15, ctx->r19);
            goto L_1505D7A0;
    }
    // 0x1505D75C: subu        $t7, $t7, $s3
    ctx->r15 = SUB32(ctx->r15, ctx->r19);
    // 0x1505D760: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1505D764: addu        $t7, $t7, $s3
    ctx->r15 = ADD32(ctx->r15, ctx->r19);
    // 0x1505D768: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1505D76C: subu        $t7, $t7, $s3
    ctx->r15 = SUB32(ctx->r15, ctx->r19);
    // 0x1505D770: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1505D774: subu        $t7, $t7, $s3
    ctx->r15 = SUB32(ctx->r15, ctx->r19);
    // 0x1505D778: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1505D77C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1505D780: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1505D784: lw          $v0, -0x3A14($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A14);
    // 0x1505D788: lbu         $t8, 0x4E($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4E);
    // 0x1505D78C: bnel        $t8, $zero, L_1505DAA4
    if (ctx->r24 != 0) {
        // 0x1505D790: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_1505DAA4;
    }
    goto skip_0;
    // 0x1505D790: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_0:
    // 0x1505D794: lbu         $t9, 0x27($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X27);
    // 0x1505D798: bnel        $t9, $zero, L_1505DAA4
    if (ctx->r25 != 0) {
        // 0x1505D79C: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_1505DAA4;
    }
    goto skip_1;
    // 0x1505D79C: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_1:
L_1505D7A0:
    // 0x1505D7A0: lbu         $t0, 0x13D($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X13D);
    // 0x1505D7A4: slti        $at, $t0, 0x64
    ctx->r1 = SIGNED(ctx->r8) < 0X64 ? 1 : 0;
    // 0x1505D7A8: beql        $at, $zero, L_1505DAA4
    if (ctx->r1 == 0) {
        // 0x1505D7AC: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_1505DAA4;
    }
    goto skip_2;
    // 0x1505D7AC: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_2:
    // 0x1505D7B0: lh          $v1, 0xE4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XE4);
    // 0x1505D7B4: beql        $v1, $zero, L_1505DAA4
    if (ctx->r3 == 0) {
        // 0x1505D7B8: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_1505DAA4;
    }
    goto skip_3;
    // 0x1505D7B8: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_3:
    // 0x1505D7BC: lbu         $t1, 0x65($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X65);
    // 0x1505D7C0: bnel        $t1, $zero, L_1505DAA4
    if (ctx->r9 != 0) {
        // 0x1505D7C4: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_1505DAA4;
    }
    goto skip_4;
    // 0x1505D7C4: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_4:
    // 0x1505D7C8: lw          $v0, 0xF8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF8);
    // 0x1505D7CC: sll         $t2, $v0, 7
    ctx->r10 = S32(ctx->r2 << 7);
    // 0x1505D7D0: bltz        $t2, L_1505DAA0
    if (SIGNED(ctx->r10) < 0) {
        // 0x1505D7D4: andi        $t3, $v0, 0x4000
        ctx->r11 = ctx->r2 & 0X4000;
            goto L_1505DAA0;
    }
    // 0x1505D7D4: andi        $t3, $v0, 0x4000
    ctx->r11 = ctx->r2 & 0X4000;
    // 0x1505D7D8: bnel        $t3, $zero, L_1505DAA4
    if (ctx->r11 != 0) {
        // 0x1505D7DC: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_1505DAA4;
    }
    goto skip_5;
    // 0x1505D7DC: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_5:
    // 0x1505D7E0: lh          $t4, 0xE8($s2)
    ctx->r12 = MEM_H(ctx->r18, 0XE8);
    // 0x1505D7E4: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x1505D7E8: lwc1        $f6, 0x18($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X18);
    // 0x1505D7EC: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x1505D7F0: sll         $t5, $v0, 6
    ctx->r13 = S32(ctx->r2 << 6);
    // 0x1505D7F4: lwc1        $f22, 0xEC($s2)
    ctx->f22.u32l = MEM_W(ctx->r18, 0XEC);
    // 0x1505D7F8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1505D7FC: lwc1        $f24, 0x14($s2)
    ctx->f24.u32l = MEM_W(ctx->r18, 0X14);
    // 0x1505D800: lwc1        $f28, 0x1C($s2)
    ctx->f28.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x1505D804: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x1505D808: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x1505D80C: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1505D810: bgez        $t5, L_1505D81C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1505D814: add.s       $f26, $f6, $f10
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = ctx->f6.fl + ctx->f10.fl;
            goto L_1505D81C;
    }
    // 0x1505D814: add.s       $f26, $f6, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1505D818: or          $s5, $s4, $zero
    ctx->r21 = ctx->r20 | 0;
L_1505D81C:
    // 0x1505D81C: blez        $s5, L_1505DAA0
    if (SIGNED(ctx->r21) <= 0) {
        // 0x1505D820: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_1505DAA0;
    }
    // 0x1505D820: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1505D824: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x1505D828: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
L_1505D82C:
    // 0x1505D82C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x1505D830: beql        $a0, $zero, L_1505DA98
    if (ctx->r4 == 0) {
        // 0x1505D834: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DA98;
    }
    goto skip_6;
    // 0x1505D834: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
    // 0x1505D838: lh          $v1, 0xE4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE4);
    // 0x1505D83C: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x1505D840: bnel        $at, $zero, L_1505DA98
    if (ctx->r1 != 0) {
        // 0x1505D844: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DA98;
    }
    goto skip_7;
    // 0x1505D844: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x1505D848: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x1505D84C: sll         $t6, $v0, 6
    ctx->r14 = S32(ctx->r2 << 6);
    // 0x1505D850: bgez        $t6, L_1505D868
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1505D854: sll         $t8, $v0, 7
        ctx->r24 = S32(ctx->r2 << 7);
            goto L_1505D868;
    }
    // 0x1505D854: sll         $t8, $v0, 7
    ctx->r24 = S32(ctx->r2 << 7);
    // 0x1505D858: lbu         $t7, 0x127($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X127);
    // 0x1505D85C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1505D860: beql        $t7, $at, L_1505DA98
    if (ctx->r15 == ctx->r1) {
        // 0x1505D864: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DA98;
    }
    goto skip_8;
    // 0x1505D864: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
L_1505D868:
    // 0x1505D868: bltzl       $t8, L_1505DA98
    if (SIGNED(ctx->r24) < 0) {
        // 0x1505D86C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DA98;
    }
    goto skip_9;
    // 0x1505D86C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_9:
    // 0x1505D870: beql        $s1, $s3, L_1505DA98
    if (ctx->r17 == ctx->r19) {
        // 0x1505D874: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DA98;
    }
    goto skip_10;
    // 0x1505D874: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_10:
    // 0x1505D878: lbu         $t0, 0x65($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X65);
    // 0x1505D87C: addiu       $t9, $s3, 0x1
    ctx->r25 = ADD32(ctx->r19, 0X1);
    // 0x1505D880: beql        $t9, $t0, L_1505DA98
    if (ctx->r25 == ctx->r8) {
        // 0x1505D884: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DA98;
    }
    goto skip_11;
    // 0x1505D884: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_11:
    // 0x1505D888: lbu         $t1, 0x13D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X13D);
    // 0x1505D88C: slti        $at, $t1, 0x64
    ctx->r1 = SIGNED(ctx->r9) < 0X64 ? 1 : 0;
    // 0x1505D890: beql        $at, $zero, L_1505DA98
    if (ctx->r1 == 0) {
        // 0x1505D894: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DA98;
    }
    goto skip_12;
    // 0x1505D894: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_12:
    // 0x1505D898: lbu         $t2, 0x2FA($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2FA);
    // 0x1505D89C: beql        $t2, $zero, L_1505DA98
    if (ctx->r10 == 0) {
        // 0x1505D8A0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DA98;
    }
    goto skip_13;
    // 0x1505D8A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_13:
    // 0x1505D8A4: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x1505D8A8: lh          $t3, 0xE8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE8);
    // 0x1505D8AC: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1505D8B0: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1505D8B4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1505D8B8: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1505D8BC: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1505D8C0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1505D8C4: sub.s       $f12, $f24, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f24.fl - ctx->f8.fl;
    // 0x1505D8C8: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1505D8CC: lbu         $t4, -0x19EA($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X19EA);
    // 0x1505D8D0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1505D8D4: lwc1        $f4, 0xEC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x1505D8D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1505D8DC: sub.s       $f14, $f28, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f28.fl - ctx->f6.fl;
    // 0x1505D8E0: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1505D8E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1505D8E8: add.s       $f10, $f22, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f22.fl + ctx->f4.fl;
    // 0x1505D8EC: sub.s       $f2, $f26, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f26.fl - ctx->f6.fl;
    // 0x1505D8F0: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x1505D8F4: nop

    // 0x1505D8F8: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x1505D8FC: beq         $t4, $zero, L_1505D97C
    if (ctx->r12 == 0) {
        // 0x1505D900: nop
    
            goto L_1505D97C;
    }
    // 0x1505D900: nop

    // 0x1505D904: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1505D908: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505D90C: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1505D910: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1505D914: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1505D918: lwc1        $f10, -0x6AD0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6AD0);
    // 0x1505D91C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1505D920: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x1505D924: nop

    // 0x1505D928: bc1f        L_1505D97C
    if (!c1cs) {
        // 0x1505D92C: nop
    
            goto L_1505D97C;
    }
    // 0x1505D92C: nop

    // 0x1505D930: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x1505D934: bne         $s4, $t5, L_1505D97C
    if (ctx->r20 != ctx->r13) {
        // 0x1505D938: nop
    
            goto L_1505D97C;
    }
    // 0x1505D938: nop

    // 0x1505D93C: bne         $s4, $a0, L_1505D97C
    if (ctx->r20 != ctx->r4) {
        // 0x1505D940: nop
    
            goto L_1505D97C;
    }
    // 0x1505D940: nop

    // 0x1505D944: lbu         $t6, 0x128($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X128);
    // 0x1505D948: lbu         $t7, 0x128($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X128);
    // 0x1505D94C: beq         $t6, $t7, L_1505D97C
    if (ctx->r14 == ctx->r15) {
        // 0x1505D950: nop
    
            goto L_1505D97C;
    }
    // 0x1505D950: nop

    // 0x1505D954: lw          $v0, 0x31C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X31C);
    // 0x1505D958: lbu         $t8, 0x78($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X78);
    // 0x1505D95C: bne         $t8, $zero, L_1505D97C
    if (ctx->r24 != 0) {
        // 0x1505D960: nop
    
            goto L_1505D97C;
    }
    // 0x1505D960: nop

    // 0x1505D964: lw          $t9, 0x31C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X31C);
    // 0x1505D968: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x1505D96C: lbu         $t0, 0x78($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X78);
    // 0x1505D970: beq         $t0, $zero, L_1505D97C
    if (ctx->r8 == 0) {
        // 0x1505D974: nop
    
            goto L_1505D97C;
    }
    // 0x1505D974: nop

    // 0x1505D978: sb          $t1, 0x4A($v0)
    MEM_B(0X4A, ctx->r2) = ctx->r9;
L_1505D97C:
    // 0x1505D97C: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1505D980: add.s       $f0, $f20, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x1505D984: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1505D988: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1505D98C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1505D990: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1505D994: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1505D998: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1505D99C: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x1505D9A0: nop

    // 0x1505D9A4: bc1fl       L_1505D9CC
    if (!c1cs) {
        // 0x1505D9A8: lbu         $t2, 0x4($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X4);
            goto L_1505D9CC;
    }
    goto skip_14;
    // 0x1505D9A8: lbu         $t2, 0x4($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X4);
    skip_14:
    // 0x1505D9AC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x1505D9B0: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x1505D9B4: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x1505D9B8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x1505D9BC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x1505D9C0: jal         0x1505D408
    // 0x1505D9C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_1505D408(rdram, ctx);
        goto after_0;
    // 0x1505D9C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x1505D9C8: lbu         $t2, 0x4($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X4);
L_1505D9CC:
    // 0x1505D9CC: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x1505D9D0: bnel        $t2, $at, L_1505DA98
    if (ctx->r10 != ctx->r1) {
        // 0x1505D9D4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DA98;
    }
    goto skip_15;
    // 0x1505D9D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_15:
    // 0x1505D9D8: lbu         $t3, 0x251($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X251);
    // 0x1505D9DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1505D9E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1505D9E4: bne         $t3, $at, L_1505DA40
    if (ctx->r11 != ctx->r1) {
        // 0x1505D9E8: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_1505DA40;
    }
    // 0x1505D9E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1505D9EC: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x1505D9F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1505D9F4: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x1505D9F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505D9FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1505DA00: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x1505DA04: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x1505DA08: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1505DA0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1505DA10: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x1505DA14: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x1505DA18: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x1505DA1C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1505DA20: swc1        $f30, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f30.u32l;
    // 0x1505DA24: swc1        $f30, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f30.u32l;
    // 0x1505DA28: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x1505DA2C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x1505DA30: jal         0x1505D5D0
    // 0x1505DA34: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    func_1505D5D0(rdram, ctx);
        goto after_1;
    // 0x1505DA34: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x1505DA38: b           L_1505DA98
    // 0x1505DA3C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_1505DA98;
    // 0x1505DA3C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1505DA40:
    // 0x1505DA40: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x1505DA44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1505DA48: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x1505DA4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1505DA50: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x1505DA54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505DA58: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x1505DA5C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x1505DA60: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1505DA64: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505DA68: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x1505DA6C: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x1505DA70: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x1505DA74: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x1505DA78: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x1505DA7C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1505DA80: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x1505DA84: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x1505DA88: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x1505DA8C: jal         0x1505D5D0
    // 0x1505DA90: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    func_1505D5D0(rdram, ctx);
        goto after_2;
    // 0x1505DA90: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x1505DA94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1505DA98:
    // 0x1505DA98: bne         $s1, $s5, L_1505D82C
    if (ctx->r17 != ctx->r21) {
        // 0x1505DA9C: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_1505D82C;
    }
    // 0x1505DA9C: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
L_1505DAA0:
    // 0x1505DAA0: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_1505DAA4:
    // 0x1505DAA4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x1505DAA8: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x1505DAAC: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x1505DAB0: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x1505DAB4: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x1505DAB8: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x1505DABC: lw          $s0, 0x6C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X6C);
    // 0x1505DAC0: lw          $s1, 0x70($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X70);
    // 0x1505DAC4: lw          $s2, 0x74($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X74);
    // 0x1505DAC8: lw          $s3, 0x78($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X78);
    // 0x1505DACC: lw          $s4, 0x7C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X7C);
    // 0x1505DAD0: lw          $s5, 0x80($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X80);
    // 0x1505DAD4: jr          $ra
    // 0x1505DAD8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    return;
    // 0x1505DAD8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_15006BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15006BEC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x15006BF0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15006BF4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15006BF8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15006BFC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x15006C00: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x15006C04: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x15006C08: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x15006C0C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x15006C10: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15006C14: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15006C18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15006C1C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15006C20: addiu       $v0, $t7, -0x1C08
    ctx->r2 = ADD32(ctx->r15, -0X1C08);
    // 0x15006C24: sll         $t6, $s1, 4
    ctx->r14 = S32(ctx->r17 << 4);
    // 0x15006C28: addu        $a1, $t6, $v0
    ctx->r5 = ADD32(ctx->r14, ctx->r2);
    // 0x15006C2C: lw          $s0, 0x8($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X8);
    // 0x15006C30: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x15006C34: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x15006C38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15006C3C: and         $t8, $s0, $at
    ctx->r24 = ctx->r16 & ctx->r1;
    // 0x15006C40: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15006C44: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x15006C48: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x15006C4C: addiu       $v1, $v1, -0x1BD8
    ctx->r3 = ADD32(ctx->r3, -0X1BD8);
    // 0x15006C50: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
L_15006C54:
    // 0x15006C54: bltzl       $t9, L_15006C74
    if (SIGNED(ctx->r25) < 0) {
        // 0x15006C58: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_15006C74;
    }
    goto skip_0;
    // 0x15006C58: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    skip_0:
    // 0x15006C5C: lb          $t0, 0xE($v0)
    ctx->r8 = MEM_B(ctx->r2, 0XE);
    // 0x15006C60: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15006C64: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x15006C68: nor         $t3, $t2, $zero
    ctx->r11 = ~(ctx->r10 | 0);
    // 0x15006C6C: and         $s3, $s3, $t3
    ctx->r19 = ctx->r19 & ctx->r11;
    // 0x15006C70: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_15006C74:
    // 0x15006C74: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x15006C78: bnel        $at, $zero, L_15006C54
    if (ctx->r1 != 0) {
        // 0x15006C7C: lw          $t9, 0x8($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X8);
            goto L_15006C54;
    }
    goto skip_1;
    // 0x15006C7C: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    skip_1:
    // 0x15006C80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15006C84: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x15006C88: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_15006C8C:
    // 0x15006C8C: sllv        $t5, $t4, $s5
    ctx->r13 = S32(ctx->r12 << (ctx->r21 & 31));
    // 0x15006C90: and         $t6, $t5, $s3
    ctx->r14 = ctx->r13 & ctx->r19;
    // 0x15006C94: beql        $t6, $zero, L_15006CA4
    if (ctx->r14 == 0) {
        // 0x15006C98: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_15006CA4;
    }
    goto skip_2;
    // 0x15006C98: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    skip_2:
    // 0x15006C9C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x15006CA0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_15006CA4:
    // 0x15006CA4: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x15006CA8: bnel        $at, $zero, L_15006C8C
    if (ctx->r1 != 0) {
        // 0x15006CAC: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_15006C8C;
    }
    goto skip_3;
    // 0x15006CAC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    skip_3:
    // 0x15006CB0: sb          $a3, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r7;
    // 0x15006CB4: sw          $s0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r16;
    // 0x15006CB8: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x15006CBC: lbu         $t8, -0x53A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X53A4);
    // 0x15006CC0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15006CC4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x15006CC8: bne         $t8, $zero, L_15006D24
    if (ctx->r24 != 0) {
        // 0x15006CCC: addiu       $v0, $v0, -0x1CA8
        ctx->r2 = ADD32(ctx->r2, -0X1CA8);
            goto L_15006D24;
    }
    // 0x15006CCC: addiu       $v0, $v0, -0x1CA8
    ctx->r2 = ADD32(ctx->r2, -0X1CA8);
    // 0x15006CD0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15006CD4: addiu       $a0, $a0, -0x1CA0
    ctx->r4 = ADD32(ctx->r4, -0X1CA0);
    // 0x15006CD8: addiu       $v1, $zero, 0xFE
    ctx->r3 = ADD32(0, 0XFE);
L_15006CDC:
    // 0x15006CDC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15006CE0: sb          $v1, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r3;
    // 0x15006CE4: sb          $v1, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r3;
    // 0x15006CE8: sb          $v1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r3;
    // 0x15006CEC: bne         $v0, $a0, L_15006CDC
    if (ctx->r2 != ctx->r4) {
        // 0x15006CF0: sb          $v1, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r3;
            goto L_15006CDC;
    }
    // 0x15006CF0: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x15006CF4: jal         0x10024F10
    // 0x15006CF8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x15006CF8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x15006CFC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x15006D00: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15006D04: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15006D08: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x15006D0C: addiu       $a1, $t7, 0x13
    ctx->r5 = ADD32(ctx->r15, 0X13);
    // 0x15006D10: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x15006D14: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x15006D18: addiu       $a2, $a2, -0x1CA8
    ctx->r6 = ADD32(ctx->r6, -0X1CA8);
    // 0x15006D1C: jal         0x151DD4E0
    // 0x15006D20: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    func_151DD4E0(rdram, ctx);
        goto after_1;
    // 0x15006D20: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    after_1:
L_15006D24:
    // 0x15006D24: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x15006D28: addiu       $fp, $fp, -0x1C10
    ctx->r30 = ADD32(ctx->r30, -0X1C10);
    // 0x15006D2C: lw          $t1, 0x0($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X0);
    // 0x15006D30: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x15006D34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15006D38: bne         $t1, $zero, L_15006D58
    if (ctx->r9 != 0) {
        // 0x15006D3C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_15006D58;
    }
    // 0x15006D3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15006D40: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x15006D44: jal         0x1502B5C8
    // 0x15006D48: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    func_1502B5C8(rdram, ctx);
        goto after_2;
    // 0x15006D48: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_2:
    // 0x15006D4C: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x15006D50: sw          $t0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r8;
    // 0x15006D54: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
L_15006D58:
    // 0x15006D58: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15006D5C: addiu       $v0, $v0, -0x1CA6
    ctx->r2 = ADD32(ctx->r2, -0X1CA6);
    // 0x15006D60: sra         $t3, $s0, 24
    ctx->r11 = S32(SIGNED(ctx->r16) >> 24);
    // 0x15006D64: sra         $t5, $s0, 16
    ctx->r13 = S32(SIGNED(ctx->r16) >> 16);
    // 0x15006D68: sra         $t8, $s0, 8
    ctx->r24 = S32(SIGNED(ctx->r16) >> 8);
    // 0x15006D6C: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x15006D70: sb          $t3, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r11;
    // 0x15006D74: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
    // 0x15006D78: sb          $t8, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r24;
    // 0x15006D7C: sb          $s0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r16;
    // 0x15006D80: addiu       $s4, $v0, 0x5
    ctx->r20 = ADD32(ctx->r2, 0X5);
    // 0x15006D84: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15006D88: addiu       $v0, $v0, 0x2E4C
    ctx->r2 = ADD32(ctx->r2, 0X2E4C);
    // 0x15006D8C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_15006D90:
    // 0x15006D90: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x15006D94: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x15006D98: addu        $t1, $t9, $s5
    ctx->r9 = ADD32(ctx->r25, ctx->r21);
    // 0x15006D9C: lbu         $t0, 0x0($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X0);
    // 0x15006DA0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x15006DA4: slti        $at, $s5, 0x1B
    ctx->r1 = SIGNED(ctx->r21) < 0X1B ? 1 : 0;
    // 0x15006DA8: bne         $at, $zero, L_15006D90
    if (ctx->r1 != 0) {
        // 0x15006DAC: sb          $t0, -0x1($s4)
        MEM_B(-0X1, ctx->r20) = ctx->r8;
            goto L_15006D90;
    }
    // 0x15006DAC: sb          $t0, -0x1($s4)
    MEM_B(-0X1, ctx->r20) = ctx->r8;
    // 0x15006DB0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15006DB4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15006DB8: addiu       $v1, $v1, 0x2E69
    ctx->r3 = ADD32(ctx->r3, 0X2E69);
    // 0x15006DBC: addiu       $v0, $v0, 0x2E60
    ctx->r2 = ADD32(ctx->r2, 0X2E60);
L_15006DC0:
    // 0x15006DC0: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x15006DC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15006DC8: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x15006DCC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x15006DD0: bne         $at, $zero, L_15006DC0
    if (ctx->r1 != 0) {
        // 0x15006DD4: sb          $t2, -0x1($s4)
        MEM_B(-0X1, ctx->r20) = ctx->r10;
            goto L_15006DC0;
    }
    // 0x15006DD4: sb          $t2, -0x1($s4)
    MEM_B(-0X1, ctx->r20) = ctx->r10;
    // 0x15006DD8: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15006DDC: lb          $t3, -0x1C21($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X1C21);
    // 0x15006DE0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15006DE4: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x15006DE8: sb          $t3, -0x2($s4)
    MEM_B(-0X2, ctx->r20) = ctx->r11;
    // 0x15006DEC: lbu         $t4, -0x1C20($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1C20);
    // 0x15006DF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15006DF4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x15006DF8: sb          $t4, -0x1($s4)
    MEM_B(-0X1, ctx->r20) = ctx->r12;
    // 0x15006DFC: jal         0x150859AC
    // 0x15006E00: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    func_150859AC(rdram, ctx);
        goto after_3;
    // 0x15006E00: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_3:
    // 0x15006E04: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15006E08: addiu       $a2, $a2, -0x1C1C
    ctx->r6 = ADD32(ctx->r6, -0X1C1C);
    // 0x15006E0C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x15006E10: srl         $t8, $v0, 8
    ctx->r24 = S32(U32(ctx->r2) >> 8);
    // 0x15006E14: sb          $t8, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r24;
    // 0x15006E18: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x15006E1C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15006E20: addiu       $a1, $a1, -0x1C18
    ctx->r5 = ADD32(ctx->r5, -0X1C18);
    // 0x15006E24: sb          $t9, 0x1($s4)
    MEM_B(0X1, ctx->r20) = ctx->r25;
    // 0x15006E28: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x15006E2C: addiu       $s4, $s4, 0x6
    ctx->r20 = ADD32(ctx->r20, 0X6);
    // 0x15006E30: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15006E34: srl         $t2, $t1, 24
    ctx->r10 = S32(U32(ctx->r9) >> 24);
    // 0x15006E38: sb          $t2, -0x4($s4)
    MEM_B(-0X4, ctx->r20) = ctx->r10;
    // 0x15006E3C: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x15006E40: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x15006E44: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15006E48: srl         $t5, $t3, 16
    ctx->r13 = S32(U32(ctx->r11) >> 16);
    // 0x15006E4C: sb          $t5, -0x3($s4)
    MEM_B(-0X3, ctx->r20) = ctx->r13;
    // 0x15006E50: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x15006E54: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x15006E58: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x15006E5C: srl         $t7, $t6, 8
    ctx->r15 = S32(U32(ctx->r14) >> 8);
    // 0x15006E60: sb          $t7, -0x2($s4)
    MEM_B(-0X2, ctx->r20) = ctx->r15;
    // 0x15006E64: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x15006E68: sb          $t1, -0x1($s4)
    MEM_B(-0X1, ctx->r20) = ctx->r9;
L_15006E6C:
    // 0x15006E6C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x15006E70: slti        $at, $s5, 0x45
    ctx->r1 = SIGNED(ctx->r21) < 0X45 ? 1 : 0;
    // 0x15006E74: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x15006E78: bne         $at, $zero, L_15006E6C
    if (ctx->r1 != 0) {
        // 0x15006E7C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_15006E6C;
    }
    // 0x15006E7C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x15006E80: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x15006E84: lw          $s2, 0x0($fp)
    ctx->r18 = MEM_W(ctx->r30, 0X0);
L_15006E88:
    // 0x15006E88: lbu         $t0, 0x0($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X0);
    // 0x15006E8C: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x15006E90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15006E94: addiu       $a3, $t0, -0x1
    ctx->r7 = ADD32(ctx->r8, -0X1);
    // 0x15006E98: sra         $a2, $a3, 31
    ctx->r6 = S32(SIGNED(ctx->r7) >> 31);
    // 0x15006E9C: jal         0x100268A4
    // 0x15006EA0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    __ll_lshift_recomp(rdram, ctx);
        goto after_4;
    // 0x15006EA0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_4:
    // 0x15006EA4: lw          $t3, 0x0($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X0);
    // 0x15006EA8: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x15006EAC: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    // 0x15006EB0: addu        $s2, $t3, $s5
    ctx->r18 = ADD32(ctx->r11, ctx->r21);
    // 0x15006EB4: lbu         $t4, 0x0($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X0);
    // 0x15006EB8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15006EBC: addiu       $t6, $t6, 0x3A60
    ctx->r14 = ADD32(ctx->r14, 0X3A60);
    // 0x15006EC0: blez        $t4, L_15006F5C
    if (SIGNED(ctx->r12) <= 0) {
        // 0x15006EC4: sll         $t5, $s5, 3
        ctx->r13 = S32(ctx->r21 << 3);
            goto L_15006F5C;
    }
    // 0x15006EC4: sll         $t5, $s5, 3
    ctx->r13 = S32(ctx->r21 << 3);
    // 0x15006EC8: addu        $s6, $t5, $t6
    ctx->r22 = ADD32(ctx->r13, ctx->r14);
    // 0x15006ECC: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
L_15006ED0:
    // 0x15006ED0: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x15006ED4: lw          $t9, 0x4($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X4);
    // 0x15006ED8: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x15006EDC: and         $t2, $t8, $t0
    ctx->r10 = ctx->r24 & ctx->r8;
    // 0x15006EE0: bne         $t2, $zero, L_15006EF0
    if (ctx->r10 != 0) {
        // 0x15006EE4: and         $t3, $t9, $t1
        ctx->r11 = ctx->r25 & ctx->r9;
            goto L_15006EF0;
    }
    // 0x15006EE4: and         $t3, $t9, $t1
    ctx->r11 = ctx->r25 & ctx->r9;
    // 0x15006EE8: beq         $t3, $zero, L_15006EFC
    if (ctx->r11 == 0) {
        // 0x15006EEC: nop
    
            goto L_15006EFC;
    }
    // 0x15006EEC: nop

L_15006EF0:
    // 0x15006EF0: or          $s0, $s0, $s1
    ctx->r16 = ctx->r16 | ctx->r17;
    // 0x15006EF4: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x15006EF8: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
L_15006EFC:
    // 0x15006EFC: bne         $s7, $s1, L_15006F18
    if (ctx->r23 != ctx->r17) {
        // 0x15006F00: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_15006F18;
    }
    // 0x15006F00: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x15006F04: sb          $s0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r16;
    // 0x15006F08: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x15006F0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15006F10: b           L_15006F24
    // 0x15006F14: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
        goto L_15006F24;
    // 0x15006F14: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
L_15006F18:
    // 0x15006F18: srl         $s1, $v0, 1
    ctx->r17 = S32(U32(ctx->r2) >> 1);
    // 0x15006F1C: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x15006F20: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
L_15006F24:
    // 0x15006F24: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x15006F28: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x15006F2C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x15006F30: jal         0x10026800
    // 0x15006F34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    __ull_rshift_recomp(rdram, ctx);
        goto after_5;
    // 0x15006F34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x15006F38: lw          $t5, 0x0($fp)
    ctx->r13 = MEM_W(ctx->r30, 0X0);
    // 0x15006F3C: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x15006F40: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    // 0x15006F44: addu        $s2, $t5, $s5
    ctx->r18 = ADD32(ctx->r13, ctx->r21);
    // 0x15006F48: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x15006F4C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x15006F50: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15006F54: bnel        $at, $zero, L_15006ED0
    if (ctx->r1 != 0) {
        // 0x15006F58: lw          $t8, 0x0($s6)
        ctx->r24 = MEM_W(ctx->r22, 0X0);
            goto L_15006ED0;
    }
    goto skip_4;
    // 0x15006F58: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    skip_4:
L_15006F5C:
    // 0x15006F5C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x15006F60: slti        $at, $s5, 0x45
    ctx->r1 = SIGNED(ctx->r21) < 0X45 ? 1 : 0;
    // 0x15006F64: bne         $at, $zero, L_15006E88
    if (ctx->r1 != 0) {
        // 0x15006F68: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_15006E88;
    }
    // 0x15006F68: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15006F6C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15006F70: lbu         $v1, -0x1CA6($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1CA6);
    // 0x15006F74: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15006F78: lbu         $t0, -0x1CA5($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1CA5);
    // 0x15006F7C: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x15006F80: addiu       $t9, $t8, 0xCC
    ctx->r25 = ADD32(ctx->r24, 0XCC);
    // 0x15006F84: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x15006F88: addu        $v1, $t9, $t1
    ctx->r3 = ADD32(ctx->r25, ctx->r9);
    // 0x15006F8C: andi        $t2, $v1, 0xFFFF
    ctx->r10 = ctx->r3 & 0XFFFF;
    // 0x15006F90: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15006F94: addiu       $v0, $v0, -0x1CA4
    ctx->r2 = ADD32(ctx->r2, -0X1CA4);
    // 0x15006F98: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x15006F9C: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x15006FA0: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_15006FA4:
    // 0x15006FA4: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x15006FA8: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x15006FAC: andi        $t7, $s5, 0x3
    ctx->r15 = ctx->r21 & 0X3;
    // 0x15006FB0: addiu       $t8, $s5, 0x1
    ctx->r24 = ADD32(ctx->r21, 0X1);
    // 0x15006FB4: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x15006FB8: sllv        $t4, $t3, $t7
    ctx->r12 = S32(ctx->r11 << (ctx->r15 & 31));
    // 0x15006FBC: lbu         $t2, 0x2($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2);
    // 0x15006FC0: sllv        $t0, $t6, $t9
    ctx->r8 = S32(ctx->r14 << (ctx->r25 & 31));
    // 0x15006FC4: lbu         $t8, 0x3($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3);
    // 0x15006FC8: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x15006FCC: addiu       $t3, $s5, 0x2
    ctx->r11 = ADD32(ctx->r21, 0X2);
    // 0x15006FD0: andi        $t7, $t3, 0x3
    ctx->r15 = ctx->r11 & 0X3;
    // 0x15006FD4: addu        $t1, $t5, $t0
    ctx->r9 = ADD32(ctx->r13, ctx->r8);
    // 0x15006FD8: addiu       $t6, $s5, 0x3
    ctx->r14 = ADD32(ctx->r21, 0X3);
    // 0x15006FDC: andi        $t9, $t6, 0x3
    ctx->r25 = ctx->r14 & 0X3;
    // 0x15006FE0: sllv        $t4, $t2, $t7
    ctx->r12 = S32(ctx->r10 << (ctx->r15 & 31));
    // 0x15006FE4: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x15006FE8: sllv        $t0, $t8, $t9
    ctx->r8 = S32(ctx->r24 << (ctx->r25 & 31));
    // 0x15006FEC: addu        $v1, $t5, $t0
    ctx->r3 = ADD32(ctx->r13, ctx->r8);
    // 0x15006FF0: andi        $t1, $v1, 0xFFFF
    ctx->r9 = ctx->r3 & 0XFFFF;
    // 0x15006FF4: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x15006FF8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x15006FFC: bne         $s5, $a0, L_15006FA4
    if (ctx->r21 != ctx->r4) {
        // 0x15007000: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_15006FA4;
    }
    // 0x15007000: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15007004: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007008: jal         0x10024F10
    // 0x1500700C: sh          $t1, -0x1CA8($at)
    MEM_H(-0X1CA8, ctx->r1) = ctx->r9;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_6;
    // 0x1500700C: sh          $t1, -0x1CA8($at)
    MEM_H(-0X1CA8, ctx->r1) = ctx->r9;
    after_6:
    // 0x15007010: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x15007014: lbu         $t3, -0x53A4($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X53A4);
    // 0x15007018: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1500701C: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    // 0x15007020: bne         $t3, $zero, L_1500704C
    if (ctx->r11 != 0) {
        // 0x15007024: lw          $a1, 0x44($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X44);
            goto L_1500704C;
    }
    // 0x15007024: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x15007028: sll         $t2, $a1, 4
    ctx->r10 = S32(ctx->r5 << 4);
    // 0x1500702C: addiu       $a1, $t2, 0x4
    ctx->r5 = ADD32(ctx->r10, 0X4);
    // 0x15007030: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x15007034: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15007038: addiu       $a2, $a2, -0x1CA8
    ctx->r6 = ADD32(ctx->r6, -0X1CA8);
    // 0x1500703C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x15007040: jal         0x151DCEF0
    // 0x15007044: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_151DCEF0(rdram, ctx);
        goto after_7;
    // 0x15007044: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_7:
    // 0x15007048: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
L_1500704C:
    // 0x1500704C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15007050: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15007054: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15007058: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1500705C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15007060: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15007064: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15007068: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1500706C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15007070: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15007074: jr          $ra
    // 0x15007078: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x15007078: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_151644A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151644A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151644AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151644B0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x151644B4: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x151644B8: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x151644BC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151644C0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151644C4: addiu       $a1, $a0, 0x24
    ctx->r5 = ADD32(ctx->r4, 0X24);
    // 0x151644C8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151644CC: nop

    // 0x151644D0: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151644D4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x151644D8: jal         0x151644F4
    // 0x151644DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_151644F4(rdram, ctx);
        goto after_0;
    // 0x151644DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x151644E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151644E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151644E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151644EC: jr          $ra
    // 0x151644F0: nop

    return;
    return;
    // 0x151644F0: nop

;}
RECOMP_FUNC void func_15160A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15160A58: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15160A5C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15160A60: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x15160A64: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x15160A68: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x15160A6C: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x15160A70: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x15160A74: lbu         $t7, 0x77($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X77);
    // 0x15160A78: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x15160A7C: bne         $t6, $zero, L_15160A8C
    if (ctx->r14 != 0) {
        // 0x15160A80: addiu       $t0, $zero, 0x10
        ctx->r8 = ADD32(0, 0X10);
            goto L_15160A8C;
    }
    // 0x15160A80: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x15160A84: b           L_15160B64
    // 0x15160A88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15160B64;
    // 0x15160A88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15160A8C:
    // 0x15160A8C: lh          $t9, 0x7A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X7A);
    // 0x15160A90: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x15160A94: sb          $t7, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r15;
    // 0x15160A98: sb          $t8, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r24;
    // 0x15160A9C: sb          $t0, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r8;
    // 0x15160AA0: sh          $t9, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r25;
    // 0x15160AA4: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x15160AA8: lbu         $t3, 0x6F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X6F);
    // 0x15160AAC: lbu         $t2, 0x3B($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X3B);
    // 0x15160AB0: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x15160AB4: sb          $t3, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r11;
    // 0x15160AB8: sb          $t2, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r10;
    // 0x15160ABC: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x15160AC0: addiu       $t4, $sp, 0x4C
    ctx->r12 = ADD32(ctx->r29, 0X4C);
    // 0x15160AC4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15160AC8: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x15160ACC: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x15160AD0: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x15160AD4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x15160AD8: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x15160ADC: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x15160AE0: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x15160AE4: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x15160AE8: lb          $t9, 0x97($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X97);
    // 0x15160AEC: lbu         $t0, 0x9F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X9F);
    // 0x15160AF0: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x15160AF4: lbu         $t4, 0xA3($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XA3);
    // 0x15160AF8: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x15160AFC: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x15160B00: addiu       $t6, $t7, 0x18
    ctx->r14 = ADD32(ctx->r15, 0X18);
    // 0x15160B04: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x15160B08: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x15160B0C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x15160B10: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x15160B14: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15160B18: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x15160B1C: lw          $a3, 0x80($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X80);
    // 0x15160B20: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x15160B24: sb          $t9, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r25;
    // 0x15160B28: sb          $t0, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r8;
    // 0x15160B2C: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x15160B30: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x15160B34: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15160B38: jal         0x151602C0
    // 0x15160B3C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_151602C0(rdram, ctx);
        goto after_0;
    // 0x15160B3C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_0:
    // 0x15160B40: beq         $v0, $zero, L_15160B60
    if (ctx->r2 == 0) {
        // 0x15160B44: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15160B60;
    }
    // 0x15160B44: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15160B48: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x15160B4C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x15160B50: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x15160B54: jal         0x10022EC0
    // 0x15160B58: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15160B58: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_1:
    // 0x15160B5C: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
L_15160B60:
    // 0x15160B60: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15160B64:
    // 0x15160B64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15160B68: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x15160B6C: jr          $ra
    // 0x15160B70: nop

    return;
    return;
    // 0x15160B70: nop

;}
RECOMP_FUNC void func_15075F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075F6C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15075F70: lbu         $v0, 0x1890($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1890);
    // 0x15075F74: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15075F78: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15075F7C: beq         $v0, $zero, L_15075FDC
    if (ctx->r2 == 0) {
        // 0x15075F80: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15075FDC;
    }
    // 0x15075F80: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15075F84: lbu         $t6, 0x1892($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1892);
    // 0x15075F88: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15075F8C: negu        $t8, $v1
    ctx->r24 = SUB32(0, ctx->r3);
    // 0x15075F90: bnel        $t6, $zero, L_15075FC8
    if (ctx->r14 != 0) {
        // 0x15075F94: mtc1        $t8, $f10
        ctx->f10.u32l = ctx->r24;
            goto L_15075FC8;
    }
    goto skip_0;
    // 0x15075F94: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    skip_0:
    // 0x15075F98: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15075F9C: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x15075FA0: bgez        $v0, L_15075FB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15075FA4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15075FB8;
    }
    // 0x15075FA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15075FA8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15075FAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15075FB0: nop

    // 0x15075FB4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_15075FB8:
    // 0x15075FB8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x15075FBC: b           L_15075FDC
    // 0x15075FC0: swc1        $f6, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f6.u32l;
        goto L_15075FDC;
    // 0x15075FC0: swc1        $f6, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f6.u32l;
    // 0x15075FC4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
L_15075FC8:
    // 0x15075FC8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15075FCC: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x15075FD0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15075FD4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x15075FD8: swc1        $f16, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f16.u32l;
L_15075FDC:
    // 0x15075FDC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15075FE0: lbu         $v0, 0x1891($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1891);
    // 0x15075FE4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15075FE8: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x15075FEC: beq         $v0, $zero, L_15076018
    if (ctx->r2 == 0) {
        // 0x15075FF0: nop
    
            goto L_15076018;
    }
    // 0x15075FF0: nop

    // 0x15075FF4: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x15075FF8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15075FFC: bgez        $v0, L_15076010
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15076000: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_15076010;
    }
    // 0x15076000: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15076004: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15076008: nop

    // 0x1507600C: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_15076010:
    // 0x15076010: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x15076014: swc1        $f4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f4.u32l;
L_15076018:
    // 0x15076018: lbu         $t1, 0x1893($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1893);
    // 0x1507601C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x15076020: sb          $t1, 0x3A($t2)
    MEM_B(0X3A, ctx->r10) = ctx->r9;
    // 0x15076024: jr          $ra
    // 0x15076028: nop

    return;
    return;
    // 0x15076028: nop

;}
RECOMP_FUNC void func_15163604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15163604: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15163608: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1516360C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x15163610: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15163614: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15163618: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1516361C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x15163620: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x15163624: bgez        $a1, L_15163634
    if (SIGNED(ctx->r5) >= 0) {
        // 0x15163628: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_15163634;
    }
    // 0x15163628: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x1516362C: b           L_151636F4
    // 0x15163630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151636F4;
    // 0x15163630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15163634:
    // 0x15163634: slti        $at, $v0, 0xE
    ctx->r1 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x15163638: bne         $at, $zero, L_15163648
    if (ctx->r1 != 0) {
        // 0x1516363C: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_15163648;
    }
    // 0x1516363C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x15163640: b           L_151636F4
    // 0x15163644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151636F4;
    // 0x15163644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15163648:
    // 0x15163648: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516364C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x15163650: lwc1        $f4, 0x6964($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6964);
    // 0x15163654: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15163658: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1516365C: lwc1        $f6, 0x699C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X699C);
    // 0x15163660: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x15163664: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x15163668: jal         0x150ADA68
    // 0x1516366C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x1516366C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x15163670: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15163674: lwc1        $f8, 0x6B00($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6B00);
    // 0x15163678: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x1516367C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15163680: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15163684: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x15163688: lwc1        $f16, 0x69D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X69D4);
    // 0x1516368C: lbu         $t7, 0x53($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X53);
    // 0x15163690: lh          $t9, 0x4E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4E);
    // 0x15163694: lbu         $t0, 0x4B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4B);
    // 0x15163698: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x1516369C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151636A0: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x151636A4: sb          $t8, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r24;
    // 0x151636A8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x151636AC: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x151636B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x151636B4: lbu         $a3, 0x5B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5B);
    // 0x151636B8: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x151636BC: sb          $t7, 0x34($sp)
    MEM_B(0X34, ctx->r29) = ctx->r15;
    // 0x151636C0: sh          $t9, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r25;
    // 0x151636C4: sb          $t0, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r8;
    // 0x151636C8: jal         0x1516037C
    // 0x151636CC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_1516037C(rdram, ctx);
        goto after_1;
    // 0x151636CC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x151636D0: beq         $v0, $zero, L_151636F0
    if (ctx->r2 == 0) {
        // 0x151636D4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151636F0;
    }
    // 0x151636D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151636D8: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x151636DC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x151636E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x151636E4: jal         0x10022EC0
    // 0x151636E8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151636E8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_2:
    // 0x151636EC: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
L_151636F0:
    // 0x151636F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151636F4:
    // 0x151636F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151636F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x151636FC: jr          $ra
    // 0x15163700: nop

    return;
    return;
    // 0x15163700: nop

;}
RECOMP_FUNC void func_151318E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151318E8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x151318EC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151318F0: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x151318F4: blez        $v0, L_15131910
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151318F8: nop
    
            goto L_15131910;
    }
    // 0x151318F8: nop

L_151318FC:
    // 0x151318FC: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15131900: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x15131904: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15131908: bgtz        $v0, L_151318FC
    if (SIGNED(ctx->r2) > 0) {
        // 0x1513190C: swc1        $f6, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
            goto L_151318FC;
    }
    // 0x1513190C: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
L_15131910:
    // 0x15131910: jr          $ra
    // 0x15131914: nop

    return;
    return;
    // 0x15131914: nop

;}
RECOMP_FUNC void func_151D33B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D33B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151D33BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151D33C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D33C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151D33C8: lh          $t6, 0x20($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X20);
    // 0x151D33CC: blezl       $t6, L_151D33EC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x151D33D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151D33EC;
    }
    goto skip_0;
    // 0x151D33D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_151D33D4:
    // 0x151D33D4: jal         0x1516972C
    // 0x151D33D8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151D33D8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_0:
    // 0x151D33DC: lh          $t7, 0x20($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X20);
    // 0x151D33E0: bgtz        $t7, L_151D33D4
    if (SIGNED(ctx->r15) > 0) {
        // 0x151D33E4: nop
    
            goto L_151D33D4;
    }
    // 0x151D33E4: nop

    // 0x151D33E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151D33EC:
    // 0x151D33EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151D33F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151D33F4: jr          $ra
    // 0x151D33F8: nop

    return;
    return;
    // 0x151D33F8: nop

;}
RECOMP_FUNC void func_1509F6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509F6B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1509F6B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1509F6B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1509F6BC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1509F6C0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x1509F6C4: lhu         $a1, 0x26($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X26);
    // 0x1509F6C8: lbu         $a2, 0x2F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2F);
    // 0x1509F6CC: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x1509F6D0: jal         0x10010F30
    // 0x1509F6D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_0;
    // 0x1509F6D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x1509F6D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1509F6DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1509F6E0: jr          $ra
    // 0x1509F6E4: nop

    return;
    return;
    // 0x1509F6E4: nop

;}
RECOMP_FUNC void func_150E2DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E2DA4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150E2DA8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150E2DAC: jr          $ra
    // 0x150E2DB0: nop

    return;
    return;
    // 0x150E2DB0: nop

;}
RECOMP_FUNC void func_150918EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150918EC: addiu       $sp, $sp, -0x278
    ctx->r29 = ADD32(ctx->r29, -0X278);
    // 0x150918F0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150918F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150918F8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x150918FC: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x15091900: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x15091904: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x15091908: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x1509190C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x15091910: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x15091914: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x15091918: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x1509191C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x15091920: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x15091924: lw          $t6, 0x73B0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X73B0);
    // 0x15091928: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1509192C: lw          $v0, -0x19D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19D8);
    // 0x15091930: sb          $zero, 0x215($sp)
    MEM_B(0X215, ctx->r29) = 0;
    // 0x15091934: sb          $zero, 0x20F($sp)
    MEM_B(0X20F, ctx->r29) = 0;
    // 0x15091938: sw          $t6, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->r14;
    // 0x1509193C: lwc1        $f6, 0x2C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x15091940: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x15091944: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x15091948: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1509194C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15091950: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091954: addiu       $t6, $t6, 0x7390
    ctx->r14 = ADD32(ctx->r14, 0X7390);
    // 0x15091958: lui         $t9, 0xDE00
    ctx->r25 = S32(0XDE00 << 16);
    // 0x1509195C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15091960: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x15091964: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15091968: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1509196C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x15091970: nop

    // 0x15091974: sw          $t8, 0x244($sp)
    MEM_W(0X244, ctx->r29) = ctx->r24;
    // 0x15091978: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x1509197C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x15091980: jal         0x1504332C
    // 0x15091984: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_1504332C(rdram, ctx);
        goto after_0;
    // 0x15091984: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x15091988: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1509198C: lwc1        $f0, -0x1E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1E4);
    // 0x15091990: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15091994: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15091998: addiu       $t7, $zero, 0x400
    ctx->r15 = ADD32(0, 0X400);
    // 0x1509199C: sw          $t7, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->r15;
    // 0x150919A0: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x150919A4: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x150919A8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x150919AC: addiu       $v0, $sp, 0x1CE
    ctx->r2 = ADD32(ctx->r29, 0X1CE);
    // 0x150919B0: bc1t        L_15091B0C
    if (c1cs) {
        // 0x150919B4: addiu       $v1, $zero, 0x21
        ctx->r3 = ADD32(0, 0X21);
            goto L_15091B0C;
    }
    // 0x150919B4: addiu       $v1, $zero, 0x21
    ctx->r3 = ADD32(0, 0X21);
    // 0x150919B8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x150919BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150919C0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x150919C4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150919C8: addiu       $v0, $sp, 0x1CE
    ctx->r2 = ADD32(ctx->r29, 0X1CE);
    // 0x150919CC: addiu       $v1, $zero, 0x21
    ctx->r3 = ADD32(0, 0X21);
    // 0x150919D0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150919D4: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x150919D8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x150919DC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150919E0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150919E4: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x150919E8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x150919EC: sh          $t8, 0x1CC($sp)
    MEM_H(0X1CC, ctx->r29) = ctx->r24;
    // 0x150919F0: sw          $t6, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->r14;
    // 0x150919F4: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x150919F8: mtc1        $s1, $f16
    ctx->f16.u32l = ctx->r17;
    // 0x150919FC: beql        $s1, $v1, L_15091A88
    if (ctx->r17 == ctx->r3) {
        // 0x15091A00: cvt.s.w     $f8, $f16
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
            goto L_15091A88;
    }
    goto skip_0;
    // 0x15091A00: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    skip_0:
L_15091A04:
    // 0x15091A04: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15091A08: addiu       $t7, $s1, 0x1
    ctx->r15 = ADD32(ctx->r17, 0X1);
    // 0x15091A0C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x15091A10: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x15091A14: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15091A18: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15091A1C: trunc.w.s   $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15091A20: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15091A24: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x15091A28: nop

    // 0x15091A2C: sh          $t6, -0x8($v0)
    MEM_H(-0X8, ctx->r2) = ctx->r14;
    // 0x15091A30: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15091A34: addiu       $t6, $s1, 0x2
    ctx->r14 = ADD32(ctx->r17, 0X2);
    // 0x15091A38: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15091A3C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15091A40: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15091A44: sh          $t9, -0x6($v0)
    MEM_H(-0X6, ctx->r2) = ctx->r25;
    // 0x15091A48: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x15091A4C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15091A50: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x15091A54: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15091A58: mtc1        $s1, $f16
    ctx->f16.u32l = ctx->r17;
    // 0x15091A5C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15091A60: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15091A64: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15091A68: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x15091A6C: nop

    // 0x15091A70: sh          $t8, -0x4($v0)
    MEM_H(-0X4, ctx->r2) = ctx->r24;
    // 0x15091A74: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15091A78: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x15091A7C: bne         $s1, $v1, L_15091A04
    if (ctx->r17 != ctx->r3) {
        // 0x15091A80: sh          $t7, -0x2($v0)
        MEM_H(-0X2, ctx->r2) = ctx->r15;
            goto L_15091A04;
    }
    // 0x15091A80: sh          $t7, -0x2($v0)
    MEM_H(-0X2, ctx->r2) = ctx->r15;
    // 0x15091A84: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
L_15091A88:
    // 0x15091A88: addiu       $t7, $s1, 0x1
    ctx->r15 = ADD32(ctx->r17, 0X1);
    // 0x15091A8C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x15091A90: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15091A94: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x15091A98: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15091A9C: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15091AA0: trunc.w.s   $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15091AA4: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15091AA8: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x15091AAC: nop

    // 0x15091AB0: sh          $t6, -0x8($v0)
    MEM_H(-0X8, ctx->r2) = ctx->r14;
    // 0x15091AB4: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15091AB8: addiu       $t6, $s1, 0x2
    ctx->r14 = ADD32(ctx->r17, 0X2);
    // 0x15091ABC: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15091AC0: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15091AC4: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15091AC8: sh          $t9, -0x6($v0)
    MEM_H(-0X6, ctx->r2) = ctx->r25;
    // 0x15091ACC: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x15091AD0: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15091AD4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x15091AD8: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15091ADC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15091AE0: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15091AE4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15091AE8: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x15091AEC: nop

    // 0x15091AF0: sh          $t8, -0x4($v0)
    MEM_H(-0X4, ctx->r2) = ctx->r24;
    // 0x15091AF4: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15091AF8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x15091AFC: nop

    // 0x15091B00: sh          $t7, -0x2($v0)
    MEM_H(-0X2, ctx->r2) = ctx->r15;
    // 0x15091B04: b           L_15091B38
    // 0x15091B08: nop

        goto L_15091B38;
    // 0x15091B08: nop

L_15091B0C:
    // 0x15091B0C: sh          $zero, 0x1CC($sp)
    MEM_H(0X1CC, ctx->r29) = 0;
L_15091B10:
    // 0x15091B10: sh          $s1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r17;
    // 0x15091B14: addiu       $t8, $s1, 0x1
    ctx->r24 = ADD32(ctx->r17, 0X1);
    // 0x15091B18: addiu       $t9, $s1, 0x2
    ctx->r25 = ADD32(ctx->r17, 0X2);
    // 0x15091B1C: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x15091B20: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x15091B24: sh          $t6, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r14;
    // 0x15091B28: sh          $t9, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r25;
    // 0x15091B2C: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x15091B30: bne         $s1, $v1, L_15091B10
    if (ctx->r17 != ctx->r3) {
        // 0x15091B34: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_15091B10;
    }
    // 0x15091B34: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_15091B38:
    // 0x15091B38: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x15091B3C: lhu         $v1, -0x240($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X240);
    // 0x15091B40: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15091B44: andi        $t7, $v1, 0xC02
    ctx->r15 = ctx->r3 & 0XC02;
    // 0x15091B48: beql        $t7, $zero, L_15092064
    if (ctx->r15 == 0) {
        // 0x15091B4C: andi        $t8, $v1, 0x14
        ctx->r24 = ctx->r3 & 0X14;
            goto L_15092064;
    }
    goto skip_1;
    // 0x15091B4C: andi        $t8, $v1, 0x14
    ctx->r24 = ctx->r3 & 0X14;
    skip_1:
    // 0x15091B50: lw          $t8, 0x2FA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2FA0);
    // 0x15091B54: sb          $zero, 0x216($sp)
    MEM_B(0X216, ctx->r29) = 0;
    // 0x15091B58: sb          $zero, 0x217($sp)
    MEM_B(0X217, ctx->r29) = 0;
    // 0x15091B5C: bltz        $t8, L_15092060
    if (SIGNED(ctx->r24) < 0) {
        // 0x15091B60: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_15092060;
    }
    // 0x15091B60: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x15091B64: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x15091B68: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x15091B6C: addiu       $s1, $s1, 0xD14
    ctx->r17 = ADD32(ctx->r17, 0XD14);
    // 0x15091B70: addiu       $t5, $t5, 0x7270
    ctx->r13 = ADD32(ctx->r13, 0X7270);
    // 0x15091B74: lui         $fp, 0xE400
    ctx->r30 = S32(0XE400 << 16);
    // 0x15091B78: lui         $s5, 0xFD18
    ctx->r21 = S32(0XFD18 << 16);
    // 0x15091B7C: lui         $s2, 0x8000
    ctx->r18 = S32(0X8000 << 16);
    // 0x15091B80: lb          $t9, 0x0($t5)
    ctx->r25 = MEM_B(ctx->r13, 0X0);
L_15091B84:
    // 0x15091B84: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x15091B88: beq         $t9, $at, L_15092044
    if (ctx->r25 == ctx->r1) {
        // 0x15091B8C: nop
    
            goto L_15092044;
    }
    // 0x15091B8C: nop

    // 0x15091B90: lh          $t9, 0x1D8($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1D8);
    // 0x15091B94: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15091B98: lw          $t6, -0x19D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19D8);
    // 0x15091B9C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15091BA0: sll         $t7, $s7, 2
    ctx->r15 = S32(ctx->r23 << 2);
    // 0x15091BA4: subu        $t7, $t7, $s7
    ctx->r15 = SUB32(ctx->r15, ctx->r23);
    // 0x15091BA8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15091BAC: sll         $t7, $t7, 7
    ctx->r15 = S32(ctx->r15 << 7);
    // 0x15091BB0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x15091BB4: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x15091BB8: lwc1        $f18, 0x2C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x15091BBC: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x15091BC0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15091BC4: lbu         $t8, 0x216($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X216);
    // 0x15091BC8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15091BCC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15091BD0: mfc1        $s6, $f4
    ctx->r22 = (int32_t)ctx->f4.u32l;
    // 0x15091BD4: mfc1        $s4, $f18
    ctx->r20 = (int32_t)ctx->f18.u32l;
    // 0x15091BD8: beq         $t7, $zero, L_15091F3C
    if (ctx->r15 == 0) {
        // 0x15091BDC: nop
    
            goto L_15091F3C;
    }
    // 0x15091BDC: nop

    // 0x15091BE0: bne         $t8, $zero, L_15091D0C
    if (ctx->r24 != 0) {
        // 0x15091BE4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_15091D0C;
    }
    // 0x15091BE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15091BE8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15091BEC: sb          $t9, 0x216($sp)
    MEM_B(0X216, ctx->r29) = ctx->r25;
    // 0x15091BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15091BF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x15091BF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15091BFC: jal         0x1510D0EC
    // 0x15091C00: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    func_1510D0EC(rdram, ctx);
        goto after_1;
    // 0x15091C00: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    after_1:
    // 0x15091C04: beq         $v0, $s2, L_15091CC0
    if (ctx->r2 == ctx->r18) {
        // 0x15091C08: lw          $t5, 0x68($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X68);
            goto L_15091CC0;
    }
    // 0x15091C08: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x15091C0C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15091C10: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x15091C14: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x15091C18: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15091C20: lui         $t7, 0x709
    ctx->r15 = S32(0X709 << 16);
    // 0x15091C24: ori         $t7, $t7, 0x4250
    ctx->r15 = ctx->r15 | 0X4250;
    // 0x15091C28: lui         $t6, 0xF518
    ctx->r14 = S32(0XF518 << 16);
    // 0x15091C2C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x15091C30: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x15091C34: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091C38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15091C3C: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x15091C40: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x15091C44: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x15091C48: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091C4C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x15091C50: lui         $t6, 0x73F
    ctx->r14 = S32(0X73F << 16);
    // 0x15091C54: ori         $t6, $t6, 0xF000
    ctx->r14 = ctx->r14 | 0XF000;
    // 0x15091C58: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x15091C5C: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x15091C60: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x15091C64: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091C68: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x15091C6C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x15091C70: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x15091C74: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x15091C78: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091C7C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15091C80: lui         $t8, 0xF518
    ctx->r24 = S32(0XF518 << 16);
    // 0x15091C84: lui         $t9, 0x9
    ctx->r25 = S32(0X9 << 16);
    // 0x15091C88: ori         $t9, $t9, 0x4250
    ctx->r25 = ctx->r25 | 0X4250;
    // 0x15091C8C: ori         $t8, $t8, 0x1000
    ctx->r24 = ctx->r24 | 0X1000;
    // 0x15091C90: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15091C94: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x15091C98: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091C9C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15091CA0: lui         $t7, 0x7
    ctx->r15 = S32(0X7 << 16);
    // 0x15091CA4: ori         $t7, $t7, 0xC07C
    ctx->r15 = ctx->r15 | 0XC07C;
    // 0x15091CA8: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x15091CAC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x15091CB0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x15091CB4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091CB8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15091CBC: sb          $t8, 0x217($sp)
    MEM_B(0X217, ctx->r29) = ctx->r24;
L_15091CC0:
    // 0x15091CC0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15091CC4: lui         $t9, 0xEF00
    ctx->r25 = S32(0XEF00 << 16);
    // 0x15091CC8: lui         $t6, 0x50
    ctx->r14 = S32(0X50 << 16);
    // 0x15091CCC: ori         $t6, $t6, 0x4244
    ctx->r14 = ctx->r14 | 0X4244;
    // 0x15091CD0: ori         $t9, $t9, 0x2C3F
    ctx->r25 = ctx->r25 | 0X2C3F;
    // 0x15091CD4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15091CD8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x15091CDC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091CE0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15091CE4: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x15091CE8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x15091CEC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x15091CF0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15091CF8: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x15091CFC: addiu       $t9, $zero, -0x80
    ctx->r25 = ADD32(0, -0X80);
    // 0x15091D00: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x15091D04: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x15091D08: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_15091D0C:
    // 0x15091D0C: lh          $t6, 0x1D6($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1D6);
    // 0x15091D10: sll         $a0, $s7, 16
    ctx->r4 = S32(ctx->r23 << 16);
    // 0x15091D14: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15091D18: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x15091D1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15091D20: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x15091D24: jal         0x150859AC
    // 0x15091D28: addu        $s3, $t6, $s6
    ctx->r19 = ADD32(ctx->r14, ctx->r22);
    func_150859AC(rdram, ctx);
        goto after_2;
    // 0x15091D28: addu        $s3, $t6, $s6
    ctx->r19 = ADD32(ctx->r14, ctx->r22);
    after_2:
    // 0x15091D2C: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x15091D30: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x15091D34: sra         $t6, $v0, 2
    ctx->r14 = S32(SIGNED(ctx->r2) >> 2);
    // 0x15091D38: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x15091D3C: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x15091D40: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x15091D44: lbu         $t2, 0x73C4($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X73C4);
    // 0x15091D48: lbu         $t1, 0x73C8($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X73C8);
    // 0x15091D4C: lbu         $t8, 0x217($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X217);
    // 0x15091D50: sll         $t9, $t2, 5
    ctx->r25 = S32(ctx->r10 << 5);
    // 0x15091D54: sll         $t7, $t1, 5
    ctx->r15 = S32(ctx->r9 << 5);
    // 0x15091D58: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x15091D5C: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x15091D60: beq         $t8, $zero, L_15091F3C
    if (ctx->r24 == 0) {
        // 0x15091D64: or          $t2, $t9, $zero
        ctx->r10 = ctx->r25 | 0;
            goto L_15091F3C;
    }
    // 0x15091D64: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x15091D68: lh          $t9, 0x1D6($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1D6);
    // 0x15091D6C: lw          $a1, 0x218($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X218);
    // 0x15091D70: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x15091D74: addu        $t6, $t9, $s3
    ctx->r14 = ADD32(ctx->r25, ctx->r19);
    // 0x15091D78: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x15091D7C: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x15091D80: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x15091D84: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15091D88: or          $t3, $t6, $t9
    ctx->r11 = ctx->r14 | ctx->r25;
    // 0x15091D8C: blez        $t8, L_15091D9C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x15091D90: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_15091D9C;
    }
    // 0x15091D90: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091D94: b           L_15091DA0
    // 0x15091D98: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_15091DA0;
    // 0x15091D98: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_15091D9C:
    // 0x15091D9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_15091DA0:
    // 0x15091DA0: lh          $t7, 0x1DA($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1DA);
    // 0x15091DA4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15091DA8: sll         $a2, $s4, 2
    ctx->r6 = S32(ctx->r20 << 2);
    // 0x15091DAC: addu        $t8, $t7, $s4
    ctx->r24 = ADD32(ctx->r15, ctx->r20);
    // 0x15091DB0: sll         $t9, $t8, 18
    ctx->r25 = S32(ctx->r24 << 18);
    // 0x15091DB4: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15091DB8: blez        $t6, L_15091DC8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15091DBC: andi        $t9, $a0, 0xFFF
        ctx->r25 = ctx->r4 & 0XFFF;
            goto L_15091DC8;
    }
    // 0x15091DBC: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x15091DC0: b           L_15091DCC
    // 0x15091DC4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
        goto L_15091DCC;
    // 0x15091DC4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_15091DC8:
    // 0x15091DC8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15091DCC:
    // 0x15091DCC: andi        $t7, $v1, 0xFFF
    ctx->r15 = ctx->r3 & 0XFFF;
    // 0x15091DD0: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x15091DD4: or          $t8, $t7, $fp
    ctx->r24 = ctx->r15 | ctx->r30;
    // 0x15091DD8: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x15091DDC: sll         $t9, $a1, 18
    ctx->r25 = S32(ctx->r5 << 18);
    // 0x15091DE0: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15091DE4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x15091DE8: blez        $t8, L_15091DF8
    if (SIGNED(ctx->r24) <= 0) {
        // 0x15091DEC: sw          $t7, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r15;
            goto L_15091DF8;
    }
    // 0x15091DEC: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x15091DF0: b           L_15091DFC
    // 0x15091DF4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_15091DFC;
    // 0x15091DF4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_15091DF8:
    // 0x15091DF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_15091DFC:
    // 0x15091DFC: sll         $a3, $a2, 16
    ctx->r7 = S32(ctx->r6 << 16);
    // 0x15091E00: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x15091E04: blez        $t6, L_15091E14
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15091E08: or          $a3, $t6, $zero
        ctx->r7 = ctx->r14 | 0;
            goto L_15091E14;
    }
    // 0x15091E08: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x15091E0C: b           L_15091E18
    // 0x15091E10: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
        goto L_15091E18;
    // 0x15091E10: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_15091E14:
    // 0x15091E14: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15091E18:
    // 0x15091E18: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x15091E1C: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x15091E20: andi        $t7, $v1, 0xFFF
    ctx->r15 = ctx->r3 & 0XFFF;
    // 0x15091E24: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x15091E28: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x15091E2C: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x15091E30: lui         $t9, 0xE100
    ctx->r25 = S32(0XE100 << 16);
    // 0x15091E34: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x15091E38: bgez        $a1, L_15091EA0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x15091E3C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_15091EA0;
    }
    // 0x15091E3C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091E40: lh          $v1, 0x21A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X21A);
    // 0x15091E44: bgez        $v1, L_15091E74
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15091E48: nop
    
            goto L_15091E74;
    }
    // 0x15091E48: nop

    // 0x15091E4C: multu       $a1, $v1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15091E50: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15091E54: mflo        $v0
    ctx->r2 = lo;
    // 0x15091E58: sra         $t7, $v0, 7
    ctx->r15 = S32(SIGNED(ctx->r2) >> 7);
    // 0x15091E5C: blez        $t7, L_15091E6C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15091E60: nop
    
            goto L_15091E6C;
    }
    // 0x15091E60: nop

    // 0x15091E64: b           L_15091EA4
    // 0x15091E68: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
        goto L_15091EA4;
    // 0x15091E68: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
L_15091E6C:
    // 0x15091E6C: b           L_15091EA4
    // 0x15091E70: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
        goto L_15091EA4;
    // 0x15091E70: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
L_15091E74:
    // 0x15091E74: multu       $a1, $v1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15091E78: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15091E7C: mflo        $v0
    ctx->r2 = lo;
    // 0x15091E80: sra         $t8, $v0, 7
    ctx->r24 = S32(SIGNED(ctx->r2) >> 7);
    // 0x15091E84: bgez        $t8, L_15091E94
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15091E88: nop
    
            goto L_15091E94;
    }
    // 0x15091E88: nop

    // 0x15091E8C: b           L_15091E94
    // 0x15091E90: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_15091E94;
    // 0x15091E90: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_15091E94:
    // 0x15091E94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15091E98: b           L_15091EA4
    // 0x15091E9C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_15091EA4;
    // 0x15091E9C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_15091EA0:
    // 0x15091EA0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15091EA4:
    // 0x15091EA4: bgez        $a2, L_15091F10
    if (SIGNED(ctx->r6) >= 0) {
        // 0x15091EA8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15091F10;
    }
    // 0x15091EA8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15091EAC: lh          $v1, 0x21A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X21A);
    // 0x15091EB0: bgez        $v1, L_15091EE4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15091EB4: nop
    
            goto L_15091EE4;
    }
    // 0x15091EB4: nop

    // 0x15091EB8: multu       $a3, $v1
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15091EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15091EC0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x15091EC4: mflo        $v0
    ctx->r2 = lo;
    // 0x15091EC8: sra         $t6, $v0, 7
    ctx->r14 = S32(SIGNED(ctx->r2) >> 7);
    // 0x15091ECC: blez        $t6, L_15091EDC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15091ED0: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_15091EDC;
    }
    // 0x15091ED0: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x15091ED4: b           L_15091F10
    // 0x15091ED8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_15091F10;
    // 0x15091ED8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_15091EDC:
    // 0x15091EDC: b           L_15091F10
    // 0x15091EE0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_15091F10;
    // 0x15091EE0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_15091EE4:
    // 0x15091EE4: multu       $a3, $v1
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15091EE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15091EEC: mflo        $v0
    ctx->r2 = lo;
    // 0x15091EF0: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x15091EF4: bgez        $t9, L_15091F04
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15091EF8: nop
    
            goto L_15091F04;
    }
    // 0x15091EF8: nop

    // 0x15091EFC: b           L_15091F04
    // 0x15091F00: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_15091F04;
    // 0x15091F00: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_15091F04:
    // 0x15091F04: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x15091F08: b           L_15091F10
    // 0x15091F0C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_15091F10;
    // 0x15091F0C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_15091F10:
    // 0x15091F10: subu        $t7, $t1, $v1
    ctx->r15 = SUB32(ctx->r9, ctx->r3);
    // 0x15091F14: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x15091F18: subu        $t9, $t2, $t0
    ctx->r25 = SUB32(ctx->r10, ctx->r8);
    // 0x15091F1C: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x15091F20: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x15091F24: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x15091F28: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15091F2C: lui         $t9, 0xF100
    ctx->r25 = S32(0XF100 << 16);
    // 0x15091F30: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15091F34: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x15091F38: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_15091F3C:
    // 0x15091F3C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x15091F40: lhu         $v1, -0x240($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X240);
    // 0x15091F44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15091F48: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x15091F4C: andi        $t8, $v1, 0x400
    ctx->r24 = ctx->r3 & 0X400;
    // 0x15091F50: beq         $t8, $zero, L_15091FBC
    if (ctx->r24 == 0) {
        // 0x15091F54: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_15091FBC;
    }
    // 0x15091F54: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15091F58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15091F5C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15091F60: lwc1        $f6, -0x1E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E4);
    // 0x15091F64: lw          $t7, 0x244($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X244);
    // 0x15091F68: sll         $v1, $s7, 1
    ctx->r3 = S32(ctx->r23 << 1);
    // 0x15091F6C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x15091F70: sra         $t6, $t7, 1
    ctx->r14 = S32(SIGNED(ctx->r15) >> 1);
    // 0x15091F74: addu        $v0, $t6, $s6
    ctx->r2 = ADD32(ctx->r14, ctx->r22);
    // 0x15091F78: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x15091F7C: bc1t        L_15091F88
    if (c1cs) {
        // 0x15091F80: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_15091F88;
    }
    // 0x15091F80: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x15091F84: addiu       $s3, $v0, -0x8
    ctx->r19 = ADD32(ctx->r2, -0X8);
L_15091F88:
    // 0x15091F88: lw          $t9, -0x22C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X22C);
    // 0x15091F8C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x15091F90: addiu       $a3, $a3, -0x2318
    ctx->r7 = ADD32(ctx->r7, -0X2318);
    // 0x15091F94: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x15091F98: lh          $t7, 0x46($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X46);
    // 0x15091F9C: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x15091FA0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15091FA4: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x15091FA8: jal         0x15042D94
    // 0x15091FAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_15042D94(rdram, ctx);
        goto after_3;
    // 0x15091FAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_3:
    // 0x15091FB0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x15091FB4: lhu         $v1, -0x240($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X240);
    // 0x15091FB8: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
L_15091FBC:
    // 0x15091FBC: andi        $t6, $v1, 0x800
    ctx->r14 = ctx->r3 & 0X800;
    // 0x15091FC0: beq         $t6, $zero, L_15092044
    if (ctx->r14 == 0) {
        // 0x15091FC4: lw          $t9, 0x244($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X244);
            goto L_15092044;
    }
    // 0x15091FC4: lw          $t9, 0x244($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X244);
    // 0x15091FC8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15091FCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15091FD0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15091FD4: lwc1        $f10, -0x1E4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1E4);
    // 0x15091FD8: sra         $t8, $t9, 1
    ctx->r24 = S32(SIGNED(ctx->r25) >> 1);
    // 0x15091FDC: addu        $v0, $t8, $s6
    ctx->r2 = ADD32(ctx->r24, ctx->r22);
    // 0x15091FE0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x15091FE4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15091FE8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x15091FEC: addiu       $t7, $t7, 0xAC0
    ctx->r15 = ADD32(ctx->r15, 0XAC0);
    // 0x15091FF0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x15091FF4: bc1t        L_15092000
    if (c1cs) {
        // 0x15091FF8: addu        $v1, $s7, $t7
        ctx->r3 = ADD32(ctx->r23, ctx->r15);
            goto L_15092000;
    }
    // 0x15091FF8: addu        $v1, $s7, $t7
    ctx->r3 = ADD32(ctx->r23, ctx->r15);
    // 0x15091FFC: addiu       $s3, $v0, 0x10
    ctx->r19 = ADD32(ctx->r2, 0X10);
L_15092000:
    // 0x15092000: lb          $t9, 0x0($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X0);
    // 0x15092004: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15092008: lw          $t6, 0xBD8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XBD8);
    // 0x1509200C: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x15092010: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x15092014: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x15092018: lw          $t9, 0x20($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X20);
    // 0x1509201C: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x15092020: addiu       $a3, $a3, -0x2314
    ctx->r7 = ADD32(ctx->r7, -0X2314);
    // 0x15092024: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15092028: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x1509202C: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x15092030: jal         0x15042D94
    // 0x15092034: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15042D94(rdram, ctx);
        goto after_4;
    // 0x15092034: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_4:
    // 0x15092038: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1509203C: lhu         $v1, -0x240($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X240);
    // 0x15092040: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
L_15092044:
    // 0x15092044: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x15092048: lw          $t6, 0x2FA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA0);
    // 0x1509204C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x15092050: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x15092054: slt         $at, $t6, $s7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x15092058: beql        $at, $zero, L_15091B84
    if (ctx->r1 == 0) {
        // 0x1509205C: lb          $t9, 0x0($t5)
        ctx->r25 = MEM_B(ctx->r13, 0X0);
            goto L_15091B84;
    }
    goto skip_2;
    // 0x1509205C: lb          $t9, 0x0($t5)
    ctx->r25 = MEM_B(ctx->r13, 0X0);
    skip_2:
L_15092060:
    // 0x15092060: andi        $t8, $v1, 0x14
    ctx->r24 = ctx->r3 & 0X14;
L_15092064:
    // 0x15092064: beq         $t8, $zero, L_15092620
    if (ctx->r24 == 0) {
        // 0x15092068: lui         $fp, 0xE400
        ctx->r30 = S32(0XE400 << 16);
            goto L_15092620;
    }
    // 0x15092068: lui         $fp, 0xE400
    ctx->r30 = S32(0XE400 << 16);
    // 0x1509206C: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x15092070: lw          $t7, 0x2FA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA0);
    // 0x15092074: sb          $zero, 0x216($sp)
    MEM_B(0X216, ctx->r29) = 0;
    // 0x15092078: sb          $zero, 0x217($sp)
    MEM_B(0X217, ctx->r29) = 0;
    // 0x1509207C: bltz        $t7, L_15092620
    if (SIGNED(ctx->r15) < 0) {
        // 0x15092080: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_15092620;
    }
    // 0x15092080: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x15092084: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x15092088: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x1509208C: addiu       $t4, $t4, 0x73BC
    ctx->r12 = ADD32(ctx->r12, 0X73BC);
    // 0x15092090: addiu       $t5, $t5, 0x7270
    ctx->r13 = ADD32(ctx->r13, 0X7270);
    // 0x15092094: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
L_15092098:
    // 0x15092098: lb          $t9, 0x0($t5)
    ctx->r25 = MEM_B(ctx->r13, 0X0);
    // 0x1509209C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x150920A0: lh          $t6, 0x1D6($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1D6);
    // 0x150920A4: beq         $t9, $at, L_15092600
    if (ctx->r25 == ctx->r1) {
        // 0x150920A8: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_15092600;
    }
    // 0x150920A8: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150920AC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x150920B0: lw          $t8, -0x19D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X19D8);
    // 0x150920B4: sll         $t7, $s7, 2
    ctx->r15 = S32(ctx->r23 << 2);
    // 0x150920B8: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150920BC: subu        $t7, $t7, $s7
    ctx->r15 = SUB32(ctx->r15, ctx->r23);
    // 0x150920C0: sll         $t7, $t7, 7
    ctx->r15 = S32(ctx->r15 << 7);
    // 0x150920C4: addu        $v0, $t8, $t7
    ctx->r2 = ADD32(ctx->r24, ctx->r15);
    // 0x150920C8: lwc1        $f18, 0x2C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x150920CC: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x150920D0: sll         $t9, $s7, 2
    ctx->r25 = S32(ctx->r23 << 2);
    // 0x150920D4: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x150920D8: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x150920DC: subu        $t9, $t9, $s7
    ctx->r25 = SUB32(ctx->r25, ctx->r23);
    // 0x150920E0: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x150920E4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150920E8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150920EC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150920F0: addu        $t9, $t9, $s7
    ctx->r25 = ADD32(ctx->r25, ctx->r23);
    // 0x150920F4: lhu         $v1, -0x240($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X240);
    // 0x150920F8: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x150920FC: mfc1        $s6, $f6
    ctx->r22 = (int32_t)ctx->f6.u32l;
    // 0x15092100: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15092104: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15092108: subu        $t9, $t9, $s7
    ctx->r25 = SUB32(ctx->r25, ctx->r23);
    // 0x1509210C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15092110: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15092114: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x15092118: subu        $t9, $t9, $s7
    ctx->r25 = SUB32(ctx->r25, ctx->r23);
    // 0x1509211C: andi        $t7, $v1, 0x4
    ctx->r15 = ctx->r3 & 0X4;
    // 0x15092120: mfc1        $s4, $f6
    ctx->r20 = (int32_t)ctx->f6.u32l;
    // 0x15092124: beq         $t7, $zero, L_1509242C
    if (ctx->r15 == 0) {
        // 0x15092128: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_1509242C;
    }
    // 0x15092128: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1509212C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15092130: addiu       $t6, $t6, -0x3D30
    ctx->r14 = ADD32(ctx->r14, -0X3D30);
    // 0x15092134: addu        $ra, $t9, $t6
    ctx->r31 = ADD32(ctx->r25, ctx->r14);
    // 0x15092138: lw          $a1, 0x31C($ra)
    ctx->r5 = MEM_W(ctx->r31, 0X31C);
    // 0x1509213C: lw          $t7, 0x0($ra)
    ctx->r15 = MEM_W(ctx->r31, 0X0);
    // 0x15092140: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x15092144: lbu         $v0, 0x75($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X75);
    // 0x15092148: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1509214C: andi        $t8, $v0, 0x7F
    ctx->r24 = ctx->r2 & 0X7F;
    // 0x15092150: bne         $t7, $at, L_1509215C
    if (ctx->r15 != ctx->r1) {
        // 0x15092154: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_1509215C;
    }
    // 0x15092154: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x15092158: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509215C:
    // 0x1509215C: addiu       $t9, $v0, -0x9
    ctx->r25 = ADD32(ctx->r2, -0X9);
    // 0x15092160: sltiu       $at, $t9, 0x39
    ctx->r1 = ctx->r25 < 0X39 ? 1 : 0;
    // 0x15092164: beq         $at, $zero, L_15092218
    if (ctx->r1 == 0) {
        // 0x15092168: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_15092218;
    }
    // 0x15092168: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1509216C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15092170: addu        $at, $at, $t9
    gpr jr_addend_15092178 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x15092174: lw          $t9, -0x22B4($at)
    ctx->r25 = ADD32(ctx->r1, -0X22B4);
    // 0x15092178: jr          $t9
    // 0x1509217C: nop

    switch (jr_addend_15092178 >> 2) {
        case 0: goto L_15092180; break;
        case 1: goto L_15092218; break;
        case 2: goto L_15092218; break;
        case 3: goto L_15092218; break;
        case 4: goto L_15092218; break;
        case 5: goto L_15092218; break;
        case 6: goto L_15092218; break;
        case 7: goto L_15092218; break;
        case 8: goto L_15092218; break;
        case 9: goto L_15092218; break;
        case 10: goto L_15092218; break;
        case 11: goto L_15092190; break;
        case 12: goto L_150921A8; break;
        case 13: goto L_15092188; break;
        case 14: goto L_15092218; break;
        case 15: goto L_150921A0; break;
        case 16: goto L_15092218; break;
        case 17: goto L_15092218; break;
        case 18: goto L_15092218; break;
        case 19: goto L_15092218; break;
        case 20: goto L_15092218; break;
        case 21: goto L_15092218; break;
        case 22: goto L_15092218; break;
        case 23: goto L_15092198; break;
        case 24: goto L_150921C0; break;
        case 25: goto L_150921B0; break;
        case 26: goto L_150921B8; break;
        case 27: goto L_150921C8; break;
        case 28: goto L_150921D0; break;
        case 29: goto L_150921D8; break;
        case 30: goto L_15092218; break;
        case 31: goto L_15092218; break;
        case 32: goto L_15092218; break;
        case 33: goto L_15092218; break;
        case 34: goto L_15092218; break;
        case 35: goto L_15092218; break;
        case 36: goto L_15092218; break;
        case 37: goto L_15092218; break;
        case 38: goto L_15092218; break;
        case 39: goto L_15092218; break;
        case 40: goto L_15092218; break;
        case 41: goto L_150921FC; break;
        case 42: goto L_150921FC; break;
        case 43: goto L_15092218; break;
        case 44: goto L_15092218; break;
        case 45: goto L_15092218; break;
        case 46: goto L_15092218; break;
        case 47: goto L_150921F4; break;
        case 48: goto L_15092218; break;
        case 49: goto L_150921D8; break;
        case 50: goto L_15092218; break;
        case 51: goto L_15092218; break;
        case 52: goto L_15092218; break;
        case 53: goto L_15092218; break;
        case 54: goto L_15092190; break;
        case 55: goto L_15092208; break;
        case 56: goto L_150921A0; break;
        default: switch_error(__func__, 0x15092178, 0x8009DD4C);
    }
    // 0x1509217C: nop

L_15092180:
    // 0x15092180: b           L_1509223C
    // 0x15092184: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_1509223C;
    // 0x15092184: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_15092188:
    // 0x15092188: b           L_1509223C
    // 0x1509218C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_1509223C;
    // 0x1509218C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_15092190:
    // 0x15092190: b           L_1509223C
    // 0x15092194: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
        goto L_1509223C;
    // 0x15092194: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
L_15092198:
    // 0x15092198: b           L_1509223C
    // 0x1509219C: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
        goto L_1509223C;
    // 0x1509219C: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
L_150921A0:
    // 0x150921A0: b           L_1509223C
    // 0x150921A4: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
        goto L_1509223C;
    // 0x150921A4: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
L_150921A8:
    // 0x150921A8: b           L_1509223C
    // 0x150921AC: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
        goto L_1509223C;
    // 0x150921AC: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
L_150921B0:
    // 0x150921B0: b           L_1509223C
    // 0x150921B4: addiu       $s2, $zero, 0x9
    ctx->r18 = ADD32(0, 0X9);
        goto L_1509223C;
    // 0x150921B4: addiu       $s2, $zero, 0x9
    ctx->r18 = ADD32(0, 0X9);
L_150921B8:
    // 0x150921B8: b           L_1509223C
    // 0x150921BC: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
        goto L_1509223C;
    // 0x150921BC: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_150921C0:
    // 0x150921C0: b           L_1509223C
    // 0x150921C4: addiu       $s2, $zero, 0xC
    ctx->r18 = ADD32(0, 0XC);
        goto L_1509223C;
    // 0x150921C4: addiu       $s2, $zero, 0xC
    ctx->r18 = ADD32(0, 0XC);
L_150921C8:
    // 0x150921C8: b           L_1509223C
    // 0x150921CC: addiu       $s2, $zero, 0xD
    ctx->r18 = ADD32(0, 0XD);
        goto L_1509223C;
    // 0x150921CC: addiu       $s2, $zero, 0xD
    ctx->r18 = ADD32(0, 0XD);
L_150921D0:
    // 0x150921D0: b           L_1509223C
    // 0x150921D4: addiu       $s2, $zero, 0xE
    ctx->r18 = ADD32(0, 0XE);
        goto L_1509223C;
    // 0x150921D4: addiu       $s2, $zero, 0xE
    ctx->r18 = ADD32(0, 0XE);
L_150921D8:
    // 0x150921D8: lbu         $t6, 0x1CA($ra)
    ctx->r14 = MEM_BU(ctx->r31, 0X1CA);
    // 0x150921DC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x150921E0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150921E4: beql        $t6, $zero, L_15092240
    if (ctx->r14 == 0) {
        // 0x150921E8: lbu         $t8, 0x13C($ra)
        ctx->r24 = MEM_BU(ctx->r31, 0X13C);
            goto L_15092240;
    }
    goto skip_3;
    // 0x150921E8: lbu         $t8, 0x13C($ra)
    ctx->r24 = MEM_BU(ctx->r31, 0X13C);
    skip_3:
    // 0x150921EC: b           L_1509223C
    // 0x150921F0: sb          $t8, 0x20F($sp)
    MEM_B(0X20F, ctx->r29) = ctx->r24;
        goto L_1509223C;
    // 0x150921F0: sb          $t8, 0x20F($sp)
    MEM_B(0X20F, ctx->r29) = ctx->r24;
L_150921F4:
    // 0x150921F4: b           L_1509223C
    // 0x150921F8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
        goto L_1509223C;
    // 0x150921F8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_150921FC:
    // 0x150921FC: lb          $t0, 0x1AE($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X1AE);
    // 0x15092200: b           L_1509223C
    // 0x15092204: addiu       $s2, $zero, 0xB
    ctx->r18 = ADD32(0, 0XB);
        goto L_1509223C;
    // 0x15092204: addiu       $s2, $zero, 0xB
    ctx->r18 = ADD32(0, 0XB);
L_15092208:
    // 0x15092208: addiu       $t7, $zero, -0x3
    ctx->r15 = ADD32(0, -0X3);
    // 0x1509220C: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x15092210: b           L_1509223C
    // 0x15092214: sw          $t7, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->r15;
        goto L_1509223C;
    // 0x15092214: sw          $t7, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->r15;
L_15092218:
    // 0x15092218: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1509221C: lw          $t9, -0x1610($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1610);
    // 0x15092220: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x15092224: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x15092228: bne         $t9, $at, L_1509223C
    if (ctx->r25 != ctx->r1) {
        // 0x1509222C: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_1509223C;
    }
    // 0x1509222C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x15092230: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x15092234: b           L_1509223C
    // 0x15092238: sw          $t6, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->r14;
        goto L_1509223C;
    // 0x15092238: sw          $t6, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->r14;
L_1509223C:
    // 0x1509223C: lbu         $t8, 0x13C($ra)
    ctx->r24 = MEM_BU(ctx->r31, 0X13C);
L_15092240:
    // 0x15092240: lbu         $t7, 0x216($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X216);
    // 0x15092244: beq         $t8, $zero, L_15092250
    if (ctx->r24 == 0) {
        // 0x15092248: nop
    
            goto L_15092250;
    }
    // 0x15092248: nop

    // 0x1509224C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_15092250:
    // 0x15092250: bltzl       $s2, L_15092430
    if (SIGNED(ctx->r18) < 0) {
        // 0x15092254: andi        $t8, $v1, 0x10
        ctx->r24 = ctx->r3 & 0X10;
            goto L_15092430;
    }
    goto skip_4;
    // 0x15092254: andi        $t8, $v1, 0x10
    ctx->r24 = ctx->r3 & 0X10;
    skip_4:
    // 0x15092258: bne         $t7, $zero, L_1509229C
    if (ctx->r15 != 0) {
        // 0x1509225C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_1509229C;
    }
    // 0x1509225C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15092260: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15092264: sb          $t9, 0x216($sp)
    MEM_B(0X216, ctx->r29) = ctx->r25;
    // 0x15092268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1509226C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15092270: addiu       $a2, $sp, 0x217
    ctx->r6 = ADD32(ctx->r29, 0X217);
    // 0x15092274: sw          $t0, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r8;
    // 0x15092278: sw          $t3, 0x23C($sp)
    MEM_W(0X23C, ctx->r29) = ctx->r11;
    // 0x1509227C: jal         0x15091534
    // 0x15092280: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    func_15091534(rdram, ctx);
        goto after_5;
    // 0x15092280: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    after_5:
    // 0x15092284: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x15092288: addiu       $t4, $t4, 0x73BC
    ctx->r12 = ADD32(ctx->r12, 0X73BC);
    // 0x1509228C: lw          $t0, 0x254($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X254);
    // 0x15092290: lw          $t3, 0x23C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X23C);
    // 0x15092294: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x15092298: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1509229C:
    // 0x1509229C: div         $zero, $s2, $s5
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r21)));
    // 0x150922A0: lh          $t6, 0x1FE($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1FE);
    // 0x150922A4: mflo        $v0
    ctx->r2 = lo;
    // 0x150922A8: addu        $t9, $t4, $v0
    ctx->r25 = ADD32(ctx->r12, ctx->r2);
    // 0x150922AC: subu        $s3, $t3, $t6
    ctx->r19 = SUB32(ctx->r11, ctx->r14);
    // 0x150922B0: lbu         $t6, 0x0($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X0);
    // 0x150922B4: sll         $t8, $s3, 2
    ctx->r24 = S32(ctx->r19 << 2);
    // 0x150922B8: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x150922BC: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x150922C0: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x150922C4: lbu         $t1, 0x73B4($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X73B4);
    // 0x150922C8: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x150922CC: bne         $s5, $zero, L_150922D8
    if (ctx->r21 != 0) {
        // 0x150922D0: nop
    
            goto L_150922D8;
    }
    // 0x150922D0: nop

    // 0x150922D4: break       7
    do_break(352920276);
L_150922D8:
    // 0x150922D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150922DC: bne         $s5, $at, L_150922F0
    if (ctx->r21 != ctx->r1) {
        // 0x150922E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150922F0;
    }
    // 0x150922E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150922E4: bne         $s2, $at, L_150922F0
    if (ctx->r18 != ctx->r1) {
        // 0x150922E8: nop
    
            goto L_150922F0;
    }
    // 0x150922E8: nop

    // 0x150922EC: break       6
    do_break(352920300);
L_150922F0:
    // 0x150922F0: addu        $a3, $sp, $t8
    ctx->r7 = ADD32(ctx->r29, ctx->r24);
    // 0x150922F4: lh          $a3, 0x1CC($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X1CC);
    // 0x150922F8: sll         $t7, $t1, 5
    ctx->r15 = S32(ctx->r9 << 5);
    // 0x150922FC: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x15092300: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x15092304: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x15092308: bne         $s2, $at, L_15092324
    if (ctx->r18 != ctx->r1) {
        // 0x1509230C: or          $a3, $t7, $zero
        ctx->r7 = ctx->r15 | 0;
            goto L_15092324;
    }
    // 0x1509230C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x15092310: lw          $t9, 0x22C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X22C);
    // 0x15092314: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x15092318: addiu       $a3, $t7, -0x8
    ctx->r7 = ADD32(ctx->r15, -0X8);
    // 0x1509231C: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x15092320: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
L_15092324:
    // 0x15092324: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15092328: bnel        $s2, $at, L_15092338
    if (ctx->r18 != ctx->r1) {
        // 0x1509232C: lbu         $t8, 0x217($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X217);
            goto L_15092338;
    }
    goto skip_5;
    // 0x1509232C: lbu         $t8, 0x217($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X217);
    skip_5:
    // 0x15092330: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
L_15092334:
    // 0x15092334: lbu         $t8, 0x217($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X217);
L_15092338:
    // 0x15092338: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1509233C: lh          $t7, 0x1F8($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1F8);
    // 0x15092340: beq         $t8, $zero, L_1509241C
    if (ctx->r24 == 0) {
        // 0x15092344: addiu       $t0, $t0, -0x1
        ctx->r8 = ADD32(ctx->r8, -0X1);
            goto L_1509241C;
    }
    // 0x15092344: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x15092348: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x1509234C: addu        $t6, $t9, $s3
    ctx->r14 = ADD32(ctx->r25, ctx->r19);
    // 0x15092350: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x15092354: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x15092358: sll         $a2, $s4, 2
    ctx->r6 = S32(ctx->r20 << 2);
    // 0x1509235C: addu        $t6, $a2, $a3
    ctx->r14 = ADD32(ctx->r6, ctx->r7);
    // 0x15092360: addu        $t8, $t6, $s1
    ctx->r24 = ADD32(ctx->r14, ctx->r17);
    // 0x15092364: or          $t9, $t7, $fp
    ctx->r25 = ctx->r15 | ctx->r30;
    // 0x15092368: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x1509236C: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x15092370: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x15092374: addu        $t7, $a2, $s1
    ctx->r15 = ADD32(ctx->r6, ctx->r17);
    // 0x15092378: andi        $t8, $s3, 0xFFF
    ctx->r24 = ctx->r19 & 0XFFF;
    // 0x1509237C: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x15092380: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x15092384: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x15092388: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1509238C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092390: div         $zero, $s2, $s5
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r21)));
    // 0x15092394: mfhi        $t9
    ctx->r25 = hi;
    // 0x15092398: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x1509239C: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x150923A0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x150923A4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x150923A8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150923AC: lui         $t7, 0xE100
    ctx->r15 = S32(0XE100 << 16);
    // 0x150923B0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x150923B4: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x150923B8: andi        $t7, $t8, 0xFFFF
    ctx->r15 = ctx->r24 & 0XFFFF;
    // 0x150923BC: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x150923C0: andi        $t6, $t1, 0xFFFF
    ctx->r14 = ctx->r9 & 0XFFFF;
    // 0x150923C4: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x150923C8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x150923CC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150923D0: bne         $s5, $zero, L_150923DC
    if (ctx->r21 != 0) {
        // 0x150923D4: nop
    
            goto L_150923DC;
    }
    // 0x150923D4: nop

    // 0x150923D8: break       7
    do_break(352920536);
L_150923DC:
    // 0x150923DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150923E0: bne         $s5, $at, L_150923F4
    if (ctx->r21 != ctx->r1) {
        // 0x150923E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150923F4;
    }
    // 0x150923E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150923E8: bne         $s2, $at, L_150923F4
    if (ctx->r18 != ctx->r1) {
        // 0x150923EC: nop
    
            goto L_150923F4;
    }
    // 0x150923EC: nop

    // 0x150923F0: break       6
    do_break(352920560);
L_150923F4:
    // 0x150923F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150923F8: lui         $t7, 0xF100
    ctx->r15 = S32(0XF100 << 16);
    // 0x150923FC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x15092400: lw          $a1, 0x218($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X218);
    // 0x15092404: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092408: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x1509240C: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x15092410: or          $t3, $t6, $t9
    ctx->r11 = ctx->r14 | ctx->r25;
    // 0x15092414: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x15092418: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_1509241C:
    // 0x1509241C: bgtz        $t0, L_15092334
    if (SIGNED(ctx->r8) > 0) {
        // 0x15092420: addiu       $s3, $s3, -0x48
        ctx->r19 = ADD32(ctx->r19, -0X48);
            goto L_15092334;
    }
    // 0x15092420: addiu       $s3, $s3, -0x48
    ctx->r19 = ADD32(ctx->r19, -0X48);
    // 0x15092424: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x15092428: lhu         $v1, -0x240($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X240);
L_1509242C:
    // 0x1509242C: andi        $t8, $v1, 0x10
    ctx->r24 = ctx->r3 & 0X10;
L_15092430:
    // 0x15092430: beq         $t8, $zero, L_15092600
    if (ctx->r24 == 0) {
        // 0x15092434: lbu         $t7, 0x216($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X216);
            goto L_15092600;
    }
    // 0x15092434: lbu         $t7, 0x216($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X216);
    // 0x15092438: bne         $t7, $zero, L_15092458
    if (ctx->r15 != 0) {
        // 0x1509243C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15092458;
    }
    // 0x1509243C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15092440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15092444: addiu       $a2, $sp, 0x217
    ctx->r6 = ADD32(ctx->r29, 0X217);
    // 0x15092448: jal         0x15091534
    // 0x1509244C: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    func_15091534(rdram, ctx);
        goto after_6;
    // 0x1509244C: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    after_6:
    // 0x15092450: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x15092454: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_15092458:
    // 0x15092458: sll         $a0, $s7, 16
    ctx->r4 = S32(ctx->r23 << 16);
    // 0x1509245C: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15092460: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x15092464: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x15092468: jal         0x150859AC
    // 0x1509246C: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    func_150859AC(rdram, ctx);
        goto after_7;
    // 0x1509246C: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    after_7:
    // 0x15092470: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x15092474: sra         $t8, $t0, 1
    ctx->r24 = S32(SIGNED(ctx->r8) >> 1);
    // 0x15092478: lh          $t6, 0x1F8($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1F8);
    // 0x1509247C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x15092480: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x15092484: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x15092488: addiu       $t4, $t4, 0x73BC
    ctx->r12 = ADD32(ctx->r12, 0X73BC);
    // 0x1509248C: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x15092490: beq         $t0, $zero, L_1509253C
    if (ctx->r8 == 0) {
        // 0x15092494: addu        $s3, $t6, $s6
        ctx->r19 = ADD32(ctx->r14, ctx->r22);
            goto L_1509253C;
    }
    // 0x15092494: addu        $s3, $t6, $s6
    ctx->r19 = ADD32(ctx->r14, ctx->r22);
    // 0x15092498: lbu         $t9, 0x217($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X217);
    // 0x1509249C: lh          $t6, 0x1D4($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1D4);
    // 0x150924A0: beq         $t9, $zero, L_1509253C
    if (ctx->r25 == 0) {
        // 0x150924A4: sll         $t8, $t6, 2
        ctx->r24 = S32(ctx->r14 << 2);
            goto L_1509253C;
    }
    // 0x150924A4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x150924A8: sll         $a2, $s4, 2
    ctx->r6 = S32(ctx->r20 << 2);
    // 0x150924AC: addu        $t7, $t8, $a2
    ctx->r15 = ADD32(ctx->r24, ctx->r6);
    // 0x150924B0: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x150924B4: sll         $t8, $s3, 2
    ctx->r24 = S32(ctx->r19 << 2);
    // 0x150924B8: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x150924BC: or          $t6, $t9, $fp
    ctx->r14 = ctx->r25 | ctx->r30;
    // 0x150924C0: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x150924C4: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x150924C8: sll         $t7, $t0, 1
    ctx->r15 = S32(ctx->r8 << 1);
    // 0x150924CC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150924D0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x150924D4: addu        $t6, $sp, $t7
    ctx->r14 = ADD32(ctx->r29, ctx->r15);
    // 0x150924D8: lh          $t6, 0x1CC($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X1CC);
    // 0x150924DC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150924E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150924E4: subu        $t9, $s3, $t6
    ctx->r25 = SUB32(ctx->r19, ctx->r14);
    // 0x150924E8: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x150924EC: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x150924F0: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x150924F4: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x150924F8: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x150924FC: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x15092500: lui         $t6, 0x620
    ctx->r14 = S32(0X620 << 16);
    // 0x15092504: ori         $t6, $t6, 0xA0
    ctx->r14 = ctx->r14 | 0XA0;
    // 0x15092508: lui         $t7, 0xE100
    ctx->r15 = S32(0XE100 << 16);
    // 0x1509250C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x15092510: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x15092514: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092518: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x1509251C: lui         $t9, 0xF100
    ctx->r25 = S32(0XF100 << 16);
    // 0x15092520: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x15092524: lw          $a1, 0x218($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X218);
    // 0x15092528: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1509252C: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x15092530: sll         $t7, $t8, 16
    ctx->r15 = S32(ctx->r24 << 16);
    // 0x15092534: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x15092538: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
L_1509253C:
    // 0x1509253C: sra         $t0, $v0, 1
    ctx->r8 = S32(SIGNED(ctx->r2) >> 1);
    // 0x15092540: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x15092544: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x15092548: beq         $t9, $zero, L_15092600
    if (ctx->r25 == 0) {
        // 0x1509254C: or          $t0, $t9, $zero
        ctx->r8 = ctx->r25 | 0;
            goto L_15092600;
    }
    // 0x1509254C: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x15092550: lbu         $t8, 0x217($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X217);
    // 0x15092554: lh          $t7, 0x1DE($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1DE);
    // 0x15092558: beq         $t8, $zero, L_15092600
    if (ctx->r24 == 0) {
        // 0x1509255C: sll         $t6, $t7, 2
        ctx->r14 = S32(ctx->r15 << 2);
            goto L_15092600;
    }
    // 0x1509255C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x15092560: sll         $a2, $s4, 2
    ctx->r6 = S32(ctx->r20 << 2);
    // 0x15092564: addu        $t9, $t6, $a2
    ctx->r25 = ADD32(ctx->r14, ctx->r6);
    // 0x15092568: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x1509256C: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x15092570: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x15092574: or          $t7, $t8, $fp
    ctx->r15 = ctx->r24 | ctx->r30;
    // 0x15092578: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x1509257C: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x15092580: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15092584: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x15092588: lh          $t9, 0x1D6($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1D6);
    // 0x1509258C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15092594: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x15092598: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x1509259C: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x150925A0: addu        $t7, $sp, $t9
    ctx->r15 = ADD32(ctx->r29, ctx->r25);
    // 0x150925A4: lh          $t7, 0x1CC($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X1CC);
    // 0x150925A8: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x150925AC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150925B0: subu        $t8, $s3, $t7
    ctx->r24 = SUB32(ctx->r19, ctx->r15);
    // 0x150925B4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x150925B8: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x150925BC: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x150925C0: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x150925C4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x150925C8: lui         $t6, 0x620
    ctx->r14 = S32(0X620 << 16);
    // 0x150925CC: ori         $t6, $t6, 0xA0
    ctx->r14 = ctx->r14 | 0XA0;
    // 0x150925D0: lui         $t7, 0xE100
    ctx->r15 = S32(0XE100 << 16);
    // 0x150925D4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x150925D8: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x150925DC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x150925E0: lui         $t8, 0xF100
    ctx->r24 = S32(0XF100 << 16);
    // 0x150925E4: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x150925E8: lw          $a1, 0x218($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X218);
    // 0x150925EC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150925F0: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x150925F4: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x150925F8: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x150925FC: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
L_15092600:
    // 0x15092600: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15092604: lw          $t8, 0x2FA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2FA0);
    // 0x15092608: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x1509260C: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x15092610: slt         $at, $t8, $s7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x15092614: beq         $at, $zero, L_15092098
    if (ctx->r1 == 0) {
        // 0x15092618: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_15092098;
    }
    // 0x15092618: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1509261C: lhu         $v1, -0x240($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X240);
L_15092620:
    // 0x15092620: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x15092624: andi        $t9, $v1, 0x4
    ctx->r25 = ctx->r3 & 0X4;
    // 0x15092628: addiu       $t4, $t4, 0x73BC
    ctx->r12 = ADD32(ctx->r12, 0X73BC);
    // 0x1509262C: beq         $t9, $zero, L_15092998
    if (ctx->r25 == 0) {
        // 0x15092630: addiu       $s5, $zero, 0x3
        ctx->r21 = ADD32(0, 0X3);
            goto L_15092998;
    }
    // 0x15092630: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x15092634: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x15092638: lw          $a2, 0x2FA0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2FA0);
    // 0x1509263C: sb          $zero, 0x216($sp)
    MEM_B(0X216, ctx->r29) = 0;
    // 0x15092640: sb          $zero, 0x217($sp)
    MEM_B(0X217, ctx->r29) = 0;
    // 0x15092644: bltz        $a2, L_15092998
    if (SIGNED(ctx->r6) < 0) {
        // 0x15092648: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_15092998;
    }
    // 0x15092648: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x1509264C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15092650: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x15092654: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x15092658: addiu       $t5, $t5, 0x7270
    ctx->r13 = ADD32(ctx->r13, 0X7270);
    // 0x1509265C: lw          $s6, 0x21C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X21C);
L_15092660:
    // 0x15092660: lb          $t7, 0x0($t5)
    ctx->r15 = MEM_B(ctx->r13, 0X0);
    // 0x15092664: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x15092668: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1509266C: beq         $t7, $at, L_15092984
    if (ctx->r15 == ctx->r1) {
        // 0x15092670: sll         $t8, $s7, 2
        ctx->r24 = S32(ctx->r23 << 2);
            goto L_15092984;
    }
    // 0x15092670: sll         $t8, $s7, 2
    ctx->r24 = S32(ctx->r23 << 2);
    // 0x15092674: lw          $t6, -0x19D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19D8);
    // 0x15092678: subu        $t8, $t8, $s7
    ctx->r24 = SUB32(ctx->r24, ctx->r23);
    // 0x1509267C: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x15092680: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x15092684: sll         $t6, $s7, 2
    ctx->r14 = S32(ctx->r23 << 2);
    // 0x15092688: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1509268C: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x15092690: subu        $t6, $t6, $s7
    ctx->r14 = SUB32(ctx->r14, ctx->r23);
    // 0x15092694: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15092698: addu        $t6, $t6, $s7
    ctx->r14 = ADD32(ctx->r14, ctx->r23);
    // 0x1509269C: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x150926A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150926A4: subu        $t6, $t6, $s7
    ctx->r14 = SUB32(ctx->r14, ctx->r23);
    // 0x150926A8: add.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f20.fl;
    // 0x150926AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150926B0: subu        $t6, $t6, $s7
    ctx->r14 = SUB32(ctx->r14, ctx->r23);
    // 0x150926B4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150926B8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150926BC: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x150926C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150926C4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150926C8: addu        $ra, $t6, $t8
    ctx->r31 = ADD32(ctx->r14, ctx->r24);
    // 0x150926CC: lw          $t9, 0x0($ra)
    ctx->r25 = MEM_W(ctx->r31, 0X0);
    // 0x150926D0: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x150926D4: mfc1        $s4, $f6
    ctx->r20 = (int32_t)ctx->f6.u32l;
    // 0x150926D8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x150926DC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150926E0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x150926E4: bne         $t9, $at, L_1509278C
    if (ctx->r25 != ctx->r1) {
        // 0x150926E8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1509278C;
    }
    // 0x150926E8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150926EC: lw          $a1, 0x31C($ra)
    ctx->r5 = MEM_W(ctx->r31, 0X31C);
    // 0x150926F0: lbu         $s1, 0x128($a1)
    ctx->r17 = MEM_BU(ctx->r5, 0X128);
    // 0x150926F4: andi        $t7, $s1, 0x1
    ctx->r15 = ctx->r17 & 0X1;
    // 0x150926F8: beql        $t7, $zero, L_15092710
    if (ctx->r15 == 0) {
        // 0x150926FC: andi        $t6, $s1, 0x2
        ctx->r14 = ctx->r17 & 0X2;
            goto L_15092710;
    }
    goto skip_6;
    // 0x150926FC: andi        $t6, $s1, 0x2
    ctx->r14 = ctx->r17 & 0X2;
    skip_6:
    // 0x15092700: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
    // 0x15092704: b           L_15092748
    // 0x15092708: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
        goto L_15092748;
    // 0x15092708: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x1509270C: andi        $t6, $s1, 0x2
    ctx->r14 = ctx->r17 & 0X2;
L_15092710:
    // 0x15092710: beq         $t6, $zero, L_15092720
    if (ctx->r14 == 0) {
        // 0x15092714: andi        $t8, $s1, 0x80
        ctx->r24 = ctx->r17 & 0X80;
            goto L_15092720;
    }
    // 0x15092714: andi        $t8, $s1, 0x80
    ctx->r24 = ctx->r17 & 0X80;
    // 0x15092718: b           L_15092748
    // 0x1509271C: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
        goto L_15092748;
    // 0x1509271C: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
L_15092720:
    // 0x15092720: beql        $t8, $zero, L_15092738
    if (ctx->r24 == 0) {
        // 0x15092724: andi        $t9, $s1, 0x10
        ctx->r25 = ctx->r17 & 0X10;
            goto L_15092738;
    }
    goto skip_7;
    // 0x15092724: andi        $t9, $s1, 0x10
    ctx->r25 = ctx->r17 & 0X10;
    skip_7:
    // 0x15092728: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1509272C: b           L_15092748
    // 0x15092730: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
        goto L_15092748;
    // 0x15092730: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
    // 0x15092734: andi        $t9, $s1, 0x10
    ctx->r25 = ctx->r17 & 0X10;
L_15092738:
    // 0x15092738: beq         $t9, $zero, L_15092748
    if (ctx->r25 == 0) {
        // 0x1509273C: nop
    
            goto L_15092748;
    }
    // 0x1509273C: nop

    // 0x15092740: addiu       $s2, $zero, 0x9
    ctx->r18 = ADD32(0, 0X9);
    // 0x15092744: addiu       $s6, $zero, -0x3
    ctx->r22 = ADD32(0, -0X3);
L_15092748:
    // 0x15092748: bltz        $s2, L_15092800
    if (SIGNED(ctx->r18) < 0) {
        // 0x1509274C: nop
    
            goto L_15092800;
    }
    // 0x1509274C: nop

    // 0x15092750: beq         $s2, $s5, L_15092800
    if (ctx->r18 == ctx->r21) {
        // 0x15092754: addiu       $t7, $sp, 0x210
        ctx->r15 = ADD32(ctx->r29, 0X210);
            goto L_15092800;
    }
    // 0x15092754: addiu       $t7, $sp, 0x210
    ctx->r15 = ADD32(ctx->r29, 0X210);
    // 0x15092758: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1509275C: sb          $t6, 0x215($sp)
    MEM_B(0X215, ctx->r29) = ctx->r14;
    // 0x15092760: blez        $s6, L_15092778
    if (SIGNED(ctx->r22) <= 0) {
        // 0x15092764: addu        $a0, $s7, $t7
        ctx->r4 = ADD32(ctx->r23, ctx->r15);
            goto L_15092778;
    }
    // 0x15092764: addu        $a0, $s7, $t7
    ctx->r4 = ADD32(ctx->r23, ctx->r15);
    // 0x15092768: lhu         $t8, 0x12C($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X12C);
    // 0x1509276C: srav        $t9, $t8, $s6
    ctx->r25 = S32(SIGNED(ctx->r24) >> (ctx->r22 & 31));
    // 0x15092770: b           L_15092800
    // 0x15092774: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
        goto L_15092800;
    // 0x15092774: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
L_15092778:
    // 0x15092778: lhu         $t7, 0x12C($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X12C);
    // 0x1509277C: negu        $t6, $s6
    ctx->r14 = SUB32(0, ctx->r22);
    // 0x15092780: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x15092784: b           L_15092800
    // 0x15092788: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
        goto L_15092800;
    // 0x15092788: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
L_1509278C:
    // 0x1509278C: lw          $a1, 0x31C($ra)
    ctx->r5 = MEM_W(ctx->r31, 0X31C);
    // 0x15092790: or          $v1, $s5, $zero
    ctx->r3 = ctx->r21 | 0;
    // 0x15092794: lbu         $t9, 0x75($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X75);
    // 0x15092798: andi        $t7, $t9, 0x7F
    ctx->r15 = ctx->r25 & 0X7F;
    // 0x1509279C: addiu       $t6, $t7, -0x30
    ctx->r14 = ADD32(ctx->r15, -0X30);
    // 0x150927A0: sltiu       $at, $t6, 0xF
    ctx->r1 = ctx->r14 < 0XF ? 1 : 0;
    // 0x150927A4: beq         $at, $zero, L_15092800
    if (ctx->r1 == 0) {
        // 0x150927A8: nop
    
            goto L_15092800;
    }
    // 0x150927A8: nop

    // 0x150927AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150927B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150927B4: addu        $at, $at, $t6
    gpr jr_addend_150927BC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x150927B8: lw          $t6, -0x21D0($at)
    ctx->r14 = ADD32(ctx->r1, -0X21D0);
    // 0x150927BC: jr          $t6
    // 0x150927C0: nop

    switch (jr_addend_150927BC >> 2) {
        case 0: goto L_150927DC; break;
        case 1: goto L_150927DC; break;
        case 2: goto L_15092800; break;
        case 3: goto L_15092800; break;
        case 4: goto L_15092800; break;
        case 5: goto L_15092800; break;
        case 6: goto L_15092800; break;
        case 7: goto L_150927C4; break;
        case 8: goto L_150927CC; break;
        case 9: goto L_150927D4; break;
        case 10: goto L_15092800; break;
        case 11: goto L_15092800; break;
        case 12: goto L_15092800; break;
        case 13: goto L_15092800; break;
        case 14: goto L_150927E8; break;
        default: switch_error(__func__, 0x150927BC, 0x8009DE30);
    }
    // 0x150927C0: nop

L_150927C4:
    // 0x150927C4: b           L_15092800
    // 0x150927C8: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
        goto L_15092800;
    // 0x150927C8: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
L_150927CC:
    // 0x150927CC: b           L_15092800
    // 0x150927D0: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
        goto L_15092800;
    // 0x150927D0: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_150927D4:
    // 0x150927D4: b           L_15092800
    // 0x150927D8: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
        goto L_15092800;
    // 0x150927D8: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_150927DC:
    // 0x150927DC: lb          $t0, 0x1AE($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X1AE);
    // 0x150927E0: b           L_15092800
    // 0x150927E4: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
        goto L_15092800;
    // 0x150927E4: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
L_150927E8:
    // 0x150927E8: lhu         $t8, 0x12C($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X12C);
    // 0x150927EC: addu        $t7, $sp, $s7
    ctx->r15 = ADD32(ctx->r29, ctx->r23);
    // 0x150927F0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150927F4: sra         $t9, $t8, 4
    ctx->r25 = S32(SIGNED(ctx->r24) >> 4);
    // 0x150927F8: sb          $t9, 0x210($t7)
    MEM_B(0X210, ctx->r15) = ctx->r25;
    // 0x150927FC: sb          $t6, 0x215($sp)
    MEM_B(0X215, ctx->r29) = ctx->r14;
L_15092800:
    // 0x15092800: bltz        $s2, L_15092984
    if (SIGNED(ctx->r18) < 0) {
        // 0x15092804: lbu         $t8, 0x216($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X216);
            goto L_15092984;
    }
    // 0x15092804: lbu         $t8, 0x216($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X216);
    // 0x15092808: bne         $t8, $zero, L_15092854
    if (ctx->r24 != 0) {
        // 0x1509280C: nop
    
            goto L_15092854;
    }
    // 0x1509280C: nop

    // 0x15092810: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15092814: sb          $t9, 0x216($sp)
    MEM_B(0X216, ctx->r29) = ctx->r25;
    // 0x15092818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1509281C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15092820: addiu       $a2, $sp, 0x217
    ctx->r6 = ADD32(ctx->r29, 0X217);
    // 0x15092824: sw          $v1, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r3;
    // 0x15092828: sw          $t0, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r8;
    // 0x1509282C: sw          $t3, 0x23C($sp)
    MEM_W(0X23C, ctx->r29) = ctx->r11;
    // 0x15092830: jal         0x15091534
    // 0x15092834: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    func_15091534(rdram, ctx);
        goto after_8;
    // 0x15092834: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    after_8:
    // 0x15092838: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x1509283C: addiu       $t4, $t4, 0x73BC
    ctx->r12 = ADD32(ctx->r12, 0X73BC);
    // 0x15092840: lw          $v1, 0x168($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X168);
    // 0x15092844: lw          $t0, 0x254($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X254);
    // 0x15092848: lw          $t3, 0x23C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X23C);
    // 0x1509284C: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x15092850: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_15092854:
    // 0x15092854: div         $zero, $s2, $s5
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r21)));
    // 0x15092858: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x1509285C: mfhi        $t2
    ctx->r10 = hi;
    // 0x15092860: lh          $t7, 0x1FE($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1FE);
    // 0x15092864: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x15092868: subu        $t6, $t6, $t2
    ctx->r14 = SUB32(ctx->r14, ctx->r10);
    // 0x1509286C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15092870: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x15092874: subu        $s3, $t3, $t7
    ctx->r19 = SUB32(ctx->r11, ctx->r15);
    // 0x15092878: bne         $s5, $zero, L_15092884
    if (ctx->r21 != 0) {
        // 0x1509287C: nop
    
            goto L_15092884;
    }
    // 0x1509287C: nop

    // 0x15092880: break       7
    do_break(352921728);
L_15092884:
    // 0x15092884: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15092888: bne         $s5, $at, L_1509289C
    if (ctx->r21 != ctx->r1) {
        // 0x1509288C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1509289C;
    }
    // 0x1509288C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15092890: bne         $s2, $at, L_1509289C
    if (ctx->r18 != ctx->r1) {
        // 0x15092894: nop
    
            goto L_1509289C;
    }
    // 0x15092894: nop

    // 0x15092898: break       6
    do_break(352921752);
L_1509289C:
    // 0x1509289C: mflo        $s2
    ctx->r18 = lo;
    // 0x150928A0: addu        $t8, $t8, $s2
    ctx->r24 = ADD32(ctx->r24, ctx->r18);
    // 0x150928A4: lbu         $t8, 0x73B4($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X73B4);
    // 0x150928A8: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x150928AC: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x150928B0: addu        $t1, $t8, $v1
    ctx->r9 = ADD32(ctx->r24, ctx->r3);
    // 0x150928B4: sll         $t7, $t1, 5
    ctx->r15 = S32(ctx->r9 << 5);
    // 0x150928B8: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
L_150928BC:
    // 0x150928BC: lbu         $t6, 0x217($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X217);
    // 0x150928C0: addu        $t8, $t4, $s2
    ctx->r24 = ADD32(ctx->r12, ctx->r18);
    // 0x150928C4: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x150928C8: beq         $t6, $zero, L_15092974
    if (ctx->r14 == 0) {
        // 0x150928CC: nop
    
            goto L_15092974;
    }
    // 0x150928CC: nop

    // 0x150928D0: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x150928D4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150928D8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150928DC: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x150928E0: addu        $t6, $sp, $t7
    ctx->r14 = ADD32(ctx->r29, ctx->r15);
    // 0x150928E4: lh          $t6, 0x1CC($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X1CC);
    // 0x150928E8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150928EC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150928F0: addu        $t8, $t6, $s4
    ctx->r24 = ADD32(ctx->r14, ctx->r20);
    // 0x150928F4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x150928F8: lh          $t8, 0x1F8($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1F8);
    // 0x150928FC: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x15092900: or          $t6, $t7, $fp
    ctx->r14 = ctx->r15 | ctx->r30;
    // 0x15092904: addu        $t9, $s3, $t8
    ctx->r25 = ADD32(ctx->r19, ctx->r24);
    // 0x15092908: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x1509290C: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x15092910: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x15092914: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x15092918: sll         $t8, $s3, 2
    ctx->r24 = S32(ctx->r19 << 2);
    // 0x1509291C: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x15092920: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15092924: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x15092928: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x1509292C: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x15092930: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x15092934: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x15092938: lui         $t7, 0xE100
    ctx->r15 = S32(0XE100 << 16);
    // 0x1509293C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x15092940: sll         $t8, $t2, 16
    ctx->r24 = S32(ctx->r10 << 16);
    // 0x15092944: andi        $t6, $t1, 0xFFFF
    ctx->r14 = ctx->r9 & 0XFFFF;
    // 0x15092948: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x1509294C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x15092950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15092954: lui         $t9, 0xF100
    ctx->r25 = S32(0XF100 << 16);
    // 0x15092958: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x1509295C: lw          $a1, 0x218($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X218);
    // 0x15092960: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092964: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x15092968: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x1509296C: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x15092970: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
L_15092974:
    // 0x15092974: bgtz        $t0, L_150928BC
    if (SIGNED(ctx->r8) > 0) {
        // 0x15092978: addiu       $s3, $s3, -0x12
        ctx->r19 = ADD32(ctx->r19, -0X12);
            goto L_150928BC;
    }
    // 0x15092978: addiu       $s3, $s3, -0x12
    ctx->r19 = ADD32(ctx->r19, -0X12);
    // 0x1509297C: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x15092980: lw          $a2, 0x2FA0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2FA0);
L_15092984:
    // 0x15092984: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x15092988: slt         $at, $a2, $s7
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x1509298C: beq         $at, $zero, L_15092660
    if (ctx->r1 == 0) {
        // 0x15092990: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
            goto L_15092660;
    }
    // 0x15092990: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x15092994: sw          $s6, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = ctx->r22;
L_15092998:
    // 0x15092998: lbu         $t9, 0x215($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X215);
    // 0x1509299C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150929A0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x150929A4: beq         $t9, $zero, L_15092AE8
    if (ctx->r25 == 0) {
        // 0x150929A8: lui         $t6, 0xEF00
        ctx->r14 = S32(0XEF00 << 16);
            goto L_15092AE8;
    }
    // 0x150929A8: lui         $t6, 0xEF00
    ctx->r14 = S32(0XEF00 << 16);
    // 0x150929AC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150929B0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x150929B4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x150929B8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150929BC: lui         $t7, 0xF0A
    ctx->r15 = S32(0XF0A << 16);
    // 0x150929C0: ori         $t7, $t7, 0x4004
    ctx->r15 = ctx->r15 | 0X4004;
    // 0x150929C4: ori         $t6, $t6, 0x2C3F
    ctx->r14 = ctx->r14 | 0X2C3F;
    // 0x150929C8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x150929CC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x150929D0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150929D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150929D8: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x150929DC: lui         $t8, 0xFFFD
    ctx->r24 = S32(0XFFFD << 16);
    // 0x150929E0: ori         $t8, $t8, 0xF6FB
    ctx->r24 = ctx->r24 | 0XF6FB;
    // 0x150929E4: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x150929E8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x150929EC: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x150929F0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150929F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150929F8: lui         $t7, 0xFF00
    ctx->r15 = S32(0XFF00 << 16);
    // 0x150929FC: ori         $t7, $t7, 0xFF
    ctx->r15 = ctx->r15 | 0XFF;
    // 0x15092A00: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x15092A04: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x15092A08: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x15092A0C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092A10: lbu         $t9, 0x215($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X215);
    // 0x15092A14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15092A18: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x15092A1C: bne         $t9, $at, L_15092A2C
    if (ctx->r25 != ctx->r1) {
        // 0x15092A20: lui         $a2, 0x8008
        ctx->r6 = S32(0X8008 << 16);
            goto L_15092A2C;
    }
    // 0x15092A20: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x15092A24: b           L_15092A30
    // 0x15092A28: addiu       $s1, $zero, 0xF
    ctx->r17 = ADD32(0, 0XF);
        goto L_15092A30;
    // 0x15092A28: addiu       $s1, $zero, 0xF
    ctx->r17 = ADD32(0, 0XF);
L_15092A2C:
    // 0x15092A2C: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
L_15092A30:
    // 0x15092A30: lw          $a2, 0x2FA0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2FA0);
    // 0x15092A34: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15092A38: addiu       $t0, $t0, -0x19D8
    ctx->r8 = ADD32(ctx->r8, -0X19D8);
    // 0x15092A3C: bltz        $a2, L_15092AE8
    if (SIGNED(ctx->r6) < 0) {
        // 0x15092A40: addiu       $a0, $sp, 0x210
        ctx->r4 = ADD32(ctx->r29, 0X210);
            goto L_15092AE8;
    }
    // 0x15092A40: addiu       $a0, $sp, 0x210
    ctx->r4 = ADD32(ctx->r29, 0X210);
    // 0x15092A44: addiu       $a3, $zero, 0x180
    ctx->r7 = ADD32(0, 0X180);
    // 0x15092A48: lui         $a1, 0xF600
    ctx->r5 = S32(0XF600 << 16);
L_15092A4C:
    // 0x15092A4C: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x15092A50: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15092A54: beql        $t8, $zero, L_15092ADC
    if (ctx->r24 == 0) {
        // 0x15092A58: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_15092ADC;
    }
    goto skip_8;
    // 0x15092A58: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_8:
    // 0x15092A5C: multu       $s7, $a3
    result = U64(U32(ctx->r23)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15092A60: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x15092A64: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x15092A68: mflo        $t7
    ctx->r15 = lo;
    // 0x15092A6C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x15092A70: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x15092A74: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x15092A78: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15092A7C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15092A80: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x15092A84: mfc1        $s5, $f18
    ctx->r21 = (int32_t)ctx->f18.u32l;
    // 0x15092A88: subu        $s3, $t8, $s1
    ctx->r19 = SUB32(ctx->r24, ctx->r17);
    // 0x15092A8C: andi        $t7, $s3, 0x3FF
    ctx->r15 = ctx->r19 & 0X3FF;
    // 0x15092A90: addiu       $s5, $s5, 0xA
    ctx->r21 = ADD32(ctx->r21, 0XA);
    // 0x15092A94: sll         $t9, $t7, 14
    ctx->r25 = S32(ctx->r15 << 14);
    // 0x15092A98: addiu       $t6, $s5, 0x4
    ctx->r14 = ADD32(ctx->r21, 0X4);
    // 0x15092A9C: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x15092AA0: or          $t8, $t9, $a1
    ctx->r24 = ctx->r25 | ctx->r5;
    // 0x15092AA4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x15092AA8: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x15092AAC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x15092AB0: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x15092AB4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092AB8: subu        $t8, $s3, $t7
    ctx->r24 = SUB32(ctx->r19, ctx->r15);
    // 0x15092ABC: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x15092AC0: andi        $t7, $s5, 0x3FF
    ctx->r15 = ctx->r21 & 0X3FF;
    // 0x15092AC4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15092AC8: sll         $t6, $t9, 14
    ctx->r14 = S32(ctx->r25 << 14);
    // 0x15092ACC: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x15092AD0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x15092AD4: lw          $a2, 0x2FA0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2FA0);
    // 0x15092AD8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_15092ADC:
    // 0x15092ADC: slt         $at, $a2, $s7
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x15092AE0: beq         $at, $zero, L_15092A4C
    if (ctx->r1 == 0) {
        // 0x15092AE4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_15092A4C;
    }
    // 0x15092AE4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_15092AE8:
    // 0x15092AE8: lb          $t7, 0x20F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X20F);
    // 0x15092AEC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x15092AF0: addiu       $a0, $a0, 0xD13
    ctx->r4 = ADD32(ctx->r4, 0XD13);
    // 0x15092AF4: beq         $t7, $zero, L_15092EC0
    if (ctx->r15 == 0) {
        // 0x15092AF8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_15092EC0;
    }
    // 0x15092AF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15092AFC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x15092B00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15092B04: jal         0x1510D0EC
    // 0x15092B08: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_9;
    // 0x15092B08: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    after_9:
    // 0x15092B0C: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x15092B10: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15092B14: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x15092B18: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x15092B1C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x15092B20: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15092B28: lui         $t9, 0x709
    ctx->r25 = S32(0X709 << 16);
    // 0x15092B2C: ori         $t9, $t9, 0x4250
    ctx->r25 = ctx->r25 | 0X4250;
    // 0x15092B30: lui         $t8, 0xF510
    ctx->r24 = S32(0XF510 << 16);
    // 0x15092B34: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x15092B38: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x15092B3C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092B40: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15092B44: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x15092B48: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x15092B4C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x15092B50: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092B54: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x15092B58: lui         $t8, 0x73F
    ctx->r24 = S32(0X73F << 16);
    // 0x15092B5C: ori         $t8, $t8, 0xF000
    ctx->r24 = ctx->r24 | 0XF000;
    // 0x15092B60: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x15092B64: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x15092B68: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x15092B6C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092B70: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x15092B74: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x15092B78: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x15092B7C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092B80: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15092B84: lui         $t9, 0xF510
    ctx->r25 = S32(0XF510 << 16);
    // 0x15092B88: lui         $t7, 0x9
    ctx->r15 = S32(0X9 << 16);
    // 0x15092B8C: ori         $t7, $t7, 0x4250
    ctx->r15 = ctx->r15 | 0X4250;
    // 0x15092B90: ori         $t9, $t9, 0x1000
    ctx->r25 = ctx->r25 | 0X1000;
    // 0x15092B94: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15092B98: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x15092B9C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092BA0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15092BA4: lui         $t8, 0x7
    ctx->r24 = S32(0X7 << 16);
    // 0x15092BA8: ori         $t8, $t8, 0xC07C
    ctx->r24 = ctx->r24 | 0XC07C;
    // 0x15092BAC: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x15092BB0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x15092BB4: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x15092BB8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15092BC0: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x15092BC4: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x15092BC8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092BCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15092BD0: lui         $t9, 0xEF00
    ctx->r25 = S32(0XEF00 << 16);
    // 0x15092BD4: lui         $t7, 0x50
    ctx->r15 = S32(0X50 << 16);
    // 0x15092BD8: ori         $t7, $t7, 0x4244
    ctx->r15 = ctx->r15 | 0X4244;
    // 0x15092BDC: ori         $t9, $t9, 0x2C3F
    ctx->r25 = ctx->r25 | 0X2C3F;
    // 0x15092BE0: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x15092BE4: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x15092BE8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092BEC: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x15092BF0: lw          $a2, 0x2FA0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2FA0);
    // 0x15092BF4: lui         $ra, 0x800D
    ctx->r31 = S32(0X800D << 16);
    // 0x15092BF8: addiu       $ra, $ra, -0x3D30
    ctx->r31 = ADD32(ctx->r31, -0X3D30);
    // 0x15092BFC: bltz        $a2, L_15092EC0
    if (SIGNED(ctx->r6) < 0) {
        // 0x15092C00: addiu       $s6, $zero, 0x3F
        ctx->r22 = ADD32(0, 0X3F);
            goto L_15092EC0;
    }
    // 0x15092C00: addiu       $s6, $zero, 0x3F
    ctx->r22 = ADD32(0, 0X3F);
    // 0x15092C04: addiu       $s4, $zero, 0x3A
    ctx->r20 = ADD32(0, 0X3A);
    // 0x15092C08: addiu       $s2, $zero, 0x26
    ctx->r18 = ADD32(0, 0X26);
L_15092C0C:
    // 0x15092C0C: lw          $a1, 0x31C($ra)
    ctx->r5 = MEM_W(ctx->r31, 0X31C);
    // 0x15092C10: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15092C14: sll         $t9, $s7, 2
    ctx->r25 = S32(ctx->r23 << 2);
    // 0x15092C18: lbu         $s1, 0x75($a1)
    ctx->r17 = MEM_BU(ctx->r5, 0X75);
    // 0x15092C1C: andi        $t6, $s1, 0x7F
    ctx->r14 = ctx->r17 & 0X7F;
    // 0x15092C20: beq         $t6, $s2, L_15092C30
    if (ctx->r14 == ctx->r18) {
        // 0x15092C24: nop
    
            goto L_15092C30;
    }
    // 0x15092C24: nop

    // 0x15092C28: bnel        $t6, $s4, L_15092EB4
    if (ctx->r14 != ctx->r20) {
        // 0x15092C2C: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_15092EB4;
    }
    goto skip_9;
    // 0x15092C2C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_9:
L_15092C30:
    // 0x15092C30: lw          $t8, -0x19D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X19D8);
    // 0x15092C34: subu        $t9, $t9, $s7
    ctx->r25 = SUB32(ctx->r25, ctx->r23);
    // 0x15092C38: sll         $t9, $t9, 7
    ctx->r25 = S32(ctx->r25 << 7);
    // 0x15092C3C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x15092C40: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x15092C44: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x15092C48: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15092C4C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15092C50: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
    // 0x15092C54: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x15092C58: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15092C5C: mfc1        $s3, $f6
    ctx->r19 = (int32_t)ctx->f6.u32l;
    // 0x15092C60: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x15092C64: addiu       $t2, $zero, 0x200
    ctx->r10 = ADD32(0, 0X200);
    // 0x15092C68: mfc1        $s5, $f10
    ctx->r21 = (int32_t)ctx->f10.u32l;
    // 0x15092C6C: addiu       $s3, $s3, -0xF
    ctx->r19 = ADD32(ctx->r19, -0XF);
    // 0x15092C70: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x15092C74: addiu       $s5, $s5, 0x5
    ctx->r21 = ADD32(ctx->r21, 0X5);
    // 0x15092C78: sll         $t9, $s5, 2
    ctx->r25 = S32(ctx->r21 << 2);
    // 0x15092C7C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x15092C80: beq         $v1, $at, L_15092C8C
    if (ctx->r3 == ctx->r1) {
        // 0x15092C84: or          $s5, $t9, $zero
        ctx->r21 = ctx->r25 | 0;
            goto L_15092C8C;
    }
    // 0x15092C84: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
    // 0x15092C88: bne         $v1, $s6, L_15092C98
    if (ctx->r3 != ctx->r22) {
        // 0x15092C8C: addiu       $v1, $zero, 0xE
        ctx->r3 = ADD32(0, 0XE);
            goto L_15092C98;
    }
L_15092C8C:
    // 0x15092C8C: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x15092C90: b           L_15092CF0
    // 0x15092C94: addiu       $t1, $zero, 0x1E0
    ctx->r9 = ADD32(0, 0X1E0);
        goto L_15092CF0;
    // 0x15092C94: addiu       $t1, $zero, 0x1E0
    ctx->r9 = ADD32(0, 0X1E0);
L_15092C98:
    // 0x15092C98: lbu         $v0, 0x4($ra)
    ctx->r2 = MEM_BU(ctx->r31, 0X4);
    // 0x15092C9C: addiu       $at, $zero, 0x75
    ctx->r1 = ADD32(0, 0X75);
    // 0x15092CA0: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x15092CA4: beq         $v0, $at, L_15092CB8
    if (ctx->r2 == ctx->r1) {
        // 0x15092CA8: addiu       $t2, $zero, 0xC0
        ctx->r10 = ADD32(0, 0XC0);
            goto L_15092CB8;
    }
    // 0x15092CA8: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x15092CAC: addiu       $at, $zero, 0xB1
    ctx->r1 = ADD32(0, 0XB1);
    // 0x15092CB0: bnel        $v0, $at, L_15092CC8
    if (ctx->r2 != ctx->r1) {
        // 0x15092CB4: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_15092CC8;
    }
    goto skip_10;
    // 0x15092CB4: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    skip_10:
L_15092CB8:
    // 0x15092CB8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x15092CBC: b           L_15092CF0
    // 0x15092CC0: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
        goto L_15092CF0;
    // 0x15092CC0: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x15092CC4: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
L_15092CC8:
    // 0x15092CC8: bne         $v0, $at, L_15092CE4
    if (ctx->r2 != ctx->r1) {
        // 0x15092CCC: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_15092CE4;
    }
    // 0x15092CCC: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x15092CD0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x15092CD4: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x15092CD8: addiu       $t2, $zero, 0x200
    ctx->r10 = ADD32(0, 0X200);
    // 0x15092CDC: b           L_15092CF0
    // 0x15092CE0: addiu       $t1, $zero, 0x1E0
    ctx->r9 = ADD32(0, 0X1E0);
        goto L_15092CF0;
    // 0x15092CE0: addiu       $t1, $zero, 0x1E0
    ctx->r9 = ADD32(0, 0X1E0);
L_15092CE4:
    // 0x15092CE4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x15092CE8: addiu       $t2, $zero, 0x240
    ctx->r10 = ADD32(0, 0X240);
    // 0x15092CEC: addiu       $t1, $zero, 0x60
    ctx->r9 = ADD32(0, 0X60);
L_15092CF0:
    // 0x15092CF0: lbu         $t7, 0x19A($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X19A);
    // 0x15092CF4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15092CF8: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x15092CFC: blez        $t7, L_15092EB0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15092D00: addiu       $t8, $sp, 0x1CC
        ctx->r24 = ADD32(ctx->r29, 0X1CC);
            goto L_15092EB0;
    }
    // 0x15092D00: addiu       $t8, $sp, 0x1CC
    ctx->r24 = ADD32(ctx->r29, 0X1CC);
    // 0x15092D04: lw          $t5, 0x218($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X218);
    // 0x15092D08: addu        $t3, $t6, $t8
    ctx->r11 = ADD32(ctx->r14, ctx->r24);
    // 0x15092D0C: sll         $a3, $s5, 16
    ctx->r7 = S32(ctx->r21 << 16);
    // 0x15092D10: sra         $t7, $a3, 16
    ctx->r15 = S32(SIGNED(ctx->r7) >> 16);
    // 0x15092D14: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x15092D18: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x15092D1C: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x15092D20: or          $t5, $t6, $at
    ctx->r13 = ctx->r14 | ctx->r1;
    // 0x15092D24: addu        $t4, $t9, $t8
    ctx->r12 = ADD32(ctx->r25, ctx->r24);
    // 0x15092D28: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x15092D2C: lh          $t8, 0x0($t3)
    ctx->r24 = MEM_H(ctx->r11, 0X0);
L_15092D30:
    // 0x15092D30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15092D34: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092D38: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x15092D3C: addu        $v0, $t7, $s3
    ctx->r2 = ADD32(ctx->r15, ctx->r19);
    // 0x15092D40: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x15092D44: sra         $t9, $t6, 16
    ctx->r25 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15092D48: blez        $t9, L_15092D58
    if (SIGNED(ctx->r25) <= 0) {
        // 0x15092D4C: or          $a2, $s0, $zero
        ctx->r6 = ctx->r16 | 0;
            goto L_15092D58;
    }
    // 0x15092D4C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x15092D50: b           L_15092D5C
    // 0x15092D54: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
        goto L_15092D5C;
    // 0x15092D54: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_15092D58:
    // 0x15092D58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_15092D5C:
    // 0x15092D5C: lh          $t8, 0x0($t4)
    ctx->r24 = MEM_H(ctx->r12, 0X0);
    // 0x15092D60: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092D64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15092D68: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x15092D6C: addu        $v0, $t7, $s5
    ctx->r2 = ADD32(ctx->r15, ctx->r21);
    // 0x15092D70: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x15092D74: sra         $t9, $t6, 16
    ctx->r25 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15092D78: blez        $t9, L_15092D88
    if (SIGNED(ctx->r25) <= 0) {
        // 0x15092D7C: andi        $t6, $a0, 0xFFF
        ctx->r14 = ctx->r4 & 0XFFF;
            goto L_15092D88;
    }
    // 0x15092D7C: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x15092D80: b           L_15092D88
    // 0x15092D84: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_15092D88;
    // 0x15092D84: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_15092D88:
    // 0x15092D88: andi        $t8, $v1, 0xFFF
    ctx->r24 = ctx->r3 & 0XFFF;
    // 0x15092D8C: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x15092D90: or          $t7, $t8, $fp
    ctx->r15 = ctx->r24 | ctx->r30;
    // 0x15092D94: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x15092D98: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15092D9C: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x15092DA0: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x15092DA4: blez        $t6, L_15092DB4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15092DA8: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_15092DB4;
    }
    // 0x15092DA8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x15092DAC: b           L_15092DB8
    // 0x15092DB0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_15092DB8;
    // 0x15092DB0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_15092DB4:
    // 0x15092DB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_15092DB8:
    // 0x15092DB8: blez        $a3, L_15092DC8
    if (SIGNED(ctx->r7) <= 0) {
        // 0x15092DBC: andi        $t9, $a0, 0xFFF
        ctx->r25 = ctx->r4 & 0XFFF;
            goto L_15092DC8;
    }
    // 0x15092DBC: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x15092DC0: b           L_15092DCC
    // 0x15092DC4: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
        goto L_15092DCC;
    // 0x15092DC4: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_15092DC8:
    // 0x15092DC8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15092DCC:
    // 0x15092DCC: andi        $t7, $v1, 0xFFF
    ctx->r15 = ctx->r3 & 0XFFF;
    // 0x15092DD0: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x15092DD4: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x15092DD8: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x15092DDC: lui         $t9, 0xE100
    ctx->r25 = S32(0XE100 << 16);
    // 0x15092DE0: bgez        $v0, L_15092E08
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15092DE4: sw          $t9, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r25;
            goto L_15092E08;
    }
    // 0x15092DE4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x15092DE8: sll         $v1, $v0, 10
    ctx->r3 = S32(ctx->r2 << 10);
    // 0x15092DEC: sra         $t7, $v1, 7
    ctx->r15 = S32(SIGNED(ctx->r3) >> 7);
    // 0x15092DF0: bgez        $t7, L_15092E00
    if (SIGNED(ctx->r15) >= 0) {
        // 0x15092DF4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15092E00;
    }
    // 0x15092DF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15092DF8: b           L_15092E0C
    // 0x15092DFC: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
        goto L_15092E0C;
    // 0x15092DFC: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
L_15092E00:
    // 0x15092E00: b           L_15092E0C
    // 0x15092E04: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_15092E0C;
    // 0x15092E04: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_15092E08:
    // 0x15092E08: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15092E0C:
    // 0x15092E0C: bgez        $s5, L_15092E60
    if (SIGNED(ctx->r21) >= 0) {
        // 0x15092E10: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15092E60;
    }
    // 0x15092E10: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15092E14: lh          $v1, 0x21A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X21A);
    // 0x15092E18: multu       $a3, $v1
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15092E1C: mflo        $v0
    ctx->r2 = lo;
    // 0x15092E20: sra         $t8, $v0, 7
    ctx->r24 = S32(SIGNED(ctx->r2) >> 7);
    // 0x15092E24: bgez        $v1, L_15092E44
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15092E28: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_15092E44;
    }
    // 0x15092E28: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x15092E2C: blez        $t8, L_15092E3C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x15092E30: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_15092E3C;
    }
    // 0x15092E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15092E34: b           L_15092E60
    // 0x15092E38: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_15092E60;
    // 0x15092E38: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_15092E3C:
    // 0x15092E3C: b           L_15092E60
    // 0x15092E40: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_15092E60;
    // 0x15092E40: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_15092E44:
    // 0x15092E44: bgez        $v0, L_15092E54
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15092E48: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15092E54;
    }
    // 0x15092E48: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15092E4C: b           L_15092E54
    // 0x15092E50: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_15092E54;
    // 0x15092E50: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_15092E54:
    // 0x15092E54: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x15092E58: b           L_15092E60
    // 0x15092E5C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_15092E60;
    // 0x15092E5C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_15092E60:
    // 0x15092E60: subu        $t6, $t1, $v1
    ctx->r14 = SUB32(ctx->r9, ctx->r3);
    // 0x15092E64: andi        $t9, $t6, 0xFFFF
    ctx->r25 = ctx->r14 & 0XFFFF;
    // 0x15092E68: subu        $t8, $t2, $t0
    ctx->r24 = SUB32(ctx->r10, ctx->r8);
    // 0x15092E6C: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x15092E70: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x15092E74: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x15092E78: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15092E7C: lui         $t8, 0xF100
    ctx->r24 = S32(0XF100 << 16);
    // 0x15092E80: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15092E84: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x15092E88: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15092E8C: lw          $t9, 0x31C($ra)
    ctx->r25 = MEM_W(ctx->r31, 0X31C);
    // 0x15092E90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15092E94: addiu       $s3, $s3, -0x2C
    ctx->r19 = ADD32(ctx->r19, -0X2C);
    // 0x15092E98: lbu         $t6, 0x19A($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X19A);
    // 0x15092E9C: slt         $at, $s1, $t6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15092EA0: bnel        $at, $zero, L_15092D30
    if (ctx->r1 != 0) {
        // 0x15092EA4: lh          $t8, 0x0($t3)
        ctx->r24 = MEM_H(ctx->r11, 0X0);
            goto L_15092D30;
    }
    goto skip_11;
    // 0x15092EA4: lh          $t8, 0x0($t3)
    ctx->r24 = MEM_H(ctx->r11, 0X0);
    skip_11:
    // 0x15092EA8: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x15092EAC: lw          $a2, 0x2FA0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2FA0);
L_15092EB0:
    // 0x15092EB0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_15092EB4:
    // 0x15092EB4: slt         $at, $a2, $s7
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x15092EB8: beq         $at, $zero, L_15092C0C
    if (ctx->r1 == 0) {
        // 0x15092EBC: addiu       $ra, $ra, 0x32C
        ctx->r31 = ADD32(ctx->r31, 0X32C);
            goto L_15092C0C;
    }
    // 0x15092EBC: addiu       $ra, $ra, 0x32C
    ctx->r31 = ADD32(ctx->r31, 0X32C);
L_15092EC0:
    // 0x15092EC0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15092EC4: lhu         $t7, -0x240($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X240);
    // 0x15092EC8: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x15092ECC: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x15092ED0: beq         $t8, $zero, L_1509308C
    if (ctx->r24 == 0) {
        // 0x15092ED4: nop
    
            goto L_1509308C;
    }
    // 0x15092ED4: nop

    // 0x15092ED8: lw          $t9, 0x72A0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X72A0);
    // 0x15092EDC: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x15092EE0: beq         $t9, $zero, L_1509308C
    if (ctx->r25 == 0) {
        // 0x15092EE4: nop
    
            goto L_1509308C;
    }
    // 0x15092EE4: nop

    // 0x15092EE8: lw          $t6, 0x2FA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA0);
    // 0x15092EEC: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x15092EF0: lb          $s6, 0xBE7($s6)
    ctx->r22 = MEM_B(ctx->r22, 0XBE7);
    // 0x15092EF4: bltz        $t6, L_1509308C
    if (SIGNED(ctx->r14) < 0) {
        // 0x15092EF8: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_1509308C;
    }
    // 0x15092EF8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x15092EFC: lw          $t7, 0x244($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X244);
    // 0x15092F00: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15092F04: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15092F08: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x15092F0C: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
L_15092F10:
    // 0x15092F10: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x15092F14: addiu       $s2, $s2, -0x19D8
    ctx->r18 = ADD32(ctx->r18, -0X19D8);
    // 0x15092F18: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x15092F1C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x15092F20: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15092F24: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x15092F28: lwc1        $f16, 0x24($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X24);
    // 0x15092F2C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15092F30: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x15092F34: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15092F38: mfc1        $s5, $f18
    ctx->r21 = (int32_t)ctx->f18.u32l;
    // 0x15092F3C: jal         0x1504332C
    // 0x15092F40: addiu       $s5, $s5, 0x5
    ctx->r21 = ADD32(ctx->r21, 0X5);
    func_1504332C(rdram, ctx);
        goto after_10;
    // 0x15092F40: addiu       $s5, $s5, 0x5
    ctx->r21 = ADD32(ctx->r21, 0X5);
    after_10:
    // 0x15092F44: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15092F48: lw          $t8, 0x72A0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X72A0);
    // 0x15092F4C: addu        $v0, $t8, $s4
    ctx->r2 = ADD32(ctx->r24, ctx->r20);
    // 0x15092F50: lw          $a2, 0x20($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X20);
    // 0x15092F54: blez        $a2, L_15092F8C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x15092F58: nop
    
            goto L_15092F8C;
    }
    // 0x15092F58: nop

    // 0x15092F5C: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x15092F60: addiu       $a1, $s5, 0x19
    ctx->r5 = ADD32(ctx->r21, 0X19);
    // 0x15092F64: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x15092F68: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x15092F6C: lwc1        $f4, 0x2C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x15092F70: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15092F74: mfc1        $s3, $f6
    ctx->r19 = (int32_t)ctx->f6.u32l;
    // 0x15092F78: jal         0x150916B4
    // 0x15092F7C: addiu       $a0, $s3, 0x17
    ctx->r4 = ADD32(ctx->r19, 0X17);
    func_150916B4(rdram, ctx);
        goto after_11;
    // 0x15092F7C: addiu       $a0, $s3, 0x17
    ctx->r4 = ADD32(ctx->r19, 0X17);
    after_11:
    // 0x15092F80: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15092F84: lw          $t8, 0x72A0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X72A0);
    // 0x15092F88: addu        $v0, $t8, $s4
    ctx->r2 = ADD32(ctx->r24, ctx->r20);
L_15092F8C:
    // 0x15092F8C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15092F90: lw          $t9, -0x19D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X19D8);
    // 0x15092F94: lb          $s2, 0x27($v0)
    ctx->r18 = MEM_B(ctx->r2, 0X27);
    // 0x15092F98: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x15092F9C: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x15092FA0: lwc1        $f8, 0x2C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x15092FA4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15092FA8: sll         $t6, $s2, 24
    ctx->r14 = S32(ctx->r18 << 24);
    // 0x15092FAC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15092FB0: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x15092FB4: sra         $s2, $t6, 24
    ctx->r18 = S32(SIGNED(ctx->r14) >> 24);
    // 0x15092FB8: slt         $at, $s6, $s2
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x15092FBC: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x15092FC0: addiu       $a2, $zero, 0xC1
    ctx->r6 = ADD32(0, 0XC1);
    // 0x15092FC4: bne         $at, $zero, L_15093070
    if (ctx->r1 != 0) {
        // 0x15092FC8: addu        $s3, $t8, $t9
        ctx->r19 = ADD32(ctx->r24, ctx->r25);
            goto L_15093070;
    }
    // 0x15092FC8: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x15092FCC: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15092FD0: addu        $t9, $t9, $s7
    ctx->r25 = ADD32(ctx->r25, ctx->r23);
    // 0x15092FD4: lb          $t9, 0xAC0($t9)
    ctx->r25 = MEM_B(ctx->r25, 0XAC0);
    // 0x15092FD8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15092FDC: lw          $t8, 0xBD8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XBD8);
    // 0x15092FE0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x15092FE4: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x15092FE8: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x15092FEC: lw          $t9, 0x20($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X20);
    // 0x15092FF0: addiu       $a3, $a3, -0x230C
    ctx->r7 = ADD32(ctx->r7, -0X230C);
    // 0x15092FF4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15092FF8: jal         0x15042D94
    // 0x15092FFC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15042D94(rdram, ctx);
        goto after_12;
    // 0x15092FFC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_12:
    // 0x15093000: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15093004: lw          $t8, -0x19D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X19D8);
    // 0x15093008: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x1509300C: addiu       $a3, $a3, -0x2308
    ctx->r7 = ADD32(ctx->r7, -0X2308);
    // 0x15093010: addu        $t6, $t8, $s1
    ctx->r14 = ADD32(ctx->r24, ctx->r17);
    // 0x15093014: lwc1        $f16, 0x2C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x15093018: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x1509301C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x15093020: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15093024: addiu       $a1, $s5, 0xE
    ctx->r5 = ADD32(ctx->r21, 0XE);
    // 0x15093028: addiu       $a2, $zero, 0xC1
    ctx->r6 = ADD32(0, 0XC1);
    // 0x1509302C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x15093030: jal         0x15042D94
    // 0x15093034: addiu       $a0, $a0, 0x1D
    ctx->r4 = ADD32(ctx->r4, 0X1D);
    func_15042D94(rdram, ctx);
        goto after_13;
    // 0x15093034: addiu       $a0, $a0, 0x1D
    ctx->r4 = ADD32(ctx->r4, 0X1D);
    after_13:
    // 0x15093038: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1509303C: lw          $t9, -0x19D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X19D8);
    // 0x15093040: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x15093044: lw          $t7, 0x72A0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X72A0);
    // 0x15093048: addu        $t8, $t9, $s1
    ctx->r24 = ADD32(ctx->r25, ctx->r17);
    // 0x1509304C: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x15093050: addu        $t9, $t7, $s4
    ctx->r25 = ADD32(ctx->r15, ctx->r20);
    // 0x15093054: lw          $a2, 0x1C($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X1C);
    // 0x15093058: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1509305C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15093060: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x15093064: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15093068: jal         0x150916B4
    // 0x1509306C: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    func_150916B4(rdram, ctx);
        goto after_14;
    // 0x1509306C: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    after_14:
L_15093070:
    // 0x15093070: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15093074: lw          $t8, 0x2FA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2FA0);
    // 0x15093078: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x1509307C: addiu       $s1, $s1, 0x180
    ctx->r17 = ADD32(ctx->r17, 0X180);
    // 0x15093080: slt         $at, $t8, $s7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x15093084: beq         $at, $zero, L_15092F10
    if (ctx->r1 == 0) {
        // 0x15093088: addiu       $s4, $s4, 0x84
        ctx->r20 = ADD32(ctx->r20, 0X84);
            goto L_15092F10;
    }
    // 0x15093088: addiu       $s4, $s4, 0x84
    ctx->r20 = ADD32(ctx->r20, 0X84);
L_1509308C:
    // 0x1509308C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15093090: lbu         $v0, -0x153F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X153F);
    // 0x15093094: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x15093098: bne         $v0, $zero, L_150937B0
    if (ctx->r2 != 0) {
        // 0x1509309C: nop
    
            goto L_150937B0;
    }
    // 0x1509309C: nop

    // 0x150930A0: lhu         $t6, -0x240($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X240);
    // 0x150930A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150930A8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150930AC: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x150930B0: beq         $t7, $zero, L_150937B0
    if (ctx->r15 == 0) {
        // 0x150930B4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_150937B0;
    }
    // 0x150930B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150930B8: lwc1        $f0, -0x2194($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2194);
    // 0x150930BC: lw          $t9, -0x19D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X19D8);
    // 0x150930C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150930C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150930C8: lwc1        $f8, 0x30($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X30);
    // 0x150930CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150930D0: lwc1        $f18, -0x1E4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1E4);
    // 0x150930D4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150930D8: lh          $t7, 0x20C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X20C);
    // 0x150930DC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150930E0: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x150930E4: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x150930E8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x150930EC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x150930F0: subu        $s3, $t6, $t7
    ctx->r19 = SUB32(ctx->r14, ctx->r15);
    // 0x150930F4: sll         $t9, $s3, 2
    ctx->r25 = S32(ctx->r19 << 2);
    // 0x150930F8: bc1t        L_1509311C
    if (c1cs) {
        // 0x150930FC: or          $s3, $t9, $zero
        ctx->r19 = ctx->r25 | 0;
            goto L_1509311C;
    }
    // 0x150930FC: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
    // 0x15093100: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15093104: lwc1        $f4, -0x2190($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2190);
    // 0x15093108: addiu       $t8, $zero, 0x63
    ctx->r24 = ADD32(0, 0X63);
    // 0x1509310C: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
    // 0x15093110: mul.s       $f20, $f0, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15093114: b           L_15093128
    // 0x15093118: sw          $t8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r24;
        goto L_15093128;
    // 0x15093118: sw          $t8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r24;
L_1509311C:
    // 0x1509311C: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x15093120: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x15093124: sw          $t6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r14;
L_15093128:
    // 0x15093128: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x1509312C: lhu         $t7, -0x244($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X244);
    // 0x15093130: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15093134: andi        $t9, $t7, 0x40
    ctx->r25 = ctx->r15 & 0X40;
    // 0x15093138: beq         $t9, $zero, L_15093148
    if (ctx->r25 == 0) {
        // 0x1509313C: lui         $s1, 0x0
        ctx->r17 = S32(0X0 << 16);
            goto L_15093148;
    }
    // 0x1509313C: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x15093140: b           L_15093150
    // 0x15093144: addiu       $s1, $s1, 0xCF2
    ctx->r17 = ADD32(ctx->r17, 0XCF2);
        goto L_15093150;
    // 0x15093144: addiu       $s1, $s1, 0xCF2
    ctx->r17 = ADD32(ctx->r17, 0XCF2);
L_15093148:
    // 0x15093148: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x1509314C: addiu       $s1, $s1, 0xCF1
    ctx->r17 = ADD32(ctx->r17, 0XCF1);
L_15093150:
    // 0x15093150: jal         0x1510D0EC
    // 0x15093154: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_15;
    // 0x15093154: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x15093158: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1509315C: lui         $t8, 0xFD70
    ctx->r24 = S32(0XFD70 << 16);
    // 0x15093160: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x15093164: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x15093168: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1509316C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15093170: lui         $t7, 0x709
    ctx->r15 = S32(0X709 << 16);
    // 0x15093174: ori         $t7, $t7, 0x8260
    ctx->r15 = ctx->r15 | 0X8260;
    // 0x15093178: lui         $t6, 0xF570
    ctx->r14 = S32(0XF570 << 16);
    // 0x1509317C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x15093180: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x15093184: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15093188: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1509318C: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x15093190: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x15093194: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x15093198: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1509319C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x150931A0: lui         $t6, 0x77F
    ctx->r14 = S32(0X77F << 16);
    // 0x150931A4: ori         $t6, $t6, 0xF000
    ctx->r14 = ctx->r14 | 0XF000;
    // 0x150931A8: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x150931AC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x150931B0: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x150931B4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150931B8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x150931BC: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x150931C0: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x150931C4: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x150931C8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150931CC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150931D0: lui         $t9, 0xF568
    ctx->r25 = S32(0XF568 << 16);
    // 0x150931D4: lui         $t8, 0x9
    ctx->r24 = S32(0X9 << 16);
    // 0x150931D8: ori         $t8, $t8, 0x8260
    ctx->r24 = ctx->r24 | 0X8260;
    // 0x150931DC: ori         $t9, $t9, 0x1000
    ctx->r25 = ctx->r25 | 0X1000;
    // 0x150931E0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x150931E4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x150931E8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150931EC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150931F0: lui         $t7, 0xF
    ctx->r15 = S32(0XF << 16);
    // 0x150931F4: ori         $t7, $t7, 0xC0FC
    ctx->r15 = ctx->r15 | 0XC0FC;
    // 0x150931F8: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x150931FC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x15093200: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x15093204: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15093208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1509320C: lui         $t9, 0xEF00
    ctx->r25 = S32(0XEF00 << 16);
    // 0x15093210: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x15093214: ori         $t8, $t8, 0x4244
    ctx->r24 = ctx->r24 | 0X4244;
    // 0x15093218: ori         $t9, $t9, 0x2C3F
    ctx->r25 = ctx->r25 | 0X2C3F;
    // 0x1509321C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x15093220: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x15093224: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15093228: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x1509322C: lb          $t6, -0x270($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X270);
    // 0x15093230: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x15093234: addiu       $s6, $s6, -0x274
    ctx->r22 = ADD32(ctx->r22, -0X274);
    // 0x15093238: blez        $t6, L_150937A8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x1509323C: sll         $a0, $s7, 16
        ctx->r4 = S32(ctx->r23 << 16);
            goto L_150937A8;
    }
    // 0x1509323C: sll         $a0, $s7, 16
    ctx->r4 = S32(ctx->r23 << 16);
L_15093240:
    // 0x15093240: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15093244: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x15093248: jal         0x150859AC
    // 0x1509324C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_150859AC(rdram, ctx);
        goto after_16;
    // 0x1509324C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_16:
    // 0x15093250: blez        $v0, L_15093790
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15093254: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_15093790;
    }
    // 0x15093254: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15093258: lw          $t9, -0x19D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X19D8);
    // 0x1509325C: sll         $t8, $s7, 2
    ctx->r24 = S32(ctx->r23 << 2);
    // 0x15093260: subu        $t8, $t8, $s7
    ctx->r24 = SUB32(ctx->r24, ctx->r23);
    // 0x15093264: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x15093268: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x1509326C: lwc1        $f6, 0x24($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X24);
    // 0x15093270: lh          $t8, 0x1FC($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1FC);
    // 0x15093274: lh          $t7, 0x1F6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1F6);
    // 0x15093278: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1509327C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15093280: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15093284: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15093288: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x1509328C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15093290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15093294: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x15093298: addu        $s5, $t6, $t7
    ctx->r21 = ADD32(ctx->r14, ctx->r15);
    // 0x1509329C: sll         $t8, $s5, 2
    ctx->r24 = S32(ctx->r21 << 2);
    // 0x150932A0: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
    // 0x150932A4: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x150932A8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x150932AC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x150932B0: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x150932B4: addiu       $t7, $zero, -0x80
    ctx->r15 = ADD32(0, -0X80);
    // 0x150932B8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x150932BC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x150932C0: lui         $t8, 0xFC12
    ctx->r24 = S32(0XFC12 << 16);
    // 0x150932C4: lui         $t9, 0xFF37
    ctx->r25 = S32(0XFF37 << 16);
    // 0x150932C8: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x150932CC: ori         $t8, $t8, 0x9A25
    ctx->r24 = ctx->r24 | 0X9A25;
    // 0x150932D0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x150932D4: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x150932D8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150932DC: lh          $a2, 0x20C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20C);
    // 0x150932E0: lw          $a3, 0xF8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XF8);
    // 0x150932E4: lw          $a1, 0x218($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X218);
    // 0x150932E8: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x150932EC: subu        $t0, $s3, $t6
    ctx->r8 = SUB32(ctx->r19, ctx->r14);
    // 0x150932F0: subu        $t1, $s5, $t6
    ctx->r9 = SUB32(ctx->r21, ctx->r14);
    // 0x150932F4: or          $t2, $t0, $zero
    ctx->r10 = ctx->r8 | 0;
    // 0x150932F8: or          $t5, $t1, $zero
    ctx->r13 = ctx->r9 | 0;
    // 0x150932FC: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x15093300: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x15093304: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x15093308: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x1509330C: addu        $t6, $t7, $t2
    ctx->r14 = ADD32(ctx->r15, ctx->r10);
    // 0x15093310: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x15093314: or          $t3, $t9, $t8
    ctx->r11 = ctx->r25 | ctx->r24;
    // 0x15093318: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1509331C: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x15093320: blez        $t8, L_15093338
    if (SIGNED(ctx->r24) <= 0) {
        // 0x15093324: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_15093338;
    }
    // 0x15093324: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15093328: addu        $a0, $a3, $t0
    ctx->r4 = ADD32(ctx->r7, ctx->r8);
    // 0x1509332C: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x15093330: b           L_1509333C
    // 0x15093334: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
        goto L_1509333C;
    // 0x15093334: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
L_15093338:
    // 0x15093338: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1509333C:
    // 0x1509333C: addu        $v0, $a3, $t1
    ctx->r2 = ADD32(ctx->r7, ctx->r9);
    // 0x15093340: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x15093344: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15093348: blez        $t8, L_15093358
    if (SIGNED(ctx->r24) <= 0) {
        // 0x1509334C: andi        $t7, $a0, 0xFFF
        ctx->r15 = ctx->r4 & 0XFFF;
            goto L_15093358;
    }
    // 0x1509334C: andi        $t7, $a0, 0xFFF
    ctx->r15 = ctx->r4 & 0XFFF;
    // 0x15093350: b           L_1509335C
    // 0x15093354: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_1509335C;
    // 0x15093354: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_15093358:
    // 0x15093358: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1509335C:
    // 0x1509335C: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x15093360: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x15093364: or          $t6, $t9, $fp
    ctx->r14 = ctx->r25 | ctx->r30;
    // 0x15093368: sll         $a1, $t2, 16
    ctx->r5 = S32(ctx->r10 << 16);
    // 0x1509336C: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x15093370: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x15093374: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x15093378: blez        $t7, L_15093388
    if (SIGNED(ctx->r15) <= 0) {
        // 0x1509337C: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_15093388;
    }
    // 0x1509337C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x15093380: b           L_1509338C
    // 0x15093384: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_1509338C;
    // 0x15093384: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_15093388:
    // 0x15093388: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1509338C:
    // 0x1509338C: sll         $a2, $t5, 16
    ctx->r6 = S32(ctx->r13 << 16);
    // 0x15093390: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x15093394: blez        $t6, L_150933A4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15093398: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_150933A4;
    }
    // 0x15093398: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1509339C: b           L_150933A8
    // 0x150933A0: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
        goto L_150933A8;
    // 0x150933A0: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_150933A4:
    // 0x150933A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150933A8:
    // 0x150933A8: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x150933AC: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x150933B0: andi        $t8, $v1, 0xFFF
    ctx->r24 = ctx->r3 & 0XFFF;
    // 0x150933B4: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x150933B8: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x150933BC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x150933C0: lui         $t9, 0xE100
    ctx->r25 = S32(0XE100 << 16);
    // 0x150933C4: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x150933C8: bgez        $a1, L_15093430
    if (SIGNED(ctx->r5) >= 0) {
        // 0x150933CC: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_15093430;
    }
    // 0x150933CC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150933D0: lh          $v1, 0x21A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X21A);
    // 0x150933D4: bgez        $v1, L_15093404
    if (SIGNED(ctx->r3) >= 0) {
        // 0x150933D8: nop
    
            goto L_15093404;
    }
    // 0x150933D8: nop

    // 0x150933DC: multu       $a1, $v1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150933E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150933E4: mflo        $v0
    ctx->r2 = lo;
    // 0x150933E8: sra         $t8, $v0, 7
    ctx->r24 = S32(SIGNED(ctx->r2) >> 7);
    // 0x150933EC: blez        $t8, L_150933FC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x150933F0: nop
    
            goto L_150933FC;
    }
    // 0x150933F0: nop

    // 0x150933F4: b           L_15093434
    // 0x150933F8: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
        goto L_15093434;
    // 0x150933F8: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
L_150933FC:
    // 0x150933FC: b           L_15093434
    // 0x15093400: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
        goto L_15093434;
    // 0x15093400: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
L_15093404:
    // 0x15093404: multu       $a1, $v1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15093408: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1509340C: mflo        $v0
    ctx->r2 = lo;
    // 0x15093410: sra         $t7, $v0, 7
    ctx->r15 = S32(SIGNED(ctx->r2) >> 7);
    // 0x15093414: bgez        $t7, L_15093424
    if (SIGNED(ctx->r15) >= 0) {
        // 0x15093418: nop
    
            goto L_15093424;
    }
    // 0x15093418: nop

    // 0x1509341C: b           L_15093424
    // 0x15093420: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_15093424;
    // 0x15093420: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_15093424:
    // 0x15093424: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15093428: b           L_15093434
    // 0x1509342C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_15093434;
    // 0x1509342C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_15093430:
    // 0x15093430: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15093434:
    // 0x15093434: bgez        $t5, L_1509349C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x15093438: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_1509349C;
    }
    // 0x15093438: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1509343C: lh          $v1, 0x21A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X21A);
    // 0x15093440: bgez        $v1, L_15093470
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15093444: nop
    
            goto L_15093470;
    }
    // 0x15093444: nop

    // 0x15093448: multu       $a2, $v1
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1509344C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15093450: mflo        $v0
    ctx->r2 = lo;
    // 0x15093454: sra         $t6, $v0, 7
    ctx->r14 = S32(SIGNED(ctx->r2) >> 7);
    // 0x15093458: blez        $t6, L_15093468
    if (SIGNED(ctx->r14) <= 0) {
        // 0x1509345C: nop
    
            goto L_15093468;
    }
    // 0x1509345C: nop

    // 0x15093460: b           L_150934A0
    // 0x15093464: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
        goto L_150934A0;
    // 0x15093464: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_15093468:
    // 0x15093468: b           L_150934A0
    // 0x1509346C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_150934A0;
    // 0x1509346C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_15093470:
    // 0x15093470: multu       $a2, $v1
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15093474: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15093478: mflo        $v0
    ctx->r2 = lo;
    // 0x1509347C: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x15093480: bgez        $t9, L_15093490
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15093484: nop
    
            goto L_15093490;
    }
    // 0x15093484: nop

    // 0x15093488: b           L_15093490
    // 0x1509348C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_15093490;
    // 0x1509348C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_15093490:
    // 0x15093490: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x15093494: b           L_150934A0
    // 0x15093498: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_150934A0;
    // 0x15093498: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_1509349C:
    // 0x1509349C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150934A0:
    // 0x150934A0: negu        $t8, $v1
    ctx->r24 = SUB32(0, ctx->r3);
    // 0x150934A4: andi        $t7, $t8, 0xFFFF
    ctx->r15 = ctx->r24 & 0XFFFF;
    // 0x150934A8: negu        $t9, $t0
    ctx->r25 = SUB32(0, ctx->r8);
    // 0x150934AC: sll         $t8, $t9, 16
    ctx->r24 = S32(ctx->r25 << 16);
    // 0x150934B0: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x150934B4: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x150934B8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150934BC: lui         $t9, 0xF100
    ctx->r25 = S32(0XF100 << 16);
    // 0x150934C0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x150934C4: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x150934C8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150934CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150934D0: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x150934D4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x150934D8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x150934DC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150934E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150934E4: lui         $t8, 0xFC62
    ctx->r24 = S32(0XFC62 << 16);
    // 0x150934E8: ori         $t8, $t8, 0xFEC5
    ctx->r24 = ctx->r24 | 0XFEC5;
    // 0x150934EC: addiu       $t6, $zero, -0x403
    ctx->r14 = ADD32(0, -0X403);
    // 0x150934F0: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x150934F4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x150934F8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150934FC: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x15093500: addiu       $s2, $s2, -0x3D30
    ctx->r18 = ADD32(ctx->r18, -0X3D30);
L_15093504:
    // 0x15093504: beql        $s1, $s7, L_15093540
    if (ctx->r17 == ctx->r23) {
        // 0x15093508: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15093540;
    }
    goto skip_12;
    // 0x15093508: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_12:
    // 0x1509350C: lb          $t9, 0x0($s6)
    ctx->r25 = MEM_B(ctx->r22, 0X0);
    // 0x15093510: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x15093514: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15093518: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1509351C: beq         $at, $zero, L_15093534
    if (ctx->r1 == 0) {
        // 0x15093520: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_15093534;
    }
    // 0x15093520: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x15093524: jal         0x150859AC
    // 0x15093528: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_150859AC(rdram, ctx);
        goto after_17;
    // 0x15093528: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_17:
    // 0x1509352C: bgtzl       $v0, L_15093540
    if (SIGNED(ctx->r2) > 0) {
        // 0x15093530: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15093540;
    }
    goto skip_13;
    // 0x15093530: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_13:
L_15093534:
    // 0x15093534: lb          $t8, 0x328($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X328);
    // 0x15093538: beq         $t8, $zero, L_15093780
    if (ctx->r24 == 0) {
        // 0x1509353C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15093780;
    }
    // 0x1509353C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15093540:
    // 0x15093540: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x15093544: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x15093548: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1509354C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15093550: mtc1        $s5, $f10
    ctx->f10.u32l = ctx->r21;
    // 0x15093554: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x15093558: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1509355C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15093560: lwc1        $f18, -0x218C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X218C);
    // 0x15093564: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15093568: lwc1        $f8, -0x2188($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2188);
    // 0x1509356C: lui         $t7, 0xFF
    ctx->r15 = S32(0XFF << 16);
    // 0x15093570: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15093574: ori         $t7, $t7, 0xFF
    ctx->r15 = ctx->r15 | 0XFF;
    // 0x15093578: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1509357C: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x15093580: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15093584: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15093588: bne         $s1, $s7, L_150935A4
    if (ctx->r17 != ctx->r23) {
        // 0x1509358C: add.s       $f14, $f6, $f8
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
            goto L_150935A4;
    }
    // 0x1509358C: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15093590: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15093594: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15093598: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x1509359C: b           L_150935F0
    // 0x150935A0: lwc1        $f10, 0x14($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X14);
        goto L_150935F0;
    // 0x150935A0: lwc1        $f10, 0x14($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X14);
L_150935A4:
    // 0x150935A4: lb          $t8, 0x0($s6)
    ctx->r24 = MEM_B(ctx->r22, 0X0);
    // 0x150935A8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150935AC: lui         $t7, 0xFB00
    ctx->r15 = S32(0XFB00 << 16);
    // 0x150935B0: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x150935B4: beq         $at, $zero, L_150935E0
    if (ctx->r1 == 0) {
        // 0x150935B8: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_150935E0;
    }
    // 0x150935B8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150935BC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150935C0: lui         $t9, 0xFF00
    ctx->r25 = S32(0XFF00 << 16);
    // 0x150935C4: ori         $t9, $t9, 0xFF
    ctx->r25 = ctx->r25 | 0XFF;
    // 0x150935C8: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x150935CC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x150935D0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x150935D4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150935D8: b           L_150935F0
    // 0x150935DC: lwc1        $f10, 0x14($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X14);
        goto L_150935F0;
    // 0x150935DC: lwc1        $f10, 0x14($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X14);
L_150935E0:
    // 0x150935E0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150935E4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x150935E8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x150935EC: lwc1        $f10, 0x14($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X14);
L_150935F0:
    // 0x150935F0: lwc1        $f16, 0x1C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x150935F4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150935F8: mul.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x150935FC: nop

    // 0x15093600: mul.s       $f2, $f16, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x15093604: nop

    // 0x15093608: trunc.w.s   $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x1509360C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x15093610: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15093614: trunc.w.s   $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x15093618: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x1509361C: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x15093620: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15093624: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15093628: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x1509362C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15093630: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x15093634: nop

    // 0x15093638: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1509363C: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x15093640: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x15093644: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15093648: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1509364C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15093650: nop

    // 0x15093654: addu        $v0, $a2, $s4
    ctx->r2 = ADD32(ctx->r6, ctx->r20);
    // 0x15093658: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x1509365C: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x15093660: sra         $t6, $t8, 16
    ctx->r14 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15093664: blez        $t6, L_15093674
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15093668: addu        $v0, $a1, $s4
        ctx->r2 = ADD32(ctx->r5, ctx->r20);
            goto L_15093674;
    }
    // 0x15093668: addu        $v0, $a1, $s4
    ctx->r2 = ADD32(ctx->r5, ctx->r20);
    // 0x1509366C: b           L_15093674
    // 0x15093670: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_15093674;
    // 0x15093670: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_15093674:
    // 0x15093674: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x15093678: sra         $t9, $t6, 16
    ctx->r25 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1509367C: blez        $t9, L_1509368C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x15093680: andi        $t6, $a0, 0xFFF
        ctx->r14 = ctx->r4 & 0XFFF;
            goto L_1509368C;
    }
    // 0x15093680: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x15093684: b           L_1509368C
    // 0x15093688: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_1509368C;
    // 0x15093688: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_1509368C:
    // 0x1509368C: andi        $t7, $v1, 0xFFF
    ctx->r15 = ctx->r3 & 0XFFF;
    // 0x15093690: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x15093694: or          $t8, $t7, $fp
    ctx->r24 = ctx->r15 | ctx->r30;
    // 0x15093698: subu        $v0, $a2, $s4
    ctx->r2 = SUB32(ctx->r6, ctx->r20);
    // 0x1509369C: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x150936A0: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x150936A4: sra         $t8, $t6, 16
    ctx->r24 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150936A8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x150936AC: blez        $t8, L_150936BC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x150936B0: sw          $t7, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r15;
            goto L_150936BC;
    }
    // 0x150936B0: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x150936B4: b           L_150936C0
    // 0x150936B8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_150936C0;
    // 0x150936B8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_150936BC:
    // 0x150936BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_150936C0:
    // 0x150936C0: subu        $t1, $a1, $s4
    ctx->r9 = SUB32(ctx->r5, ctx->r20);
    // 0x150936C4: sll         $a2, $t1, 16
    ctx->r6 = S32(ctx->r9 << 16);
    // 0x150936C8: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x150936CC: blez        $t9, L_150936DC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x150936D0: or          $a2, $t9, $zero
        ctx->r6 = ctx->r25 | 0;
            goto L_150936DC;
    }
    // 0x150936D0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x150936D4: b           L_150936E0
    // 0x150936D8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_150936E0;
    // 0x150936D8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_150936DC:
    // 0x150936DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150936E0:
    // 0x150936E0: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x150936E4: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x150936E8: andi        $t7, $v1, 0xFFF
    ctx->r15 = ctx->r3 & 0XFFF;
    // 0x150936EC: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x150936F0: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x150936F4: lui         $t6, 0xE100
    ctx->r14 = S32(0XE100 << 16);
    // 0x150936F8: bgez        $v0, L_15093720
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150936FC: sw          $t6, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r14;
            goto L_15093720;
    }
    // 0x150936FC: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x15093700: sll         $a0, $v0, 10
    ctx->r4 = S32(ctx->r2 << 10);
    // 0x15093704: sra         $t7, $a0, 7
    ctx->r15 = S32(SIGNED(ctx->r4) >> 7);
    // 0x15093708: bgez        $t7, L_15093718
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1509370C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15093718;
    }
    // 0x1509370C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15093710: b           L_15093724
    // 0x15093714: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
        goto L_15093724;
    // 0x15093714: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_15093718:
    // 0x15093718: b           L_15093724
    // 0x1509371C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_15093724;
    // 0x1509371C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_15093720:
    // 0x15093720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_15093724:
    // 0x15093724: bgez        $t1, L_1509374C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x15093728: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1509374C;
    }
    // 0x15093728: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1509372C: sll         $v0, $a2, 10
    ctx->r2 = S32(ctx->r6 << 10);
    // 0x15093730: sra         $t8, $v0, 7
    ctx->r24 = S32(SIGNED(ctx->r2) >> 7);
    // 0x15093734: bgez        $t8, L_15093744
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15093738: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15093744;
    }
    // 0x15093738: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1509373C: b           L_1509374C
    // 0x15093740: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_1509374C;
    // 0x15093740: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_15093744:
    // 0x15093744: b           L_1509374C
    // 0x15093748: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_1509374C;
    // 0x15093748: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_1509374C:
    // 0x1509374C: negu        $t9, $v1
    ctx->r25 = SUB32(0, ctx->r3);
    // 0x15093750: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x15093754: negu        $t8, $a1
    ctx->r24 = SUB32(0, ctx->r5);
    // 0x15093758: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x1509375C: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x15093760: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x15093764: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15093768: lui         $t6, 0x400
    ctx->r14 = S32(0X400 << 16);
    // 0x1509376C: ori         $t6, $t6, 0x400
    ctx->r14 = ctx->r14 | 0X400;
    // 0x15093770: lui         $t8, 0xF100
    ctx->r24 = S32(0XF100 << 16);
    // 0x15093774: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15093778: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1509377C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_15093780:
    // 0x15093780: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15093784: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x15093788: bne         $s1, $at, L_15093504
    if (ctx->r17 != ctx->r1) {
        // 0x1509378C: addiu       $s2, $s2, 0x32C
        ctx->r18 = ADD32(ctx->r18, 0X32C);
            goto L_15093504;
    }
    // 0x1509378C: addiu       $s2, $s2, 0x32C
    ctx->r18 = ADD32(ctx->r18, 0X32C);
L_15093790:
    // 0x15093790: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15093794: lb          $t9, -0x270($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X270);
    // 0x15093798: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x1509379C: slt         $at, $s7, $t9
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x150937A0: bnel        $at, $zero, L_15093240
    if (ctx->r1 != 0) {
        // 0x150937A4: sll         $a0, $s7, 16
        ctx->r4 = S32(ctx->r23 << 16);
            goto L_15093240;
    }
    goto skip_14;
    // 0x150937A4: sll         $a0, $s7, 16
    ctx->r4 = S32(ctx->r23 << 16);
    skip_14:
L_150937A8:
    // 0x150937A8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150937AC: lbu         $v0, -0x153F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X153F);
L_150937B0:
    // 0x150937B0: bne         $v0, $zero, L_150937E0
    if (ctx->r2 != 0) {
        // 0x150937B4: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_150937E0;
    }
    // 0x150937B4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x150937B8: lhu         $t7, -0x240($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X240);
    // 0x150937BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150937C0: lw          $a1, 0x218($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X218);
    // 0x150937C4: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x150937C8: beq         $t8, $zero, L_150937E0
    if (ctx->r24 == 0) {
        // 0x150937CC: addiu       $a2, $sp, 0x1CC
        ctx->r6 = ADD32(ctx->r29, 0X1CC);
            goto L_150937E0;
    }
    // 0x150937CC: addiu       $a2, $sp, 0x1CC
    ctx->r6 = ADD32(ctx->r29, 0X1CC);
    // 0x150937D0: addiu       $a3, $zero, 0x2C30
    ctx->r7 = ADD32(0, 0X2C30);
    // 0x150937D4: jal         0x15093B58
    // 0x150937D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_15093B58(rdram, ctx);
        goto after_18;
    // 0x150937D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x150937DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_150937E0:
    // 0x150937E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150937E4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x150937E8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150937EC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150937F0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x150937F4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x150937F8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x150937FC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x15093800: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x15093804: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x15093808: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x1509380C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x15093810: jr          $ra
    // 0x15093814: addiu       $sp, $sp, 0x278
    ctx->r29 = ADD32(ctx->r29, 0X278);
    return;
    return;
    // 0x15093814: addiu       $sp, $sp, 0x278
    ctx->r29 = ADD32(ctx->r29, 0X278);
;}
RECOMP_FUNC void func_150BF760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BF760: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150BF764: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150BF768: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x150BF76C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150BF770: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150BF774: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x150BF778: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150BF77C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150BF780: bne         $v0, $t6, L_150BF794
    if (ctx->r2 != ctx->r14) {
        // 0x150BF784: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_150BF794;
    }
    // 0x150BF784: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x150BF788: lbu         $t7, 0x35E8($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35E8);
    // 0x150BF78C: bnel        $v0, $t7, L_150BFA70
    if (ctx->r2 != ctx->r15) {
        // 0x150BF790: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150BFA70;
    }
    goto skip_0;
    // 0x150BF790: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_150BF794:
    // 0x150BF794: jal         0x1511B51C
    // 0x150BF798: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_1511B51C(rdram, ctx);
        goto after_0;
    // 0x150BF798: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x150BF79C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x150BF7A0: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150BF7A4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x150BF7A8: lw          $t9, 0x124($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X124);
    // 0x150BF7AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150BF7B0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150BF7B4: bne         $t9, $zero, L_150BF7E4
    if (ctx->r25 != 0) {
        // 0x150BF7B8: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_150BF7E4;
    }
    // 0x150BF7B8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x150BF7BC: addiu       $t0, $zero, -0x8
    ctx->r8 = ADD32(0, -0X8);
    // 0x150BF7C0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150BF7C4: lw          $a1, 0x2B8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B8);
    // 0x150BF7C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150BF7CC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150BF7D0: jal         0x15195FB0
    // 0x150BF7D4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_15195FB0(rdram, ctx);
        goto after_1;
    // 0x150BF7D4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x150BF7D8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x150BF7DC: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150BF7E0: sw          $v0, 0x124($a2)
    MEM_W(0X124, ctx->r6) = ctx->r2;
L_150BF7E4:
    // 0x150BF7E4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x150BF7E8: jal         0x15083E90
    // 0x150BF7EC: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_15083E90(rdram, ctx);
        goto after_2;
    // 0x150BF7EC: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x150BF7F0: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x150BF7F4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150BF7F8: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150BF7FC: lbu         $a1, 0x73($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X73);
    // 0x150BF800: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150BF804: andi        $t1, $a1, 0x3
    ctx->r9 = ctx->r5 & 0X3;
    // 0x150BF808: beq         $v0, $zero, L_150BF82C
    if (ctx->r2 == 0) {
        // 0x150BF80C: or          $a1, $t1, $zero
        ctx->r5 = ctx->r9 | 0;
            goto L_150BF82C;
    }
    // 0x150BF80C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x150BF810: lw          $v1, 0x2D0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X2D0);
    // 0x150BF814: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150BF818: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BF81C: lwc1        $f4, 0x18($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X18);
    // 0x150BF820: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150BF824: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150BF828: div.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
L_150BF82C:
    // 0x150BF82C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150BF830: bne         $a1, $at, L_150BF8F4
    if (ctx->r5 != ctx->r1) {
        // 0x150BF834: swc1        $f16, 0xA8($a2)
        MEM_W(0XA8, ctx->r6) = ctx->f16.u32l;
            goto L_150BF8F4;
    }
    // 0x150BF834: swc1        $f16, 0xA8($a2)
    MEM_W(0XA8, ctx->r6) = ctx->f16.u32l;
    // 0x150BF838: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x150BF83C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BF840: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BF844: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x150BF848: nop

    // 0x150BF84C: bc1f        L_150BF890
    if (!c1cs) {
        // 0x150BF850: nop
    
            goto L_150BF890;
    }
    // 0x150BF850: nop

    // 0x150BF854: lwc1        $f4, 0x124($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X124);
    // 0x150BF858: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BF85C: lwc1        $f10, 0x128($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X128);
    // 0x150BF860: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x150BF864: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x150BF868: mul.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150BF86C: jal         0x15047D60
    // 0x150BF870: nop

    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x150BF870: nop

    after_3:
    // 0x150BF874: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150BF878: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150BF87C: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x150BF880: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x150BF884: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x150BF888: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x150BF88C: swc1        $f18, 0xA8($a2)
    MEM_W(0XA8, ctx->r6) = ctx->f18.u32l;
L_150BF890:
    // 0x150BF890: bnel        $a0, $zero, L_150BF8D8
    if (ctx->r4 != 0) {
        // 0x150BF894: lbu         $t5, 0x232($a0)
        ctx->r13 = MEM_BU(ctx->r4, 0X232);
            goto L_150BF8D8;
    }
    goto skip_1;
    // 0x150BF894: lbu         $t5, 0x232($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X232);
    skip_1:
    // 0x150BF898: jal         0x15083E0C
    // 0x150BF89C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_15083E0C(rdram, ctx);
        goto after_4;
    // 0x150BF89C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_4:
    // 0x150BF8A0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150BF8A4: lw          $t2, 0x20FC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X20FC);
    // 0x150BF8A8: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x150BF8AC: subu        $t3, $t3, $v0
    ctx->r11 = SUB32(ctx->r11, ctx->r2);
    // 0x150BF8B0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x150BF8B4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x150BF8B8: sb          $zero, 0x2($t4)
    MEM_B(0X2, ctx->r12) = 0;
    // 0x150BF8BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150BF8C0: jal         0x150825C0
    // 0x150BF8C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150825C0(rdram, ctx);
        goto after_5;
    // 0x150BF8C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x150BF8C8: jal         0x15083E90
    // 0x150BF8CC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_15083E90(rdram, ctx);
        goto after_6;
    // 0x150BF8CC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_6:
    // 0x150BF8D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150BF8D4: lbu         $t5, 0x232($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X232);
L_150BF8D8:
    // 0x150BF8D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150BF8DC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150BF8E0: beql        $t5, $at, L_150BFA70
    if (ctx->r13 == ctx->r1) {
        // 0x150BF8E4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150BFA70;
    }
    goto skip_2;
    // 0x150BF8E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x150BF8E8: sb          $t6, 0x232($a0)
    MEM_B(0X232, ctx->r4) = ctx->r14;
    // 0x150BF8EC: b           L_150BFA6C
    // 0x150BF8F0: sw          $zero, 0x218($a0)
    MEM_W(0X218, ctx->r4) = 0;
        goto L_150BFA6C;
    // 0x150BF8F0: sw          $zero, 0x218($a0)
    MEM_W(0X218, ctx->r4) = 0;
L_150BF8F4:
    // 0x150BF8F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150BF8F8: bne         $a1, $at, L_150BF930
    if (ctx->r5 != ctx->r1) {
        // 0x150BF8FC: nop
    
            goto L_150BF930;
    }
    // 0x150BF8FC: nop

    // 0x150BF900: beq         $v0, $zero, L_150BFA6C
    if (ctx->r2 == 0) {
        // 0x150BF904: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150BFA6C;
    }
    // 0x150BF904: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150BF908: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BF90C: nop

    // 0x150BF910: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x150BF914: nop

    // 0x150BF918: bc1fl       L_150BFA70
    if (!c1cs) {
        // 0x150BF91C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150BFA70;
    }
    goto skip_3;
    // 0x150BF91C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x150BF920: jal         0x15060F28
    // 0x150BF924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_7;
    // 0x150BF924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x150BF928: b           L_150BFA70
    // 0x150BF92C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_150BFA70;
    // 0x150BF92C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150BF930:
    // 0x150BF930: bne         $a1, $zero, L_150BF9B8
    if (ctx->r5 != 0) {
        // 0x150BF934: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_150BF9B8;
    }
    // 0x150BF934: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150BF938: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150BF93C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BF940: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BF944: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x150BF948: nop

    // 0x150BF94C: bc1f        L_150BF988
    if (!c1cs) {
        // 0x150BF950: nop
    
            goto L_150BF988;
    }
    // 0x150BF950: nop

    // 0x150BF954: lwc1        $f0, 0x12C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X12C);
    // 0x150BF958: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x150BF95C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x150BF960: mul.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150BF964: jal         0x15047D60
    // 0x150BF968: sub.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f0.fl;
    sinf_recomp(rdram, ctx);
        goto after_8;
    // 0x150BF968: sub.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f0.fl;
    after_8:
    // 0x150BF96C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150BF970: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BF974: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x150BF978: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x150BF97C: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150BF980: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150BF984: swc1        $f16, 0xA8($a2)
    MEM_W(0XA8, ctx->r6) = ctx->f16.u32l;
L_150BF988:
    // 0x150BF988: beq         $a0, $zero, L_150BFA6C
    if (ctx->r4 == 0) {
        // 0x150BF98C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150BFA6C;
    }
    // 0x150BF98C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150BF990: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BF994: nop

    // 0x150BF998: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x150BF99C: nop

    // 0x150BF9A0: bc1fl       L_150BFA70
    if (!c1cs) {
        // 0x150BF9A4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150BFA70;
    }
    goto skip_4;
    // 0x150BF9A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x150BF9A8: jal         0x15060F28
    // 0x150BF9AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_9;
    // 0x150BF9AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x150BF9B0: b           L_150BFA70
    // 0x150BF9B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_150BFA70;
    // 0x150BF9B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150BF9B8:
    // 0x150BF9B8: bne         $a1, $at, L_150BFA6C
    if (ctx->r5 != ctx->r1) {
        // 0x150BF9BC: lui         $at, 0x3E80
        ctx->r1 = S32(0X3E80 << 16);
            goto L_150BFA6C;
    }
    // 0x150BF9BC: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150BF9C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BF9C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BF9C8: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x150BF9CC: nop

    // 0x150BF9D0: bc1f        L_150BFA04
    if (!c1cs) {
        // 0x150BF9D4: nop
    
            goto L_150BFA04;
    }
    // 0x150BF9D4: nop

    // 0x150BF9D8: lwc1        $f0, 0x130($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X130);
    // 0x150BF9DC: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x150BF9E0: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150BF9E4: jal         0x15047D60
    // 0x150BF9E8: sub.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f0.fl;
    sinf_recomp(rdram, ctx);
        goto after_10;
    // 0x150BF9E8: sub.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f0.fl;
    after_10:
    // 0x150BF9EC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150BF9F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BF9F4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x150BF9F8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x150BF9FC: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150BFA00: swc1        $f8, 0xA8($a2)
    MEM_W(0XA8, ctx->r6) = ctx->f8.u32l;
L_150BFA04:
    // 0x150BFA04: bne         $a0, $zero, L_150BFA48
    if (ctx->r4 != 0) {
        // 0x150BFA08: nop
    
            goto L_150BFA48;
    }
    // 0x150BFA08: nop

    // 0x150BFA0C: jal         0x15083E0C
    // 0x150BFA10: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_15083E0C(rdram, ctx);
        goto after_11;
    // 0x150BFA10: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_11:
    // 0x150BFA14: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150BFA18: lw          $t7, 0x20FC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20FC);
    // 0x150BFA1C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x150BFA20: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x150BFA24: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x150BFA28: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x150BFA2C: sb          $zero, 0x2($t8)
    MEM_B(0X2, ctx->r24) = 0;
    // 0x150BFA30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150BFA34: jal         0x150825C0
    // 0x150BFA38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150825C0(rdram, ctx);
        goto after_12;
    // 0x150BFA38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x150BFA3C: jal         0x15083E90
    // 0x150BFA40: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_15083E90(rdram, ctx);
        goto after_13;
    // 0x150BFA40: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_13:
    // 0x150BFA44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_150BFA48:
    // 0x150BFA48: bnel        $a0, $zero, L_150BFA70
    if (ctx->r4 != 0) {
        // 0x150BFA4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150BFA70;
    }
    goto skip_5;
    // 0x150BFA4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x150BFA50: lbu         $t0, 0x232($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X232);
    // 0x150BFA54: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150BFA58: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x150BFA5C: beql        $t0, $at, L_150BFA70
    if (ctx->r8 == ctx->r1) {
        // 0x150BFA60: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150BFA70;
    }
    goto skip_6;
    // 0x150BFA60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x150BFA64: sb          $t1, 0x232($a0)
    MEM_B(0X232, ctx->r4) = ctx->r9;
    // 0x150BFA68: sw          $zero, 0x218($a0)
    MEM_W(0X218, ctx->r4) = 0;
L_150BFA6C:
    // 0x150BFA6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150BFA70:
    // 0x150BFA70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150BFA74: jr          $ra
    // 0x150BFA78: nop

    return;
    return;
    // 0x150BFA78: nop

;}
RECOMP_FUNC void func_151CEA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CEA20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151CEA24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151CEA28: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151CEA2C: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x151CEA30: lwc1        $f12, 0x40($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X40);
    // 0x151CEA34: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151CEA38: lwc1        $f2, 0x44($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X44);
    // 0x151CEA3C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151CEA40: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x151CEA44: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151CEA48: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151CEA4C: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x151CEA50: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x151CEA54: swc1        $f8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f8.u32l;
    // 0x151CEA58: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151CEA5C: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x151CEA60: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x151CEA64: mul.s       $f18, $f8, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x151CEA68: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x151CEA6C: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x151CEA70: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x151CEA74: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151CEA78: lwc1        $f18, 0x50($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X50);
    // 0x151CEA7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151CEA80: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151CEA84: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x151CEA88: swc1        $f4, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f4.u32l;
    // 0x151CEA8C: lwc1        $f6, 0x50($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X50);
    // 0x151CEA90: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x151CEA94: nop

    // 0x151CEA98: bc1f        L_151CEAA4
    if (!c1cs) {
        // 0x151CEA9C: nop
    
            goto L_151CEAA4;
    }
    // 0x151CEA9C: nop

    // 0x151CEAA0: swc1        $f16, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f16.u32l;
L_151CEAA4:
    // 0x151CEAA4: jr          $ra
    // 0x151CEAA8: nop

    return;
    return;
    // 0x151CEAA8: nop

;}
RECOMP_FUNC void func_1507E6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507E6B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507E6BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507E6C0: lbu         $t6, 0x1CA($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1CA);
    // 0x1507E6C4: bnel        $t6, $zero, L_1507E6D8
    if (ctx->r14 != 0) {
        // 0x1507E6C8: lbu         $t7, 0x70($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X70);
            goto L_1507E6D8;
    }
    goto skip_0;
    // 0x1507E6C8: lbu         $t7, 0x70($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X70);
    skip_0:
    // 0x1507E6CC: b           L_1507E72C
    // 0x1507E6D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507E72C;
    // 0x1507E6D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1507E6D4: lbu         $t7, 0x70($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X70);
L_1507E6D8:
    // 0x1507E6D8: lbu         $t8, 0x6F($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X6F);
    // 0x1507E6DC: bne         $t7, $t8, L_1507E6EC
    if (ctx->r15 != ctx->r24) {
        // 0x1507E6E0: nop
    
            goto L_1507E6EC;
    }
    // 0x1507E6E0: nop

    // 0x1507E6E4: b           L_1507E72C
    // 0x1507E6E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1507E72C;
    // 0x1507E6E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1507E6EC:
    // 0x1507E6EC: jal         0x150849A0
    // 0x1507E6F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150849A0(rdram, ctx);
        goto after_0;
    // 0x1507E6F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1507E6F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1507E6F8: addiu       $at, $zero, 0x52
    ctx->r1 = ADD32(0, 0X52);
    // 0x1507E6FC: bne         $v0, $zero, L_1507E718
    if (ctx->r2 != 0) {
        // 0x1507E700: lbu         $v1, 0x6F($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X6F);
            goto L_1507E718;
    }
    // 0x1507E700: lbu         $v1, 0x6F($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6F);
    // 0x1507E704: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x1507E708: bnel        $v1, $at, L_1507E72C
    if (ctx->r3 != ctx->r1) {
        // 0x1507E70C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1507E72C;
    }
    goto skip_1;
    // 0x1507E70C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x1507E710: b           L_1507E72C
    // 0x1507E714: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1507E72C;
    // 0x1507E714: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1507E718:
    // 0x1507E718: bnel        $v0, $at, L_1507E72C
    if (ctx->r2 != ctx->r1) {
        // 0x1507E71C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1507E72C;
    }
    goto skip_2;
    // 0x1507E71C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x1507E720: b           L_1507E72C
    // 0x1507E724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1507E72C;
    // 0x1507E724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1507E728: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507E72C:
    // 0x1507E72C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507E730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507E734: jr          $ra
    // 0x1507E738: nop

    return;
    return;
    // 0x1507E738: nop

;}
RECOMP_FUNC void func_1519E8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519E8CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1519E8D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519E8D4: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x1519E8D8: jal         0x1514EDF0
    // 0x1519E8DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1514EDF0(rdram, ctx);
        goto after_0;
    // 0x1519E8DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1519E8E0: jal         0x1514933C
    // 0x1519E8E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x1519E8E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1519E8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519E8EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1519E8F0: jr          $ra
    // 0x1519E8F4: nop

    return;
    return;
    // 0x1519E8F4: nop

;}
RECOMP_FUNC void func_1515F040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515F040: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515F044: lwc1        $f0, 0x6520($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6520);
    // 0x1515F048: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x1515F04C: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x1515F050: bc1fl       L_1515F064
    if (!c1cs) {
        // 0x1515F054: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_1515F064;
    }
    goto skip_0;
    // 0x1515F054: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x1515F058: b           L_1515F07C
    // 0x1515F05C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_1515F07C;
    // 0x1515F05C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x1515F060: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_1515F064:
    // 0x1515F064: nop

    // 0x1515F068: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x1515F06C: nop

    // 0x1515F070: bc1fl       L_1515F080
    if (!c1cs) {
        // 0x1515F074: lui         $at, 0x4780
        ctx->r1 = S32(0X4780 << 16);
            goto L_1515F080;
    }
    goto skip_1;
    // 0x1515F074: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    skip_1:
    // 0x1515F078: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_1515F07C:
    // 0x1515F07C: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
L_1515F080:
    // 0x1515F080: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1515F084: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1515F088: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x1515F08C: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x1515F090: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x1515F094: trunc.w.s   $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1515F098: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x1515F09C: nop

    // 0x1515F0A0: sw          $t7, -0x32F0($at)
    MEM_W(-0X32F0, ctx->r1) = ctx->r15;
    // 0x1515F0A4: jr          $ra
    // 0x1515F0A8: nop

    return;
    return;
    // 0x1515F0A8: nop

;}
RECOMP_FUNC void func_1506BE2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BE2C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506BE30: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506BE34: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506BE38: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506BE3C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1506BE40: nop

    // 0x1506BE44: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1506BE48: swc1        $f6, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f6.u32l;
    // 0x1506BE4C: jr          $ra
    // 0x1506BE50: nop

    return;
    return;
    // 0x1506BE50: nop

;}
RECOMP_FUNC void func_150C8350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C8350: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x150C8354: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x150C8358: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x150C835C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x150C8360: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x150C8364: addiu       $t1, $t1, -0x1B20
    ctx->r9 = ADD32(ctx->r9, -0X1B20);
    // 0x150C8368: addiu       $t2, $t2, -0x161C
    ctx->r10 = ADD32(ctx->r10, -0X161C);
    // 0x150C836C: addiu       $t3, $t3, -0x1660
    ctx->r11 = ADD32(ctx->r11, -0X1660);
    // 0x150C8370: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150C8374: addiu       $s0, $zero, 0x64
    ctx->r16 = ADD32(0, 0X64);
    // 0x150C8378: addiu       $t5, $zero, 0x4FF
    ctx->r13 = ADD32(0, 0X4FF);
    // 0x150C837C: addiu       $t4, $zero, 0x500
    ctx->r12 = ADD32(0, 0X500);
    // 0x150C8380: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
L_150C8384:
    // 0x150C8384: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x150C8388: lh          $a0, 0x6($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X6);
    // 0x150C838C: lh          $a1, 0x8($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8);
    // 0x150C8390: beql        $a0, $a1, L_150C8418
    if (ctx->r4 == ctx->r5) {
        // 0x150C8394: lb          $t8, 0x2($v0)
        ctx->r24 = MEM_B(ctx->r2, 0X2);
            goto L_150C8418;
    }
    goto skip_0;
    // 0x150C8394: lb          $t8, 0x2($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2);
    skip_0:
    // 0x150C8398: bgez        $a0, L_150C83A4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x150C839C: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_150C83A4;
    }
    // 0x150C839C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x150C83A0: negu        $a2, $a1
    ctx->r6 = SUB32(0, ctx->r5);
L_150C83A4:
    // 0x150C83A4: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x150C83A8: subu        $a1, $a2, $a0
    ctx->r5 = SUB32(ctx->r6, ctx->r4);
    // 0x150C83AC: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x150C83B0: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x150C83B4: bgez        $a1, L_150C83C4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x150C83B8: or          $a3, $t7, $zero
        ctx->r7 = ctx->r15 | 0;
            goto L_150C83C4;
    }
    // 0x150C83B8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x150C83BC: b           L_150C83C4
    // 0x150C83C0: negu        $t0, $a1
    ctx->r8 = SUB32(0, ctx->r5);
        goto L_150C83C4;
    // 0x150C83C0: negu        $t0, $a1
    ctx->r8 = SUB32(0, ctx->r5);
L_150C83C4:
    // 0x150C83C4: slt         $at, $t0, $a3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x150C83C8: beq         $at, $zero, L_150C83E4
    if (ctx->r1 == 0) {
        // 0x150C83CC: nop
    
            goto L_150C83E4;
    }
    // 0x150C83CC: nop

    // 0x150C83D0: sh          $a2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r6;
    // 0x150C83D4: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x150C83D8: addu        $v0, $t8, $v1
    ctx->r2 = ADD32(ctx->r24, ctx->r3);
    // 0x150C83DC: b           L_150C8414
    // 0x150C83E0: lh          $a0, 0x6($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X6);
        goto L_150C8414;
    // 0x150C83E0: lh          $a0, 0x6($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X6);
L_150C83E4:
    // 0x150C83E4: bgezl       $a1, L_150C83F8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x150C83E8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_150C83F8;
    }
    goto skip_1;
    // 0x150C83E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_1:
    // 0x150C83EC: b           L_150C83F8
    // 0x150C83F0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_150C83F8;
    // 0x150C83F0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150C83F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_150C83F8:
    // 0x150C83F8: multu       $a3, $a1
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150C83FC: mflo        $t9
    ctx->r25 = lo;
    // 0x150C8400: addu        $t6, $a0, $t9
    ctx->r14 = ADD32(ctx->r4, ctx->r25);
    // 0x150C8404: sh          $t6, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r14;
    // 0x150C8408: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x150C840C: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
    // 0x150C8410: lh          $a0, 0x6($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X6);
L_150C8414:
    // 0x150C8414: lb          $t8, 0x2($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2);
L_150C8418:
    // 0x150C8418: lbu         $t6, 0x0($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X0);
    // 0x150C841C: multu       $a0, $t8
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150C8420: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x150C8424: mflo        $t9
    ctx->r25 = lo;
    // 0x150C8428: nop

    // 0x150C842C: nop

    // 0x150C8430: multu       $t9, $t6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150C8434: mflo        $t7
    ctx->r15 = lo;
    // 0x150C8438: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x150C843C: sh          $t9, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r25;
    // 0x150C8440: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x150C8444: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x150C8448: lh          $a1, 0x4($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X4);
    // 0x150C844C: slti        $at, $a1, 0x500
    ctx->r1 = SIGNED(ctx->r5) < 0X500 ? 1 : 0;
    // 0x150C8450: bne         $at, $zero, L_150C84A4
    if (ctx->r1 != 0) {
        // 0x150C8454: addiu       $t8, $a1, -0x500
        ctx->r24 = ADD32(ctx->r5, -0X500);
            goto L_150C84A4;
    }
    // 0x150C8454: addiu       $t8, $a1, -0x500
    ctx->r24 = ADD32(ctx->r5, -0X500);
    // 0x150C8458: sh          $t8, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r24;
    // 0x150C845C: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x150C8460: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
    // 0x150C8464: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x150C8468: subu        $t6, $t4, $t9
    ctx->r14 = SUB32(ctx->r12, ctx->r25);
    // 0x150C846C: sh          $t6, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r14;
    // 0x150C8470: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x150C8474: addu        $v0, $t8, $v1
    ctx->r2 = ADD32(ctx->r24, ctx->r3);
    // 0x150C8478: lb          $t7, 0x2($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X2);
    // 0x150C847C: negu        $t9, $t7
    ctx->r25 = SUB32(0, ctx->r15);
    // 0x150C8480: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x150C8484: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x150C8488: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x150C848C: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x150C8490: slti        $at, $t8, 0x500
    ctx->r1 = SIGNED(ctx->r24) < 0X500 ? 1 : 0;
    // 0x150C8494: bnel        $at, $zero, L_150C84E0
    if (ctx->r1 != 0) {
        // 0x150C8498: addiu       $v1, $v1, 0xA
        ctx->r3 = ADD32(ctx->r3, 0XA);
            goto L_150C84E0;
    }
    goto skip_2;
    // 0x150C8498: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    skip_2:
    // 0x150C849C: b           L_150C84DC
    // 0x150C84A0: sh          $t5, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r13;
        goto L_150C84DC;
    // 0x150C84A0: sh          $t5, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r13;
L_150C84A4:
    // 0x150C84A4: bgez        $a1, L_150C84DC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x150C84A8: negu        $t7, $a1
        ctx->r15 = SUB32(0, ctx->r5);
            goto L_150C84DC;
    }
    // 0x150C84A8: negu        $t7, $a1
    ctx->r15 = SUB32(0, ctx->r5);
    // 0x150C84AC: sh          $t7, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r15;
    // 0x150C84B0: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x150C84B4: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x150C84B8: lb          $t6, 0x2($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X2);
    // 0x150C84BC: negu        $t8, $t6
    ctx->r24 = SUB32(0, ctx->r14);
    // 0x150C84C0: sb          $t8, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r24;
    // 0x150C84C4: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x150C84C8: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
    // 0x150C84CC: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x150C84D0: bgezl       $t9, L_150C84E0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x150C84D4: addiu       $v1, $v1, 0xA
        ctx->r3 = ADD32(ctx->r3, 0XA);
            goto L_150C84E0;
    }
    goto skip_3;
    // 0x150C84D4: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    skip_3:
    // 0x150C84D8: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
L_150C84DC:
    // 0x150C84DC: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
L_150C84E0:
    // 0x150C84E0: bnel        $v1, $s0, L_150C8384
    if (ctx->r3 != ctx->r16) {
        // 0x150C84E4: lw          $t6, 0x0($t1)
        ctx->r14 = MEM_W(ctx->r9, 0X0);
            goto L_150C8384;
    }
    goto skip_4;
    // 0x150C84E4: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    skip_4:
    // 0x150C84E8: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x150C84EC: jr          $ra
    // 0x150C84F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x150C84F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_1511FC20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511FC20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1511FC24: jr          $ra
    // 0x1511FC28: nop

    return;
    return;
    // 0x1511FC28: nop

;}
RECOMP_FUNC void func_1501EC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501EC38: addiu       $sp, $sp, -0x2E0
    ctx->r29 = ADD32(ctx->r29, -0X2E0);
    // 0x1501EC3C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x1501EC40: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x1501EC44: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x1501EC48: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x1501EC4C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x1501EC50: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x1501EC54: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x1501EC58: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x1501EC5C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x1501EC60: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x1501EC64: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x1501EC68: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x1501EC6C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1501EC70: sw          $a0, 0x2E0($sp)
    MEM_W(0X2E0, ctx->r29) = ctx->r4;
    // 0x1501EC74: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1501EC78: lw          $t6, 0x2E0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2E0);
    // 0x1501EC7C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501EC80: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1501EC84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1501EC88: lbu         $t7, 0x35EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35EA);
    // 0x1501EC8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501EC90: addiu       $t9, $t9, 0x363A
    ctx->r25 = ADD32(ctx->r25, 0X363A);
    // 0x1501EC94: bnel        $v1, $t7, L_1501F6F4
    if (ctx->r3 != ctx->r15) {
        // 0x1501EC98: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_1501F6F4;
    }
    goto skip_0;
    // 0x1501EC98: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_0:
    // 0x1501EC9C: lw          $t8, 0x2E0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2E0);
    // 0x1501ECA0: sb          $zero, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = 0;
    // 0x1501ECA4: sw          $zero, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = 0;
    // 0x1501ECA8: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x1501ECAC: sw          $t6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r14;
    // 0x1501ECB0: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x1501ECB4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501ECB8: addiu       $t6, $t6, 0x35C8
    ctx->r14 = ADD32(ctx->r14, 0X35C8);
    // 0x1501ECBC: blez        $t7, L_1501F6E4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x1501ECC0: sll         $t9, $t8, 2
        ctx->r25 = S32(ctx->r24 << 2);
            goto L_1501F6E4;
    }
    // 0x1501ECC0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1501ECC4: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x1501ECC8: sw          $t7, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r15;
    // 0x1501ECCC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501ECD0: addiu       $t6, $t6, 0x3958
    ctx->r14 = ADD32(ctx->r14, 0X3958);
    // 0x1501ECD4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501ECD8: addiu       $t7, $t7, 0x35F0
    ctx->r15 = ADD32(ctx->r15, 0X35F0);
    // 0x1501ECDC: addu        $t5, $t9, $t6
    ctx->r13 = ADD32(ctx->r25, ctx->r14);
    // 0x1501ECE0: addu        $t6, $t9, $t7
    ctx->r14 = ADD32(ctx->r25, ctx->r15);
    // 0x1501ECE4: sw          $t9, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r25;
    // 0x1501ECE8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x1501ECEC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x1501ECF0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1501ECF4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1501ECF8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501ECFC: addiu       $t7, $t7, 0x3778
    ctx->r15 = ADD32(ctx->r15, 0X3778);
    // 0x1501ED00: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x1501ED04: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501ED08: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x1501ED0C: lwc1        $f20, 0x69CC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X69CC);
    // 0x1501ED10: addu        $s5, $t9, $t7
    ctx->r21 = ADD32(ctx->r25, ctx->r15);
    // 0x1501ED14: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    // 0x1501ED18: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x1501ED1C: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x1501ED20: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x1501ED24: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x1501ED28: addiu       $fp, $zero, -0x270F
    ctx->r30 = ADD32(0, -0X270F);
    // 0x1501ED2C: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x1501ED30: addiu       $s6, $sp, 0xD4
    ctx->r22 = ADD32(ctx->r29, 0XD4);
    // 0x1501ED34: addiu       $s4, $sp, 0x22C
    ctx->r20 = ADD32(ctx->r29, 0X22C);
    // 0x1501ED38: addiu       $ra, $sp, 0x268
    ctx->r31 = ADD32(ctx->r29, 0X268);
    // 0x1501ED3C: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
L_1501ED40:
    // 0x1501ED40: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x1501ED44: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1501ED48: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x1501ED4C: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x1501ED50: lhu         $t6, 0x0($t7)
    ctx->r14 = MEM_HU(ctx->r15, 0X0);
    // 0x1501ED54: lw          $t8, 0x2E0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2E0);
    // 0x1501ED58: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x1501ED5C: beq         $t6, $zero, L_1501EDE0
    if (ctx->r14 == 0) {
        // 0x1501ED60: sll         $t9, $t8, 4
        ctx->r25 = S32(ctx->r24 << 4);
            goto L_1501EDE0;
    }
    // 0x1501ED60: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x1501ED64: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1501ED68: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x1501ED6C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501ED70: addiu       $t8, $t8, 0x3868
    ctx->r24 = ADD32(ctx->r24, 0X3868);
    // 0x1501ED74: addu        $t6, $t9, $t7
    ctx->r14 = ADD32(ctx->r25, ctx->r15);
    // 0x1501ED78: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x1501ED7C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1501ED80: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1501ED84: lh          $t7, 0x0($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X0);
    // 0x1501ED88: addu        $t8, $t6, $t4
    ctx->r24 = ADD32(ctx->r14, ctx->r12);
    // 0x1501ED8C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1501ED90: nop

    // 0x1501ED94: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1501ED98: swc1        $f6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f6.u32l;
    // 0x1501ED9C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1501EDA0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1501EDA4: lh          $t7, 0x2($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X2);
    // 0x1501EDA8: addu        $t8, $t6, $t4
    ctx->r24 = ADD32(ctx->r14, ctx->r12);
    // 0x1501EDAC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1501EDB0: nop

    // 0x1501EDB4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1501EDB8: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
    // 0x1501EDBC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1501EDC0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1501EDC4: lh          $t7, 0x4($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X4);
    // 0x1501EDC8: addu        $t8, $t6, $t4
    ctx->r24 = ADD32(ctx->r14, ctx->r12);
    // 0x1501EDCC: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x1501EDD0: nop

    // 0x1501EDD4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1501EDD8: b           L_1501EE04
    // 0x1501EDDC: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
        goto L_1501EE04;
    // 0x1501EDDC: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
L_1501EDE0:
    // 0x1501EDE0: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x1501EDE4: addu        $t7, $t9, $t4
    ctx->r15 = ADD32(ctx->r25, ctx->r12);
    // 0x1501EDE8: swc1        $f22, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f22.u32l;
    // 0x1501EDEC: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1501EDF0: addu        $t8, $t6, $t4
    ctx->r24 = ADD32(ctx->r14, ctx->r12);
    // 0x1501EDF4: swc1        $f22, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f22.u32l;
    // 0x1501EDF8: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x1501EDFC: addu        $t7, $t9, $t4
    ctx->r15 = ADD32(ctx->r25, ctx->r12);
    // 0x1501EE00: swc1        $f22, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f22.u32l;
L_1501EE04:
    // 0x1501EE04: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x1501EE08: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x1501EE0C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1501EE10: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x1501EE14: addiu       $s3, $sp, 0x2A4
    ctx->r19 = ADD32(ctx->r29, 0X2A4);
    // 0x1501EE18: addiu       $a0, $sp, 0x22C
    ctx->r4 = ADD32(ctx->r29, 0X22C);
    // 0x1501EE1C: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x1501EE20: lhu         $t6, 0x0($t7)
    ctx->r14 = MEM_HU(ctx->r15, 0X0);
    // 0x1501EE24: addiu       $a1, $sp, 0x1F0
    ctx->r5 = ADD32(ctx->r29, 0X1F0);
    // 0x1501EE28: addiu       $a3, $sp, 0x13C
    ctx->r7 = ADD32(ctx->r29, 0X13C);
    // 0x1501EE2C: bne         $t6, $at, L_1501EED0
    if (ctx->r14 != ctx->r1) {
        // 0x1501EE30: addiu       $t0, $sp, 0x1B4
        ctx->r8 = ADD32(ctx->r29, 0X1B4);
            goto L_1501EED0;
    }
    // 0x1501EE30: addiu       $t0, $sp, 0x1B4
    ctx->r8 = ADD32(ctx->r29, 0X1B4);
    // 0x1501EE34: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EE38: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x1501EE3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1501EE40: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EE44: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1501EE48: swc1        $f4, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f4.u32l;
    // 0x1501EE4C: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EE50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1501EE54: lui         $at, 0x427A
    ctx->r1 = S32(0X427A << 16);
    // 0x1501EE58: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EE5C: swc1        $f22, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f22.u32l;
    // 0x1501EE60: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EE64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1501EE68: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1501EE6C: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EE70: swc1        $f6, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f6.u32l;
    // 0x1501EE74: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EE78: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1501EE7C: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EE80: swc1        $f24, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f24.u32l;
    // 0x1501EE84: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EE88: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EE8C: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
    // 0x1501EE90: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EE94: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EE98: swc1        $f10, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f10.u32l;
    // 0x1501EE9C: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EEA0: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EEA4: swc1        $f22, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f22.u32l;
    // 0x1501EEA8: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EEAC: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EEB0: swc1        $f22, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f22.u32l;
    // 0x1501EEB4: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EEB8: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EEBC: swc1        $f22, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f22.u32l;
    // 0x1501EEC0: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EEC4: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EEC8: b           L_1501EF68
    // 0x1501EECC: swc1        $f22, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f22.u32l;
        goto L_1501EF68;
    // 0x1501EECC: swc1        $f22, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f22.u32l;
L_1501EED0:
    // 0x1501EED0: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EED4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501EED8: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EEDC: swc1        $f22, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f22.u32l;
    // 0x1501EEE0: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EEE4: lwc1        $f16, 0x35A4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X35A4);
    // 0x1501EEE8: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EEEC: swc1        $f16, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f16.u32l;
    // 0x1501EEF0: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EEF4: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EEF8: swc1        $f22, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f22.u32l;
    // 0x1501EEFC: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EF00: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EF04: swc1        $f20, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f20.u32l;
    // 0x1501EF08: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EF0C: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EF10: swc1        $f20, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f20.u32l;
    // 0x1501EF14: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EF18: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EF1C: swc1        $f20, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f20.u32l;
    // 0x1501EF20: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EF24: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EF28: swc1        $f22, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f22.u32l;
    // 0x1501EF2C: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EF30: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EF34: swc1        $f22, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f22.u32l;
    // 0x1501EF38: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EF3C: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EF40: swc1        $f22, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f22.u32l;
    // 0x1501EF44: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EF48: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EF4C: swc1        $f20, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f20.u32l;
    // 0x1501EF50: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EF54: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EF58: swc1        $f20, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f20.u32l;
    // 0x1501EF5C: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EF60: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EF64: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
L_1501EF68:
    // 0x1501EF68: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EF6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1501EF70: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1501EF74: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EF78: swc1        $f22, 0x38($t9)
    MEM_W(0X38, ctx->r25) = ctx->f22.u32l;
    // 0x1501EF7C: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x1501EF80: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x1501EF84: addiu       $t1, $sp, 0x1B4
    ctx->r9 = ADD32(ctx->r29, 0X1B4);
    // 0x1501EF88: lw          $t6, 0x0($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X0);
    // 0x1501EF8C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x1501EF90: lhu         $v0, 0x0($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X0);
    // 0x1501EF94: bne         $v1, $v0, L_1501EFAC
    if (ctx->r3 != ctx->r2) {
        // 0x1501EF98: nop
    
            goto L_1501EFAC;
    }
    // 0x1501EF98: nop

    // 0x1501EF9C: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EFA0: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EFA4: b           L_1501F048
    // 0x1501EFA8: swc1        $f20, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f20.u32l;
        goto L_1501F048;
    // 0x1501EFA8: swc1        $f20, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f20.u32l;
L_1501EFAC:
    // 0x1501EFAC: bnel        $v0, $at, L_1501EFC8
    if (ctx->r2 != ctx->r1) {
        // 0x1501EFB0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_1501EFC8;
    }
    goto skip_1;
    // 0x1501EFB0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_1:
    // 0x1501EFB4: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EFB8: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EFBC: b           L_1501F048
    // 0x1501EFC0: swc1        $f24, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->f24.u32l;
        goto L_1501F048;
    // 0x1501EFC0: swc1        $f24, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->f24.u32l;
    // 0x1501EFC4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_1501EFC8:
    // 0x1501EFC8: bnel        $v0, $at, L_1501F010
    if (ctx->r2 != ctx->r1) {
        // 0x1501EFCC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1501F010;
    }
    goto skip_2;
    // 0x1501EFCC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_2:
    // 0x1501EFD0: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501EFD4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x1501EFD8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1501EFDC: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501EFE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1501EFE4: swc1        $f18, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f18.u32l;
    // 0x1501EFE8: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501EFEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1501EFF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1501EFF4: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501EFF8: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
    // 0x1501EFFC: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501F000: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501F004: b           L_1501F048
    // 0x1501F008: swc1        $f6, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f6.u32l;
        goto L_1501F048;
    // 0x1501F008: swc1        $f6, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f6.u32l;
    // 0x1501F00C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_1501F010:
    // 0x1501F010: bnel        $v0, $at, L_1501F04C
    if (ctx->r2 != ctx->r1) {
        // 0x1501F014: lw          $a2, 0x0($s5)
        ctx->r6 = MEM_W(ctx->r21, 0X0);
            goto L_1501F04C;
    }
    goto skip_3;
    // 0x1501F014: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
    skip_3:
    // 0x1501F018: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501F01C: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501F020: swc1        $f20, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f20.u32l;
    // 0x1501F024: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501F028: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501F02C: swc1        $f20, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f20.u32l;
    // 0x1501F030: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501F034: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x1501F038: swc1        $f20, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f20.u32l;
    // 0x1501F03C: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1501F040: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x1501F044: swc1        $f24, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f24.u32l;
L_1501F048:
    // 0x1501F048: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
L_1501F04C:
    // 0x1501F04C: addiu       $v1, $sp, 0x268
    ctx->r3 = ADD32(ctx->r29, 0X268);
    // 0x1501F050: addiu       $v0, $sp, 0x178
    ctx->r2 = ADD32(ctx->r29, 0X178);
    // 0x1501F054: beq         $a2, $zero, L_1501F698
    if (ctx->r6 == 0) {
        // 0x1501F058: lw          $t8, 0xAC($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XAC);
            goto L_1501F698;
    }
    // 0x1501F058: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x1501F05C: lw          $t6, 0x2E0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2E0);
    // 0x1501F060: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1501F064: addiu       $t9, $t9, 0x35D0
    ctx->r25 = ADD32(ctx->r25, 0X35D0);
    // 0x1501F068: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x1501F06C: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x1501F070: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x1501F074: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x1501F078: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1501F07C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501F080: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x1501F084: addiu       $t6, $t6, 0x3960
    ctx->r14 = ADD32(ctx->r14, 0X3960);
    // 0x1501F088: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x1501F08C: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x1501F090: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
L_1501F094:
    // 0x1501F094: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1501F098: sltu        $at, $v0, $t1
    ctx->r1 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x1501F09C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1501F0A0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x1501F0A4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1501F0A8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x1501F0AC: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x1501F0B0: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x1501F0B4: sw          $fp, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r30;
    // 0x1501F0B8: sw          $fp, -0x4($s3)
    MEM_W(-0X4, ctx->r19) = ctx->r30;
    // 0x1501F0BC: sw          $fp, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r30;
    // 0x1501F0C0: sw          $t2, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r10;
    // 0x1501F0C4: sw          $zero, -0x4($a3)
    MEM_W(-0X4, ctx->r7) = 0;
    // 0x1501F0C8: swc1        $f20, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->f20.u32l;
    // 0x1501F0CC: bne         $at, $zero, L_1501F094
    if (ctx->r1 != 0) {
        // 0x1501F0D0: swc1        $f20, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f20.u32l;
            goto L_1501F094;
    }
    // 0x1501F0D0: swc1        $f20, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f20.u32l;
    // 0x1501F0D4: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x1501F0D8: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x1501F0DC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1501F0E0: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x1501F0E4: addu        $t1, $t7, $t6
    ctx->r9 = ADD32(ctx->r15, ctx->r14);
    // 0x1501F0E8: lhu         $t8, 0x0($t1)
    ctx->r24 = MEM_HU(ctx->r9, 0X0);
    // 0x1501F0EC: blez        $t8, L_1501F1B8
    if (SIGNED(ctx->r24) <= 0) {
        // 0x1501F0F0: sll         $t9, $s0, 3
        ctx->r25 = S32(ctx->r16 << 3);
            goto L_1501F1B8;
    }
    // 0x1501F0F0: sll         $t9, $s0, 3
    ctx->r25 = S32(ctx->r16 << 3);
L_1501F0F4:
    // 0x1501F0F4: addu        $v0, $a2, $t9
    ctx->r2 = ADD32(ctx->r6, ctx->r25);
    // 0x1501F0F8: lbu         $a0, 0x5($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X5);
    // 0x1501F0FC: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x1501F100: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1501F104: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x1501F108: addu        $a1, $s4, $v1
    ctx->r5 = ADD32(ctx->r20, ctx->r3);
    // 0x1501F10C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x1501F110: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1501F114: bnel        $fp, $t7, L_1501F168
    if (ctx->r30 != ctx->r15) {
        // 0x1501F118: lwc1        $f8, 0x0($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
            goto L_1501F168;
    }
    goto skip_4;
    // 0x1501F118: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    skip_4:
    // 0x1501F11C: lh          $t6, 0x6($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X6);
    // 0x1501F120: lw          $t9, 0x35B0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X35B0);
    // 0x1501F124: addu        $t7, $sp, $v1
    ctx->r15 = ADD32(ctx->r29, ctx->r3);
    // 0x1501F128: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1501F12C: bnel        $at, $zero, L_1501F150
    if (ctx->r1 != 0) {
        // 0x1501F130: lbu         $t9, 0x4($v0)
        ctx->r25 = MEM_BU(ctx->r2, 0X4);
            goto L_1501F150;
    }
    goto skip_5;
    // 0x1501F130: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    skip_5:
    // 0x1501F134: lw          $t7, 0x13C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X13C);
    // 0x1501F138: addu        $t6, $ra, $v1
    ctx->r14 = ADD32(ctx->r31, ctx->r3);
    // 0x1501F13C: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x1501F140: lh          $t8, 0x6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6);
    // 0x1501F144: b           L_1501F164
    // 0x1501F148: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
        goto L_1501F164;
    // 0x1501F148: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x1501F14C: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
L_1501F150:
    // 0x1501F150: addu        $t7, $sp, $v1
    ctx->r15 = ADD32(ctx->r29, ctx->r3);
    // 0x1501F154: addu        $t6, $sp, $v1
    ctx->r14 = ADD32(ctx->r29, ctx->r3);
    // 0x1501F158: sw          $t9, 0x1F0($t7)
    MEM_W(0X1F0, ctx->r15) = ctx->r25;
    // 0x1501F15C: lh          $t8, 0x6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6);
    // 0x1501F160: sw          $t8, 0x2A4($t6)
    MEM_W(0X2A4, ctx->r14) = ctx->r24;
L_1501F164:
    // 0x1501F164: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
L_1501F168:
    // 0x1501F168: addu        $t9, $sp, $v1
    ctx->r25 = ADD32(ctx->r29, ctx->r3);
    // 0x1501F16C: addiu       $t7, $sp, 0x1B4
    ctx->r15 = ADD32(ctx->r29, 0X1B4);
    // 0x1501F170: addu        $a1, $v1, $t7
    ctx->r5 = ADD32(ctx->r3, ctx->r15);
    // 0x1501F174: swc1        $f8, 0x178($t9)
    MEM_W(0X178, ctx->r25) = ctx->f8.u32l;
    // 0x1501F178: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1501F17C: addiu       $t8, $sp, 0x13C
    ctx->r24 = ADD32(ctx->r29, 0X13C);
    // 0x1501F180: addu        $a0, $v1, $t8
    ctx->r4 = ADD32(ctx->r3, ctx->r24);
    // 0x1501F184: c.eq.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl == ctx->f10.fl;
    // 0x1501F188: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x1501F18C: bc1f        L_1501F19C
    if (!c1cs) {
        // 0x1501F190: addiu       $t6, $a3, 0x1
        ctx->r14 = ADD32(ctx->r7, 0X1);
            goto L_1501F19C;
    }
    // 0x1501F190: addiu       $t6, $a3, 0x1
    ctx->r14 = ADD32(ctx->r7, 0X1);
    // 0x1501F194: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1501F198: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
L_1501F19C:
    // 0x1501F19C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x1501F1A0: lhu         $t9, 0x0($t1)
    ctx->r25 = MEM_HU(ctx->r9, 0X0);
    // 0x1501F1A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501F1A8: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1501F1AC: bnel        $at, $zero, L_1501F0F4
    if (ctx->r1 != 0) {
        // 0x1501F1B0: sll         $t9, $s0, 3
        ctx->r25 = S32(ctx->r16 << 3);
            goto L_1501F0F4;
    }
    goto skip_6;
    // 0x1501F1B0: sll         $t9, $s0, 3
    ctx->r25 = S32(ctx->r16 << 3);
    skip_6:
    // 0x1501F1B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1501F1B8:
    // 0x1501F1B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1501F1BC: addiu       $s3, $sp, 0x2A4
    ctx->r19 = ADD32(ctx->r29, 0X2A4);
    // 0x1501F1C0: addiu       $s2, $sp, 0x100
    ctx->r18 = ADD32(ctx->r29, 0X100);
L_1501F1C4:
    // 0x1501F1C4: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x1501F1C8: swc1        $f20, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f20.u32l;
    // 0x1501F1CC: addu        $t7, $ra, $s1
    ctx->r15 = ADD32(ctx->r31, ctx->r17);
    // 0x1501F1D0: bne         $fp, $v0, L_1501F1E4
    if (ctx->r30 != ctx->r2) {
        // 0x1501F1D4: nop
    
            goto L_1501F1E4;
    }
    // 0x1501F1D4: nop

    // 0x1501F1D8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1501F1DC: beql        $fp, $t8, L_1501F428
    if (ctx->r30 == ctx->r24) {
        // 0x1501F1E0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1501F428;
    }
    goto skip_7;
    // 0x1501F1E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_7:
L_1501F1E4:
    // 0x1501F1E4: bne         $fp, $v0, L_1501F1FC
    if (ctx->r30 != ctx->r2) {
        // 0x1501F1E8: addu        $t9, $ra, $s1
        ctx->r25 = ADD32(ctx->r31, ctx->r17);
            goto L_1501F1FC;
    }
    // 0x1501F1E8: addu        $t9, $ra, $s1
    ctx->r25 = ADD32(ctx->r31, ctx->r17);
    // 0x1501F1EC: addu        $t6, $sp, $s1
    ctx->r14 = ADD32(ctx->r29, ctx->r17);
    // 0x1501F1F0: lwc1        $f18, 0x1B4($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X1B4);
    // 0x1501F1F4: b           L_1501F424
    // 0x1501F1F8: swc1        $f18, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f18.u32l;
        goto L_1501F424;
    // 0x1501F1F8: swc1        $f18, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f18.u32l;
L_1501F1FC:
    // 0x1501F1FC: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x1501F200: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x1501F204: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501F208: bne         $fp, $v1, L_1501F220
    if (ctx->r30 != ctx->r3) {
        // 0x1501F20C: addu        $t6, $t6, $t8
        ctx->r14 = ADD32(ctx->r14, ctx->r24);
            goto L_1501F220;
    }
    // 0x1501F20C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x1501F210: addu        $t7, $sp, $s1
    ctx->r15 = ADD32(ctx->r29, ctx->r17);
    // 0x1501F214: lwc1        $f4, 0x178($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X178);
    // 0x1501F218: b           L_1501F424
    // 0x1501F21C: swc1        $f4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f4.u32l;
        goto L_1501F424;
    // 0x1501F21C: swc1        $f4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f4.u32l;
L_1501F220:
    // 0x1501F220: lw          $t6, 0x35B0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X35B0);
    // 0x1501F224: subu        $t7, $v1, $v0
    ctx->r15 = SUB32(ctx->r3, ctx->r2);
    // 0x1501F228: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x1501F22C: subu        $t9, $t6, $v0
    ctx->r25 = SUB32(ctx->r14, ctx->r2);
    // 0x1501F230: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1501F234: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1501F238: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x1501F23C: addu        $t7, $sp, $s1
    ctx->r15 = ADD32(ctx->r29, ctx->r17);
    // 0x1501F240: lw          $t7, 0x1F0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F0);
    // 0x1501F244: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x1501F248: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1501F24C: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x1501F250: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x1501F254: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x1501F258: addu        $t1, $t6, $t9
    ctx->r9 = ADD32(ctx->r14, ctx->r25);
    // 0x1501F25C: bne         $t7, $zero, L_1501F378
    if (ctx->r15 != 0) {
        // 0x1501F260: div.s       $f0, $f8, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
            goto L_1501F378;
    }
    // 0x1501F260: div.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1501F264: addu        $t8, $s4, $s1
    ctx->r24 = ADD32(ctx->r20, ctx->r17);
    // 0x1501F268: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x1501F26C: addiu       $t6, $sp, 0x13C
    ctx->r14 = ADD32(ctx->r29, 0X13C);
    // 0x1501F270: addu        $a3, $s1, $t6
    ctx->r7 = ADD32(ctx->r17, ctx->r14);
    // 0x1501F274: addiu       $t2, $v0, -0x2
    ctx->r10 = ADD32(ctx->r2, -0X2);
    // 0x1501F278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501F27C: bltz        $t2, L_1501F298
    if (SIGNED(ctx->r10) < 0) {
        // 0x1501F280: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1501F298;
    }
    // 0x1501F280: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1501F284: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x1501F288: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
    // 0x1501F28C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x1501F290: b           L_1501F2A4
    // 0x1501F294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_1501F2A4;
    // 0x1501F294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_1501F298:
    // 0x1501F298: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x1501F29C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1501F2A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_1501F2A4:
    // 0x1501F2A4: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x1501F2A8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x1501F2AC: ori         $t8, $t3, 0x8
    ctx->r24 = ctx->r11 | 0X8;
    // 0x1501F2B0: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1501F2B4: beql        $at, $zero, L_1501F2C8
    if (ctx->r1 == 0) {
        // 0x1501F2B8: lhu         $a3, 0x0($t1)
        ctx->r7 = MEM_HU(ctx->r9, 0X0);
            goto L_1501F2C8;
    }
    goto skip_8;
    // 0x1501F2B8: lhu         $a3, 0x0($t1)
    ctx->r7 = MEM_HU(ctx->r9, 0X0);
    skip_8:
    // 0x1501F2BC: or          $t3, $t8, $zero
    ctx->r11 = ctx->r24 | 0;
    // 0x1501F2C0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1501F2C4: lhu         $a3, 0x0($t1)
    ctx->r7 = MEM_HU(ctx->r9, 0X0);
L_1501F2C8:
    // 0x1501F2C8: blezl       $a3, L_1501F32C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x1501F2CC: andi        $t9, $t3, 0x1
        ctx->r25 = ctx->r11 & 0X1;
            goto L_1501F32C;
    }
    goto skip_9;
    // 0x1501F2CC: andi        $t9, $t3, 0x1
    ctx->r25 = ctx->r11 & 0X1;
    skip_9:
L_1501F2D0:
    // 0x1501F2D0: beql        $a0, $zero, L_1501F32C
    if (ctx->r4 == 0) {
        // 0x1501F2D4: andi        $t9, $t3, 0x1
        ctx->r25 = ctx->r11 & 0X1;
            goto L_1501F32C;
    }
    goto skip_10;
    // 0x1501F2D4: andi        $t9, $t3, 0x1
    ctx->r25 = ctx->r11 & 0X1;
    skip_10:
    // 0x1501F2D8: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x1501F2DC: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x1501F2E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1501F2E4: addu        $v0, $t6, $t9
    ctx->r2 = ADD32(ctx->r14, ctx->r25);
    // 0x1501F2E8: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
    // 0x1501F2EC: bnel        $s0, $t7, L_1501F320
    if (ctx->r16 != ctx->r15) {
        // 0x1501F2F0: slt         $at, $v1, $a3
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_1501F320;
    }
    goto skip_11;
    // 0x1501F2F0: slt         $at, $v1, $a3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    skip_11:
    // 0x1501F2F4: bne         $a2, $t0, L_1501F318
    if (ctx->r6 != ctx->r8) {
        // 0x1501F2F8: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_1501F318;
    }
    // 0x1501F2F8: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x1501F2FC: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1501F300: addu        $t6, $s6, $t8
    ctx->r14 = ADD32(ctx->r22, ctx->r24);
    // 0x1501F304: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1501F308: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x1501F30C: lhu         $a3, 0x0($t1)
    ctx->r7 = MEM_HU(ctx->r9, 0X0);
    // 0x1501F310: b           L_1501F31C
    // 0x1501F314: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
        goto L_1501F31C;
    // 0x1501F314: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_1501F318:
    // 0x1501F318: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_1501F31C:
    // 0x1501F31C: slt         $at, $v1, $a3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
L_1501F320:
    // 0x1501F320: bne         $at, $zero, L_1501F2D0
    if (ctx->r1 != 0) {
        // 0x1501F324: nop
    
            goto L_1501F2D0;
    }
    // 0x1501F324: nop

    // 0x1501F328: andi        $t9, $t3, 0x1
    ctx->r25 = ctx->r11 & 0X1;
L_1501F32C:
    // 0x1501F32C: bne         $t9, $zero, L_1501F33C
    if (ctx->r25 != 0) {
        // 0x1501F330: andi        $t7, $t3, 0x8
        ctx->r15 = ctx->r11 & 0X8;
            goto L_1501F33C;
    }
    // 0x1501F330: andi        $t7, $t3, 0x8
    ctx->r15 = ctx->r11 & 0X8;
    // 0x1501F334: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x1501F338: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
L_1501F33C:
    // 0x1501F33C: bne         $t7, $zero, L_1501F34C
    if (ctx->r15 != 0) {
        // 0x1501F340: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_1501F34C;
    }
    // 0x1501F340: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x1501F344: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x1501F348: swc1        $f6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f6.u32l;
L_1501F34C:
    // 0x1501F34C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1501F350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1501F354: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    // 0x1501F358: jal         0x150497E0
    // 0x1501F35C: sw          $t5, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r13;
    func_150497E0(rdram, ctx);
        goto after_0;
    // 0x1501F35C: sw          $t5, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r13;
    after_0:
    // 0x1501F360: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1501F364: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x1501F368: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x1501F36C: addiu       $ra, $sp, 0x268
    ctx->r31 = ADD32(ctx->r29, 0X268);
    // 0x1501F370: b           L_1501F428
    // 0x1501F374: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_1501F428;
    // 0x1501F374: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1501F378:
    // 0x1501F378: lhu         $a3, 0x0($t1)
    ctx->r7 = MEM_HU(ctx->r9, 0X0);
    // 0x1501F37C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1501F380: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1501F384: blez        $a3, L_1501F3E4
    if (SIGNED(ctx->r7) <= 0) {
        // 0x1501F388: lw          $a2, 0x0($s5)
        ctx->r6 = MEM_W(ctx->r21, 0X0);
            goto L_1501F3E4;
    }
    // 0x1501F388: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
    // 0x1501F38C: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
L_1501F390:
    // 0x1501F390: addu        $v0, $a2, $t8
    ctx->r2 = ADD32(ctx->r6, ctx->r24);
    // 0x1501F394: lbu         $t6, 0x5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5);
    // 0x1501F398: addu        $t7, $s4, $s1
    ctx->r15 = ADD32(ctx->r20, ctx->r17);
    // 0x1501F39C: bnel        $s0, $t6, L_1501F3D8
    if (ctx->r16 != ctx->r14) {
        // 0x1501F3A0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_1501F3D8;
    }
    goto skip_12;
    // 0x1501F3A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_12:
    // 0x1501F3A4: bne         $a1, $s7, L_1501F3CC
    if (ctx->r5 != ctx->r23) {
        // 0x1501F3A8: nop
    
            goto L_1501F3CC;
    }
    // 0x1501F3A8: nop

    // 0x1501F3AC: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1501F3B0: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x1501F3B4: bne         $t9, $t8, L_1501F3C4
    if (ctx->r25 != ctx->r24) {
        // 0x1501F3B8: nop
    
            goto L_1501F3C4;
    }
    // 0x1501F3B8: nop

    // 0x1501F3BC: b           L_1501F3D4
    // 0x1501F3C0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_1501F3D4;
    // 0x1501F3C0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_1501F3C4:
    // 0x1501F3C4: b           L_1501F3D4
    // 0x1501F3C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_1501F3D4;
    // 0x1501F3C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_1501F3CC:
    // 0x1501F3CC: b           L_1501F3E4
    // 0x1501F3D0: sw          $v1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r3;
        goto L_1501F3E4;
    // 0x1501F3D0: sw          $v1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r3;
L_1501F3D4:
    // 0x1501F3D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_1501F3D8:
    // 0x1501F3D8: slt         $at, $v1, $a3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x1501F3DC: bnel        $at, $zero, L_1501F390
    if (ctx->r1 != 0) {
        // 0x1501F3E0: sll         $t8, $v1, 3
        ctx->r24 = S32(ctx->r3 << 3);
            goto L_1501F390;
    }
    goto skip_13;
    // 0x1501F3E0: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    skip_13:
L_1501F3E4:
    // 0x1501F3E4: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x1501F3E8: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x1501F3EC: addu        $v0, $a2, $t6
    ctx->r2 = ADD32(ctx->r6, ctx->r14);
    // 0x1501F3F0: sll         $t9, $t7, 3
    ctx->r25 = S32(ctx->r15 << 3);
    // 0x1501F3F4: addu        $t8, $a2, $t9
    ctx->r24 = ADD32(ctx->r6, ctx->r25);
    // 0x1501F3F8: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x1501F3FC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1501F400: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x1501F404: swc1        $f16, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f16.u32l;
    // 0x1501F408: lwc1        $f18, 0x0($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X0);
    // 0x1501F40C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1501F410: swc1        $f4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f4.u32l;
    // 0x1501F414: lwc1        $f6, 0x0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X0);
    // 0x1501F418: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1501F41C: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1501F420: swc1        $f8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f8.u32l;
L_1501F424:
    // 0x1501F424: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1501F428:
    // 0x1501F428: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1501F42C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x1501F430: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x1501F434: bne         $s0, $at, L_1501F1C4
    if (ctx->r16 != ctx->r1) {
        // 0x1501F438: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_1501F1C4;
    }
    // 0x1501F438: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x1501F43C: lwc1        $f16, 0x128($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X128);
    // 0x1501F440: c.eq.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl == ctx->f16.fl;
    // 0x1501F444: nop

    // 0x1501F448: bc1fl       L_1501F458
    if (!c1cs) {
        // 0x1501F44C: lw          $t6, 0x64($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X64);
            goto L_1501F458;
    }
    goto skip_14;
    // 0x1501F44C: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    skip_14:
    // 0x1501F450: swc1        $f22, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f22.u32l;
    // 0x1501F454: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
L_1501F458:
    // 0x1501F458: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1501F45C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1501F460: lbu         $t9, 0x0($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X0);
    // 0x1501F464: beql        $t9, $at, L_1501F4A0
    if (ctx->r25 == ctx->r1) {
        // 0x1501F468: lwc1        $f18, 0x11C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X11C);
            goto L_1501F4A0;
    }
    goto skip_15;
    // 0x1501F468: lwc1        $f18, 0x11C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X11C);
    skip_15:
    // 0x1501F46C: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1501F470: lw          $a0, 0xF4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF4);
    // 0x1501F474: lw          $a1, 0x128($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X128);
    // 0x1501F478: addu        $a2, $t8, $t4
    ctx->r6 = ADD32(ctx->r24, ctx->r12);
    // 0x1501F47C: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x1501F480: lw          $a3, 0x2E0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2E0);
    // 0x1501F484: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    // 0x1501F488: jal         0x1501FE68
    // 0x1501F48C: sw          $t5, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r13;
    func_1501FE68(rdram, ctx);
        goto after_1;
    // 0x1501F48C: sw          $t5, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r13;
    after_1:
    // 0x1501F490: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1501F494: b           L_1501F4BC
    // 0x1501F498: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
        goto L_1501F4BC;
    // 0x1501F498: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x1501F49C: lwc1        $f18, 0x11C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X11C);
L_1501F4A0:
    // 0x1501F4A0: c.eq.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl == ctx->f18.fl;
    // 0x1501F4A4: nop

    // 0x1501F4A8: bc1tl       L_1501F4C0
    if (c1cs) {
        // 0x1501F4AC: lwc1        $f4, 0x120($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X120);
            goto L_1501F4C0;
    }
    goto skip_16;
    // 0x1501F4AC: lwc1        $f4, 0x120($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X120);
    skip_16:
    // 0x1501F4B0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1501F4B4: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x1501F4B8: swc1        $f18, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f18.u32l;
L_1501F4BC:
    // 0x1501F4BC: lwc1        $f4, 0x120($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X120);
L_1501F4C0:
    // 0x1501F4C0: c.eq.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl == ctx->f4.fl;
    // 0x1501F4C4: nop

    // 0x1501F4C8: bc1tl       L_1501F4E0
    if (c1cs) {
        // 0x1501F4CC: lwc1        $f6, 0x118($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
            goto L_1501F4E0;
    }
    goto skip_17;
    // 0x1501F4CC: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    skip_17:
    // 0x1501F4D0: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x1501F4D4: addu        $t8, $t9, $t4
    ctx->r24 = ADD32(ctx->r25, ctx->r12);
    // 0x1501F4D8: swc1        $f4, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f4.u32l;
    // 0x1501F4DC: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
L_1501F4E0:
    // 0x1501F4E0: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x1501F4E4: nop

    // 0x1501F4E8: bc1tl       L_1501F500
    if (c1cs) {
        // 0x1501F4EC: lwc1        $f10, 0x114($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
            goto L_1501F500;
    }
    goto skip_18;
    // 0x1501F4EC: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    skip_18:
    // 0x1501F4F0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1501F4F4: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x1501F4F8: swc1        $f6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f6.u32l;
    // 0x1501F4FC: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
L_1501F500:
    // 0x1501F500: c.eq.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl == ctx->f10.fl;
    // 0x1501F504: nop

    // 0x1501F508: bc1tl       L_1501F520
    if (c1cs) {
        // 0x1501F50C: lwc1        $f8, 0x110($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
            goto L_1501F520;
    }
    goto skip_19;
    // 0x1501F50C: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
    skip_19:
    // 0x1501F510: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x1501F514: addu        $t8, $t9, $t4
    ctx->r24 = ADD32(ctx->r25, ctx->r12);
    // 0x1501F518: swc1        $f10, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f10.u32l;
    // 0x1501F51C: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
L_1501F520:
    // 0x1501F520: c.eq.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl == ctx->f8.fl;
    // 0x1501F524: nop

    // 0x1501F528: bc1tl       L_1501F540
    if (c1cs) {
        // 0x1501F52C: lwc1        $f16, 0x10C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X10C);
            goto L_1501F540;
    }
    goto skip_20;
    // 0x1501F52C: lwc1        $f16, 0x10C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10C);
    skip_20:
    // 0x1501F530: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1501F534: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x1501F538: swc1        $f8, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f8.u32l;
    // 0x1501F53C: lwc1        $f16, 0x10C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10C);
L_1501F540:
    // 0x1501F540: c.eq.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl == ctx->f16.fl;
    // 0x1501F544: nop

    // 0x1501F548: bc1tl       L_1501F560
    if (c1cs) {
        // 0x1501F54C: lwc1        $f18, 0x104($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X104);
            goto L_1501F560;
    }
    goto skip_21;
    // 0x1501F54C: lwc1        $f18, 0x104($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X104);
    skip_21:
    // 0x1501F550: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x1501F554: addu        $t8, $t9, $t4
    ctx->r24 = ADD32(ctx->r25, ctx->r12);
    // 0x1501F558: swc1        $f16, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f16.u32l;
    // 0x1501F55C: lwc1        $f18, 0x104($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X104);
L_1501F560:
    // 0x1501F560: c.eq.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl == ctx->f18.fl;
    // 0x1501F564: nop

    // 0x1501F568: bc1tl       L_1501F580
    if (c1cs) {
        // 0x1501F56C: lwc1        $f4, 0x108($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
            goto L_1501F580;
    }
    goto skip_22;
    // 0x1501F56C: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
    skip_22:
    // 0x1501F570: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1501F574: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x1501F578: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
    // 0x1501F57C: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
L_1501F580:
    // 0x1501F580: c.eq.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl == ctx->f4.fl;
    // 0x1501F584: nop

    // 0x1501F588: bc1tl       L_1501F5A0
    if (c1cs) {
        // 0x1501F58C: lwc1        $f6, 0x100($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
            goto L_1501F5A0;
    }
    goto skip_23;
    // 0x1501F58C: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
    skip_23:
    // 0x1501F590: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x1501F594: addu        $t8, $t9, $t4
    ctx->r24 = ADD32(ctx->r25, ctx->r12);
    // 0x1501F598: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x1501F59C: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
L_1501F5A0:
    // 0x1501F5A0: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x1501F5A4: nop

    // 0x1501F5A8: bc1tl       L_1501F5C0
    if (c1cs) {
        // 0x1501F5AC: lwc1        $f10, 0x138($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
            goto L_1501F5C0;
    }
    goto skip_24;
    // 0x1501F5AC: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
    skip_24:
    // 0x1501F5B0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1501F5B4: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x1501F5B8: swc1        $f6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f6.u32l;
    // 0x1501F5BC: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
L_1501F5C0:
    // 0x1501F5C0: c.eq.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl == ctx->f10.fl;
    // 0x1501F5C4: nop

    // 0x1501F5C8: bc1tl       L_1501F5E0
    if (c1cs) {
        // 0x1501F5CC: lwc1        $f8, 0x124($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
            goto L_1501F5E0;
    }
    goto skip_25;
    // 0x1501F5CC: lwc1        $f8, 0x124($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
    skip_25:
    // 0x1501F5D0: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x1501F5D4: addu        $t8, $t9, $t4
    ctx->r24 = ADD32(ctx->r25, ctx->r12);
    // 0x1501F5D8: swc1        $f10, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f10.u32l;
    // 0x1501F5DC: lwc1        $f8, 0x124($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
L_1501F5E0:
    // 0x1501F5E0: c.eq.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl == ctx->f8.fl;
    // 0x1501F5E4: nop

    // 0x1501F5E8: bc1tl       L_1501F600
    if (c1cs) {
        // 0x1501F5EC: lwc1        $f16, 0x12C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X12C);
            goto L_1501F600;
    }
    goto skip_26;
    // 0x1501F5EC: lwc1        $f16, 0x12C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X12C);
    skip_26:
    // 0x1501F5F0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1501F5F4: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x1501F5F8: swc1        $f8, 0x34($t7)
    MEM_W(0X34, ctx->r15) = ctx->f8.u32l;
    // 0x1501F5FC: lwc1        $f16, 0x12C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X12C);
L_1501F600:
    // 0x1501F600: c.eq.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl == ctx->f16.fl;
    // 0x1501F604: nop

    // 0x1501F608: bc1tl       L_1501F620
    if (c1cs) {
        // 0x1501F60C: lwc1        $f18, 0x134($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X134);
            goto L_1501F620;
    }
    goto skip_27;
    // 0x1501F60C: lwc1        $f18, 0x134($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X134);
    skip_27:
    // 0x1501F610: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x1501F614: addu        $t8, $t9, $t4
    ctx->r24 = ADD32(ctx->r25, ctx->r12);
    // 0x1501F618: swc1        $f16, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->f16.u32l;
    // 0x1501F61C: lwc1        $f18, 0x134($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X134);
L_1501F620:
    // 0x1501F620: c.eq.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl == ctx->f18.fl;
    // 0x1501F624: nop

    // 0x1501F628: bc1tl       L_1501F640
    if (c1cs) {
        // 0x1501F62C: lwc1        $f4, 0x130($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X130);
            goto L_1501F640;
    }
    goto skip_28;
    // 0x1501F62C: lwc1        $f4, 0x130($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X130);
    skip_28:
    // 0x1501F630: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1501F634: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x1501F638: swc1        $f18, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f18.u32l;
    // 0x1501F63C: lwc1        $f4, 0x130($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X130);
L_1501F640:
    // 0x1501F640: c.eq.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl == ctx->f4.fl;
    // 0x1501F644: nop

    // 0x1501F648: bc1tl       L_1501F660
    if (c1cs) {
        // 0x1501F64C: lw          $t6, 0x0($t5)
        ctx->r14 = MEM_W(ctx->r13, 0X0);
            goto L_1501F660;
    }
    goto skip_29;
    // 0x1501F64C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    skip_29:
    // 0x1501F650: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x1501F654: addu        $t8, $t9, $t4
    ctx->r24 = ADD32(ctx->r25, ctx->r12);
    // 0x1501F658: swc1        $f4, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f4.u32l;
    // 0x1501F65C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
L_1501F660:
    // 0x1501F660: lw          $t9, 0x2E0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2E0);
    // 0x1501F664: lw          $a0, 0xF4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF4);
    // 0x1501F668: addu        $a2, $t6, $t4
    ctx->r6 = ADD32(ctx->r14, ctx->r12);
    // 0x1501F66C: addiu       $t7, $a2, 0x8
    ctx->r15 = ADD32(ctx->r6, 0X8);
    // 0x1501F670: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1501F674: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    // 0x1501F678: lw          $a1, 0x128($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X128);
    // 0x1501F67C: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    // 0x1501F680: sw          $t5, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r13;
    // 0x1501F684: jal         0x1501FC8C
    // 0x1501F688: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_1501FC8C(rdram, ctx);
        goto after_2;
    // 0x1501F688: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_2:
    // 0x1501F68C: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1501F690: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x1501F694: addiu       $ra, $sp, 0x268
    ctx->r31 = ADD32(ctx->r29, 0X268);
L_1501F698:
    // 0x1501F698: lw          $t8, 0xF4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF4);
    // 0x1501F69C: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x1501F6A0: addiu       $t4, $t4, 0x44
    ctx->r12 = ADD32(ctx->r12, 0X44);
    // 0x1501F6A4: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x1501F6A8: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x1501F6AC: addiu       $t9, $t7, 0x2
    ctx->r25 = ADD32(ctx->r15, 0X2);
    // 0x1501F6B0: sw          $t9, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r25;
    // 0x1501F6B4: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x1501F6B8: addiu       $t7, $t8, 0x4
    ctx->r15 = ADD32(ctx->r24, 0X4);
    // 0x1501F6BC: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    // 0x1501F6C0: lw          $t7, 0xB0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB0);
    // 0x1501F6C4: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x1501F6C8: sw          $t8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r24;
    // 0x1501F6CC: sw          $t6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r14;
    // 0x1501F6D0: lbu         $t9, 0x0($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X0);
    // 0x1501F6D4: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x1501F6D8: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1501F6DC: bnel        $at, $zero, L_1501ED40
    if (ctx->r1 != 0) {
        // 0x1501F6E0: lw          $t6, 0xA8($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XA8);
            goto L_1501ED40;
    }
    goto skip_30;
    // 0x1501F6E0: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    skip_30:
L_1501F6E4:
    // 0x1501F6E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1501F6E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501F6EC: sb          $t8, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = ctx->r24;
    // 0x1501F6F0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_1501F6F4:
    // 0x1501F6F4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1501F6F8: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1501F6FC: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1501F700: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x1501F704: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x1501F708: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x1501F70C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x1501F710: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x1501F714: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x1501F718: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x1501F71C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x1501F720: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x1501F724: jr          $ra
    // 0x1501F728: addiu       $sp, $sp, 0x2E0
    ctx->r29 = ADD32(ctx->r29, 0X2E0);
    return;
    return;
    // 0x1501F728: addiu       $sp, $sp, 0x2E0
    ctx->r29 = ADD32(ctx->r29, 0X2E0);
;}
RECOMP_FUNC void func_150772E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150772E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150772EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150772F0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150772F4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150772F8: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    // 0x150772FC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15077300: jal         0x1503DE70
    // 0x15077304: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_1503DE70(rdram, ctx);
        goto after_0;
    // 0x15077304: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x15077308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507730C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15077310: jr          $ra
    // 0x15077314: nop

    return;
    return;
    // 0x15077314: nop

;}
RECOMP_FUNC void func_150CFC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CFC38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150CFC3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150CFC40: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x150CFC44: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x150CFC48: jal         0x1515572C
    // 0x150CFC4C: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    func_1515572C(rdram, ctx);
        goto after_0;
    // 0x150CFC4C: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    after_0:
    // 0x150CFC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150CFC54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150CFC58: jr          $ra
    // 0x150CFC5C: nop

    return;
    return;
    // 0x150CFC5C: nop

;}
RECOMP_FUNC void func_151B1A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B1A58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B1A5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B1A60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151B1A64: jal         0x151B1918
    // 0x151B1A68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151B1918(rdram, ctx);
        goto after_0;
    // 0x151B1A68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151B1A6C: jal         0x1514933C
    // 0x151B1A70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x151B1A70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151B1A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B1A78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B1A7C: jr          $ra
    // 0x151B1A80: nop

    return;
    return;
    // 0x151B1A80: nop

;}
RECOMP_FUNC void func_15161F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15161F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15161F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15161F34: jal         0x15163F50
    // 0x15161F38: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    func_15163F50(rdram, ctx);
        goto after_0;
    // 0x15161F38: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x15161F3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15161F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15161F44: jr          $ra
    // 0x15161F48: nop

    return;
    return;
    // 0x15161F48: nop

;}
RECOMP_FUNC void func_150F0A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F0A24: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x150F0A28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F0A2C: lwc1        $f0, 0x1854($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1854);
    // 0x150F0A30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F0A34: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150F0A38: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x150F0A3C: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x150F0A40: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150F0A44: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x150F0A48: lw          $at, 0x0($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X0);
    // 0x150F0A4C: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x150F0A50: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x150F0A54: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x150F0A58: lw          $t1, 0x4($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X4);
    // 0x150F0A5C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x150F0A60: addiu       $t3, $zero, -0x1F
    ctx->r11 = ADD32(0, -0X1F);
    // 0x150F0A64: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x150F0A68: lw          $at, 0x8($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X8);
    // 0x150F0A6C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x150F0A70: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x150F0A74: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x150F0A78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F0A7C: lwc1        $f4, 0x1858($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1858);
    // 0x150F0A80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F0A84: lwc1        $f6, 0x185C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X185C);
    // 0x150F0A88: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x150F0A8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F0A90: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x150F0A94: sh          $t4, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r12;
    // 0x150F0A98: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x150F0A9C: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x150F0AA0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150F0AA4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x150F0AA8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x150F0AAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F0AB0: sh          $t3, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r11;
    // 0x150F0AB4: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x150F0AB8: sh          $t7, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r15;
    // 0x150F0ABC: sh          $t0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r8;
    // 0x150F0AC0: sh          $t9, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r25;
    // 0x150F0AC4: sb          $t8, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r24;
    // 0x150F0AC8: sb          $t1, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r9;
    // 0x150F0ACC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150F0AD0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150F0AD4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150F0AD8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150F0ADC: sb          $t4, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r12;
    // 0x150F0AE0: sb          $t5, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r13;
    // 0x150F0AE4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150F0AE8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150F0AEC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150F0AF0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F0AF4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F0AF8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150F0AFC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F0B00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F0B04: sh          $t2, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r10;
    // 0x150F0B08: sb          $t3, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r11;
    // 0x150F0B0C: sb          $t6, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r14;
    // 0x150F0B10: sb          $t7, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r15;
    // 0x150F0B14: sb          $t0, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r8;
    // 0x150F0B18: sb          $t9, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r25;
    // 0x150F0B1C: sb          $t8, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r24;
    // 0x150F0B20: sb          $t1, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r9;
    // 0x150F0B24: lui         $t4, 0x20
    ctx->r12 = S32(0X20 << 16);
    // 0x150F0B28: lui         $t5, 0x6
    ctx->r13 = S32(0X6 << 16);
    // 0x150F0B2C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150F0B30: addiu       $t3, $zero, 0x24
    ctx->r11 = ADD32(0, 0X24);
    // 0x150F0B34: ori         $t4, $t4, 0x5
    ctx->r12 = ctx->r12 | 0X5;
    // 0x150F0B38: ori         $t5, $t5, 0x600
    ctx->r13 = ctx->r13 | 0X600;
    // 0x150F0B3C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x150F0B40: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x150F0B44: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150F0B48: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150F0B4C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150F0B50: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x150F0B54: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x150F0B58: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x150F0B5C: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x150F0B60: sb          $t2, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r10;
    // 0x150F0B64: sb          $zero, 0x65($sp)
    MEM_B(0X65, ctx->r29) = 0;
    // 0x150F0B68: sb          $zero, 0x66($sp)
    MEM_B(0X66, ctx->r29) = 0;
    // 0x150F0B6C: sb          $zero, 0x67($sp)
    MEM_B(0X67, ctx->r29) = 0;
    // 0x150F0B70: sb          $zero, 0x68($sp)
    MEM_B(0X68, ctx->r29) = 0;
    // 0x150F0B74: sb          $zero, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = 0;
    // 0x150F0B78: sb          $zero, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = 0;
    // 0x150F0B7C: sb          $zero, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = 0;
    // 0x150F0B80: sb          $zero, 0x70($sp)
    MEM_B(0X70, ctx->r29) = 0;
    // 0x150F0B84: sb          $zero, 0x72($sp)
    MEM_B(0X72, ctx->r29) = 0;
    // 0x150F0B88: sb          $t2, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r10;
    // 0x150F0B8C: sb          $t3, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r11;
    // 0x150F0B90: sw          $t4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r12;
    // 0x150F0B94: sw          $t5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r13;
    // 0x150F0B98: sh          $t6, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r14;
    // 0x150F0B9C: sh          $t7, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r15;
    // 0x150F0BA0: sh          $t0, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r8;
    // 0x150F0BA4: sb          $zero, 0x86($sp)
    MEM_B(0X86, ctx->r29) = 0;
    // 0x150F0BA8: sb          $t9, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r25;
    // 0x150F0BAC: sb          $zero, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = 0;
    // 0x150F0BB0: sb          $t8, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = ctx->r24;
    // 0x150F0BB4: sb          $t1, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r9;
    // 0x150F0BB8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x150F0BBC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150F0BC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150F0BC4: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x150F0BC8: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x150F0BCC: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x150F0BD0: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x150F0BD4: jal         0x15152B38
    // 0x150F0BD8: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    func_15152B38(rdram, ctx);
        goto after_0;
    // 0x150F0BD8: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x150F0BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F0BE0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x150F0BE4: jr          $ra
    // 0x150F0BE8: nop

    return;
    return;
    // 0x150F0BE8: nop

;}
RECOMP_FUNC void func_15142AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15142AC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15142AC4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15142AC8: nop

    // 0x15142ACC: add.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x15142AD0: sub.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x15142AD4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15142AD8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15142ADC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15142AE0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15142AE4: sub.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x15142AE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15142AEC: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x15142AF0: nop

    // 0x15142AF4: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15142AF8: nop

    // 0x15142AFC: jr          $ra
    // 0x15142B00: nop

    return;
    return;
    // 0x15142B00: nop

;}
RECOMP_FUNC void func_1509F284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509F284: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1509F288: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1509F28C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x1509F290: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1509F294: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1509F298: beq         $a1, $zero, L_1509F2D4
    if (ctx->r5 == 0) {
        // 0x1509F29C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1509F2D4;
    }
    // 0x1509F29C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1509F2A0: beq         $a1, $at, L_1509F2B8
    if (ctx->r5 == ctx->r1) {
        // 0x1509F2A4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1509F2B8;
    }
    // 0x1509F2A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1509F2A8: beq         $a1, $at, L_1509F2F0
    if (ctx->r5 == ctx->r1) {
        // 0x1509F2AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509F2F0;
    }
    // 0x1509F2AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509F2B0: b           L_1509F328
    // 0x1509F2B4: nop

        goto L_1509F328;
    // 0x1509F2B4: nop

L_1509F2B8:
    // 0x1509F2B8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x1509F2BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1509F2C0: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x1509F2C4: jal         0x1509F660
    // 0x1509F2C8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_1509F660(rdram, ctx);
        goto after_0;
    // 0x1509F2C8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x1509F2CC: b           L_1509F328
    // 0x1509F2D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509F328;
    // 0x1509F2D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509F2D4:
    // 0x1509F2D4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x1509F2D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1509F2DC: andi        $t7, $a0, 0xFFF
    ctx->r15 = ctx->r4 & 0XFFF;
    // 0x1509F2E0: jal         0x1509F660
    // 0x1509F2E4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_1509F660(rdram, ctx);
        goto after_1;
    // 0x1509F2E4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x1509F2E8: b           L_1509F328
    // 0x1509F2EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509F328;
    // 0x1509F2EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509F2F0:
    // 0x1509F2F0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x1509F2F4: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x1509F2F8: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x1509F2FC: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x1509F300: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x1509F304: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x1509F308: and         $t8, $a0, $at
    ctx->r24 = ctx->r4 & ctx->r1;
    // 0x1509F30C: andi        $t0, $a1, 0xFFF
    ctx->r8 = ctx->r5 & 0XFFF;
    // 0x1509F310: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x1509F314: srl         $a0, $t8, 16
    ctx->r4 = S32(U32(ctx->r24) >> 16);
    // 0x1509F318: jal         0x1509F77C
    // 0x1509F31C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_1509F77C(rdram, ctx);
        goto after_2;
    // 0x1509F31C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_2:
    // 0x1509F320: b           L_1509F328
    // 0x1509F324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509F328;
    // 0x1509F324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509F328:
    // 0x1509F328: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1509F32C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1509F330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1509F334: jr          $ra
    // 0x1509F338: nop

    return;
    return;
    // 0x1509F338: nop

;}
RECOMP_FUNC void func_1508B2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508B2A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1508B2AC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1508B2B0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1508B2B4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1508B2B8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1508B2BC: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x1508B2C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1508B2C4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1508B2C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1508B2CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1508B2D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1508B2D4: sra         $t7, $a0, 3
    ctx->r15 = S32(SIGNED(ctx->r4) >> 3);
    // 0x1508B2D8: addu        $v1, $s2, $t7
    ctx->r3 = ADD32(ctx->r18, ctx->r15);
    // 0x1508B2DC: lbu         $t8, 0x36($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X36);
    // 0x1508B2E0: andi        $t9, $a0, 0x3
    ctx->r25 = ctx->r4 & 0X3;
    // 0x1508B2E4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1508B2E8: sllv        $t1, $t0, $t9
    ctx->r9 = S32(ctx->r8 << (ctx->r25 & 31));
    // 0x1508B2EC: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x1508B2F0: sb          $t2, 0x36($v1)
    MEM_B(0X36, ctx->r3) = ctx->r10;
    // 0x1508B2F4: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1508B2F8: lw          $t4, 0x2350($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2350);
    // 0x1508B2FC: sll         $t3, $a0, 4
    ctx->r11 = S32(ctx->r4 << 4);
    // 0x1508B300: lwc1        $f8, 0x0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
    // 0x1508B304: addu        $a2, $t3, $t4
    ctx->r6 = ADD32(ctx->r11, ctx->r12);
    // 0x1508B308: lh          $t5, 0x0($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X0);
    // 0x1508B30C: lh          $t6, 0x4($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X4);
    // 0x1508B310: lwc1        $f18, 0x4($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X4);
    // 0x1508B314: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1508B318: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x1508B31C: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x1508B320: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508B324: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1508B328: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
    // 0x1508B32C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    // 0x1508B330: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508B334: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1508B338: lwc1        $f8, 0x8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X8);
    // 0x1508B33C: sub.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1508B340: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1508B344: nop

    // 0x1508B348: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1508B34C: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1508B350: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x1508B354: nop

    // 0x1508B358: bc1f        L_1508B394
    if (!c1cs) {
        // 0x1508B35C: nop
    
            goto L_1508B394;
    }
    // 0x1508B35C: nop

    // 0x1508B360: lh          $v0, 0x2C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X2C);
    // 0x1508B364: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x1508B368: beq         $at, $zero, L_1508B3D8
    if (ctx->r1 == 0) {
        // 0x1508B36C: addu        $t7, $s2, $v0
        ctx->r15 = ADD32(ctx->r18, ctx->r2);
            goto L_1508B3D8;
    }
    // 0x1508B36C: addu        $t7, $s2, $v0
    ctx->r15 = ADD32(ctx->r18, ctx->r2);
    // 0x1508B370: sb          $a0, 0x2E($t7)
    MEM_B(0X2E, ctx->r15) = ctx->r4;
    // 0x1508B374: lh          $t0, 0x2C($s2)
    ctx->r8 = MEM_H(ctx->r18, 0X2C);
    // 0x1508B378: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x1508B37C: addu        $t8, $s2, $t9
    ctx->r24 = ADD32(ctx->r18, ctx->r25);
    // 0x1508B380: swc1        $f2, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f2.u32l;
    // 0x1508B384: lh          $t1, 0x2C($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X2C);
    // 0x1508B388: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x1508B38C: b           L_1508B3D8
    // 0x1508B390: sh          $t2, 0x2C($s2)
    MEM_H(0X2C, ctx->r18) = ctx->r10;
        goto L_1508B3D8;
    // 0x1508B390: sh          $t2, 0x2C($s2)
    MEM_H(0X2C, ctx->r18) = ctx->r10;
L_1508B394:
    // 0x1508B394: lbu         $a0, 0x9($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X9);
    // 0x1508B398: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1508B39C: beq         $s3, $a0, L_1508B3CC
    if (ctx->r19 == ctx->r4) {
        // 0x1508B3A0: andi        $v1, $a0, 0xFF
        ctx->r3 = ctx->r4 & 0XFF;
            goto L_1508B3CC;
    }
    // 0x1508B3A0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x1508B3A4: sra         $t3, $v1, 3
    ctx->r11 = S32(SIGNED(ctx->r3) >> 3);
    // 0x1508B3A8: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x1508B3AC: lbu         $t5, 0x36($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X36);
    // 0x1508B3B0: andi        $t6, $v1, 0x3
    ctx->r14 = ctx->r3 & 0X3;
    // 0x1508B3B4: sllv        $t0, $t7, $t6
    ctx->r8 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x1508B3B8: and         $t9, $t5, $t0
    ctx->r25 = ctx->r13 & ctx->r8;
    // 0x1508B3BC: bnel        $t9, $zero, L_1508B3D0
    if (ctx->r25 != 0) {
        // 0x1508B3C0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1508B3D0;
    }
    goto skip_0;
    // 0x1508B3C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x1508B3C4: jal         0x1508B2A8
    // 0x1508B3C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_1508B2A8(rdram, ctx);
        goto after_0;
    // 0x1508B3C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
L_1508B3CC:
    // 0x1508B3CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1508B3D0:
    // 0x1508B3D0: bne         $s0, $s4, L_1508B394
    if (ctx->r16 != ctx->r20) {
        // 0x1508B3D4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1508B394;
    }
    // 0x1508B3D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1508B3D8:
    // 0x1508B3D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1508B3DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1508B3E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1508B3E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1508B3E8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1508B3EC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1508B3F0: jr          $ra
    // 0x1508B3F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1508B3F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1518BBF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518BBF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1518BBF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1518BBFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1518BC00: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1518BC04: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1518BC08: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1518BC0C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1518BC10: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1518BC14: beq         $s0, $zero, L_1518BCB0
    if (ctx->r16 == 0) {
        // 0x1518BC18: lui         $s3, 0x800E
        ctx->r19 = S32(0X800E << 16);
            goto L_1518BCB0;
    }
    // 0x1518BC18: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x1518BC1C: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x1518BC20: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x1518BC24: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x1518BC28: addiu       $s1, $s1, -0x2E70
    ctx->r17 = ADD32(ctx->r17, -0X2E70);
    // 0x1518BC2C: addiu       $s2, $s2, -0x2E68
    ctx->r18 = ADD32(ctx->r18, -0X2E68);
    // 0x1518BC30: addiu       $s4, $s4, -0x2E70
    ctx->r20 = ADD32(ctx->r20, -0X2E70);
    // 0x1518BC34: addiu       $s3, $s3, -0x31B0
    ctx->r19 = ADD32(ctx->r19, -0X31B0);
    // 0x1518BC38: lb          $t6, 0x0($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X0);
L_1518BC3C:
    // 0x1518BC3C: lw          $a0, 0x7C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X7C);
    // 0x1518BC40: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x1518BC44: beq         $a0, $zero, L_1518BC98
    if (ctx->r4 == 0) {
        // 0x1518BC48: sb          $t7, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r15;
            goto L_1518BC98;
    }
    // 0x1518BC48: sb          $t7, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r15;
    // 0x1518BC4C: lb          $t8, 0x0($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X0);
    // 0x1518BC50: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1518BC54: addu        $v0, $s2, $t9
    ctx->r2 = ADD32(ctx->r18, ctx->r25);
    // 0x1518BC58: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
L_1518BC5C:
    // 0x1518BC5C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x1518BC60: bne         $s0, $zero, L_1518BC78
    if (ctx->r16 != 0) {
        // 0x1518BC64: sw          $s0, 0x24($a0)
        MEM_W(0X24, ctx->r4) = ctx->r16;
            goto L_1518BC78;
    }
    // 0x1518BC64: sw          $s0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r16;
    // 0x1518BC68: lbu         $t1, 0x3B($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X3B);
    // 0x1518BC6C: lbu         $t2, 0x28($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X28);
    // 0x1518BC70: bnel        $t1, $t2, L_1518BC84
    if (ctx->r9 != ctx->r10) {
        // 0x1518BC74: lb          $t3, 0x0($s1)
        ctx->r11 = MEM_B(ctx->r17, 0X0);
            goto L_1518BC84;
    }
    goto skip_0;
    // 0x1518BC74: lb          $t3, 0x0($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X0);
    skip_0:
L_1518BC78:
    // 0x1518BC78: jal         0x1516972C
    // 0x1518BC7C: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x1518BC7C: nop

    after_0:
    // 0x1518BC80: lb          $t3, 0x0($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X0);
L_1518BC84:
    // 0x1518BC84: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x1518BC88: addu        $v0, $s2, $t4
    ctx->r2 = ADD32(ctx->r18, ctx->r12);
    // 0x1518BC8C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x1518BC90: bnel        $a0, $zero, L_1518BC5C
    if (ctx->r4 != 0) {
        // 0x1518BC94: lw          $t0, 0x8($a0)
        ctx->r8 = MEM_W(ctx->r4, 0X8);
            goto L_1518BC5C;
    }
    goto skip_1;
    // 0x1518BC94: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    skip_1:
L_1518BC98:
    // 0x1518BC98: lb          $t5, 0x0($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X0);
    // 0x1518BC9C: addiu       $s3, $s3, 0x1A0
    ctx->r19 = ADD32(ctx->r19, 0X1A0);
    // 0x1518BCA0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x1518BCA4: sb          $t6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r14;
    // 0x1518BCA8: bnel        $s3, $s4, L_1518BC3C
    if (ctx->r19 != ctx->r20) {
        // 0x1518BCAC: lb          $t6, 0x0($s1)
        ctx->r14 = MEM_B(ctx->r17, 0X0);
            goto L_1518BC3C;
    }
    goto skip_2;
    // 0x1518BCAC: lb          $t6, 0x0($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X0);
    skip_2:
L_1518BCB0:
    // 0x1518BCB0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1518BCB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1518BCB8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1518BCBC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1518BCC0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1518BCC4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1518BCC8: jr          $ra
    // 0x1518BCCC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1518BCCC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}

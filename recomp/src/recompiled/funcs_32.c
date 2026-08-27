#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_15160B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15160B74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15160B78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15160B7C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15160B80: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x15160B84: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15160B88: addiu       $v1, $a3, 0x18
    ctx->r3 = ADD32(ctx->r7, 0X18);
    // 0x15160B8C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x15160B90: bnel        $t6, $zero, L_15160BA4
    if (ctx->r14 != 0) {
        // 0x15160B94: lbu         $t7, 0x4($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X4);
            goto L_15160BA4;
    }
    goto skip_0;
    // 0x15160B94: lbu         $t7, 0x4($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4);
    skip_0:
    // 0x15160B98: b           L_15160CCC
    // 0x15160B9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15160CCC;
    // 0x15160B9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15160BA0: lbu         $t7, 0x4($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4);
L_15160BA4:
    // 0x15160BA4: lbu         $t8, 0x3B($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3B);
    // 0x15160BA8: beql        $t7, $t8, L_15160BBC
    if (ctx->r15 == ctx->r24) {
        // 0x15160BAC: lw          $t0, 0x1D4($v0)
        ctx->r8 = MEM_W(ctx->r2, 0X1D4);
            goto L_15160BBC;
    }
    goto skip_1;
    // 0x15160BAC: lw          $t0, 0x1D4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X1D4);
    skip_1:
    // 0x15160BB0: b           L_15160CCC
    // 0x15160BB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15160CCC;
    // 0x15160BB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15160BB8: lw          $t0, 0x1D4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X1D4);
L_15160BBC:
    // 0x15160BBC: beql        $t0, $zero, L_15160C58
    if (ctx->r8 == 0) {
        // 0x15160BC0: lwc1        $f4, 0x14($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
            goto L_15160C58;
    }
    goto skip_2;
    // 0x15160BC0: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    skip_2:
    // 0x15160BC4: lbu         $t9, 0x74($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X74);
    // 0x15160BC8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15160BCC: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x15160BD0: andi        $t2, $t9, 0xF
    ctx->r10 = ctx->r25 & 0XF;
    // 0x15160BD4: beq         $t2, $at, L_15160C54
    if (ctx->r10 == ctx->r1) {
        // 0x15160BD8: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_15160C54;
    }
    // 0x15160BD8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x15160BDC: lbu         $t3, 0x5($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X5);
    // 0x15160BE0: sb          $t1, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r9;
    // 0x15160BE4: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x15160BE8: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x15160BEC: addu        $a2, $t0, $t4
    ctx->r6 = ADD32(ctx->r8, ctx->r12);
    // 0x15160BF0: jal         0x15143134
    // 0x15160BF4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x15160BF4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x15160BF8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15160BFC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x15160C00: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x15160C04: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15160C08: lw          $t7, 0x14($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X14);
    // 0x15160C0C: lbu         $t1, 0x37($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X37);
    // 0x15160C10: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x15160C14: nop

    // 0x15160C18: sh          $t6, 0xE($t7)
    MEM_H(0XE, ctx->r15) = ctx->r14;
    // 0x15160C1C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15160C20: lw          $t2, 0x14($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X14);
    // 0x15160C24: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15160C28: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x15160C2C: nop

    // 0x15160C30: sh          $t9, 0x10($t2)
    MEM_H(0X10, ctx->r10) = ctx->r25;
    // 0x15160C34: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15160C38: lw          $t5, 0x14($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X14);
    // 0x15160C3C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15160C40: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x15160C44: nop

    // 0x15160C48: sh          $t4, 0x12($t5)
    MEM_H(0X12, ctx->r13) = ctx->r12;
    // 0x15160C4C: b           L_15160CA0
    // 0x15160C50: lb          $v0, 0x14($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X14);
        goto L_15160CA0;
    // 0x15160C50: lb          $v0, 0x14($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X14);
L_15160C54:
    // 0x15160C54: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
L_15160C58:
    // 0x15160C58: lw          $t8, 0x14($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X14);
    // 0x15160C5C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15160C60: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15160C64: nop

    // 0x15160C68: sh          $t7, 0xE($t8)
    MEM_H(0XE, ctx->r24) = ctx->r15;
    // 0x15160C6C: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15160C70: lw          $t3, 0x14($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X14);
    // 0x15160C74: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15160C78: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x15160C7C: nop

    // 0x15160C80: sh          $t2, 0x10($t3)
    MEM_H(0X10, ctx->r11) = ctx->r10;
    // 0x15160C84: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15160C88: lw          $t6, 0x14($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X14);
    // 0x15160C8C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15160C90: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x15160C94: nop

    // 0x15160C98: sh          $t5, 0x12($t6)
    MEM_H(0X12, ctx->r14) = ctx->r13;
    // 0x15160C9C: lb          $v0, 0x14($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X14);
L_15160CA0:
    // 0x15160CA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15160CA4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15160CA8: beq         $v0, $at, L_15160CC8
    if (ctx->r2 == ctx->r1) {
        // 0x15160CAC: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15160CC8;
    }
    // 0x15160CAC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15160CB0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15160CB4: lw          $t9, -0x4E08($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4E08);
    // 0x15160CB8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x15160CBC: jalr        $t9
    // 0x15160CC0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15160CC0: nop

    after_1:
    // 0x15160CC4: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
L_15160CC8:
    // 0x15160CC8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_15160CCC:
    // 0x15160CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15160CD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15160CD4: jr          $ra
    // 0x15160CD8: nop

    return;
    return;
    // 0x15160CD8: nop

;}
RECOMP_FUNC void func_1505DFDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505DFDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1505DFE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1505DFE4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1505DFE8: lw          $v0, 0x2D0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X2D0);
    // 0x1505DFEC: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x1505DFF0: sh          $t6, 0x84($a2)
    MEM_H(0X84, ctx->r6) = ctx->r14;
    // 0x1505DFF4: beql        $v0, $zero, L_1505E054
    if (ctx->r2 == 0) {
        // 0x1505DFF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1505E054;
    }
    goto skip_0;
    // 0x1505DFF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1505DFFC: lbu         $t7, 0x4($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X4);
    // 0x1505E000: addiu       $a0, $v0, 0x40
    ctx->r4 = ADD32(ctx->r2, 0X40);
    // 0x1505E004: addiu       $a1, $zero, 0x3A0
    ctx->r5 = ADD32(0, 0X3A0);
    // 0x1505E008: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x1505E00C: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x1505E010: jal         0x100226F0
    // 0x1505E014: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x1505E014: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x1505E018: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x1505E01C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1505E020: addiu       $t0, $t0, 0x4ED0
    ctx->r8 = ADD32(ctx->r8, 0X4ED0);
    // 0x1505E024: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x1505E028: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x1505E02C: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x1505E030: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x1505E034: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x1505E038: sb          $t2, 0x41($v0)
    MEM_B(0X41, ctx->r2) = ctx->r10;
    // 0x1505E03C: lhu         $t3, 0x0($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X0);
    // 0x1505E040: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x1505E044: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x1505E048: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x1505E04C: sb          $t4, 0x211($v0)
    MEM_B(0X211, ctx->r2) = ctx->r12;
    // 0x1505E050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1505E054:
    // 0x1505E054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1505E058: jr          $ra
    // 0x1505E05C: nop

    return;
    return;
    // 0x1505E05C: nop

;}
RECOMP_FUNC void func_151412BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151412BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151412C0: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x151412C4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x151412C8: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x151412CC: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x151412D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151412D4: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x151412D8: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x151412DC: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x151412E0: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x151412E4: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x151412E8: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x151412EC: addiu       $t3, $t3, 0x5168
    ctx->r11 = ADD32(ctx->r11, 0X5168);
    // 0x151412F0: addiu       $t4, $t4, 0x2FA0
    ctx->r12 = ADD32(ctx->r12, 0X2FA0);
    // 0x151412F4: addiu       $t5, $t5, -0x19E0
    ctx->r13 = ADD32(ctx->r13, -0X19E0);
    // 0x151412F8: addiu       $s0, $s0, -0x19DC
    ctx->r16 = ADD32(ctx->r16, -0X19DC);
    // 0x151412FC: addiu       $s1, $s1, -0x163C
    ctx->r17 = ADD32(ctx->r17, -0X163C);
    // 0x15141300: addiu       $s2, $s2, -0x2E70
    ctx->r18 = ADD32(ctx->r18, -0X2E70);
    // 0x15141304: addiu       $a0, $a0, -0x31B0
    ctx->r4 = ADD32(ctx->r4, -0X31B0);
    // 0x15141308: addiu       $s3, $zero, 0x7FFF
    ctx->r19 = ADD32(0, 0X7FFF);
    // 0x1514130C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15141310:
    // 0x15141310: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15141314: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x15141318: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1514131C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15141320: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15141324: addu        $t6, $a0, $t9
    ctx->r14 = ADD32(ctx->r4, ctx->r25);
    // 0x15141328: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
    // 0x1514132C: beql        $v1, $zero, L_1514140C
    if (ctx->r3 == 0) {
        // 0x15141330: andi        $t8, $v0, 0xFF
        ctx->r24 = ctx->r2 & 0XFF;
            goto L_1514140C;
    }
    goto skip_0;
    // 0x15141330: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    skip_0:
    // 0x15141334: lw          $a1, 0x58($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X58);
L_15141338:
    // 0x15141338: andi        $t7, $a1, 0x2000
    ctx->r15 = ctx->r5 & 0X2000;
    // 0x1514133C: beq         $t7, $zero, L_151413FC
    if (ctx->r15 == 0) {
        // 0x15141340: andi        $t8, $a1, 0x10
        ctx->r24 = ctx->r5 & 0X10;
            goto L_151413FC;
    }
    // 0x15141340: andi        $t8, $a1, 0x10
    ctx->r24 = ctx->r5 & 0X10;
    // 0x15141344: sh          $zero, 0x162($v1)
    MEM_H(0X162, ctx->r3) = 0;
    // 0x15141348: sh          $zero, 0x160($v1)
    MEM_H(0X160, ctx->r3) = 0;
    // 0x1514134C: sh          $zero, 0x15E($v1)
    MEM_H(0X15E, ctx->r3) = 0;
    // 0x15141350: beq         $t8, $zero, L_151413FC
    if (ctx->r24 == 0) {
        // 0x15141354: sh          $zero, 0x15C($v1)
        MEM_H(0X15C, ctx->r3) = 0;
            goto L_151413FC;
    }
    // 0x15141354: sh          $zero, 0x15C($v1)
    MEM_H(0X15C, ctx->r3) = 0;
    // 0x15141358: lw          $t9, 0x0($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X0);
    // 0x1514135C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15141360: addiu       $a3, $v1, 0x110
    ctx->r7 = ADD32(ctx->r3, 0X110);
    // 0x15141364: bltz        $t9, L_151413FC
    if (SIGNED(ctx->r25) < 0) {
        // 0x15141368: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_151413FC;
    }
L_15141368:
    // 0x15141368: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x1514136C: addu        $t0, $a3, $t6
    ctx->r8 = ADD32(ctx->r7, ctx->r14);
    // 0x15141370: lw          $t2, 0x24($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X24);
    // 0x15141374: sll         $t8, $a1, 1
    ctx->r24 = S32(ctx->r5 << 1);
    // 0x15141378: bltzl       $t2, L_151413E0
    if (SIGNED(ctx->r10) < 0) {
        // 0x1514137C: addu        $t7, $a3, $t8
        ctx->r15 = ADD32(ctx->r7, ctx->r24);
            goto L_151413E0;
    }
    goto skip_1;
    // 0x1514137C: addu        $t7, $a3, $t8
    ctx->r15 = ADD32(ctx->r7, ctx->r24);
    skip_1:
    // 0x15141380: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x15141384: slt         $at, $t2, $a2
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x15141388: beql        $at, $zero, L_151413E0
    if (ctx->r1 == 0) {
        // 0x1514138C: addu        $t7, $a3, $t8
        ctx->r15 = ADD32(ctx->r7, ctx->r24);
            goto L_151413E0;
    }
    goto skip_2;
    // 0x1514138C: addu        $t7, $a3, $t8
    ctx->r15 = ADD32(ctx->r7, ctx->r24);
    skip_2:
    // 0x15141390: lw          $t1, 0x34($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X34);
    // 0x15141394: bltzl       $t1, L_151413E0
    if (SIGNED(ctx->r9) < 0) {
        // 0x15141398: addu        $t7, $a3, $t8
        ctx->r15 = ADD32(ctx->r7, ctx->r24);
            goto L_151413E0;
    }
    goto skip_3;
    // 0x15141398: addu        $t7, $a3, $t8
    ctx->r15 = ADD32(ctx->r7, ctx->r24);
    skip_3:
    // 0x1514139C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x151413A0: slt         $at, $t1, $t7
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x151413A4: beql        $at, $zero, L_151413E0
    if (ctx->r1 == 0) {
        // 0x151413A8: addu        $t7, $a3, $t8
        ctx->r15 = ADD32(ctx->r7, ctx->r24);
            goto L_151413E0;
    }
    goto skip_4;
    // 0x151413A8: addu        $t7, $a3, $t8
    ctx->r15 = ADD32(ctx->r7, ctx->r24);
    skip_4:
    // 0x151413AC: multu       $t1, $a2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151413B0: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x151413B4: mflo        $t9
    ctx->r25 = lo;
    // 0x151413B8: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x151413BC: sll         $t9, $t2, 1
    ctx->r25 = S32(ctx->r10 << 1);
    // 0x151413C0: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x151413C4: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x151413C8: lhu         $t6, 0x0($t8)
    ctx->r14 = MEM_HU(ctx->r24, 0X0);
    // 0x151413CC: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x151413D0: addu        $t9, $a3, $t7
    ctx->r25 = ADD32(ctx->r7, ctx->r15);
    // 0x151413D4: b           L_151413E4
    // 0x151413D8: sh          $t6, 0x4C($t9)
    MEM_H(0X4C, ctx->r25) = ctx->r14;
        goto L_151413E4;
    // 0x151413D8: sh          $t6, 0x4C($t9)
    MEM_H(0X4C, ctx->r25) = ctx->r14;
    // 0x151413DC: addu        $t7, $a3, $t8
    ctx->r15 = ADD32(ctx->r7, ctx->r24);
L_151413E0:
    // 0x151413E0: sh          $s3, 0x4C($t7)
    MEM_H(0X4C, ctx->r15) = ctx->r19;
L_151413E4:
    // 0x151413E4: lw          $t9, 0x0($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X0);
    // 0x151413E8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x151413EC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x151413F0: slt         $at, $t9, $t6
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151413F4: beq         $at, $zero, L_15141368
    if (ctx->r1 == 0) {
        // 0x151413F8: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_15141368;
    }
    // 0x151413F8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
L_151413FC:
    // 0x151413FC: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    // 0x15141400: bnel        $v1, $zero, L_15141338
    if (ctx->r3 != 0) {
        // 0x15141404: lw          $a1, 0x58($v1)
        ctx->r5 = MEM_W(ctx->r3, 0X58);
            goto L_15141338;
    }
    goto skip_5;
    // 0x15141404: lw          $a1, 0x58($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X58);
    skip_5:
    // 0x15141408: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
L_1514140C:
    // 0x1514140C: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x15141410: bne         $at, $zero, L_15141310
    if (ctx->r1 != 0) {
        // 0x15141414: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_15141310;
    }
    // 0x15141414: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x15141418: addiu       $a0, $a0, 0x1A0
    ctx->r4 = ADD32(ctx->r4, 0X1A0);
    // 0x1514141C: bnel        $a0, $s2, L_15141310
    if (ctx->r4 != ctx->r18) {
        // 0x15141420: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15141310;
    }
    goto skip_6;
    // 0x15141420: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x15141424: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x15141428: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x1514142C: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x15141430: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x15141434: jr          $ra
    // 0x15141438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15141438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1501A8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501A8C0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1501A8C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x1501A8C8: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x1501A8CC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1501A8D0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x1501A8D4: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x1501A8D8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1501A8DC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1501A8E0: addiu       $t1, $t1, -0x19C8
    ctx->r9 = ADD32(ctx->r9, -0X19C8);
    // 0x1501A8E4: addiu       $t0, $t0, -0x19B0
    ctx->r8 = ADD32(ctx->r8, -0X19B0);
    // 0x1501A8E8: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1501A8EC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1501A8F0: addiu       $s1, $s1, -0x19D8
    ctx->r17 = ADD32(ctx->r17, -0X19D8);
    // 0x1501A8F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1501A8F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1501A8FC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1501A900: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1501A904: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x1501A908: addu        $t8, $t1, $v1
    ctx->r24 = ADD32(ctx->r9, ctx->r3);
    // 0x1501A90C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1501A910: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x1501A914: sll         $s0, $s2, 2
    ctx->r16 = S32(ctx->r18 << 2);
    // 0x1501A918: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1501A91C: subu        $s0, $s0, $s2
    ctx->r16 = SUB32(ctx->r16, ctx->r18);
    // 0x1501A920: sll         $s0, $s0, 7
    ctx->r16 = S32(ctx->r16 << 7);
    // 0x1501A924: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1501A928: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x1501A92C: addu        $t4, $t0, $v1
    ctx->r12 = ADD32(ctx->r8, ctx->r3);
    // 0x1501A930: swc1        $f6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f6.u32l;
    // 0x1501A934: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1501A938: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x1501A93C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x1501A940: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x1501A944: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1501A948: beq         $a1, $zero, L_1501A980
    if (ctx->r5 == 0) {
        // 0x1501A94C: swc1        $f10, 0x8($t7)
        MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
            goto L_1501A980;
    }
    // 0x1501A94C: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
    // 0x1501A950: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x1501A954: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1501A958: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1501A95C: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x1501A960: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1501A964: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x1501A968: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x1501A96C: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1501A970: addu        $v0, $t9, $s0
    ctx->r2 = ADD32(ctx->r25, ctx->r16);
    // 0x1501A974: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1501A978: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x1501A97C: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
L_1501A980:
    // 0x1501A980: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1501A984: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1501A988: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x1501A98C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x1501A990: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x1501A994: lwc1        $f10, 0x2FA8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2FA8);
    // 0x1501A998: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x1501A99C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1501A9A0: swc1        $f10, 0x64($t3)
    MEM_W(0X64, ctx->r11) = ctx->f10.u32l;
    // 0x1501A9A4: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x1501A9A8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1501A9AC: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x1501A9B0: bne         $a1, $at, L_1501AA08
    if (ctx->r5 != ctx->r1) {
        // 0x1501A9B4: swc1        $f0, 0x68($t5)
        MEM_W(0X68, ctx->r13) = ctx->f0.u32l;
            goto L_1501AA08;
    }
    // 0x1501A9B4: swc1        $f0, 0x68($t5)
    MEM_W(0X68, ctx->r13) = ctx->f0.u32l;
    // 0x1501A9B8: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x1501A9BC: addiu       $v1, $v1, -0x1948
    ctx->r3 = ADD32(ctx->r3, -0X1948);
    // 0x1501A9C0: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1501A9C4: addu        $v0, $t6, $s0
    ctx->r2 = ADD32(ctx->r14, ctx->r16);
    // 0x1501A9C8: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1501A9CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501A9D0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1501A9D4: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x1501A9D8: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1501A9DC: lwc1        $f8, 0x68E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X68E4);
    // 0x1501A9E0: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1501A9E4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1501A9E8: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1501A9EC: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x1501A9F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1501A9F4: swc1        $f18, 0x6C($t8)
    MEM_W(0X6C, ctx->r24) = ctx->f18.u32l;
    // 0x1501A9F8: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1501A9FC: addu        $t2, $t9, $s0
    ctx->r10 = ADD32(ctx->r25, ctx->r16);
    // 0x1501AA00: b           L_1501AA30
    // 0x1501AA04: swc1        $f4, 0x70($t2)
    MEM_W(0X70, ctx->r10) = ctx->f4.u32l;
        goto L_1501AA30;
    // 0x1501AA04: swc1        $f4, 0x70($t2)
    MEM_W(0X70, ctx->r10) = ctx->f4.u32l;
L_1501AA08:
    // 0x1501AA08: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x1501AA0C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501AA10: lwc1        $f6, 0x68E8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X68E8);
    // 0x1501AA14: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x1501AA18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1501AA1C: swc1        $f6, 0x6C($t4)
    MEM_W(0X6C, ctx->r12) = ctx->f6.u32l;
    // 0x1501AA20: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x1501AA24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1501AA28: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x1501AA2C: swc1        $f8, 0x70($t6)
    MEM_W(0X70, ctx->r14) = ctx->f8.u32l;
L_1501AA30:
    // 0x1501AA30: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1501AA34: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1501AA38: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1501AA3C: addu        $v0, $t7, $s0
    ctx->r2 = ADD32(ctx->r15, ctx->r16);
    // 0x1501AA40: lwc1        $f10, 0x6C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X6C);
    // 0x1501AA44: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x1501AA48: addu        $t4, $t4, $a1
    ctx->r12 = ADD32(ctx->r12, ctx->r5);
    // 0x1501AA4C: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x1501AA50: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x1501AA54: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1501AA58: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501AA5C: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x1501AA60: lwc1        $f18, 0x70($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X70);
    // 0x1501AA64: sll         $t5, $s2, 2
    ctx->r13 = S32(ctx->r18 << 2);
    // 0x1501AA68: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x1501AA6C: swc1        $f18, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f18.u32l;
    // 0x1501AA70: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1501AA74: addiu       $t7, $t7, -0x1998
    ctx->r15 = ADD32(ctx->r15, -0X1998);
    // 0x1501AA78: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x1501AA7C: addu        $v0, $t9, $s0
    ctx->r2 = ADD32(ctx->r25, ctx->r16);
    // 0x1501AA80: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1501AA84: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1501AA88: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1501AA8C: swc1        $f8, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->f8.u32l;
    // 0x1501AA90: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x1501AA94: addu        $v0, $t2, $s0
    ctx->r2 = ADD32(ctx->r10, ctx->r16);
    // 0x1501AA98: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1501AA9C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1501AAA0: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x1501AAA4: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x1501AAA8: addu        $v0, $t3, $s0
    ctx->r2 = ADD32(ctx->r11, ctx->r16);
    // 0x1501AAAC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1501AAB0: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x1501AAB4: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x1501AAB8: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x1501AABC: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1501AAC0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1501AAC4: addu        $t2, $t9, $s0
    ctx->r10 = ADD32(ctx->r25, ctx->r16);
    // 0x1501AAC8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1501AACC: swc1        $f10, 0x34($t2)
    MEM_W(0X34, ctx->r10) = ctx->f10.u32l;
    // 0x1501AAD0: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x1501AAD4: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x1501AAD8: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x1501AADC: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x1501AAE0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1501AAE4: swc1        $f4, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->f4.u32l;
    // 0x1501AAE8: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x1501AAEC: addu        $v0, $t6, $s0
    ctx->r2 = ADD32(ctx->r14, ctx->r16);
    // 0x1501AAF0: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1501AAF4: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1501AAF8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1501AAFC: swc1        $f10, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f10.u32l;
    // 0x1501AB00: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1501AB04: addu        $v0, $t7, $s0
    ctx->r2 = ADD32(ctx->r15, ctx->r16);
    // 0x1501AB08: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1501AB0C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1501AB10: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x1501AB14: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x1501AB18: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x1501AB1C: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x1501AB20: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1501AB24: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1501AB28: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1501AB2C: swc1        $f18, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f18.u32l;
    // 0x1501AB30: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1501AB34: addu        $v0, $t9, $s0
    ctx->r2 = ADD32(ctx->r25, ctx->r16);
    // 0x1501AB38: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1501AB3C: lwc1        $f6, 0x38($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1501AB40: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1501AB44: beq         $a3, $zero, L_1501AB64
    if (ctx->r7 == 0) {
        // 0x1501AB48: swc1        $f8, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
            goto L_1501AB64;
    }
    // 0x1501AB48: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x1501AB4C: jal         0x1501B0A0
    // 0x1501AB50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_1501B0A0(rdram, ctx);
        goto after_0;
    // 0x1501AB50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x1501AB54: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1501AB58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1501AB5C: b           L_1501ABC8
    // 0x1501AB60: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
        goto L_1501ABC8;
    // 0x1501AB60: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
L_1501AB64:
    // 0x1501AB64: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x1501AB68: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x1501AB6C: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x1501AB70: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x1501AB74: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x1501AB78: addu        $v0, $t4, $s0
    ctx->r2 = ADD32(ctx->r12, ctx->r16);
    // 0x1501AB7C: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1501AB80: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1501AB84: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1501AB88: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1501AB8C: div.s       $f14, $f0, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1501AB90: div.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f4.fl);
    // 0x1501AB94: div.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1501AB98: div.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f12.fl, ctx->f14.fl);
    // 0x1501AB9C: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1501ABA0: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x1501ABA4: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x1501ABA8: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x1501ABAC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1501ABB0: addu        $v0, $t5, $s0
    ctx->r2 = ADD32(ctx->r13, ctx->r16);
    // 0x1501ABB4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1501ABB8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1501ABBC: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1501ABC0: swc1        $f10, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
    // 0x1501ABC4: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
L_1501ABC8:
    // 0x1501ABC8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501ABCC: lwc1        $f4, 0x68EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X68EC);
    // 0x1501ABD0: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x1501ABD4: lwc1        $f18, 0x6C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X6C);
    // 0x1501ABD8: mul.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x1501ABDC: nop

    // 0x1501ABE0: mul.s       $f20, $f6, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1501ABE4: jal         0x15047D60
    // 0x1501ABE8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x1501ABE8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x1501ABEC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x1501ABF0: jal         0x15047C00
    // 0x1501ABF4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x1501ABF4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x1501ABF8: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1501ABFC: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1501AC00: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1501AC04: addu        $v0, $t9, $s0
    ctx->r2 = ADD32(ctx->r25, ctx->r16);
    // 0x1501AC08: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1501AC0C: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1501AC10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1501AC14: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501AC18: div.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1501AC1C: swc1        $f6, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f6.u32l;
    // 0x1501AC20: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x1501AC24: lwc1        $f18, 0x68F0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X68F0);
    // 0x1501AC28: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x1501AC2C: lwc1        $f4, 0x70($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X70);
    // 0x1501AC30: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1501AC34: nop

    // 0x1501AC38: mul.s       $f20, $f8, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1501AC3C: jal         0x15047D60
    // 0x1501AC40: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x1501AC40: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x1501AC44: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x1501AC48: jal         0x15047C00
    // 0x1501AC4C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_4;
    // 0x1501AC4C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x1501AC50: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x1501AC54: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1501AC58: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1501AC5C: addu        $v0, $t4, $s0
    ctx->r2 = ADD32(ctx->r12, ctx->r16);
    // 0x1501AC60: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1501AC64: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1501AC68: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1501AC6C: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1501AC70: addiu       $a0, $a0, -0x19D4
    ctx->r4 = ADD32(ctx->r4, -0X19D4);
    // 0x1501AC74: sll         $v1, $s2, 4
    ctx->r3 = S32(ctx->r18 << 4);
    // 0x1501AC78: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1501AC7C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1501AC80: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1501AC84: addiu       $a2, $a2, -0x1640
    ctx->r6 = ADD32(ctx->r6, -0X1640);
    // 0x1501AC88: div.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1501AC8C: swc1        $f8, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f8.u32l;
    // 0x1501AC90: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x1501AC94: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x1501AC98: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x1501AC9C: lwc1        $f18, 0x4($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X4);
    // 0x1501ACA0: addu        $t2, $t9, $v1
    ctx->r10 = ADD32(ctx->r25, ctx->r3);
    // 0x1501ACA4: add.s       $f2, $f18, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x1501ACA8: add.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x1501ACAC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1501ACB0: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x1501ACB4: nop

    // 0x1501ACB8: sh          $t8, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r24;
    // 0x1501ACBC: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x1501ACC0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x1501ACC4: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x1501ACC8: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x1501ACCC: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x1501ACD0: add.s       $f12, $f10, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x1501ACD4: add.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f12.fl;
    // 0x1501ACD8: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1501ACDC: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x1501ACE0: nop

    // 0x1501ACE4: sh          $t6, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r14;
    // 0x1501ACE8: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x1501ACEC: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x1501ACF0: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x1501ACF4: sra         $t8, $a1, 1
    ctx->r24 = S32(SIGNED(ctx->r5) >> 1);
    // 0x1501ACF8: sh          $t8, 0x4($t3)
    MEM_H(0X4, ctx->r11) = ctx->r24;
    // 0x1501ACFC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x1501AD00: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x1501AD04: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x1501AD08: sh          $zero, 0x6($t5)
    MEM_H(0X6, ctx->r13) = 0;
    // 0x1501AD0C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1501AD10: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x1501AD14: addu        $t6, $t7, $s0
    ctx->r14 = ADD32(ctx->r15, ctx->r16);
    // 0x1501AD18: lwc1        $f4, 0x34($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X34);
    // 0x1501AD1C: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x1501AD20: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x1501AD24: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1501AD28: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x1501AD2C: nop

    // 0x1501AD30: sh          $t8, 0x8($t3)
    MEM_H(0X8, ctx->r11) = ctx->r24;
    // 0x1501AD34: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x1501AD38: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x1501AD3C: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x1501AD40: lwc1        $f8, 0x38($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X38);
    // 0x1501AD44: addu        $t2, $t9, $v1
    ctx->r10 = ADD32(ctx->r25, ctx->r3);
    // 0x1501AD48: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x1501AD4C: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1501AD50: subu        $t9, $t9, $s2
    ctx->r25 = SUB32(ctx->r25, ctx->r18);
    // 0x1501AD54: sll         $t9, $t9, 7
    ctx->r25 = S32(ctx->r25 << 7);
    // 0x1501AD58: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1501AD5C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x1501AD60: nop

    // 0x1501AD64: sh          $t6, 0xA($t2)
    MEM_H(0XA, ctx->r10) = ctx->r14;
    // 0x1501AD68: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x1501AD6C: addu        $t3, $t8, $v1
    ctx->r11 = ADD32(ctx->r24, ctx->r3);
    // 0x1501AD70: sh          $a1, 0xC($t3)
    MEM_H(0XC, ctx->r11) = ctx->r5;
    // 0x1501AD74: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x1501AD78: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x1501AD7C: sh          $zero, 0xE($t5)
    MEM_H(0XE, ctx->r13) = 0;
    // 0x1501AD80: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x1501AD84: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1501AD88: lbu         $t2, 0x0($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X0);
    // 0x1501AD8C: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x1501AD90: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x1501AD94: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x1501AD98: sll         $t8, $t2, 4
    ctx->r24 = S32(ctx->r10 << 4);
    // 0x1501AD9C: addu        $t3, $t6, $t8
    ctx->r11 = ADD32(ctx->r14, ctx->r24);
    // 0x1501ADA0: sw          $at, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r1;
    // 0x1501ADA4: lw          $t9, 0x4($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X4);
    // 0x1501ADA8: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x1501ADAC: subu        $t6, $t6, $s2
    ctx->r14 = SUB32(ctx->r14, ctx->r18);
    // 0x1501ADB0: sw          $t9, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->r25;
    // 0x1501ADB4: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x1501ADB8: sll         $t6, $t6, 7
    ctx->r14 = S32(ctx->r14 << 7);
    // 0x1501ADBC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1501ADC0: sw          $at, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->r1;
    // 0x1501ADC4: lw          $t9, 0xC($t5)
    ctx->r25 = MEM_W(ctx->r13, 0XC);
    // 0x1501ADC8: sw          $t9, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->r25;
    // 0x1501ADCC: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x1501ADD0: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x1501ADD4: addu        $v0, $t2, $t6
    ctx->r2 = ADD32(ctx->r10, ctx->r14);
    // 0x1501ADD8: sll         $t7, $v1, 4
    ctx->r15 = S32(ctx->r3 << 4);
    // 0x1501ADDC: addu        $t3, $v0, $t7
    ctx->r11 = ADD32(ctx->r2, ctx->r15);
    // 0x1501ADE0: lw          $at, 0x40($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X40);
    // 0x1501ADE4: sltiu       $a1, $v1, 0x1
    ctx->r5 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x1501ADE8: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x1501ADEC: addu        $t4, $v0, $t8
    ctx->r12 = ADD32(ctx->r2, ctx->r24);
    // 0x1501ADF0: sw          $at, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->r1;
    // 0x1501ADF4: lw          $t9, 0x44($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X44);
    // 0x1501ADF8: sw          $t9, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->r25;
    // 0x1501ADFC: lw          $at, 0x48($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X48);
    // 0x1501AE00: sw          $at, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->r1;
    // 0x1501AE04: lw          $t9, 0x4C($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X4C);
    // 0x1501AE08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1501AE0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1501AE10: sw          $t9, 0x4C($t4)
    MEM_W(0X4C, ctx->r12) = ctx->r25;
    // 0x1501AE14: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x1501AE18: addu        $t6, $t2, $s0
    ctx->r14 = ADD32(ctx->r10, ctx->r16);
    // 0x1501AE1C: jal         0x1501AE94
    // 0x1501AE20: swc1        $f6, 0x84($t6)
    MEM_W(0X84, ctx->r14) = ctx->f6.u32l;
    func_1501AE94(rdram, ctx);
        goto after_5;
    // 0x1501AE20: swc1        $f6, 0x84($t6)
    MEM_W(0X84, ctx->r14) = ctx->f6.u32l;
    after_5:
    // 0x1501AE24: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x1501AE28: addu        $t7, $t8, $s0
    ctx->r15 = ADD32(ctx->r24, ctx->r16);
    // 0x1501AE2C: sb          $v0, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r2;
    // 0x1501AE30: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x1501AE34: addu        $v1, $s0, $t5
    ctx->r3 = ADD32(ctx->r16, ctx->r13);
    // 0x1501AE38: addiu       $a0, $v1, 0x2C
    ctx->r4 = ADD32(ctx->r3, 0X2C);
    // 0x1501AE3C: addiu       $a1, $v1, 0x24
    ctx->r5 = ADD32(ctx->r3, 0X24);
    // 0x1501AE40: addiu       $a2, $v1, 0x30
    ctx->r6 = ADD32(ctx->r3, 0X30);
    // 0x1501AE44: jal         0x1501AF44
    // 0x1501AE48: addiu       $a3, $v1, 0x28
    ctx->r7 = ADD32(ctx->r3, 0X28);
    func_1501AF44(rdram, ctx);
        goto after_6;
    // 0x1501AE48: addiu       $a3, $v1, 0x28
    ctx->r7 = ADD32(ctx->r3, 0X28);
    after_6:
    // 0x1501AE4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1501AE50: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x1501AE54: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1501AE58: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x1501AE5C: addu        $t3, $t4, $s0
    ctx->r11 = ADD32(ctx->r12, ctx->r16);
    // 0x1501AE60: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1501AE64: jal         0x1510B32C
    // 0x1501AE68: lw          $a3, 0x84($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X84);
    func_1510B32C(rdram, ctx);
        goto after_7;
    // 0x1501AE68: lw          $a3, 0x84($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X84);
    after_7:
    // 0x1501AE6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501AE70: addu        $at, $at, $s2
    ctx->r1 = ADD32(ctx->r1, ctx->r18);
    // 0x1501AE74: sb          $s2, -0x19D0($at)
    MEM_B(-0X19D0, ctx->r1) = ctx->r18;
    // 0x1501AE78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1501AE7C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1501AE80: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1501AE84: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x1501AE88: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x1501AE8C: jr          $ra
    // 0x1501AE90: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x1501AE90: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_15045384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15045384: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15045388: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1504538C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15045390: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15045394: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15045398: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x1504539C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150453A0: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150453A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150453A8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150453AC: nop

    // 0x150453B0: bc1f        L_150453CC
    if (!c1cs) {
        // 0x150453B4: nop
    
            goto L_150453CC;
    }
    // 0x150453B4: nop

    // 0x150453B8: lbu         $t6, 0x1C($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X1C);
    // 0x150453BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150453C0: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x150453C4: b           L_15045538
    // 0x150453C8: sb          $t7, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r15;
        goto L_15045538;
    // 0x150453C8: sb          $t7, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r15;
L_150453CC:
    // 0x150453CC: lwc1        $f8, -0x72B8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X72B8);
    // 0x150453D0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x150453D4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x150453D8: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    // 0x150453DC: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x150453E0: jal         0x1510F800
    // 0x150453E4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x150453E4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x150453E8: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150453EC: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150453F0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150453F4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150453F8: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x150453FC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x15045400: jal         0x150A4FA0
    // 0x15045404: nop

    func_150A4FA0(rdram, ctx);
        goto after_1;
    // 0x15045404: nop

    after_1:
    // 0x15045408: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x1504540C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x15045410: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15045414: blez        $v0, L_15045480
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15045418: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15045480;
    }
    // 0x15045418: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1504541C: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x15045420: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15045424: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15045428: addiu       $v0, $v0, 0x3300
    ctx->r2 = ADD32(ctx->r2, 0X3300);
L_1504542C:
    // 0x1504542C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x15045430: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15045434: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x15045438: nop

    // 0x1504543C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15045440: mul.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15045444: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x15045448: nop

    // 0x1504544C: bc1fl       L_15045474
    if (!c1cs) {
        // 0x15045450: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15045474;
    }
    goto skip_0;
    // 0x15045450: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x15045454: lwc1        $f16, 0x0($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X0);
    // 0x15045458: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x1504545C: nop

    // 0x15045460: bc1fl       L_15045474
    if (!c1cs) {
        // 0x15045464: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15045474;
    }
    goto skip_1;
    // 0x15045464: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x15045468: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x1504546C: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x15045470: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15045474:
    // 0x15045474: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15045478: bne         $at, $zero, L_1504542C
    if (ctx->r1 != 0) {
        // 0x1504547C: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_1504542C;
    }
    // 0x1504547C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_15045480:
    // 0x15045480: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15045484: beq         $a2, $at, L_15045528
    if (ctx->r6 == ctx->r1) {
        // 0x15045488: sll         $t3, $a2, 4
        ctx->r11 = S32(ctx->r6 << 4);
            goto L_15045528;
    }
    // 0x15045488: sll         $t3, $a2, 4
    ctx->r11 = S32(ctx->r6 << 4);
    // 0x1504548C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15045490: addiu       $t4, $t4, 0x3300
    ctx->r12 = ADD32(ctx->r12, 0X3300);
    // 0x15045494: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x15045498: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x1504549C: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x150454A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150454A4: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x150454A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_150454AC:
    // 0x150454AC: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x150454B0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x150454B4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x150454B8: addu        $v0, $t5, $t0
    ctx->r2 = ADD32(ctx->r13, ctx->r8);
    // 0x150454BC: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x150454C0: sh          $t6, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r14;
    // 0x150454C4: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x150454C8: sh          $t7, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r15;
    // 0x150454CC: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x150454D0: sh          $t8, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r24;
    // 0x150454D4: bne         $a0, $a2, L_150454AC
    if (ctx->r4 != ctx->r6) {
        // 0x150454D8: addiu       $v1, $v1, 0x6
        ctx->r3 = ADD32(ctx->r3, 0X6);
            goto L_150454AC;
    }
    // 0x150454D8: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x150454DC: lbu         $t9, 0x1C($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X1C);
    // 0x150454E0: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x150454E4: sw          $zero, 0x18($a3)
    MEM_W(0X18, ctx->r7) = 0;
    // 0x150454E8: ori         $t2, $t9, 0x6
    ctx->r10 = ctx->r25 | 0X6;
    // 0x150454EC: sb          $t2, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r10;
    // 0x150454F0: sb          $t3, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = ctx->r11;
    // 0x150454F4: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x150454F8: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150454FC: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x15045500: ori         $t5, $t2, 0x2
    ctx->r13 = ctx->r10 | 0X2;
    // 0x15045504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15045508: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x1504550C: nop

    // 0x15045510: bc1f        L_15045520
    if (!c1cs) {
        // 0x15045514: nop
    
            goto L_15045520;
    }
    // 0x15045514: nop

    // 0x15045518: b           L_15045538
    // 0x1504551C: sb          $t5, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r13;
        goto L_15045538;
    // 0x1504551C: sb          $t5, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r13;
L_15045520:
    // 0x15045520: b           L_15045538
    // 0x15045524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15045538;
    // 0x15045524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15045528:
    // 0x15045528: lbu         $t6, 0x1C($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X1C);
    // 0x1504552C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15045530: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x15045534: sb          $t7, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r15;
L_15045538:
    // 0x15045538: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1504553C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15045540: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15045544: jr          $ra
    // 0x15045548: nop

    return;
    return;
    // 0x15045548: nop

;}
RECOMP_FUNC void func_15070114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15070114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15070118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507011C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15070120: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070124: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15070128: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507012C: jal         0x151937F4
    // 0x15070130: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151937F4(rdram, ctx);
        goto after_0;
    // 0x15070130: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x15070134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15070138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507013C: jr          $ra
    // 0x15070140: nop

    return;
    return;
    // 0x15070140: nop

;}
RECOMP_FUNC void func_15045D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15045D48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15045D4C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15045D50: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15045D54: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x15045D58: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15045D5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15045D60: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15045D64: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15045D68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15045D6C: lwc1        $f4, -0x72A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X72A8);
    // 0x15045D70: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x15045D74: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15045D78: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x15045D7C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x15045D80: addiu       $a1, $a1, 0x3830
    ctx->r5 = ADD32(ctx->r5, 0X3830);
    // 0x15045D84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15045D88: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x15045D8C: jal         0x150A44F0
    // 0x15045D90: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_150A44F0(rdram, ctx);
        goto after_0;
    // 0x15045D90: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_0:
    // 0x15045D94: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x15045D98: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x15045D9C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x15045DA0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15045DA4: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x15045DA8: addiu       $a3, $a3, 0x3830
    ctx->r7 = ADD32(ctx->r7, 0X3830);
    // 0x15045DAC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15045DB0: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x15045DB4: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x15045DB8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x15045DBC: jal         0x150A43E0
    // 0x15045DC0: nop

    func_150A43E0(rdram, ctx);
        goto after_1;
    // 0x15045DC0: nop

    after_1:
    // 0x15045DC4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x15045DC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15045DCC: blez        $v0, L_15045E38
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15045DD0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15045E38;
    }
    // 0x15045DD0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15045DD4: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x15045DD8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15045DDC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15045DE0: addiu       $v0, $v0, 0x3300
    ctx->r2 = ADD32(ctx->r2, 0X3300);
L_15045DE4:
    // 0x15045DE4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x15045DE8: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15045DEC: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x15045DF0: nop

    // 0x15045DF4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15045DF8: mul.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15045DFC: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x15045E00: nop

    // 0x15045E04: bc1fl       L_15045E2C
    if (!c1cs) {
        // 0x15045E08: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15045E2C;
    }
    goto skip_0;
    // 0x15045E08: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x15045E0C: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15045E10: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x15045E14: nop

    // 0x15045E18: bc1fl       L_15045E2C
    if (!c1cs) {
        // 0x15045E1C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15045E2C;
    }
    goto skip_1;
    // 0x15045E1C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x15045E20: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x15045E24: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x15045E28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15045E2C:
    // 0x15045E2C: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15045E30: bne         $at, $zero, L_15045DE4
    if (ctx->r1 != 0) {
        // 0x15045E34: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_15045DE4;
    }
    // 0x15045E34: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_15045E38:
    // 0x15045E38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15045E3C: beq         $t0, $at, L_15045F68
    if (ctx->r8 == ctx->r1) {
        // 0x15045E40: sll         $t4, $t0, 4
        ctx->r12 = S32(ctx->r8 << 4);
            goto L_15045F68;
    }
    // 0x15045E40: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x15045E44: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15045E48: addiu       $t5, $t5, 0x3300
    ctx->r13 = ADD32(ctx->r13, 0X3300);
    // 0x15045E4C: addu        $t1, $t4, $t5
    ctx->r9 = ADD32(ctx->r12, ctx->r13);
    // 0x15045E50: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x15045E54: lw          $a3, 0x8($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X8);
    // 0x15045E58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15045E5C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15045E60: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x15045E64: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_15045E68:
    // 0x15045E68: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x15045E6C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x15045E70: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x15045E74: addu        $v0, $t6, $a3
    ctx->r2 = ADD32(ctx->r14, ctx->r7);
    // 0x15045E78: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x15045E7C: sh          $t7, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r15;
    // 0x15045E80: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x15045E84: sh          $t8, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r24;
    // 0x15045E88: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x15045E8C: sh          $t9, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r25;
    // 0x15045E90: bne         $a0, $a2, L_15045E68
    if (ctx->r4 != ctx->r6) {
        // 0x15045E94: addiu       $v1, $v1, 0x6
        ctx->r3 = ADD32(ctx->r3, 0X6);
            goto L_15045E68;
    }
    // 0x15045E94: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x15045E98: lw          $v1, 0xC($t1)
    ctx->r3 = MEM_W(ctx->r9, 0XC);
    // 0x15045E9C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x15045EA0: lw          $t4, -0x410C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X410C);
    // 0x15045EA4: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x15045EA8: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x15045EAC: sll         $t3, $t3, 5
    ctx->r11 = S32(ctx->r11 << 5);
    // 0x15045EB0: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x15045EB4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x15045EB8: lw          $a0, 0x44($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X44);
    // 0x15045EBC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15045EC0: beql        $a0, $zero, L_15045F00
    if (ctx->r4 == 0) {
        // 0x15045EC4: lw          $t6, 0x40($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X40);
            goto L_15045F00;
    }
    goto skip_2;
    // 0x15045EC4: lw          $t6, 0x40($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X40);
    skip_2:
    // 0x15045EC8: lw          $t6, -0x41C4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X41C4);
    // 0x15045ECC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15045ED0: lhu         $t9, 0x58($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X58);
    // 0x15045ED4: subu        $t7, $t2, $t6
    ctx->r15 = SUB32(ctx->r10, ctx->r14);
    // 0x15045ED8: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x15045EDC: mflo        $t8
    ctx->r24 = lo;
    // 0x15045EE0: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x15045EE4: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x15045EE8: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x15045EEC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x15045EF0: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
    // 0x15045EF4: b           L_15045F08
    // 0x15045EF8: lbu         $t7, 0x1C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C);
        goto L_15045F08;
    // 0x15045EF8: lbu         $t7, 0x1C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C);
    // 0x15045EFC: lw          $t6, 0x40($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X40);
L_15045F00:
    // 0x15045F00: sw          $t6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r14;
    // 0x15045F04: lbu         $t7, 0x1C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C);
L_15045F08:
    // 0x15045F08: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x15045F0C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x15045F10: ori         $t8, $t7, 0x6
    ctx->r24 = ctx->r15 | 0X6;
    // 0x15045F14: sb          $t8, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r24;
    // 0x15045F18: lbu         $t9, 0x6F($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X6F);
    // 0x15045F1C: ori         $t5, $t8, 0x1
    ctx->r13 = ctx->r24 | 0X1;
    // 0x15045F20: andi        $t3, $t9, 0x80
    ctx->r11 = ctx->r25 & 0X80;
    // 0x15045F24: bnel        $t3, $at, L_15045F34
    if (ctx->r11 != ctx->r1) {
        // 0x15045F28: sb          $t6, 0x1D($s0)
        MEM_B(0X1D, ctx->r16) = ctx->r14;
            goto L_15045F34;
    }
    goto skip_3;
    // 0x15045F28: sb          $t6, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r14;
    skip_3:
    // 0x15045F2C: sb          $t5, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r13;
    // 0x15045F30: sb          $t6, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r14;
L_15045F34:
    // 0x15045F34: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15045F38: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15045F3C: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x15045F40: nop

    // 0x15045F44: bc1f        L_15045F60
    if (!c1cs) {
        // 0x15045F48: nop
    
            goto L_15045F60;
    }
    // 0x15045F48: nop

    // 0x15045F4C: lbu         $t7, 0x1C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C);
    // 0x15045F50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15045F54: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x15045F58: b           L_15045F78
    // 0x15045F5C: sb          $t8, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r24;
        goto L_15045F78;
    // 0x15045F5C: sb          $t8, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r24;
L_15045F60:
    // 0x15045F60: b           L_15045F78
    // 0x15045F64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15045F78;
    // 0x15045F64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15045F68:
    // 0x15045F68: lbu         $t9, 0x1C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1C);
    // 0x15045F6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15045F70: andi        $t3, $t9, 0xFFFD
    ctx->r11 = ctx->r25 & 0XFFFD;
    // 0x15045F74: sb          $t3, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r11;
L_15045F78:
    // 0x15045F78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15045F7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15045F80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15045F84: jr          $ra
    // 0x15045F88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15045F88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1511FC44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511FC44: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1511FC48: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1511FC4C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x1511FC50: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1511FC54: jr          $ra
    // 0x1511FC58: nop

    return;
    return;
    // 0x1511FC58: nop

;}
RECOMP_FUNC void func_15071DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071DC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15071DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15071DD0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15071DD4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15071DD8: lw          $a1, 0x1580($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1580);
    // 0x15071DDC: jal         0x15141A7C
    // 0x15071DE0: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_15141A7C(rdram, ctx);
        goto after_0;
    // 0x15071DE0: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x15071DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15071DE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15071DEC: jr          $ra
    // 0x15071DF0: nop

    return;
    return;
    // 0x15071DF0: nop

;}
RECOMP_FUNC void func_1513DF9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513DF9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513DFA0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1513DFA4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1513DFA8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1513DFAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513DFB0: lw          $t7, 0x58($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X58);
    // 0x1513DFB4: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x1513DFB8: bltzl       $t8, L_1513DFCC
    if (SIGNED(ctx->r24) < 0) {
        // 0x1513DFBC: lbu         $t9, 0x19($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X19);
            goto L_1513DFCC;
    }
    goto skip_0;
    // 0x1513DFBC: lbu         $t9, 0x19($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X19);
    skip_0:
    // 0x1513DFC0: b           L_1513E048
    // 0x1513DFC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513E048;
    // 0x1513DFC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1513DFC8: lbu         $t9, 0x19($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X19);
L_1513DFCC:
    // 0x1513DFCC: sltiu       $at, $t9, 0xD
    ctx->r1 = ctx->r25 < 0XD ? 1 : 0;
    // 0x1513DFD0: beq         $at, $zero, L_1513E044
    if (ctx->r1 == 0) {
        // 0x1513DFD4: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_1513E044;
    }
    // 0x1513DFD4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1513DFD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513DFDC: addu        $at, $at, $t9
    gpr jr_addend_1513DFE4 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x1513DFE0: lw          $t9, 0x5188($at)
    ctx->r25 = ADD32(ctx->r1, 0X5188);
    // 0x1513DFE4: jr          $t9
    // 0x1513DFE8: nop

    switch (jr_addend_1513DFE4 >> 2) {
        case 0: goto L_1513DFFC; break;
        case 1: goto L_1513E004; break;
        case 2: goto L_1513DFFC; break;
        case 3: goto L_1513E01C; break;
        case 4: goto L_1513E03C; break;
        case 5: goto L_1513E00C; break;
        case 6: goto L_1513E014; break;
        case 7: goto L_1513E024; break;
        case 8: goto L_1513E02C; break;
        case 9: goto L_1513E034; break;
        case 10: goto L_1513E044; break;
        case 11: goto L_1513DFF4; break;
        case 12: goto L_1513DFEC; break;
        default: switch_error(__func__, 0x1513DFE4, 0x800A5188);
    }
    // 0x1513DFE8: nop

L_1513DFEC:
    // 0x1513DFEC: b           L_1513E048
    // 0x1513DFF0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_1513E048;
    // 0x1513DFF0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_1513DFF4:
    // 0x1513DFF4: b           L_1513E048
    // 0x1513DFF8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_1513E048;
    // 0x1513DFF8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_1513DFFC:
    // 0x1513DFFC: b           L_1513E048
    // 0x1513E000: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513E048;
    // 0x1513E000: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513E004:
    // 0x1513E004: b           L_1513E048
    // 0x1513E008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1513E048;
    // 0x1513E008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1513E00C:
    // 0x1513E00C: b           L_1513E048
    // 0x1513E010: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_1513E048;
    // 0x1513E010: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_1513E014:
    // 0x1513E014: b           L_1513E048
    // 0x1513E018: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_1513E048;
    // 0x1513E018: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_1513E01C:
    // 0x1513E01C: b           L_1513E048
    // 0x1513E020: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_1513E048;
    // 0x1513E020: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_1513E024:
    // 0x1513E024: b           L_1513E048
    // 0x1513E028: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_1513E048;
    // 0x1513E028: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_1513E02C:
    // 0x1513E02C: b           L_1513E048
    // 0x1513E030: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_1513E048;
    // 0x1513E030: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_1513E034:
    // 0x1513E034: b           L_1513E048
    // 0x1513E038: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_1513E048;
    // 0x1513E038: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_1513E03C:
    // 0x1513E03C: b           L_1513E048
    // 0x1513E040: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_1513E048;
    // 0x1513E040: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_1513E044:
    // 0x1513E044: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513E048:
    // 0x1513E048: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x1513E04C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513E050: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x1513E054: lw          $t9, -0x609C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X609C);
    // 0x1513E058: jalr        $t9
    // 0x1513E05C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1513E05C: nop

    after_0:
    // 0x1513E060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513E064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513E068: jr          $ra
    // 0x1513E06C: nop

    return;
    return;
    // 0x1513E06C: nop

;}
RECOMP_FUNC void func_151E55A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E55A8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151E55AC: addiu       $a1, $a1, 0xB98
    ctx->r5 = ADD32(ctx->r5, 0XB98);
    // 0x151E55B0: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x151E55B4: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x151E55B8: addiu       $a2, $a2, 0xB97
    ctx->r6 = ADD32(ctx->r6, 0XB97);
    // 0x151E55BC: bne         $v0, $zero, L_151E55D8
    if (ctx->r2 != 0) {
        // 0x151E55C0: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_151E55D8;
    }
    // 0x151E55C0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x151E55C4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x151E55C8: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x151E55CC: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x151E55D0: b           L_151E55E8
    // 0x151E55D4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
        goto L_151E55E8;
    // 0x151E55D4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_151E55D8:
    // 0x151E55D8: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x151E55DC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x151E55E0: sll         $t7, $v1, 3
    ctx->r15 = S32(ctx->r3 << 3);
    // 0x151E55E4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_151E55E8:
    // 0x151E55E8: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x151E55EC: addiu       $t8, $zero, 0x1FE
    ctx->r24 = ADD32(0, 0X1FE);
    // 0x151E55F0: xori        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 ^ 0X1;
    // 0x151E55F4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x151E55F8: slti        $at, $a0, 0x100
    ctx->r1 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x151E55FC: bne         $at, $zero, L_151E5610
    if (ctx->r1 != 0) {
        // 0x151E5600: nop
    
            goto L_151E5610;
    }
    // 0x151E5600: nop

    // 0x151E5604: subu        $a0, $t8, $a0
    ctx->r4 = SUB32(ctx->r24, ctx->r4);
    // 0x151E5608: b           L_151E5620
    // 0x151E560C: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
        goto L_151E5620;
    // 0x151E560C: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
L_151E5610:
    // 0x151E5610: bgez        $a0, L_151E5620
    if (SIGNED(ctx->r4) >= 0) {
        // 0x151E5614: xori        $t0, $v0, 0x1
        ctx->r8 = ctx->r2 ^ 0X1;
            goto L_151E5620;
    }
    // 0x151E5614: xori        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 ^ 0X1;
    // 0x151E5618: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x151E561C: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
L_151E5620:
    // 0x151E5620: sb          $a0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r4;
    // 0x151E5624: jr          $ra
    // 0x151E5628: nop

    return;
    return;
    // 0x151E5628: nop

;}
RECOMP_FUNC void func_151CD35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CD35C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151CD360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151CD364: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151CD368: bltz        $a2, L_151CD384
    if (SIGNED(ctx->r6) < 0) {
        // 0x151CD36C: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_151CD384;
    }
    // 0x151CD36C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x151CD370: beq         $at, $zero, L_151CD384
    if (ctx->r1 == 0) {
        // 0x151CD374: addiu       $a0, $sp, 0x1C
        ctx->r4 = ADD32(ctx->r29, 0X1C);
            goto L_151CD384;
    }
    // 0x151CD374: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151CD378: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x151CD37C: jal         0x151494E0
    // 0x151CD380: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_151494E0(rdram, ctx);
        goto after_0;
    // 0x151CD380: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
L_151CD384:
    // 0x151CD384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151CD388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151CD38C: jr          $ra
    // 0x151CD390: nop

    return;
    return;
    // 0x151CD390: nop

;}
RECOMP_FUNC void func_15154A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15154A88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15154A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15154A90: lwc1        $f12, 0x17C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X17C);
    // 0x15154A94: jal         0x15047D60
    // 0x15154A98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x15154A98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15154A9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15154AA0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15154AA4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15154AA8: addiu       $v1, $a0, 0x170
    ctx->r3 = ADD32(ctx->r4, 0X170);
    // 0x15154AAC: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15154AB0: addiu       $a1, $a1, -0x165C
    ctx->r5 = ADD32(ctx->r5, -0X165C);
    // 0x15154AB4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15154AB8: mul.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15154ABC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x15154AC0: swc1        $f2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f2.u32l;
    // 0x15154AC4: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x15154AC8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15154ACC: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15154AD0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x15154AD4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15154AD8: nop

    // 0x15154ADC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x15154AE0: beql        $t7, $zero, L_15154B30
    if (ctx->r15 == 0) {
        // 0x15154AE4: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_15154B30;
    }
    goto skip_0;
    // 0x15154AE4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x15154AE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15154AEC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15154AF0: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15154AF4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15154AF8: nop

    // 0x15154AFC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x15154B00: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15154B04: nop

    // 0x15154B08: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x15154B0C: bne         $t7, $zero, L_15154B24
    if (ctx->r15 != 0) {
        // 0x15154B10: nop
    
            goto L_15154B24;
    }
    // 0x15154B10: nop

    // 0x15154B14: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x15154B18: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15154B1C: b           L_15154B3C
    // 0x15154B20: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_15154B3C;
    // 0x15154B20: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_15154B24:
    // 0x15154B24: b           L_15154B3C
    // 0x15154B28: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_15154B3C;
    // 0x15154B28: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x15154B2C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_15154B30:
    // 0x15154B30: nop

    // 0x15154B34: bltz        $t7, L_15154B24
    if (SIGNED(ctx->r15) < 0) {
        // 0x15154B38: nop
    
            goto L_15154B24;
    }
    // 0x15154B38: nop

L_15154B3C:
    // 0x15154B3C: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x15154B40: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15154B44: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x15154B48: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15154B4C: bgez        $t8, L_15154B60
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15154B50: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_15154B60;
    }
    // 0x15154B50: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15154B54: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15154B58: nop

    // 0x15154B5C: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_15154B60:
    // 0x15154B60: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15154B64: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15154B68: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15154B6C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x15154B70: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x15154B74: nop

    // 0x15154B78: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15154B7C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x15154B80: nop

    // 0x15154B84: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x15154B88: beql        $t0, $zero, L_15154BD8
    if (ctx->r8 == 0) {
        // 0x15154B8C: mfc1        $t0, $f6
        ctx->r8 = (int32_t)ctx->f6.u32l;
            goto L_15154BD8;
    }
    goto skip_1;
    // 0x15154B8C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x15154B90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15154B94: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15154B98: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15154B9C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x15154BA0: nop

    // 0x15154BA4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x15154BA8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x15154BAC: nop

    // 0x15154BB0: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x15154BB4: bne         $t0, $zero, L_15154BCC
    if (ctx->r8 != 0) {
        // 0x15154BB8: nop
    
            goto L_15154BCC;
    }
    // 0x15154BB8: nop

    // 0x15154BBC: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x15154BC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15154BC4: b           L_15154BE4
    // 0x15154BC8: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_15154BE4;
    // 0x15154BC8: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_15154BCC:
    // 0x15154BCC: b           L_15154BE4
    // 0x15154BD0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_15154BE4;
    // 0x15154BD0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x15154BD4: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
L_15154BD8:
    // 0x15154BD8: nop

    // 0x15154BDC: bltz        $t0, L_15154BCC
    if (SIGNED(ctx->r8) < 0) {
        // 0x15154BE0: nop
    
            goto L_15154BCC;
    }
    // 0x15154BE0: nop

L_15154BE4:
    // 0x15154BE4: sb          $t0, 0x70($a0)
    MEM_B(0X70, ctx->r4) = ctx->r8;
    // 0x15154BE8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x15154BEC: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15154BF0: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15154BF4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15154BF8: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15154BFC: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x15154C00: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15154C04: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    // 0x15154C08: nop

    // 0x15154C0C: bc1fl       L_15154C20
    if (!c1cs) {
        // 0x15154C10: lwc1        $f6, 0x10($v1)
        ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
            goto L_15154C20;
    }
    goto skip_2;
    // 0x15154C10: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    skip_2:
    // 0x15154C14: b           L_15154C80
    // 0x15154C18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15154C80;
    // 0x15154C18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15154C1C: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
L_15154C20:
    // 0x15154C20: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15154C24: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x15154C28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15154C2C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15154C30: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x15154C34: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x15154C38: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15154C3C: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x15154C40: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15154C44: lwc1        $f16, 0x54($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X54);
    // 0x15154C48: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15154C4C: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x15154C50: lwc1        $f18, 0x24($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X24);
    // 0x15154C54: swc1        $f10, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f10.u32l;
    // 0x15154C58: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15154C5C: lwc1        $f10, 0x58($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X58);
    // 0x15154C60: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x15154C64: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x15154C68: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x15154C6C: swc1        $f8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f8.u32l;
    // 0x15154C70: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15154C74: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15154C78: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15154C7C: swc1        $f6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f6.u32l;
L_15154C80:
    // 0x15154C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15154C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15154C88: jr          $ra
    // 0x15154C8C: nop

    return;
    return;
    // 0x15154C8C: nop

;}
RECOMP_FUNC void osPfsIsPlug2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F1D10: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151F1D14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F1D18: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x151F1D1C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x151F1D20: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x151F1D24: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x151F1D28: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x151F1D2C: jal         0x10025750
    // 0x151F1D30: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    __osSiGetAccess_recomp(rdram, ctx);
        goto after_0;
    // 0x151F1D30: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_0:
L_151F1D34:
    // 0x151F1D34: jal         0x10025170
    // 0x151F1D38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    __osPfsRequestData_recomp(rdram, ctx);
        goto after_1;
    // 0x151F1D38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x151F1D3C: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x151F1D40: addiu       $a1, $a1, 0x29D0
    ctx->r5 = ADD32(ctx->r5, 0X29D0);
    // 0x151F1D44: jal         0x100257C0
    // 0x151F1D48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x151F1D48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x151F1D4C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x151F1D50: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x151F1D54: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x151F1D58: jal         0x10023440
    // 0x151F1D5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x151F1D5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x151F1D60: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x151F1D64: addiu       $a1, $a1, 0x29D0
    ctx->r5 = ADD32(ctx->r5, 0X29D0);
    // 0x151F1D68: jal         0x100257C0
    // 0x151F1D6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_4;
    // 0x151F1D6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x151F1D70: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x151F1D74: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x151F1D78: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x151F1D7C: jal         0x10023440
    // 0x151F1D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x151F1D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x151F1D84: addiu       $a0, $sp, 0x37
    ctx->r4 = ADD32(ctx->r29, 0X37);
    // 0x151F1D88: jal         0x1002526C
    // 0x151F1D8C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    __osPfsGetInitData_recomp(rdram, ctx);
        goto after_6;
    // 0x151F1D8C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x151F1D90: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x151F1D94: lbu         $t7, 0x2A51($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2A51);
    // 0x151F1D98: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151F1D9C: blez        $t7, L_151F1DF0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x151F1DA0: nop
    
            goto L_151F1DF0;
    }
    // 0x151F1DA0: nop

L_151F1DA4:
    // 0x151F1DA4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x151F1DA8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151F1DAC: addu        $t0, $sp, $t9
    ctx->r8 = ADD32(ctx->r29, ctx->r25);
    // 0x151F1DB0: lbu         $t0, 0x26($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X26);
    // 0x151F1DB4: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x151F1DB8: bne         $t1, $zero, L_151F1DD0
    if (ctx->r9 != 0) {
        // 0x151F1DBC: nop
    
            goto L_151F1DD0;
    }
    // 0x151F1DBC: nop

    // 0x151F1DC0: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x151F1DC4: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x151F1DC8: b           L_151F1DF0
    // 0x151F1DCC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
        goto L_151F1DF0;
    // 0x151F1DCC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
L_151F1DD0:
    // 0x151F1DD0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x151F1DD4: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x151F1DD8: lbu         $t6, 0x2A51($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2A51);
    // 0x151F1DDC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x151F1DE0: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x151F1DE4: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151F1DE8: bne         $at, $zero, L_151F1DA4
    if (ctx->r1 != 0) {
        // 0x151F1DEC: nop
    
            goto L_151F1DA4;
    }
    // 0x151F1DEC: nop

L_151F1DF0:
    // 0x151F1DF0: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x151F1DF4: lbu         $t7, 0x2A51($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2A51);
    // 0x151F1DF8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x151F1DFC: bne         $t7, $t8, L_151F1E08
    if (ctx->r15 != ctx->r24) {
        // 0x151F1E00: nop
    
            goto L_151F1E08;
    }
    // 0x151F1E00: nop

    // 0x151F1E04: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_151F1E08:
    // 0x151F1E08: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x151F1E0C: bgtz        $t9, L_151F1D34
    if (SIGNED(ctx->r25) > 0) {
        // 0x151F1E10: nop
    
            goto L_151F1D34;
    }
    // 0x151F1E10: nop

    // 0x151F1E14: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x151F1E18: lbu         $t0, 0x2A51($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X2A51);
    // 0x151F1E1C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151F1E20: blez        $t0, L_151F1E88
    if (SIGNED(ctx->r8) <= 0) {
        // 0x151F1E24: nop
    
            goto L_151F1E88;
    }
    // 0x151F1E24: nop

L_151F1E28:
    // 0x151F1E28: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x151F1E2C: addiu       $t3, $sp, 0x24
    ctx->r11 = ADD32(ctx->r29, 0X24);
    // 0x151F1E30: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151F1E34: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x151F1E38: lbu         $t5, 0x3($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X3);
    // 0x151F1E3C: bne         $t5, $zero, L_151F1E68
    if (ctx->r13 != 0) {
        // 0x151F1E40: nop
    
            goto L_151F1E68;
    }
    // 0x151F1E40: nop

    // 0x151F1E44: lbu         $t6, 0x2($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X2);
    // 0x151F1E48: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151F1E4C: beq         $t7, $zero, L_151F1E68
    if (ctx->r15 == 0) {
        // 0x151F1E50: nop
    
            goto L_151F1E68;
    }
    // 0x151F1E50: nop

    // 0x151F1E54: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x151F1E58: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151F1E5C: sllv        $t0, $t9, $t1
    ctx->r8 = S32(ctx->r25 << (ctx->r9 & 31));
    // 0x151F1E60: or          $t2, $t8, $t0
    ctx->r10 = ctx->r24 | ctx->r8;
    // 0x151F1E64: sb          $t2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r10;
L_151F1E68:
    // 0x151F1E68: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x151F1E6C: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x151F1E70: lbu         $t4, 0x2A51($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X2A51);
    // 0x151F1E74: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x151F1E78: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x151F1E7C: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x151F1E80: bne         $at, $zero, L_151F1E28
    if (ctx->r1 != 0) {
        // 0x151F1E84: nop
    
            goto L_151F1E28;
    }
    // 0x151F1E84: nop

L_151F1E88:
    // 0x151F1E88: jal         0x10025794
    // 0x151F1E8C: nop

    __osSiRelAccess_recomp(rdram, ctx);
        goto after_7;
    // 0x151F1E8C: nop

    after_7:
    // 0x151F1E90: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x151F1E94: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x151F1E98: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x151F1E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F1EA0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x151F1EA4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x151F1EA8: jr          $ra
    // 0x151F1EAC: nop

    return;
    return;
    // 0x151F1EAC: nop

;}
RECOMP_FUNC void func_151321D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151321D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151321D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151321D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151321DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151321E0: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x151321E4: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x151321E8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x151321EC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x151321F0: andi        $t9, $t7, 0x10
    ctx->r25 = ctx->r15 & 0X10;
    // 0x151321F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151321F8: beq         $t9, $zero, L_15132244
    if (ctx->r25 == 0) {
        // 0x151321FC: sw          $t7, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->r15;
            goto L_15132244;
    }
    // 0x151321FC: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x15132200: lbu         $t0, 0x148($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X148);
    // 0x15132204: andi        $t1, $t0, 0x18
    ctx->r9 = ctx->r8 & 0X18;
    // 0x15132208: beql        $t1, $zero, L_15132248
    if (ctx->r9 == 0) {
        // 0x1513220C: lbu         $v0, 0x71($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X71);
            goto L_15132248;
    }
    goto skip_0;
    // 0x1513220C: lbu         $v0, 0x71($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X71);
    skip_0:
    // 0x15132210: sb          $zero, 0x23($sp)
    MEM_B(0X23, ctx->r29) = 0;
    // 0x15132214: lbu         $t2, 0x77($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X77);
    // 0x15132218: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513221C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15132220: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15132224: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x15132228: lw          $t9, -0x6678($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6678);
    // 0x1513222C: jalr        $t9
    // 0x15132230: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15132230: nop

    after_0:
    // 0x15132234: bne         $v0, $zero, L_15132278
    if (ctx->r2 != 0) {
        // 0x15132238: lbu         $a1, 0x23($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0X23);
            goto L_15132278;
    }
    // 0x15132238: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x1513223C: b           L_15132278
    // 0x15132240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_15132278;
    // 0x15132240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_15132244:
    // 0x15132244: lbu         $v0, 0x71($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X71);
L_15132248:
    // 0x15132248: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513224C: beq         $v0, $zero, L_15132278
    if (ctx->r2 == 0) {
        // 0x15132250: sll         $t4, $v0, 2
        ctx->r12 = S32(ctx->r2 << 2);
            goto L_15132278;
    }
    // 0x15132250: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x15132254: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x15132258: lw          $t9, -0x6750($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6750);
    // 0x1513225C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15132260: sb          $a1, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r5;
    // 0x15132264: jalr        $t9
    // 0x15132268: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15132268: nop

    after_1:
    // 0x1513226C: bne         $v0, $zero, L_15132278
    if (ctx->r2 != 0) {
        // 0x15132270: lbu         $a1, 0x23($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0X23);
            goto L_15132278;
    }
    // 0x15132270: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x15132274: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_15132278:
    // 0x15132278: lbu         $v0, 0x72($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X72);
    // 0x1513227C: beql        $v0, $zero, L_151322B8
    if (ctx->r2 == 0) {
        // 0x15132280: lw          $t6, 0x60($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X60);
            goto L_151322B8;
    }
    goto skip_1;
    // 0x15132280: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    skip_1:
    // 0x15132284: bne         $a1, $zero, L_151322B4
    if (ctx->r5 != 0) {
        // 0x15132288: sll         $t5, $v0, 2
        ctx->r13 = S32(ctx->r2 << 2);
            goto L_151322B4;
    }
    // 0x15132288: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x1513228C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15132290: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x15132294: lw          $t9, -0x66EC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X66EC);
    // 0x15132298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1513229C: sb          $a1, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r5;
    // 0x151322A0: jalr        $t9
    // 0x151322A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x151322A4: nop

    after_2:
    // 0x151322A8: bne         $v0, $zero, L_151322B4
    if (ctx->r2 != 0) {
        // 0x151322AC: lbu         $a1, 0x23($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0X23);
            goto L_151322B4;
    }
    // 0x151322AC: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x151322B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_151322B4:
    // 0x151322B4: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
L_151322B8:
    // 0x151322B8: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x151322BC: beql        $t7, $zero, L_151322F0
    if (ctx->r15 == 0) {
        // 0x151322C0: lw          $t3, 0x60($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X60);
            goto L_151322F0;
    }
    goto skip_2;
    // 0x151322C0: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    skip_2:
    // 0x151322C4: bne         $a1, $zero, L_151322EC
    if (ctx->r5 != 0) {
        // 0x151322C8: lui         $t0, 0x800C
        ctx->r8 = S32(0X800C << 16);
            goto L_151322EC;
    }
    // 0x151322C8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151322CC: lh          $t8, 0x64($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X64);
    // 0x151322D0: lw          $t0, -0x161C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X161C);
    // 0x151322D4: subu        $t1, $t8, $t0
    ctx->r9 = SUB32(ctx->r24, ctx->r8);
    // 0x151322D8: sh          $t1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r9;
    // 0x151322DC: lh          $t2, 0x64($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X64);
    // 0x151322E0: bgezl       $t2, L_151322F0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x151322E4: lw          $t3, 0x60($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X60);
            goto L_151322F0;
    }
    goto skip_3;
    // 0x151322E4: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    skip_3:
    // 0x151322E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_151322EC:
    // 0x151322EC: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
L_151322F0:
    // 0x151322F0: andi        $t4, $t3, 0x2000
    ctx->r12 = ctx->r11 & 0X2000;
    // 0x151322F4: beq         $t4, $zero, L_15132338
    if (ctx->r12 == 0) {
        // 0x151322F8: nop
    
            goto L_15132338;
    }
    // 0x151322F8: nop

    // 0x151322FC: bne         $a1, $zero, L_15132338
    if (ctx->r5 != 0) {
        // 0x15132300: nop
    
            goto L_15132338;
    }
    // 0x15132300: nop

    // 0x15132304: lh          $v1, 0x64($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X64);
    // 0x15132308: lh          $t5, 0x82($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X82);
    // 0x1513230C: slt         $at, $v1, $t5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x15132310: beq         $at, $zero, L_15132338
    if (ctx->r1 == 0) {
        // 0x15132314: nop
    
            goto L_15132338;
    }
    // 0x15132314: nop

    // 0x15132318: lh          $t9, 0x84($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X84);
    // 0x1513231C: lbu         $t6, 0x70($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X70);
    // 0x15132320: multu       $v1, $t9
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15132324: mflo        $v0
    ctx->r2 = lo;
    // 0x15132328: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1513232C: beq         $at, $zero, L_15132338
    if (ctx->r1 == 0) {
        // 0x15132330: nop
    
            goto L_15132338;
    }
    // 0x15132330: nop

    // 0x15132334: sb          $v0, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r2;
L_15132338:
    // 0x15132338: bne         $a1, $zero, L_15132364
    if (ctx->r5 != 0) {
        // 0x1513233C: nop
    
            goto L_15132364;
    }
    // 0x1513233C: nop

    // 0x15132340: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x15132344: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x15132348: bltz        $t8, L_15132364
    if (SIGNED(ctx->r24) < 0) {
        // 0x1513234C: nop
    
            goto L_15132364;
    }
    // 0x1513234C: nop

    // 0x15132350: jal         0x1514672C
    // 0x15132354: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    func_1514672C(rdram, ctx);
        goto after_3;
    // 0x15132354: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    after_3:
    // 0x15132358: sltiu       $a1, $v0, 0x1
    ctx->r5 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x1513235C: andi        $t0, $a1, 0xFF
    ctx->r8 = ctx->r5 & 0XFF;
    // 0x15132360: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_15132364:
    // 0x15132364: beql        $a1, $zero, L_1513239C
    if (ctx->r5 == 0) {
        // 0x15132368: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1513239C;
    }
    goto skip_4;
    // 0x15132368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x1513236C: lbu         $v0, 0x76($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X76);
    // 0x15132370: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15132374: beq         $v0, $zero, L_15132390
    if (ctx->r2 == 0) {
        // 0x15132378: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_15132390;
    }
    // 0x15132378: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x1513237C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x15132380: lw          $t9, -0x6684($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6684);
    // 0x15132384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15132388: jalr        $t9
    // 0x1513238C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x1513238C: nop

    after_4:
L_15132390:
    // 0x15132390: jal         0x1516972C
    // 0x15132394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_5;
    // 0x15132394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x15132398: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1513239C:
    // 0x1513239C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151323A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151323A4: jr          $ra
    // 0x151323A8: nop

    return;
    return;
    // 0x151323A8: nop

;}
RECOMP_FUNC void func_151AAABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AAABC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151AAAC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AAAC4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151AAAC8: lw          $t6, 0x6C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X6C);
    // 0x151AAACC: lw          $a2, 0x18($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X18);
    // 0x151AAAD0: addiu       $v1, $a1, 0x58
    ctx->r3 = ADD32(ctx->r5, 0X58);
    // 0x151AAAD4: beq         $t6, $zero, L_151AAAF4
    if (ctx->r14 == 0) {
        // 0x151AAAD8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_151AAAF4;
    }
    // 0x151AAAD8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x151AAADC: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x151AAAE0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151AAAE4: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x151AAAE8: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
    // 0x151AAAEC: b           L_151AAB14
    // 0x151AAAF0: lw          $a0, 0x1C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C);
        goto L_151AAB14;
    // 0x151AAAF0: lw          $a0, 0x1C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C);
L_151AAAF4:
    // 0x151AAAF4: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x151AAAF8: jal         0x151AA48C
    // 0x151AAAFC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_151AA48C(rdram, ctx);
        goto after_0;
    // 0x151AAAFC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_0:
    // 0x151AAB00: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x151AAB04: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x151AAB08: addiu       $v1, $a1, 0x58
    ctx->r3 = ADD32(ctx->r5, 0X58);
    // 0x151AAB0C: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x151AAB10: lw          $a0, 0x1C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C);
L_151AAB14:
    // 0x151AAB14: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151AAB18: beq         $a0, $zero, L_151AAB2C
    if (ctx->r4 == 0) {
        // 0x151AAB1C: addiu       $v0, $a0, 0x58
        ctx->r2 = ADD32(ctx->r4, 0X58);
            goto L_151AAB2C;
    }
    // 0x151AAB1C: addiu       $v0, $a0, 0x58
    ctx->r2 = ADD32(ctx->r4, 0X58);
    // 0x151AAB20: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x151AAB24: b           L_151AAB44
    // 0x151AAB28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151AAB44;
    // 0x151AAB28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151AAB2C:
    // 0x151AAB2C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x151AAB30: jal         0x151AB2C4
    // 0x151AAB34: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_151AB2C4(rdram, ctx);
        goto after_1;
    // 0x151AAB34: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x151AAB38: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x151AAB3C: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x151AAB40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151AAB44:
    // 0x151AAB44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151AAB48: jr          $ra
    // 0x151AAB4C: nop

    return;
    return;
    // 0x151AAB4C: nop

;}
RECOMP_FUNC void func_1507FC2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507FC2C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1507FC30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507FC34: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x1507FC38: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x1507FC3C: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x1507FC40: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x1507FC44: lw          $t7, 0x31C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X31C);
    // 0x1507FC48: addiu       $t8, $t7, 0x58
    ctx->r24 = ADD32(ctx->r15, 0X58);
    // 0x1507FC4C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x1507FC50: lbu         $a1, 0x4($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X4);
    // 0x1507FC54: beq         $a1, $zero, L_1507FC8C
    if (ctx->r5 == 0) {
        // 0x1507FC58: andi        $v0, $a1, 0xFF
        ctx->r2 = ctx->r5 & 0XFF;
            goto L_1507FC8C;
    }
    // 0x1507FC58: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x1507FC5C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x1507FC60: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x1507FC64: lbu         $v1, 0x5($t8)
    ctx->r3 = MEM_BU(ctx->r24, 0X5);
    // 0x1507FC68: lw          $t4, 0x6BA0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6BA0);
    // 0x1507FC6C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x1507FC70: addiu       $t8, $t8, -0x4750
    ctx->r24 = ADD32(ctx->r24, -0X4750);
    // 0x1507FC74: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x1507FC78: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x1507FC7C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x1507FC80: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x1507FC84: b           L_1507FC8C
    // 0x1507FC88: lbu         $t3, 0x6($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X6);
        goto L_1507FC8C;
    // 0x1507FC88: lbu         $t3, 0x6($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X6);
L_1507FC8C:
    // 0x1507FC8C: andi        $t9, $t3, 0x10
    ctx->r25 = ctx->r11 & 0X10;
    // 0x1507FC90: beq         $t9, $zero, L_1507FCEC
    if (ctx->r25 == 0) {
        // 0x1507FC94: lui         $t4, 0x8004
        ctx->r12 = S32(0X8004 << 16);
            goto L_1507FCEC;
    }
    // 0x1507FC94: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x1507FC98: lbu         $t4, 0x19A0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X19A0);
    // 0x1507FC9C: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x1507FCA0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1507FCA4: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x1507FCA8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x1507FCAC: lw          $t6, 0x18B0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X18B0);
    // 0x1507FCB0: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x1507FCB4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1507FCB8: nop

    // 0x1507FCBC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1507FCC0: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x1507FCC4: nop

    // 0x1507FCC8: bc1f        L_1507FCEC
    if (!c1cs) {
        // 0x1507FCCC: lui         $at, 0x4700
        ctx->r1 = S32(0X4700 << 16);
            goto L_1507FCEC;
    }
    // 0x1507FCCC: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x1507FCD0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1507FCD4: lw          $v0, 0x2D0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X2D0);
    // 0x1507FCD8: sub.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x1507FCDC: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1507FCE0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1507FCE4: div.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1507FCE8: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
L_1507FCEC:
    // 0x1507FCEC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x1507FCF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1507FCF4: lbu         $t0, 0x6($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X6);
    // 0x1507FCF8: beq         $t3, $t0, L_1507FE90
    if (ctx->r11 == ctx->r8) {
        // 0x1507FCFC: xor         $t1, $t3, $t0
        ctx->r9 = ctx->r11 ^ ctx->r8;
            goto L_1507FE90;
    }
    // 0x1507FCFC: xor         $t1, $t3, $t0
    ctx->r9 = ctx->r11 ^ ctx->r8;
    // 0x1507FD00: and         $t2, $t1, $t3
    ctx->r10 = ctx->r9 & ctx->r11;
    // 0x1507FD04: andi        $t9, $t2, 0x1
    ctx->r25 = ctx->r10 & 0X1;
    // 0x1507FD08: bne         $v0, $t9, L_1507FD24
    if (ctx->r2 != ctx->r25) {
        // 0x1507FD0C: and         $t7, $t1, $t0
        ctx->r15 = ctx->r9 & ctx->r8;
            goto L_1507FD24;
    }
    // 0x1507FD0C: and         $t7, $t1, $t0
    ctx->r15 = ctx->r9 & ctx->r8;
    // 0x1507FD10: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x1507FD14: lhu         $t5, 0x2F8($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X2F8);
    // 0x1507FD18: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x1507FD1C: b           L_1507FD3C
    // 0x1507FD20: sh          $t6, 0x2F8($t4)
    MEM_H(0X2F8, ctx->r12) = ctx->r14;
        goto L_1507FD3C;
    // 0x1507FD20: sh          $t6, 0x2F8($t4)
    MEM_H(0X2F8, ctx->r12) = ctx->r14;
L_1507FD24:
    // 0x1507FD24: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x1507FD28: bne         $v0, $t8, L_1507FD3C
    if (ctx->r2 != ctx->r24) {
        // 0x1507FD2C: lw          $t9, 0x48($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X48);
            goto L_1507FD3C;
    }
    // 0x1507FD2C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x1507FD30: lhu         $t5, 0x2F8($t9)
    ctx->r13 = MEM_HU(ctx->r25, 0X2F8);
    // 0x1507FD34: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x1507FD38: sh          $t6, 0x2F8($t9)
    MEM_H(0X2F8, ctx->r25) = ctx->r14;
L_1507FD3C:
    // 0x1507FD3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x1507FD40: andi        $t4, $t2, 0x2
    ctx->r12 = ctx->r10 & 0X2;
    // 0x1507FD44: bne         $v0, $t4, L_1507FD7C
    if (ctx->r2 != ctx->r12) {
        // 0x1507FD48: and         $t7, $t1, $t0
        ctx->r15 = ctx->r9 & ctx->r8;
            goto L_1507FD7C;
    }
    // 0x1507FD48: and         $t7, $t1, $t0
    ctx->r15 = ctx->r9 & ctx->r8;
    // 0x1507FD4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1507FD50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1507FD54: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1507FD58: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1507FD5C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1507FD60: jal         0x1000E7A0
    // 0x1507FD64: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    func_1000E7A0(rdram, ctx);
        goto after_0;
    // 0x1507FD64: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    after_0:
    // 0x1507FD68: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1507FD6C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1507FD70: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x1507FD74: b           L_1507FDAC
    // 0x1507FD78: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_1507FDAC;
    // 0x1507FD78: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_1507FD7C:
    // 0x1507FD7C: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x1507FD80: bne         $v0, $t8, L_1507FDAC
    if (ctx->r2 != ctx->r24) {
        // 0x1507FD84: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_1507FDAC;
    }
    // 0x1507FD84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1507FD88: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1507FD8C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1507FD90: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1507FD94: jal         0x1000E8C4
    // 0x1507FD98: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    func_1000E8C4(rdram, ctx);
        goto after_1;
    // 0x1507FD98: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    after_1:
    // 0x1507FD9C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1507FDA0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1507FDA4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x1507FDA8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_1507FDAC:
    // 0x1507FDAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x1507FDB0: andi        $t5, $t2, 0x4
    ctx->r13 = ctx->r10 & 0X4;
    // 0x1507FDB4: bne         $v0, $t5, L_1507FE24
    if (ctx->r2 != ctx->r13) {
        // 0x1507FDB8: and         $t7, $t1, $t0
        ctx->r15 = ctx->r9 & ctx->r8;
            goto L_1507FE24;
    }
    // 0x1507FDB8: and         $t7, $t1, $t0
    ctx->r15 = ctx->r9 & ctx->r8;
    // 0x1507FDBC: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x1507FDC0: addiu       $a3, $a3, 0x18C4
    ctx->r7 = ADD32(ctx->r7, 0X18C4);
    // 0x1507FDC4: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x1507FDC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1507FDCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1507FDD0: bne         $v0, $zero, L_1507FDE4
    if (ctx->r2 != 0) {
        // 0x1507FDD4: xori        $v1, $v0, 0x17
        ctx->r3 = ctx->r2 ^ 0X17;
            goto L_1507FDE4;
    }
    // 0x1507FDD4: xori        $v1, $v0, 0x17
    ctx->r3 = ctx->r2 ^ 0X17;
    // 0x1507FDD8: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x1507FDDC: b           L_1507FDF8
    // 0x1507FDE0: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
        goto L_1507FDF8;
    // 0x1507FDE0: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
L_1507FDE4:
    // 0x1507FDE4: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x1507FDE8: bne         $v1, $zero, L_1507FDF8
    if (ctx->r3 != 0) {
        // 0x1507FDEC: sw          $t9, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r25;
            goto L_1507FDF8;
    }
    // 0x1507FDEC: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x1507FDF0: addiu       $t4, $zero, 0x15
    ctx->r12 = ADD32(0, 0X15);
    // 0x1507FDF4: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
L_1507FDF8:
    // 0x1507FDF8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x1507FDFC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1507FE00: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1507FE04: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1507FE08: jal         0x1000D96C
    // 0x1507FE0C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    func_1000D96C(rdram, ctx);
        goto after_2;
    // 0x1507FE0C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    after_2:
    // 0x1507FE10: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1507FE14: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1507FE18: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x1507FE1C: b           L_1507FE60
    // 0x1507FE20: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_1507FE60;
    // 0x1507FE20: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_1507FE24:
    // 0x1507FE24: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x1507FE28: bne         $v0, $t8, L_1507FE60
    if (ctx->r2 != ctx->r24) {
        // 0x1507FE2C: lui         $a3, 0x800D
        ctx->r7 = S32(0X800D << 16);
            goto L_1507FE60;
    }
    // 0x1507FE2C: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x1507FE30: addiu       $a3, $a3, 0x18C4
    ctx->r7 = ADD32(ctx->r7, 0X18C4);
    // 0x1507FE34: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x1507FE38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1507FE3C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1507FE40: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1507FE44: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1507FE48: jal         0x1000DE1C
    // 0x1507FE4C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    func_1000DE1C(rdram, ctx);
        goto after_3;
    // 0x1507FE4C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    after_3:
    // 0x1507FE50: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1507FE54: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1507FE58: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x1507FE5C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_1507FE60:
    // 0x1507FE60: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x1507FE64: andi        $t5, $t2, 0x8
    ctx->r13 = ctx->r10 & 0X8;
    // 0x1507FE68: beq         $v0, $t5, L_1507FE88
    if (ctx->r2 == ctx->r13) {
        // 0x1507FE6C: and         $t6, $t1, $t0
        ctx->r14 = ctx->r9 & ctx->r8;
            goto L_1507FE88;
    }
    // 0x1507FE6C: and         $t6, $t1, $t0
    ctx->r14 = ctx->r9 & ctx->r8;
    // 0x1507FE70: andi        $t9, $t6, 0x8
    ctx->r25 = ctx->r14 & 0X8;
    // 0x1507FE74: bne         $v0, $t9, L_1507FE88
    if (ctx->r2 != ctx->r25) {
        // 0x1507FE78: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_1507FE88;
    }
    // 0x1507FE78: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1507FE7C: jal         0x100109D0
    // 0x1507FE80: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    func_100109D0(rdram, ctx);
        goto after_4;
    // 0x1507FE80: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    after_4:
    // 0x1507FE84: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_1507FE88:
    // 0x1507FE88: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x1507FE8C: sb          $t3, 0x6($t4)
    MEM_B(0X6, ctx->r12) = ctx->r11;
L_1507FE90:
    // 0x1507FE90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507FE94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1507FE98: jr          $ra
    // 0x1507FE9C: nop

    return;
    return;
    // 0x1507FE9C: nop

;}
RECOMP_FUNC void func_15136F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15136F50: addiu       $sp, $sp, -0x158
    ctx->r29 = ADD32(ctx->r29, -0X158);
    // 0x15136F54: sw          $s6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r22;
    // 0x15136F58: sw          $s2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r18;
    // 0x15136F5C: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x15136F60: sw          $s0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r16;
    // 0x15136F64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15136F68: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x15136F6C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x15136F70: andi        $s6, $a3, 0xFF
    ctx->r22 = ctx->r7 & 0XFF;
    // 0x15136F74: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x15136F78: sw          $s7, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r23;
    // 0x15136F7C: sw          $s5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r21;
    // 0x15136F80: sw          $s4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r20;
    // 0x15136F84: sw          $s3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r19;
    // 0x15136F88: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x15136F8C: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x15136F90: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x15136F94: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x15136F98: sw          $a3, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r7;
    // 0x15136F9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15136FA0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15136FA4: addiu       $t8, $sp, 0x11C
    ctx->r24 = ADD32(ctx->r29, 0X11C);
    // 0x15136FA8: sb          $t6, 0x11A($sp)
    MEM_B(0X11A, ctx->r29) = ctx->r14;
    // 0x15136FAC: sb          $t7, 0x119($sp)
    MEM_B(0X119, ctx->r29) = ctx->r15;
    // 0x15136FB0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15136FB4: addiu       $a0, $sp, 0x14C
    ctx->r4 = ADD32(ctx->r29, 0X14C);
    // 0x15136FB8: addiu       $a1, $sp, 0x140
    ctx->r5 = ADD32(ctx->r29, 0X140);
    // 0x15136FBC: addiu       $a2, $sp, 0x134
    ctx->r6 = ADD32(ctx->r29, 0X134);
    // 0x15136FC0: addiu       $a3, $sp, 0x128
    ctx->r7 = ADD32(ctx->r29, 0X128);
    // 0x15136FC4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15136FC8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15136FCC: jal         0x15137C64
    // 0x15136FD0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_15137C64(rdram, ctx);
        goto after_0;
    // 0x15136FD0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_0:
    // 0x15136FD4: beq         $v0, $zero, L_151375D4
    if (ctx->r2 == 0) {
        // 0x15136FD8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151375D4;
    }
    // 0x15136FD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15136FDC: bne         $v0, $at, L_15136FEC
    if (ctx->r2 != ctx->r1) {
        // 0x15136FE0: nop
    
            goto L_15136FEC;
    }
    // 0x15136FE0: nop

    // 0x15136FE4: sb          $zero, 0x11A($sp)
    MEM_B(0X11A, ctx->r29) = 0;
    // 0x15136FE8: sb          $zero, 0x119($sp)
    MEM_B(0X119, ctx->r29) = 0;
L_15136FEC:
    // 0x15136FEC: jal         0x150ADA68
    // 0x15136FF0: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x15136FF0: nop

    after_1:
    // 0x15136FF4: jal         0x150ADA20
    // 0x15136FF8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15136FF8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x15136FFC: jal         0x150ADA20
    // 0x15137000: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15137000: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_3:
    // 0x15137004: lui         $at, 0x4340
    ctx->r1 = S32(0X4340 << 16);
    // 0x15137008: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1513700C: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x15137010: divu        $zero, $s0, $at
    lo = S32(U32(ctx->r16) / U32(ctx->r1)); hi = S32(U32(ctx->r16) % U32(ctx->r1));
    // 0x15137014: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x15137018: mfhi        $a2
    ctx->r6 = hi;
    // 0x1513701C: andi        $a3, $v0, 0x7
    ctx->r7 = ctx->r2 & 0X7;
    // 0x15137020: lbu         $s4, 0x16B($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X16B);
    // 0x15137024: lw          $s5, 0x16C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X16C);
    // 0x15137028: addiu       $a3, $a3, 0xF
    ctx->r7 = ADD32(ctx->r7, 0XF);
    // 0x1513702C: addiu       $a2, $a2, 0x9B
    ctx->r6 = ADD32(ctx->r6, 0X9B);
    // 0x15137030: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x15137034: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x15137038: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x1513703C: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    // 0x15137040: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15137044: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x15137048: addiu       $a0, $sp, 0x14C
    ctx->r4 = ADD32(ctx->r29, 0X14C);
    // 0x1513704C: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x15137050: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x15137054: jal         0x151DC034
    // 0x15137058: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    func_151DC034(rdram, ctx);
        goto after_4;
    // 0x15137058: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    after_4:
    // 0x1513705C: jal         0x150ADA20
    // 0x15137060: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15137060: nop

    after_5:
    // 0x15137064: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x15137068: addiu       $s1, $v1, 0x4
    ctx->r17 = ADD32(ctx->r3, 0X4);
    // 0x1513706C: blez        $s1, L_15137224
    if (SIGNED(ctx->r17) <= 0) {
        // 0x15137070: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_15137224;
    }
    // 0x15137070: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15137074: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x15137078: addiu       $s7, $zero, 0x9C
    ctx->r23 = ADD32(0, 0X9C);
    // 0x1513707C: addiu       $s3, $sp, 0x110
    ctx->r19 = ADD32(ctx->r29, 0X110);
    // 0x15137080: addiu       $s2, $sp, 0x10C
    ctx->r18 = ADD32(ctx->r29, 0X10C);
L_15137084:
    // 0x15137084: jal         0x150ADA68
    // 0x15137088: nop

    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x15137088: nop

    after_6:
    // 0x1513708C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15137090: lwc1        $f8, 0x4634($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4634);
    // 0x15137094: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15137098: lwc1        $f16, 0x4638($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4638);
    // 0x1513709C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151370A0: jal         0x150ADA20
    // 0x151370A4: add.s       $f20, $f10, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f16.fl;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151370A4: add.s       $f20, $f10, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f16.fl;
    after_7:
    // 0x151370A8: jal         0x150ADA68
    // 0x151370AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x151370AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_8:
    // 0x151370B0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x151370B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151370B8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x151370BC: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x151370C0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151370C4: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    // 0x151370C8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x151370CC: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x151370D0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x151370D4: jal         0x15143874
    // 0x151370D8: nop

    func_15143874(rdram, ctx);
        goto after_9;
    // 0x151370D8: nop

    after_9:
    // 0x151370DC: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x151370E0: lwc1        $f0, 0x10C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x151370E4: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x151370E8: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x151370EC: lwc1        $f2, 0x110($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X110);
    // 0x151370F0: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x151370F4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151370F8: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x151370FC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15137100: lwc1        $f16, 0x138($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X138);
    // 0x15137104: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x15137108: lwc1        $f18, 0x12C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1513710C: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x15137110: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x15137114: mul.s       $f4, $f16, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x15137118: lwc1        $f8, 0x120($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1513711C: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15137120: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15137124: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15137128: lwc1        $f6, 0x13C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x1513712C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15137130: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x15137134: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x15137138: swc1        $f4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f4.u32l;
    // 0x1513713C: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x15137140: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x15137144: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15137148: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1513714C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15137150: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x15137154: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x15137158: jal         0x150ADA68
    // 0x1513715C: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x1513715C: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x15137160: jal         0x150ADA68
    // 0x15137164: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x15137164: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_11:
    // 0x15137168: jal         0x150ADA20
    // 0x1513716C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x1513716C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_12:
    // 0x15137170: jal         0x150ADA20
    // 0x15137174: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x15137174: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_13:
    // 0x15137178: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1513717C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15137180: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x15137184: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15137188: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513718C: lwc1        $f10, 0x463C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X463C);
    // 0x15137190: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15137194: lwc1        $f8, 0x4640($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4640);
    // 0x15137198: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x1513719C: divu        $zero, $s0, $at
    lo = S32(U32(ctx->r16) / U32(ctx->r1)); hi = S32(U32(ctx->r16) % U32(ctx->r1));
    // 0x151371A0: mfhi        $t4
    ctx->r12 = hi;
    // 0x151371A4: mul.s       $f4, $f22, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x151371A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151371AC: divu        $zero, $v0, $s7
    lo = S32(U32(ctx->r2) / U32(ctx->r23)); hi = S32(U32(ctx->r2) % U32(ctx->r23));
    // 0x151371B0: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x151371B4: mul.s       $f4, $f20, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x151371B8: mfhi        $t6
    ctx->r14 = hi;
    // 0x151371BC: addiu       $t7, $t6, 0x64
    ctx->r15 = ADD32(ctx->r14, 0X64);
    // 0x151371C0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x151371C4: addiu       $t5, $t4, 0x1E
    ctx->r13 = ADD32(ctx->r12, 0X1E);
    // 0x151371C8: addiu       $t8, $zero, 0x2E
    ctx->r24 = ADD32(0, 0X2E);
    // 0x151371CC: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x151371D0: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x151371D4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x151371D8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x151371DC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x151371E0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x151371E4: andi        $a0, $s6, 0xFF
    ctx->r4 = ctx->r22 & 0XFF;
    // 0x151371E8: addiu       $a1, $sp, 0x140
    ctx->r5 = ADD32(ctx->r29, 0X140);
    // 0x151371EC: addiu       $a2, $sp, 0x100
    ctx->r6 = ADD32(ctx->r29, 0X100);
    // 0x151371F0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151371F4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x151371F8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x151371FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x15137200: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x15137204: bne         $s7, $zero, L_15137210
    if (ctx->r23 != 0) {
        // 0x15137208: nop
    
            goto L_15137210;
    }
    // 0x15137208: nop

    // 0x1513720C: break       7
    do_break(353595916);
L_15137210:
    // 0x15137210: jal         0x151DB5D0
    // 0x15137214: nop

    func_151DB5D0(rdram, ctx);
        goto after_14;
    // 0x15137214: nop

    after_14:
    // 0x15137218: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x1513721C: bne         $s1, $zero, L_15137084
    if (ctx->r17 != 0) {
        // 0x15137220: nop
    
            goto L_15137084;
    }
    // 0x15137220: nop

L_15137224:
    // 0x15137224: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15137228: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1513722C: addiu       $s7, $zero, 0x9C
    ctx->r23 = ADD32(0, 0X9C);
    // 0x15137230: lbu         $t0, 0x11A($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X11A);
    // 0x15137234: beql        $t0, $zero, L_151373D4
    if (ctx->r8 == 0) {
        // 0x15137238: lbu         $t6, 0x119($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0X119);
            goto L_151373D4;
    }
    goto skip_0;
    // 0x15137238: lbu         $t6, 0x119($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X119);
    skip_0:
    // 0x1513723C: jal         0x150ADA20
    // 0x15137240: nop

    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x15137240: nop

    after_15:
    // 0x15137244: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x15137248: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1513724C: sll         $s1, $v1, 16
    ctx->r17 = S32(ctx->r3 << 16);
    // 0x15137250: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x15137254: sra         $t1, $s1, 16
    ctx->r9 = S32(SIGNED(ctx->r17) >> 16);
    // 0x15137258: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x1513725C: beq         $t3, $zero, L_151373D0
    if (ctx->r11 == 0) {
        // 0x15137260: or          $s1, $t1, $zero
        ctx->r17 = ctx->r9 | 0;
            goto L_151373D0;
    }
    // 0x15137260: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x15137264: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15137268: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1513726C: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x15137270: addiu       $s3, $sp, 0xF4
    ctx->r19 = ADD32(ctx->r29, 0XF4);
    // 0x15137274: addiu       $s2, $sp, 0xF0
    ctx->r18 = ADD32(ctx->r29, 0XF0);
L_15137278:
    // 0x15137278: jal         0x150ADA20
    // 0x1513727C: nop

    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x1513727C: nop

    after_16:
    // 0x15137280: jal         0x150ADA68
    // 0x15137284: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_17;
    // 0x15137284: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_17:
    // 0x15137288: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1513728C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15137290: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x15137294: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15137298: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1513729C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x151372A0: sll         $t4, $a0, 16
    ctx->r12 = S32(ctx->r4 << 16);
    // 0x151372A4: sra         $a0, $t4, 16
    ctx->r4 = S32(SIGNED(ctx->r12) >> 16);
    // 0x151372A8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x151372AC: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x151372B0: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x151372B4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x151372B8: jal         0x15143874
    // 0x151372BC: nop

    func_15143874(rdram, ctx);
        goto after_18;
    // 0x151372BC: nop

    after_18:
    // 0x151372C0: lwc1        $f0, 0xF0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x151372C4: lwc1        $f16, 0x128($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X128);
    // 0x151372C8: lwc1        $f2, 0xF4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x151372CC: lwc1        $f18, 0x11C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x151372D0: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151372D4: lwc1        $f8, 0x12C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x151372D8: mul.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151372DC: lwc1        $f18, 0x120($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X120);
    // 0x151372E0: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151372E4: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151372E8: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151372EC: lwc1        $f18, 0x124($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X124);
    // 0x151372F0: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x151372F4: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x151372F8: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151372FC: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x15137300: mul.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x15137304: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    // 0x15137308: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1513730C: jal         0x150ADA20
    // 0x15137310: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_19;
    // 0x15137310: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    after_19:
    // 0x15137314: jal         0x150ADA68
    // 0x15137318: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_20;
    // 0x15137318: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_20:
    // 0x1513731C: jal         0x150ADA20
    // 0x15137320: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_21;
    // 0x15137320: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_21:
    // 0x15137324: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15137328: divu        $zero, $s0, $at
    lo = S32(U32(ctx->r16) / U32(ctx->r1)); hi = S32(U32(ctx->r16) % U32(ctx->r1));
    // 0x1513732C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15137330: lwc1        $f6, 0x4644($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4644);
    // 0x15137334: mfhi        $a3
    ctx->r7 = hi;
    // 0x15137338: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513733C: lwc1        $f18, 0x4648($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4648);
    // 0x15137340: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15137344: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15137348: mul.s       $f10, $f20, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x1513734C: mfhi        $t9
    ctx->r25 = hi;
    // 0x15137350: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x15137354: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x15137358: addiu       $t0, $t9, 0x4
    ctx->r8 = ADD32(ctx->r25, 0X4);
    // 0x1513735C: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x15137360: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15137364: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x15137368: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1513736C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x15137370: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x15137374: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x15137378: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x1513737C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x15137380: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x15137384: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15137388: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1513738C: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15137390: addiu       $a0, $sp, 0x14C
    ctx->r4 = ADD32(ctx->r29, 0X14C);
    // 0x15137394: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    // 0x15137398: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1513739C: swc1        $f22, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f22.u32l;
    // 0x151373A0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x151373A4: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x151373A8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x151373AC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x151373B0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x151373B4: jal         0x151DA6F8
    // 0x151373B8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    func_151DA6F8(rdram, ctx);
        goto after_22;
    // 0x151373B8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    after_22:
    // 0x151373BC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x151373C0: sll         $t4, $s1, 16
    ctx->r12 = S32(ctx->r17 << 16);
    // 0x151373C4: sra         $s1, $t4, 16
    ctx->r17 = S32(SIGNED(ctx->r12) >> 16);
    // 0x151373C8: bne         $s1, $zero, L_15137278
    if (ctx->r17 != 0) {
        // 0x151373CC: nop
    
            goto L_15137278;
    }
    // 0x151373CC: nop

L_151373D0:
    // 0x151373D0: lbu         $t6, 0x119($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X119);
L_151373D4:
    // 0x151373D4: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x151373D8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151373DC: beql        $t6, $zero, L_151375D8
    if (ctx->r14 == 0) {
        // 0x151373E0: lw          $ra, 0x8C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X8C);
            goto L_151375D8;
    }
    goto skip_1;
    // 0x151373E0: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    skip_1:
    // 0x151373E4: lbu         $t7, -0x19EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X19EA);
    // 0x151373E8: beql        $t7, $zero, L_151375D8
    if (ctx->r15 == 0) {
        // 0x151373EC: lw          $ra, 0x8C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X8C);
            goto L_151375D8;
    }
    goto skip_2;
    // 0x151373EC: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    skip_2:
    // 0x151373F0: jal         0x150ADA20
    // 0x151373F4: nop

    func_150ADA20(rdram, ctx);
        goto after_23;
    // 0x151373F4: nop

    after_23:
    // 0x151373F8: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x151373FC: addiu       $s1, $v1, 0x3
    ctx->r17 = ADD32(ctx->r3, 0X3);
    // 0x15137400: beq         $s1, $zero, L_151375D4
    if (ctx->r17 == 0) {
        // 0x15137404: lui         $at, 0x430C
        ctx->r1 = S32(0X430C << 16);
            goto L_151375D4;
    }
    // 0x15137404: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x15137408: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1513740C: addiu       $s3, $sp, 0xAC
    ctx->r19 = ADD32(ctx->r29, 0XAC);
    // 0x15137410: addiu       $s2, $sp, 0xB8
    ctx->r18 = ADD32(ctx->r29, 0XB8);
L_15137414:
    // 0x15137414: jal         0x150ADA20
    // 0x15137418: nop

    func_150ADA20(rdram, ctx);
        goto after_24;
    // 0x15137418: nop

    after_24:
    // 0x1513741C: jal         0x150ADA68
    // 0x15137420: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_25;
    // 0x15137420: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_25:
    // 0x15137424: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x15137428: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1513742C: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x15137430: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15137434: addiu       $a2, $sp, 0xCC
    ctx->r6 = ADD32(ctx->r29, 0XCC);
    // 0x15137438: addiu       $a3, $sp, 0xD0
    ctx->r7 = ADD32(ctx->r29, 0XD0);
    // 0x1513743C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x15137440: jal         0x15143874
    // 0x15137444: nop

    func_15143874(rdram, ctx);
        goto after_26;
    // 0x15137444: nop

    after_26:
    // 0x15137448: lwc1        $f20, 0xCC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x1513744C: lwc1        $f18, 0x134($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X134);
    // 0x15137450: lwc1        $f16, 0x128($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X128);
    // 0x15137454: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x15137458: mul.s       $f18, $f18, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x1513745C: lwc1        $f8, 0x138($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X138);
    // 0x15137460: lwc1        $f6, 0x12C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x15137464: mul.s       $f16, $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x15137468: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1513746C: lwc1        $f2, 0x13C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x15137470: mul.s       $f8, $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x15137474: lwc1        $f0, 0x130($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X130);
    // 0x15137478: lwc1        $f12, 0x140($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X140);
    // 0x1513747C: mul.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x15137480: lwc1        $f14, 0x144($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X144);
    // 0x15137484: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x15137488: mul.s       $f6, $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x1513748C: lwc1        $f18, 0x120($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X120);
    // 0x15137490: addiu       $t0, $sp, 0xB0
    ctx->r8 = ADD32(ctx->r29, 0XB0);
    // 0x15137494: mul.s       $f2, $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x15137498: addiu       $t1, $sp, 0xB4
    ctx->r9 = ADD32(ctx->r29, 0XB4);
    // 0x1513749C: add.s       $f4, $f16, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x151374A0: mul.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x151374A4: lwc1        $f16, 0x124($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X124);
    // 0x151374A8: add.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151374AC: mul.s       $f20, $f0, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x151374B0: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x151374B4: addiu       $t2, $sp, 0xA8
    ctx->r10 = ADD32(ctx->r29, 0XA8);
    // 0x151374B8: mul.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x151374BC: addiu       $t3, $sp, 0xA4
    ctx->r11 = ADD32(ctx->r29, 0XA4);
    // 0x151374C0: add.s       $f18, $f6, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x151374C4: lw          $a2, 0x148($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X148);
    // 0x151374C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151374CC: add.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f2.fl + ctx->f20.fl;
    // 0x151374D0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x151374D4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x151374D8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x151374DC: add.s       $f10, $f20, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f20.fl + ctx->f10.fl;
    // 0x151374E0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x151374E4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x151374E8: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x151374EC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x151374F0: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x151374F4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151374F8: jal         0x150AC9C0
    // 0x151374FC: swc1        $f26, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f26.u32l;
    func_150AC9C0(rdram, ctx);
        goto after_27;
    // 0x151374FC: swc1        $f26, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f26.u32l;
    after_27:
    // 0x15137500: beql        $v0, $zero, L_151375CC
    if (ctx->r2 == 0) {
        // 0x15137504: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_151375CC;
    }
    goto skip_3;
    // 0x15137504: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_3:
    // 0x15137508: jal         0x15145C90
    // 0x1513750C: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    func_15145C90(rdram, ctx);
        goto after_28;
    // 0x1513750C: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    after_28:
    // 0x15137510: beq         $v0, $zero, L_151375C8
    if (ctx->r2 == 0) {
        // 0x15137514: lwc1        $f8, 0xA8($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
            goto L_151375C8;
    }
    // 0x15137514: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x15137518: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513751C: lwc1        $f4, 0x464C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X464C);
    // 0x15137520: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x15137524: nop

    // 0x15137528: bc1fl       L_151375CC
    if (!c1cs) {
        // 0x1513752C: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_151375CC;
    }
    goto skip_4;
    // 0x1513752C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_4:
    // 0x15137530: jal         0x150ADA68
    // 0x15137534: nop

    func_150ADA68(rdram, ctx);
        goto after_29;
    // 0x15137534: nop

    after_29:
    // 0x15137538: jal         0x150ADA20
    // 0x1513753C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_30;
    // 0x1513753C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_30:
    // 0x15137540: jal         0x150ADA20
    // 0x15137544: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_31;
    // 0x15137544: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_31:
    // 0x15137548: divu        $zero, $s0, $s7
    lo = S32(U32(ctx->r16) / U32(ctx->r23)); hi = S32(U32(ctx->r16) % U32(ctx->r23));
    // 0x1513754C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x15137550: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15137554: mfhi        $a2
    ctx->r6 = hi;
    // 0x15137558: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x1513755C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15137560: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x15137564: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15137568: mul.s       $f6, $f20, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x1513756C: mfhi        $t5
    ctx->r13 = hi;
    // 0x15137570: addiu       $a2, $a2, 0x64
    ctx->r6 = ADD32(ctx->r6, 0X64);
    // 0x15137574: andi        $t4, $a2, 0xFF
    ctx->r12 = ctx->r6 & 0XFF;
    // 0x15137578: addiu       $t6, $t5, 0x64
    ctx->r14 = ADD32(ctx->r13, 0X64);
    // 0x1513757C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15137580: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15137584: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15137588: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1513758C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x15137590: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x15137594: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x15137598: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1513759C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151375A0: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x151375A4: andi        $a0, $s6, 0xFF
    ctx->r4 = ctx->r22 & 0XFF;
    // 0x151375A8: bne         $s7, $zero, L_151375B4
    if (ctx->r23 != 0) {
        // 0x151375AC: nop
    
            goto L_151375B4;
    }
    // 0x151375AC: nop

    // 0x151375B0: break       7
    do_break(353596848);
L_151375B4:
    // 0x151375B4: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x151375B8: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x151375BC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x151375C0: jal         0x151D9B8C
    // 0x151375C4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    func_151D9B8C(rdram, ctx);
        goto after_32;
    // 0x151375C4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    after_32:
L_151375C8:
    // 0x151375C8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_151375CC:
    // 0x151375CC: bne         $s1, $zero, L_15137414
    if (ctx->r17 != 0) {
        // 0x151375D0: nop
    
            goto L_15137414;
    }
    // 0x151375D0: nop

L_151375D4:
    // 0x151375D4: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
L_151375D8:
    // 0x151375D8: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x151375DC: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x151375E0: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x151375E4: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x151375E8: lw          $s0, 0x6C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X6C);
    // 0x151375EC: lw          $s1, 0x70($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X70);
    // 0x151375F0: lw          $s2, 0x74($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X74);
    // 0x151375F4: lw          $s3, 0x78($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X78);
    // 0x151375F8: lw          $s4, 0x7C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X7C);
    // 0x151375FC: lw          $s5, 0x80($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X80);
    // 0x15137600: lw          $s6, 0x84($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X84);
    // 0x15137604: lw          $s7, 0x88($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X88);
    // 0x15137608: jr          $ra
    // 0x1513760C: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    return;
    return;
    // 0x1513760C: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
;}
RECOMP_FUNC void func_15077318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077318: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507731C: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15077320: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15077324: beq         $t6, $zero, L_15077344
    if (ctx->r14 == 0) {
        // 0x15077328: nop
    
            goto L_15077344;
    }
    // 0x15077328: nop

    // 0x1507732C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15077330: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15077334: lbu         $t7, 0x101($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X101);
    // 0x15077338: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x1507733C: jr          $ra
    // 0x15077340: sb          $t8, 0x101($v0)
    MEM_B(0X101, ctx->r2) = ctx->r24;
    return;
    return;
    // 0x15077340: sb          $t8, 0x101($v0)
    MEM_B(0X101, ctx->r2) = ctx->r24;
L_15077344:
    // 0x15077344: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15077348: lbu         $t9, 0x101($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X101);
    // 0x1507734C: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x15077350: sb          $t0, 0x101($v0)
    MEM_B(0X101, ctx->r2) = ctx->r8;
    // 0x15077354: jr          $ra
    // 0x15077358: nop

    return;
    return;
    // 0x15077358: nop

;}
RECOMP_FUNC void func_151D3130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D3130: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151D3134: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x151D3138: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x151D313C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151D3140: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x151D3144: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x151D3148: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x151D314C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151D3150: lbu         $t6, 0x1D($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X1D);
    // 0x151D3154: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151D3158: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151D315C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x151D3160: lw          $v0, -0x3A4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A4);
    // 0x151D3164: beql        $v0, $zero, L_151D3178
    if (ctx->r2 == 0) {
        // 0x151D3168: lw          $s0, 0x24($s4)
        ctx->r16 = MEM_W(ctx->r20, 0X24);
            goto L_151D3178;
    }
    goto skip_0;
    // 0x151D3168: lw          $s0, 0x24($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X24);
    skip_0:
    // 0x151D316C: jalr        $v0
    // 0x151D3170: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x151D3170: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x151D3174: lw          $s0, 0x24($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X24);
L_151D3178:
    // 0x151D3178: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x151D317C: addiu       $s3, $s3, -0x3B8
    ctx->r19 = ADD32(ctx->r19, -0X3B8);
    // 0x151D3180: beq         $s0, $zero, L_151D31C8
    if (ctx->r16 == 0) {
        // 0x151D3184: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_151D31C8;
    }
    // 0x151D3184: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x151D3188: lb          $v0, 0x2A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2A);
L_151D318C:
    // 0x151D318C: lw          $s1, 0x40($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X40);
    // 0x151D3190: beq         $s2, $v0, L_151D31B0
    if (ctx->r18 == ctx->r2) {
        // 0x151D3194: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_151D31B0;
    }
    // 0x151D3194: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x151D3198: addu        $t9, $s3, $t8
    ctx->r25 = ADD32(ctx->r19, ctx->r24);
    // 0x151D319C: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x151D31A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D31A4: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x151D31A8: jalr        $t9
    // 0x151D31AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x151D31AC: nop

    after_1:
L_151D31B0:
    // 0x151D31B0: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x151D31B4: jal         0x1516972C
    // 0x151D31B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x151D31B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x151D31BC: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x151D31C0: bnel        $s1, $zero, L_151D318C
    if (ctx->r17 != 0) {
        // 0x151D31C4: lb          $v0, 0x2A($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X2A);
            goto L_151D318C;
    }
    goto skip_1;
    // 0x151D31C4: lb          $v0, 0x2A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2A);
    skip_1:
L_151D31C8:
    // 0x151D31C8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x151D31CC: jal         0x1514EDF0
    // 0x151D31D0: lw          $a1, 0x10($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X10);
    func_1514EDF0(rdram, ctx);
        goto after_3;
    // 0x151D31D0: lw          $a1, 0x10($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X10);
    after_3:
    // 0x151D31D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151D31D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151D31DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x151D31E0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x151D31E4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x151D31E8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x151D31EC: jr          $ra
    // 0x151D31F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151D31F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15091534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15091534: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15091538: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1509153C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15091540: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15091544: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15091548: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1509154C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x15091550: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x15091554: addiu       $t8, $t8, 0xD16
    ctx->r24 = ADD32(ctx->r24, 0XD16);
    // 0x15091558: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x1509155C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x15091560: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15091564: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x15091568: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1509156C: jal         0x1510D0EC
    // 0x15091570: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x15091570: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x15091574: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15091578: beq         $v0, $at, L_1509169C
    if (ctx->r2 == ctx->r1) {
        // 0x1509157C: lui         $t1, 0xE600
        ctx->r9 = S32(0XE600 << 16);
            goto L_1509169C;
    }
    // 0x1509157C: lui         $t1, 0xE600
    ctx->r9 = S32(0XE600 << 16);
    // 0x15091580: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15091584: lui         $t9, 0xFD50
    ctx->r25 = S32(0XFD50 << 16);
    // 0x15091588: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x1509158C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x15091590: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15091598: lui         $t3, 0x709
    ctx->r11 = S32(0X709 << 16);
    // 0x1509159C: ori         $t3, $t3, 0x8260
    ctx->r11 = ctx->r11 | 0X8260;
    // 0x150915A0: lui         $t2, 0xF550
    ctx->r10 = S32(0XF550 << 16);
    // 0x150915A4: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x150915A8: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x150915AC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150915B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150915B4: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x150915B8: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x150915BC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150915C0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x150915C4: lui         $t5, 0x73F
    ctx->r13 = S32(0X73F << 16);
    // 0x150915C8: ori         $t5, $t5, 0xF000
    ctx->r13 = ctx->r13 | 0XF000;
    // 0x150915CC: lui         $t4, 0xF300
    ctx->r12 = S32(0XF300 << 16);
    // 0x150915D0: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x150915D4: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    // 0x150915D8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150915DC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x150915E0: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x150915E4: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x150915E8: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x150915EC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150915F0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150915F4: lui         $t7, 0xF540
    ctx->r15 = S32(0XF540 << 16);
    // 0x150915F8: lui         $t8, 0x9
    ctx->r24 = S32(0X9 << 16);
    // 0x150915FC: ori         $t8, $t8, 0x8260
    ctx->r24 = ctx->r24 | 0X8260;
    // 0x15091600: ori         $t7, $t7, 0x800
    ctx->r15 = ctx->r15 | 0X800;
    // 0x15091604: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x15091608: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x1509160C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15091614: lui         $t2, 0xF
    ctx->r10 = S32(0XF << 16);
    // 0x15091618: ori         $t2, $t2, 0xC0FC
    ctx->r10 = ctx->r10 | 0XC0FC;
    // 0x1509161C: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x15091620: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x15091624: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x15091628: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1509162C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15091630: lui         $t3, 0xFD10
    ctx->r11 = S32(0XFD10 << 16);
    // 0x15091634: addiu       $t4, $v0, 0x800
    ctx->r12 = ADD32(ctx->r2, 0X800);
    // 0x15091638: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x1509163C: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x15091640: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091644: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x15091648: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x1509164C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x15091650: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091654: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x15091658: lui         $t6, 0x603
    ctx->r14 = S32(0X603 << 16);
    // 0x1509165C: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x15091660: lui         $t5, 0xF000
    ctx->r13 = S32(0XF000 << 16);
    // 0x15091664: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x15091668: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x1509166C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091670: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15091674: lui         $t7, 0xEF00
    ctx->r15 = S32(0XEF00 << 16);
    // 0x15091678: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x1509167C: ori         $t8, $t8, 0x4244
    ctx->r24 = ctx->r24 | 0X4244;
    // 0x15091680: ori         $t7, $t7, 0xAC3F
    ctx->r15 = ctx->r15 | 0XAC3F;
    // 0x15091684: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15091688: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1509168C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15091690: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x15091694: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15091698: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
L_1509169C:
    // 0x1509169C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150916A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150916A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150916A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150916AC: jr          $ra
    // 0x150916B0: nop

    return;
    return;
    // 0x150916B0: nop

;}
RECOMP_FUNC void func_15147D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15147D1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15147D20: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15147D24: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15147D28: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15147D2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15147D30: lw          $t7, 0x20($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X20);
    // 0x15147D34: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x15147D38: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15147D3C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x15147D40: lw          $v0, -0x5C70($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5C70);
    // 0x15147D44: beql        $v0, $zero, L_15147D58
    if (ctx->r2 == 0) {
        // 0x15147D48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15147D58;
    }
    goto skip_0;
    // 0x15147D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15147D4C: jalr        $v0
    // 0x15147D50: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x15147D50: nop

    after_0:
    // 0x15147D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15147D58:
    // 0x15147D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15147D5C: jr          $ra
    // 0x15147D60: nop

    return;
    return;
    // 0x15147D60: nop

;}
RECOMP_FUNC void func_100109D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100109D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x100109D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100109D8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x100109DC: lw          $t6, 0x318($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X318);
    // 0x100109E0: lui         $a0, 0x1001
    ctx->r4 = S32(0X1001 << 16);
    // 0x100109E4: addiu       $a0, $a0, -0x1190
    ctx->r4 = ADD32(ctx->r4, -0X1190);
    // 0x100109E8: beql        $t6, $zero, L_10010A10
    if (ctx->r14 == 0) {
        // 0x100109EC: lbu         $a2, 0x3B($a1)
        ctx->r6 = MEM_BU(ctx->r5, 0X3B);
            goto L_10010A10;
    }
    goto skip_0;
    // 0x100109EC: lbu         $a2, 0x3B($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X3B);
    skip_0:
    // 0x100109F0: lhu         $a0, 0x8E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X8E);
    // 0x100109F4: beql        $a0, $zero, L_10010A2C
    if (ctx->r4 == 0) {
        // 0x100109F8: sh          $zero, 0x8E($a1)
        MEM_H(0X8E, ctx->r5) = 0;
            goto L_10010A2C;
    }
    goto skip_1;
    // 0x100109F8: sh          $zero, 0x8E($a1)
    MEM_H(0X8E, ctx->r5) = 0;
    skip_1:
    // 0x100109FC: jal         0x100111C8
    // 0x10010A00: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x10010A00: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x10010A04: b           L_10010A28
    // 0x10010A08: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
        goto L_10010A28;
    // 0x10010A08: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x10010A0C: lbu         $a2, 0x3B($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X3B);
L_10010A10:
    // 0x10010A10: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x10010A14: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x10010A18: or          $t7, $a2, $at
    ctx->r15 = ctx->r6 | ctx->r1;
    // 0x10010A1C: jal         0x1000FD38
    // 0x10010A20: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_1000FD38(rdram, ctx);
        goto after_1;
    // 0x10010A20: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_1:
    // 0x10010A24: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_10010A28:
    // 0x10010A28: sh          $zero, 0x8E($a1)
    MEM_H(0X8E, ctx->r5) = 0;
L_10010A2C:
    // 0x10010A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10010A30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10010A34: jr          $ra
    // 0x10010A38: nop

    return;
    return;
    // 0x10010A38: nop

;}
RECOMP_FUNC void func_15076C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076C7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15076C80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15076C84: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15076C88: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15076C8C: lbu         $a2, 0x1890($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1890);
    // 0x15076C90: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15076C94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15076C98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15076C9C: jal         0x1506160C
    // 0x15076CA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1506160C(rdram, ctx);
        goto after_0;
    // 0x15076CA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x15076CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15076CA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15076CAC: jr          $ra
    // 0x15076CB0: nop

    return;
    return;
    // 0x15076CB0: nop

;}
RECOMP_FUNC void func_151D792C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D792C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151D7930: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x151D7934: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151D7938: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151D793C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x151D7940: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x151D7944: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x151D7948: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151D794C: lb          $v1, 0x2C($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2C);
    // 0x151D7950: lw          $s4, 0x94($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X94);
    // 0x151D7954: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x151D7958: beql        $at, $zero, L_151D797C
    if (ctx->r1 == 0) {
        // 0x151D795C: lb          $s0, 0x2E($s1)
        ctx->r16 = MEM_B(ctx->r17, 0X2E);
            goto L_151D797C;
    }
    goto skip_0;
    // 0x151D795C: lb          $s0, 0x2E($s1)
    ctx->r16 = MEM_B(ctx->r17, 0X2E);
    skip_0:
    // 0x151D7960: lhu         $t6, 0x1E($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X1E);
    // 0x151D7964: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x151D7968: beql        $t7, $zero, L_151D797C
    if (ctx->r15 == 0) {
        // 0x151D796C: lb          $s0, 0x2E($s1)
        ctx->r16 = MEM_B(ctx->r17, 0X2E);
            goto L_151D797C;
    }
    goto skip_1;
    // 0x151D796C: lb          $s0, 0x2E($s1)
    ctx->r16 = MEM_B(ctx->r17, 0X2E);
    skip_1:
    // 0x151D7970: b           L_151D7A18
    // 0x151D7974: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D7A18;
    // 0x151D7974: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151D7978: lb          $s0, 0x2E($s1)
    ctx->r16 = MEM_B(ctx->r17, 0X2E);
L_151D797C:
    // 0x151D797C: lb          $v0, 0x2D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2D);
    // 0x151D7980: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x151D7984: addiu       $s2, $s2, -0x165C
    ctx->r18 = ADD32(ctx->r18, -0X165C);
    // 0x151D7988: beq         $s0, $v0, L_151D79CC
    if (ctx->r16 == ctx->r2) {
        // 0x151D798C: addiu       $s3, $zero, 0x1C
        ctx->r19 = ADD32(0, 0X1C);
            goto L_151D79CC;
    }
    // 0x151D798C: addiu       $s3, $zero, 0x1C
    ctx->r19 = ADD32(0, 0X1C);
    // 0x151D7990: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_151D7994:
    // 0x151D7994: bgez        $s0, L_151D79A4
    if (SIGNED(ctx->r16) >= 0) {
        // 0x151D7998: nop
    
            goto L_151D79A4;
    }
    // 0x151D7998: nop

    // 0x151D799C: lbu         $s0, 0x25($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X25);
    // 0x151D79A0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_151D79A4:
    // 0x151D79A4: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D79A8: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x151D79AC: mflo        $t8
    ctx->r24 = lo;
    // 0x151D79B0: addu        $a0, $t8, $s4
    ctx->r4 = ADD32(ctx->r24, ctx->r20);
    // 0x151D79B4: jal         0x151D8718
    // 0x151D79B8: addiu       $a1, $a0, 0xC
    ctx->r5 = ADD32(ctx->r4, 0XC);
    func_151D8718(rdram, ctx);
        goto after_0;
    // 0x151D79B8: addiu       $a1, $a0, 0xC
    ctx->r5 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x151D79BC: lb          $v0, 0x2D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2D);
    // 0x151D79C0: bnel        $s0, $v0, L_151D7994
    if (ctx->r16 != ctx->r2) {
        // 0x151D79C4: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_151D7994;
    }
    goto skip_2;
    // 0x151D79C4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_2:
    // 0x151D79C8: lb          $v1, 0x2C($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2C);
L_151D79CC:
    // 0x151D79CC: addiu       $s3, $zero, 0x1C
    ctx->r19 = ADD32(0, 0X1C);
    // 0x151D79D0: blezl       $v1, L_151D7A04
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151D79D4: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_151D7A04;
    }
    goto skip_3;
    // 0x151D79D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_3:
    // 0x151D79D8: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D79DC: mflo        $t9
    ctx->r25 = lo;
    // 0x151D79E0: addu        $t0, $s4, $t9
    ctx->r8 = ADD32(ctx->r20, ctx->r25);
    // 0x151D79E4: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x151D79E8: sw          $at, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r1;
    // 0x151D79EC: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x151D79F0: sw          $t2, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r10;
    // 0x151D79F4: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x151D79F8: b           L_151D7A14
    // 0x151D79FC: sw          $at, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r1;
        goto L_151D7A14;
    // 0x151D79FC: sw          $at, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r1;
    // 0x151D7A00: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_151D7A04:
    // 0x151D7A04: nop

    // 0x151D7A08: swc1        $f0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->f0.u32l;
    // 0x151D7A0C: swc1        $f0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f0.u32l;
    // 0x151D7A10: swc1        $f0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f0.u32l;
L_151D7A14:
    // 0x151D7A14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151D7A18:
    // 0x151D7A18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151D7A1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151D7A20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x151D7A24: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x151D7A28: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x151D7A2C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x151D7A30: jr          $ra
    // 0x151D7A34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151D7A34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15087EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15087EF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15087EF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15087EF8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15087EFC: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x15087F00: lw          $v0, 0x72A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X72A0);
    // 0x15087F04: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x15087F08: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x15087F0C: beq         $v0, $zero, L_15087FB4
    if (ctx->r2 == 0) {
        // 0x15087F10: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15087FB4;
    }
    // 0x15087F10: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15087F14: addu        $v1, $t6, $v0
    ctx->r3 = ADD32(ctx->r14, ctx->r2);
    // 0x15087F18: lwc1        $f12, 0x10($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X10);
    // 0x15087F1C: lwc1        $f14, 0xC($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XC);
    // 0x15087F20: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x15087F24: jal         0x1505A630
    // 0x15087F28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1505A630(rdram, ctx);
        goto after_0;
    // 0x15087F28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x15087F2C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15087F30: lb          $t7, 0x23A8($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X23A8);
    // 0x15087F34: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x15087F38: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15087F3C: bne         $t7, $zero, L_15087F80
    if (ctx->r15 != 0) {
        // 0x15087F40: lw          $t2, 0x24($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X24);
            goto L_15087F80;
    }
    // 0x15087F40: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x15087F44: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15087F48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15087F4C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15087F50: addiu       $v1, $v0, 0x3600
    ctx->r3 = ADD32(ctx->r2, 0X3600);
    // 0x15087F54: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x15087F58: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15087F5C: nop

    // 0x15087F60: bc1f        L_15087F78
    if (!c1cs) {
        // 0x15087F64: nop
    
            goto L_15087F78;
    }
    // 0x15087F64: nop

    // 0x15087F68: addiu       $v1, $v0, 0x4A00
    ctx->r3 = ADD32(ctx->r2, 0X4A00);
    // 0x15087F6C: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x15087F70: b           L_15087FB0
    // 0x15087F74: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_15087FB0;
    // 0x15087F74: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_15087F78:
    // 0x15087F78: b           L_15087FB0
    // 0x15087F7C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_15087FB0;
    // 0x15087F7C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_15087F80:
    // 0x15087F80: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15087F84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15087F88: addiu       $v1, $v0, 0x3600
    ctx->r3 = ADD32(ctx->r2, 0X3600);
    // 0x15087F8C: andi        $t1, $v1, 0xFFFF
    ctx->r9 = ctx->r3 & 0XFFFF;
    // 0x15087F90: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x15087F94: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x15087F98: bc1f        L_15087FB0
    if (!c1cs) {
        // 0x15087F9C: nop
    
            goto L_15087FB0;
    }
    // 0x15087F9C: nop

    // 0x15087FA0: addiu       $v1, $v0, 0x4A00
    ctx->r3 = ADD32(ctx->r2, 0X4A00);
    // 0x15087FA4: andi        $t0, $v1, 0xFFFF
    ctx->r8 = ctx->r3 & 0XFFFF;
    // 0x15087FA8: b           L_15087FB0
    // 0x15087FAC: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
        goto L_15087FB0;
    // 0x15087FAC: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_15087FB0:
    // 0x15087FB0: sh          $v1, 0x76($t2)
    MEM_H(0X76, ctx->r10) = ctx->r3;
L_15087FB4:
    // 0x15087FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15087FB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15087FBC: jr          $ra
    // 0x15087FC0: nop

    return;
    return;
    // 0x15087FC0: nop

;}
RECOMP_FUNC void func_151ED90C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151ED90C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151ED910: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x151ED914: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x151ED918: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x151ED91C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151ED920: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x151ED924: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x151ED928: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151ED92C: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x151ED930: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x151ED934: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x151ED938: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x151ED93C: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    // 0x151ED940: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151ED944: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151ED948: jal         0x10003C40
    // 0x151ED94C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x151ED94C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x151ED950: bne         $v0, $zero, L_151ED960
    if (ctx->r2 != 0) {
        // 0x151ED954: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_151ED960;
    }
    // 0x151ED954: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x151ED958: b           L_151EDB34
    // 0x151ED95C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151EDB34;
    // 0x151ED95C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151ED960:
    // 0x151ED960: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151ED964: sb          $t6, 0x15($s5)
    MEM_B(0X15, ctx->r21) = ctx->r14;
    // 0x151ED968: addiu       $t7, $s5, 0x1C
    ctx->r15 = ADD32(ctx->r21, 0X1C);
    // 0x151ED96C: addiu       $t8, $s5, 0x20
    ctx->r24 = ADD32(ctx->r21, 0X20);
    // 0x151ED970: addiu       $t9, $s5, 0x24
    ctx->r25 = ADD32(ctx->r21, 0X24);
    // 0x151ED974: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151ED978: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151ED97C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151ED980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151ED984: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151ED988: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x151ED98C: jal         0x1503F62C
    // 0x151ED990: addiu       $a3, $s5, 0x14
    ctx->r7 = ADD32(ctx->r21, 0X14);
    func_1503F62C(rdram, ctx);
        goto after_1;
    // 0x151ED990: addiu       $a3, $s5, 0x14
    ctx->r7 = ADD32(ctx->r21, 0X14);
    after_1:
    // 0x151ED994: beq         $v0, $zero, L_151ED9AC
    if (ctx->r2 == 0) {
        // 0x151ED998: addiu       $s0, $s5, 0x28
        ctx->r16 = ADD32(ctx->r21, 0X28);
            goto L_151ED9AC;
    }
    // 0x151ED998: addiu       $s0, $s5, 0x28
    ctx->r16 = ADD32(ctx->r21, 0X28);
    // 0x151ED99C: jal         0x10004074
    // 0x151ED9A0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_10004074(rdram, ctx);
        goto after_2;
    // 0x151ED9A0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_2:
    // 0x151ED9A4: b           L_151EDB34
    // 0x151ED9A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151EDB34;
    // 0x151ED9A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151ED9AC:
    // 0x151ED9AC: jal         0x150A7BC0
    // 0x151ED9B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    guMtxIdentF(rdram, ctx);
        goto after_3;
    // 0x151ED9B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x151ED9B4: addiu       $s1, $s5, 0x68
    ctx->r17 = ADD32(ctx->r21, 0X68);
    // 0x151ED9B8: jal         0x150A7BC0
    // 0x151ED9BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    guMtxIdentF(rdram, ctx);
        goto after_4;
    // 0x151ED9BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x151ED9C0: lw          $t2, 0x24($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X24);
    // 0x151ED9C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151ED9C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151ED9CC: sw          $s0, 0x3E0($t2)
    MEM_W(0X3E0, ctx->r10) = ctx->r16;
    // 0x151ED9D0: lw          $t3, 0x24($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X24);
    // 0x151ED9D4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x151ED9D8: sw          $s1, 0x3E4($t3)
    MEM_W(0X3E4, ctx->r11) = ctx->r17;
    // 0x151ED9DC: lw          $a0, 0x24($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X24);
    // 0x151ED9E0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151ED9E4: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x151ED9E8: jal         0x1503F5B8
    // 0x151ED9EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_1503F5B8(rdram, ctx);
        goto after_5;
    // 0x151ED9EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x151ED9F0: lbu         $v0, 0x14($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X14);
    // 0x151ED9F4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x151ED9F8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x151ED9FC: blez        $v0, L_151EDA9C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151EDA00: or          $s4, $s5, $zero
        ctx->r20 = ctx->r21 | 0;
            goto L_151EDA9C;
    }
    // 0x151EDA00: or          $s4, $s5, $zero
    ctx->r20 = ctx->r21 | 0;
    // 0x151EDA04: addiu       $s1, $zero, 0xDF
    ctx->r17 = ADD32(0, 0XDF);
L_151EDA08:
    // 0x151EDA08: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x151EDA0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151EDA10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151EDA14: addu        $t5, $t4, $s3
    ctx->r13 = ADD32(ctx->r12, ctx->r19);
    // 0x151EDA18: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x151EDA1C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
L_151EDA20:
    // 0x151EDA20: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x151EDA24: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EDA28: srl         $t6, $a0, 24
    ctx->r14 = S32(U32(ctx->r4) >> 24);
    // 0x151EDA2C: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x151EDA30: bnel        $t7, $s1, L_151EDA20
    if (ctx->r15 != ctx->r17) {
        // 0x151EDA34: lw          $a0, 0x0($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X0);
            goto L_151EDA20;
    }
    goto skip_0;
    // 0x151EDA34: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x151EDA38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151EDA3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EDA40: jal         0x10003C40
    // 0x151EDA44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    allocate_memory(rdram, ctx);
        goto after_6;
    // 0x151EDA44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x151EDA48: bne         $v0, $zero, L_151EDA80
    if (ctx->r2 != 0) {
        // 0x151EDA4C: sw          $v0, 0x4($s4)
        MEM_W(0X4, ctx->r20) = ctx->r2;
            goto L_151EDA80;
    }
    // 0x151EDA4C: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    // 0x151EDA50: blez        $s2, L_151EDA70
    if (SIGNED(ctx->r18) <= 0) {
        // 0x151EDA54: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_151EDA70;
    }
    // 0x151EDA54: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151EDA58: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
L_151EDA5C:
    // 0x151EDA5C: jal         0x10004074
    // 0x151EDA60: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    func_10004074(rdram, ctx);
        goto after_7;
    // 0x151EDA60: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_7:
    // 0x151EDA64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151EDA68: bne         $s0, $s2, L_151EDA5C
    if (ctx->r16 != ctx->r18) {
        // 0x151EDA6C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_151EDA5C;
    }
    // 0x151EDA6C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_151EDA70:
    // 0x151EDA70: jal         0x10004074
    // 0x151EDA74: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_10004074(rdram, ctx);
        goto after_8;
    // 0x151EDA74: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_8:
    // 0x151EDA78: b           L_151EDB34
    // 0x151EDA7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151EDB34;
    // 0x151EDA7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151EDA80:
    // 0x151EDA80: lbu         $v0, 0x14($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X14);
    // 0x151EDA84: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x151EDA88: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x151EDA8C: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x151EDA90: bne         $at, $zero, L_151EDA08
    if (ctx->r1 != 0) {
        // 0x151EDA94: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_151EDA08;
    }
    // 0x151EDA94: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x151EDA98: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_151EDA9C:
    // 0x151EDA9C: blez        $v0, L_151EDB30
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151EDAA0: addiu       $s1, $zero, 0xDF
        ctx->r17 = ADD32(0, 0XDF);
            goto L_151EDB30;
    }
    // 0x151EDAA0: addiu       $s1, $zero, 0xDF
    ctx->r17 = ADD32(0, 0XDF);
    // 0x151EDAA4: lui         $t0, 0x50
    ctx->r8 = S32(0X50 << 16);
    // 0x151EDAA8: lui         $a3, 0xFFFE
    ctx->r7 = S32(0XFFFE << 16);
    // 0x151EDAAC: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x151EDAB0: ori         $t0, $t0, 0x41C8
    ctx->r8 = ctx->r8 | 0X41C8;
    // 0x151EDAB4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x151EDAB8: or          $s4, $s5, $zero
    ctx->r20 = ctx->r21 | 0;
    // 0x151EDABC: addiu       $t1, $zero, 0xFC
    ctx->r9 = ADD32(0, 0XFC);
    // 0x151EDAC0: addiu       $a2, $zero, 0xEF
    ctx->r6 = ADD32(0, 0XEF);
L_151EDAC4:
    // 0x151EDAC4: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x151EDAC8: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x151EDACC: addu        $t9, $t8, $s3
    ctx->r25 = ADD32(ctx->r24, ctx->r19);
    // 0x151EDAD0: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
L_151EDAD4:
    // 0x151EDAD4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x151EDAD8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x151EDADC: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x151EDAE0: lw          $t3, -0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, -0X4);
    // 0x151EDAE4: srl         $a0, $t2, 24
    ctx->r4 = S32(U32(ctx->r10) >> 24);
    // 0x151EDAE8: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x151EDAEC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x151EDAF0: bne         $t4, $a2, L_151EDB04
    if (ctx->r12 != ctx->r6) {
        // 0x151EDAF4: sw          $t3, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r11;
            goto L_151EDB04;
    }
    // 0x151EDAF4: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x151EDAF8: and         $t5, $t2, $a3
    ctx->r13 = ctx->r10 & ctx->r7;
    // 0x151EDAFC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x151EDB00: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
L_151EDB04:
    // 0x151EDB04: bne         $a0, $t1, L_151EDB10
    if (ctx->r4 != ctx->r9) {
        // 0x151EDB08: nop
    
            goto L_151EDB10;
    }
    // 0x151EDB08: nop

    // 0x151EDB0C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_151EDB10:
    // 0x151EDB10: bne         $a0, $s1, L_151EDAD4
    if (ctx->r4 != ctx->r17) {
        // 0x151EDB14: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_151EDAD4;
    }
    // 0x151EDB14: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x151EDB18: lbu         $t6, 0x14($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X14);
    // 0x151EDB1C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x151EDB20: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x151EDB24: slt         $at, $s2, $t6
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151EDB28: bne         $at, $zero, L_151EDAC4
    if (ctx->r1 != 0) {
        // 0x151EDB2C: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_151EDAC4;
    }
    // 0x151EDB2C: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_151EDB30:
    // 0x151EDB30: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_151EDB34:
    // 0x151EDB34: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151EDB38: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x151EDB3C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x151EDB40: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x151EDB44: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x151EDB48: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x151EDB4C: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x151EDB50: jr          $ra
    // 0x151EDB54: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x151EDB54: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_150E90DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E90DC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150E90E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150E90E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E90E8: lwc1        $f4, 0x13B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X13B0);
    // 0x150E90EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E90F0: lwc1        $f6, 0x13B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X13B4);
    // 0x150E90F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150E90F8: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x150E90FC: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x150E9100: jal         0x150ADA20
    // 0x150E9104: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150E9104: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x150E9108: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x150E910C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E9110: mfhi        $a0
    ctx->r4 = hi;
    // 0x150E9114: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    // 0x150E9118: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x150E911C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150E9120: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x150E9124: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150E9128: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150E912C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x150E9130: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x150E9134: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x150E9138: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150E913C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150E9140: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150E9144: addiu       $a2, $zero, 0x36
    ctx->r6 = ADD32(0, 0X36);
    // 0x150E9148: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150E914C: jal         0x15149130
    // 0x150E9150: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_1;
    // 0x150E9150: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x150E9154: beq         $v0, $zero, L_150E9168
    if (ctx->r2 == 0) {
        // 0x150E9158: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150E9168;
    }
    // 0x150E9158: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150E915C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x150E9160: jal         0x10022EC0
    // 0x150E9164: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x150E9164: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_150E9168:
    // 0x150E9168: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150E916C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150E9170: jr          $ra
    // 0x150E9174: nop

    return;
    return;
    // 0x150E9174: nop

;}
RECOMP_FUNC void func_1514C258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514C258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514C25C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514C260: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1514C264: jal         0x1514BF9C
    // 0x1514C268: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514BF9C(rdram, ctx);
        goto after_0;
    // 0x1514C268: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x1514C26C: jal         0x1514BE20
    // 0x1514C270: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514BE20(rdram, ctx);
        goto after_1;
    // 0x1514C270: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1514C274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1514C278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514C27C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514C280: jr          $ra
    // 0x1514C284: nop

    return;
    return;
    // 0x1514C284: nop

;}
RECOMP_FUNC void func_151E966C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E966C: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x151E9670: sll         $t6, $a3, 24
    ctx->r14 = S32(ctx->r7 << 24);
    // 0x151E9674: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x151E9678: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x151E967C: sw          $a3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r7;
    // 0x151E9680: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x151E9684: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x151E9688: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x151E968C: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x151E9690: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x151E9694: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x151E9698: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x151E969C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x151E96A0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x151E96A4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x151E96A8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x151E96AC: sw          $a1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r5;
    // 0x151E96B0: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x151E96B4: beq         $a3, $zero, L_151E97E4
    if (ctx->r7 == 0) {
        // 0x151E96B8: sb          $zero, 0xFF($sp)
        MEM_B(0XFF, ctx->r29) = 0;
            goto L_151E97E4;
    }
    // 0x151E96B8: sb          $zero, 0xFF($sp)
    MEM_B(0XFF, ctx->r29) = 0;
    // 0x151E96BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x151E96C0: addiu       $a0, $a0, 0xD14
    ctx->r4 = ADD32(ctx->r4, 0XD14);
    // 0x151E96C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151E96C8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151E96CC: jal         0x1510D0EC
    // 0x151E96D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x151E96D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x151E96D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151E96D8: bne         $v0, $at, L_151E96E8
    if (ctx->r2 != ctx->r1) {
        // 0x151E96DC: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_151E96E8;
    }
    // 0x151E96DC: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x151E96E0: b           L_151E9CE8
    // 0x151E96E4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_151E9CE8;
    // 0x151E96E4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_151E96E8:
    // 0x151E96E8: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x151E96EC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x151E96F0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E96F4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151E96F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151E96FC: lui         $t9, 0xFC12
    ctx->r25 = S32(0XFC12 << 16);
    // 0x151E9700: ori         $t9, $t9, 0xFE25
    ctx->r25 = ctx->r25 | 0XFE25;
    // 0x151E9704: addiu       $t2, $zero, -0xC07
    ctx->r10 = ADD32(0, -0XC07);
    // 0x151E9708: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x151E970C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x151E9710: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9714: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151E9718: lui         $t3, 0xFD18
    ctx->r11 = S32(0XFD18 << 16);
    // 0x151E971C: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x151E9720: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x151E9724: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9728: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x151E972C: lui         $t5, 0x709
    ctx->r13 = S32(0X709 << 16);
    // 0x151E9730: ori         $t5, $t5, 0x4250
    ctx->r13 = ctx->r13 | 0X4250;
    // 0x151E9734: lui         $t4, 0xF518
    ctx->r12 = S32(0XF518 << 16);
    // 0x151E9738: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x151E973C: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    // 0x151E9740: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9744: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x151E9748: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x151E974C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x151E9750: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x151E9754: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9758: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x151E975C: lui         $t8, 0x73F
    ctx->r24 = S32(0X73F << 16);
    // 0x151E9760: ori         $t8, $t8, 0xF000
    ctx->r24 = ctx->r24 | 0XF000;
    // 0x151E9764: lui         $t7, 0xF300
    ctx->r15 = S32(0XF300 << 16);
    // 0x151E9768: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x151E976C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151E9770: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9774: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x151E9778: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x151E977C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x151E9780: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151E9784: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9788: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151E978C: lui         $t2, 0xF518
    ctx->r10 = S32(0XF518 << 16);
    // 0x151E9790: lui         $t3, 0x9
    ctx->r11 = S32(0X9 << 16);
    // 0x151E9794: ori         $t3, $t3, 0x4250
    ctx->r11 = ctx->r11 | 0X4250;
    // 0x151E9798: ori         $t2, $t2, 0x1000
    ctx->r10 = ctx->r10 | 0X1000;
    // 0x151E979C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x151E97A0: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x151E97A4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E97A8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151E97AC: lui         $t5, 0x7
    ctx->r13 = S32(0X7 << 16);
    // 0x151E97B0: ori         $t5, $t5, 0xC07C
    ctx->r13 = ctx->r13 | 0XC07C;
    // 0x151E97B4: lui         $t4, 0xF200
    ctx->r12 = S32(0XF200 << 16);
    // 0x151E97B8: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x151E97BC: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x151E97C0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E97C4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x151E97C8: lui         $t6, 0xEF00
    ctx->r14 = S32(0XEF00 << 16);
    // 0x151E97CC: lui         $t7, 0x50
    ctx->r15 = S32(0X50 << 16);
    // 0x151E97D0: ori         $t7, $t7, 0x4244
    ctx->r15 = ctx->r15 | 0X4244;
    // 0x151E97D4: ori         $t6, $t6, 0x2C3F
    ctx->r14 = ctx->r14 | 0X2C3F;
    // 0x151E97D8: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x151E97DC: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x151E97E0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_151E97E4:
    // 0x151E97E4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E97E8: lb          $v1, 0xBB0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XBB0);
    // 0x151E97EC: addiu       $t8, $zero, 0x124
    ctx->r24 = ADD32(0, 0X124);
    // 0x151E97F0: sw          $t8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r24;
    // 0x151E97F4: blez        $v1, L_151E982C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151E97F8: addiu       $t9, $zero, 0x124
        ctx->r25 = ADD32(0, 0X124);
            goto L_151E982C;
    }
    // 0x151E97F8: addiu       $t9, $zero, 0x124
    ctx->r25 = ADD32(0, 0X124);
    // 0x151E97FC: div         $zero, $t9, $v1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r3)));
    // 0x151E9800: mflo        $t2
    ctx->r10 = lo;
    // 0x151E9804: sw          $t2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r10;
    // 0x151E9808: bne         $v1, $zero, L_151E9814
    if (ctx->r3 != 0) {
        // 0x151E980C: nop
    
            goto L_151E9814;
    }
    // 0x151E980C: nop

    // 0x151E9810: break       7
    do_break(354326544);
L_151E9814:
    // 0x151E9814: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151E9818: bne         $v1, $at, L_151E982C
    if (ctx->r3 != ctx->r1) {
        // 0x151E981C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151E982C;
    }
    // 0x151E981C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151E9820: bne         $t9, $at, L_151E982C
    if (ctx->r25 != ctx->r1) {
        // 0x151E9824: nop
    
            goto L_151E982C;
    }
    // 0x151E9824: nop

    // 0x151E9828: break       6
    do_break(354326568);
L_151E982C:
    // 0x151E982C: lbu         $t3, 0x113($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X113);
    // 0x151E9830: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x151E9834: addiu       $s1, $s1, -0x274
    ctx->r17 = ADD32(ctx->r17, -0X274);
    // 0x151E9838: beql        $t3, $zero, L_151E98B4
    if (ctx->r11 == 0) {
        // 0x151E983C: lw          $t8, 0xE0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XE0);
            goto L_151E98B4;
    }
    goto skip_0;
    // 0x151E983C: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
    skip_0:
    // 0x151E9840: lb          $t5, 0x0($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X0);
    // 0x151E9844: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x151E9848: sb          $t4, 0xFF($sp)
    MEM_B(0XFF, ctx->r29) = ctx->r12;
    // 0x151E984C: blez        $t5, L_151E98B0
    if (SIGNED(ctx->r13) <= 0) {
        // 0x151E9850: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_151E98B0;
    }
    // 0x151E9850: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x151E9854: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x151E9858: addiu       $s0, $s0, 0xC00
    ctx->r16 = ADD32(ctx->r16, 0XC00);
    // 0x151E985C: sll         $a0, $s7, 16
    ctx->r4 = S32(ctx->r23 << 16);
L_151E9860:
    // 0x151E9860: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x151E9864: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151E9868: jal         0x150859AC
    // 0x151E986C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_150859AC(rdram, ctx);
        goto after_1;
    // 0x151E986C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x151E9870: beq         $v0, $zero, L_151E9894
    if (ctx->r2 == 0) {
        // 0x151E9874: addu        $t8, $s0, $s7
        ctx->r24 = ADD32(ctx->r16, ctx->r23);
            goto L_151E9894;
    }
    // 0x151E9874: addu        $t8, $s0, $s7
    ctx->r24 = ADD32(ctx->r16, ctx->r23);
    // 0x151E9878: lb          $t9, 0x0($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X0);
    // 0x151E987C: lb          $t7, 0xFF($sp)
    ctx->r15 = MEM_B(ctx->r29, 0XFF);
    // 0x151E9880: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151E9884: sllv        $t3, $t2, $t9
    ctx->r11 = S32(ctx->r10 << (ctx->r25 & 31));
    // 0x151E9888: nor         $t4, $t3, $zero
    ctx->r12 = ~(ctx->r11 | 0);
    // 0x151E988C: and         $t5, $t7, $t4
    ctx->r13 = ctx->r15 & ctx->r12;
    // 0x151E9890: sb          $t5, 0xFF($sp)
    MEM_B(0XFF, ctx->r29) = ctx->r13;
L_151E9894:
    // 0x151E9894: lb          $t6, 0x0($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X0);
    // 0x151E9898: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x151E989C: slt         $at, $s7, $t6
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151E98A0: bnel        $at, $zero, L_151E9860
    if (ctx->r1 != 0) {
        // 0x151E98A4: sll         $a0, $s7, 16
        ctx->r4 = S32(ctx->r23 << 16);
            goto L_151E9860;
    }
    goto skip_1;
    // 0x151E98A4: sll         $a0, $s7, 16
    ctx->r4 = S32(ctx->r23 << 16);
    skip_1:
    // 0x151E98A8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E98AC: lb          $v1, 0xBB0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XBB0);
L_151E98B0:
    // 0x151E98B0: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
L_151E98B4:
    // 0x151E98B4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x151E98B8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151E98BC: sra         $t2, $t8, 1
    ctx->r10 = S32(SIGNED(ctx->r24) >> 1);
    // 0x151E98C0: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    // 0x151E98C4: blez        $v1, L_151E9A68
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151E98C8: sw          $t2, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->r10;
            goto L_151E9A68;
    }
    // 0x151E98C8: sw          $t2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r10;
    // 0x151E98CC: addiu       $t9, $t9, 0xAA0
    ctx->r25 = ADD32(ctx->r25, 0XAA0);
    // 0x151E98D0: lui         $s6, 0x4040
    ctx->r22 = S32(0X4040 << 16);
    // 0x151E98D4: lui         $s5, 0x8008
    ctx->r21 = S32(0X8008 << 16);
    // 0x151E98D8: addiu       $s5, $s5, 0x7268
    ctx->r21 = ADD32(ctx->r21, 0X7268);
    // 0x151E98DC: ori         $s6, $s6, 0x4040
    ctx->r22 = ctx->r22 | 0X4040;
    // 0x151E98E0: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x151E98E4: lui         $fp, 0xFB00
    ctx->r30 = S32(0XFB00 << 16);
L_151E98E8:
    // 0x151E98E8: lbu         $t3, 0x113($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X113);
    // 0x151E98EC: sll         $a0, $s7, 16
    ctx->r4 = S32(ctx->r23 << 16);
    // 0x151E98F0: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x151E98F4: beq         $t3, $zero, L_151E9918
    if (ctx->r11 == 0) {
        // 0x151E98F8: lw          $t5, 0x60($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X60);
            goto L_151E9918;
    }
    // 0x151E98F8: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x151E98FC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x151E9900: jal         0x150859AC
    // 0x151E9904: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_150859AC(rdram, ctx);
        goto after_2;
    // 0x151E9904: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x151E9908: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x151E990C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x151E9910: b           L_151E991C
    // 0x151E9914: sh          $v0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r2;
        goto L_151E991C;
    // 0x151E9914: sh          $v0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r2;
L_151E9918:
    // 0x151E9918: lh          $s4, 0x0($t5)
    ctx->r20 = MEM_H(ctx->r13, 0X0);
L_151E991C:
    // 0x151E991C: lb          $t6, 0xFF($sp)
    ctx->r14 = MEM_B(ctx->r29, 0XFF);
    // 0x151E9920: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151E9924: sllv        $t2, $t8, $s7
    ctx->r10 = S32(ctx->r24 << (ctx->r23 & 31));
    // 0x151E9928: and         $t9, $t6, $t2
    ctx->r25 = ctx->r14 & ctx->r10;
    // 0x151E992C: bne         $t9, $zero, L_151E9A38
    if (ctx->r25 != 0) {
        // 0x151E9930: lw          $t3, 0x108($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X108);
            goto L_151E9A38;
    }
    // 0x151E9930: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x151E9934: bne         $s7, $t3, L_151E9940
    if (ctx->r23 != ctx->r11) {
        // 0x151E9938: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_151E9940;
    }
    // 0x151E9938: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151E993C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_151E9940:
    // 0x151E9940: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x151E9944: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x151E9948: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x151E994C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151E9950: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9954: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x151E9958: addiu       $t5, $t5, -0x4570
    ctx->r13 = ADD32(ctx->r13, -0X4570);
    // 0x151E995C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151E9960: sll         $t4, $s7, 2
    ctx->r12 = S32(ctx->r23 << 2);
    // 0x151E9964: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x151E9968: sw          $fp, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r30;
    // 0x151E996C: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x151E9970: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x151E9974: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x151E9978: sll         $t2, $t6, 8
    ctx->r10 = S32(ctx->r14 << 8);
    // 0x151E997C: sll         $t7, $t3, 24
    ctx->r15 = S32(ctx->r11 << 24);
    // 0x151E9980: or          $t4, $t2, $t7
    ctx->r12 = ctx->r10 | ctx->r15;
    // 0x151E9984: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x151E9988: or          $t9, $t4, $t6
    ctx->r25 = ctx->r12 | ctx->r14;
    // 0x151E998C: ori         $t3, $t9, 0xFF
    ctx->r11 = ctx->r25 | 0XFF;
    // 0x151E9990: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x151E9994: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9998: lb          $a1, 0x0($s5)
    ctx->r5 = MEM_B(ctx->r21, 0X0);
    // 0x151E999C: lw          $t2, 0xE4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE4);
    // 0x151E99A0: lw          $s3, 0x104($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X104);
    // 0x151E99A4: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x151E99A8: blez        $a1, L_151E9A38
    if (SIGNED(ctx->r5) <= 0) {
        // 0x151E99AC: subu        $s0, $t2, $t7
        ctx->r16 = SUB32(ctx->r10, ctx->r15);
            goto L_151E9A38;
    }
    // 0x151E99AC: subu        $s0, $t2, $t7
    ctx->r16 = SUB32(ctx->r10, ctx->r15);
    // 0x151E99B0: addiu       $s3, $s3, 0x1C
    ctx->r19 = ADD32(ctx->r19, 0X1C);
L_151E99B4:
    // 0x151E99B4: bne         $s1, $s4, L_151E99E0
    if (ctx->r17 != ctx->r20) {
        // 0x151E99B8: sll         $a1, $s0, 2
        ctx->r5 = S32(ctx->r16 << 2);
            goto L_151E99E0;
    }
    // 0x151E99B8: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
    // 0x151E99BC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x151E99C0: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x151E99C4: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x151E99C8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151E99CC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E99D0: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x151E99D4: sw          $fp, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r30;
    // 0x151E99D8: sw          $s6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r22;
    // 0x151E99DC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_151E99E0:
    // 0x151E99E0: addiu       $a3, $s0, 0x7
    ctx->r7 = ADD32(ctx->r16, 0X7);
    // 0x151E99E4: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x151E99E8: addiu       $t4, $zero, 0x1C0
    ctx->r12 = ADD32(0, 0X1C0);
    // 0x151E99EC: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x151E99F0: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x151E99F4: addiu       $t3, $zero, 0x400
    ctx->r11 = ADD32(0, 0X400);
    // 0x151E99F8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x151E99FC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x151E9A00: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x151E9A04: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151E9A08: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x151E9A0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151E9A10: lw          $a2, 0x104($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X104);
    // 0x151E9A14: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x151E9A18: jal         0x151E86E4
    // 0x151E9A1C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_151E86E4(rdram, ctx);
        goto after_3;
    // 0x151E9A1C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x151E9A20: lb          $t2, 0x0($s5)
    ctx->r10 = MEM_B(ctx->r21, 0X0);
    // 0x151E9A24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151E9A28: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x151E9A2C: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x151E9A30: bne         $at, $zero, L_151E99B4
    if (ctx->r1 != 0) {
        // 0x151E9A34: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_151E99B4;
    }
    // 0x151E9A34: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_151E9A38:
    // 0x151E9A38: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151E9A3C: lb          $t9, 0xBB0($t9)
    ctx->r25 = MEM_B(ctx->r25, 0XBB0);
    // 0x151E9A40: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x151E9A44: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x151E9A48: lw          $t5, 0xE0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE0);
    // 0x151E9A4C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x151E9A50: slt         $at, $s7, $t9
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151E9A54: addiu       $t6, $t4, 0x2
    ctx->r14 = ADD32(ctx->r12, 0X2);
    // 0x151E9A58: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x151E9A5C: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x151E9A60: bne         $at, $zero, L_151E98E8
    if (ctx->r1 != 0) {
        // 0x151E9A64: sw          $t8, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->r24;
            goto L_151E98E8;
    }
    // 0x151E9A64: sw          $t8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r24;
L_151E9A68:
    // 0x151E9A68: lb          $t3, 0xFF($sp)
    ctx->r11 = MEM_B(ctx->r29, 0XFF);
    // 0x151E9A6C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x151E9A70: lui         $fp, 0xFB00
    ctx->r30 = S32(0XFB00 << 16);
    // 0x151E9A74: beq         $t3, $zero, L_151E9CD0
    if (ctx->r11 == 0) {
        // 0x151E9A78: addiu       $a0, $a0, 0xD16
        ctx->r4 = ADD32(ctx->r4, 0XD16);
            goto L_151E9CD0;
    }
    // 0x151E9A78: addiu       $a0, $a0, 0xD16
    ctx->r4 = ADD32(ctx->r4, 0XD16);
    // 0x151E9A7C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x151E9A80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151E9A84: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151E9A88: jal         0x1510D0EC
    // 0x151E9A8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_4;
    // 0x151E9A8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x151E9A90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151E9A94: bne         $v0, $at, L_151E9AA4
    if (ctx->r2 != ctx->r1) {
        // 0x151E9A98: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_151E9AA4;
    }
    // 0x151E9A98: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x151E9A9C: b           L_151E9CE8
    // 0x151E9AA0: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_151E9CE8;
    // 0x151E9AA0: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_151E9AA4:
    // 0x151E9AA4: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x151E9AA8: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x151E9AAC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9AB0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151E9AB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151E9AB8: lui         $t7, 0xFD50
    ctx->r15 = S32(0XFD50 << 16);
    // 0x151E9ABC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x151E9AC0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x151E9AC4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9AC8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151E9ACC: lui         $t8, 0x709
    ctx->r24 = S32(0X709 << 16);
    // 0x151E9AD0: ori         $t8, $t8, 0x8260
    ctx->r24 = ctx->r24 | 0X8260;
    // 0x151E9AD4: lui         $t5, 0xF550
    ctx->r13 = S32(0XF550 << 16);
    // 0x151E9AD8: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x151E9ADC: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x151E9AE0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9AE4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x151E9AE8: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x151E9AEC: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x151E9AF0: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x151E9AF4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9AF8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x151E9AFC: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x151E9B00: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x151E9B04: lui         $t9, 0x73F
    ctx->r25 = S32(0X73F << 16);
    // 0x151E9B08: ori         $t9, $t9, 0xF000
    ctx->r25 = ctx->r25 | 0XF000;
    // 0x151E9B0C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x151E9B10: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x151E9B14: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9B18: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x151E9B1C: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x151E9B20: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x151E9B24: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x151E9B28: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151E9B2C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9B30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151E9B34: lui         $t2, 0xF540
    ctx->r10 = S32(0XF540 << 16);
    // 0x151E9B38: lui         $t7, 0x9
    ctx->r15 = S32(0X9 << 16);
    // 0x151E9B3C: ori         $t7, $t7, 0x8260
    ctx->r15 = ctx->r15 | 0X8260;
    // 0x151E9B40: ori         $t2, $t2, 0x800
    ctx->r10 = ctx->r10 | 0X800;
    // 0x151E9B44: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x151E9B48: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x151E9B4C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9B50: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151E9B54: lui         $t8, 0xF
    ctx->r24 = S32(0XF << 16);
    // 0x151E9B58: ori         $t8, $t8, 0xC0FC
    ctx->r24 = ctx->r24 | 0XC0FC;
    // 0x151E9B5C: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x151E9B60: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x151E9B64: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x151E9B68: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9B6C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x151E9B70: lui         $t4, 0xFD10
    ctx->r12 = S32(0XFD10 << 16);
    // 0x151E9B74: addiu       $t6, $v0, 0x800
    ctx->r14 = ADD32(ctx->r2, 0X800);
    // 0x151E9B78: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x151E9B7C: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x151E9B80: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9B84: or          $t0, $s2, $zero
    ctx->r8 = ctx->r18 | 0;
    // 0x151E9B88: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x151E9B8C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x151E9B90: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x151E9B94: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9B98: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x151E9B9C: lui         $t2, 0x603
    ctx->r10 = S32(0X603 << 16);
    // 0x151E9BA0: ori         $t2, $t2, 0xC000
    ctx->r10 = ctx->r10 | 0XC000;
    // 0x151E9BA4: lui         $t3, 0xF000
    ctx->r11 = S32(0XF000 << 16);
    // 0x151E9BA8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x151E9BAC: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x151E9BB0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9BB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151E9BB8: lui         $t7, 0xEF00
    ctx->r15 = S32(0XEF00 << 16);
    // 0x151E9BBC: lui         $t5, 0x50
    ctx->r13 = S32(0X50 << 16);
    // 0x151E9BC0: ori         $t5, $t5, 0x4244
    ctx->r13 = ctx->r13 | 0X4244;
    // 0x151E9BC4: ori         $t7, $t7, 0xAC3F
    ctx->r15 = ctx->r15 | 0XAC3F;
    // 0x151E9BC8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x151E9BCC: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x151E9BD0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9BD4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E9BD8: lb          $v1, 0xBB0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XBB0);
    // 0x151E9BDC: blezl       $v1, L_151E9CD4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151E9BE0: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_151E9CD4;
    }
    goto skip_2;
    // 0x151E9BE0: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    skip_2:
L_151E9BE4:
    // 0x151E9BE4: lb          $t8, 0xFF($sp)
    ctx->r24 = MEM_B(ctx->r29, 0XFF);
    // 0x151E9BE8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151E9BEC: sllv        $t6, $t4, $s7
    ctx->r14 = S32(ctx->r12 << (ctx->r23 & 31));
    // 0x151E9BF0: and         $t9, $t8, $t6
    ctx->r25 = ctx->r24 & ctx->r14;
    // 0x151E9BF4: beq         $t9, $zero, L_151E9CBC
    if (ctx->r25 == 0) {
        // 0x151E9BF8: lui         $t3, 0xE700
        ctx->r11 = S32(0XE700 << 16);
            goto L_151E9CBC;
    }
    // 0x151E9BF8: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x151E9BFC: sw          $t1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r9;
    // 0x151E9C00: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x151E9C04: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x151E9C08: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151E9C0C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9C10: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151E9C14: addiu       $t7, $t7, -0x4570
    ctx->r15 = ADD32(ctx->r15, -0X4570);
    // 0x151E9C18: or          $t0, $s2, $zero
    ctx->r8 = ctx->r18 | 0;
    // 0x151E9C1C: sll         $t2, $s7, 2
    ctx->r10 = S32(ctx->r23 << 2);
    // 0x151E9C20: addu        $v0, $t2, $t7
    ctx->r2 = ADD32(ctx->r10, ctx->r15);
    // 0x151E9C24: sw          $fp, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r30;
    // 0x151E9C28: lbu         $t4, 0x2($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X2);
    // 0x151E9C2C: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x151E9C30: lbu         $t5, 0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1);
    // 0x151E9C34: sll         $t8, $t4, 8
    ctx->r24 = S32(ctx->r12 << 8);
    // 0x151E9C38: sll         $t3, $t9, 24
    ctx->r11 = S32(ctx->r25 << 24);
    // 0x151E9C3C: or          $t2, $t8, $t3
    ctx->r10 = ctx->r24 | ctx->r11;
    // 0x151E9C40: sll         $t4, $t5, 16
    ctx->r12 = S32(ctx->r13 << 16);
    // 0x151E9C44: or          $t6, $t2, $t4
    ctx->r14 = ctx->r10 | ctx->r12;
    // 0x151E9C48: ori         $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 | 0XFF;
    // 0x151E9C4C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x151E9C50: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9C54: lw          $t8, 0xE4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE4);
    // 0x151E9C58: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x151E9C5C: addiu       $t4, $zero, 0x600
    ctx->r12 = ADD32(0, 0X600);
    // 0x151E9C60: addiu       $a1, $t8, -0x8
    ctx->r5 = ADD32(ctx->r24, -0X8);
    // 0x151E9C64: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x151E9C68: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x151E9C6C: addiu       $a3, $t8, 0x8
    ctx->r7 = ADD32(ctx->r24, 0X8);
    // 0x151E9C70: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x151E9C74: addiu       $t3, $zero, 0x400
    ctx->r11 = ADD32(0, 0X400);
    // 0x151E9C78: addiu       $t6, $zero, 0x280
    ctx->r14 = ADD32(0, 0X280);
    // 0x151E9C7C: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x151E9C80: addiu       $t2, $t7, 0x28
    ctx->r10 = ADD32(ctx->r15, 0X28);
    // 0x151E9C84: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x151E9C88: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x151E9C8C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x151E9C90: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x151E9C94: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x151E9C98: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151E9C9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151E9CA0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151E9CA4: jal         0x151E86E4
    // 0x151E9CA8: addiu       $a2, $t7, -0x18
    ctx->r6 = ADD32(ctx->r15, -0X18);
    func_151E86E4(rdram, ctx);
        goto after_5;
    // 0x151E9CA8: addiu       $a2, $t7, -0x18
    ctx->r6 = ADD32(ctx->r15, -0X18);
    after_5:
    // 0x151E9CAC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E9CB0: lb          $v1, 0xBB0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XBB0);
    // 0x151E9CB4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x151E9CB8: lw          $t1, 0xE4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE4);
L_151E9CBC:
    // 0x151E9CBC: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
    // 0x151E9CC0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x151E9CC4: slt         $at, $s7, $v1
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151E9CC8: bne         $at, $zero, L_151E9BE4
    if (ctx->r1 != 0) {
        // 0x151E9CCC: addu        $t1, $t1, $t8
        ctx->r9 = ADD32(ctx->r9, ctx->r24);
            goto L_151E9BE4;
    }
    // 0x151E9CCC: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
L_151E9CD0:
    // 0x151E9CD0: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
L_151E9CD4:
    // 0x151E9CD4: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x151E9CD8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x151E9CDC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151E9CE0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151E9CE4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_151E9CE8:
    // 0x151E9CE8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x151E9CEC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x151E9CF0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x151E9CF4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x151E9CF8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x151E9CFC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x151E9D00: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x151E9D04: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x151E9D08: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x151E9D0C: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x151E9D10: jr          $ra
    // 0x151E9D14: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    return;
    // 0x151E9D14: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_15040A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040A34: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040A38: jr          $ra
    // 0x15040A3C: nop

    return;
    return;
    // 0x15040A3C: nop

;}
RECOMP_FUNC void func_151DCDE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DCDE0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x151DCDE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DCDE8: lwc1        $f0, -0x4AA8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4AA8);
    // 0x151DCDEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151DCDF0: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x151DCDF4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x151DCDF8: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x151DCDFC: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x151DCE00: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x151DCE04: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x151DCE08: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x151DCE0C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x151DCE10: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x151DCE14: addiu       $t8, $sp, 0x34
    ctx->r24 = ADD32(ctx->r29, 0X34);
    // 0x151DCE18: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151DCE1C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151DCE20: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x151DCE24: addiu       $t4, $zero, -0x40
    ctx->r12 = ADD32(0, -0X40);
    // 0x151DCE28: addiu       $t5, $zero, 0x31
    ctx->r13 = ADD32(0, 0X31);
    // 0x151DCE2C: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x151DCE30: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x151DCE34: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x151DCE38: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x151DCE3C: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x151DCE40: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x151DCE44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151DCE48: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x151DCE4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151DCE50: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DCE54: lwc1        $f8, -0x4AA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4AA4);
    // 0x151DCE58: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DCE5C: lwc1        $f10, -0x4AA0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4AA0);
    // 0x151DCE60: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DCE64: lwc1        $f16, -0x4A9C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4A9C);
    // 0x151DCE68: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x151DCE6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151DCE70: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x151DCE74: lbu         $t1, 0x6F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X6F);
    // 0x151DCE78: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x151DCE7C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x151DCE80: sh          $zero, 0x40($sp)
    MEM_H(0X40, ctx->r29) = 0;
    // 0x151DCE84: sh          $t3, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r11;
    // 0x151DCE88: sh          $t4, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r12;
    // 0x151DCE8C: sh          $t5, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r13;
    // 0x151DCE90: sh          $t6, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r14;
    // 0x151DCE94: sh          $t7, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r15;
    // 0x151DCE98: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x151DCE9C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x151DCEA0: addiu       $a2, $a2, -0x4AAC
    ctx->r6 = ADD32(ctx->r6, -0X4AAC);
    // 0x151DCEA4: addiu       $a1, $a1, -0x4AB0
    ctx->r5 = ADD32(ctx->r5, -0X4AB0);
    // 0x151DCEA8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151DCEAC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x151DCEB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151DCEB4: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x151DCEB8: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x151DCEBC: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x151DCEC0: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x151DCEC4: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x151DCEC8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151DCECC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x151DCED0: jal         0x15152190
    // 0x151DCED4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_15152190(rdram, ctx);
        goto after_0;
    // 0x151DCED4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_0:
    // 0x151DCED8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151DCEDC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x151DCEE0: jr          $ra
    // 0x151DCEE4: nop

    return;
    return;
    // 0x151DCEE4: nop

;}
RECOMP_FUNC void n_alCSPNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10013320: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x10013324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10013328: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1001332C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x10013330: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x10013334: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x10013338: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x1001333C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x10013340: sw          $zero, 0x20($t8)
    MEM_W(0X20, ctx->r24) = 0;
    // 0x10013344: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x10013348: sw          $zero, 0x18($t9)
    MEM_W(0X18, ctx->r25) = 0;
    // 0x1001334C: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x10013350: lw          $t0, -0x45BC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X45BC);
    // 0x10013354: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x10013358: sw          $t0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r8;
    // 0x1001335C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x10013360: ori         $t2, $zero, 0xFFFF
    ctx->r10 = 0 | 0XFFFF;
    // 0x10013364: sh          $t2, 0x30($t3)
    MEM_H(0X30, ctx->r11) = ctx->r10;
    // 0x10013368: jal         0x10017B30
    // 0x1001336C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_10017B30(rdram, ctx);
        goto after_0;
    // 0x1001336C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_0:
    // 0x10013370: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x10013374: addiu       $t4, $zero, 0x1E8
    ctx->r12 = ADD32(0, 0X1E8);
    // 0x10013378: sw          $t4, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->r12;
    // 0x1001337C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x10013380: sw          $zero, 0x28($t6)
    MEM_W(0X28, ctx->r14) = 0;
    // 0x10013384: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x10013388: sw          $zero, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = 0;
    // 0x1001338C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x10013390: addiu       $t8, $zero, 0x7FFF
    ctx->r24 = ADD32(0, 0X7FFF);
    // 0x10013394: sh          $t8, 0x32($t9)
    MEM_H(0X32, ctx->r25) = ctx->r24;
    // 0x10013398: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x1001339C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x100133A0: lbu         $t1, 0x9($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X9);
    // 0x100133A4: sb          $t1, 0x35($t2)
    MEM_B(0X35, ctx->r10) = ctx->r9;
    // 0x100133A8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x100133AC: addiu       $t3, $zero, 0x3E80
    ctx->r11 = ADD32(0, 0X3E80);
    // 0x100133B0: sw          $t3, 0x5C($t4)
    MEM_W(0X5C, ctx->r12) = ctx->r11;
    // 0x100133B4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x100133B8: sw          $zero, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = 0;
    // 0x100133BC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x100133C0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x100133C4: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x100133C8: sw          $t7, 0x70($t8)
    MEM_W(0X70, ctx->r24) = ctx->r15;
    // 0x100133CC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x100133D0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x100133D4: lw          $t0, 0x14($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X14);
    // 0x100133D8: sw          $t0, 0x74($t1)
    MEM_W(0X74, ctx->r9) = ctx->r8;
    // 0x100133DC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x100133E0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x100133E4: lw          $t3, 0x18($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X18);
    // 0x100133E8: sw          $t3, 0x78($t4)
    MEM_W(0X78, ctx->r12) = ctx->r11;
    // 0x100133EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x100133F0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x100133F4: swc1        $f4, 0x7C($t5)
    MEM_W(0X7C, ctx->r13) = ctx->f4.u32l;
    // 0x100133F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x100133FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x10013400: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x10013404: swc1        $f6, 0x80($t6)
    MEM_W(0X80, ctx->r14) = ctx->f6.u32l;
    // 0x10013408: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x1001340C: sw          $zero, 0x84($t7)
    MEM_W(0X84, ctx->r15) = 0;
    // 0x10013410: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x10013414: sb          $zero, 0x8D($t8)
    MEM_B(0X8D, ctx->r24) = 0;
    // 0x10013418: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1001341C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x10013420: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x10013424: sb          $t0, 0x8C($t1)
    MEM_B(0X8C, ctx->r9) = ctx->r8;
    // 0x10013428: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x1001342C: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x10013430: sh          $t2, 0x38($t3)
    MEM_H(0X38, ctx->r11) = ctx->r10;
    // 0x10013434: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x10013438: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x1001343C: lbu         $t5, 0x8($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X8);
    // 0x10013440: sb          $t5, 0x34($t6)
    MEM_B(0X34, ctx->r14) = ctx->r13;
    // 0x10013444: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x10013448: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x1001344C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10013450: lbu         $a3, 0x8($t7)
    ctx->r7 = MEM_BU(ctx->r15, 0X8);
    // 0x10013454: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x10013458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001345C: jal         0x10012844
    // 0x10013460: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x10013460: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x10013464: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x10013468: sw          $v0, 0x60($t9)
    MEM_W(0X60, ctx->r25) = ctx->r2;
    // 0x1001346C: jal         0x1001B59C
    // 0x10013470: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    __n_initChanState(rdram, ctx);
        goto after_2;
    // 0x10013470: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x10013474: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x10013478: addiu       $t1, $zero, 0x44
    ctx->r9 = ADD32(0, 0X44);
    // 0x1001347C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10013480: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x10013484: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x10013488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001348C: jal         0x10012844
    // 0x10013490: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x10013490: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x10013494: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x10013498: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1001349C: sw          $zero, 0x6C($t2)
    MEM_W(0X6C, ctx->r10) = 0;
    // 0x100134A0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x100134A4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x100134A8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x100134AC: blez        $t4, L_1001350C
    if (SIGNED(ctx->r12) <= 0) {
        // 0x100134B0: nop
    
            goto L_1001350C;
    }
    // 0x100134B0: nop

L_100134B4:
    // 0x100134B4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x100134B8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x100134BC: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x100134C0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x100134C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x100134C8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x100134CC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x100134D0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x100134D4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x100134D8: lw          $t0, 0x6C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X6C);
    // 0x100134DC: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x100134E0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x100134E4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x100134E8: sw          $t2, 0x6C($t3)
    MEM_W(0X6C, ctx->r11) = ctx->r10;
    // 0x100134EC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x100134F0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x100134F4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x100134F8: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x100134FC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x10013500: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x10013504: bne         $at, $zero, L_100134B4
    if (ctx->r1 != 0) {
        // 0x10013508: nop
    
            goto L_100134B4;
    }
    // 0x10013508: nop

L_1001350C:
    // 0x1001350C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x10013510: sw          $zero, 0x64($t8)
    MEM_W(0X64, ctx->r24) = 0;
    // 0x10013514: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x10013518: sw          $zero, 0x68($t9)
    MEM_W(0X68, ctx->r25) = 0;
    // 0x1001351C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x10013520: addiu       $t1, $zero, 0x1C
    ctx->r9 = ADD32(0, 0X1C);
    // 0x10013524: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10013528: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x1001352C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x10013530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10013534: jal         0x10012844
    // 0x10013538: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x10013538: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x1001353C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x10013540: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x10013544: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x10013548: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x1001354C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x10013550: jal         0x1001C060
    // 0x10013554: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    n_alEvtqNew(rdram, ctx);
        goto after_5;
    // 0x10013554: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    after_5:
    // 0x10013558: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x1001355C: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    // 0x10013560: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x10013564: lui         $t4, 0x1001
    ctx->r12 = S32(0X1001 << 16);
    // 0x10013568: addiu       $t4, $t4, 0x3598
    ctx->r12 = ADD32(ctx->r12, 0X3598);
    // 0x1001356C: sw          $t4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r12;
    // 0x10013570: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x10013574: sw          $t5, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r13;
    // 0x10013578: jal         0x1001C700
    // 0x1001357C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    n_alSynAddSndPlayer(rdram, ctx);
        goto after_6;
    // 0x1001357C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_6:
    // 0x10013580: b           L_10013588
    // 0x10013584: nop

        goto L_10013588;
    // 0x10013584: nop

L_10013588:
    // 0x10013588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1001358C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x10013590: jr          $ra
    // 0x10013594: nop

    return;
    return;
    // 0x10013594: nop

;}
RECOMP_FUNC void func_1508C5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508C5B8: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x1508C5BC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x1508C5C0: lui         $s6, 0x800D
    ctx->r22 = S32(0X800D << 16);
    // 0x1508C5C4: addiu       $s6, $s6, 0x23B0
    ctx->r22 = ADD32(ctx->r22, 0X23B0);
    // 0x1508C5C8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1508C5CC: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x1508C5D0: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x1508C5D4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x1508C5D8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x1508C5DC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x1508C5E0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x1508C5E4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x1508C5E8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1508C5EC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x1508C5F0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1508C5F4: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x1508C5F8: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x1508C5FC: lw          $a2, 0x0($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X0);
    // 0x1508C600: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x1508C604: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1508C608: lbu         $s3, 0x1700($a2)
    ctx->r19 = MEM_BU(ctx->r6, 0X1700);
    // 0x1508C60C: lbu         $s2, 0x1701($a2)
    ctx->r18 = MEM_BU(ctx->r6, 0X1701);
    // 0x1508C610: addiu       $t6, $a2, 0xE64
    ctx->r14 = ADD32(ctx->r6, 0XE64);
    // 0x1508C614: beq         $t7, $zero, L_1508C80C
    if (ctx->r15 == 0) {
        // 0x1508C618: sw          $t6, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r14;
            goto L_1508C80C;
    }
    // 0x1508C618: sw          $t6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r14;
    // 0x1508C61C: lb          $v1, -0x270($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X270);
    // 0x1508C620: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x1508C624: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508C628: blez        $v1, L_1508C80C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1508C62C: addiu       $s7, $zero, -0x1
        ctx->r23 = ADD32(0, -0X1);
            goto L_1508C80C;
    }
    // 0x1508C62C: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x1508C630: lwc1        $f22, -0x2598($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X2598);
    // 0x1508C634: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1508C638: lui         $fp, 0x800D
    ctx->r30 = S32(0X800D << 16);
    // 0x1508C63C: lui         $s5, 0x1
    ctx->r21 = S32(0X1 << 16);
    // 0x1508C640: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1508C644: ori         $s5, $s5, 0x1
    ctx->r21 = ctx->r21 | 0X1;
    // 0x1508C648: addiu       $fp, $fp, -0x3D30
    ctx->r30 = ADD32(ctx->r30, -0X3D30);
    // 0x1508C64C: addiu       $s1, $sp, 0x90
    ctx->r17 = ADD32(ctx->r29, 0X90);
    // 0x1508C650: lwc1        $f12, 0x14($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X14);
L_1508C654:
    // 0x1508C654: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x1508C658: lb          $t1, -0x274($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X274);
    // 0x1508C65C: addiu       $s0, $sp, 0x90
    ctx->r16 = ADD32(ctx->r29, 0X90);
    // 0x1508C660: addiu       $v0, $sp, 0x80
    ctx->r2 = ADD32(ctx->r29, 0X80);
    // 0x1508C664: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x1508C668: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
L_1508C66C:
    // 0x1508C66C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1508C670: addiu       $t8, $sp, 0x8C
    ctx->r24 = ADD32(ctx->r29, 0X8C);
    // 0x1508C674: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x1508C678: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1508C67C: sb          $s7, -0x1($s0)
    MEM_B(-0X1, ctx->r16) = ctx->r23;
    // 0x1508C680: bne         $at, $zero, L_1508C66C
    if (ctx->r1 != 0) {
        // 0x1508C684: swc1        $f22, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f22.u32l;
            goto L_1508C66C;
    }
    // 0x1508C684: swc1        $f22, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f22.u32l;
    // 0x1508C688: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x1508C68C: beq         $at, $zero, L_1508C784
    if (ctx->r1 == 0) {
        // 0x1508C690: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_1508C784;
    }
    // 0x1508C690: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x1508C694: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x1508C698: sll         $a3, $v1, 2
    ctx->r7 = S32(ctx->r3 << 2);
    // 0x1508C69C: sll         $t2, $s4, 2
    ctx->r10 = S32(ctx->r20 << 2);
    // 0x1508C6A0: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x1508C6A4: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
L_1508C6A8:
    // 0x1508C6A8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1508C6AC: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x1508C6B0: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x1508C6B4: beql        $t4, $t5, L_1508C778
    if (ctx->r12 == ctx->r13) {
        // 0x1508C6B8: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_1508C778;
    }
    goto skip_0;
    // 0x1508C6B8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x1508C6BC: lw          $a2, 0x0($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X0);
    // 0x1508C6C0: sllv        $t8, $s5, $a0
    ctx->r24 = S32(ctx->r21 << (ctx->r4 & 31));
    // 0x1508C6C4: addu        $t6, $a2, $t2
    ctx->r14 = ADD32(ctx->r6, ctx->r10);
    // 0x1508C6C8: lw          $t7, 0x16C0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X16C0);
    // 0x1508C6CC: addu        $t4, $a2, $a3
    ctx->r12 = ADD32(ctx->r6, ctx->r7);
    // 0x1508C6D0: and         $t9, $t7, $t8
    ctx->r25 = ctx->r15 & ctx->r24;
    // 0x1508C6D4: bnel        $t9, $zero, L_1508C778
    if (ctx->r25 != 0) {
        // 0x1508C6D8: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_1508C778;
    }
    goto skip_1;
    // 0x1508C6D8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x1508C6DC: lw          $t5, 0x11C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X11C);
    // 0x1508C6E0: lwc1        $f4, 0x1C($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X1C);
    // 0x1508C6E4: sub.s       $f2, $f14, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x1508C6E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1508C6EC: bne         $s4, $t5, L_1508C704
    if (ctx->r20 != ctx->r13) {
        // 0x1508C6F0: sub.s       $f0, $f16, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f4.fl;
            goto L_1508C704;
    }
    // 0x1508C6F0: sub.s       $f0, $f16, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x1508C6F4: mul.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x1508C6F8: nop

    // 0x1508C6FC: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1508C700: nop

L_1508C704:
    // 0x1508C704: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1508C708: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1508C70C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x1508C710: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1508C714: addiu       $t7, $sp, 0x80
    ctx->r15 = ADD32(ctx->r29, 0X80);
    // 0x1508C718: addiu       $t8, $sp, 0x90
    ctx->r24 = ADD32(ctx->r29, 0X90);
    // 0x1508C71C: addu        $v0, $a1, $t8
    ctx->r2 = ADD32(ctx->r5, ctx->r24);
    // 0x1508C720: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x1508C724: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1508C728: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x1508C72C: nop

    // 0x1508C730: bc1fl       L_1508C778
    if (!c1cs) {
        // 0x1508C734: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_1508C778;
    }
    goto skip_2;
    // 0x1508C734: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_2:
    // 0x1508C738: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1508C73C: lb          $t9, 0x0($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X0);
L_1508C740:
    // 0x1508C740: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1508C744: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x1508C748: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x1508C74C: sb          $a0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r4;
    // 0x1508C750: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    // 0x1508C754: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x1508C758: bne         $at, $zero, L_1508C774
    if (ctx->r1 != 0) {
        // 0x1508C75C: sb          $t9, 0x2($v0)
        MEM_B(0X2, ctx->r2) = ctx->r25;
            goto L_1508C774;
    }
    // 0x1508C75C: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x1508C760: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1508C764: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1508C768: nop

    // 0x1508C76C: bc1tl       L_1508C740
    if (c1cs) {
        // 0x1508C770: lb          $t9, 0x0($v0)
        ctx->r25 = MEM_B(ctx->r2, 0X0);
            goto L_1508C740;
    }
    goto skip_3;
    // 0x1508C770: lb          $t9, 0x0($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X0);
    skip_3:
L_1508C774:
    // 0x1508C774: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_1508C778:
    // 0x1508C778: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x1508C77C: bne         $at, $zero, L_1508C6A8
    if (ctx->r1 != 0) {
        // 0x1508C780: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_1508C6A8;
    }
    // 0x1508C780: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_1508C784:
    // 0x1508C784: addiu       $s0, $sp, 0x90
    ctx->r16 = ADD32(ctx->r29, 0X90);
    // 0x1508C788: lb          $a2, 0x0($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X0);
L_1508C78C:
    // 0x1508C78C: beql        $s7, $a2, L_1508C7E4
    if (ctx->r23 == ctx->r6) {
        // 0x1508C790: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1508C7E4;
    }
    goto skip_4;
    // 0x1508C790: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_4:
    // 0x1508C794: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x1508C798: sll         $t5, $s4, 2
    ctx->r13 = S32(ctx->r20 << 2);
    // 0x1508C79C: sllv        $t7, $s5, $a2
    ctx->r15 = S32(ctx->r21 << (ctx->r6 & 31));
    // 0x1508C7A0: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x1508C7A4: lw          $t6, 0x16C0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X16C0);
    // 0x1508C7A8: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x1508C7AC: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x1508C7B0: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x1508C7B4: sw          $t9, 0x16C0($v0)
    MEM_W(0X16C0, ctx->r2) = ctx->r25;
    // 0x1508C7B8: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x1508C7BC: sllv        $t6, $s5, $s4
    ctx->r14 = S32(ctx->r21 << (ctx->r20 & 31));
    // 0x1508C7C0: nor         $t8, $t6, $zero
    ctx->r24 = ~(ctx->r14 | 0);
    // 0x1508C7C4: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x1508C7C8: lw          $t7, 0x16C0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X16C0);
    // 0x1508C7CC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x1508C7D0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1508C7D4: and         $t9, $t7, $t8
    ctx->r25 = ctx->r15 & ctx->r24;
    // 0x1508C7D8: jal         0x1508C1A4
    // 0x1508C7DC: sw          $t9, 0x16C0($v1)
    MEM_W(0X16C0, ctx->r3) = ctx->r25;
    func_1508C1A4(rdram, ctx);
        goto after_0;
    // 0x1508C7DC: sw          $t9, 0x16C0($v1)
    MEM_W(0X16C0, ctx->r3) = ctx->r25;
    after_0:
    // 0x1508C7E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1508C7E4:
    // 0x1508C7E4: addiu       $t4, $sp, 0x93
    ctx->r12 = ADD32(ctx->r29, 0X93);
    // 0x1508C7E8: bnel        $s0, $t4, L_1508C78C
    if (ctx->r16 != ctx->r12) {
        // 0x1508C7EC: lb          $a2, 0x0($s0)
        ctx->r6 = MEM_B(ctx->r16, 0X0);
            goto L_1508C78C;
    }
    goto skip_5;
    // 0x1508C7EC: lb          $a2, 0x0($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X0);
    skip_5:
    // 0x1508C7F0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1508C7F4: lb          $v1, -0x270($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X270);
    // 0x1508C7F8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x1508C7FC: addiu       $fp, $fp, 0x32C
    ctx->r30 = ADD32(ctx->r30, 0X32C);
    // 0x1508C800: slt         $at, $s4, $v1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1508C804: bnel        $at, $zero, L_1508C654
    if (ctx->r1 != 0) {
        // 0x1508C808: lwc1        $f12, 0x14($fp)
        ctx->f12.u32l = MEM_W(ctx->r30, 0X14);
            goto L_1508C654;
    }
    goto skip_6;
    // 0x1508C808: lwc1        $f12, 0x14($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X14);
    skip_6:
L_1508C80C:
    // 0x1508C80C: lw          $t5, 0xC4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC4);
    // 0x1508C810: lui         $s5, 0x1
    ctx->r21 = S32(0X1 << 16);
    // 0x1508C814: ori         $s5, $s5, 0x1
    ctx->r21 = ctx->r21 | 0X1;
    // 0x1508C818: beq         $t5, $zero, L_1508C970
    if (ctx->r13 == 0) {
        // 0x1508C81C: sll         $t6, $s3, 2
        ctx->r14 = S32(ctx->r19 << 2);
            goto L_1508C970;
    }
    // 0x1508C81C: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x1508C820: subu        $t6, $t6, $s3
    ctx->r14 = SUB32(ctx->r14, ctx->r19);
    // 0x1508C824: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1508C828: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x1508C82C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1508C830: subu        $t6, $t6, $s3
    ctx->r14 = SUB32(ctx->r14, ctx->r19);
    // 0x1508C834: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1508C838: subu        $t6, $t6, $s3
    ctx->r14 = SUB32(ctx->r14, ctx->r19);
    // 0x1508C83C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1508C840: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1508C844: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1508C848: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x1508C84C: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x1508C850: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1508C854: addiu       $t3, $t3, 0x18A0
    ctx->r11 = ADD32(ctx->r11, 0X18A0);
    // 0x1508C858: addiu       $s1, $s1, -0x3D30
    ctx->r17 = ADD32(ctx->r17, -0X3D30);
    // 0x1508C85C: addiu       $s7, $s7, -0x274
    ctx->r23 = ADD32(ctx->r23, -0X274);
    // 0x1508C860: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x1508C864: addiu       $s4, $zero, 0x32C
    ctx->r20 = ADD32(0, 0X32C);
L_1508C868:
    // 0x1508C868: lbu         $t2, 0x128($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X128);
    // 0x1508C86C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1508C870: lb          $t1, 0x0($s7)
    ctx->r9 = MEM_B(ctx->r23, 0X0);
L_1508C874:
    // 0x1508C874: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1508C878: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x1508C87C: slt         $at, $a1, $t1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x1508C880: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x1508C884: bne         $at, $zero, L_1508C8C8
    if (ctx->r1 != 0) {
        // 0x1508C888: lw          $a2, 0x0($s6)
        ctx->r6 = MEM_W(ctx->r22, 0X0);
            goto L_1508C8C8;
    }
    // 0x1508C888: lw          $a2, 0x0($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X0);
    // 0x1508C88C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1508C890: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    // 0x1508C894: addiu       $t4, $t1, -0x1
    ctx->r12 = ADD32(ctx->r9, -0X1);
    // 0x1508C898: slt         $at, $a0, $t4
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x1508C89C: bne         $at, $zero, L_1508C8AC
    if (ctx->r1 != 0) {
        // 0x1508C8A0: or          $s3, $a0, $zero
        ctx->r19 = ctx->r4 | 0;
            goto L_1508C8AC;
    }
    // 0x1508C8A0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x1508C8A4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1508C8A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1508C8AC:
    // 0x1508C8AC: multu       $s3, $s4
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1508C8B0: addiu       $s2, $a0, 0x1
    ctx->r18 = ADD32(ctx->r4, 0X1);
    // 0x1508C8B4: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x1508C8B8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x1508C8BC: mflo        $t5
    ctx->r13 = lo;
    // 0x1508C8C0: addu        $s0, $s1, $t5
    ctx->r16 = ADD32(ctx->r17, ctx->r13);
    // 0x1508C8C4: lbu         $t2, 0x128($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X128);
L_1508C8C8:
    // 0x1508C8C8: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x1508C8CC: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x1508C8D0: lw          $t8, 0x16C0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X16C0);
    // 0x1508C8D4: sllv        $t9, $s5, $a1
    ctx->r25 = S32(ctx->r21 << (ctx->r5 & 31));
    // 0x1508C8D8: nor         $t4, $t9, $zero
    ctx->r12 = ~(ctx->r25 | 0);
    // 0x1508C8DC: and         $t5, $t8, $t4
    ctx->r13 = ctx->r24 & ctx->r12;
    // 0x1508C8E0: sw          $t5, 0x16C0($v0)
    MEM_W(0X16C0, ctx->r2) = ctx->r13;
    // 0x1508C8E4: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x1508C8E8: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x1508C8EC: sllv        $t8, $s5, $s3
    ctx->r24 = S32(ctx->r21 << (ctx->r19 & 31));
    // 0x1508C8F0: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x1508C8F4: lw          $t9, 0x16C0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X16C0);
    // 0x1508C8F8: nor         $t4, $t8, $zero
    ctx->r12 = ~(ctx->r24 | 0);
    // 0x1508C8FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1508C900: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1508C904: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x1508C908: and         $t5, $t9, $t4
    ctx->r13 = ctx->r25 & ctx->r12;
    // 0x1508C90C: sllv        $t9, $t8, $a1
    ctx->r25 = S32(ctx->r24 << (ctx->r5 & 31));
    // 0x1508C910: sllv        $t7, $t6, $s3
    ctx->r15 = S32(ctx->r14 << (ctx->r19 & 31));
    // 0x1508C914: slti        $at, $a3, 0x40
    ctx->r1 = SIGNED(ctx->r7) < 0X40 ? 1 : 0;
    // 0x1508C918: sw          $t5, 0x16C0($v1)
    MEM_W(0X16C0, ctx->r3) = ctx->r13;
    // 0x1508C91C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1508C920: beq         $at, $zero, L_1508C950
    if (ctx->r1 == 0) {
        // 0x1508C924: or          $t0, $t7, $t9
        ctx->r8 = ctx->r15 | ctx->r25;
            goto L_1508C950;
    }
    // 0x1508C924: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x1508C928: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
    // 0x1508C92C: and         $t5, $t4, $t0
    ctx->r13 = ctx->r12 & ctx->r8;
    // 0x1508C930: bnel        $t5, $zero, L_1508C874
    if (ctx->r13 != 0) {
        // 0x1508C934: lb          $t1, 0x0($s7)
        ctx->r9 = MEM_B(ctx->r23, 0X0);
            goto L_1508C874;
    }
    goto skip_7;
    // 0x1508C934: lb          $t1, 0x0($s7)
    ctx->r9 = MEM_B(ctx->r23, 0X0);
    skip_7:
    // 0x1508C938: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1508C93C: mflo        $t6
    ctx->r14 = lo;
    // 0x1508C940: addu        $t8, $s1, $t6
    ctx->r24 = ADD32(ctx->r17, ctx->r14);
    // 0x1508C944: lbu         $t7, 0x128($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X128);
    // 0x1508C948: beql        $t2, $t7, L_1508C874
    if (ctx->r10 == ctx->r15) {
        // 0x1508C94C: lb          $t1, 0x0($s7)
        ctx->r9 = MEM_B(ctx->r23, 0X0);
            goto L_1508C874;
    }
    goto skip_8;
    // 0x1508C94C: lb          $t1, 0x0($s7)
    ctx->r9 = MEM_B(ctx->r23, 0X0);
    skip_8:
L_1508C950:
    // 0x1508C950: jal         0x1508C1A4
    // 0x1508C954: nop

    func_1508C1A4(rdram, ctx);
        goto after_1;
    // 0x1508C954: nop

    after_1:
    // 0x1508C958: lw          $v0, 0xC4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC4);
    // 0x1508C95C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1508C960: addiu       $t3, $t3, 0x18A0
    ctx->r11 = ADD32(ctx->r11, 0X18A0);
    // 0x1508C964: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1508C968: bne         $v0, $zero, L_1508C868
    if (ctx->r2 != 0) {
        // 0x1508C96C: sw          $v0, 0xC4($sp)
        MEM_W(0XC4, ctx->r29) = ctx->r2;
            goto L_1508C868;
    }
    // 0x1508C96C: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
L_1508C970:
    // 0x1508C970: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x1508C974: sb          $s3, 0x1700($t9)
    MEM_B(0X1700, ctx->r25) = ctx->r19;
    // 0x1508C978: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x1508C97C: sb          $s2, 0x1701($t4)
    MEM_B(0X1701, ctx->r12) = ctx->r18;
    // 0x1508C980: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x1508C984: lw          $t5, 0x0($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X0);
    // 0x1508C988: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1508C98C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x1508C990: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x1508C994: lw          $v0, 0x16C0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X16C0);
    // 0x1508C998: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1508C99C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x1508C9A0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1508C9A4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x1508C9A8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x1508C9AC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x1508C9B0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x1508C9B4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x1508C9B8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x1508C9BC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x1508C9C0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x1508C9C4: jr          $ra
    // 0x1508C9C8: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    return;
    // 0x1508C9C8: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_15102B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15102B38: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x15102B3C: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x15102B40: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x15102B44: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15102B48: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15102B4C: bne         $a0, $zero, L_15102B5C
    if (ctx->r4 != 0) {
        // 0x15102B50: lui         $v1, 0x800A
        ctx->r3 = S32(0X800A << 16);
            goto L_15102B5C;
    }
    // 0x15102B50: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x15102B54: b           L_15102D40
    // 0x15102B58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15102D40;
    // 0x15102B58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15102B5C:
    // 0x15102B5C: addiu       $v1, $v1, 0x5480
    ctx->r3 = ADD32(ctx->r3, 0X5480);
    // 0x15102B60: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x15102B64: sb          $zero, 0x58($sp)
    MEM_B(0X58, ctx->r29) = 0;
    // 0x15102B68: addiu       $t7, $sp, 0x5C
    ctx->r15 = ADD32(ctx->r29, 0X5C);
    // 0x15102B6C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x15102B70: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x15102B74: addiu       $t1, $sp, 0x68
    ctx->r9 = ADD32(ctx->r29, 0X68);
    // 0x15102B78: sll         $t9, $a1, 6
    ctx->r25 = S32(ctx->r5 << 6);
    // 0x15102B7C: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x15102B80: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x15102B84: addiu       $t8, $zero, 0x5F
    ctx->r24 = ADD32(0, 0X5F);
    // 0x15102B88: addiu       $t0, $zero, 0x2203
    ctx->r8 = ADD32(0, 0X2203);
    // 0x15102B8C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x15102B90: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x15102B94: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x15102B98: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15102B9C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x15102BA0: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x15102BA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15102BA8: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x15102BAC: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x15102BB0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15102BB4: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x15102BB8: lh          $t5, 0xFE($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XFE);
    // 0x15102BBC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x15102BC0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x15102BC4: sh          $t5, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r13;
    // 0x15102BC8: lbu         $t6, 0x3B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3B);
    // 0x15102BCC: lh          $t3, 0xE6($sp)
    ctx->r11 = MEM_H(ctx->r29, 0XE6);
    // 0x15102BD0: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x15102BD4: lw          $t9, 0xE0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE0);
    // 0x15102BD8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15102BDC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15102BE0: sb          $t8, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r24;
    // 0x15102BE4: sb          $t7, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r15;
    // 0x15102BE8: sh          $t0, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r8;
    // 0x15102BEC: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x15102BF0: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x15102BF4: sb          $t2, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r10;
    // 0x15102BF8: sb          $t1, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r9;
    // 0x15102BFC: sb          $t4, 0x86($sp)
    MEM_B(0X86, ctx->r29) = ctx->r12;
    // 0x15102C00: sb          $t5, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r13;
    // 0x15102C04: sb          $t6, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r14;
    // 0x15102C08: sh          $t3, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r11;
    // 0x15102C0C: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x15102C10: addiu       $t6, $sp, 0x88
    ctx->r14 = ADD32(ctx->r29, 0X88);
    // 0x15102C14: addiu       $t3, $sp, 0x90
    ctx->r11 = ADD32(ctx->r29, 0X90);
    // 0x15102C18: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x15102C1C: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x15102C20: addiu       $t5, $sp, 0x9C
    ctx->r13 = ADD32(ctx->r29, 0X9C);
    // 0x15102C24: lui         $t9, 0x40CC
    ctx->r25 = S32(0X40CC << 16);
    // 0x15102C28: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x15102C2C: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x15102C30: ori         $t9, $t9, 0x9
    ctx->r25 = ctx->r25 | 0X9;
    // 0x15102C34: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x15102C38: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x15102C3C: lw          $t4, 0x4($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X4);
    // 0x15102C40: sw          $t4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r12;
    // 0x15102C44: lw          $at, 0x8($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X8);
    // 0x15102C48: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x15102C4C: lw          $at, 0x0($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X0);
    // 0x15102C50: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x15102C54: lw          $t6, 0x4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X4);
    // 0x15102C58: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x15102C5C: lw          $at, 0x8($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X8);
    // 0x15102C60: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x15102C64: lbu         $t0, 0xEB($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XEB);
    // 0x15102C68: lbu         $t3, 0xF7($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XF7);
    // 0x15102C6C: sw          $t9, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r25;
    // 0x15102C70: sb          $t1, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r9;
    // 0x15102C74: sb          $zero, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = 0;
    // 0x15102C78: sb          $t2, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = ctx->r10;
    // 0x15102C7C: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x15102C80: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x15102C84: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x15102C88: sb          $t0, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r8;
    // 0x15102C8C: jal         0x150ADA20
    // 0x15102C90: sb          $t3, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r11;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15102C90: sb          $t3, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r11;
    after_0:
    // 0x15102C94: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x15102C98: beq         $t4, $zero, L_15102CA8
    if (ctx->r12 == 0) {
        // 0x15102C9C: addiu       $a0, $sp, 0x74
        ctx->r4 = ADD32(ctx->r29, 0X74);
            goto L_15102CA8;
    }
    // 0x15102C9C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x15102CA0: b           L_15102CAC
    // 0x15102CA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_15102CAC;
    // 0x15102CA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_15102CA8:
    // 0x15102CA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15102CAC:
    // 0x15102CAC: lw          $t5, 0xF8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF8);
    // 0x15102CB0: lbu         $t9, 0x103($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X103);
    // 0x15102CB4: lw          $t0, 0x104($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X104);
    // 0x15102CB8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x15102CBC: addiu       $t8, $zero, 0x16
    ctx->r24 = ADD32(0, 0X16);
    // 0x15102CC0: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x15102CC4: addiu       $t6, $t5, 0x30
    ctx->r14 = ADD32(ctx->r13, 0X30);
    // 0x15102CC8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x15102CCC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15102CD0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15102CD4: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
    // 0x15102CD8: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x15102CDC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15102CE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15102CE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15102CE8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15102CEC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x15102CF0: jal         0x1513D2F0
    // 0x15102CF4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_1513D2F0(rdram, ctx);
        goto after_1;
    // 0x15102CF4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_1:
    // 0x15102CF8: beq         $v0, $zero, L_15102D10
    if (ctx->r2 == 0) {
        // 0x15102CFC: sw          $v0, 0xCC($sp)
        MEM_W(0XCC, ctx->r29) = ctx->r2;
            goto L_15102D10;
    }
    // 0x15102CFC: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x15102D00: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x15102D04: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x15102D08: jal         0x10022EC0
    // 0x15102D0C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15102D0C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_2:
L_15102D10:
    // 0x15102D10: lbu         $t1, 0xF7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XF7);
    // 0x15102D14: lbu         $t2, 0x103($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X103);
    // 0x15102D18: lw          $t3, 0x104($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X104);
    // 0x15102D1C: lh          $a0, 0xE6($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XE6);
    // 0x15102D20: lbu         $a1, 0xEB($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XEB);
    // 0x15102D24: lw          $a2, 0xEC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XEC);
    // 0x15102D28: lw          $a3, 0xF0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XF0);
    // 0x15102D2C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15102D30: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15102D34: jal         0x15103254
    // 0x15102D38: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_15103254(rdram, ctx);
        goto after_3;
    // 0x15102D38: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_3:
    // 0x15102D3C: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_15102D40:
    // 0x15102D40: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15102D44: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x15102D48: jr          $ra
    // 0x15102D4C: nop

    return;
    return;
    // 0x15102D4C: nop

;}
RECOMP_FUNC void func_150B791C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B791C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x150B7920: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150B7924: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x150B7928: addiu       $s0, $s0, -0x6768
    ctx->r16 = ADD32(ctx->r16, -0X6768);
    // 0x150B792C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150B7930: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x150B7934: beql        $a0, $zero, L_150B794C
    if (ctx->r4 == 0) {
        // 0x150B7938: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_150B794C;
    }
    goto skip_0;
    // 0x150B7938: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    skip_0:
    // 0x150B793C: jal         0x1516972C
    // 0x150B7940: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150B7940: nop

    after_0:
    // 0x150B7944: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x150B7948: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_150B794C:
    // 0x150B794C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B7950: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x150B7954: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x150B7958: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150B795C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150B7960: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x150B7964: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x150B7968: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x150B796C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B7970: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x150B7974: sb          $t6, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r14;
    // 0x150B7978: sh          $t7, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r15;
    // 0x150B797C: sh          $t8, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r24;
    // 0x150B7980: sb          $t9, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r25;
    // 0x150B7984: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x150B7988: addiu       $t0, $t0, 0x190C
    ctx->r8 = ADD32(ctx->r8, 0X190C);
    // 0x150B798C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150B7990: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x150B7994: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x150B7998: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x150B799C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150B79A0: addiu       $t8, $zero, 0x1000
    ctx->r24 = ADD32(0, 0X1000);
    // 0x150B79A4: addiu       $t9, $zero, 0x1000
    ctx->r25 = ADD32(0, 0X1000);
    // 0x150B79A8: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x150B79AC: sh          $zero, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = 0;
    // 0x150B79B0: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x150B79B4: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x150B79B8: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    // 0x150B79BC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x150B79C0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150B79C4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150B79C8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150B79CC: sb          $t3, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r11;
    // 0x150B79D0: sb          $zero, 0x57($sp)
    MEM_B(0X57, ctx->r29) = 0;
    // 0x150B79D4: sb          $zero, 0x58($sp)
    MEM_B(0X58, ctx->r29) = 0;
    // 0x150B79D8: sb          $t4, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r12;
    // 0x150B79DC: sb          $t5, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r13;
    // 0x150B79E0: sb          $t6, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r14;
    // 0x150B79E4: sb          $t7, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r15;
    // 0x150B79E8: sb          $zero, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = 0;
    // 0x150B79EC: sh          $t8, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r24;
    // 0x150B79F0: sh          $t9, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r25;
    // 0x150B79F4: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x150B79F8: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x150B79FC: beq         $a0, $zero, L_150B7A0C
    if (ctx->r4 == 0) {
        // 0x150B7A00: sw          $t2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r10;
            goto L_150B7A0C;
    }
    // 0x150B7A00: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x150B7A04: jal         0x1516972C
    // 0x150B7A08: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x150B7A08: nop

    after_1:
L_150B7A0C:
    // 0x150B7A0C: jal         0x15169968
    // 0x150B7A10: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_15169968(rdram, ctx);
        goto after_2;
    // 0x150B7A10: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x150B7A14: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x150B7A18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B7A1C: lw          $t5, 0x18($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X18);
    // 0x150B7A20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B7A24: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150B7A28: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x150B7A2C: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x150B7A30: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150B7A34: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x150B7A38: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x150B7A3C: sh          $t0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r8;
    // 0x150B7A40: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x150B7A44: sb          $t4, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r12;
    // 0x150B7A48: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x150B7A4C: beq         $t5, $zero, L_150B7A5C
    if (ctx->r13 == 0) {
        // 0x150B7A50: sw          $t3, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r11;
            goto L_150B7A5C;
    }
    // 0x150B7A50: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x150B7A54: jal         0x1516972C
    // 0x150B7A58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_1516972C(rdram, ctx);
        goto after_3;
    // 0x150B7A58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
L_150B7A5C:
    // 0x150B7A5C: jal         0x15169968
    // 0x150B7A60: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_15169968(rdram, ctx);
        goto after_4;
    // 0x150B7A60: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x150B7A64: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x150B7A68: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B7A6C: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x150B7A70: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x150B7A74: trunc.w.s   $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150B7A78: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x150B7A7C: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x150B7A80: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x150B7A84: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x150B7A88: sh          $t6, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r14;
    // 0x150B7A8C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x150B7A90: sb          $t0, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r8;
    // 0x150B7A94: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x150B7A98: beq         $t1, $zero, L_150B7AA8
    if (ctx->r9 == 0) {
        // 0x150B7A9C: sw          $t9, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r25;
            goto L_150B7AA8;
    }
    // 0x150B7A9C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x150B7AA0: jal         0x1516972C
    // 0x150B7AA4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_1516972C(rdram, ctx);
        goto after_5;
    // 0x150B7AA4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_5:
L_150B7AA8:
    // 0x150B7AA8: jal         0x15169968
    // 0x150B7AAC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_15169968(rdram, ctx);
        goto after_6;
    // 0x150B7AAC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x150B7AB0: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x150B7AB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B7AB8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x150B7ABC: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x150B7AC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B7AC4: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x150B7AC8: addiu       $t2, $zero, 0x58
    ctx->r10 = ADD32(0, 0X58);
    // 0x150B7ACC: addiu       $t3, $zero, 0x40
    ctx->r11 = ADD32(0, 0X40);
    // 0x150B7AD0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150B7AD4: addiu       $t5, $t5, 0x18E8
    ctx->r13 = ADD32(ctx->r13, 0X18E8);
    // 0x150B7AD8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x150B7ADC: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x150B7AE0: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x150B7AE4: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    // 0x150B7AE8: sb          $zero, 0x55($sp)
    MEM_B(0X55, ctx->r29) = 0;
    // 0x150B7AEC: sh          $t2, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r10;
    // 0x150B7AF0: sh          $t3, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r11;
    // 0x150B7AF4: sb          $t4, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r12;
    // 0x150B7AF8: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x150B7AFC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x150B7B00: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x150B7B04: beq         $a0, $zero, L_150B7B14
    if (ctx->r4 == 0) {
        // 0x150B7B08: swc1        $f6, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
            goto L_150B7B14;
    }
    // 0x150B7B08: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x150B7B0C: jal         0x1516972C
    // 0x150B7B10: nop

    func_1516972C(rdram, ctx);
        goto after_7;
    // 0x150B7B10: nop

    after_7:
L_150B7B14:
    // 0x150B7B14: jal         0x15169968
    // 0x150B7B18: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_15169968(rdram, ctx);
        goto after_8;
    // 0x150B7B18: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_8:
    // 0x150B7B1C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x150B7B20: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150B7B24: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150B7B28: sb          $t6, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r14;
    // 0x150B7B2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150B7B30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150B7B34: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x150B7B38: jr          $ra
    // 0x150B7B3C: nop

    return;
    return;
    // 0x150B7B3C: nop

;}
RECOMP_FUNC void func_151A5F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A5F70: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151A5F74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151A5F78: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x151A5F7C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151A5F80: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151A5F84: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151A5F88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151A5F8C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x151A5F90: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x151A5F94: bnel        $a2, $at, L_151A6058
    if (ctx->r6 != ctx->r1) {
        // 0x151A5F98: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151A6058;
    }
    goto skip_0;
    // 0x151A5F98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x151A5F9C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x151A5FA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151A5FA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151A5FA8: blez        $a1, L_151A5FE8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x151A5FAC: lw          $t7, 0x40($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X40);
            goto L_151A5FE8;
    }
    // 0x151A5FAC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x151A5FB0: lbu         $a2, 0x2C($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0X2C);
    // 0x151A5FB4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x151A5FB8: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
L_151A5FBC:
    // 0x151A5FBC: bnel        $a2, $t9, L_151A5FD0
    if (ctx->r6 != ctx->r25) {
        // 0x151A5FC0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_151A5FD0;
    }
    goto skip_1;
    // 0x151A5FC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_1:
    // 0x151A5FC4: b           L_151A5FD4
    // 0x151A5FC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_151A5FD4;
    // 0x151A5FC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151A5FCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_151A5FD0:
    // 0x151A5FD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_151A5FD4:
    // 0x151A5FD4: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x151A5FD8: beq         $at, $zero, L_151A5FE8
    if (ctx->r1 == 0) {
        // 0x151A5FDC: nop
    
            goto L_151A5FE8;
    }
    // 0x151A5FDC: nop

    // 0x151A5FE0: beql        $a0, $zero, L_151A5FBC
    if (ctx->r4 == 0) {
        // 0x151A5FE4: lbu         $t9, 0x0($v1)
        ctx->r25 = MEM_BU(ctx->r3, 0X0);
            goto L_151A5FBC;
    }
    goto skip_2;
    // 0x151A5FE4: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    skip_2:
L_151A5FE8:
    // 0x151A5FE8: beq         $a0, $zero, L_151A6054
    if (ctx->r4 == 0) {
        // 0x151A5FEC: lw          $t0, 0x40($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X40);
            goto L_151A6054;
    }
    // 0x151A5FEC: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x151A5FF0: addiu       $v0, $t0, 0x28
    ctx->r2 = ADD32(ctx->r8, 0X28);
    // 0x151A5FF4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x151A5FF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151A5FFC: lbu         $t1, 0x14($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X14);
    // 0x151A6000: bnel        $t1, $at, L_151A6058
    if (ctx->r9 != ctx->r1) {
        // 0x151A6004: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151A6058;
    }
    goto skip_3;
    // 0x151A6004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x151A6008: lbu         $v1, 0xC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XC);
    // 0x151A600C: lbu         $t4, 0xC($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0XC);
    // 0x151A6010: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x151A6014: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x151A6018: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151A601C: lbu         $t5, 0x1($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X1);
    // 0x151A6020: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x151A6024: andi        $t3, $a3, 0x2
    ctx->r11 = ctx->r7 & 0X2;
    // 0x151A6028: andi        $t2, $a2, 0x1
    ctx->r10 = ctx->r6 & 0X1;
    // 0x151A602C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x151A6030: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x151A6034: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x151A6038: jal         0x151A6068
    // 0x151A603C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_151A6068(rdram, ctx);
        goto after_0;
    // 0x151A603C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_0:
    // 0x151A6040: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x151A6044: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151A6048: sb          $zero, 0x14($t6)
    MEM_B(0X14, ctx->r14) = 0;
    // 0x151A604C: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x151A6050: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
L_151A6054:
    // 0x151A6054: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151A6058:
    // 0x151A6058: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151A605C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x151A6060: jr          $ra
    // 0x151A6064: nop

    return;
    return;
    // 0x151A6064: nop

;}
RECOMP_FUNC void func_15148F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15148F1C: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x15148F20: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15148F24: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x15148F28: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x15148F2C: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x15148F30: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x15148F34: jal         0x151423D8
    // 0x15148F38: lbu         $a0, 0xD3($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XD3);
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x15148F38: lbu         $a0, 0xD3($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XD3);
    after_0:
    // 0x15148F3C: lw          $a0, 0xD0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD0);
    // 0x15148F40: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x15148F44: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x15148F48: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15148F4C: jal         0x151423D8
    // 0x15148F50: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x15148F50: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x15148F54: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x15148F58: jal         0x151423D8
    // 0x15148F5C: lbu         $a0, 0xCF($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XCF);
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x15148F5C: lbu         $a0, 0xCF($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XCF);
    after_2:
    // 0x15148F60: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x15148F64: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x15148F68: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x15148F6C: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x15148F70: jal         0x151423D8
    // 0x15148F74: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x15148F74: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_3:
    // 0x15148F78: lbu         $v0, 0xBB($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XBB);
    // 0x15148F7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15148F80: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15148F84: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15148F88: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x15148F8C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x15148F90: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x15148F94: sw          $t8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r24;
    // 0x15148F98: sh          $t9, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r25;
    // 0x15148F9C: sb          $t0, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r8;
    // 0x15148FA0: sb          $t1, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r9;
    // 0x15148FA4: bne         $v0, $at, L_15148FB4
    if (ctx->r2 != ctx->r1) {
        // 0x15148FA8: sb          $v0, 0x95($sp)
        MEM_B(0X95, ctx->r29) = ctx->r2;
            goto L_15148FB4;
    }
    // 0x15148FA8: sb          $v0, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r2;
    // 0x15148FAC: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x15148FB0: sb          $t2, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r10;
L_15148FB4:
    // 0x15148FB4: lwc1        $f12, 0xD4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x15148FB8: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x15148FBC: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x15148FC0: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x15148FC4: mul.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x15148FC8: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x15148FCC: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x15148FD0: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15148FD4: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x15148FD8: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x15148FDC: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x15148FE0: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x15148FE4: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x15148FE8: neg.s       $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = -ctx->f12.fl;
    // 0x15148FEC: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x15148FF0: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    // 0x15148FF4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15148FF8: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15148FFC: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x15149000: lh          $t6, 0xDA($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XDA);
    // 0x15149004: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15149008: addiu       $t5, $t4, 0x3
    ctx->r13 = ADD32(ctx->r12, 0X3);
    // 0x1514900C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15149010: sb          $t5, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r13;
    // 0x15149014: lbu         $t5, 0xE7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XE7);
    // 0x15149018: sb          $t3, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r11;
    // 0x1514901C: lui         $t8, 0x16
    ctx->r24 = S32(0X16 << 16);
    // 0x15149020: sh          $t6, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r14;
    // 0x15149024: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15149028: ori         $t8, $t8, 0x600
    ctx->r24 = ctx->r24 | 0X600;
    // 0x1514902C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x15149030: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x15149034: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x15149038: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x1514903C: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x15149040: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15149044: addiu       $t4, $sp, 0x4C
    ctx->r12 = ADD32(ctx->r29, 0X4C);
    // 0x15149048: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x1514904C: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x15149050: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x15149054: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x15149058: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x1514905C: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x15149060: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x15149064: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x15149068: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x1514906C: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x15149070: sb          $zero, 0x68($sp)
    MEM_B(0X68, ctx->r29) = 0;
    // 0x15149074: sb          $t3, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r11;
    // 0x15149078: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x1514907C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x15149080: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x15149084: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x15149088: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1514908C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15149090: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15149094: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15149098: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1514909C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151490A0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151490A4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151490A8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151490AC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x151490B0: jal         0x15147DA0
    // 0x151490B4: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    func_15147DA0(rdram, ctx);
        goto after_4;
    // 0x151490B4: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    after_4:
    // 0x151490B8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151490BC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x151490C0: jr          $ra
    // 0x151490C4: nop

    return;
    return;
    // 0x151490C4: nop

;}
RECOMP_FUNC void func_150A02D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A02D0: beq         $a1, $zero, L_150A02F8
    if (ctx->r5 == 0) {
        // 0x150A02D4: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_150A02F8;
    }
    // 0x150A02D4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x150A02D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150A02DC: beq         $a1, $at, L_150A0320
    if (ctx->r5 == ctx->r1) {
        // 0x150A02E0: sll         $t1, $a0, 2
        ctx->r9 = S32(ctx->r4 << 2);
            goto L_150A0320;
    }
    // 0x150A02E0: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x150A02E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150A02E8: beq         $a1, $at, L_150A0348
    if (ctx->r5 == ctx->r1) {
        // 0x150A02EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150A0348;
    }
    // 0x150A02EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150A02F0: b           L_150A036C
    // 0x150A02F4: nop

        goto L_150A036C;
    // 0x150A02F4: nop

L_150A02F8:
    // 0x150A02F8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x150A02FC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150A0300: addiu       $t7, $t7, 0x3010
    ctx->r15 = ADD32(ctx->r15, 0X3010);
    // 0x150A0304: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150A0308: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x150A030C: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x150A0310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150A0314: ori         $t0, $t9, 0x40
    ctx->r8 = ctx->r25 | 0X40;
    // 0x150A0318: jr          $ra
    // 0x150A031C: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    return;
    return;
    // 0x150A031C: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
L_150A0320:
    // 0x150A0320: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x150A0324: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150A0328: addiu       $t2, $t2, 0x3010
    ctx->r10 = ADD32(ctx->r10, 0X3010);
    // 0x150A032C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150A0330: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x150A0334: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x150A0338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150A033C: andi        $t4, $t3, 0xFFBF
    ctx->r12 = ctx->r11 & 0XFFBF;
    // 0x150A0340: jr          $ra
    // 0x150A0344: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    return;
    return;
    // 0x150A0344: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
L_150A0348:
    // 0x150A0348: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x150A034C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x150A0350: lw          $t5, 0x8($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X8);
    // 0x150A0354: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150A0358: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150A035C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x150A0360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150A0364: jr          $ra
    // 0x150A0368: sw          $t5, 0x3014($at)
    MEM_W(0X3014, ctx->r1) = ctx->r13;
    return;
    return;
    // 0x150A0368: sw          $t5, 0x3014($at)
    MEM_W(0X3014, ctx->r1) = ctx->r13;
L_150A036C:
    // 0x150A036C: jr          $ra
    // 0x150A0370: nop

    return;
    return;
    // 0x150A0370: nop

;}
RECOMP_FUNC void func_151BFE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BFE84: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x151BFE88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151BFE8C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151BFE90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151BFE94: sw          $a0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r4;
    // 0x151BFE98: sw          $a2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r6;
    // 0x151BFE9C: sw          $a3, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r7;
    // 0x151BFEA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151BFEA4: lbu         $a1, 0x133($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X133);
    // 0x151BFEA8: jal         0x151C0418
    // 0x151BFEAC: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    func_151C0418(rdram, ctx);
        goto after_0;
    // 0x151BFEAC: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    after_0:
    // 0x151BFEB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151BFEB4: lbu         $a1, 0x133($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X133);
    // 0x151BFEB8: jal         0x151C04F8
    // 0x151BFEBC: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    func_151C04F8(rdram, ctx);
        goto after_1;
    // 0x151BFEBC: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    after_1:
    // 0x151BFEC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151BFEC4: lbu         $a1, 0x133($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X133);
    // 0x151BFEC8: jal         0x151C05A4
    // 0x151BFECC: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    func_151C05A4(rdram, ctx);
        goto after_2;
    // 0x151BFECC: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    after_2:
    // 0x151BFED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151BFED4: lbu         $a1, 0x133($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X133);
    // 0x151BFED8: jal         0x151C05F0
    // 0x151BFEDC: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    func_151C05F0(rdram, ctx);
        goto after_3;
    // 0x151BFEDC: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    after_3:
    // 0x151BFEE0: lw          $t6, 0x120($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X120);
    // 0x151BFEE4: lbu         $t7, 0x12F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X12F);
    // 0x151BFEE8: beql        $t6, $zero, L_151BFF38
    if (ctx->r14 == 0) {
        // 0x151BFEEC: lw          $t8, 0x120($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X120);
            goto L_151BFF38;
    }
    goto skip_0;
    // 0x151BFEEC: lw          $t8, 0x120($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X120);
    skip_0:
    // 0x151BFEF0: beq         $t7, $zero, L_151BFF34
    if (ctx->r15 == 0) {
        // 0x151BFEF4: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_151BFF34;
    }
    // 0x151BFEF4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151BFEF8: addiu       $a1, $sp, 0x114
    ctx->r5 = ADD32(ctx->r29, 0X114);
    // 0x151BFEFC: addiu       $a2, $sp, 0x108
    ctx->r6 = ADD32(ctx->r29, 0X108);
    // 0x151BFF00: jal         0x15144E80
    // 0x151BFF04: addiu       $a3, $sp, 0xFC
    ctx->r7 = ADD32(ctx->r29, 0XFC);
    func_15144E80(rdram, ctx);
        goto after_4;
    // 0x151BFF04: addiu       $a3, $sp, 0xFC
    ctx->r7 = ADD32(ctx->r29, 0XFC);
    after_4:
    // 0x151BFF08: beq         $v0, $zero, L_151BFF34
    if (ctx->r2 == 0) {
        // 0x151BFF0C: lwc1        $f4, 0x100($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
            goto L_151BFF34;
    }
    // 0x151BFF0C: lwc1        $f4, 0x100($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
    // 0x151BFF10: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151BFF14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151BFF18: lbu         $a1, 0x133($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X133);
    // 0x151BFF1C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x151BFF20: nop

    // 0x151BFF24: bc1fl       L_151BFF38
    if (!c1cs) {
        // 0x151BFF28: lw          $t8, 0x120($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X120);
            goto L_151BFF38;
    }
    goto skip_1;
    // 0x151BFF28: lw          $t8, 0x120($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X120);
    skip_1:
    // 0x151BFF2C: jal         0x151C0644
    // 0x151BFF30: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    func_151C0644(rdram, ctx);
        goto after_5;
    // 0x151BFF30: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    after_5:
L_151BFF34:
    // 0x151BFF34: lw          $t8, 0x120($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X120);
L_151BFF38:
    // 0x151BFF38: lbu         $t9, 0x12F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X12F);
    // 0x151BFF3C: beql        $t8, $zero, L_151BFF60
    if (ctx->r24 == 0) {
        // 0x151BFF40: lbu         $t0, 0x12F($sp)
        ctx->r8 = MEM_BU(ctx->r29, 0X12F);
            goto L_151BFF60;
    }
    goto skip_2;
    // 0x151BFF40: lbu         $t0, 0x12F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X12F);
    skip_2:
    // 0x151BFF44: beq         $t9, $zero, L_151BFF5C
    if (ctx->r25 == 0) {
        // 0x151BFF48: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_151BFF5C;
    }
    // 0x151BFF48: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x151BFF4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151BFF50: lbu         $a2, 0x133($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X133);
    // 0x151BFF54: jal         0x151C0360
    // 0x151BFF58: lw          $a3, 0x134($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X134);
    func_151C0360(rdram, ctx);
        goto after_6;
    // 0x151BFF58: lw          $a3, 0x134($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X134);
    after_6:
L_151BFF5C:
    // 0x151BFF5C: lbu         $t0, 0x12F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X12F);
L_151BFF60:
    // 0x151BFF60: lw          $t1, 0x120($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X120);
    // 0x151BFF64: beql        $t0, $zero, L_151C0088
    if (ctx->r8 == 0) {
        // 0x151BFF68: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151C0088;
    }
    goto skip_3;
    // 0x151BFF68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x151BFF6C: beq         $t1, $zero, L_151C0028
    if (ctx->r9 == 0) {
        // 0x151BFF70: lw          $v0, 0x128($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X128);
            goto L_151C0028;
    }
    // 0x151BFF70: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    // 0x151BFF74: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    // 0x151BFF78: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151BFF7C: addiu       $t2, $sp, 0x90
    ctx->r10 = ADD32(ctx->r29, 0X90);
    // 0x151BFF80: addiu       $t7, $sp, 0xB0
    ctx->r15 = ADD32(ctx->r29, 0XB0);
    // 0x151BFF84: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x151BFF88: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x151BFF8C: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x151BFF90: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151BFF94: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x151BFF98: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x151BFF9C: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x151BFFA0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151BFFA4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x151BFFA8: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x151BFFAC: lwl         $at, 0x0($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, 0X0);
    // 0x151BFFB0: lwr         $at, 0x3($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, 0X3);
    // 0x151BFFB4: swl         $at, 0x0($t2)
    do_swl(rdram, 0X0, ctx->r10, ctx->r1);
    // 0x151BFFB8: swr         $at, 0x3($t2)
    do_swr(rdram, 0X3, ctx->r10, ctx->r1);
    // 0x151BFFBC: lwl         $t5, 0x4($t1)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r9, 0X4);
    // 0x151BFFC0: lwr         $t5, 0x7($t1)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r9, 0X7);
    // 0x151BFFC4: swl         $t5, 0x4($t2)
    do_swl(rdram, 0X4, ctx->r10, ctx->r13);
    // 0x151BFFC8: swr         $t5, 0x7($t2)
    do_swr(rdram, 0X7, ctx->r10, ctx->r13);
    // 0x151BFFCC: lwl         $at, 0x8($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, 0X8);
    // 0x151BFFD0: lwr         $at, 0xB($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, 0XB);
    // 0x151BFFD4: swl         $at, 0x8($t2)
    do_swl(rdram, 0X8, ctx->r10, ctx->r1);
    // 0x151BFFD8: swr         $at, 0xB($t2)
    do_swr(rdram, 0XB, ctx->r10, ctx->r1);
    // 0x151BFFDC: lwl         $t5, 0xC($t1)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r9, 0XC);
    // 0x151BFFE0: lwr         $t5, 0xF($t1)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r9, 0XF);
    // 0x151BFFE4: swl         $t5, 0xC($t2)
    do_swl(rdram, 0XC, ctx->r10, ctx->r13);
    // 0x151BFFE8: swr         $t5, 0xF($t2)
    do_swr(rdram, 0XF, ctx->r10, ctx->r13);
    // 0x151BFFEC: lhu         $at, 0x10($t1)
    ctx->r1 = MEM_HU(ctx->r9, 0X10);
    // 0x151BFFF0: sh          $at, 0x10($t2)
    MEM_H(0X10, ctx->r10) = ctx->r1;
    // 0x151BFFF4: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151BFFF8: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151BFFFC: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x151C0000: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x151C0004: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151C0008: jal         0x151BFC40
    // 0x151C000C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    func_151BFC40(rdram, ctx);
        goto after_7;
    // 0x151C000C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    after_7:
    // 0x151C0010: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x151C0014: lbu         $a1, 0x133($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X133);
    // 0x151C0018: jal         0x1514FBFC
    // 0x151C001C: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    func_1514FBFC(rdram, ctx);
        goto after_8;
    // 0x151C001C: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    after_8:
    // 0x151C0020: b           L_151C0088
    // 0x151C0024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151C0088;
    // 0x151C0024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151C0028:
    // 0x151C0028: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151C002C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151C0030: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151C0034: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x151C0038: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x151C003C: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151C0040: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x151C0044: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x151C0048: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151C004C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x151C0050: jal         0x151BFC40
    // 0x151C0054: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_151BFC40(rdram, ctx);
        goto after_9;
    // 0x151C0054: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x151C0058: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151C005C: addiu       $t0, $sp, 0x38
    ctx->r8 = ADD32(ctx->r29, 0X38);
    // 0x151C0060: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x151C0064: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151C0068: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x151C006C: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x151C0070: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151C0074: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x151C0078: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    // 0x151C007C: jal         0x1514FB98
    // 0x151C0080: lbu         $a1, 0x133($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X133);
    func_1514FB98(rdram, ctx);
        goto after_10;
    // 0x151C0080: lbu         $a1, 0x133($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X133);
    after_10:
    // 0x151C0084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151C0088:
    // 0x151C0088: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151C008C: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    // 0x151C0090: jr          $ra
    // 0x151C0094: nop

    return;
    return;
    // 0x151C0094: nop

;}
RECOMP_FUNC void func_1504554C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504554C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15045550: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15045554: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15045558: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1504555C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15045560: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x15045564: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15045568: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1504556C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15045570: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15045574: nop

    // 0x15045578: bc1f        L_15045594
    if (!c1cs) {
        // 0x1504557C: nop
    
            goto L_15045594;
    }
    // 0x1504557C: nop

    // 0x15045580: lbu         $t6, 0x1C($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X1C);
    // 0x15045584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15045588: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x1504558C: b           L_15045700
    // 0x15045590: sb          $t7, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r15;
        goto L_15045700;
    // 0x15045590: sb          $t7, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r15;
L_15045594:
    // 0x15045594: lwc1        $f8, -0x72B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X72B4);
    // 0x15045598: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1504559C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x150455A0: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    // 0x150455A4: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x150455A8: jal         0x1510F800
    // 0x150455AC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x150455AC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x150455B0: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150455B4: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150455B8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150455BC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150455C0: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x150455C4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x150455C8: jal         0x150A4FA0
    // 0x150455CC: nop

    func_150A4FA0(rdram, ctx);
        goto after_1;
    // 0x150455CC: nop

    after_1:
    // 0x150455D0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x150455D4: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x150455D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150455DC: blez        $v0, L_15045648
    if (SIGNED(ctx->r2) <= 0) {
        // 0x150455E0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15045648;
    }
    // 0x150455E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150455E4: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x150455E8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150455EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150455F0: addiu       $v0, $v0, 0x3300
    ctx->r2 = ADD32(ctx->r2, 0X3300);
L_150455F4:
    // 0x150455F4: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x150455F8: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150455FC: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x15045600: nop

    // 0x15045604: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15045608: mul.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1504560C: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x15045610: nop

    // 0x15045614: bc1fl       L_1504563C
    if (!c1cs) {
        // 0x15045618: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_1504563C;
    }
    goto skip_0;
    // 0x15045618: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x1504561C: lwc1        $f16, 0x0($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X0);
    // 0x15045620: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x15045624: nop

    // 0x15045628: bc1fl       L_1504563C
    if (!c1cs) {
        // 0x1504562C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_1504563C;
    }
    goto skip_1;
    // 0x1504562C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x15045630: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x15045634: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x15045638: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_1504563C:
    // 0x1504563C: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15045640: bne         $at, $zero, L_150455F4
    if (ctx->r1 != 0) {
        // 0x15045644: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_150455F4;
    }
    // 0x15045644: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_15045648:
    // 0x15045648: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1504564C: beq         $a2, $at, L_150456F0
    if (ctx->r6 == ctx->r1) {
        // 0x15045650: sll         $t3, $a2, 4
        ctx->r11 = S32(ctx->r6 << 4);
            goto L_150456F0;
    }
    // 0x15045650: sll         $t3, $a2, 4
    ctx->r11 = S32(ctx->r6 << 4);
    // 0x15045654: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15045658: addiu       $t4, $t4, 0x3300
    ctx->r12 = ADD32(ctx->r12, 0X3300);
    // 0x1504565C: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x15045660: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x15045664: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x15045668: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1504566C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x15045670: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_15045674:
    // 0x15045674: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x15045678: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1504567C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x15045680: addu        $v0, $t5, $t0
    ctx->r2 = ADD32(ctx->r13, ctx->r8);
    // 0x15045684: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x15045688: sh          $t6, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r14;
    // 0x1504568C: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x15045690: sh          $t7, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r15;
    // 0x15045694: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x15045698: sh          $t8, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r24;
    // 0x1504569C: bne         $a0, $a2, L_15045674
    if (ctx->r4 != ctx->r6) {
        // 0x150456A0: addiu       $v1, $v1, 0x6
        ctx->r3 = ADD32(ctx->r3, 0X6);
            goto L_15045674;
    }
    // 0x150456A0: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x150456A4: lbu         $t9, 0x1C($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X1C);
    // 0x150456A8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x150456AC: sw          $zero, 0x18($a3)
    MEM_W(0X18, ctx->r7) = 0;
    // 0x150456B0: ori         $t2, $t9, 0x6
    ctx->r10 = ctx->r25 | 0X6;
    // 0x150456B4: sb          $t2, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r10;
    // 0x150456B8: sb          $t3, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = ctx->r11;
    // 0x150456BC: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x150456C0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150456C4: lwc1        $f18, 0x0($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X0);
    // 0x150456C8: ori         $t5, $t2, 0x2
    ctx->r13 = ctx->r10 | 0X2;
    // 0x150456CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150456D0: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x150456D4: nop

    // 0x150456D8: bc1f        L_150456E8
    if (!c1cs) {
        // 0x150456DC: nop
    
            goto L_150456E8;
    }
    // 0x150456DC: nop

    // 0x150456E0: b           L_15045700
    // 0x150456E4: sb          $t5, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r13;
        goto L_15045700;
    // 0x150456E4: sb          $t5, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r13;
L_150456E8:
    // 0x150456E8: b           L_15045700
    // 0x150456EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15045700;
    // 0x150456EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150456F0:
    // 0x150456F0: lbu         $t6, 0x1C($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X1C);
    // 0x150456F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150456F8: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x150456FC: sb          $t7, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r15;
L_15045700:
    // 0x15045700: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15045704: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15045708: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1504570C: jr          $ra
    // 0x15045710: nop

    return;
    return;
    // 0x15045710: nop

;}
RECOMP_FUNC void func_1506FC74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FC74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FC78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FC7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FC80: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FC84: jal         0x1519E6BC
    // 0x1506FC88: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_1519E6BC(rdram, ctx);
        goto after_0;
    // 0x1506FC88: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1506FC8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FC90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FC94: jr          $ra
    // 0x1506FC98: nop

    return;
    return;
    // 0x1506FC98: nop

;}
RECOMP_FUNC void func_15148DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15148DE0: lb          $v0, 0x2C($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2C);
    // 0x15148DE4: addiu       $t8, $zero, 0x1000
    ctx->r24 = ADD32(0, 0X1000);
    // 0x15148DE8: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x15148DEC: bne         $at, $zero, L_15148EEC
    if (ctx->r1 != 0) {
        // 0x15148DF0: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_15148EEC;
    }
    // 0x15148DF0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x15148DF4: sb          $t6, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r14;
    // 0x15148DF8: lb          $t7, 0x2C($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2C);
    // 0x15148DFC: lw          $a1, 0x98($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X98);
    // 0x15148E00: lw          $v1, 0x94($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X94);
    // 0x15148E04: div         $zero, $t8, $t7
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r15)));
    // 0x15148E08: lbu         $t1, 0x18($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X18);
    // 0x15148E0C: mflo        $a3
    ctx->r7 = lo;
    // 0x15148E10: andi        $t9, $a3, 0xFFFF
    ctx->r25 = ctx->r7 & 0XFFFF;
    // 0x15148E14: andi        $t2, $t1, 0x20
    ctx->r10 = ctx->r9 & 0X20;
    // 0x15148E18: lb          $a2, 0x2D($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X2D);
    // 0x15148E1C: bne         $t7, $zero, L_15148E28
    if (ctx->r15 != 0) {
        // 0x15148E20: nop
    
            goto L_15148E28;
    }
    // 0x15148E20: nop

    // 0x15148E24: break       7
    do_break(353668644);
L_15148E28:
    // 0x15148E28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15148E2C: bne         $t7, $at, L_15148E40
    if (ctx->r15 != ctx->r1) {
        // 0x15148E30: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15148E40;
    }
    // 0x15148E30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15148E34: bne         $t8, $at, L_15148E40
    if (ctx->r24 != ctx->r1) {
        // 0x15148E38: nop
    
            goto L_15148E40;
    }
    // 0x15148E38: nop

    // 0x15148E3C: break       6
    do_break(353668668);
L_15148E40:
    // 0x15148E40: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x15148E44: beq         $t2, $zero, L_15148E54
    if (ctx->r10 == 0) {
        // 0x15148E48: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15148E54;
    }
    // 0x15148E48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15148E4C: b           L_15148E54
    // 0x15148E50: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
        goto L_15148E54;
    // 0x15148E50: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
L_15148E54:
    // 0x15148E54: lb          $t3, 0x2E($a0)
    ctx->r11 = MEM_B(ctx->r4, 0X2E);
    // 0x15148E58: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x15148E5C: sb          $t4, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r12;
    // 0x15148E60: lb          $t0, 0x2E($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X2E);
    // 0x15148E64: bgez        $t0, L_15148E7C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x15148E68: nop
    
            goto L_15148E7C;
    }
    // 0x15148E68: nop

    // 0x15148E6C: lbu         $t5, 0x25($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X25);
    // 0x15148E70: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x15148E74: sb          $t6, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r14;
    // 0x15148E78: lb          $t0, 0x2E($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X2E);
L_15148E7C:
    // 0x15148E7C: beq         $a2, $t0, L_15148EE4
    if (ctx->r6 == ctx->r8) {
        // 0x15148E80: or          $t0, $a3, $zero
        ctx->r8 = ctx->r7 | 0;
            goto L_15148EE4;
    }
    // 0x15148E80: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x15148E84: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
L_15148E88:
    // 0x15148E88: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15148E8C: mflo        $t8
    ctx->r24 = lo;
    // 0x15148E90: addu        $t7, $v1, $t8
    ctx->r15 = ADD32(ctx->r3, ctx->r24);
    // 0x15148E94: sh          $v0, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r2;
    // 0x15148E98: lbu         $t9, 0x18($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X18);
    // 0x15148E9C: andi        $t1, $t9, 0x20
    ctx->r9 = ctx->r25 & 0X20;
    // 0x15148EA0: beql        $t1, $zero, L_15148EBC
    if (ctx->r9 == 0) {
        // 0x15148EA4: addu        $v0, $v0, $t0
        ctx->r2 = ADD32(ctx->r2, ctx->r8);
            goto L_15148EBC;
    }
    goto skip_0;
    // 0x15148EA4: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    skip_0:
    // 0x15148EA8: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x15148EAC: andi        $t2, $v0, 0xFFFF
    ctx->r10 = ctx->r2 & 0XFFFF;
    // 0x15148EB0: b           L_15148EC4
    // 0x15148EB4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_15148EC4;
    // 0x15148EB4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x15148EB8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
L_15148EBC:
    // 0x15148EBC: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x15148EC0: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_15148EC4:
    // 0x15148EC4: lbu         $t4, 0x25($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X25);
    // 0x15148EC8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x15148ECC: bnel        $a2, $t4, L_15148EDC
    if (ctx->r6 != ctx->r12) {
        // 0x15148ED0: lb          $t5, 0x2E($a0)
        ctx->r13 = MEM_B(ctx->r4, 0X2E);
            goto L_15148EDC;
    }
    goto skip_1;
    // 0x15148ED0: lb          $t5, 0x2E($a0)
    ctx->r13 = MEM_B(ctx->r4, 0X2E);
    skip_1:
    // 0x15148ED4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15148ED8: lb          $t5, 0x2E($a0)
    ctx->r13 = MEM_B(ctx->r4, 0X2E);
L_15148EDC:
    // 0x15148EDC: bne         $a2, $t5, L_15148E88
    if (ctx->r6 != ctx->r13) {
        // 0x15148EE0: nop
    
            goto L_15148E88;
    }
    // 0x15148EE0: nop

L_15148EE4:
    // 0x15148EE4: jr          $ra
    // 0x15148EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15148EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15148EEC:
    // 0x15148EEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15148EF0: jr          $ra
    // 0x15148EF4: nop

    return;
    return;
    // 0x15148EF4: nop

;}
RECOMP_FUNC void func_1000C530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000C530: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1000C534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000C538: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x1000C53C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x1000C540: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x1000C544: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x1000C548: lw          $a2, 0x1F08($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1F08);
    // 0x1000C54C: srl         $v0, $a0, 2
    ctx->r2 = S32(U32(ctx->r4) >> 2);
    // 0x1000C550: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x1000C554: srl         $a3, $a0, 8
    ctx->r7 = S32(U32(ctx->r4) >> 8);
    // 0x1000C558: srl         $t1, $a0, 16
    ctx->r9 = S32(U32(ctx->r4) >> 16);
    // 0x1000C55C: andi        $v1, $a0, 0x3
    ctx->r3 = ctx->r4 & 0X3;
    // 0x1000C560: andi        $t6, $v0, 0x3F
    ctx->r14 = ctx->r2 & 0X3F;
    // 0x1000C564: and         $t0, $a0, $at
    ctx->r8 = ctx->r4 & ctx->r1;
    // 0x1000C568: andi        $t8, $t1, 0xFF
    ctx->r24 = ctx->r9 & 0XFF;
    // 0x1000C56C: andi        $t2, $a3, 0xFF
    ctx->r10 = ctx->r7 & 0XFF;
    // 0x1000C570: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x1000C574: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x1000C578: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1000C57C: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x1000C580: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x1000C584: beq         $a2, $zero, L_1000C5C8
    if (ctx->r6 == 0) {
        // 0x1000C588: sw          $t8, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r24;
            goto L_1000C5C8;
    }
    // 0x1000C588: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x1000C58C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1000C590: bne         $v1, $a0, L_1000C5A8
    if (ctx->r3 != ctx->r4) {
        // 0x1000C594: lui         $v0, 0x8004
        ctx->r2 = S32(0X8004 << 16);
            goto L_1000C5A8;
    }
    // 0x1000C594: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000C598: beq         $t6, $zero, L_1000C5A8
    if (ctx->r14 == 0) {
        // 0x1000C59C: nop
    
            goto L_1000C5A8;
    }
    // 0x1000C59C: nop

    // 0x1000C5A0: bnel        $a0, $a2, L_1000C5CC
    if (ctx->r4 != ctx->r6) {
        // 0x1000C5A4: lw          $t5, 0x4C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X4C);
            goto L_1000C5CC;
    }
    goto skip_0;
    // 0x1000C5A4: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    skip_0:
L_1000C5A8:
    // 0x1000C5A8: lw          $v0, 0x1F0C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1F0C);
    // 0x1000C5AC: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x1000C5B0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1000C5B4: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x1000C5B8: sra         $t3, $v0, 8
    ctx->r11 = S32(SIGNED(ctx->r2) >> 8);
    // 0x1000C5BC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x1000C5C0: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x1000C5C4: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
L_1000C5C8:
    // 0x1000C5C8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
L_1000C5CC:
    // 0x1000C5CC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1000C5D0: beql        $t5, $zero, L_1000C5F4
    if (ctx->r13 == 0) {
        // 0x1000C5D4: lw          $t8, 0x50($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X50);
            goto L_1000C5F4;
    }
    goto skip_1;
    // 0x1000C5D4: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    skip_1:
    // 0x1000C5D8: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x1000C5DC: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x1000C5E0: bgtz        $t7, L_1000C5F0
    if (SIGNED(ctx->r15) > 0) {
        // 0x1000C5E4: sw          $t7, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r15;
            goto L_1000C5F0;
    }
    // 0x1000C5E4: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x1000C5E8: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x1000C5EC: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
L_1000C5F0:
    // 0x1000C5F0: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
L_1000C5F4:
    // 0x1000C5F4: beq         $t8, $v1, L_1000C670
    if (ctx->r24 == ctx->r3) {
        // 0x1000C5F8: nop
    
            goto L_1000C670;
    }
    // 0x1000C5F8: nop

    // 0x1000C5FC: beq         $v1, $zero, L_1000C614
    if (ctx->r3 == 0) {
        // 0x1000C600: lbu         $a0, 0x5F($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X5F);
            goto L_1000C614;
    }
    // 0x1000C600: lbu         $a0, 0x5F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5F);
    // 0x1000C604: addiu       $a1, $v1, 0x9
    ctx->r5 = ADD32(ctx->r3, 0X9);
    // 0x1000C608: jal         0x100085F8
    // 0x1000C60C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    func_100085F8(rdram, ctx);
        goto after_0;
    // 0x1000C60C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_0:
    // 0x1000C610: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
L_1000C614:
    // 0x1000C614: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x1000C618: lbu         $a0, 0x5F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5F);
    // 0x1000C61C: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x1000C620: beq         $t9, $zero, L_1000C724
    if (ctx->r25 == 0) {
        // 0x1000C624: addiu       $a1, $t9, 0x9
        ctx->r5 = ADD32(ctx->r25, 0X9);
            goto L_1000C724;
    }
    // 0x1000C624: addiu       $a1, $t9, 0x9
    ctx->r5 = ADD32(ctx->r25, 0X9);
    // 0x1000C628: andi        $t3, $a1, 0xFF
    ctx->r11 = ctx->r5 & 0XFF;
    // 0x1000C62C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x1000C630: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x1000C634: jal         0x10008824
    // 0x1000C638: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    func_10008824(rdram, ctx);
        goto after_1;
    // 0x1000C638: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_1:
    // 0x1000C63C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x1000C640: lbu         $a0, 0x5F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5F);
    // 0x1000C644: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x1000C648: sra         $t4, $a2, 7
    ctx->r12 = S32(SIGNED(ctx->r6) >> 7);
    // 0x1000C64C: jal         0x100086FC
    // 0x1000C650: andi        $a2, $t4, 0xFF
    ctx->r6 = ctx->r12 & 0XFF;
    func_100086FC(rdram, ctx);
        goto after_2;
    // 0x1000C650: andi        $a2, $t4, 0xFF
    ctx->r6 = ctx->r12 & 0XFF;
    after_2:
    // 0x1000C654: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x1000C658: lbu         $a0, 0x5F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5F);
    // 0x1000C65C: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x1000C660: jal         0x10008744
    // 0x1000C664: andi        $a2, $t6, 0x7F
    ctx->r6 = ctx->r14 & 0X7F;
    func_10008744(rdram, ctx);
        goto after_3;
    // 0x1000C664: andi        $a2, $t6, 0x7F
    ctx->r6 = ctx->r14 & 0X7F;
    after_3:
    // 0x1000C668: b           L_1000C724
    // 0x1000C66C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
        goto L_1000C724;
    // 0x1000C66C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
L_1000C670:
    // 0x1000C670: beq         $v1, $zero, L_1000C724
    if (ctx->r3 == 0) {
        // 0x1000C674: nop
    
            goto L_1000C724;
    }
    // 0x1000C674: nop

    // 0x1000C678: beq         $a2, $zero, L_1000C724
    if (ctx->r6 == 0) {
        // 0x1000C67C: lui         $t8, 0x8004
        ctx->r24 = S32(0X8004 << 16);
            goto L_1000C724;
    }
    // 0x1000C67C: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x1000C680: lw          $t8, 0x1F0C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F0C);
    // 0x1000C684: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1000C688: beq         $a3, $t8, L_1000C724
    if (ctx->r7 == ctx->r24) {
        // 0x1000C68C: nop
    
            goto L_1000C724;
    }
    // 0x1000C68C: nop

    // 0x1000C690: beq         $t9, $t2, L_1000C6BC
    if (ctx->r25 == ctx->r10) {
        // 0x1000C694: lbu         $a0, 0x5F($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X5F);
            goto L_1000C6BC;
    }
    // 0x1000C694: lbu         $a0, 0x5F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5F);
    // 0x1000C698: addiu       $a1, $v1, 0x9
    ctx->r5 = ADD32(ctx->r3, 0X9);
    // 0x1000C69C: andi        $t3, $a1, 0xFF
    ctx->r11 = ctx->r5 & 0XFF;
    // 0x1000C6A0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x1000C6A4: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x1000C6A8: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x1000C6AC: jal         0x10008824
    // 0x1000C6B0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_10008824(rdram, ctx);
        goto after_4;
    // 0x1000C6B0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_4:
    // 0x1000C6B4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x1000C6B8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
L_1000C6BC:
    // 0x1000C6BC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x1000C6C0: beq         $t4, $t1, L_1000C724
    if (ctx->r12 == ctx->r9) {
        // 0x1000C6C4: xor         $t5, $t4, $t1
        ctx->r13 = ctx->r12 ^ ctx->r9;
            goto L_1000C724;
    }
    // 0x1000C6C4: xor         $t5, $t4, $t1
    ctx->r13 = ctx->r12 ^ ctx->r9;
    // 0x1000C6C8: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x1000C6CC: beq         $t6, $zero, L_1000C6FC
    if (ctx->r14 == 0) {
        // 0x1000C6D0: lbu         $a0, 0x5F($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X5F);
            goto L_1000C6FC;
    }
    // 0x1000C6D0: lbu         $a0, 0x5F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5F);
    // 0x1000C6D4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x1000C6D8: sra         $a2, $t4, 7
    ctx->r6 = S32(SIGNED(ctx->r12) >> 7);
    // 0x1000C6DC: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x1000C6E0: addiu       $a1, $a1, 0x9
    ctx->r5 = ADD32(ctx->r5, 0X9);
    // 0x1000C6E4: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x1000C6E8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x1000C6EC: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x1000C6F0: jal         0x100086FC
    // 0x1000C6F4: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    func_100086FC(rdram, ctx);
        goto after_5;
    // 0x1000C6F4: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_5:
    // 0x1000C6F8: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
L_1000C6FC:
    // 0x1000C6FC: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x1000C700: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x1000C704: lbu         $a0, 0x5F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5F);
    // 0x1000C708: addiu       $a1, $a1, 0x9
    ctx->r5 = ADD32(ctx->r5, 0X9);
    // 0x1000C70C: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x1000C710: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x1000C714: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x1000C718: jal         0x10008744
    // 0x1000C71C: andi        $a2, $t3, 0x7F
    ctx->r6 = ctx->r11 & 0X7F;
    func_10008744(rdram, ctx);
        goto after_6;
    // 0x1000C71C: andi        $a2, $t3, 0x7F
    ctx->r6 = ctx->r11 & 0X7F;
    after_6:
    // 0x1000C720: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
L_1000C724:
    // 0x1000C724: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000C728: addiu       $v1, $v1, 0x1F04
    ctx->r3 = ADD32(ctx->r3, 0X1F04);
    // 0x1000C72C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1000C730: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x1000C734: beq         $t6, $zero, L_1000C764
    if (ctx->r14 == 0) {
        // 0x1000C738: nop
    
            goto L_1000C764;
    }
    // 0x1000C738: nop

    // 0x1000C73C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x1000C740: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x1000C744: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x1000C748: bne         $t4, $zero, L_1000C760
    if (ctx->r12 != 0) {
        // 0x1000C74C: sw          $t7, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r15;
            goto L_1000C760;
    }
    // 0x1000C74C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x1000C750: lbu         $a0, 0x5F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5F);
    // 0x1000C754: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x1000C758: jal         0x1000886C
    // 0x1000C75C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_1000886C(rdram, ctx);
        goto after_7;
    // 0x1000C75C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_7:
L_1000C760:
    // 0x1000C760: lui         $t0, 0xFF00
    ctx->r8 = S32(0XFF00 << 16);
L_1000C764:
    // 0x1000C764: beq         $t0, $zero, L_1000C7A4
    if (ctx->r8 == 0) {
        // 0x1000C768: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_1000C7A4;
    }
    // 0x1000C768: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1000C76C: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x1000C770: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x1000C774: lbu         $a0, 0x5F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5F);
    // 0x1000C778: sll         $t8, $v0, 23
    ctx->r24 = S32(ctx->r2 << 23);
    // 0x1000C77C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x1000C780: sltu        $at, $t9, $t0
    ctx->r1 = ctx->r25 < ctx->r8 ? 1 : 0;
    // 0x1000C784: beq         $at, $zero, L_1000C794
    if (ctx->r1 == 0) {
        // 0x1000C788: addiu       $a1, $zero, 0xC0
        ctx->r5 = ADD32(0, 0XC0);
            goto L_1000C794;
    }
    // 0x1000C788: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x1000C78C: b           L_1000C7A4
    // 0x1000C790: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
        goto L_1000C7A4;
    // 0x1000C790: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
L_1000C794:
    // 0x1000C794: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1000C798: jal         0x10008790
    // 0x1000C79C: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    func_10008790(rdram, ctx);
        goto after_8;
    // 0x1000C79C: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    after_8:
    // 0x1000C7A0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_1000C7A4:
    // 0x1000C7A4: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x1000C7A8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x1000C7AC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x1000C7B0: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x1000C7B4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x1000C7B8: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x1000C7BC: sll         $t8, $t4, 8
    ctx->r24 = S32(ctx->r12 << 8);
    // 0x1000C7C0: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x1000C7C4: sll         $t5, $t3, 16
    ctx->r13 = S32(ctx->r11 << 16);
    // 0x1000C7C8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000C7CC: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x1000C7D0: sw          $zero, 0x1F08($at)
    MEM_W(0X1F08, ctx->r1) = 0;
    // 0x1000C7D4: or          $v0, $t6, $t0
    ctx->r2 = ctx->r14 | ctx->r8;
    // 0x1000C7D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000C7DC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x1000C7E0: jr          $ra
    // 0x1000C7E4: nop

    return;
    return;
    // 0x1000C7E4: nop

;}
RECOMP_FUNC void func_1507A878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A878: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507A87C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507A880: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507A884: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1507A888: lbu         $a2, 0x1891($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1891);
    // 0x1507A88C: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    // 0x1507A890: jal         0x1512D748
    // 0x1507A894: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1512D748(rdram, ctx);
        goto after_0;
    // 0x1507A894: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x1507A898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507A89C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507A8A0: jr          $ra
    // 0x1507A8A4: nop

    return;
    return;
    // 0x1507A8A4: nop

;}
RECOMP_FUNC void func_151D2F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D2F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D2F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D2F98: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x151D2F9C: lbu         $v1, 0x18($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X18);
    // 0x151D2FA0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x151D2FA4: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x151D2FA8: andi        $t6, $a1, 0x2
    ctx->r14 = ctx->r5 & 0X2;
    // 0x151D2FAC: beq         $t7, $zero, L_151D2FD4
    if (ctx->r15 == 0) {
        // 0x151D2FB0: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_151D2FD4;
    }
    // 0x151D2FB0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x151D2FB4: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x151D2FB8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151D2FBC: beq         $t8, $at, L_151D2FD4
    if (ctx->r24 == ctx->r1) {
        // 0x151D2FC0: nop
    
            goto L_151D2FD4;
    }
    // 0x151D2FC0: nop

    // 0x151D2FC4: lbu         $t9, 0x14($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X14);
    // 0x151D2FC8: lbu         $t0, 0x3B($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3B);
    // 0x151D2FCC: beql        $t9, $t0, L_151D2FE8
    if (ctx->r25 == ctx->r8) {
        // 0x151D2FD0: lw          $t1, 0x1D4($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X1D4);
            goto L_151D2FE8;
    }
    goto skip_0;
    // 0x151D2FD0: lw          $t1, 0x1D4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1D4);
    skip_0:
L_151D2FD4:
    // 0x151D2FD4: jal         0x1516972C
    // 0x151D2FD8: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151D2FD8: nop

    after_0:
    // 0x151D2FDC: b           L_151D3124
    // 0x151D2FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151D3124;
    // 0x151D2FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D2FE4: lw          $t1, 0x1D4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1D4);
L_151D2FE8:
    // 0x151D2FE8: andi        $t5, $v1, 0xFFFD
    ctx->r13 = ctx->r3 & 0XFFFD;
    // 0x151D2FEC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151D2FF0: beql        $t1, $zero, L_151D301C
    if (ctx->r9 == 0) {
        // 0x151D2FF4: sb          $t5, 0x18($a0)
        MEM_B(0X18, ctx->r4) = ctx->r13;
            goto L_151D301C;
    }
    goto skip_1;
    // 0x151D2FF4: sb          $t5, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r13;
    skip_1:
    // 0x151D2FF8: lbu         $t2, 0x74($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X74);
    // 0x151D2FFC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151D3000: ori         $t4, $v1, 0x2
    ctx->r12 = ctx->r3 | 0X2;
    // 0x151D3004: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x151D3008: beql        $t3, $at, L_151D301C
    if (ctx->r11 == ctx->r1) {
        // 0x151D300C: sb          $t5, 0x18($a0)
        MEM_B(0X18, ctx->r4) = ctx->r13;
            goto L_151D301C;
    }
    goto skip_2;
    // 0x151D300C: sb          $t5, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r13;
    skip_2:
    // 0x151D3010: b           L_151D301C
    // 0x151D3014: sb          $t4, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r12;
        goto L_151D301C;
    // 0x151D3014: sb          $t4, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r12;
    // 0x151D3018: sb          $t5, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r13;
L_151D301C:
    // 0x151D301C: lbu         $t6, 0x18($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X18);
    // 0x151D3020: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151D3024: beql        $t7, $zero, L_151D3088
    if (ctx->r15 == 0) {
        // 0x151D3028: lbu         $t3, 0x18($a0)
        ctx->r11 = MEM_BU(ctx->r4, 0X18);
            goto L_151D3088;
    }
    goto skip_3;
    // 0x151D3028: lbu         $t3, 0x18($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X18);
    skip_3:
    // 0x151D302C: lh          $t8, 0x16($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X16);
    // 0x151D3030: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x151D3034: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x151D3038: sh          $t0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r8;
    // 0x151D303C: lh          $t1, 0x16($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X16);
    // 0x151D3040: bgezl       $t1, L_151D3088
    if (SIGNED(ctx->r9) >= 0) {
        // 0x151D3044: lbu         $t3, 0x18($a0)
        ctx->r11 = MEM_BU(ctx->r4, 0X18);
            goto L_151D3088;
    }
    goto skip_4;
    // 0x151D3044: lbu         $t3, 0x18($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X18);
    skip_4:
    // 0x151D3048: lb          $v0, 0x1C($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X1C);
    // 0x151D304C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151D3050: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151D3054: beq         $v0, $at, L_151D3074
    if (ctx->r2 == ctx->r1) {
        // 0x151D3058: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_151D3074;
    }
    // 0x151D3058: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x151D305C: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x151D3060: lw          $t9, -0x3A8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A8);
    // 0x151D3064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D3068: jalr        $t9
    // 0x151D306C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x151D306C: nop

    after_1:
    // 0x151D3070: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_151D3074:
    // 0x151D3074: jal         0x1516972C
    // 0x151D3078: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x151D3078: nop

    after_2:
    // 0x151D307C: b           L_151D3124
    // 0x151D3080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151D3124;
    // 0x151D3080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D3084: lbu         $t3, 0x18($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X18);
L_151D3088:
    // 0x151D3088: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x151D308C: beql        $t4, $a1, L_151D30EC
    if (ctx->r12 == ctx->r5) {
        // 0x151D3090: lb          $v0, 0x19($a0)
        ctx->r2 = MEM_B(ctx->r4, 0X19);
            goto L_151D30EC;
    }
    goto skip_5;
    // 0x151D3090: lb          $v0, 0x19($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X19);
    skip_5:
    // 0x151D3094: beql        $t4, $zero, L_151D30C8
    if (ctx->r12 == 0) {
        // 0x151D3098: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_151D30C8;
    }
    goto skip_6;
    // 0x151D3098: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    skip_6:
    // 0x151D309C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D30A0: lb          $t5, 0x1A($a0)
    ctx->r13 = MEM_B(ctx->r4, 0X1A);
    // 0x151D30A4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151D30A8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x151D30AC: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x151D30B0: lw          $t9, -0x3B0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3B0);
    // 0x151D30B4: jalr        $t9
    // 0x151D30B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x151D30B8: nop

    after_3:
    // 0x151D30BC: b           L_151D30E8
    // 0x151D30C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
        goto L_151D30E8;
    // 0x151D30C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151D30C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
L_151D30C8:
    // 0x151D30C8: lb          $t7, 0x1B($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X1B);
    // 0x151D30CC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151D30D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151D30D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151D30D8: lw          $t9, -0x3AC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3AC);
    // 0x151D30DC: jalr        $t9
    // 0x151D30E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x151D30E0: nop

    after_4:
    // 0x151D30E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_151D30E8:
    // 0x151D30E8: lb          $v0, 0x19($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X19);
L_151D30EC:
    // 0x151D30EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151D30F0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151D30F4: beq         $v0, $at, L_151D3120
    if (ctx->r2 == ctx->r1) {
        // 0x151D30F8: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_151D3120;
    }
    // 0x151D30F8: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x151D30FC: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x151D3100: lw          $t9, -0x3B4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3B4);
    // 0x151D3104: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D3108: jalr        $t9
    // 0x151D310C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x151D310C: nop

    after_5:
    // 0x151D3110: bne         $v0, $zero, L_151D3120
    if (ctx->r2 != 0) {
        // 0x151D3114: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_151D3120;
    }
    // 0x151D3114: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151D3118: jal         0x1516972C
    // 0x151D311C: nop

    func_1516972C(rdram, ctx);
        goto after_6;
    // 0x151D311C: nop

    after_6:
L_151D3120:
    // 0x151D3120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D3124:
    // 0x151D3124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D3128: jr          $ra
    // 0x151D312C: nop

    return;
    return;
    // 0x151D312C: nop

;}
RECOMP_FUNC void func_1508E6C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508E6C8: jr          $ra
    // 0x1508E6CC: nop

    return;
    return;
    // 0x1508E6CC: nop

;}
RECOMP_FUNC void func_151B9660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B9660: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151B9664: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B9668: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B966C: swc1        $f4, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->f4.u32l;
    // 0x151B9670: lwc1        $f6, -0x5A94($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5A94);
    // 0x151B9674: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B9678: swc1        $f6, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = ctx->f6.u32l;
    // 0x151B967C: lwc1        $f8, -0x5A90($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5A90);
    // 0x151B9680: swc1        $f8, 0x190($a0)
    MEM_W(0X190, ctx->r4) = ctx->f8.u32l;
    // 0x151B9684: jr          $ra
    // 0x151B9688: nop

    return;
    return;
    // 0x151B9688: nop

;}
RECOMP_FUNC void func_150BEEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BEEB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150BEEB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150BEEB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150BEEBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150BEEC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150BEEC4: addiu       $a1, $zero, 0x4063
    ctx->r5 = ADD32(0, 0X4063);
    // 0x150BEEC8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150BEECC: jal         0x1509BE40
    // 0x150BEED0: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x150BEED0: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_0:
    // 0x150BEED4: bne         $v0, $zero, L_150BEEF4
    if (ctx->r2 != 0) {
        // 0x150BEED8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150BEEF4;
    }
    // 0x150BEED8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150BEEDC: addiu       $a1, $zero, 0x4001
    ctx->r5 = ADD32(0, 0X4001);
    // 0x150BEEE0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150BEEE4: jal         0x1509BE40
    // 0x150BEEE8: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_1;
    // 0x150BEEE8: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_1:
    // 0x150BEEEC: beql        $v0, $zero, L_150BEF08
    if (ctx->r2 == 0) {
        // 0x150BEEF0: lw          $t8, 0x84($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X84);
            goto L_150BEF08;
    }
    goto skip_0;
    // 0x150BEEF0: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    skip_0:
L_150BEEF4:
    // 0x150BEEF4: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x150BEEF8: ori         $t7, $t6, 0x1010
    ctx->r15 = ctx->r14 | 0X1010;
    // 0x150BEEFC: b           L_150BEF14
    // 0x150BEF00: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
        goto L_150BEF14;
    // 0x150BEF00: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x150BEF04: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
L_150BEF08:
    // 0x150BEF08: addiu       $at, $zero, -0x1011
    ctx->r1 = ADD32(0, -0X1011);
    // 0x150BEF0C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x150BEF10: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
L_150BEF14:
    // 0x150BEF14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150BEF18: addiu       $a1, $zero, 0x4069
    ctx->r5 = ADD32(0, 0X4069);
    // 0x150BEF1C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150BEF20: jal         0x1509BE40
    // 0x150BEF24: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_2;
    // 0x150BEF24: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_2:
    // 0x150BEF28: beql        $v0, $zero, L_150BEF48
    if (ctx->r2 == 0) {
        // 0x150BEF2C: lw          $t2, 0x84($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X84);
            goto L_150BEF48;
    }
    goto skip_1;
    // 0x150BEF2C: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    skip_1:
    // 0x150BEF30: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    // 0x150BEF34: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x150BEF38: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x150BEF3C: b           L_150BEF58
    // 0x150BEF40: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
        goto L_150BEF58;
    // 0x150BEF40: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    // 0x150BEF44: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
L_150BEF48:
    // 0x150BEF48: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x150BEF4C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150BEF50: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x150BEF54: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
L_150BEF58:
    // 0x150BEF58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150BEF5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150BEF60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150BEF64: jr          $ra
    // 0x150BEF68: nop

    return;
    return;
    // 0x150BEF68: nop

;}
RECOMP_FUNC void func_150B7220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B7220: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x150B7224: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150B7228: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150B722C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150B7230: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x150B7234: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150B7238: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150B723C: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x150B7240: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150B7244: lw          $v0, -0x19C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19C8);
    // 0x150B7248: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150B724C: sll         $v1, $s0, 16
    ctx->r3 = S32(ctx->r16 << 16);
    // 0x150B7250: andi        $t0, $s2, 0xFFFF
    ctx->r8 = ctx->r18 & 0XFFFF;
    // 0x150B7254: addiu       $t9, $zero, 0x1000
    ctx->r25 = ADD32(0, 0X1000);
    // 0x150B7258: addiu       $t6, $t6, 0x1924
    ctx->r14 = ADD32(ctx->r14, 0X1924);
    // 0x150B725C: or          $t7, $v1, $t0
    ctx->r15 = ctx->r3 | ctx->r8;
    // 0x150B7260: addiu       $t8, $zero, 0x1000
    ctx->r24 = ADD32(0, 0X1000);
    // 0x150B7264: sh          $t9, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r25;
    // 0x150B7268: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x150B726C: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x150B7270: sh          $t8, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r24;
    // 0x150B7274: sra         $t9, $v0, 1
    ctx->r25 = S32(SIGNED(ctx->r2) >> 1);
    // 0x150B7278: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x150B727C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x150B7280: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x150B7284: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x150B7288: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150B728C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150B7290: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x150B7294: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x150B7298: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x150B729C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x150B72A0: sh          $a2, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r6;
    // 0x150B72A4: sh          $zero, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = 0;
    // 0x150B72A8: sh          $zero, 0x68($sp)
    MEM_H(0X68, ctx->r29) = 0;
    // 0x150B72AC: sh          $zero, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = 0;
    // 0x150B72B0: sh          $t1, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r9;
    // 0x150B72B4: sh          $t2, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r10;
    // 0x150B72B8: sb          $t3, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r11;
    // 0x150B72BC: sb          $t4, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r12;
    // 0x150B72C0: sb          $t5, 0x76($sp)
    MEM_B(0X76, ctx->r29) = ctx->r13;
    // 0x150B72C4: sb          $zero, 0x77($sp)
    MEM_B(0X77, ctx->r29) = 0;
    // 0x150B72C8: sb          $zero, 0x78($sp)
    MEM_B(0X78, ctx->r29) = 0;
    // 0x150B72CC: sb          $t6, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r14;
    // 0x150B72D0: sb          $t7, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = ctx->r15;
    // 0x150B72D4: beq         $at, $zero, L_150B72E4
    if (ctx->r1 == 0) {
        // 0x150B72D8: sb          $t8, 0x7B($sp)
        MEM_B(0X7B, ctx->r29) = ctx->r24;
            goto L_150B72E4;
    }
    // 0x150B72D8: sb          $t8, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r24;
    // 0x150B72DC: b           L_150B72E8
    // 0x150B72E0: subu        $s1, $v0, $s0
    ctx->r17 = SUB32(ctx->r2, ctx->r16);
        goto L_150B72E8;
    // 0x150B72E0: subu        $s1, $v0, $s0
    ctx->r17 = SUB32(ctx->r2, ctx->r16);
L_150B72E4:
    // 0x150B72E4: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_150B72E8:
    // 0x150B72E8: subu        $v0, $s2, $s1
    ctx->r2 = SUB32(ctx->r18, ctx->r17);
    // 0x150B72EC: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x150B72F0: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x150B72F4: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x150B72F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B72FC: or          $t2, $v1, $t1
    ctx->r10 = ctx->r3 | ctx->r9;
    // 0x150B7300: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x150B7304: sb          $zero, 0x7D($sp)
    MEM_B(0X7D, ctx->r29) = 0;
    // 0x150B7308: sh          $zero, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = 0;
    // 0x150B730C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B7310: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x150B7314: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x150B7318: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x150B731C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x150B7320: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x150B7324: jal         0x15169900
    // 0x150B7328: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    func_15169900(rdram, ctx);
        goto after_0;
    // 0x150B7328: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x150B732C: addu        $v0, $s2, $s1
    ctx->r2 = ADD32(ctx->r18, ctx->r17);
    // 0x150B7330: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x150B7334: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x150B7338: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x150B733C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150B7340: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x150B7344: or          $t4, $v1, $t3
    ctx->r12 = ctx->r3 | ctx->r11;
    // 0x150B7348: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
    // 0x150B734C: sb          $t5, 0x7D($sp)
    MEM_B(0X7D, ctx->r29) = ctx->r13;
    // 0x150B7350: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x150B7354: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x150B7358: jal         0x15169900
    // 0x150B735C: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    func_15169900(rdram, ctx);
        goto after_1;
    // 0x150B735C: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    after_1:
    // 0x150B7360: subu        $v0, $s0, $s1
    ctx->r2 = SUB32(ctx->r16, ctx->r17);
    // 0x150B7364: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x150B7368: mtc1        $s2, $f8
    ctx->f8.u32l = ctx->r18;
    // 0x150B736C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x150B7370: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B7374: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x150B7378: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x150B737C: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x150B7380: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x150B7384: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B7388: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x150B738C: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x150B7390: sb          $t9, 0x7D($sp)
    MEM_B(0X7D, ctx->r29) = ctx->r25;
    // 0x150B7394: sh          $t1, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r9;
    // 0x150B7398: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x150B739C: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x150B73A0: jal         0x15169900
    // 0x150B73A4: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    func_15169900(rdram, ctx);
        goto after_2;
    // 0x150B73A4: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    after_2:
    // 0x150B73A8: addu        $v0, $s0, $s1
    ctx->r2 = ADD32(ctx->r16, ctx->r17);
    // 0x150B73AC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x150B73B0: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x150B73B4: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x150B73B8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150B73BC: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x150B73C0: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
    // 0x150B73C4: sb          $zero, 0x7D($sp)
    MEM_B(0X7D, ctx->r29) = 0;
    // 0x150B73C8: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x150B73CC: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x150B73D0: jal         0x15169900
    // 0x150B73D4: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    func_15169900(rdram, ctx);
        goto after_3;
    // 0x150B73D4: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x150B73D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150B73DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150B73E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150B73E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150B73E8: jr          $ra
    // 0x150B73EC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x150B73EC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_151317C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151317C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151317CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151317D0: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x151317D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151317D8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151317DC: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x151317E0: beq         $t7, $zero, L_151317F0
    if (ctx->r15 == 0) {
        // 0x151317E4: nop
    
            goto L_151317F0;
    }
    // 0x151317E4: nop

    // 0x151317E8: b           L_151317F0
    // 0x151317EC: lbu         $v0, 0x75($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X75);
        goto L_151317F0;
    // 0x151317EC: lbu         $v0, 0x75($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X75);
L_151317F0:
    // 0x151317F0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x151317F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151317F8: lw          $t9, -0x67BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X67BC);
    // 0x151317FC: jalr        $t9
    // 0x15131800: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15131800: nop

    after_0:
    // 0x15131804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15131808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513180C: jr          $ra
    // 0x15131810: nop

    return;
    return;
    // 0x15131810: nop

;}
RECOMP_FUNC void func_151D4C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D4C38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D4C3C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x151D4C40: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x151D4C44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D4C48: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x151D4C4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151D4C50: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151D4C54: lbu         $v0, 0x33($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X33);
    // 0x151D4C58: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x151D4C5C: addiu       $a2, $s0, 0x28
    ctx->r6 = ADD32(ctx->r16, 0X28);
    // 0x151D4C60: bnel        $v0, $at, L_151D4C9C
    if (ctx->r2 != ctx->r1) {
        // 0x151D4C64: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_151D4C9C;
    }
    goto skip_0;
    // 0x151D4C64: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_0:
    // 0x151D4C68: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x151D4C6C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x151D4C70: beq         $t6, $t7, L_151D4C88
    if (ctx->r14 == ctx->r15) {
        // 0x151D4C74: nop
    
            goto L_151D4C88;
    }
    // 0x151D4C74: nop

    // 0x151D4C78: lbu         $t8, 0x4($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X4);
    // 0x151D4C7C: lbu         $t9, 0x4($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X4);
    // 0x151D4C80: bnel        $t8, $t9, L_151D4CF4
    if (ctx->r24 != ctx->r25) {
        // 0x151D4C84: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151D4CF4;
    }
    goto skip_1;
    // 0x151D4C84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
L_151D4C88:
    // 0x151D4C88: jal         0x1516972C
    // 0x151D4C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151D4C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x151D4C90: b           L_151D4CF4
    // 0x151D4C94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_151D4CF4;
    // 0x151D4C94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151D4C98: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_151D4C9C:
    // 0x151D4C9C: bne         $v0, $at, L_151D4CDC
    if (ctx->r2 != ctx->r1) {
        // 0x151D4CA0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_151D4CDC;
    }
    // 0x151D4CA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151D4CA4: addiu       $a2, $s0, 0x28
    ctx->r6 = ADD32(ctx->r16, 0X28);
    // 0x151D4CA8: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x151D4CAC: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x151D4CB0: beql        $t0, $t1, L_151D4CCC
    if (ctx->r8 == ctx->r9) {
        // 0x151D4CB4: lbu         $t4, 0x10($a2)
        ctx->r12 = MEM_BU(ctx->r6, 0X10);
            goto L_151D4CCC;
    }
    goto skip_2;
    // 0x151D4CB4: lbu         $t4, 0x10($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X10);
    skip_2:
    // 0x151D4CB8: lbu         $t2, 0x4($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X4);
    // 0x151D4CBC: lbu         $t3, 0x4($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X4);
    // 0x151D4CC0: bnel        $t2, $t3, L_151D4CF4
    if (ctx->r10 != ctx->r11) {
        // 0x151D4CC4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151D4CF4;
    }
    goto skip_3;
    // 0x151D4CC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x151D4CC8: lbu         $t4, 0x10($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X10);
L_151D4CCC:
    // 0x151D4CCC: andi        $t5, $t4, 0xFFFE
    ctx->r13 = ctx->r12 & 0XFFFE;
    // 0x151D4CD0: sb          $t5, 0x10($a2)
    MEM_B(0X10, ctx->r6) = ctx->r13;
    // 0x151D4CD4: b           L_151D4CF4
    // 0x151D4CD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_151D4CF4;
    // 0x151D4CD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151D4CDC:
    // 0x151D4CDC: addiu       $a2, $s0, 0x28
    ctx->r6 = ADD32(ctx->r16, 0X28);
    // 0x151D4CE0: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    // 0x151D4CE4: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x151D4CE8: jal         0x15149514
    // 0x151D4CEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_15149514(rdram, ctx);
        goto after_1;
    // 0x151D4CEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x151D4CF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151D4CF4:
    // 0x151D4CF4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x151D4CF8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x151D4CFC: jr          $ra
    // 0x151D4D00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x151D4D00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_151163C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151163C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151163C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151163C8: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x151163CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151163D0: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x151163D4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x151163D8: sra         $t1, $v0, 8
    ctx->r9 = S32(SIGNED(ctx->r2) >> 8);
    // 0x151163DC: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x151163E0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151163E4: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x151163E8: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x151163EC: sra         $t9, $v0, 24
    ctx->r25 = S32(SIGNED(ctx->r2) >> 24);
    // 0x151163F0: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x151163F4: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x151163F8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x151163FC: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x15116400: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x15116404: bgez        $t2, L_15116418
    if (SIGNED(ctx->r10) >= 0) {
        // 0x15116408: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_15116418;
    }
    // 0x15116408: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1511640C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15116410: nop

    // 0x15116414: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_15116418:
    // 0x15116418: lui         $at, 0x3FB4
    ctx->r1 = S32(0X3FB4 << 16);
    // 0x1511641C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15116420: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15116424: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15116428: lwc1        $f10, 0x2FB0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2FB0);
    // 0x1511642C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x15116430: lh          $t3, 0x12($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X12);
    // 0x15116434: sh          $t3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r11;
    // 0x15116438: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1511643C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x15116440: lw          $t4, 0x7C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X7C);
    // 0x15116444: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15116448: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x1511644C: nop

    // 0x15116450: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15116454: mul.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x15116458: jal         0x15047C00
    // 0x1511645C: nop

    cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x1511645C: nop

    after_0:
    // 0x15116460: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x15116464: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15116468: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511646C: lw          $t5, 0x80($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X80);
    // 0x15116470: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15116474: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x15116478: nop

    // 0x1511647C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15116480: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    // 0x15116484: lwc1        $f16, 0x2FB4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2FB4);
    // 0x15116488: mul.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1511648C: jal         0x15047C00
    // 0x15116490: nop

    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x15116490: nop

    after_1:
    // 0x15116494: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15116498: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1511649C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151164A0: mul.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151164A4: addiu       $v0, $v0, -0x161C
    ctx->r2 = ADD32(ctx->r2, -0X161C);
    // 0x151164A8: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x151164AC: lw          $t4, 0x80($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X80);
    // 0x151164B0: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x151164B4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x151164B8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x151164BC: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151164C0: lh          $t6, 0x12($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X12);
    // 0x151164C4: mflo        $t8
    ctx->r24 = lo;
    // 0x151164C8: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x151164CC: sw          $t0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r8;
    // 0x151164D0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x151164D4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x151164D8: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151164DC: mflo        $t3
    ctx->r11 = lo;
    // 0x151164E0: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x151164E4: sw          $t5, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r13;
    // 0x151164E8: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x151164EC: subu        $t9, $t6, $t7
    ctx->r25 = SUB32(ctx->r14, ctx->r15);
    // 0x151164F0: sh          $t9, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r25;
    // 0x151164F4: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x151164F8: sub.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x151164FC: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
    // 0x15116500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15116504: jr          $ra
    // 0x15116508: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15116508: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15070860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15070860: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15070864: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15070868: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1507086C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070870: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15070874: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15070878: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1507087C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15070880: jal         0x150FE49C
    // 0x15070884: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_150FE49C(rdram, ctx);
        goto after_0;
    // 0x15070884: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x15070888: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1507088C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15070890: jr          $ra
    // 0x15070894: nop

    return;
    return;
    // 0x15070894: nop

;}
RECOMP_FUNC void func_1515BA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515BA80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515BA84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1515BA88: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x1515BA8C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1515BA90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515BA94: jal         0x1515B5F4
    // 0x1515BA98: nop

    func_1515B5F4(rdram, ctx);
        goto after_0;
    // 0x1515BA98: nop

    after_0:
    // 0x1515BA9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515BAA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1515BAA4: jr          $ra
    // 0x1515BAA8: nop

    return;
    return;
    // 0x1515BAA8: nop

;}
RECOMP_FUNC void func_15090630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15090630: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x15090634: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x15090638: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1509063C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x15090640: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x15090644: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x15090648: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x1509064C: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x15090650: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x15090654: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x15090658: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x1509065C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x15090660: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x15090664: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x15090668: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x1509066C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15090670: sb          $t6, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r14;
    // 0x15090674: sb          $zero, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = 0;
    // 0x15090678: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x1509067C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x15090680: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15090684: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15090688: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x1509068C: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x15090690: lui         $t8, 0xFCFF
    ctx->r24 = S32(0XFCFF << 16);
    // 0x15090694: lui         $t9, 0xFFFC
    ctx->r25 = S32(0XFFFC << 16);
    // 0x15090698: ori         $t9, $t9, 0xFE38
    ctx->r25 = ctx->r25 | 0XFE38;
    // 0x1509069C: ori         $t8, $t8, 0xB5FF
    ctx->r24 = ctx->r24 | 0XB5FF;
    // 0x150906A0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x150906A4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x150906A8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x150906AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150906B0: lui         $t0, 0xEF10
    ctx->r8 = S32(0XEF10 << 16);
    // 0x150906B4: lui         $t1, 0xC18
    ctx->r9 = S32(0XC18 << 16);
    // 0x150906B8: ori         $t1, $t1, 0x4244
    ctx->r9 = ctx->r9 | 0X4244;
    // 0x150906BC: ori         $t0, $t0, 0x2C0F
    ctx->r8 = ctx->r8 | 0X2C0F;
    // 0x150906C0: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x150906C4: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x150906C8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x150906CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150906D0: lwc1        $f24, -0x22E0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X22E0);
    // 0x150906D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150906D8: lwc1        $f22, -0x22DC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X22DC);
    // 0x150906DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150906E0: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x150906E4: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x150906E8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150906EC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x150906F0: addiu       $fp, $fp, 0x1840
    ctx->r30 = ADD32(ctx->r30, 0X1840);
    // 0x150906F4: addiu       $s0, $s0, 0x2460
    ctx->r16 = ADD32(ctx->r16, 0X2460);
    // 0x150906F8: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x150906FC: addiu       $s6, $sp, 0xA4
    ctx->r22 = ADD32(ctx->r29, 0XA4);
    // 0x15090700: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x15090704: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
L_15090708:
    // 0x15090708: beq         $s1, $v0, L_15090718
    if (ctx->r17 == ctx->r2) {
        // 0x1509070C: nop
    
            goto L_15090718;
    }
    // 0x1509070C: nop

    // 0x15090710: bne         $s7, $v0, L_150907E0
    if (ctx->r23 != ctx->r2) {
        // 0x15090714: nop
    
            goto L_150907E0;
    }
    // 0x15090714: nop

L_15090718:
    // 0x15090718: beq         $s5, $zero, L_15090768
    if (ctx->r21 == 0) {
        // 0x1509071C: addiu       $a1, $sp, 0x84
        ctx->r5 = ADD32(ctx->r29, 0X84);
            goto L_15090768;
    }
    // 0x1509071C: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x15090720: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x15090724: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x15090728: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1509072C: jal         0x1510D0EC
    // 0x15090730: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x15090730: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    after_0:
    // 0x15090734: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15090738: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x1509073C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x15090740: addiu       $a1, $a1, 0x3D4
    ctx->r5 = ADD32(ctx->r5, 0X3D4);
    // 0x15090744: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15090748: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1509074C: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x15090750: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15090754: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15090758: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1509075C: jal         0x15094F70
    // 0x15090760: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    func_15094F70(rdram, ctx);
        goto after_1;
    // 0x15090760: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    after_1:
    // 0x15090764: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_15090768:
    // 0x15090768: jal         0x15048A40
    // 0x1509076C: lbu         $a0, 0xF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XF);
    func_15048A40(rdram, ctx);
        goto after_2;
    // 0x1509076C: lbu         $a0, 0xF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XF);
    after_2:
    // 0x15090770: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
    // 0x15090774: mul.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x15090778: lh          $s3, 0x0($s0)
    ctx->r19 = MEM_H(ctx->r16, 0X0);
    // 0x1509077C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x15090780: lh          $s4, 0x2($s0)
    ctx->r20 = MEM_H(ctx->r16, 0X2);
    // 0x15090784: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15090788: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x1509078C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15090790: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x15090794: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x15090798: nop

    // 0x1509079C: mul.s       $f18, $f24, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x150907A0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150907A4: mtc1        $s3, $f10
    ctx->f10.u32l = ctx->r19;
    // 0x150907A8: add.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f20.fl;
    // 0x150907AC: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x150907B0: mtc1        $s4, $f16
    ctx->f16.u32l = ctx->r20;
    // 0x150907B4: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150907B8: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x150907BC: sh          $t5, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r13;
    // 0x150907C0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150907C4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150907C8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150907CC: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150907D0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x150907D4: jal         0x15095A48
    // 0x150907D8: sh          $t7, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r15;
    func_15095A48(rdram, ctx);
        goto after_3;
    // 0x150907D8: sh          $t7, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r15;
    after_3:
    // 0x150907DC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_150907E0:
    // 0x150907E0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150907E4: addiu       $t8, $t8, 0x24C0
    ctx->r24 = ADD32(ctx->r24, 0X24C0);
    // 0x150907E8: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x150907EC: sltu        $at, $s0, $t8
    ctx->r1 = ctx->r16 < ctx->r24 ? 1 : 0;
    // 0x150907F0: bnel        $at, $zero, L_15090708
    if (ctx->r1 != 0) {
        // 0x150907F4: lbu         $v0, 0xD($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XD);
            goto L_15090708;
    }
    goto skip_0;
    // 0x150907F4: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    skip_0:
    // 0x150907F8: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x150907FC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x15090800: addiu       $s0, $s0, 0x2460
    ctx->r16 = ADD32(ctx->r16, 0X2460);
    // 0x15090804: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
    // 0x15090808: lbu         $t9, 0xD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XD);
L_1509080C:
    // 0x1509080C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15090810: bne         $s7, $t9, L_150908E8
    if (ctx->r23 != ctx->r25) {
        // 0x15090814: nop
    
            goto L_150908E8;
    }
    // 0x15090814: nop

    // 0x15090818: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x1509081C: lh          $s3, 0x0($s0)
    ctx->r19 = MEM_H(ctx->r16, 0X0);
    // 0x15090820: lh          $s4, 0x2($s0)
    ctx->r20 = MEM_H(ctx->r16, 0X2);
    // 0x15090824: sh          $v0, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r2;
    // 0x15090828: jal         0x150ADA20
    // 0x1509082C: sh          $v0, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x1509082C: sh          $v0, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r2;
    after_4:
    // 0x15090830: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x15090834: sltiu       $at, $t0, 0x80
    ctx->r1 = ctx->r8 < 0X80 ? 1 : 0;
    // 0x15090838: beq         $at, $zero, L_15090844
    if (ctx->r1 == 0) {
        // 0x1509083C: nop
    
            goto L_15090844;
    }
    // 0x1509083C: nop

    // 0x15090840: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_15090844:
    // 0x15090844: jal         0x150ADA20
    // 0x15090848: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15090848: nop

    after_5:
    // 0x1509084C: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x15090850: sltiu       $at, $t1, 0x80
    ctx->r1 = ctx->r9 < 0X80 ? 1 : 0;
    // 0x15090854: beq         $at, $zero, L_15090860
    if (ctx->r1 == 0) {
        // 0x15090858: ori         $t2, $s1, 0x2
        ctx->r10 = ctx->r17 | 0X2;
            goto L_15090860;
    }
    // 0x15090858: ori         $t2, $s1, 0x2
    ctx->r10 = ctx->r17 | 0X2;
    // 0x1509085C: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
L_15090860:
    // 0x15090860: beq         $s5, $zero, L_1509089C
    if (ctx->r21 == 0) {
        // 0x15090864: sb          $s1, 0xB1($sp)
        MEM_B(0XB1, ctx->r29) = ctx->r17;
            goto L_1509089C;
    }
    // 0x15090864: sb          $s1, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r17;
    // 0x15090868: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1509086C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x15090870: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x15090874: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15090878: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x1509087C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15090880: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x15090884: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15090888: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1509088C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15090890: jal         0x15094F70
    // 0x15090894: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    func_15094F70(rdram, ctx);
        goto after_6;
    // 0x15090894: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    after_6:
    // 0x15090898: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_1509089C:
    // 0x1509089C: mtc1        $s3, $f18
    ctx->f18.u32l = ctx->r19;
    // 0x150908A0: mtc1        $s4, $f4
    ctx->f4.u32l = ctx->r20;
    // 0x150908A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150908A8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150908AC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x150908B0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150908B4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150908B8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x150908BC: jal         0x15095A48
    // 0x150908C0: nop

    func_15095A48(rdram, ctx);
        goto after_7;
    // 0x150908C0: nop

    after_7:
    // 0x150908C4: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150908C8: lh          $v1, 0xA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA);
    // 0x150908CC: lw          $t4, -0x161C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X161C);
    // 0x150908D0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x150908D4: subu        $v1, $v1, $t4
    ctx->r3 = SUB32(ctx->r3, ctx->r12);
    // 0x150908D8: bgezl       $v1, L_150908E8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x150908DC: sh          $v1, 0xA($s0)
        MEM_H(0XA, ctx->r16) = ctx->r3;
            goto L_150908E8;
    }
    goto skip_1;
    // 0x150908DC: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    skip_1:
    // 0x150908E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150908E4: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
L_150908E8:
    // 0x150908E8: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150908EC: addiu       $t5, $t5, 0x24C0
    ctx->r13 = ADD32(ctx->r13, 0X24C0);
    // 0x150908F0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x150908F4: bnel        $s0, $t5, L_1509080C
    if (ctx->r16 != ctx->r13) {
        // 0x150908F8: lbu         $t9, 0xD($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0XD);
            goto L_1509080C;
    }
    goto skip_2;
    // 0x150908F8: lbu         $t9, 0xD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XD);
    skip_2:
    // 0x150908FC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x15090900: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x15090904: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x15090908: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x1509090C: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x15090910: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x15090914: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x15090918: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x1509091C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x15090920: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x15090924: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x15090928: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x1509092C: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x15090930: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x15090934: jr          $ra
    // 0x15090938: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x15090938: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_151E5F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E5F64: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151E5F68: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x151E5F6C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E5F70: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E5F74: bne         $t6, $zero, L_151E5F8C
    if (ctx->r14 != 0) {
        // 0x151E5F78: addu        $v1, $v1, $a0
        ctx->r3 = ADD32(ctx->r3, ctx->r4);
            goto L_151E5F8C;
    }
    // 0x151E5F78: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x151E5F7C: lbu         $t7, 0xB94($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0XB94);
    // 0x151E5F80: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151E5F84: beq         $t7, $zero, L_151E5FA4
    if (ctx->r15 == 0) {
        // 0x151E5F88: nop
    
            goto L_151E5FA4;
    }
    // 0x151E5F88: nop

L_151E5F8C:
    // 0x151E5F8C: lb          $v1, 0xC00($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XC00);
    // 0x151E5F90: bgez        $v1, L_151E5F9C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151E5F94: nop
    
            goto L_151E5F9C;
    }
    // 0x151E5F94: nop

    // 0x151E5F98: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151E5F9C:
    // 0x151E5F9C: jr          $ra
    // 0x151E5FA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x151E5FA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151E5FA4:
    // 0x151E5FA4: jr          $ra
    // 0x151E5FA8: nop

    return;
    return;
    // 0x151E5FA8: nop

;}
RECOMP_FUNC void func_151582C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151582C8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x151582CC: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x151582D0: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x151582D4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151582D8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151582DC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151582E0: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x151582E4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151582E8: sb          $t6, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r14;
    // 0x151582EC: lb          $v0, 0x13($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X13);
    // 0x151582F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151582F4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151582F8: beq         $v0, $at, L_15158334
    if (ctx->r2 == ctx->r1) {
        // 0x151582FC: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_15158334;
    }
    // 0x151582FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15158300: lbu         $t7, -0x1640($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1640);
    // 0x15158304: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x15158308: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1515830C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x15158310: lw          $t9, -0x51F4($at)
    ctx->r25 = MEM_W(ctx->r1, -0X51F4);
    // 0x15158314: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x15158318: addu        $a0, $s0, $t8
    ctx->r4 = ADD32(ctx->r16, ctx->r24);
    // 0x1515831C: jalr        $t9
    // 0x15158320: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15158320: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    after_0:
    // 0x15158324: bnel        $v0, $zero, L_15158338
    if (ctx->r2 != 0) {
        // 0x15158328: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_15158338;
    }
    goto skip_0;
    // 0x15158328: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x1515832C: b           L_15158578
    // 0x15158330: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_15158578;
    // 0x15158330: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_15158334:
    // 0x15158334: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_15158338:
    // 0x15158338: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x1515833C: jal         0x15142B7C
    // 0x15158340: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    func_15142B7C(rdram, ctx);
        goto after_1;
    // 0x15158340: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    after_1:
    // 0x15158344: lbu         $t0, 0x3C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3C);
    // 0x15158348: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1515834C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15158350: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x15158354: lbu         $t1, 0x3D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X3D);
    // 0x15158358: addiu       $a0, $sp, 0x6A
    ctx->r4 = ADD32(ctx->r29, 0X6A);
    // 0x1515835C: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x15158360: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15158364: lbu         $t2, 0x3E($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3E);
    // 0x15158368: addiu       $a2, $sp, 0x66
    ctx->r6 = ADD32(ctx->r29, 0X66);
    // 0x1515836C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x15158370: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x15158374: lbu         $t3, 0x3F($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3F);
    // 0x15158378: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x1515837C: lbu         $t4, 0x38($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X38);
    // 0x15158380: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x15158384: lbu         $t5, 0x39($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X39);
    // 0x15158388: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x1515838C: lbu         $t6, 0x3A($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3A);
    // 0x15158390: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x15158394: lbu         $t7, 0x3B($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3B);
    // 0x15158398: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x1515839C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x151583A0: lb          $t9, 0x34($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X34);
    // 0x151583A4: jal         0x151441A4
    // 0x151583A8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    func_151441A4(rdram, ctx);
        goto after_2;
    // 0x151583A8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    after_2:
    // 0x151583AC: lbu         $t0, 0x3C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3C);
    // 0x151583B0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151583B4: addiu       $a0, $sp, 0x62
    ctx->r4 = ADD32(ctx->r29, 0X62);
    // 0x151583B8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151583BC: lbu         $t1, 0x3D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X3D);
    // 0x151583C0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x151583C4: addiu       $a2, $sp, 0x5E
    ctx->r6 = ADD32(ctx->r29, 0X5E);
    // 0x151583C8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151583CC: lbu         $t2, 0x3E($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3E);
    // 0x151583D0: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    // 0x151583D4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151583D8: lbu         $t3, 0x3F($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3F);
    // 0x151583DC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x151583E0: lbu         $t4, 0x38($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X38);
    // 0x151583E4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x151583E8: lbu         $t5, 0x39($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X39);
    // 0x151583EC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x151583F0: lbu         $t6, 0x3A($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3A);
    // 0x151583F4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x151583F8: lbu         $t7, 0x3B($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3B);
    // 0x151583FC: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x15158400: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x15158404: lb          $t9, 0x35($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X35);
    // 0x15158408: jal         0x151442FC
    // 0x1515840C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    func_151442FC(rdram, ctx);
        goto after_3;
    // 0x1515840C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    after_3:
    // 0x15158410: lh          $t0, 0x5C($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X5C);
    // 0x15158414: addiu       $t1, $sp, 0x5B
    ctx->r9 = ADD32(ctx->r29, 0X5B);
    // 0x15158418: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x1515841C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15158420: lh          $a1, 0x62($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X62);
    // 0x15158424: lh          $a2, 0x60($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X60);
    // 0x15158428: lh          $a3, 0x5E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X5E);
    // 0x1515842C: jal         0x15142C10
    // 0x15158430: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_15142C10(rdram, ctx);
        goto after_4;
    // 0x15158430: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_4:
    // 0x15158434: lh          $t2, 0x68($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X68);
    // 0x15158438: lh          $t3, 0x66($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X66);
    // 0x1515843C: lh          $t4, 0x64($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X64);
    // 0x15158440: addiu       $s1, $sp, 0x5B
    ctx->r17 = ADD32(ctx->r29, 0X5B);
    // 0x15158444: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15158448: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1515844C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15158450: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15158454: lh          $a3, 0x6A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X6A);
    // 0x15158458: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1515845C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15158460: jal         0x15142CF0
    // 0x15158464: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    func_15142CF0(rdram, ctx);
        goto after_5;
    // 0x15158464: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_5:
    // 0x15158468: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1515846C: lbu         $a1, 0x2B($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2B);
    // 0x15158470: jal         0x1513F4E4
    // 0x15158474: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_6;
    // 0x15158474: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x15158478: lw          $t2, 0x24($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X24);
    // 0x1515847C: lw          $t5, 0x18($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X18);
    // 0x15158480: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x15158484: addiu       $t4, $t4, 0x4AC8
    ctx->r12 = ADD32(ctx->r12, 0X4AC8);
    // 0x15158488: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x1515848C: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x15158490: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
    // 0x15158494: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x15158498: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x1515849C: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
    // 0x151584A0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x151584A4: lw          $t1, 0x30($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X30);
    // 0x151584A8: ori         $t8, $t7, 0x2C00
    ctx->r24 = ctx->r15 | 0X2C00;
    // 0x151584AC: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x151584B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151584B4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x151584B8: or          $a2, $t5, $t6
    ctx->r6 = ctx->r13 | ctx->r14;
    // 0x151584BC: jal         0x15142FBC
    // 0x151584C0: or          $a1, $t0, $t1
    ctx->r5 = ctx->r8 | ctx->r9;
    func_15142FBC(rdram, ctx);
        goto after_7;
    // 0x151584C0: or          $a1, $t0, $t1
    ctx->r5 = ctx->r8 | ctx->r9;
    after_7:
    // 0x151584C4: lbu         $v1, 0x10($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X10);
    // 0x151584C8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151584CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151584D0: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x151584D4: beq         $t7, $zero, L_15158520
    if (ctx->r15 == 0) {
        // 0x151584D8: andi        $t8, $v1, 0x4
        ctx->r24 = ctx->r3 & 0X4;
            goto L_15158520;
    }
    // 0x151584D8: andi        $t8, $v1, 0x4
    ctx->r24 = ctx->r3 & 0X4;
    // 0x151584DC: beq         $t8, $zero, L_151584EC
    if (ctx->r24 == 0) {
        // 0x151584E0: addiu       $a1, $s0, 0xD8
        ctx->r5 = ADD32(ctx->r16, 0XD8);
            goto L_151584EC;
    }
    // 0x151584E0: addiu       $a1, $s0, 0xD8
    ctx->r5 = ADD32(ctx->r16, 0XD8);
    // 0x151584E4: b           L_151584F0
    // 0x151584E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151584F0;
    // 0x151584E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151584EC:
    // 0x151584EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151584F0:
    // 0x151584F0: lbu         $t9, 0x44($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X44);
    // 0x151584F4: lbu         $a2, 0x45($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X45);
    // 0x151584F8: lw          $a3, 0x40($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X40);
    // 0x151584FC: lh          $t0, 0x7A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X7A);
    // 0x15158500: addiu       $t1, $s0, 0x48
    ctx->r9 = ADD32(ctx->r16, 0X48);
    // 0x15158504: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15158508: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1515850C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x15158510: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15158514: jal         0x151462C8
    // 0x15158518: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_151462C8(rdram, ctx);
        goto after_8;
    // 0x15158518: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_8:
    // 0x1515851C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_15158520:
    // 0x15158520: lui         $t2, 0xDA38
    ctx->r10 = S32(0XDA38 << 16);
    // 0x15158524: ori         $t2, $t2, 0x3
    ctx->r10 = ctx->r10 | 0X3;
    // 0x15158528: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x1515852C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x15158530: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15158534: lbu         $t3, -0x1640($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1640);
    // 0x15158538: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x1515853C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15158540: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x15158544: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x15158548: addiu       $t6, $t5, 0x58
    ctx->r14 = ADD32(ctx->r13, 0X58);
    // 0x1515854C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x15158550: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x15158554: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x15158558: lbu         $t8, 0x16($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X16);
    // 0x1515855C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x15158560: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x15158564: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15158568: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1515856C: lw          $t0, -0x5048($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5048);
    // 0x15158570: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x15158574: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
L_15158578:
    // 0x15158578: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1515857C: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x15158580: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x15158584: jr          $ra
    // 0x15158588: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    return;
    // 0x15158588: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_1514E718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514E718: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1514E71C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1514E720: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1514E724: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x1514E728: addiu       $t8, $t8, 0x590C
    ctx->r24 = ADD32(ctx->r24, 0X590C);
    // 0x1514E72C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1514E730: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1514E734: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1514E738: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1514E73C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1514E740: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1514E744: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1514E748: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1514E74C: jal         0x1518D1C0
    // 0x1514E750: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_1518D1C0(rdram, ctx);
        goto after_0;
    // 0x1514E750: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1514E754: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514E758: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x1514E75C: jal         0x1514EC1C
    // 0x1514E760: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_1514EC1C(rdram, ctx);
        goto after_1;
    // 0x1514E760: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_1:
    // 0x1514E764: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x1514E768: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514E76C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514E770: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514E774: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1514E778: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x1514E77C: sra         $a1, $v1, 16
    ctx->r5 = S32(SIGNED(ctx->r3) >> 16);
    // 0x1514E780: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    // 0x1514E784: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1514E788: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1514E78C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1514E790: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1514E794: addiu       $a0, $zero, -0x8000
    ctx->r4 = ADD32(0, -0X8000);
    // 0x1514E798: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x1514E79C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1514E7A0: jal         0x1515D5F8
    // 0x1514E7A4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_1515D5F8(rdram, ctx);
        goto after_2;
    // 0x1514E7A4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_2:
    // 0x1514E7A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514E7AC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x1514E7B0: jal         0x1514EC1C
    // 0x1514E7B4: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_1514EC1C(rdram, ctx);
        goto after_3;
    // 0x1514E7B4: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_3:
    // 0x1514E7B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1514E7BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1514E7C0: jr          $ra
    // 0x1514E7C4: nop

    return;
    return;
    // 0x1514E7C4: nop

;}
RECOMP_FUNC void func_150A7A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A7A14: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x150A7A18: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x150A7A1C: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150A7A20: lwc1        $f10, 0x2C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x150A7A24: mul.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150A7A28: lwc1        $f12, 0x3C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x150A7A2C: mul.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150A7A30: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150A7A34: add.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x150A7A38: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x150A7A3C: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150A7A40: jr          $t9
    // 0x150A7A44: swc1        $f18, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
    return;
    // 0x150A7A44: swc1        $f18, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_150DFDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DFDD0: lw          $t6, 0x2EC($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X2EC);
    // 0x150DFDD4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x150DFDD8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150DFDDC: beql        $t6, $zero, L_150DFE38
    if (ctx->r14 == 0) {
        // 0x150DFDE0: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_150DFE38;
    }
    goto skip_0;
    // 0x150DFDE0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x150DFDE4: sb          $t7, 0x13($a0)
    MEM_B(0X13, ctx->r4) = ctx->r15;
    // 0x150DFDE8: lwc1        $f4, 0x2D8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X2D8);
    // 0x150DFDEC: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150DFDF0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150DFDF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150DFDF8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150DFDFC: swc1        $f8, 0x2D8($a1)
    MEM_W(0X2D8, ctx->r5) = ctx->f8.u32l;
    // 0x150DFE00: lwc1        $f0, 0x2D8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X2D8);
    // 0x150DFE04: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x150DFE08: nop

    // 0x150DFE0C: bc1fl       L_150DFE20
    if (!c1cs) {
        // 0x150DFE10: lwc1        $f18, 0x2DC($a1)
        ctx->f18.u32l = MEM_W(ctx->r5, 0X2DC);
            goto L_150DFE20;
    }
    goto skip_1;
    // 0x150DFE10: lwc1        $f18, 0x2DC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X2DC);
    skip_1:
    // 0x150DFE14: jr          $ra
    // 0x150DFE18: sw          $zero, 0x2EC($a1)
    MEM_W(0X2EC, ctx->r5) = 0;
    return;
    return;
    // 0x150DFE18: sw          $zero, 0x2EC($a1)
    MEM_W(0X2EC, ctx->r5) = 0;
    // 0x150DFE1C: lwc1        $f18, 0x2DC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X2DC);
L_150DFE20:
    // 0x150DFE20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150DFE24: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150DFE28: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150DFE2C: b           L_150DFE3C
    // 0x150DFE30: sub.s       $f2, $f16, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f4.fl;
        goto L_150DFE3C;
    // 0x150DFE30: sub.s       $f2, $f16, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x150DFE34: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_150DFE38:
    // 0x150DFE38: sb          $zero, 0x13($a0)
    MEM_B(0X13, ctx->r4) = 0;
L_150DFE3C:
    // 0x150DFE3C: lw          $t8, 0x24($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X24);
    // 0x150DFE40: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x150DFE44: beql        $v0, $zero, L_150DFEF4
    if (ctx->r2 == 0) {
        // 0x150DFE48: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150DFEF4;
    }
    goto skip_2;
    // 0x150DFE48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x150DFE4C: lb          $t9, 0x0($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X0);
    // 0x150DFE50: addiu       $a0, $zero, -0xE
    ctx->r4 = ADD32(0, -0XE);
    // 0x150DFE54: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150DFE58: beql        $a0, $t9, L_150DFE7C
    if (ctx->r4 == ctx->r25) {
        // 0x150DFE5C: sll         $t3, $v1, 3
        ctx->r11 = S32(ctx->r3 << 3);
            goto L_150DFE7C;
    }
    goto skip_3;
    // 0x150DFE5C: sll         $t3, $v1, 3
    ctx->r11 = S32(ctx->r3 << 3);
    skip_3:
    // 0x150DFE60: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_150DFE64:
    // 0x150DFE64: sll         $t0, $v1, 3
    ctx->r8 = S32(ctx->r3 << 3);
    // 0x150DFE68: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x150DFE6C: lb          $t2, 0x0($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X0);
    // 0x150DFE70: bnel        $a0, $t2, L_150DFE64
    if (ctx->r4 != ctx->r10) {
        // 0x150DFE74: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_150DFE64;
    }
    goto skip_4;
    // 0x150DFE74: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_4:
    // 0x150DFE78: sll         $t3, $v1, 3
    ctx->r11 = S32(ctx->r3 << 3);
L_150DFE7C:
    // 0x150DFE7C: addu        $a1, $v0, $t3
    ctx->r5 = ADD32(ctx->r2, ctx->r11);
    // 0x150DFE80: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x150DFE84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150DFE88: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x150DFE8C: srl         $t4, $a0, 12
    ctx->r12 = S32(U32(ctx->r4) >> 12);
    // 0x150DFE90: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x150DFE94: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x150DFE98: mflo        $t6
    ctx->r14 = lo;
    // 0x150DFE9C: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x150DFEA0: bgez        $a2, L_150DFEB4
    if (SIGNED(ctx->r6) >= 0) {
        // 0x150DFEA4: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_150DFEB4;
    }
    // 0x150DFEA4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150DFEA8: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
L_150DFEAC:
    // 0x150DFEAC: bltzl       $a2, L_150DFEAC
    if (SIGNED(ctx->r6) < 0) {
        // 0x150DFEB0: addiu       $a2, $a2, 0x40
        ctx->r6 = ADD32(ctx->r6, 0X40);
            goto L_150DFEAC;
    }
    goto skip_5;
    // 0x150DFEB0: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    skip_5:
L_150DFEB4:
    // 0x150DFEB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150DFEB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150DFEBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150DFEC0: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150DFEC4: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x150DFEC8: andi        $t3, $a2, 0xFFF
    ctx->r11 = ctx->r6 & 0XFFF;
    // 0x150DFECC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150DFED0: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150DFED4: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x150DFED8: nop

    // 0x150DFEDC: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x150DFEE0: sll         $t1, $t0, 12
    ctx->r9 = S32(ctx->r8 << 12);
    // 0x150DFEE4: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x150DFEE8: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x150DFEEC: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x150DFEF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150DFEF4:
    // 0x150DFEF4: jr          $ra
    // 0x150DFEF8: nop

    return;
    return;
    // 0x150DFEF8: nop

;}
RECOMP_FUNC void alHeapDBAlloc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10012844: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x10012848: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x1001284C: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x10012850: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x10012854: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x10012858: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x1001285C: multu       $a3, $t6
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10012860: mflo        $t7
    ctx->r15 = lo;
    // 0x10012864: addiu       $t8, $t7, 0xF
    ctx->r24 = ADD32(ctx->r15, 0XF);
    // 0x10012868: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x1001286C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x10012870: lw          $t0, 0x4($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X4);
    // 0x10012874: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x10012878: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x1001287C: lw          $t4, 0x8($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X8);
    // 0x10012880: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x10012884: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x10012888: sltu        $at, $t5, $t2
    ctx->r1 = ctx->r13 < ctx->r10 ? 1 : 0;
    // 0x1001288C: bne         $at, $zero, L_100128B0
    if (ctx->r1 != 0) {
        // 0x10012890: nop
    
            goto L_100128B0;
    }
    // 0x10012890: nop

    // 0x10012894: lw          $t6, 0x4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X4);
    // 0x10012898: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    // 0x1001289C: lw          $t7, 0x4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X4);
    // 0x100128A0: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x100128A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x100128A8: b           L_100128B0
    // 0x100128AC: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
        goto L_100128B0;
    // 0x100128AC: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
L_100128B0:
    // 0x100128B0: b           L_100128C0
    // 0x100128B4: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
        goto L_100128C0;
    // 0x100128B4: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x100128B8: b           L_100128C0
    // 0x100128BC: nop

        goto L_100128C0;
    // 0x100128BC: nop

L_100128C0:
    // 0x100128C0: jr          $ra
    // 0x100128C4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x100128C4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_150D2D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D2D6C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x150D2D70: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150D2D74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150D2D78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150D2D7C: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x150D2D80: addiu       $t6, $sp, 0x47
    ctx->r14 = ADD32(ctx->r29, 0X47);
    // 0x150D2D84: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150D2D88: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x150D2D8C: lh          $a1, 0x9E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X9E);
    // 0x150D2D90: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x150D2D94: jal         0x151D5D60
    // 0x150D2D98: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x150D2D98: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    after_0:
    // 0x150D2D9C: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x150D2DA0: lbu         $t4, 0x47($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X47);
    // 0x150D2DA4: beq         $v0, $zero, L_150D2DF4
    if (ctx->r2 == 0) {
        // 0x150D2DA8: sw          $v0, 0x90($sp)
        MEM_W(0X90, ctx->r29) = ctx->r2;
            goto L_150D2DF4;
    }
    // 0x150D2DA8: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x150D2DAC: beq         $t4, $zero, L_150D2DFC
    if (ctx->r12 == 0) {
        // 0x150D2DB0: lh          $t7, 0x9E($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X9E);
            goto L_150D2DFC;
    }
    // 0x150D2DB0: lh          $t7, 0x9E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X9E);
    // 0x150D2DB4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x150D2DB8: addu        $v1, $s0, $t9
    ctx->r3 = ADD32(ctx->r16, ctx->r25);
    // 0x150D2DBC: lw          $a0, 0x100($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X100);
    // 0x150D2DC0: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x150D2DC4: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x150D2DC8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x150D2DCC: jal         0x10022EC0
    // 0x150D2DD0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150D2DD0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x150D2DD4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x150D2DD8: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x150D2DDC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x150D2DE0: lw          $a0, 0x100($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X100);
    // 0x150D2DE4: jal         0x10022EC0
    // 0x150D2DE8: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x150D2DE8: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
    // 0x150D2DEC: b           L_150D2DFC
    // 0x150D2DF0: nop

        goto L_150D2DFC;
    // 0x150D2DF0: nop

L_150D2DF4:
    // 0x150D2DF4: b           L_150D3168
    // 0x150D2DF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150D3168;
    // 0x150D2DF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150D2DFC:
    // 0x150D2DFC: jal         0x15144B34
    // 0x150D2E00: lh          $a0, 0x9E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X9E);
    func_15144B34(rdram, ctx);
        goto after_3;
    // 0x150D2E00: lh          $a0, 0x9E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X9E);
    after_3:
    // 0x150D2E04: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x150D2E08: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150D2E0C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150D2E10: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150D2E14: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150D2E18: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x150D2E1C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x150D2E20: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x150D2E24: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x150D2E28: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150D2E2C: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150D2E30: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150D2E34: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x150D2E38: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150D2E3C: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x150D2E40: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150D2E44: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150D2E48: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x150D2E4C: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x150D2E50: lwc1        $f2, 0x38($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150D2E54: lwc1        $f0, 0x34($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150D2E58: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x150D2E5C: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x150D2E60: add.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x150D2E64: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x150D2E68: lwc1        $f12, 0x3C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150D2E6C: add.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x150D2E70: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x150D2E74: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150D2E78: nop

    // 0x150D2E7C: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x150D2E80: nop

    // 0x150D2E84: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x150D2E88: add.s       $f14, $f0, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x150D2E8C: add.s       $f6, $f2, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x150D2E90: add.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x150D2E94: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x150D2E98: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150D2E9C: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x150D2EA0: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150D2EA4: sub.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x150D2EA8: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x150D2EAC: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150D2EB0: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x150D2EB4: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x150D2EB8: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x150D2EBC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150D2EC0: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x150D2EC4: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x150D2EC8: jal         0x150AD8B0
    // 0x150D2ECC: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    func_150AD8B0(rdram, ctx);
        goto after_4;
    // 0x150D2ECC: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x150D2ED0: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150D2ED4: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150D2ED8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150D2EDC: mul.s       $f10, $f6, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x150D2EE0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x150D2EE4: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x150D2EE8: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x150D2EEC: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150D2EF0: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x150D2EF4: add.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150D2EF8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150D2EFC: nop

    // 0x150D2F00: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x150D2F04: nop

    // 0x150D2F08: bc1tl       L_150D2F48
    if (c1cs) {
        // 0x150D2F0C: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_150D2F48;
    }
    goto skip_0;
    // 0x150D2F0C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x150D2F10: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150D2F14: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150D2F18: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150D2F1C: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150D2F20: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x150D2F24: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x150D2F28: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150D2F2C: nop

    // 0x150D2F30: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150D2F34: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x150D2F38: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x150D2F3C: b           L_150D2F5C
    // 0x150D2F40: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
        goto L_150D2F5C;
    // 0x150D2F40: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150D2F44: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_150D2F48:
    // 0x150D2F48: nop

    // 0x150D2F4C: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x150D2F50: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    // 0x150D2F54: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x150D2F58: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
L_150D2F5C:
    // 0x150D2F5C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150D2F60: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x150D2F64: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150D2F68: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150D2F6C: lwc1        $f2, 0x7C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150D2F70: addiu       $v1, $s0, 0x110
    ctx->r3 = ADD32(ctx->r16, 0X110);
    // 0x150D2F74: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150D2F78: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x150D2F7C: nop

    // 0x150D2F80: sh          $t8, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r24;
    // 0x150D2F84: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150D2F88: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150D2F8C: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x150D2F90: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150D2F94: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150D2F98: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x150D2F9C: nop

    // 0x150D2FA0: sh          $t5, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r13;
    // 0x150D2FA4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150D2FA8: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150D2FAC: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x150D2FB0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150D2FB4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150D2FB8: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x150D2FBC: nop

    // 0x150D2FC0: sh          $t4, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r12;
    // 0x150D2FC4: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x150D2FC8: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x150D2FCC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150D2FD0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x150D2FD4: nop

    // 0x150D2FD8: sh          $t0, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r8;
    // 0x150D2FDC: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x150D2FE0: sh          $zero, 0x6($t1)
    MEM_H(0X6, ctx->r9) = 0;
    // 0x150D2FE4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150D2FE8: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x150D2FEC: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150D2FF0: addiu       $t5, $t3, 0x10
    ctx->r13 = ADD32(ctx->r11, 0X10);
    // 0x150D2FF4: sw          $t5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r13;
    // 0x150D2FF8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150D2FFC: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x150D3000: nop

    // 0x150D3004: sh          $t6, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r14;
    // 0x150D3008: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150D300C: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x150D3010: sub.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x150D3014: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150D3018: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x150D301C: nop

    // 0x150D3020: sh          $t7, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r15;
    // 0x150D3024: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150D3028: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x150D302C: sub.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x150D3030: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150D3034: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x150D3038: nop

    // 0x150D303C: sh          $t8, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r24;
    // 0x150D3040: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150D3044: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x150D3048: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150D304C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x150D3050: nop

    // 0x150D3054: sh          $t2, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r10;
    // 0x150D3058: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x150D305C: sh          $zero, 0x6($t5)
    MEM_H(0X6, ctx->r13) = 0;
    // 0x150D3060: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150D3064: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x150D3068: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x150D306C: addiu       $t7, $t4, 0x10
    ctx->r15 = ADD32(ctx->r12, 0X10);
    // 0x150D3070: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    // 0x150D3074: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150D3078: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x150D307C: nop

    // 0x150D3080: sh          $t0, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r8;
    // 0x150D3084: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150D3088: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x150D308C: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x150D3090: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150D3094: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x150D3098: nop

    // 0x150D309C: sh          $t1, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r9;
    // 0x150D30A0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150D30A4: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x150D30A8: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x150D30AC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150D30B0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x150D30B4: nop

    // 0x150D30B8: sh          $t6, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r14;
    // 0x150D30BC: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150D30C0: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x150D30C4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150D30C8: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x150D30CC: nop

    // 0x150D30D0: sh          $t9, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r25;
    // 0x150D30D4: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x150D30D8: sh          $zero, 0x6($t7)
    MEM_H(0X6, ctx->r15) = 0;
    // 0x150D30DC: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x150D30E0: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150D30E4: addiu       $t1, $t8, 0x10
    ctx->r9 = ADD32(ctx->r24, 0X10);
    // 0x150D30E8: sw          $t1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r9;
    // 0x150D30EC: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150D30F0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150D30F4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150D30F8: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x150D30FC: nop

    // 0x150D3100: sh          $t2, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r10;
    // 0x150D3104: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150D3108: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150D310C: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x150D3110: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150D3114: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150D3118: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x150D311C: nop

    // 0x150D3120: sh          $t5, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r13;
    // 0x150D3124: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150D3128: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150D312C: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x150D3130: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150D3134: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150D3138: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x150D313C: nop

    // 0x150D3140: sh          $t0, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r8;
    // 0x150D3144: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x150D3148: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x150D314C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150D3150: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x150D3154: nop

    // 0x150D3158: sh          $t3, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r11;
    // 0x150D315C: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x150D3160: sh          $zero, 0x6($t1)
    MEM_H(0X6, ctx->r9) = 0;
    // 0x150D3164: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
L_150D3168:
    // 0x150D3168: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150D316C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150D3170: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x150D3174: jr          $ra
    // 0x150D3178: nop

    return;
    return;
    // 0x150D3178: nop

;}
RECOMP_FUNC void func_151174C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151174C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151174CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151174D0: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x151174D4: jal         0x151172D8
    // 0x151174D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_151172D8(rdram, ctx);
        goto after_0;
    // 0x151174D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151174DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151174E0: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x151174E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151174E8: jr          $ra
    // 0x151174EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x151174EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1505210C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505210C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15052110: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x15052114: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x15052118: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x1505211C: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x15052120: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15052124: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x15052128: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505212C: lwc1        $f6, -0x6CD0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6CD0);
    // 0x15052130: lwc1        $f4, 0x40($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X40);
    // 0x15052134: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x15052138: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1505213C: jal         0x150AD780
    // 0x15052140: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    func_150AD780(rdram, ctx);
        goto after_0;
    // 0x15052140: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x15052144: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15052148: jal         0x150AD78C
    // 0x1505214C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_150AD78C(rdram, ctx);
        goto after_1;
    // 0x1505214C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x15052150: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15052154: neg.s       $f16, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = -ctx->f22.fl;
    // 0x15052158: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1505215C: mul.s       $f8, $f22, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x15052160: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15052164: mul.s       $f10, $f20, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x15052168: nop

    // 0x1505216C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15052170: nop

    // 0x15052174: mul.s       $f4, $f20, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x15052178: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1505217C: jal         0x150484A0
    // 0x15052180: add.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f4.fl;
    func_150484A0(rdram, ctx);
        goto after_2;
    // 0x15052180: add.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f4.fl;
    after_2:
    // 0x15052184: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15052188: lwc1        $f6, -0x6CCC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6CCC);
    // 0x1505218C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15052190: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15052194: mul.s       $f22, $f0, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15052198: jal         0x150484A0
    // 0x1505219C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_150484A0(rdram, ctx);
        goto after_3;
    // 0x1505219C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x150521A0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150521A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150521A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150521AC: lwc1        $f8, -0x6CC8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6CC8);
    // 0x150521B0: c.le.s      $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f12.fl <= ctx->f22.fl;
    // 0x150521B4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150521B8: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150521BC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x150521C0: bc1f        L_150521D4
    if (!c1cs) {
        // 0x150521C4: mov.s       $f20, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
            goto L_150521D4;
    }
    // 0x150521C4: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x150521C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150521CC: nop

    // 0x150521D0: sub.s       $f22, $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f10.fl;
L_150521D4:
    // 0x150521D4: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x150521D8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150521DC: bc1fl       L_150521F4
    if (!c1cs) {
        // 0x150521E0: lwc1        $f2, 0x48($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
            goto L_150521F4;
    }
    goto skip_0;
    // 0x150521E0: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    skip_0:
    // 0x150521E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150521E8: nop

    // 0x150521EC: sub.s       $f20, $f2, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x150521F0: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
L_150521F4:
    // 0x150521F4: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
    // 0x150521F8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x150521FC: bc1fl       L_1505220C
    if (!c1cs) {
        // 0x15052200: c.lt.s      $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
            goto L_1505220C;
    }
    goto skip_1;
    // 0x15052200: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    skip_1:
    // 0x15052204: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
    // 0x15052208: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_1505220C:
    // 0x1505220C: nop

    // 0x15052210: bc1fl       L_15052220
    if (!c1cs) {
        // 0x15052214: c.lt.s      $f2, $f20
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
            goto L_15052220;
    }
    goto skip_2;
    // 0x15052214: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    skip_2:
    // 0x15052218: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x1505221C: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
L_15052220:
    // 0x15052220: nop

    // 0x15052224: bc1fl       L_15052234
    if (!c1cs) {
        // 0x15052228: c.lt.s      $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
            goto L_15052234;
    }
    goto skip_3;
    // 0x15052228: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    skip_3:
    // 0x1505222C: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x15052230: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_15052234:
    // 0x15052234: nop

    // 0x15052238: bc1fl       L_15052248
    if (!c1cs) {
        // 0x1505223C: swc1        $f20, 0x0($t6)
        MEM_W(0X0, ctx->r14) = ctx->f20.u32l;
            goto L_15052248;
    }
    goto skip_4;
    // 0x1505223C: swc1        $f20, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f20.u32l;
    skip_4:
    // 0x15052240: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x15052244: swc1        $f20, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f20.u32l;
L_15052248:
    // 0x15052248: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x1505224C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15052250: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x15052254: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x15052258: jr          $ra
    // 0x1505225C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1505225C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_151DB2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DB2A8: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x151DB2AC: sb          $zero, 0x14($a0)
    MEM_B(0X14, ctx->r4) = 0;
    // 0x151DB2B0: sb          $v0, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r2;
    // 0x151DB2B4: sb          $zero, 0x16($a0)
    MEM_B(0X16, ctx->r4) = 0;
    // 0x151DB2B8: sb          $zero, 0x18($a0)
    MEM_B(0X18, ctx->r4) = 0;
    // 0x151DB2BC: sb          $v0, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r2;
    // 0x151DB2C0: sb          $zero, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = 0;
    // 0x151DB2C4: jr          $ra
    // 0x151DB2C8: nop

    return;
    return;
    // 0x151DB2C8: nop

;}
RECOMP_FUNC void func_150B5A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B5A3C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x150B5A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150B5A44: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x150B5A48: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x150B5A4C: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x150B5A50: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x150B5A54: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x150B5A58: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x150B5A5C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150B5A60: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x150B5A64: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x150B5A68: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x150B5A6C: addiu       $t5, $zero, 0x50
    ctx->r13 = ADD32(0, 0X50);
    // 0x150B5A70: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x150B5A74: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x150B5A78: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150B5A7C: addiu       $t4, $zero, -0x1F
    ctx->r12 = ADD32(0, -0X1F);
    // 0x150B5A80: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x150B5A84: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x150B5A88: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x150B5A8C: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x150B5A90: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x150B5A94: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150B5A98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B5A9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B5AA0: lwc1        $f6, -0x360($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X360);
    // 0x150B5AA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B5AA8: lwc1        $f8, -0x35C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X35C);
    // 0x150B5AAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B5AB0: lwc1        $f10, -0x358($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X358);
    // 0x150B5AB4: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x150B5AB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150B5ABC: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x150B5AC0: sh          $t5, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r13;
    // 0x150B5AC4: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x150B5AC8: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x150B5ACC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150B5AD0: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x150B5AD4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x150B5AD8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150B5ADC: sh          $t4, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r12;
    // 0x150B5AE0: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x150B5AE4: sh          $t1, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r9;
    // 0x150B5AE8: sh          $t0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r8;
    // 0x150B5AEC: sh          $t8, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r24;
    // 0x150B5AF0: sb          $t9, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r25;
    // 0x150B5AF4: sb          $t2, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r10;
    // 0x150B5AF8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150B5AFC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150B5B00: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150B5B04: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150B5B08: sb          $t5, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r13;
    // 0x150B5B0C: sb          $t6, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r14;
    // 0x150B5B10: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150B5B14: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150B5B18: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150B5B1C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150B5B20: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150B5B24: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150B5B28: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150B5B2C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x150B5B30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B5B34: sh          $t3, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r11;
    // 0x150B5B38: sb          $t4, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r12;
    // 0x150B5B3C: sb          $t7, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r15;
    // 0x150B5B40: sb          $t1, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r9;
    // 0x150B5B44: sb          $t0, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r8;
    // 0x150B5B48: sb          $t8, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r24;
    // 0x150B5B4C: sb          $t9, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r25;
    // 0x150B5B50: sb          $t2, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r10;
    // 0x150B5B54: lui         $t5, 0x20
    ctx->r13 = S32(0X20 << 16);
    // 0x150B5B58: lui         $t6, 0x6
    ctx->r14 = S32(0X6 << 16);
    // 0x150B5B5C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150B5B60: addiu       $t4, $zero, 0x24
    ctx->r12 = ADD32(0, 0X24);
    // 0x150B5B64: ori         $t5, $t5, 0x5
    ctx->r13 = ctx->r13 | 0X5;
    // 0x150B5B68: ori         $t6, $t6, 0x600
    ctx->r14 = ctx->r14 | 0X600;
    // 0x150B5B6C: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x150B5B70: addiu       $t1, $zero, 0x1F
    ctx->r9 = ADD32(0, 0X1F);
    // 0x150B5B74: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150B5B78: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150B5B7C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150B5B80: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150B5B84: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x150B5B88: sb          $t3, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r11;
    // 0x150B5B8C: sb          $zero, 0x65($sp)
    MEM_B(0X65, ctx->r29) = 0;
    // 0x150B5B90: sb          $zero, 0x66($sp)
    MEM_B(0X66, ctx->r29) = 0;
    // 0x150B5B94: sb          $zero, 0x67($sp)
    MEM_B(0X67, ctx->r29) = 0;
    // 0x150B5B98: sb          $zero, 0x68($sp)
    MEM_B(0X68, ctx->r29) = 0;
    // 0x150B5B9C: sb          $zero, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = 0;
    // 0x150B5BA0: sb          $zero, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = 0;
    // 0x150B5BA4: sb          $zero, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = 0;
    // 0x150B5BA8: sb          $zero, 0x70($sp)
    MEM_B(0X70, ctx->r29) = 0;
    // 0x150B5BAC: sb          $zero, 0x72($sp)
    MEM_B(0X72, ctx->r29) = 0;
    // 0x150B5BB0: sb          $t3, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r11;
    // 0x150B5BB4: sb          $t4, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r12;
    // 0x150B5BB8: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
    // 0x150B5BBC: sw          $t6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r14;
    // 0x150B5BC0: sh          $t7, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r15;
    // 0x150B5BC4: sh          $t1, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r9;
    // 0x150B5BC8: sh          $t0, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r8;
    // 0x150B5BCC: sb          $zero, 0x86($sp)
    MEM_B(0X86, ctx->r29) = 0;
    // 0x150B5BD0: sb          $t8, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r24;
    // 0x150B5BD4: sb          $zero, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = 0;
    // 0x150B5BD8: sb          $t9, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = ctx->r25;
    // 0x150B5BDC: sb          $t2, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r10;
    // 0x150B5BE0: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    // 0x150B5BE4: lbu         $a1, 0x97($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X97);
    // 0x150B5BE8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x150B5BEC: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x150B5BF0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x150B5BF4: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x150B5BF8: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x150B5BFC: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x150B5C00: jal         0x15152B38
    // 0x150B5C04: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    func_15152B38(rdram, ctx);
        goto after_0;
    // 0x150B5C04: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x150B5C08: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x150B5C0C: lbu         $a1, 0x97($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X97);
    // 0x150B5C10: jal         0x150B5E34
    // 0x150B5C14: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    func_150B5E34(rdram, ctx);
        goto after_1;
    // 0x150B5C14: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    after_1:
    // 0x150B5C18: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x150B5C1C: lbu         $a1, 0x97($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X97);
    // 0x150B5C20: jal         0x150B6000
    // 0x150B5C24: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    func_150B6000(rdram, ctx);
        goto after_2;
    // 0x150B5C24: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    after_2:
    // 0x150B5C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150B5C2C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x150B5C30: jr          $ra
    // 0x150B5C34: nop

    return;
    return;
    // 0x150B5C34: nop

;}
RECOMP_FUNC void func_151B8668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B8668: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151B866C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x151B8670: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x151B8674: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x151B8678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B867C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x151B8680: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151B8684: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B8688: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B868C: lwc1        $f6, -0x5B38($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5B38);
    // 0x151B8690: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151B8694: lwc1        $f8, -0x35DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X35DC);
    // 0x151B8698: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x151B869C: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x151B86A0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151B86A4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151B86A8: addiu       $t7, $t6, 0x38
    ctx->r15 = ADD32(ctx->r14, 0X38);
    // 0x151B86AC: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
    // 0x151B86B0: addiu       $t9, $t6, 0x40
    ctx->r25 = ADD32(ctx->r14, 0X40);
    // 0x151B86B4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151B86B8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x151B86BC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x151B86C0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x151B86C4: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
    // 0x151B86C8: sb          $zero, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = 0;
    // 0x151B86CC: sb          $t1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r9;
    // 0x151B86D0: sb          $zero, 0x30($sp)
    MEM_B(0X30, ctx->r29) = 0;
    // 0x151B86D4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x151B86D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151B86DC: jal         0x15134908
    // 0x151B86E0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_15134908(rdram, ctx);
        goto after_0;
    // 0x151B86E0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151B86E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B86E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151B86EC: jr          $ra
    // 0x151B86F0: nop

    return;
    return;
    // 0x151B86F0: nop

;}
RECOMP_FUNC void func_1503F078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503F078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1503F07C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1503F080: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1503F084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1503F088: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1503F08C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x1503F090: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1503F094: jal         0x1503EB78
    // 0x1503F098: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1503EB78(rdram, ctx);
        goto after_0;
    // 0x1503F098: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1503F09C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1503F0A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1503F0A4: jr          $ra
    // 0x1503F0A8: nop

    return;
    return;
    // 0x1503F0A8: nop

;}
RECOMP_FUNC void func_1503B840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503B840: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x1503B844: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1503B848: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x1503B84C: bne         $t6, $at, L_1503B954
    if (ctx->r14 != ctx->r1) {
        // 0x1503B850: addiu       $a1, $a1, -0x77D0
        ctx->r5 = ADD32(ctx->r5, -0X77D0);
            goto L_1503B954;
    }
    // 0x1503B850: addiu       $a1, $a1, -0x77D0
    ctx->r5 = ADD32(ctx->r5, -0X77D0);
    // 0x1503B854: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x1503B858: addiu       $v0, $v0, -0x77CA
    ctx->r2 = ADD32(ctx->r2, -0X77CA);
    // 0x1503B85C: lhu         $v1, 0x84($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X84);
    // 0x1503B860: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
L_1503B864:
    // 0x1503B864: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x1503B868: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x1503B86C: bne         $v1, $t7, L_1503B884
    if (ctx->r3 != ctx->r15) {
        // 0x1503B870: nop
    
            goto L_1503B884;
    }
    // 0x1503B870: nop

    // 0x1503B874: lbu         $t8, 0x2FB($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2FB);
    // 0x1503B878: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x1503B87C: jr          $ra
    // 0x1503B880: sb          $t9, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r25;
    return;
    return;
    // 0x1503B880: sb          $t9, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r25;
L_1503B884:
    // 0x1503B884: bnel        $at, $zero, L_1503B864
    if (ctx->r1 != 0) {
        // 0x1503B888: lhu         $t7, 0x0($a1)
        ctx->r15 = MEM_HU(ctx->r5, 0X0);
            goto L_1503B864;
    }
    goto skip_0;
    // 0x1503B888: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    skip_0:
    // 0x1503B88C: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x1503B890: lhu         $t0, -0x7884($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X7884);
    // 0x1503B894: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x1503B898: bne         $v1, $t0, L_1503B8B0
    if (ctx->r3 != ctx->r8) {
        // 0x1503B89C: nop
    
            goto L_1503B8B0;
    }
    // 0x1503B89C: nop

    // 0x1503B8A0: lbu         $t1, 0x2FB($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X2FB);
    // 0x1503B8A4: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x1503B8A8: jr          $ra
    // 0x1503B8AC: sb          $t2, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r10;
    return;
    return;
    // 0x1503B8AC: sb          $t2, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r10;
L_1503B8B0:
    // 0x1503B8B0: lhu         $t3, -0x7882($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X7882);
    // 0x1503B8B4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x1503B8B8: addiu       $a1, $a1, -0x7880
    ctx->r5 = ADD32(ctx->r5, -0X7880);
    // 0x1503B8BC: bne         $v1, $t3, L_1503B8D4
    if (ctx->r3 != ctx->r11) {
        // 0x1503B8C0: lui         $v0, 0x800A
        ctx->r2 = S32(0X800A << 16);
            goto L_1503B8D4;
    }
    // 0x1503B8C0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x1503B8C4: lbu         $t4, 0x2FB($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X2FB);
    // 0x1503B8C8: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x1503B8CC: jr          $ra
    // 0x1503B8D0: sb          $t5, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r13;
    return;
    return;
    // 0x1503B8D0: sb          $t5, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r13;
L_1503B8D4:
    // 0x1503B8D4: addiu       $v0, $v0, -0x77D0
    ctx->r2 = ADD32(ctx->r2, -0X77D0);
    // 0x1503B8D8: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
L_1503B8DC:
    // 0x1503B8DC: bnel        $v1, $t6, L_1503B8F8
    if (ctx->r3 != ctx->r14) {
        // 0x1503B8E0: lhu         $t9, 0x2($a1)
        ctx->r25 = MEM_HU(ctx->r5, 0X2);
            goto L_1503B8F8;
    }
    goto skip_1;
    // 0x1503B8E0: lhu         $t9, 0x2($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X2);
    skip_1:
    // 0x1503B8E4: lbu         $t7, 0x2FB($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X2FB);
    // 0x1503B8E8: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x1503B8EC: jr          $ra
    // 0x1503B8F0: sb          $t8, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r24;
    return;
    return;
    // 0x1503B8F0: sb          $t8, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r24;
    // 0x1503B8F4: lhu         $t9, 0x2($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X2);
L_1503B8F8:
    // 0x1503B8F8: bnel        $v1, $t9, L_1503B914
    if (ctx->r3 != ctx->r25) {
        // 0x1503B8FC: lhu         $t2, 0x4($a1)
        ctx->r10 = MEM_HU(ctx->r5, 0X4);
            goto L_1503B914;
    }
    goto skip_2;
    // 0x1503B8FC: lhu         $t2, 0x4($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X4);
    skip_2:
    // 0x1503B900: lbu         $t0, 0x2FB($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2FB);
    // 0x1503B904: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x1503B908: jr          $ra
    // 0x1503B90C: sb          $t1, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r9;
    return;
    return;
    // 0x1503B90C: sb          $t1, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r9;
    // 0x1503B910: lhu         $t2, 0x4($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X4);
L_1503B914:
    // 0x1503B914: bnel        $v1, $t2, L_1503B930
    if (ctx->r3 != ctx->r10) {
        // 0x1503B918: lhu         $t5, 0x6($a1)
        ctx->r13 = MEM_HU(ctx->r5, 0X6);
            goto L_1503B930;
    }
    goto skip_3;
    // 0x1503B918: lhu         $t5, 0x6($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X6);
    skip_3:
    // 0x1503B91C: lbu         $t3, 0x2FB($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X2FB);
    // 0x1503B920: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x1503B924: jr          $ra
    // 0x1503B928: sb          $t4, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r12;
    return;
    return;
    // 0x1503B928: sb          $t4, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r12;
    // 0x1503B92C: lhu         $t5, 0x6($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X6);
L_1503B930:
    // 0x1503B930: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x1503B934: bne         $v1, $t5, L_1503B94C
    if (ctx->r3 != ctx->r13) {
        // 0x1503B938: nop
    
            goto L_1503B94C;
    }
    // 0x1503B938: nop

    // 0x1503B93C: lbu         $t6, 0x2FB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2FB);
    // 0x1503B940: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x1503B944: jr          $ra
    // 0x1503B948: sb          $t7, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r15;
    return;
    return;
    // 0x1503B948: sb          $t7, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = ctx->r15;
L_1503B94C:
    // 0x1503B94C: bnel        $a1, $v0, L_1503B8DC
    if (ctx->r5 != ctx->r2) {
        // 0x1503B950: lhu         $t6, 0x0($a1)
        ctx->r14 = MEM_HU(ctx->r5, 0X0);
            goto L_1503B8DC;
    }
    goto skip_4;
    // 0x1503B950: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    skip_4:
L_1503B954:
    // 0x1503B954: jr          $ra
    // 0x1503B958: nop

    return;
    return;
    // 0x1503B958: nop

;}
RECOMP_FUNC void func_15168B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15168B44: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x15168B48: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x15168B4C: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x15168B50: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x15168B54: beq         $t6, $zero, L_15168B78
    if (ctx->r14 == 0) {
        // 0x15168B58: addiu       $v0, $t6, -0x1
        ctx->r2 = ADD32(ctx->r14, -0X1);
            goto L_15168B78;
    }
    // 0x15168B58: addiu       $v0, $t6, -0x1
    ctx->r2 = ADD32(ctx->r14, -0X1);
    // 0x15168B5C: and         $t9, $v1, $at
    ctx->r25 = ctx->r3 & ctx->r1;
    // 0x15168B60: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x15168B64: sw          $t9, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r25;
    // 0x15168B68: or          $t1, $t9, $t7
    ctx->r9 = ctx->r25 | ctx->r15;
    // 0x15168B6C: sh          $t8, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r24;
    // 0x15168B70: jr          $ra
    // 0x15168B74: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
    return;
    return;
    // 0x15168B74: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
L_15168B78:
    // 0x15168B78: lbu         $a2, 0x3F($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X3F);
    // 0x15168B7C: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x15168B80: andi        $t2, $v0, 0xFFFF
    ctx->r10 = ctx->r2 & 0XFFFF;
    // 0x15168B84: slt         $at, $t2, $a2
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x15168B88: beq         $at, $zero, L_15168BA0
    if (ctx->r1 == 0) {
        // 0x15168B8C: subu        $t3, $a2, $t2
        ctx->r11 = SUB32(ctx->r6, ctx->r10);
            goto L_15168BA0;
    }
    // 0x15168B8C: subu        $t3, $a2, $t2
    ctx->r11 = SUB32(ctx->r6, ctx->r10);
    // 0x15168B90: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x15168B94: sb          $t3, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r11;
    // 0x15168B98: jr          $ra
    // 0x15168B9C: sh          $t4, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r12;
    return;
    return;
    // 0x15168B9C: sh          $t4, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r12;
L_15168BA0:
    // 0x15168BA0: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x15168BA4: jr          $ra
    // 0x15168BA8: nop

    return;
    return;
    // 0x15168BA8: nop

;}
RECOMP_FUNC void func_15189900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15189900: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15189904: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15189908: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1518990C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15189910: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15189914: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15189918: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1518991C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15189920: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15189924: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x15189928: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1518992C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x15189930: jal         0x15167A68
    // 0x15189934: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15189934: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x15189938: beq         $v0, $zero, L_151899EC
    if (ctx->r2 == 0) {
        // 0x1518993C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151899EC;
    }
    // 0x1518993C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15189940: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    // 0x15189944: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x15189948: jal         0x10022EC0
    // 0x1518994C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1518994C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_1:
    // 0x15189950: jal         0x1510F800
    // 0x15189954: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1510F800(rdram, ctx);
        goto after_2;
    // 0x15189954: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x15189958: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1518995C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15189960: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x15189964: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15189968: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1518996C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15189970: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15189974: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15189978: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1518997C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15189980: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15189984: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x15189988: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518998C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x15189990: jal         0x1510FD20
    // 0x15189994: nop

    func_1510FD20(rdram, ctx);
        goto after_3;
    // 0x15189994: nop

    after_3:
    // 0x15189998: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x1518999C: lbu         $t0, 0x2F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2F);
    // 0x151899A0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151899A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151899A8: beq         $t0, $zero, L_151899B8
    if (ctx->r8 == 0) {
        // 0x151899AC: nop
    
            goto L_151899B8;
    }
    // 0x151899AC: nop

    // 0x151899B0: b           L_151899B8
    // 0x151899B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151899B8;
    // 0x151899B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151899B8:
    // 0x151899B8: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151899BC: sb          $v0, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r2;
    // 0x151899C0: sh          $zero, 0x60($s0)
    MEM_H(0X60, ctx->r16) = 0;
    // 0x151899C4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x151899C8: swc1        $f2, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f2.u32l;
    // 0x151899CC: bc1fl       L_151899E8
    if (!c1cs) {
        // 0x151899D0: lwc1        $f18, 0x1C($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
            goto L_151899E8;
    }
    goto skip_0;
    // 0x151899D0: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    skip_0:
    // 0x151899D4: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151899D8: add.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x151899DC: b           L_151899EC
    // 0x151899E0: swc1        $f6, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f6.u32l;
        goto L_151899EC;
    // 0x151899E0: swc1        $f6, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f6.u32l;
    // 0x151899E4: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
L_151899E8:
    // 0x151899E8: swc1        $f18, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f18.u32l;
L_151899EC:
    // 0x151899EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151899F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151899F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151899F8: jr          $ra
    // 0x151899FC: nop

    return;
    return;
    // 0x151899FC: nop

;}
RECOMP_FUNC void func_15140190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15140190: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x15140194: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x15140198: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x1514019C: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x151401A0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x151401A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151401A8: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x151401AC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151401B0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x151401B4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x151401B8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x151401BC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x151401C0: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x151401C4: sll         $a1, $s3, 16
    ctx->r5 = S32(ctx->r19 << 16);
    // 0x151401C8: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x151401CC: addiu       $t8, $sp, 0x56
    ctx->r24 = ADD32(ctx->r29, 0X56);
    // 0x151401D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151401D4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x151401D8: addiu       $a0, $s1, 0x100
    ctx->r4 = ADD32(ctx->r17, 0X100);
    // 0x151401DC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151401E0: jal         0x151D5D60
    // 0x151401E4: addiu       $a3, $sp, 0xCC
    ctx->r7 = ADD32(ctx->r29, 0XCC);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x151401E4: addiu       $a3, $sp, 0xCC
    ctx->r7 = ADD32(ctx->r29, 0XCC);
    after_0:
    // 0x151401E8: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
    // 0x151401EC: lbu         $t9, 0x56($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X56);
    // 0x151401F0: beq         $v0, $zero, L_15140234
    if (ctx->r2 == 0) {
        // 0x151401F4: sw          $v0, 0xC8($sp)
        MEM_W(0XC8, ctx->r29) = ctx->r2;
            goto L_15140234;
    }
    // 0x151401F4: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    // 0x151401F8: beq         $t9, $zero, L_1514023C
    if (ctx->r25 == 0) {
        // 0x151401FC: sll         $t0, $s3, 2
        ctx->r8 = S32(ctx->r19 << 2);
            goto L_1514023C;
    }
    // 0x151401FC: sll         $t0, $s3, 2
    ctx->r8 = S32(ctx->r19 << 2);
    // 0x15140200: addu        $s0, $s1, $t0
    ctx->r16 = ADD32(ctx->r17, ctx->r8);
    // 0x15140204: addiu       $s2, $s1, 0xC0
    ctx->r18 = ADD32(ctx->r17, 0XC0);
    // 0x15140208: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x1514020C: lw          $a0, 0x100($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X100);
    // 0x15140210: jal         0x10022EC0
    // 0x15140214: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15140214: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x15140218: lw          $a0, 0x100($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X100);
    // 0x1514021C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15140220: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x15140224: jal         0x10022EC0
    // 0x15140228: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15140228: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
    // 0x1514022C: b           L_15140240
    // 0x15140230: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
        goto L_15140240;
    // 0x15140230: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_15140234:
    // 0x15140234: b           L_15140384
    // 0x15140238: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15140384;
    // 0x15140238: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1514023C:
    // 0x1514023C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_15140240:
    // 0x15140240: addiu       $s2, $sp, 0x88
    ctx->r18 = ADD32(ctx->r29, 0X88);
    // 0x15140244: lwc1        $f4, 0x2C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x15140248: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1514024C: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x15140250: lwc1        $f6, 0x30($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X30);
    // 0x15140254: swc1        $f20, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f20.u32l;
    // 0x15140258: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x1514025C: lwc1        $f8, 0x2C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x15140260: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x15140264: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x15140268: lwc1        $f16, 0x30($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X30);
    // 0x1514026C: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x15140270: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x15140274: lwc1        $f18, 0x2C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x15140278: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x1514027C: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x15140280: lwc1        $f6, 0x30($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X30);
    // 0x15140284: swc1        $f20, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f20.u32l;
    // 0x15140288: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x1514028C: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x15140290: lwc1        $f10, 0x2C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x15140294: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x15140298: lwc1        $f16, 0x30($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X30);
    // 0x1514029C: swc1        $f20, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f20.u32l;
    // 0x151402A0: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x151402A4: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x151402A8: lw          $a3, 0x48($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X48);
    // 0x151402AC: lw          $a2, 0x44($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X44);
    // 0x151402B0: jal         0x150A8050
    // 0x151402B4: lw          $a1, 0x40($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X40);
    func_150A8050(rdram, ctx);
        goto after_3;
    // 0x151402B4: lw          $a1, 0x40($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X40);
    after_3:
    // 0x151402B8: lwc1        $f4, 0x34($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X34);
    // 0x151402BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151402C0: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x151402C4: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x151402C8: lwc1        $f6, 0x38($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X38);
    // 0x151402CC: addiu       $s3, $sp, 0x58
    ctx->r19 = ADD32(ctx->r29, 0X58);
    // 0x151402D0: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x151402D4: lwc1        $f8, 0x3C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x151402D8: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
L_151402DC:
    // 0x151402DC: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151402E0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x151402E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151402E8: mflo        $t1
    ctx->r9 = lo;
    // 0x151402EC: addu        $s1, $s3, $t1
    ctx->r17 = ADD32(ctx->r19, ctx->r9);
    // 0x151402F0: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x151402F4: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x151402F8: addiu       $t2, $s1, 0x4
    ctx->r10 = ADD32(ctx->r17, 0X4);
    // 0x151402FC: addiu       $t3, $s1, 0x8
    ctx->r11 = ADD32(ctx->r17, 0X8);
    // 0x15140300: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x15140304: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15140308: jal         0x150A7960
    // 0x1514030C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_150A7960(rdram, ctx);
        goto after_4;
    // 0x1514030C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_4:
    // 0x15140310: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x15140314: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x15140318: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1514031C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15140320: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x15140324: nop

    // 0x15140328: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x1514032C: lwc1        $f18, 0x4($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15140330: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x15140334: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x15140338: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1514033C: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x15140340: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x15140344: nop

    // 0x15140348: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x1514034C: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x15140350: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x15140354: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15140358: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x1514035C: nop

    // 0x15140360: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    // 0x15140364: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
    // 0x15140368: sh          $zero, 0x6($t3)
    MEM_H(0X6, ctx->r11) = 0;
    // 0x1514036C: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x15140370: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x15140374: sw          $t5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r13;
    // 0x15140378: bne         $at, $zero, L_151402DC
    if (ctx->r1 != 0) {
        // 0x1514037C: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_151402DC;
    }
    // 0x1514037C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x15140380: lw          $v0, 0xC8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC8);
L_15140384:
    // 0x15140384: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15140388: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x1514038C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15140390: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x15140394: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x15140398: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x1514039C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x151403A0: jr          $ra
    // 0x151403A4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    return;
    // 0x151403A4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_15158920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15158920: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x15158924: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x15158928: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x1515892C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x15158930: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15158934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15158938: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x1515893C: addiu       $t6, $t6, -0x51E8
    ctx->r14 = ADD32(ctx->r14, -0X51E8);
    // 0x15158940: addiu       $t9, $t6, 0x3C
    ctx->r25 = ADD32(ctx->r14, 0X3C);
    // 0x15158944: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
L_15158948:
    // 0x15158948: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x1515894C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x15158950: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x15158954: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x15158958: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x1515895C: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x15158960: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x15158964: bne         $t6, $t9, L_15158948
    if (ctx->r14 != ctx->r25) {
        // 0x15158968: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_15158948;
    }
    // 0x15158968: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x1515896C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x15158970: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x15158974: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15158978: lwc1        $f6, 0x6070($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6070);
    // 0x1515897C: lwc1        $f4, 0xF8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XF8);
    // 0x15158980: lwc1        $f8, 0x48($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X48);
    // 0x15158984: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x15158988: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1515898C: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x15158990: lwc1        $f10, 0x4C($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4C);
    // 0x15158994: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x15158998: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x1515899C: lwc1        $f16, 0x50($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X50);
    // 0x151589A0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151589A4: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x151589A8: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x151589AC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151589B0: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151589B4: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151589B8: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151589BC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x151589C0: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151589C4: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151589C8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x151589CC: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x151589D0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151589D4: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x151589D8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151589DC: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151589E0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x151589E4: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151589E8: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151589EC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x151589F0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151589F4: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x151589F8: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151589FC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x15158A00: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x15158A04: jal         0x150A7790
    // 0x15158A08: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    guMtxF2L(rdram, ctx);
        goto after_0;
    // 0x15158A08: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x15158A0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15158A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15158A14: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x15158A18: jr          $ra
    // 0x15158A1C: nop

    return;
    return;
    // 0x15158A1C: nop

;}
RECOMP_FUNC void func_151319C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151319C4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151319C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151319CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151319D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151319D4: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x151319D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151319DC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151319E0: beql        $t7, $zero, L_15131AE8
    if (ctx->r15 == 0) {
        // 0x151319E4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15131AE8;
    }
    goto skip_0;
    // 0x151319E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x151319E8: lb          $v0, 0x1($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X1);
    // 0x151319EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151319F0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151319F4: beq         $v0, $at, L_15131AE4
    if (ctx->r2 == ctx->r1) {
        // 0x151319F8: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_15131AE4;
    }
    // 0x151319F8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x151319FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15131A00: lw          $t9, -0x678C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X678C);
    // 0x15131A04: beql        $t9, $zero, L_15131AE8
    if (ctx->r25 == 0) {
        // 0x15131A08: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15131AE8;
    }
    goto skip_1;
    // 0x15131A08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_1:
    // 0x15131A0C: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x15131A10: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x15131A14: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15131A18: nop

    // 0x15131A1C: bc1fl       L_15131AE8
    if (!c1cs) {
        // 0x15131A20: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15131AE8;
    }
    goto skip_2;
    // 0x15131A20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_2:
    // 0x15131A24: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15131A28: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x15131A2C: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x15131A30: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x15131A34: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x15131A38: lwc1        $f16, 0x48($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X48);
    // 0x15131A3C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x15131A40: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x15131A44: sb          $v1, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r3;
    // 0x15131A48: jal         0x1514672C
    // 0x15131A4C: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    func_1514672C(rdram, ctx);
        goto after_0;
    // 0x15131A4C: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x15131A50: bne         $v0, $zero, L_15131A60
    if (ctx->r2 != 0) {
        // 0x15131A54: lbu         $v1, 0x3F($sp)
        ctx->r3 = MEM_BU(ctx->r29, 0X3F);
            goto L_15131A60;
    }
    // 0x15131A54: lbu         $v1, 0x3F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3F);
    // 0x15131A58: b           L_15131AE8
    // 0x15131A5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15131AE8;
    // 0x15131A5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15131A60:
    // 0x15131A60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15131A64: lwc1        $f4, 0x3844($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3844);
    // 0x15131A68: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15131A6C: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x15131A70: sb          $v1, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r3;
    // 0x15131A74: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15131A78: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x15131A7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15131A80: addiu       $a3, $s0, 0x80
    ctx->r7 = ADD32(ctx->r16, 0X80);
    // 0x15131A84: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x15131A88: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15131A8C: jal         0x15046C80
    // 0x15131A90: nop

    func_15046C80(rdram, ctx);
        goto after_1;
    // 0x15131A90: nop

    after_1:
    // 0x15131A94: beq         $v0, $zero, L_15131AE4
    if (ctx->r2 == 0) {
        // 0x15131A98: lbu         $v1, 0x3F($sp)
        ctx->r3 = MEM_BU(ctx->r29, 0X3F);
            goto L_15131AE4;
    }
    // 0x15131A98: lbu         $v1, 0x3F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3F);
    // 0x15131A9C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x15131AA0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15131AA4: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15131AA8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15131AAC: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x15131AB0: lwc1        $f18, 0x80($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X80);
    // 0x15131AB4: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x15131AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15131ABC: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x15131AC0: lb          $t0, 0x1($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X1);
    // 0x15131AC4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x15131AC8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x15131ACC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x15131AD0: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x15131AD4: lw          $t9, -0x678C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X678C);
    // 0x15131AD8: jalr        $t9
    // 0x15131ADC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x15131ADC: nop

    after_2:
    // 0x15131AE0: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_15131AE4:
    // 0x15131AE4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15131AE8:
    // 0x15131AE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15131AEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15131AF0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15131AF4: jr          $ra
    // 0x15131AF8: nop

    return;
    return;
    // 0x15131AF8: nop

;}
RECOMP_FUNC void __osSiGetAccess2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F03A0: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x151F03A4: lw          $t6, -0x41E0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X41E0);
    // 0x151F03A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151F03AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F03B0: bne         $t6, $zero, L_151F03C0
    if (ctx->r14 != 0) {
        // 0x151F03B4: nop
    
            goto L_151F03C0;
    }
    // 0x151F03B4: nop

    // 0x151F03B8: jal         0x10025700
    // 0x151F03BC: nop

    __osSiCreateAccessQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x151F03BC: nop

    after_0:
L_151F03C0:
    // 0x151F03C0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x151F03C4: addiu       $a0, $a0, 0x2AA8
    ctx->r4 = ADD32(ctx->r4, 0X2AA8);
    // 0x151F03C8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x151F03CC: jal         0x10023440
    // 0x151F03D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x151F03D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x151F03D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F03D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151F03DC: jr          $ra
    // 0x151F03E0: nop

    return;
    return;
    // 0x151F03E0: nop

;}
RECOMP_FUNC void func_1508F0D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508F0D4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1508F0D8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1508F0DC: addiu       $v0, $v0, 0x245C
    ctx->r2 = ADD32(ctx->r2, 0X245C);
    // 0x1508F0E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1508F0E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1508F0E8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x1508F0EC: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x1508F0F0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1508F0F4: beq         $a0, $zero, L_1508F1BC
    if (ctx->r4 == 0) {
        // 0x1508F0F8: addiu       $s0, $s0, -0x161C
        ctx->r16 = ADD32(ctx->r16, -0X161C);
            goto L_1508F1BC;
    }
    // 0x1508F0F8: addiu       $s0, $s0, -0x161C
    ctx->r16 = ADD32(ctx->r16, -0X161C);
    // 0x1508F0FC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
L_1508F100:
    // 0x1508F100: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508F104: lwc1        $f4, 0x94($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X94);
    // 0x1508F108: lwc1        $f10, 0x84($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1508F10C: lwc1        $f18, 0x90($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X90);
    // 0x1508F110: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1508F114: lwc1        $f6, 0x88($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
    // 0x1508F118: lbu         $v0, 0xB4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB4);
    // 0x1508F11C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x1508F120: swc1        $f8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f8.u32l;
    // 0x1508F124: lwc1        $f8, 0x94($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X94);
    // 0x1508F128: lwc1        $f18, 0x8C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x1508F12C: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
    // 0x1508F130: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1508F134: lwc1        $f4, 0x98($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X98);
    // 0x1508F138: lwc1        $f8, 0x9C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x1508F13C: swc1        $f10, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f10.u32l;
    // 0x1508F140: lwc1        $f10, 0xA8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x1508F144: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1508F148: lwc1        $f4, 0xA0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x1508F14C: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1508F150: swc1        $f6, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f6.u32l;
    // 0x1508F154: lwc1        $f6, 0xAC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x1508F158: lwc1        $f10, 0xA4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x1508F15C: swc1        $f18, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f18.u32l;
    // 0x1508F160: lwc1        $f18, 0xB0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x1508F164: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1508F168: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x1508F16C: swc1        $f8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f8.u32l;
    // 0x1508F170: swc1        $f4, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f4.u32l;
    // 0x1508F174: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x1508F178: subu        $v0, $v0, $t6
    ctx->r2 = SUB32(ctx->r2, ctx->r14);
    // 0x1508F17C: bgtzl       $v0, L_1508F1AC
    if (SIGNED(ctx->r2) > 0) {
        // 0x1508F180: sb          $v0, 0xB4($a0)
        MEM_B(0XB4, ctx->r4) = ctx->r2;
            goto L_1508F1AC;
    }
    goto skip_0;
    // 0x1508F180: sb          $v0, 0xB4($a0)
    MEM_B(0XB4, ctx->r4) = ctx->r2;
    skip_0:
    // 0x1508F184: lw          $t7, 0x80($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X80);
    // 0x1508F188: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1508F18C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x1508F190: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1508F194: jal         0x100043B4
    // 0x1508F198: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x1508F198: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x1508F19C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x1508F1A0: b           L_1508F1B0
    // 0x1508F1A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
        goto L_1508F1B0;
    // 0x1508F1A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1508F1A8: sb          $v0, 0xB4($a0)
    MEM_B(0XB4, ctx->r4) = ctx->r2;
L_1508F1AC:
    // 0x1508F1AC: addiu       $v1, $a0, 0x80
    ctx->r3 = ADD32(ctx->r4, 0X80);
L_1508F1B0:
    // 0x1508F1B0: lw          $a0, 0x80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X80);
    // 0x1508F1B4: bnel        $a0, $zero, L_1508F100
    if (ctx->r4 != 0) {
        // 0x1508F1B8: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_1508F100;
    }
    goto skip_1;
    // 0x1508F1B8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    skip_1:
L_1508F1BC:
    // 0x1508F1BC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1508F1C0: addiu       $t0, $t0, 0x2457
    ctx->r8 = ADD32(ctx->r8, 0X2457);
    // 0x1508F1C4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1508F1C8: lbu         $v1, -0x3B66($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B66);
    // 0x1508F1CC: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x1508F1D0: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x1508F1D4: addiu       $s0, $s0, -0x161C
    ctx->r16 = ADD32(ctx->r16, -0X161C);
    // 0x1508F1D8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1508F1DC: beq         $at, $zero, L_1508F27C
    if (ctx->r1 == 0) {
        // 0x1508F1E0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_1508F27C;
    }
    // 0x1508F1E0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1508F1E4: addiu       $t8, $zero, 0xF0
    ctx->r24 = ADD32(0, 0XF0);
    // 0x1508F1E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F1EC: beq         $a1, $v1, L_1508F258
    if (ctx->r5 == ctx->r3) {
        // 0x1508F1F0: sw          $t8, 0x2444($at)
        MEM_W(0X2444, ctx->r1) = ctx->r24;
            goto L_1508F258;
    }
    // 0x1508F1F0: sw          $t8, 0x2444($at)
    MEM_W(0X2444, ctx->r1) = ctx->r24;
    // 0x1508F1F4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1508F1F8: addiu       $t1, $t1, 0x2428
    ctx->r9 = ADD32(ctx->r9, 0X2428);
    // 0x1508F1FC: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
L_1508F200:
    // 0x1508F200: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x1508F204: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x1508F208: lh          $t2, -0x2346($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X2346);
    // 0x1508F20C: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1508F210: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x1508F214: nop

    // 0x1508F218: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1508F21C: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x1508F220: nop

    // 0x1508F224: bc1fl       L_1508F250
    if (!c1cs) {
        // 0x1508F228: lbu         $v0, 0x0($t0)
        ctx->r2 = MEM_BU(ctx->r8, 0X0);
            goto L_1508F250;
    }
    goto skip_2;
    // 0x1508F228: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    skip_2:
    // 0x1508F22C: jal         0x1508F7BC
    // 0x1508F230: nop

    func_1508F7BC(rdram, ctx);
        goto after_1;
    // 0x1508F230: nop

    after_1:
    // 0x1508F234: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1508F238: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1508F23C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1508F240: lbu         $v1, -0x3B66($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B66);
    // 0x1508F244: addiu       $t1, $t1, 0x2428
    ctx->r9 = ADD32(ctx->r9, 0X2428);
    // 0x1508F248: addiu       $t0, $t0, 0x2457
    ctx->r8 = ADD32(ctx->r8, 0X2457);
    // 0x1508F24C: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
L_1508F250:
    // 0x1508F250: bnel        $v0, $v1, L_1508F200
    if (ctx->r2 != ctx->r3) {
        // 0x1508F254: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_1508F200;
    }
    goto skip_3;
    // 0x1508F254: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    skip_3:
L_1508F258:
    // 0x1508F258: addiu       $a0, $zero, 0x1A6
    ctx->r4 = ADD32(0, 0X1A6);
    // 0x1508F25C: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x1508F260: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1508F264: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1508F268: jal         0x10010F30
    // 0x1508F26C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_2;
    // 0x1508F26C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x1508F270: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1508F274: b           L_1508F2F8
    // 0x1508F278: addiu       $t0, $t0, 0x2457
    ctx->r8 = ADD32(ctx->r8, 0X2457);
        goto L_1508F2F8;
    // 0x1508F278: addiu       $t0, $t0, 0x2457
    ctx->r8 = ADD32(ctx->r8, 0X2457);
L_1508F27C:
    // 0x1508F27C: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1508F280: beq         $at, $zero, L_1508F2F8
    if (ctx->r1 == 0) {
        // 0x1508F284: addiu       $t3, $zero, 0xF0
        ctx->r11 = ADD32(0, 0XF0);
            goto L_1508F2F8;
    }
    // 0x1508F284: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x1508F288: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F28C: beq         $a1, $v1, L_1508F2F8
    if (ctx->r5 == ctx->r3) {
        // 0x1508F290: sw          $t3, 0x2444($at)
        MEM_W(0X2444, ctx->r1) = ctx->r11;
            goto L_1508F2F8;
    }
    // 0x1508F290: sw          $t3, 0x2444($at)
    MEM_W(0X2444, ctx->r1) = ctx->r11;
    // 0x1508F294: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1508F298: addiu       $t1, $t1, 0x2428
    ctx->r9 = ADD32(ctx->r9, 0X2428);
    // 0x1508F29C: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
L_1508F2A0:
    // 0x1508F2A0: sb          $t4, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r12;
    // 0x1508F2A4: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x1508F2A8: lh          $t5, -0x2346($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X2346);
    // 0x1508F2AC: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1508F2B0: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1508F2B4: nop

    // 0x1508F2B8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508F2BC: c.eq.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl == ctx->f8.fl;
    // 0x1508F2C0: nop

    // 0x1508F2C4: bc1fl       L_1508F2F0
    if (!c1cs) {
        // 0x1508F2C8: lbu         $v0, 0x0($t0)
        ctx->r2 = MEM_BU(ctx->r8, 0X0);
            goto L_1508F2F0;
    }
    goto skip_4;
    // 0x1508F2C8: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    skip_4:
    // 0x1508F2CC: jal         0x1508F9C4
    // 0x1508F2D0: nop

    func_1508F9C4(rdram, ctx);
        goto after_3;
    // 0x1508F2D0: nop

    after_3:
    // 0x1508F2D4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1508F2D8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1508F2DC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1508F2E0: lbu         $v1, -0x3B66($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B66);
    // 0x1508F2E4: addiu       $t1, $t1, 0x2428
    ctx->r9 = ADD32(ctx->r9, 0X2428);
    // 0x1508F2E8: addiu       $t0, $t0, 0x2457
    ctx->r8 = ADD32(ctx->r8, 0X2457);
    // 0x1508F2EC: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
L_1508F2F0:
    // 0x1508F2F0: bnel        $v0, $v1, L_1508F2A0
    if (ctx->r2 != ctx->r3) {
        // 0x1508F2F4: addiu       $t4, $v0, 0x1
        ctx->r12 = ADD32(ctx->r2, 0X1);
            goto L_1508F2A0;
    }
    goto skip_5;
    // 0x1508F2F4: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    skip_5:
L_1508F2F8:
    // 0x1508F2F8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1508F2FC: lw          $v0, 0x2444($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2444);
    // 0x1508F300: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1508F304: addiu       $t1, $t1, 0x2428
    ctx->r9 = ADD32(ctx->r9, 0X2428);
    // 0x1508F308: beq         $v0, $zero, L_1508F538
    if (ctx->r2 == 0) {
        // 0x1508F30C: lwc1        $f2, 0x0($t1)
        ctx->f2.u32l = MEM_W(ctx->r9, 0X0);
            goto L_1508F538;
    }
    // 0x1508F30C: lwc1        $f2, 0x0($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1508F310: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x1508F314: lh          $t6, -0x2346($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2346);
    // 0x1508F318: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1508F31C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1508F320: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1508F324: nop

    // 0x1508F328: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508F32C: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x1508F330: nop

    // 0x1508F334: bc1fl       L_1508F438
    if (!c1cs) {
        // 0x1508F338: lbu         $a1, 0x0($t0)
        ctx->r5 = MEM_BU(ctx->r8, 0X0);
            goto L_1508F438;
    }
    goto skip_6;
    // 0x1508F338: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    skip_6:
    // 0x1508F33C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x1508F340: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F344: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1508F348: subu        $t7, $v0, $a1
    ctx->r15 = SUB32(ctx->r2, ctx->r5);
    // 0x1508F34C: sw          $t7, 0x2444($at)
    MEM_W(0X2444, ctx->r1) = ctx->r15;
    // 0x1508F350: lw          $t8, 0x2444($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2444);
    // 0x1508F354: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F358: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x1508F35C: bgtz        $t8, L_1508F368
    if (SIGNED(ctx->r24) > 0) {
        // 0x1508F360: nop
    
            goto L_1508F368;
    }
    // 0x1508F360: nop

    // 0x1508F364: sw          $zero, 0x2444($at)
    MEM_W(0X2444, ctx->r1) = 0;
L_1508F368:
    // 0x1508F368: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508F36C: lwc1        $f16, -0x22FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X22FC);
    // 0x1508F370: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508F374: lwc1        $f14, -0x22F8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X22F8);
L_1508F378:
    // 0x1508F378: blez        $a1, L_1508F420
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1508F37C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_1508F420;
    }
    // 0x1508F37C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1508F380: mtc1        $a1, $f10
    ctx->f10.u32l = ctx->r5;
    // 0x1508F384: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1508F388: addiu       $t9, $t9, 0x2890
    ctx->r25 = ADD32(ctx->r25, 0X2890);
    // 0x1508F38C: sll         $a2, $a3, 2
    ctx->r6 = S32(ctx->r7 << 2);
    // 0x1508F390: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1508F394: addiu       $t2, $t2, 0x2438
    ctx->r10 = ADD32(ctx->r10, 0X2438);
    // 0x1508F398: addu        $v0, $a2, $t9
    ctx->r2 = ADD32(ctx->r6, ctx->r25);
    // 0x1508F39C: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1508F3A0: addu        $v1, $a2, $t2
    ctx->r3 = ADD32(ctx->r6, ctx->r10);
    // 0x1508F3A4: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508F3A8: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1508F3AC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1508F3B0: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1508F3B4: mul.s       $f10, $f18, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x1508F3B8: beql        $at, $zero, L_1508F400
    if (ctx->r1 == 0) {
        // 0x1508F3BC: add.s       $f8, $f2, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f10.fl;
            goto L_1508F400;
    }
    goto skip_7;
    // 0x1508F3BC: add.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f10.fl;
    skip_7:
    // 0x1508F3C0: add.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f10.fl;
L_1508F3C4:
    // 0x1508F3C4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1508F3C8: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1508F3CC: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x1508F3D0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1508F3D4: mul.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1508F3D8: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x1508F3DC: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1508F3E0: mul.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x1508F3E4: add.s       $f8, $f18, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x1508F3E8: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x1508F3EC: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1508F3F0: mul.s       $f10, $f18, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x1508F3F4: bnel        $at, $zero, L_1508F3C4
    if (ctx->r1 != 0) {
        // 0x1508F3F8: add.s       $f8, $f2, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f10.fl;
            goto L_1508F3C4;
    }
    goto skip_8;
    // 0x1508F3F8: add.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f10.fl;
    skip_8:
    // 0x1508F3FC: add.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f10.fl;
L_1508F400:
    // 0x1508F400: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x1508F404: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1508F408: mul.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1508F40C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x1508F410: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1508F414: mul.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x1508F418: add.s       $f8, $f18, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x1508F41C: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
L_1508F420:
    // 0x1508F420: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x1508F424: bne         $a3, $t0, L_1508F378
    if (ctx->r7 != ctx->r8) {
        // 0x1508F428: nop
    
            goto L_1508F378;
    }
    // 0x1508F428: nop

    // 0x1508F42C: b           L_1508F5D0
    // 0x1508F430: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
        goto L_1508F5D0;
    // 0x1508F430: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1508F434: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
L_1508F438:
    // 0x1508F438: lbu         $v1, 0x2456($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2456);
    // 0x1508F43C: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1508F440: beql        $at, $zero, L_1508F4D0
    if (ctx->r1 == 0) {
        // 0x1508F444: lw          $t4, 0x0($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X0);
            goto L_1508F4D0;
    }
    goto skip_9;
    // 0x1508F444: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    skip_9:
    // 0x1508F448: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x1508F44C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1508F450: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1508F454: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x1508F458: subu        $v0, $v1, $a1
    ctx->r2 = SUB32(ctx->r3, ctx->r5);
    // 0x1508F45C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1508F460: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1508F464: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1508F468: add.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x1508F46C: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
    // 0x1508F470: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1508F474: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x1508F478: nop

    // 0x1508F47C: bc1fl       L_1508F5D0
    if (!c1cs) {
        // 0x1508F480: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1508F5D0;
    }
    goto skip_10;
    // 0x1508F480: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_10:
    // 0x1508F484: blez        $v0, L_1508F4AC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1508F488: swc1        $f0, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
            goto L_1508F4AC;
    }
    // 0x1508F488: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    // 0x1508F48C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_1508F490:
    // 0x1508F490: jal         0x1508F7BC
    // 0x1508F494: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_1508F7BC(rdram, ctx);
        goto after_4;
    // 0x1508F494: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_4:
    // 0x1508F498: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x1508F49C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x1508F4A0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1508F4A4: bnel        $a0, $v0, L_1508F490
    if (ctx->r4 != ctx->r2) {
        // 0x1508F4A8: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_1508F490;
    }
    goto skip_11;
    // 0x1508F4A8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    skip_11:
L_1508F4AC:
    // 0x1508F4AC: addiu       $a0, $zero, 0x1A6
    ctx->r4 = ADD32(0, 0X1A6);
    // 0x1508F4B0: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x1508F4B4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1508F4B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1508F4BC: jal         0x10010F30
    // 0x1508F4C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_5;
    // 0x1508F4C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x1508F4C4: b           L_1508F5D0
    // 0x1508F4C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
        goto L_1508F5D0;
    // 0x1508F4C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1508F4CC: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
L_1508F4D0:
    // 0x1508F4D0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1508F4D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1508F4D8: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x1508F4DC: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x1508F4E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1508F4E4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508F4E8: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x1508F4EC: add.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1508F4F0: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x1508F4F4: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1508F4F8: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x1508F4FC: nop

    // 0x1508F500: bc1fl       L_1508F5D0
    if (!c1cs) {
        // 0x1508F504: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1508F5D0;
    }
    goto skip_12;
    // 0x1508F504: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_12:
    // 0x1508F508: blez        $v0, L_1508F5CC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1508F50C: swc1        $f0, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
            goto L_1508F5CC;
    }
    // 0x1508F50C: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    // 0x1508F510: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_1508F514:
    // 0x1508F514: jal         0x1508F9C4
    // 0x1508F518: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_1508F9C4(rdram, ctx);
        goto after_6;
    // 0x1508F518: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_6:
    // 0x1508F51C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x1508F520: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x1508F524: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1508F528: bnel        $a0, $v0, L_1508F514
    if (ctx->r4 != ctx->r2) {
        // 0x1508F52C: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_1508F514;
    }
    goto skip_13;
    // 0x1508F52C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    skip_13:
    // 0x1508F530: b           L_1508F5D0
    // 0x1508F534: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
        goto L_1508F5D0;
    // 0x1508F534: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_1508F538:
    // 0x1508F538: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x1508F53C: lh          $t5, -0x234C($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X234C);
    // 0x1508F540: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x1508F544: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x1508F548: nop

    // 0x1508F54C: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1508F550: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x1508F554: nop

    // 0x1508F558: bc1tl       L_1508F5D0
    if (c1cs) {
        // 0x1508F55C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1508F5D0;
    }
    goto skip_14;
    // 0x1508F55C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_14:
    // 0x1508F560: lh          $t6, -0x2346($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2346);
    // 0x1508F564: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508F568: lwc1        $f14, -0x22F4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X22F4);
    // 0x1508F56C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x1508F570: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508F574: lwc1        $f6, -0x22F0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X22F0);
    // 0x1508F578: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508F57C: sub.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x1508F580: mul.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1508F584: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x1508F588: nop

    // 0x1508F58C: bc1fl       L_1508F59C
    if (!c1cs) {
        // 0x1508F590: lw          $t7, 0x0($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X0);
            goto L_1508F59C;
    }
    goto skip_15;
    // 0x1508F590: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    skip_15:
    // 0x1508F594: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x1508F598: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
L_1508F59C:
    // 0x1508F59C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x1508F5A0: nop

    // 0x1508F5A4: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1508F5A8: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1508F5AC: sub.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x1508F5B0: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x1508F5B4: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1508F5B8: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x1508F5BC: nop

    // 0x1508F5C0: bc1fl       L_1508F5D0
    if (!c1cs) {
        // 0x1508F5C4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1508F5D0;
    }
    goto skip_16;
    // 0x1508F5C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_16:
    // 0x1508F5C8: swc1        $f12, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f12.u32l;
L_1508F5CC:
    // 0x1508F5CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_1508F5D0:
    // 0x1508F5D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1508F5D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F5D8: lwc1        $f12, 0x2410($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X2410);
    // 0x1508F5DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1508F5E0: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1508F5E4: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x1508F5E8: addiu       $t3, $t3, 0x2410
    ctx->r11 = ADD32(ctx->r11, 0X2410);
    // 0x1508F5EC: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x1508F5F0: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x1508F5F4: bc1t        L_1508F634
    if (c1cs) {
        // 0x1508F5F8: nop
    
            goto L_1508F634;
    }
    // 0x1508F5F8: nop

    // 0x1508F5FC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x1508F600: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508F604: lwc1        $f14, -0x22EC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X22EC);
    // 0x1508F608: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x1508F60C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F610: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1508F614: mul.s       $f0, $f10, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x1508F618: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x1508F61C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x1508F620: swc1        $f12, 0x2410($at)
    MEM_W(0X2410, ctx->r1) = ctx->f12.u32l;
    // 0x1508F624: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F628: bc1f        L_1508F634
    if (!c1cs) {
        // 0x1508F62C: nop
    
            goto L_1508F634;
    }
    // 0x1508F62C: nop

    // 0x1508F630: swc1        $f2, 0x2410($at)
    MEM_W(0X2410, ctx->r1) = ctx->f2.u32l;
L_1508F634:
    // 0x1508F634: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F638: lwc1        $f12, 0x2414($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X2414);
    // 0x1508F63C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508F640: lwc1        $f14, -0x22E8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X22E8);
    // 0x1508F644: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x1508F648: nop

    // 0x1508F64C: bc1tl       L_1508F68C
    if (c1cs) {
        // 0x1508F650: lwc1        $f12, 0x0($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
            goto L_1508F68C;
    }
    goto skip_17;
    // 0x1508F650: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    skip_17:
    // 0x1508F654: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x1508F658: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F65C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1508F660: nop

    // 0x1508F664: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508F668: mul.s       $f0, $f8, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x1508F66C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x1508F670: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x1508F674: swc1        $f12, 0x2414($at)
    MEM_W(0X2414, ctx->r1) = ctx->f12.u32l;
    // 0x1508F678: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F67C: bc1fl       L_1508F68C
    if (!c1cs) {
        // 0x1508F680: lwc1        $f12, 0x0($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
            goto L_1508F68C;
    }
    goto skip_18;
    // 0x1508F680: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    skip_18:
    // 0x1508F684: swc1        $f2, 0x2414($at)
    MEM_W(0X2414, ctx->r1) = ctx->f2.u32l;
    // 0x1508F688: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
L_1508F68C:
    // 0x1508F68C: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x1508F690: nop

    // 0x1508F694: bc1tl       L_1508F6D4
    if (c1cs) {
        // 0x1508F698: lwc1        $f12, 0x4($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
            goto L_1508F6D4;
    }
    goto skip_19;
    // 0x1508F698: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    skip_19:
    // 0x1508F69C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x1508F6A0: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x1508F6A4: nop

    // 0x1508F6A8: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508F6AC: mul.s       $f0, $f18, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x1508F6B0: add.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x1508F6B4: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x1508F6B8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1508F6BC: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x1508F6C0: nop

    // 0x1508F6C4: bc1fl       L_1508F6D4
    if (!c1cs) {
        // 0x1508F6C8: lwc1        $f12, 0x4($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
            goto L_1508F6D4;
    }
    goto skip_20;
    // 0x1508F6C8: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    skip_20:
    // 0x1508F6CC: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x1508F6D0: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
L_1508F6D4:
    // 0x1508F6D4: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x1508F6D8: nop

    // 0x1508F6DC: bc1tl       L_1508F71C
    if (c1cs) {
        // 0x1508F6E0: lwc1        $f12, 0x8($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
            goto L_1508F71C;
    }
    goto skip_21;
    // 0x1508F6E0: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    skip_21:
    // 0x1508F6E4: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x1508F6E8: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x1508F6EC: nop

    // 0x1508F6F0: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1508F6F4: mul.s       $f0, $f6, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x1508F6F8: add.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x1508F6FC: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x1508F700: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1508F704: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x1508F708: nop

    // 0x1508F70C: bc1fl       L_1508F71C
    if (!c1cs) {
        // 0x1508F710: lwc1        $f12, 0x8($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
            goto L_1508F71C;
    }
    goto skip_22;
    // 0x1508F710: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    skip_22:
    // 0x1508F714: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x1508F718: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
L_1508F71C:
    // 0x1508F71C: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x1508F720: nop

    // 0x1508F724: bc1tl       L_1508F764
    if (c1cs) {
        // 0x1508F728: lwc1        $f12, 0xC($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
            goto L_1508F764;
    }
    goto skip_23;
    // 0x1508F728: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    skip_23:
    // 0x1508F72C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x1508F730: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1508F734: nop

    // 0x1508F738: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508F73C: mul.s       $f0, $f8, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x1508F740: add.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x1508F744: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x1508F748: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1508F74C: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x1508F750: nop

    // 0x1508F754: bc1fl       L_1508F764
    if (!c1cs) {
        // 0x1508F758: lwc1        $f12, 0xC($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
            goto L_1508F764;
    }
    goto skip_24;
    // 0x1508F758: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    skip_24:
    // 0x1508F75C: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x1508F760: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
L_1508F764:
    // 0x1508F764: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x1508F768: nop

    // 0x1508F76C: bc1tl       L_1508F7AC
    if (c1cs) {
        // 0x1508F770: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1508F7AC;
    }
    goto skip_25;
    // 0x1508F770: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_25:
    // 0x1508F774: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x1508F778: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x1508F77C: nop

    // 0x1508F780: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508F784: mul.s       $f0, $f4, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x1508F788: add.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x1508F78C: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x1508F790: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1508F794: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x1508F798: nop

    // 0x1508F79C: bc1fl       L_1508F7AC
    if (!c1cs) {
        // 0x1508F7A0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1508F7AC;
    }
    goto skip_26;
    // 0x1508F7A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_26:
    // 0x1508F7A4: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    // 0x1508F7A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1508F7AC:
    // 0x1508F7AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1508F7B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1508F7B4: jr          $ra
    // 0x1508F7B8: nop

    return;
    return;
    // 0x1508F7B8: nop

;}
RECOMP_FUNC void func_15012ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15012ED8: addiu       $a2, $zero, -0x21
    ctx->r6 = ADD32(0, -0X21);
    // 0x15012EDC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x15012EE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15012EE4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15012EE8: srl         $t6, $v1, 24
    ctx->r14 = S32(U32(ctx->r3) >> 24);
    // 0x15012EEC: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x15012EF0: sra         $v1, $t7, 24
    ctx->r3 = S32(SIGNED(ctx->r15) >> 24);
    // 0x15012EF4: beq         $v1, $a2, L_15012F88
    if (ctx->r3 == ctx->r6) {
        // 0x15012EF8: addiu       $t3, $zero, 0x3
        ctx->r11 = ADD32(0, 0X3);
            goto L_15012F88;
    }
    // 0x15012EF8: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x15012EFC: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15012F00: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15012F04: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15012F08: addiu       $t0, $t0, -0x1AB0
    ctx->r8 = ADD32(ctx->r8, -0X1AB0);
    // 0x15012F0C: addiu       $t1, $t1, -0x1A9C
    ctx->r9 = ADD32(ctx->r9, -0X1A9C);
    // 0x15012F10: addiu       $t2, $t2, -0x1AD0
    ctx->r10 = ADD32(ctx->r10, -0X1AD0);
    // 0x15012F14: addiu       $a3, $zero, -0x5
    ctx->r7 = ADD32(0, -0X5);
L_15012F18:
    // 0x15012F18: bnel        $v1, $a3, L_15012F6C
    if (ctx->r3 != ctx->r7) {
        // 0x15012F1C: lw          $v1, 0x8($a1)
        ctx->r3 = MEM_W(ctx->r5, 0X8);
            goto L_15012F6C;
    }
    goto skip_0;
    // 0x15012F1C: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    skip_0:
    // 0x15012F20: lbu         $v1, 0x0($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X0);
    // 0x15012F24: multu       $v1, $t3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15012F28: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x15012F2C: addu        $t4, $t0, $t9
    ctx->r12 = ADD32(ctx->r8, ctx->r25);
    // 0x15012F30: sh          $v0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r2;
    // 0x15012F34: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x15012F38: srl         $t8, $t6, 24
    ctx->r24 = S32(U32(ctx->r14) >> 24);
    // 0x15012F3C: mflo        $t5
    ctx->r13 = lo;
    // 0x15012F40: addu        $a0, $t2, $t5
    ctx->r4 = ADD32(ctx->r10, ctx->r13);
    // 0x15012F44: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x15012F48: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x15012F4C: srl         $t5, $t9, 16
    ctx->r13 = S32(U32(ctx->r25) >> 16);
    // 0x15012F50: sb          $t5, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r13;
    // 0x15012F54: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x15012F58: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x15012F5C: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
    // 0x15012F60: srl         $t8, $t6, 8
    ctx->r24 = S32(U32(ctx->r14) >> 8);
    // 0x15012F64: sb          $t8, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r24;
    // 0x15012F68: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
L_15012F6C:
    // 0x15012F6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15012F70: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x15012F74: srl         $t4, $v1, 24
    ctx->r12 = S32(U32(ctx->r3) >> 24);
    // 0x15012F78: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x15012F7C: sra         $v1, $t5, 24
    ctx->r3 = S32(SIGNED(ctx->r13) >> 24);
    // 0x15012F80: bne         $v1, $a2, L_15012F18
    if (ctx->r3 != ctx->r6) {
        // 0x15012F84: nop
    
            goto L_15012F18;
    }
    // 0x15012F84: nop

L_15012F88:
    // 0x15012F88: jr          $ra
    // 0x15012F8C: nop

    return;
    return;
    // 0x15012F8C: nop

;}
RECOMP_FUNC void func_151A4ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A4ECC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151A4ED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A4ED4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151A4ED8: lw          $t6, 0x28($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X28);
    // 0x151A4EDC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151A4EE0: addiu       $a0, $a2, 0x28
    ctx->r4 = ADD32(ctx->r6, 0X28);
    // 0x151A4EE4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x151A4EE8: bnel        $t7, $zero, L_151A4EF8
    if (ctx->r15 != 0) {
        // 0x151A4EEC: lw          $v0, 0x0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X0);
            goto L_151A4EF8;
    }
    goto skip_0;
    // 0x151A4EEC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x151A4EF0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151A4EF4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_151A4EF8:
    // 0x151A4EF8: lbu         $t8, 0x4($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X4);
    // 0x151A4EFC: lbu         $t9, 0x3B($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X3B);
    // 0x151A4F00: beq         $t8, $t9, L_151A4F0C
    if (ctx->r24 == ctx->r25) {
        // 0x151A4F04: nop
    
            goto L_151A4F0C;
    }
    // 0x151A4F04: nop

    // 0x151A4F08: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151A4F0C:
    // 0x151A4F0C: bne         $v1, $zero, L_151A4F50
    if (ctx->r3 != 0) {
        // 0x151A4F10: nop
    
            goto L_151A4F50;
    }
    // 0x151A4F10: nop

    // 0x151A4F14: lw          $t0, 0x1D4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X1D4);
    // 0x151A4F18: beq         $t0, $zero, L_151A4F50
    if (ctx->r8 == 0) {
        // 0x151A4F1C: nop
    
            goto L_151A4F50;
    }
    // 0x151A4F1C: nop

    // 0x151A4F20: lbu         $t1, 0x74($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X74);
    // 0x151A4F24: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151A4F28: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x151A4F2C: beq         $t2, $at, L_151A4F50
    if (ctx->r10 == ctx->r1) {
        // 0x151A4F30: nop
    
            goto L_151A4F50;
    }
    // 0x151A4F30: nop

    // 0x151A4F34: lbu         $a1, 0xC($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0XC);
    // 0x151A4F38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151A4F3C: sb          $v1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r3;
    // 0x151A4F40: jal         0x151A3504
    // 0x151A4F44: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_151A3504(rdram, ctx);
        goto after_0;
    // 0x151A4F44: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x151A4F48: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x151A4F4C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_151A4F50:
    // 0x151A4F50: beql        $v1, $zero, L_151A4F70
    if (ctx->r3 == 0) {
        // 0x151A4F54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A4F70;
    }
    goto skip_1;
    // 0x151A4F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151A4F58: lbu         $t4, 0xD($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0XD);
    // 0x151A4F5C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151A4F60: sh          $t3, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r11;
    // 0x151A4F64: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x151A4F68: sb          $t5, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r13;
    // 0x151A4F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151A4F70:
    // 0x151A4F70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151A4F74: jr          $ra
    // 0x151A4F78: nop

    return;
    return;
    // 0x151A4F78: nop

;}
RECOMP_FUNC void func_151D87AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D87AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D87B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D87B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D87B8: jal         0x151D8764
    // 0x151D87BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D8764(rdram, ctx);
        goto after_0;
    // 0x151D87BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D87C0: jal         0x15147928
    // 0x151D87C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15147928(rdram, ctx);
        goto after_1;
    // 0x151D87C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151D87C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D87CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D87D0: jr          $ra
    // 0x151D87D4: nop

    return;
    return;
    // 0x151D87D4: nop

;}
RECOMP_FUNC void func_150B02F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B02F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150B02F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150B02F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150B02FC: jal         0x150B02C0
    // 0x150B0300: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150B02C0(rdram, ctx);
        goto after_0;
    // 0x150B0300: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150B0304: jal         0x15132570
    // 0x150B0308: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15132570(rdram, ctx);
        goto after_1;
    // 0x150B0308: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150B030C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150B0310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150B0314: jr          $ra
    // 0x150B0318: nop

    return;
    return;
    // 0x150B0318: nop

;}
RECOMP_FUNC void func_15114F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15114F44: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15114F48: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15114F4C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x15114F50: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x15114F54: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x15114F58: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x15114F5C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x15114F60: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15114F64: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15114F68: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15114F6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15114F70: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x15114F74: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x15114F78: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x15114F7C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15114F80: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x15114F84: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x15114F88: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x15114F8C: beq         $v0, $at, L_15114FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15114F90: addiu       $s7, $s7, -0x4228
        ctx->r23 = ADD32(ctx->r23, -0X4228);
            goto L_15114FA4;
    }
    // 0x15114F90: addiu       $s7, $s7, -0x4228
    ctx->r23 = ADD32(ctx->r23, -0X4228);
    // 0x15114F94: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x15114F98: beq         $v0, $at, L_15114FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15114F9C: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_15114FA4;
    }
    // 0x15114F9C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x15114FA0: bne         $v0, $at, L_15115078
    if (ctx->r2 != ctx->r1) {
        // 0x15114FA4: lui         $s4, 0x800E
        ctx->r20 = S32(0X800E << 16);
            goto L_15115078;
    }
L_15114FA4:
    // 0x15114FA4: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x15114FA8: lui         $fp, 0x800E
    ctx->r30 = S32(0X800E << 16);
    // 0x15114FAC: lui         $s6, 0xC00
    ctx->r22 = S32(0XC00 << 16);
    // 0x15114FB0: lui         $s5, 0x8004
    ctx->r21 = S32(0X8004 << 16);
    // 0x15114FB4: addiu       $s5, $s5, -0x3720
    ctx->r21 = ADD32(ctx->r21, -0X3720);
    // 0x15114FB8: ori         $s6, $s6, 0x5A
    ctx->r22 = ctx->r22 | 0X5A;
    // 0x15114FBC: addiu       $fp, $fp, -0x41E0
    ctx->r30 = ADD32(ctx->r30, -0X41E0);
    // 0x15114FC0: addiu       $s4, $s4, -0x41E8
    ctx->r20 = ADD32(ctx->r20, -0X41E8);
    // 0x15114FC4: lui         $s3, 0xF000
    ctx->r19 = S32(0XF000 << 16);
    // 0x15114FC8: lui         $s2, 0x8000
    ctx->r18 = S32(0X8000 << 16);
L_15114FCC:
    // 0x15114FCC: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x15114FD0: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x15114FD4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15114FD8: blez        $a1, L_15115048
    if (SIGNED(ctx->r5) <= 0) {
        // 0x15114FDC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15115048;
    }
    // 0x15114FDC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_15114FE0:
    // 0x15114FE0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x15114FE4: and         $t6, $v0, $s3
    ctx->r14 = ctx->r2 & ctx->r19;
    // 0x15114FE8: bne         $s2, $t6, L_1511502C
    if (ctx->r18 != ctx->r14) {
        // 0x15114FEC: nop
    
            goto L_1511502C;
    }
    // 0x15114FEC: nop

    // 0x15114FF0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x15114FF4: and         $t7, $v1, $s3
    ctx->r15 = ctx->r3 & ctx->r19;
    // 0x15114FF8: bne         $s2, $t7, L_1511502C
    if (ctx->r18 != ctx->r15) {
        // 0x15114FFC: nop
    
            goto L_1511502C;
    }
    // 0x15114FFC: nop

    // 0x15115000: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x15115004: andi        $t9, $v0, 0x3
    ctx->r25 = ctx->r2 & 0X3;
    // 0x15115008: and         $t8, $a0, $s3
    ctx->r24 = ctx->r4 & ctx->r19;
    // 0x1511500C: bne         $s2, $t8, L_1511502C
    if (ctx->r18 != ctx->r24) {
        // 0x15115010: nop
    
            goto L_1511502C;
    }
    // 0x15115010: nop

    // 0x15115014: bne         $t9, $zero, L_1511502C
    if (ctx->r25 != 0) {
        // 0x15115018: andi        $t0, $v1, 0x3
        ctx->r8 = ctx->r3 & 0X3;
            goto L_1511502C;
    }
    // 0x15115018: andi        $t0, $v1, 0x3
    ctx->r8 = ctx->r3 & 0X3;
    // 0x1511501C: bne         $t0, $zero, L_1511502C
    if (ctx->r8 != 0) {
        // 0x15115020: andi        $t1, $a0, 0x3
        ctx->r9 = ctx->r4 & 0X3;
            goto L_1511502C;
    }
    // 0x15115020: andi        $t1, $a0, 0x3
    ctx->r9 = ctx->r4 & 0X3;
    // 0x15115024: beql        $t1, $zero, L_1511503C
    if (ctx->r9 == 0) {
        // 0x15115028: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1511503C;
    }
    goto skip_0;
    // 0x15115028: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
L_1511502C:
    // 0x1511502C: jal         0x150AD770
    // 0x15115030: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    func_150AD770(rdram, ctx);
        goto after_0;
    // 0x15115030: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    after_0:
    // 0x15115034: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x15115038: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1511503C:
    // 0x1511503C: slt         $at, $s1, $a1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15115040: bne         $at, $zero, L_15114FE0
    if (ctx->r1 != 0) {
        // 0x15115044: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_15114FE0;
    }
    // 0x15115044: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_15115048:
    // 0x15115048: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x1511504C: bne         $s4, $fp, L_15114FCC
    if (ctx->r20 != ctx->r30) {
        // 0x15115050: addiu       $s7, $s7, 0x4
        ctx->r23 = ADD32(ctx->r23, 0X4);
            goto L_15114FCC;
    }
    // 0x15115050: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x15115054: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x15115058: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x1511505C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15115060: sw          $t2, -0x4064($at)
    MEM_W(-0X4064, ctx->r1) = ctx->r10;
    // 0x15115064: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x15115068: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1511506C: sw          $t3, -0x4060($at)
    MEM_W(-0X4060, ctx->r1) = ctx->r11;
    // 0x15115070: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15115074: sw          $t4, -0x405C($at)
    MEM_W(-0X405C, ctx->r1) = ctx->r12;
L_15115078:
    // 0x15115078: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1511507C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15115080: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15115084: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15115088: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1511508C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15115090: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15115094: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15115098: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x1511509C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x151150A0: jr          $ra
    // 0x151150A4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x151150A4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_10020000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10020000: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x10020004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10020008: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x1002000C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x10020010: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x10020014: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x10020018: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x1002001C: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x10020020: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x10020024: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x10020028: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x1002002C: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
    // 0x10020030: addiu       $t9, $zero, 0xB8
    ctx->r25 = ADD32(0, 0XB8);
    // 0x10020034: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x10020038: sh          $zero, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = 0;
    // 0x1002003C: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x10020040: lw          $t1, 0x84($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X84);
    // 0x10020044: beq         $t1, $zero, L_10020914
    if (ctx->r9 == 0) {
        // 0x10020048: nop
    
            goto L_10020914;
    }
    // 0x10020048: nop

L_1002004C:
    // 0x1002004C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x10020050: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x10020054: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x10020058: lw          $t4, 0x84($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X84);
    // 0x1002005C: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x10020060: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x10020064: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x10020068: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x1002006C: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x10020070: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x10020074: addiu       $t9, $t8, 0xB7
    ctx->r25 = ADD32(ctx->r24, 0XB7);
    // 0x10020078: divu        $zero, $t9, $at
    lo = S32(U32(ctx->r25) / U32(ctx->r1)); hi = S32(U32(ctx->r25) % U32(ctx->r1));
    // 0x1002007C: mflo        $t0
    ctx->r8 = lo;
    // 0x10020080: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x10020084: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x10020088: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x1002008C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x10020090: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x10020094: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x10020098: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1002009C: bne         $t2, $zero, L_100200AC
    if (ctx->r10 != 0) {
        // 0x100200A0: nop
    
            goto L_100200AC;
    }
    // 0x100200A0: nop

    // 0x100200A4: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x100200A8: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
L_100200AC:
    // 0x100200AC: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x100200B0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x100200B4: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x100200B8: beq         $at, $zero, L_100200C8
    if (ctx->r1 == 0) {
        // 0x100200BC: nop
    
            goto L_100200C8;
    }
    // 0x100200BC: nop

    // 0x100200C0: b           L_10020914
    // 0x100200C4: nop

        goto L_10020914;
    // 0x100200C4: nop

L_100200C8:
    // 0x100200C8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x100200CC: lw          $t7, 0x84($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X84);
    // 0x100200D0: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x100200D4: sltiu       $at, $t8, 0x11
    ctx->r1 = ctx->r24 < 0X11 ? 1 : 0;
    // 0x100200D8: beq         $at, $zero, L_10020864
    if (ctx->r1 == 0) {
        // 0x100200DC: nop
    
            goto L_10020864;
    }
    // 0x100200DC: nop

    // 0x100200E0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x100200E4: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x100200E8: addu        $at, $at, $t8
    gpr jr_addend_100200F0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x100200EC: lw          $t8, -0x3830($at)
    ctx->r24 = ADD32(ctx->r1, -0X3830);
    // 0x100200F0: jr          $t8
    // 0x100200F4: nop

    switch (jr_addend_100200F0 >> 2) {
        case 0: goto L_1002078C; break;
        case 1: goto L_10020864; break;
        case 2: goto L_10020864; break;
        case 3: goto L_10020864; break;
        case 4: goto L_10020864; break;
        case 5: goto L_10020824; break;
        case 6: goto L_10020864; break;
        case 7: goto L_100207B8; break;
        case 8: goto L_100207F0; break;
        case 9: goto L_10020864; break;
        case 10: goto L_10020864; break;
        case 11: goto L_10020370; break;
        case 12: goto L_10020370; break;
        case 13: goto L_100200F8; break;
        case 14: goto L_10020704; break;
        case 15: goto L_10020754; break;
        case 16: goto L_10020370; break;
        default: switch_error(__func__, 0x100200F0, 0x8002C7D0);
    }
    // 0x100200F4: nop

L_100200F8:
    // 0x100200F8: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x100200FC: lw          $t0, 0x84($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X84);
    // 0x10020100: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x10020104: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x10020108: lh          $t2, 0xA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA);
    // 0x1002010C: beq         $t2, $zero, L_10020120
    if (ctx->r10 == 0) {
        // 0x10020110: nop
    
            goto L_10020120;
    }
    // 0x10020110: nop

    // 0x10020114: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x10020118: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1002011C: sw          $t3, 0x50($t4)
    MEM_W(0X50, ctx->r12) = ctx->r11;
L_10020120:
    // 0x10020120: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x10020124: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x10020128: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1002012C: jal         0x10021C40
    // 0x10020130: lw          $a2, 0x20($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X20);
    func_10021C40(rdram, ctx);
        goto after_0;
    // 0x10020130: lw          $a2, 0x20($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X20);
    after_0:
    // 0x10020134: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x10020138: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1002013C: sw          $t6, 0x8C($t7)
    MEM_W(0X8C, ctx->r15) = ctx->r14;
    // 0x10020140: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x10020144: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x10020148: sw          $t8, 0x80($t9)
    MEM_W(0X80, ctx->r25) = ctx->r24;
    // 0x1002014C: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x10020150: sw          $zero, 0x78($t0)
    MEM_W(0X78, ctx->r8) = 0;
    // 0x10020154: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x10020158: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x1002015C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x10020160: lw          $t2, 0x1C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X1C);
    // 0x10020164: addiu       $t3, $t2, 0xB7
    ctx->r11 = ADD32(ctx->r10, 0XB7);
    // 0x10020168: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x1002016C: mflo        $t4
    ctx->r12 = lo;
    // 0x10020170: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x10020174: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x10020178: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x1002017C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x10020180: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x10020184: sw          $t5, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->r13;
    // 0x10020188: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1002018C: lh          $t8, 0x10($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X10);
    // 0x10020190: addu        $t9, $t8, $t8
    ctx->r25 = ADD32(ctx->r24, ctx->r24);
    // 0x10020194: bgez        $t9, L_100201A4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x10020198: sra         $t0, $t9, 1
        ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
            goto L_100201A4;
    }
    // 0x10020198: sra         $t0, $t9, 1
    ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
    // 0x1002019C: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x100201A0: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_100201A4:
    // 0x100201A4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x100201A8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x100201AC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x100201B0: sh          $t1, 0x62($t2)
    MEM_H(0X62, ctx->r10) = ctx->r9;
    // 0x100201B4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x100201B8: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x100201BC: lbu         $t4, 0x12($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X12);
    // 0x100201C0: sh          $t4, 0x60($t5)
    MEM_H(0X60, ctx->r13) = ctx->r12;
    // 0x100201C4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x100201C8: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x100201CC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x100201D0: lbu         $t7, 0x13($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X13);
    // 0x100201D4: andi        $t8, $t7, 0x7F
    ctx->r24 = ctx->r15 & 0X7F;
    // 0x100201D8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x100201DC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x100201E0: lh          $t0, -0x43F0($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X43F0);
    // 0x100201E4: andi        $t1, $t0, 0xFFFC
    ctx->r9 = ctx->r8 & 0XFFFC;
    // 0x100201E8: sh          $t1, 0x68($t2)
    MEM_H(0X68, ctx->r10) = ctx->r9;
    // 0x100201EC: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x100201F0: lbu         $t3, 0x28C0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X28C0);
    // 0x100201F4: beq         $t3, $zero, L_10020218
    if (ctx->r11 == 0) {
        // 0x100201F8: nop
    
            goto L_10020218;
    }
    // 0x100201F8: nop

    // 0x100201FC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x10020200: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x10020204: lbu         $t7, 0x13($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X13);
    // 0x10020208: lh          $t5, 0x68($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X68);
    // 0x1002020C: sra         $t8, $t7, 7
    ctx->r24 = S32(SIGNED(ctx->r15) >> 7);
    // 0x10020210: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x10020214: sh          $t9, 0x68($t4)
    MEM_H(0X68, ctx->r12) = ctx->r25;
L_10020218:
    // 0x10020218: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1002021C: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x10020220: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x10020224: lbu         $t1, 0x13($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X13);
    // 0x10020228: andi        $t2, $t1, 0x7F
    ctx->r10 = ctx->r9 & 0X7F;
    // 0x1002022C: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x10020230: sll         $t6, $t3, 1
    ctx->r14 = S32(ctx->r11 << 1);
    // 0x10020234: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x10020238: lh          $t7, -0x42F2($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X42F2);
    // 0x1002023C: andi        $t5, $t7, 0xFFFC
    ctx->r13 = ctx->r15 & 0XFFFC;
    // 0x10020240: sh          $t5, 0x6A($t8)
    MEM_H(0X6A, ctx->r24) = ctx->r13;
    // 0x10020244: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x10020248: lbu         $t9, 0x28C2($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X28C2);
    // 0x1002024C: beq         $t9, $zero, L_1002026C
    if (ctx->r25 == 0) {
        // 0x10020250: nop
    
            goto L_1002026C;
    }
    // 0x10020250: nop

    // 0x10020254: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x10020258: lh          $t0, 0x60($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X60);
    // 0x1002025C: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x10020260: addiu       $t2, $t1, 0x20
    ctx->r10 = ADD32(ctx->r9, 0X20);
    // 0x10020264: b           L_10020288
    // 0x10020268: sh          $t2, 0x60($t4)
    MEM_H(0X60, ctx->r12) = ctx->r10;
        goto L_10020288;
    // 0x10020268: sh          $t2, 0x60($t4)
    MEM_H(0X60, ctx->r12) = ctx->r10;
L_1002026C:
    // 0x1002026C: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x10020270: lbu         $t3, 0x28C1($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X28C1);
    // 0x10020274: beq         $t3, $zero, L_10020288
    if (ctx->r11 == 0) {
        // 0x10020278: nop
    
            goto L_10020288;
    }
    // 0x10020278: nop

    // 0x1002027C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x10020280: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x10020284: sh          $t6, 0x60($t7)
    MEM_H(0X60, ctx->r15) = ctx->r14;
L_10020288:
    // 0x10020288: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x1002028C: lw          $t8, 0x1C($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X1C);
    // 0x10020290: beq         $t8, $zero, L_100202B4
    if (ctx->r24 == 0) {
        // 0x10020294: nop
    
            goto L_100202B4;
    }
    // 0x10020294: nop

    // 0x10020298: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x1002029C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x100202A0: sh          $t9, 0x64($t0)
    MEM_H(0X64, ctx->r8) = ctx->r25;
    // 0x100202A4: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x100202A8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x100202AC: b           L_10020310
    // 0x100202B0: sh          $t1, 0x66($t2)
    MEM_H(0X66, ctx->r10) = ctx->r9;
        goto L_10020310;
    // 0x100202B0: sh          $t1, 0x66($t2)
    MEM_H(0X66, ctx->r10) = ctx->r9;
L_100202B4:
    // 0x100202B4: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x100202B8: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x100202BC: lh          $t3, 0x60($t4)
    ctx->r11 = MEM_H(ctx->r12, 0X60);
    // 0x100202C0: lh          $t5, 0x62($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X62);
    // 0x100202C4: sll         $t6, $t3, 1
    ctx->r14 = S32(ctx->r11 << 1);
    // 0x100202C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x100202CC: lh          $t7, -0x43F0($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X43F0);
    // 0x100202D0: multu       $t7, $t5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x100202D4: mflo        $t8
    ctx->r24 = lo;
    // 0x100202D8: sra         $t9, $t8, 15
    ctx->r25 = S32(SIGNED(ctx->r24) >> 15);
    // 0x100202DC: sh          $t9, 0x64($t4)
    MEM_H(0X64, ctx->r12) = ctx->r25;
    // 0x100202E0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x100202E4: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x100202E8: lh          $t1, 0x60($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X60);
    // 0x100202EC: lh          $t7, 0x62($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X62);
    // 0x100202F0: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x100202F4: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x100202F8: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x100202FC: lh          $t6, -0x42F2($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X42F2);
    // 0x10020300: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10020304: mflo        $t5
    ctx->r13 = lo;
    // 0x10020308: sra         $t8, $t5, 15
    ctx->r24 = S32(SIGNED(ctx->r13) >> 15);
    // 0x1002030C: sh          $t8, 0x66($t0)
    MEM_H(0X66, ctx->r8) = ctx->r24;
L_10020310:
    // 0x10020310: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x10020314: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x10020318: lwc1        $f4, 0xC($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0XC);
    // 0x1002031C: swc1        $f4, 0x4C($t4)
    MEM_W(0X4C, ctx->r12) = ctx->f4.u32l;
    // 0x10020320: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x10020324: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x10020328: lbu         $t2, 0x15($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X15);
    // 0x1002032C: sh          $t2, 0xA2($t3)
    MEM_H(0XA2, ctx->r11) = ctx->r10;
    // 0x10020330: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x10020334: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x10020338: lwc1        $f6, 0x18($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X18);
    // 0x1002033C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x10020340: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x10020344: nop

    // 0x10020348: sh          $t5, 0xA0($t8)
    MEM_H(0XA0, ctx->r24) = ctx->r13;
    // 0x1002034C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x10020350: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x10020354: sw          $t0, 0xC8($t9)
    MEM_W(0XC8, ctx->r25) = ctx->r8;
    // 0x10020358: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1002035C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x10020360: lbu         $t1, 0x14($t4)
    ctx->r9 = MEM_BU(ctx->r12, 0X14);
    // 0x10020364: sb          $t1, 0x99($t2)
    MEM_B(0X99, ctx->r10) = ctx->r9;
    // 0x10020368: b           L_100208A4
    // 0x1002036C: nop

        goto L_100208A4;
    // 0x1002036C: nop

L_10020370:
    // 0x10020370: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x10020374: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x10020378: addiu       $a1, $sp, 0x4E
    ctx->r5 = ADD32(ctx->r29, 0X4E);
    // 0x1002037C: addiu       $a2, $sp, 0x3E
    ctx->r6 = ADD32(ctx->r29, 0X3E);
    // 0x10020380: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x10020384: jal         0x10020ABC
    // 0x10020388: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_10020ABC(rdram, ctx);
        goto after_1;
    // 0x10020388: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_1:
    // 0x1002038C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x10020390: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x10020394: lw          $t7, 0x78($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X78);
    // 0x10020398: lw          $t5, 0x7C($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X7C);
    // 0x1002039C: slt         $at, $t7, $t5
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x100203A0: bne         $at, $zero, L_1002042C
    if (ctx->r1 != 0) {
        // 0x100203A4: nop
    
            goto L_1002042C;
    }
    // 0x100203A4: nop

    // 0x100203A8: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x100203AC: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x100203B0: lh          $t0, 0x60($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X60);
    // 0x100203B4: lh          $t1, 0x62($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X62);
    // 0x100203B8: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x100203BC: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x100203C0: lh          $t4, -0x43F0($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X43F0);
    // 0x100203C4: multu       $t4, $t1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x100203C8: mflo        $t2
    ctx->r10 = lo;
    // 0x100203CC: sra         $t3, $t2, 15
    ctx->r11 = S32(SIGNED(ctx->r10) >> 15);
    // 0x100203D0: sh          $t3, 0x70($t8)
    MEM_H(0X70, ctx->r24) = ctx->r11;
    // 0x100203D4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x100203D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x100203DC: lh          $t7, 0x60($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X60);
    // 0x100203E0: lh          $t4, 0x62($t6)
    ctx->r12 = MEM_H(ctx->r14, 0X62);
    // 0x100203E4: negu        $t5, $t7
    ctx->r13 = SUB32(0, ctx->r15);
    // 0x100203E8: sll         $t0, $t5, 1
    ctx->r8 = S32(ctx->r13 << 1);
    // 0x100203EC: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x100203F0: lh          $t9, -0x42F2($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X42F2);
    // 0x100203F4: multu       $t9, $t4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x100203F8: mflo        $t1
    ctx->r9 = lo;
    // 0x100203FC: sra         $t2, $t1, 15
    ctx->r10 = S32(SIGNED(ctx->r9) >> 15);
    // 0x10020400: sh          $t2, 0x76($t6)
    MEM_H(0X76, ctx->r14) = ctx->r10;
    // 0x10020404: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x10020408: lw          $t8, 0x7C($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X7C);
    // 0x1002040C: sw          $t8, 0x78($t3)
    MEM_W(0X78, ctx->r11) = ctx->r24;
    // 0x10020410: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x10020414: lh          $t5, 0x70($t7)
    ctx->r13 = MEM_H(ctx->r15, 0X70);
    // 0x10020418: sh          $t5, 0x64($t7)
    MEM_H(0X64, ctx->r15) = ctx->r13;
    // 0x1002041C: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x10020420: lh          $t9, 0x76($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X76);
    // 0x10020424: b           L_1002046C
    // 0x10020428: sh          $t9, 0x66($t0)
    MEM_H(0X66, ctx->r8) = ctx->r25;
        goto L_1002046C;
    // 0x10020428: sh          $t9, 0x66($t0)
    MEM_H(0X66, ctx->r8) = ctx->r25;
L_1002042C:
    // 0x1002042C: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x10020430: lh          $a0, 0x64($t4)
    ctx->r4 = MEM_H(ctx->r12, 0X64);
    // 0x10020434: lw          $a1, 0x78($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X78);
    // 0x10020438: lh          $a2, 0x6E($t4)
    ctx->r6 = MEM_H(ctx->r12, 0X6E);
    // 0x1002043C: jal         0x10021028
    // 0x10020440: lhu         $a3, 0x6C($t4)
    ctx->r7 = MEM_HU(ctx->r12, 0X6C);
    _getVol(rdram, ctx);
        goto after_2;
    // 0x10020440: lhu         $a3, 0x6C($t4)
    ctx->r7 = MEM_HU(ctx->r12, 0X6C);
    after_2:
    // 0x10020444: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x10020448: sh          $v0, 0x64($t1)
    MEM_H(0X64, ctx->r9) = ctx->r2;
    // 0x1002044C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x10020450: lh          $a0, 0x66($t2)
    ctx->r4 = MEM_H(ctx->r10, 0X66);
    // 0x10020454: lw          $a1, 0x78($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X78);
    // 0x10020458: lh          $a2, 0x74($t2)
    ctx->r6 = MEM_H(ctx->r10, 0X74);
    // 0x1002045C: jal         0x10021028
    // 0x10020460: lhu         $a3, 0x72($t2)
    ctx->r7 = MEM_HU(ctx->r10, 0X72);
    _getVol(rdram, ctx);
        goto after_3;
    // 0x10020460: lhu         $a3, 0x72($t2)
    ctx->r7 = MEM_HU(ctx->r10, 0X72);
    after_3:
    // 0x10020464: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x10020468: sh          $v0, 0x66($t6)
    MEM_H(0X66, ctx->r14) = ctx->r2;
L_1002046C:
    // 0x1002046C: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x10020470: lh          $t3, 0x64($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X64);
    // 0x10020474: bne         $t3, $zero, L_10020488
    if (ctx->r11 != 0) {
        // 0x10020478: nop
    
            goto L_10020488;
    }
    // 0x10020478: nop

    // 0x1002047C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x10020480: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x10020484: sh          $t5, 0x64($t7)
    MEM_H(0X64, ctx->r15) = ctx->r13;
L_10020488:
    // 0x10020488: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x1002048C: lh          $t0, 0x66($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X66);
    // 0x10020490: bne         $t0, $zero, L_100204A4
    if (ctx->r8 != 0) {
        // 0x10020494: nop
    
            goto L_100204A4;
    }
    // 0x10020494: nop

    // 0x10020498: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1002049C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x100204A0: sh          $t4, 0x66($t1)
    MEM_H(0X66, ctx->r9) = ctx->r12;
L_100204A4:
    // 0x100204A4: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x100204A8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x100204AC: lw          $t6, 0x84($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X84);
    // 0x100204B0: lh          $t8, 0x8($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X8);
    // 0x100204B4: bne         $t8, $at, L_10020518
    if (ctx->r24 != ctx->r1) {
        // 0x100204B8: nop
    
            goto L_10020518;
    }
    // 0x100204B8: nop

    // 0x100204BC: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x100204C0: lbu         $t3, 0x28C2($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X28C2);
    // 0x100204C4: beq         $t3, $zero, L_100204E8
    if (ctx->r11 == 0) {
        // 0x100204C8: nop
    
            goto L_100204E8;
    }
    // 0x100204C8: nop

    // 0x100204CC: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x100204D0: lw          $t7, 0x84($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X84);
    // 0x100204D4: lh          $t9, 0xE($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XE);
    // 0x100204D8: sra         $t0, $t9, 1
    ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
    // 0x100204DC: addiu       $t4, $t0, 0x20
    ctx->r12 = ADD32(ctx->r8, 0X20);
    // 0x100204E0: b           L_10020518
    // 0x100204E4: sh          $t4, 0x60($t5)
    MEM_H(0X60, ctx->r13) = ctx->r12;
        goto L_10020518;
    // 0x100204E4: sh          $t4, 0x60($t5)
    MEM_H(0X60, ctx->r13) = ctx->r12;
L_100204E8:
    // 0x100204E8: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x100204EC: lbu         $t1, 0x28C1($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X28C1);
    // 0x100204F0: beq         $t1, $zero, L_10020508
    if (ctx->r9 == 0) {
        // 0x100204F4: nop
    
            goto L_10020508;
    }
    // 0x100204F4: nop

    // 0x100204F8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x100204FC: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x10020500: b           L_10020518
    // 0x10020504: sh          $t2, 0x60($t6)
    MEM_H(0X60, ctx->r14) = ctx->r10;
        goto L_10020518;
    // 0x10020504: sh          $t2, 0x60($t6)
    MEM_H(0X60, ctx->r14) = ctx->r10;
L_10020508:
    // 0x10020508: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x1002050C: lw          $t3, 0x84($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X84);
    // 0x10020510: lw          $t7, 0xC($t3)
    ctx->r15 = MEM_W(ctx->r11, 0XC);
    // 0x10020514: sh          $t7, 0x60($t8)
    MEM_H(0X60, ctx->r24) = ctx->r15;
L_10020518:
    // 0x10020518: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x1002051C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x10020520: lw          $t0, 0x84($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X84);
    // 0x10020524: lh          $t4, 0x8($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X8);
    // 0x10020528: bne         $t4, $at, L_100205A4
    if (ctx->r12 != ctx->r1) {
        // 0x1002052C: nop
    
            goto L_100205A4;
    }
    // 0x1002052C: nop

    // 0x10020530: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x10020534: sw          $zero, 0x78($t5)
    MEM_W(0X78, ctx->r13) = 0;
    // 0x10020538: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1002053C: lw          $t2, 0x84($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X84);
    // 0x10020540: lw          $t6, 0xC($t2)
    ctx->r14 = MEM_W(ctx->r10, 0XC);
    // 0x10020544: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x10020548: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x1002054C: addu        $t7, $t3, $t3
    ctx->r15 = ADD32(ctx->r11, ctx->r11);
    // 0x10020550: bgez        $t7, L_10020560
    if (SIGNED(ctx->r15) >= 0) {
        // 0x10020554: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_10020560;
    }
    // 0x10020554: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x10020558: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x1002055C: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_10020560:
    // 0x10020560: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x10020564: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x10020568: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x1002056C: sh          $t9, 0x62($t0)
    MEM_H(0X62, ctx->r8) = ctx->r25;
    // 0x10020570: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x10020574: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x10020578: lw          $t5, 0x84($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X84);
    // 0x1002057C: lw          $t1, 0x10($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X10);
    // 0x10020580: addiu       $t2, $t1, 0xB7
    ctx->r10 = ADD32(ctx->r9, 0XB7);
    // 0x10020584: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x10020588: mflo        $t6
    ctx->r14 = lo;
    // 0x1002058C: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x10020590: subu        $t3, $t3, $t6
    ctx->r11 = SUB32(ctx->r11, ctx->r14);
    // 0x10020594: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x10020598: subu        $t3, $t3, $t6
    ctx->r11 = SUB32(ctx->r11, ctx->r14);
    // 0x1002059C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x100205A0: sw          $t3, 0x7C($t4)
    MEM_W(0X7C, ctx->r12) = ctx->r11;
L_100205A4:
    // 0x100205A4: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x100205A8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x100205AC: lw          $t8, 0x84($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X84);
    // 0x100205B0: lh          $t9, 0x8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8);
    // 0x100205B4: bne         $t9, $at, L_100206F0
    if (ctx->r25 != ctx->r1) {
        // 0x100205B8: nop
    
            goto L_100206F0;
    }
    // 0x100205B8: nop

    // 0x100205BC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x100205C0: lw          $t4, 0x84($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X84);
    // 0x100205C4: lh          $t5, 0x68($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X68);
    // 0x100205C8: lh          $t2, 0x6A($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X6A);
    // 0x100205CC: lw          $t7, 0xC($t4)
    ctx->r15 = MEM_W(ctx->r12, 0XC);
    // 0x100205D0: andi        $t1, $t5, 0x1
    ctx->r9 = ctx->r13 & 0X1;
    // 0x100205D4: andi        $t6, $t2, 0x1
    ctx->r14 = ctx->r10 & 0X1;
    // 0x100205D8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x100205DC: sra         $t9, $t8, 7
    ctx->r25 = S32(SIGNED(ctx->r24) >> 7);
    // 0x100205E0: xor         $t3, $t1, $t6
    ctx->r11 = ctx->r9 ^ ctx->r14;
    // 0x100205E4: xor         $t5, $t3, $t9
    ctx->r13 = ctx->r11 ^ ctx->r25;
    // 0x100205E8: beq         $t5, $zero, L_10020684
    if (ctx->r13 == 0) {
        // 0x100205EC: nop
    
            goto L_10020684;
    }
    // 0x100205EC: nop

    // 0x100205F0: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x100205F4: lbu         $t2, 0x28C0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X28C0);
    // 0x100205F8: beq         $t2, $zero, L_10020684
    if (ctx->r10 == 0) {
        // 0x100205FC: nop
    
            goto L_10020684;
    }
    // 0x100205FC: nop

    // 0x10020600: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x10020604: lh          $t6, 0x60($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X60);
    // 0x10020608: slti        $at, $t6, 0x41
    ctx->r1 = SIGNED(ctx->r14) < 0X41 ? 1 : 0;
    // 0x1002060C: bne         $at, $zero, L_10020650
    if (ctx->r1 != 0) {
        // 0x10020610: nop
    
            goto L_10020650;
    }
    // 0x10020610: nop

    // 0x10020614: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x10020618: lh          $t4, 0x68($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X68);
    // 0x1002061C: xori        $t7, $t4, 0x1
    ctx->r15 = ctx->r12 ^ 0X1;
    // 0x10020620: sh          $t7, 0x68($t0)
    MEM_H(0X68, ctx->r8) = ctx->r15;
    // 0x10020624: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x10020628: lh          $t3, 0x60($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X60);
    // 0x1002062C: slti        $at, $t3, 0x6F
    ctx->r1 = SIGNED(ctx->r11) < 0X6F ? 1 : 0;
    // 0x10020630: beq         $at, $zero, L_10020648
    if (ctx->r1 == 0) {
        // 0x10020634: nop
    
            goto L_10020648;
    }
    // 0x10020634: nop

    // 0x10020638: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x1002063C: lh          $t5, 0x68($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X68);
    // 0x10020640: ori         $t2, $t5, 0x2
    ctx->r10 = ctx->r13 | 0X2;
    // 0x10020644: sh          $t2, 0x68($t9)
    MEM_H(0X68, ctx->r25) = ctx->r10;
L_10020648:
    // 0x10020648: b           L_10020684
    // 0x1002064C: nop

        goto L_10020684;
    // 0x1002064C: nop

L_10020650:
    // 0x10020650: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x10020654: lh          $t6, 0x6A($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X6A);
    // 0x10020658: xori        $t4, $t6, 0x1
    ctx->r12 = ctx->r14 ^ 0X1;
    // 0x1002065C: sh          $t4, 0x6A($t1)
    MEM_H(0X6A, ctx->r9) = ctx->r12;
    // 0x10020660: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x10020664: lh          $t0, 0x60($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X60);
    // 0x10020668: slti        $at, $t0, 0x11
    ctx->r1 = SIGNED(ctx->r8) < 0X11 ? 1 : 0;
    // 0x1002066C: bne         $at, $zero, L_10020684
    if (ctx->r1 != 0) {
        // 0x10020670: nop
    
            goto L_10020684;
    }
    // 0x10020670: nop

    // 0x10020674: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x10020678: lh          $t3, 0x6A($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X6A);
    // 0x1002067C: ori         $t5, $t3, 0x2
    ctx->r13 = ctx->r11 | 0X2;
    // 0x10020680: sh          $t5, 0x6A($t8)
    MEM_H(0X6A, ctx->r24) = ctx->r13;
L_10020684:
    // 0x10020684: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x10020688: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x1002068C: lw          $t9, 0x84($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X84);
    // 0x10020690: lh          $t3, 0x68($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X68);
    // 0x10020694: lw          $t6, 0xC($t9)
    ctx->r14 = MEM_W(ctx->r25, 0XC);
    // 0x10020698: andi        $t5, $t3, 0x3
    ctx->r13 = ctx->r11 & 0X3;
    // 0x1002069C: andi        $t4, $t6, 0x7F
    ctx->r12 = ctx->r14 & 0X7F;
    // 0x100206A0: sll         $t1, $t4, 1
    ctx->r9 = S32(ctx->r12 << 1);
    // 0x100206A4: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x100206A8: lh          $t7, -0x43F0($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X43F0);
    // 0x100206AC: andi        $t0, $t7, 0xFFFC
    ctx->r8 = ctx->r15 & 0XFFFC;
    // 0x100206B0: or          $t8, $t0, $t5
    ctx->r24 = ctx->r8 | ctx->r13;
    // 0x100206B4: sh          $t8, 0x68($t2)
    MEM_H(0X68, ctx->r10) = ctx->r24;
    // 0x100206B8: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x100206BC: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x100206C0: lw          $t6, 0x84($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X84);
    // 0x100206C4: lh          $t8, 0x6A($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X6A);
    // 0x100206C8: lw          $t4, 0xC($t6)
    ctx->r12 = MEM_W(ctx->r14, 0XC);
    // 0x100206CC: andi        $t2, $t8, 0x3
    ctx->r10 = ctx->r24 & 0X3;
    // 0x100206D0: andi        $t1, $t4, 0x7F
    ctx->r9 = ctx->r12 & 0X7F;
    // 0x100206D4: negu        $t7, $t1
    ctx->r15 = SUB32(0, ctx->r9);
    // 0x100206D8: sll         $t3, $t7, 1
    ctx->r11 = S32(ctx->r15 << 1);
    // 0x100206DC: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x100206E0: lh          $t0, -0x42F2($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X42F2);
    // 0x100206E4: andi        $t5, $t0, 0xFFFC
    ctx->r13 = ctx->r8 & 0XFFFC;
    // 0x100206E8: or          $t6, $t5, $t2
    ctx->r14 = ctx->r13 | ctx->r10;
    // 0x100206EC: sh          $t6, 0x6A($t9)
    MEM_H(0X6A, ctx->r25) = ctx->r14;
L_100206F0:
    // 0x100206F0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x100206F4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x100206F8: sw          $t4, 0x80($t1)
    MEM_W(0X80, ctx->r9) = ctx->r12;
    // 0x100206FC: b           L_100208A4
    // 0x10020700: nop

        goto L_100208A4;
    // 0x10020700: nop

L_10020704:
    // 0x10020704: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x10020708: lw          $t3, 0x84($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X84);
    // 0x1002070C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x10020710: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x10020714: lh          $t8, 0xA($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA);
    // 0x10020718: beq         $t8, $zero, L_1002072C
    if (ctx->r24 == 0) {
        // 0x1002071C: nop
    
            goto L_1002072C;
    }
    // 0x1002071C: nop

    // 0x10020720: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x10020724: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x10020728: sw          $t5, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->r13;
L_1002072C:
    // 0x1002072C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x10020730: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x10020734: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x10020738: jal         0x10021C40
    // 0x1002073C: lw          $a2, 0xC($t6)
    ctx->r6 = MEM_W(ctx->r14, 0XC);
    func_10021C40(rdram, ctx);
        goto after_4;
    // 0x1002073C: lw          $a2, 0xC($t6)
    ctx->r6 = MEM_W(ctx->r14, 0XC);
    after_4:
    // 0x10020740: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x10020744: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x10020748: sw          $t9, 0x8C($t4)
    MEM_W(0X8C, ctx->r12) = ctx->r25;
    // 0x1002074C: b           L_100208A4
    // 0x10020750: nop

        goto L_100208A4;
    // 0x10020750: nop

L_10020754:
    // 0x10020754: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x10020758: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x1002075C: addiu       $a1, $sp, 0x4E
    ctx->r5 = ADD32(ctx->r29, 0X4E);
    // 0x10020760: addiu       $a2, $sp, 0x3E
    ctx->r6 = ADD32(ctx->r29, 0X3E);
    // 0x10020764: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x10020768: jal         0x10020ABC
    // 0x1002076C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_10020ABC(rdram, ctx);
        goto after_5;
    // 0x1002076C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_5:
    // 0x10020770: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x10020774: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x10020778: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1002077C: jal         0x10020978
    // 0x10020780: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    n_alEnvmixerParam(rdram, ctx);
        goto after_6;
    // 0x10020780: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x10020784: b           L_100208A4
    // 0x10020788: nop

        goto L_100208A4;
    // 0x10020788: nop

L_1002078C:
    // 0x1002078C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x10020790: lw          $t3, 0x84($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X84);
    // 0x10020794: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x10020798: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1002079C: lw          $t8, 0xC($t0)
    ctx->r24 = MEM_W(ctx->r8, 0XC);
    // 0x100207A0: sw          $zero, 0x90($t8)
    MEM_W(0X90, ctx->r24) = 0;
    // 0x100207A4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x100207A8: jal         0x100198B0
    // 0x100207AC: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    _n_freePVoice(rdram, ctx);
        goto after_7;
    // 0x100207AC: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    after_7:
    // 0x100207B0: b           L_100208A4
    // 0x100207B4: nop

        goto L_100208A4;
    // 0x100207B4: nop

L_100207B8:
    // 0x100207B8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x100207BC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x100207C0: addiu       $a1, $sp, 0x4E
    ctx->r5 = ADD32(ctx->r29, 0X4E);
    // 0x100207C4: addiu       $a2, $sp, 0x3E
    ctx->r6 = ADD32(ctx->r29, 0X3E);
    // 0x100207C8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x100207CC: jal         0x10020ABC
    // 0x100207D0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_10020ABC(rdram, ctx);
        goto after_8;
    // 0x100207D0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_8:
    // 0x100207D4: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x100207D8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x100207DC: lw          $t9, 0x84($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X84);
    // 0x100207E0: lwc1        $f10, 0xC($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0XC);
    // 0x100207E4: swc1        $f10, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->f10.u32l;
    // 0x100207E8: b           L_100208A4
    // 0x100207EC: nop

        goto L_100208A4;
    // 0x100207EC: nop

L_100207F0:
    // 0x100207F0: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x100207F4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x100207F8: addiu       $a1, $sp, 0x4E
    ctx->r5 = ADD32(ctx->r29, 0X4E);
    // 0x100207FC: addiu       $a2, $sp, 0x3E
    ctx->r6 = ADD32(ctx->r29, 0X3E);
    // 0x10020800: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x10020804: jal         0x10020ABC
    // 0x10020808: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_10020ABC(rdram, ctx);
        goto after_9;
    // 0x10020808: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_9:
    // 0x1002080C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x10020810: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x10020814: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x10020818: sw          $t1, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r9;
    // 0x1002081C: b           L_100208A4
    // 0x10020820: nop

        goto L_100208A4;
    // 0x10020820: nop

L_10020824:
    // 0x10020824: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x10020828: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x1002082C: addiu       $a1, $sp, 0x4E
    ctx->r5 = ADD32(ctx->r29, 0X4E);
    // 0x10020830: addiu       $a2, $sp, 0x3E
    ctx->r6 = ADD32(ctx->r29, 0X3E);
    // 0x10020834: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x10020838: jal         0x10020ABC
    // 0x1002083C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_10020ABC(rdram, ctx);
        goto after_10;
    // 0x1002083C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_10:
    // 0x10020840: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x10020844: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x10020848: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1002084C: lw          $t8, 0x84($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X84);
    // 0x10020850: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x10020854: jal         0x10021C40
    // 0x10020858: lw          $a2, 0xC($t8)
    ctx->r6 = MEM_W(ctx->r24, 0XC);
    func_10021C40(rdram, ctx);
        goto after_11;
    // 0x10020858: lw          $a2, 0xC($t8)
    ctx->r6 = MEM_W(ctx->r24, 0XC);
    after_11:
    // 0x1002085C: b           L_100208A4
    // 0x10020860: nop

        goto L_100208A4;
    // 0x10020860: nop

L_10020864:
    // 0x10020864: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x10020868: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x1002086C: addiu       $a1, $sp, 0x4E
    ctx->r5 = ADD32(ctx->r29, 0X4E);
    // 0x10020870: addiu       $a2, $sp, 0x3E
    ctx->r6 = ADD32(ctx->r29, 0X3E);
    // 0x10020874: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x10020878: jal         0x10020ABC
    // 0x1002087C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_10020ABC(rdram, ctx);
        goto after_12;
    // 0x1002087C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_12:
    // 0x10020880: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x10020884: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x10020888: lw          $t9, 0x84($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X84);
    // 0x1002088C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x10020890: lh          $a1, 0x8($t9)
    ctx->r5 = MEM_H(ctx->r25, 0X8);
    // 0x10020894: jal         0x10020978
    // 0x10020898: lw          $a2, 0xC($t9)
    ctx->r6 = MEM_W(ctx->r25, 0XC);
    n_alEnvmixerParam(rdram, ctx);
        goto after_13;
    // 0x10020898: lw          $a2, 0xC($t9)
    ctx->r6 = MEM_W(ctx->r25, 0XC);
    after_13:
    // 0x1002089C: b           L_100208A4
    // 0x100208A0: nop

        goto L_100208A4;
    // 0x100208A0: nop

L_100208A4:
    // 0x100208A4: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x100208A8: lh          $t6, 0x3E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3E);
    // 0x100208AC: sll         $t1, $t4, 1
    ctx->r9 = S32(ctx->r12 << 1);
    // 0x100208B0: addu        $t7, $t6, $t1
    ctx->r15 = ADD32(ctx->r14, ctx->r9);
    // 0x100208B4: sh          $t7, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r15;
    // 0x100208B8: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x100208BC: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x100208C0: subu        $t8, $t3, $t0
    ctx->r24 = SUB32(ctx->r11, ctx->r8);
    // 0x100208C4: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x100208C8: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x100208CC: lw          $t2, 0x84($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X84);
    // 0x100208D0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x100208D4: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x100208D8: lw          $t4, 0x84($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X84);
    // 0x100208DC: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x100208E0: sw          $t6, 0x84($t9)
    MEM_W(0X84, ctx->r25) = ctx->r14;
    // 0x100208E4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x100208E8: lw          $t7, 0x84($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X84);
    // 0x100208EC: bne         $t7, $zero, L_100208FC
    if (ctx->r15 != 0) {
        // 0x100208F0: nop
    
            goto L_100208FC;
    }
    // 0x100208F0: nop

    // 0x100208F4: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x100208F8: sw          $zero, 0x88($t3)
    MEM_W(0X88, ctx->r11) = 0;
L_100208FC:
    // 0x100208FC: jal         0x10019744
    // 0x10020900: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    _n_freeParam(rdram, ctx);
        goto after_14;
    // 0x10020900: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_14:
    // 0x10020904: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x10020908: lw          $t8, 0x84($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X84);
    // 0x1002090C: bne         $t8, $zero, L_1002004C
    if (ctx->r24 != 0) {
        // 0x10020910: nop
    
            goto L_1002004C;
    }
    // 0x10020910: nop

L_10020914:
    // 0x10020914: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x10020918: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x1002091C: addiu       $a1, $sp, 0x4E
    ctx->r5 = ADD32(ctx->r29, 0X4E);
    // 0x10020920: addiu       $a2, $sp, 0x3E
    ctx->r6 = ADD32(ctx->r29, 0X3E);
    // 0x10020924: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x10020928: jal         0x10020ABC
    // 0x1002092C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_10020ABC(rdram, ctx);
        goto after_15;
    // 0x1002092C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_15:
    // 0x10020930: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x10020934: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x10020938: lw          $t4, 0x78($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X78);
    // 0x1002093C: lw          $t6, 0x7C($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X7C);
    // 0x10020940: slt         $at, $t6, $t4
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x10020944: beq         $at, $zero, L_10020958
    if (ctx->r1 == 0) {
        // 0x10020948: nop
    
            goto L_10020958;
    }
    // 0x10020948: nop

    // 0x1002094C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x10020950: lw          $t1, 0x7C($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X7C);
    // 0x10020954: sw          $t1, 0x78($t9)
    MEM_W(0X78, ctx->r25) = ctx->r9;
L_10020958:
    // 0x10020958: b           L_10020968
    // 0x1002095C: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
        goto L_10020968;
    // 0x1002095C: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x10020960: b           L_10020968
    // 0x10020964: nop

        goto L_10020968;
    // 0x10020964: nop

L_10020968:
    // 0x10020968: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1002096C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x10020970: jr          $ra
    // 0x10020974: nop

    return;
    return;
    // 0x10020974: nop

;}
RECOMP_FUNC void func_15005AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005AB0: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x15005AB4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15005AB8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15005ABC: lw          $t8, 0x84($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X84);
    // 0x15005AC0: lui         $at, 0x4391
    ctx->r1 = S32(0X4391 << 16);
    // 0x15005AC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15005AC8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x15005ACC: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x15005AD0: sh          $t6, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r14;
    // 0x15005AD4: sh          $t7, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r15;
    // 0x15005AD8: swc1        $f0, 0x348($a0)
    MEM_W(0X348, ctx->r4) = ctx->f0.u32l;
    // 0x15005ADC: swc1        $f0, 0x34C($a0)
    MEM_W(0X34C, ctx->r4) = ctx->f0.u32l;
    // 0x15005AE0: sw          $t9, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r25;
    // 0x15005AE4: swc1        $f4, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f4.u32l;
    // 0x15005AE8: jr          $ra
    // 0x15005AEC: nop

    return;
    return;
    // 0x15005AEC: nop

;}
RECOMP_FUNC void func_150C4B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C4B34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C4B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C4B3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150C4B40: jal         0x150C4AD8
    // 0x150C4B44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150C4AD8(rdram, ctx);
        goto after_0;
    // 0x150C4B44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150C4B48: jal         0x15149368
    // 0x150C4B4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15149368(rdram, ctx);
        goto after_1;
    // 0x150C4B4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150C4B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C4B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C4B58: jr          $ra
    // 0x150C4B5C: nop

    return;
    return;
    // 0x150C4B5C: nop

;}
RECOMP_FUNC void func_15116930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15116930: lbu         $t6, 0x4F($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4F);
    // 0x15116934: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x15116938: beq         $t7, $zero, L_1511697C
    if (ctx->r15 == 0) {
        // 0x1511693C: nop
    
            goto L_1511697C;
    }
    // 0x1511693C: nop

    // 0x15116940: lbu         $v0, 0x73($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X73);
    // 0x15116944: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x15116948: bne         $t8, $zero, L_1511697C
    if (ctx->r24 != 0) {
        // 0x1511694C: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_1511697C;
    }
    // 0x1511694C: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x15116950: bne         $t9, $zero, L_1511697C
    if (ctx->r25 != 0) {
        // 0x15116954: nop
    
            goto L_1511697C;
    }
    // 0x15116954: nop

    // 0x15116958: lw          $t0, 0x31C($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X31C);
    // 0x1511695C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15116960: andi        $t3, $v0, 0xFFFC
    ctx->r11 = ctx->r2 & 0XFFFC;
    // 0x15116964: lbu         $t1, 0x57($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X57);
    // 0x15116968: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x1511696C: bne         $t1, $at, L_1511697C
    if (ctx->r9 != ctx->r1) {
        // 0x15116970: nop
    
            goto L_1511697C;
    }
    // 0x15116970: nop

    // 0x15116974: sb          $t3, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r11;
    // 0x15116978: sb          $t4, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r12;
L_1511697C:
    // 0x1511697C: jr          $ra
    // 0x15116980: nop

    return;
    return;
    // 0x15116980: nop

;}
RECOMP_FUNC void func_15080CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15080CF4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15080CF8: lbu         $t6, 0x1941($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1941);
    // 0x15080CFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15080D00: bne         $t6, $zero, L_15080D10
    if (ctx->r14 != 0) {
        // 0x15080D04: nop
    
            goto L_15080D10;
    }
    // 0x15080D04: nop

    // 0x15080D08: jr          $ra
    // 0x15080D0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15080D0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15080D10:
    // 0x15080D10: jr          $ra
    // 0x15080D14: nop

    return;
    return;
    // 0x15080D14: nop

;}
RECOMP_FUNC void func_151C9AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C9AC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151C9AC4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x151C9AC8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151C9ACC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151C9AD0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x151C9AD4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x151C9AD8: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x151C9ADC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x151C9AE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C9AE4: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x151C9AE8: lwc1        $f6, 0x180($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X180);
    // 0x151C9AEC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x151C9AF0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C9AF4: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x151C9AF8: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x151C9AFC: jal         0x1504715C
    // 0x151C9B00: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    func_1504715C(rdram, ctx);
        goto after_0;
    // 0x151C9B00: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x151C9B04: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x151C9B08: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x151C9B0C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x151C9B10: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x151C9B14: lbu         $a3, 0x57($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X57);
    // 0x151C9B18: jal         0x151ABE40
    // 0x151C9B1C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_151ABE40(rdram, ctx);
        goto after_1;
    // 0x151C9B1C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x151C9B20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151C9B24: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151C9B28: jr          $ra
    // 0x151C9B2C: nop

    return;
    return;
    // 0x151C9B2C: nop

;}
RECOMP_FUNC void func_150F1D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F1D10: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x150F1D14: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x150F1D18: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x150F1D1C: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x150F1D20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150F1D24: andi        $s1, $a1, 0xFF
    ctx->r17 = ctx->r5 & 0XFF;
    // 0x150F1D28: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x150F1D2C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x150F1D30: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x150F1D34: sw          $a1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r5;
    // 0x150F1D38: beql        $s0, $zero, L_150F20D8
    if (ctx->r16 == 0) {
        // 0x150F1D3C: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_150F20D8;
    }
    goto skip_0;
    // 0x150F1D3C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x150F1D40: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150F1D44: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150F1D48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F1D4C: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x150F1D50: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150F1D54: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150F1D58: addiu       $s3, $sp, 0xE4
    ctx->r19 = ADD32(ctx->r29, 0XE4);
    // 0x150F1D5C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150F1D60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F1D64: lui         $a2, 0x447D
    ctx->r6 = S32(0X447D << 16);
    // 0x150F1D68: lui         $a3, 0x3A81
    ctx->r7 = S32(0X3A81 << 16);
    // 0x150F1D6C: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x150F1D70: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150F1D74: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x150F1D78: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x150F1D7C: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    // 0x150F1D80: lwc1        $f4, 0x150($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X150);
    // 0x150F1D84: lwc1        $f18, 0x14C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x150F1D88: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150F1D8C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150F1D90: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150F1D94: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150F1D98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150F1D9C: ori         $a3, $a3, 0x63D3
    ctx->r7 = ctx->r7 | 0X63D3;
    // 0x150F1DA0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150F1DA4: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x150F1DA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150F1DAC: lui         $a1, 0x43FD
    ctx->r5 = S32(0X43FD << 16);
    // 0x150F1DB0: jal         0x151D5404
    // 0x150F1DB4: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    func_151D5404(rdram, ctx);
        goto after_0;
    // 0x150F1DB4: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x150F1DB8: lui         $a2, 0x447D
    ctx->r6 = S32(0X447D << 16);
    // 0x150F1DBC: lui         $a3, 0x3A81
    ctx->r7 = S32(0X3A81 << 16);
    // 0x150F1DC0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x150F1DC4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150F1DC8: ori         $a3, $a3, 0x63D3
    ctx->r7 = ctx->r7 | 0X63D3;
    // 0x150F1DCC: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x150F1DD0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150F1DD4: lui         $a1, 0x43FD
    ctx->r5 = S32(0X43FD << 16);
    // 0x150F1DD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x150F1DDC: jal         0x151D5334
    // 0x150F1DE0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_151D5334(rdram, ctx);
        goto after_1;
    // 0x150F1DE0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_1:
    // 0x150F1DE4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150F1DE8: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x150F1DEC: jal         0x151D5514
    // 0x150F1DF0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_151D5514(rdram, ctx);
        goto after_2;
    // 0x150F1DF0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x150F1DF4: jal         0x150ADA20
    // 0x150F1DF8: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150F1DF8: nop

    after_3:
    // 0x150F1DFC: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x150F1E00: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x150F1E04: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x150F1E08: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150F1E0C: andi        $a0, $v0, 0x8
    ctx->r4 = ctx->r2 & 0X8;
    // 0x150F1E10: addiu       $t5, $zero, 0xFA0
    ctx->r13 = ADD32(0, 0XFA0);
    // 0x150F1E14: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150F1E18: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x150F1E1C: addiu       $t6, $zero, 0x1770
    ctx->r14 = ADD32(0, 0X1770);
    // 0x150F1E20: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150F1E24: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x150F1E28: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x150F1E2C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x150F1E30: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x150F1E34: addiu       $a0, $a0, 0x2B6
    ctx->r4 = ADD32(ctx->r4, 0X2B6);
    // 0x150F1E38: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x150F1E3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F1E40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F1E44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150F1E48: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150F1E4C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150F1E50: jal         0x10010F88
    // 0x150F1E54: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    func_10010F88(rdram, ctx);
        goto after_4;
    // 0x150F1E54: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_4:
    // 0x150F1E58: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150F1E5C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x150F1E60: jal         0x151D3FF4
    // 0x150F1E64: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_151D3FF4(rdram, ctx);
        goto after_5;
    // 0x150F1E64: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_5:
    // 0x150F1E68: jal         0x150ADA68
    // 0x150F1E6C: nop

    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150F1E6C: nop

    after_6:
    // 0x150F1E70: jal         0x150ADA20
    // 0x150F1E74: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150F1E74: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x150F1E78: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150F1E7C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150F1E80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F1E84: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x150F1E88: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150F1E8C: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x150F1E90: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x150F1E94: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F1E98: add.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x150F1E9C: mfhi        $t7
    ctx->r15 = hi;
    // 0x150F1EA0: addiu       $t8, $t7, 0xC8
    ctx->r24 = ADD32(ctx->r15, 0XC8);
    // 0x150F1EA4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x150F1EA8: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x150F1EAC: lui         $a2, 0x3FD2
    ctx->r6 = S32(0X3FD2 << 16);
    // 0x150F1EB0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150F1EB4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150F1EB8: bgez        $t8, L_150F1ED0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x150F1EBC: ori         $a2, $a2, 0xC49
        ctx->r6 = ctx->r6 | 0XC49;
            goto L_150F1ED0;
    }
    // 0x150F1EBC: ori         $a2, $a2, 0xC49
    ctx->r6 = ctx->r6 | 0XC49;
    // 0x150F1EC0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150F1EC4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F1EC8: nop

    // 0x150F1ECC: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_150F1ED0:
    // 0x150F1ED0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150F1ED4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150F1ED8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x150F1EDC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x150F1EE0: jal         0x151541B8
    // 0x150F1EE4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_151541B8(rdram, ctx);
        goto after_8;
    // 0x150F1EE4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x150F1EE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150F1EEC: lwc1        $f2, 0xE0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x150F1EF0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x150F1EF4: sw          $t9, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r25;
    // 0x150F1EF8: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x150F1EFC: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x150F1F00: addiu       $t0, $sp, 0xA4
    ctx->r8 = ADD32(ctx->r29, 0XA4);
    // 0x150F1F04: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150F1F08: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x150F1F0C: lw          $t3, 0x4($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X4);
    // 0x150F1F10: addiu       $t5, $zero, -0x40
    ctx->r13 = ADD32(0, -0X40);
    // 0x150F1F14: addiu       $t6, $zero, 0x2C
    ctx->r14 = ADD32(0, 0X2C);
    // 0x150F1F18: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x150F1F1C: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x150F1F20: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x150F1F24: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x150F1F28: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x150F1F2C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150F1F30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F1F34: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150F1F38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F1F3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F1F40: lwc1        $f8, 0x18FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X18FC);
    // 0x150F1F44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F1F48: lwc1        $f10, 0x1900($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1900);
    // 0x150F1F4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F1F50: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F1F54: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x150F1F58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150F1F5C: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150F1F60: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x150F1F64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F1F68: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150F1F6C: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x150F1F70: lwc1        $f8, 0x1904($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1904);
    // 0x150F1F74: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x150F1F78: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150F1F7C: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150F1F80: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150F1F84: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x150F1F88: sh          $zero, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = 0;
    // 0x150F1F8C: sh          $t4, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r12;
    // 0x150F1F90: sh          $t5, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r13;
    // 0x150F1F94: sh          $t6, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r14;
    // 0x150F1F98: sh          $t7, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r15;
    // 0x150F1F9C: sh          $t8, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r24;
    // 0x150F1FA0: swc1        $f18, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f18.u32l;
    // 0x150F1FA4: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    // 0x150F1FA8: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x150F1FAC: sb          $t9, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r25;
    // 0x150F1FB0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x150F1FB4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x150F1FB8: addiu       $a2, $a2, 0x18CC
    ctx->r6 = ADD32(ctx->r6, 0X18CC);
    // 0x150F1FBC: addiu       $a1, $a1, 0x18C0
    ctx->r5 = ADD32(ctx->r5, 0X18C0);
    // 0x150F1FC0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x150F1FC4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x150F1FC8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150F1FCC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150F1FD0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x150F1FD4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150F1FD8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150F1FDC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150F1FE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150F1FE4: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x150F1FE8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x150F1FEC: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    // 0x150F1FF0: jal         0x1515080C
    // 0x150F1FF4: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    func_1515080C(rdram, ctx);
        goto after_9;
    // 0x150F1FF4: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x150F1FF8: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x150F1FFC: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150F2000: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x150F2004: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x150F2008: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x150F200C: addiu       $t4, $sp, 0x68
    ctx->r12 = ADD32(ctx->r29, 0X68);
    // 0x150F2010: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F2014: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150F2018: lw          $t7, 0x4($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X4);
    // 0x150F201C: addiu       $t9, $zero, -0x40
    ctx->r25 = ADD32(0, -0X40);
    // 0x150F2020: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x150F2024: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x150F2028: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x150F202C: addiu       $t1, $zero, 0x46
    ctx->r9 = ADD32(0, 0X46);
    // 0x150F2030: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x150F2034: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x150F2038: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150F203C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F2040: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150F2044: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F2048: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F204C: lwc1        $f18, 0x1908($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1908);
    // 0x150F2050: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F2054: lwc1        $f4, 0x190C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X190C);
    // 0x150F2058: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F205C: lwc1        $f6, 0x1910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1910);
    // 0x150F2060: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F2064: lwc1        $f8, 0x1914($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1914);
    // 0x150F2068: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F206C: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x150F2070: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    // 0x150F2074: lwc1        $f10, 0x1918($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1918);
    // 0x150F2078: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F207C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150F2080: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150F2084: sh          $zero, 0x74($sp)
    MEM_H(0X74, ctx->r29) = 0;
    // 0x150F2088: sh          $t8, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r24;
    // 0x150F208C: sh          $t9, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r25;
    // 0x150F2090: sh          $t2, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r10;
    // 0x150F2094: sh          $t1, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r9;
    // 0x150F2098: sh          $t0, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r8;
    // 0x150F209C: addiu       $a2, $a2, 0x18E0
    ctx->r6 = ADD32(ctx->r6, 0X18E0);
    // 0x150F20A0: addiu       $a1, $a1, 0x18D8
    ctx->r5 = ADD32(ctx->r5, 0X18D8);
    // 0x150F20A4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150F20A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150F20AC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150F20B0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x150F20B4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x150F20B8: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x150F20BC: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x150F20C0: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x150F20C4: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x150F20C8: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x150F20CC: jal         0x15152190
    // 0x150F20D0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_15152190(rdram, ctx);
        goto after_10;
    // 0x150F20D0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x150F20D4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_150F20D8:
    // 0x150F20D8: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x150F20DC: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x150F20E0: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x150F20E4: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x150F20E8: jr          $ra
    // 0x150F20EC: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    return;
    // 0x150F20EC: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_151733D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151733D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151733DC: jr          $ra
    // 0x151733E0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    return;
    // 0x151733E0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_15196748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15196748: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1519674C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15196750: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15196754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15196758: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1519675C: lb          $t6, 0x2C($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2C);
    // 0x15196760: lw          $a3, 0x98($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X98);
    // 0x15196764: lw          $t2, 0x94($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X94);
    // 0x15196768: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x1519676C: beql        $at, $zero, L_15196790
    if (ctx->r1 == 0) {
        // 0x15196770: lb          $s1, 0x2E($s0)
        ctx->r17 = MEM_B(ctx->r16, 0X2E);
            goto L_15196790;
    }
    goto skip_0;
    // 0x15196770: lb          $s1, 0x2E($s0)
    ctx->r17 = MEM_B(ctx->r16, 0X2E);
    skip_0:
    // 0x15196774: lbu         $t7, 0x6($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X6);
    // 0x15196778: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x1519677C: beql        $t8, $zero, L_15196790
    if (ctx->r24 == 0) {
        // 0x15196780: lb          $s1, 0x2E($s0)
        ctx->r17 = MEM_B(ctx->r16, 0X2E);
            goto L_15196790;
    }
    goto skip_1;
    // 0x15196780: lb          $s1, 0x2E($s0)
    ctx->r17 = MEM_B(ctx->r16, 0X2E);
    skip_1:
    // 0x15196784: b           L_15196B38
    // 0x15196788: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15196B38;
    // 0x15196788: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519678C: lb          $s1, 0x2E($s0)
    ctx->r17 = MEM_B(ctx->r16, 0X2E);
L_15196790:
    // 0x15196790: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x15196794: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15196798: addiu       $t0, $t0, -0x161C
    ctx->r8 = ADD32(ctx->r8, -0X161C);
    // 0x1519679C: beq         $s1, $v0, L_15196940
    if (ctx->r17 == ctx->r2) {
        // 0x151967A0: addiu       $t1, $zero, 0x24
        ctx->r9 = ADD32(0, 0X24);
            goto L_15196940;
    }
    // 0x151967A0: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x151967A4: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x151967A8: addiu       $a2, $a2, -0x165C
    ctx->r6 = ADD32(ctx->r6, -0X165C);
    // 0x151967AC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_151967B0:
    // 0x151967B0: bgez        $s1, L_151967C0
    if (SIGNED(ctx->r17) >= 0) {
        // 0x151967B4: nop
    
            goto L_151967C0;
    }
    // 0x151967B4: nop

    // 0x151967B8: lbu         $s1, 0x25($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X25);
    // 0x151967BC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_151967C0:
    // 0x151967C0: multu       $s1, $t1
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151967C4: lwc1        $f4, 0x40($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X40);
    // 0x151967C8: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x151967CC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151967D0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151967D4: mflo        $t9
    ctx->r25 = lo;
    // 0x151967D8: addu        $v0, $t2, $t9
    ctx->r2 = ADD32(ctx->r10, ctx->r25);
    // 0x151967DC: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x151967E0: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151967E4: lb          $v1, 0x1E($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1E);
    // 0x151967E8: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151967EC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151967F0: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x151967F4: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x151967F8: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x151967FC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15196800: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15196804: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15196808: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x1519680C: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x15196810: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15196814: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15196818: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1519681C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15196820: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x15196824: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x15196828: sb          $t3, 0x1F($v0)
    MEM_B(0X1F, ctx->r2) = ctx->r11;
    // 0x1519682C: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x15196830: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x15196834: blez        $v1, L_1519684C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15196838: swc1        $f4, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
            goto L_1519684C;
    }
    // 0x15196838: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x1519683C: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x15196840: subu        $t5, $v1, $t4
    ctx->r13 = SUB32(ctx->r3, ctx->r12);
    // 0x15196844: b           L_15196868
    // 0x15196848: sb          $t5, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r13;
        goto L_15196868;
    // 0x15196848: sb          $t5, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r13;
L_1519684C:
    // 0x1519684C: lbu         $t6, 0x52($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X52);
    // 0x15196850: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x15196854: lh          $t9, 0x1C($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X1C);
    // 0x15196858: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519685C: mflo        $t8
    ctx->r24 = lo;
    // 0x15196860: subu        $t3, $t9, $t8
    ctx->r11 = SUB32(ctx->r25, ctx->r24);
    // 0x15196864: sh          $t3, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r11;
L_15196868:
    // 0x15196868: lh          $v1, 0x1C($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X1C);
    // 0x1519686C: lbu         $t4, 0x6A($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X6A);
    // 0x15196870: slt         $at, $v1, $t4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x15196874: beql        $at, $zero, L_151968C8
    if (ctx->r1 == 0) {
        // 0x15196878: lwc1        $f6, 0x58($a3)
        ctx->f6.u32l = MEM_W(ctx->r7, 0X58);
            goto L_151968C8;
    }
    goto skip_2;
    // 0x15196878: lwc1        $f6, 0x58($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X58);
    skip_2:
    // 0x1519687C: lbu         $t5, 0x21($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X21);
    // 0x15196880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15196884: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15196888: bnel        $t5, $zero, L_151968C8
    if (ctx->r13 != 0) {
        // 0x1519688C: lwc1        $f6, 0x58($a3)
        ctx->f6.u32l = MEM_W(ctx->r7, 0X58);
            goto L_151968C8;
    }
    goto skip_3;
    // 0x1519688C: lwc1        $f6, 0x58($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X58);
    skip_3:
    // 0x15196890: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x15196894: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15196898: jal         0x15198110
    // 0x1519689C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    func_15198110(rdram, ctx);
        goto after_0;
    // 0x1519689C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    after_0:
    // 0x151968A0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x151968A4: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x151968A8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151968AC: addiu       $t0, $t0, -0x161C
    ctx->r8 = ADD32(ctx->r8, -0X161C);
    // 0x151968B0: addiu       $a2, $a2, -0x165C
    ctx->r6 = ADD32(ctx->r6, -0X165C);
    // 0x151968B4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x151968B8: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x151968BC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x151968C0: lh          $v1, 0x1C($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X1C);
    // 0x151968C4: lwc1        $f6, 0x58($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X58);
L_151968C8:
    // 0x151968C8: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x151968CC: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151968D0: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151968D4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151968D8: bgez        $v1, L_15196934
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151968DC: swc1        $f18, 0x18($v0)
        MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
            goto L_15196934;
    }
    // 0x151968DC: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
    // 0x151968E0: lbu         $t6, 0x6($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X6);
    // 0x151968E4: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x151968E8: sb          $t7, 0x6($a3)
    MEM_B(0X6, ctx->r7) = ctx->r15;
    // 0x151968EC: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x151968F0: beq         $s1, $v0, L_15196924
    if (ctx->r17 == ctx->r2) {
        // 0x151968F4: addiu       $t9, $v0, 0x1
        ctx->r25 = ADD32(ctx->r2, 0X1);
            goto L_15196924;
    }
L_151968F4:
    // 0x151968F4: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x151968F8: sb          $t9, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r25;
    // 0x151968FC: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x15196900: lbu         $t8, 0x25($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X25);
    // 0x15196904: bnel        $t8, $v0, L_15196918
    if (ctx->r24 != ctx->r2) {
        // 0x15196908: lb          $t3, 0x2C($s0)
        ctx->r11 = MEM_B(ctx->r16, 0X2C);
            goto L_15196918;
    }
    goto skip_4;
    // 0x15196908: lb          $t3, 0x2C($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X2C);
    skip_4:
    // 0x1519690C: sb          $zero, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = 0;
    // 0x15196910: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x15196914: lb          $t3, 0x2C($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X2C);
L_15196918:
    // 0x15196918: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x1519691C: bne         $s1, $v0, L_151968F4
    if (ctx->r17 != ctx->r2) {
        // 0x15196920: sb          $t4, 0x2C($s0)
        MEM_B(0X2C, ctx->r16) = ctx->r12;
            goto L_151968F4;
    }
    // 0x15196920: sb          $t4, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r12;
L_15196924:
    // 0x15196924: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196928: mflo        $t5
    ctx->r13 = lo;
    // 0x1519692C: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x15196930: sh          $zero, 0x1C($t6)
    MEM_H(0X1C, ctx->r14) = 0;
L_15196934:
    // 0x15196934: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x15196938: bnel        $s1, $v0, L_151967B0
    if (ctx->r17 != ctx->r2) {
        // 0x1519693C: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_151967B0;
    }
    goto skip_5;
    // 0x1519693C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_5:
L_15196940:
    // 0x15196940: lbu         $v1, 0x6($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X6);
    // 0x15196944: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x15196948: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1519694C: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x15196950: beql        $t7, $zero, L_151969B8
    if (ctx->r15 == 0) {
        // 0x15196954: andi        $t8, $v1, 0x4
        ctx->r24 = ctx->r3 & 0X4;
            goto L_151969B8;
    }
    goto skip_6;
    // 0x15196954: andi        $t8, $v1, 0x4
    ctx->r24 = ctx->r3 & 0X4;
    skip_6:
    // 0x15196958: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1519695C: lbu         $a0, 0x8C($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X8C);
L_15196960:
    // 0x15196960: multu       $s1, $t1
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196964: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x15196968: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x1519696C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15196970: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15196974: mflo        $t9
    ctx->r25 = lo;
    // 0x15196978: addu        $t8, $t2, $t9
    ctx->r24 = ADD32(ctx->r10, ctx->r25);
    // 0x1519697C: sb          $v1, 0x1F($t8)
    MEM_B(0X1F, ctx->r24) = ctx->r3;
    // 0x15196980: lbu         $t3, 0x8D($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X8D);
    // 0x15196984: lbu         $t5, 0x25($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X25);
    // 0x15196988: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x1519698C: andi        $t4, $v1, 0xFF
    ctx->r12 = ctx->r3 & 0XFF;
    // 0x15196990: bne         $s1, $t5, L_1519699C
    if (ctx->r17 != ctx->r13) {
        // 0x15196994: or          $v1, $t4, $zero
        ctx->r3 = ctx->r12 | 0;
            goto L_1519699C;
    }
    // 0x15196994: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x15196998: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_1519699C:
    // 0x1519699C: beql        $a0, $zero, L_151969B4
    if (ctx->r4 == 0) {
        // 0x151969A0: lbu         $v1, 0x6($a3)
        ctx->r3 = MEM_BU(ctx->r7, 0X6);
            goto L_151969B4;
    }
    goto skip_7;
    // 0x151969A0: lbu         $v1, 0x6($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X6);
    skip_7:
    // 0x151969A4: lb          $t9, 0x2E($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X2E);
    // 0x151969A8: bne         $s1, $t9, L_15196960
    if (ctx->r17 != ctx->r25) {
        // 0x151969AC: nop
    
            goto L_15196960;
    }
    // 0x151969AC: nop

    // 0x151969B0: lbu         $v1, 0x6($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X6);
L_151969B4:
    // 0x151969B4: andi        $t8, $v1, 0x4
    ctx->r24 = ctx->r3 & 0X4;
L_151969B8:
    // 0x151969B8: beql        $t8, $zero, L_15196A44
    if (ctx->r24 == 0) {
        // 0x151969BC: lb          $v0, 0x64($a3)
        ctx->r2 = MEM_B(ctx->r7, 0X64);
            goto L_15196A44;
    }
    goto skip_8;
    // 0x151969BC: lb          $v0, 0x64($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X64);
    skip_8:
    // 0x151969C0: lb          $s1, 0x2E($s0)
    ctx->r17 = MEM_B(ctx->r16, 0X2E);
    // 0x151969C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151969C8: lbu         $a0, 0x8E($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X8E);
    // 0x151969CC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x151969D0: bgez        $s1, L_151969E0
    if (SIGNED(ctx->r17) >= 0) {
        // 0x151969D4: nop
    
            goto L_151969E0;
    }
    // 0x151969D4: nop

    // 0x151969D8: lbu         $s1, 0x25($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X25);
    // 0x151969DC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_151969E0:
    // 0x151969E0: multu       $s1, $t1
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151969E4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x151969E8: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x151969EC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x151969F0: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    // 0x151969F4: mflo        $t3
    ctx->r11 = lo;
    // 0x151969F8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x151969FC: lbu         $t4, 0x1F($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1F);
    // 0x15196A00: multu       $t4, $a1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196A04: mflo        $t5
    ctx->r13 = lo;
    // 0x15196A08: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x15196A0C: sb          $t6, 0x1F($v0)
    MEM_B(0X1F, ctx->r2) = ctx->r14;
    // 0x15196A10: lbu         $t7, 0x8F($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X8F);
    // 0x15196A14: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x15196A18: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x15196A1C: bgez        $s1, L_15196A2C
    if (SIGNED(ctx->r17) >= 0) {
        // 0x15196A20: or          $a1, $t9, $zero
        ctx->r5 = ctx->r25 | 0;
            goto L_15196A2C;
    }
    // 0x15196A20: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x15196A24: lbu         $s1, 0x25($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X25);
    // 0x15196A28: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_15196A2C:
    // 0x15196A2C: beql        $a0, $zero, L_15196A44
    if (ctx->r4 == 0) {
        // 0x15196A30: lb          $v0, 0x64($a3)
        ctx->r2 = MEM_B(ctx->r7, 0X64);
            goto L_15196A44;
    }
    goto skip_9;
    // 0x15196A30: lb          $v0, 0x64($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X64);
    skip_9:
    // 0x15196A34: lb          $t4, 0x2E($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X2E);
    // 0x15196A38: bne         $s1, $t4, L_151969E0
    if (ctx->r17 != ctx->r12) {
        // 0x15196A3C: nop
    
            goto L_151969E0;
    }
    // 0x15196A3C: nop

    // 0x15196A40: lb          $v0, 0x64($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X64);
L_15196A44:
    // 0x15196A44: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x15196A48: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15196A4C: beq         $s1, $v0, L_15196A78
    if (ctx->r17 == ctx->r2) {
        // 0x15196A50: sll         $t5, $v0, 2
        ctx->r13 = S32(ctx->r2 << 2);
            goto L_15196A78;
    }
    // 0x15196A50: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x15196A54: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x15196A58: lw          $t9, -0x76C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X76C);
    // 0x15196A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15196A60: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15196A64: jalr        $t9
    // 0x15196A68: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15196A68: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    after_1:
    // 0x15196A6C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x15196A70: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x15196A74: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
L_15196A78:
    // 0x15196A78: lb          $v0, 0x68($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X68);
    // 0x15196A7C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15196A80: beq         $s1, $v0, L_15196AAC
    if (ctx->r17 == ctx->r2) {
        // 0x15196A84: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_15196AAC;
    }
    // 0x15196A84: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15196A88: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x15196A8C: lw          $t9, -0x764($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X764);
    // 0x15196A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15196A94: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15196A98: jalr        $t9
    // 0x15196A9C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x15196A9C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    after_2:
    // 0x15196AA0: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x15196AA4: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x15196AA8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
L_15196AAC:
    // 0x15196AAC: lb          $v0, 0x61($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X61);
    // 0x15196AB0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15196AB4: beq         $s1, $v0, L_15196AE8
    if (ctx->r17 == ctx->r2) {
        // 0x15196AB8: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15196AE8;
    }
    // 0x15196AB8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15196ABC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15196AC0: lw          $t9, -0x780($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X780);
    // 0x15196AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15196AC8: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x15196ACC: jalr        $t9
    // 0x15196AD0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x15196AD0: nop

    after_3:
    // 0x15196AD4: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x15196AD8: bne         $v0, $zero, L_15196AE8
    if (ctx->r2 != 0) {
        // 0x15196ADC: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_15196AE8;
    }
    // 0x15196ADC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x15196AE0: b           L_15196B38
    // 0x15196AE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15196B38;
    // 0x15196AE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15196AE8:
    // 0x15196AE8: lb          $t8, 0x2C($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X2C);
    // 0x15196AEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15196AF0: blezl       $t8, L_15196B28
    if (SIGNED(ctx->r24) <= 0) {
        // 0x15196AF4: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15196B28;
    }
    goto skip_10;
    // 0x15196AF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_10:
    // 0x15196AF8: lb          $t3, 0x2D($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X2D);
    // 0x15196AFC: multu       $t3, $t1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196B00: mflo        $t4
    ctx->r12 = lo;
    // 0x15196B04: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x15196B08: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x15196B0C: sw          $at, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r1;
    // 0x15196B10: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x15196B14: sw          $t7, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r15;
    // 0x15196B18: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x15196B1C: b           L_15196B38
    // 0x15196B20: sw          $at, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r1;
        goto L_15196B38;
    // 0x15196B20: sw          $at, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r1;
    // 0x15196B24: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_15196B28:
    // 0x15196B28: nop

    // 0x15196B2C: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x15196B30: swc1        $f0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f0.u32l;
    // 0x15196B34: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
L_15196B38:
    // 0x15196B38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15196B3C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15196B40: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15196B44: jr          $ra
    // 0x15196B48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x15196B48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_151D8C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8C00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151D8C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D8C08: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x151D8C0C: lbu         $a0, 0x18($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X18);
    // 0x151D8C10: jal         0x15144B34
    // 0x151D8C14: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_15144B34(rdram, ctx);
        goto after_0;
    // 0x151D8C14: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x151D8C18: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x151D8C1C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151D8C20: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x151D8C24: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151D8C28: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151D8C2C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x151D8C30: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151D8C34: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x151D8C38: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151D8C3C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x151D8C40: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151D8C44: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x151D8C48: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151D8C4C: jal         0x15143E64
    // 0x151D8C50: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    func_15143E64(rdram, ctx);
        goto after_1;
    // 0x151D8C50: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x151D8C54: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x151D8C58: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151D8C5C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x151D8C60: lwc1        $f2, 0xC($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0XC);
    // 0x151D8C64: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x151D8C68: nop

    // 0x151D8C6C: bc1fl       L_151D8C84
    if (!c1cs) {
        // 0x151D8C70: lwc1        $f10, 0x10($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
            goto L_151D8C84;
    }
    goto skip_0;
    // 0x151D8C70: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    skip_0:
    // 0x151D8C74: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151D8C78: b           L_151D8CC0
    // 0x151D8C7C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
        goto L_151D8CC0;
    // 0x151D8C7C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x151D8C80: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
L_151D8C84:
    // 0x151D8C84: add.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x151D8C88: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x151D8C8C: nop

    // 0x151D8C90: bc1fl       L_151D8CA8
    if (!c1cs) {
        // 0x151D8C94: sub.s       $f18, $f0, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_151D8CA8;
    }
    goto skip_1;
    // 0x151D8C94: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    skip_1:
    // 0x151D8C98: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x151D8C9C: b           L_151D8CC0
    // 0x151D8CA0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
        goto L_151D8CC0;
    // 0x151D8CA0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x151D8CA4: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
L_151D8CA8:
    // 0x151D8CA8: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x151D8CAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151D8CB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151D8CB4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151D8CB8: sub.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x151D8CBC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
L_151D8CC0:
    // 0x151D8CC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151D8CC4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151D8CC8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151D8CCC: mul.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x151D8CD0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x151D8CD4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x151D8CD8: nop

    // 0x151D8CDC: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x151D8CE0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x151D8CE4: nop

    // 0x151D8CE8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x151D8CEC: beql        $t7, $zero, L_151D8D3C
    if (ctx->r15 == 0) {
        // 0x151D8CF0: mfc1        $t7, $f18
        ctx->r15 = (int32_t)ctx->f18.u32l;
            goto L_151D8D3C;
    }
    goto skip_2;
    // 0x151D8CF0: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    skip_2:
    // 0x151D8CF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151D8CF8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151D8CFC: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151D8D00: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x151D8D04: nop

    // 0x151D8D08: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x151D8D0C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x151D8D10: nop

    // 0x151D8D14: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x151D8D18: bne         $t7, $zero, L_151D8D30
    if (ctx->r15 != 0) {
        // 0x151D8D1C: nop
    
            goto L_151D8D30;
    }
    // 0x151D8D1C: nop

    // 0x151D8D20: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x151D8D24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151D8D28: b           L_151D8D48
    // 0x151D8D2C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_151D8D48;
    // 0x151D8D2C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_151D8D30:
    // 0x151D8D30: b           L_151D8D48
    // 0x151D8D34: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_151D8D48;
    // 0x151D8D34: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151D8D38: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
L_151D8D3C:
    // 0x151D8D3C: nop

    // 0x151D8D40: bltz        $t7, L_151D8D30
    if (SIGNED(ctx->r15) < 0) {
        // 0x151D8D44: nop
    
            goto L_151D8D30;
    }
    // 0x151D8D44: nop

L_151D8D48:
    // 0x151D8D48: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x151D8D4C: sb          $t7, 0x12($t8)
    MEM_B(0X12, ctx->r24) = ctx->r15;
    // 0x151D8D50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D8D54: jr          $ra
    // 0x151D8D58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x151D8D58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_150D1410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D1410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D1414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D1418: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150D141C: jal         0x151149AC
    // 0x150D1420: addiu       $a0, $zero, 0xF9
    ctx->r4 = ADD32(0, 0XF9);
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x150D1420: addiu       $a0, $zero, 0xF9
    ctx->r4 = ADD32(0, 0XF9);
    after_0:
    // 0x150D1424: beq         $v0, $zero, L_150D145C
    if (ctx->r2 == 0) {
        // 0x150D1428: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_150D145C;
    }
    // 0x150D1428: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x150D142C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150D1430: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x150D1434: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x150D1438: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x150D143C: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x150D1440: mflo        $t9
    ctx->r25 = lo;
    // 0x150D1444: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150D1448: bnel        $t9, $zero, L_150D145C
    if (ctx->r25 != 0) {
        // 0x150D144C: sb          $zero, 0x6E($v0)
        MEM_B(0X6E, ctx->r2) = 0;
            goto L_150D145C;
    }
    goto skip_0;
    // 0x150D144C: sb          $zero, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = 0;
    skip_0:
    // 0x150D1450: b           L_150D145C
    // 0x150D1454: sb          $t0, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = ctx->r8;
        goto L_150D145C;
    // 0x150D1454: sb          $t0, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = ctx->r8;
    // 0x150D1458: sb          $zero, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = 0;
L_150D145C:
    // 0x150D145C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D1460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D1464: jr          $ra
    // 0x150D1468: nop

    return;
    return;
    // 0x150D1468: nop

;}
RECOMP_FUNC void func_1506B82C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B82C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506B830: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506B834: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1506B838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506B83C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1506B840: sb          $zero, 0x89($t6)
    MEM_B(0X89, ctx->r14) = 0;
    // 0x1506B844: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1506B848: jal         0x1507F640
    // 0x1506B84C: sb          $zero, 0x83($t7)
    MEM_B(0X83, ctx->r15) = 0;
    func_1507F640(rdram, ctx);
        goto after_0;
    // 0x1506B84C: sb          $zero, 0x83($t7)
    MEM_B(0X83, ctx->r15) = 0;
    after_0:
    // 0x1506B850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506B854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506B858: jr          $ra
    // 0x1506B85C: nop

    return;
    return;
    // 0x1506B85C: nop

;}
RECOMP_FUNC void func_151D8780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8780: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D8784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D8788: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D878C: jal         0x151D8764
    // 0x151D8790: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D8764(rdram, ctx);
        goto after_0;
    // 0x151D8790: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D8794: jal         0x151478F4
    // 0x151D8798: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151478F4(rdram, ctx);
        goto after_1;
    // 0x151D8798: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151D879C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D87A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D87A4: jr          $ra
    // 0x151D87A8: nop

    return;
    return;
    // 0x151D87A8: nop

;}
RECOMP_FUNC void func_1515C388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515C388: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1515C38C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515C390: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1515C394: lb          $t6, 0x2C($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X2C);
    // 0x1515C398: lw          $a1, 0x98($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X98);
    // 0x1515C39C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1515C3A0: beq         $t6, $zero, L_1515C490
    if (ctx->r14 == 0) {
        // 0x1515C3A4: lw          $a3, 0x94($a2)
        ctx->r7 = MEM_W(ctx->r6, 0X94);
            goto L_1515C490;
    }
    // 0x1515C3A4: lw          $a3, 0x94($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X94);
    // 0x1515C3A8: lb          $t8, 0x2D($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X2D);
    // 0x1515C3AC: addiu       $t7, $sp, 0x28
    ctx->r15 = ADD32(ctx->r29, 0X28);
    // 0x1515C3B0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1515C3B4: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x1515C3B8: addu        $t1, $a3, $t9
    ctx->r9 = ADD32(ctx->r7, ctx->r25);
    // 0x1515C3BC: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x1515C3C0: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x1515C3C4: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x1515C3C8: sw          $t4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r12;
    // 0x1515C3CC: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x1515C3D0: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x1515C3D4: lb          $v1, 0x2D($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X2D);
    // 0x1515C3D8: lb          $t5, 0x2E($a2)
    ctx->r13 = MEM_B(ctx->r6, 0X2E);
    // 0x1515C3DC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1515C3E0: beql        $v1, $t5, L_1515C494
    if (ctx->r3 == ctx->r13) {
        // 0x1515C3E4: lb          $v0, 0x38($a1)
        ctx->r2 = MEM_B(ctx->r5, 0X38);
            goto L_1515C494;
    }
    goto skip_0;
    // 0x1515C3E4: lb          $v0, 0x38($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X38);
    skip_0:
    // 0x1515C3E8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1515C3EC: addiu       $a0, $a0, -0x165C
    ctx->r4 = ADD32(ctx->r4, -0X165C);
    // 0x1515C3F0: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
L_1515C3F4:
    // 0x1515C3F4: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1515C3F8: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x1515C3FC: addu        $v0, $a3, $t6
    ctx->r2 = ADD32(ctx->r7, ctx->r14);
    // 0x1515C400: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1515C404: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515C408: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1515C40C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1515C410: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1515C414: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x1515C418: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1515C41C: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x1515C420: mul.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x1515C424: nop

    // 0x1515C428: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1515C42C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1515C430: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1515C434: nop

    // 0x1515C438: mul.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x1515C43C: add.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x1515C440: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x1515C444: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1515C448: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x1515C44C: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1515C450: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x1515C454: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1515C458: add.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1515C45C: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x1515C460: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1515C464: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x1515C468: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1515C46C: add.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x1515C470: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x1515C474: lbu         $t8, 0x25($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X25);
    // 0x1515C478: bne         $v1, $t8, L_1515C484
    if (ctx->r3 != ctx->r24) {
        // 0x1515C47C: nop
    
            goto L_1515C484;
    }
    // 0x1515C47C: nop

    // 0x1515C480: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1515C484:
    // 0x1515C484: lb          $t9, 0x2E($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X2E);
    // 0x1515C488: bnel        $v1, $t9, L_1515C3F4
    if (ctx->r3 != ctx->r25) {
        // 0x1515C48C: lwc1        $f4, 0x4($a1)
        ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
            goto L_1515C3F4;
    }
    goto skip_1;
    // 0x1515C48C: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    skip_1:
L_1515C490:
    // 0x1515C490: lb          $v0, 0x38($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X38);
L_1515C494:
    // 0x1515C494: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1515C498: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1515C49C: beq         $v0, $at, L_1515C4D0
    if (ctx->r2 == ctx->r1) {
        // 0x1515C4A0: sll         $t3, $v0, 2
        ctx->r11 = S32(ctx->r2 << 2);
            goto L_1515C4D0;
    }
    // 0x1515C4A0: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x1515C4A4: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x1515C4A8: lw          $t9, -0x4F80($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4F80);
    // 0x1515C4AC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1515C4B0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1515C4B4: jalr        $t9
    // 0x1515C4B8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1515C4B8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x1515C4BC: sltiu       $t0, $v0, 0x1
    ctx->r8 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x1515C4C0: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x1515C4C4: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
    // 0x1515C4C8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x1515C4CC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
L_1515C4D0:
    // 0x1515C4D0: lb          $t7, 0x2C($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X2C);
    // 0x1515C4D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1515C4D8: blezl       $t7, L_1515C50C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x1515C4DC: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_1515C50C;
    }
    goto skip_2;
    // 0x1515C4DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_2:
    // 0x1515C4E0: lb          $t1, 0x2D($a2)
    ctx->r9 = MEM_B(ctx->r6, 0X2D);
    // 0x1515C4E4: sll         $t4, $t1, 4
    ctx->r12 = S32(ctx->r9 << 4);
    // 0x1515C4E8: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x1515C4EC: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x1515C4F0: sw          $at, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->r1;
    // 0x1515C4F4: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x1515C4F8: sw          $t8, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r24;
    // 0x1515C4FC: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x1515C500: b           L_1515C51C
    // 0x1515C504: sw          $at, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r1;
        goto L_1515C51C;
    // 0x1515C504: sw          $at, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r1;
    // 0x1515C508: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_1515C50C:
    // 0x1515C50C: nop

    // 0x1515C510: swc1        $f0, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->f0.u32l;
    // 0x1515C514: swc1        $f0, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->f0.u32l;
    // 0x1515C518: swc1        $f0, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->f0.u32l;
L_1515C51C:
    // 0x1515C51C: beq         $t0, $zero, L_1515C52C
    if (ctx->r8 == 0) {
        // 0x1515C520: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1515C52C;
    }
    // 0x1515C520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515C524: b           L_1515C52C
    // 0x1515C528: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1515C52C;
    // 0x1515C528: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1515C52C:
    // 0x1515C52C: jr          $ra
    // 0x1515C530: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x1515C530: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_1517F75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517F75C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1517F760: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
    // 0x1517F764: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1517F768: addiu       $a0, $t6, -0x21F0
    ctx->r4 = ADD32(ctx->r14, -0X21F0);
    // 0x1517F76C: bltz        $v1, L_1517F7AC
    if (SIGNED(ctx->r3) < 0) {
        // 0x1517F770: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_1517F7AC;
    }
    // 0x1517F770: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1517F774: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x1517F778: addu        $a1, $t7, $a0
    ctx->r5 = ADD32(ctx->r15, ctx->r4);
    // 0x1517F77C: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x1517F780: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
L_1517F784:
    // 0x1517F784: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1517F788: beq         $at, $zero, L_1517F798
    if (ctx->r1 == 0) {
        // 0x1517F78C: subu        $t8, $v1, $v0
        ctx->r24 = SUB32(ctx->r3, ctx->r2);
            goto L_1517F798;
    }
    // 0x1517F78C: subu        $t8, $v1, $v0
    ctx->r24 = SUB32(ctx->r3, ctx->r2);
    // 0x1517F790: b           L_1517F79C
    // 0x1517F794: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
        goto L_1517F79C;
    // 0x1517F794: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
L_1517F798:
    // 0x1517F798: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_1517F79C:
    // 0x1517F79C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x1517F7A0: sltu        $at, $a1, $a0
    ctx->r1 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x1517F7A4: beql        $at, $zero, L_1517F784
    if (ctx->r1 == 0) {
        // 0x1517F7A8: lhu         $v1, 0x0($a0)
        ctx->r3 = MEM_HU(ctx->r4, 0X0);
            goto L_1517F784;
    }
    goto skip_0;
    // 0x1517F7A8: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    skip_0:
L_1517F7AC:
    // 0x1517F7AC: jr          $ra
    // 0x1517F7B0: nop

    return;
    return;
    // 0x1517F7B0: nop

;}
RECOMP_FUNC void func_1513FA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513FA2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1513FA30: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x1513FA34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1513FA38: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x1513FA3C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1513FA40: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x1513FA44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513FA48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1513FA4C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x1513FA50: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x1513FA54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1513FA58: jal         0x1513FAB4
    // 0x1513FA5C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_1513FAB4(rdram, ctx);
        goto after_0;
    // 0x1513FA5C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x1513FA60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513FA64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1513FA68: jr          $ra
    // 0x1513FA6C: nop

    return;
    return;
    // 0x1513FA6C: nop

;}
RECOMP_FUNC void func_15198570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15198570: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x15198574: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15198578: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1519857C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x15198580: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x15198584: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x15198588: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x1519858C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x15198590: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x15198594: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x15198598: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x1519859C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x151985A0: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x151985A4: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x151985A8: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    // 0x151985AC: lw          $fp, 0x98($s0)
    ctx->r30 = MEM_W(ctx->r16, 0X98);
    // 0x151985B0: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x151985B4: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
    // 0x151985B8: lb          $s1, 0x2E($s0)
    ctx->r17 = MEM_B(ctx->r16, 0X2E);
    // 0x151985BC: lb          $t7, 0x2D($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X2D);
    // 0x151985C0: addiu       $s7, $s7, -0x757C
    ctx->r23 = ADD32(ctx->r23, -0X757C);
    // 0x151985C4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151985C8: beq         $s1, $t7, L_15198790
    if (ctx->r17 == ctx->r15) {
        // 0x151985CC: addiu       $s6, $zero, 0x32C
        ctx->r22 = ADD32(0, 0X32C);
            goto L_15198790;
    }
    // 0x151985CC: addiu       $s6, $zero, 0x32C
    ctx->r22 = ADD32(0, 0X32C);
    // 0x151985D0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x151985D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151985D8: lui         $s5, 0x6
    ctx->r21 = S32(0X6 << 16);
    // 0x151985DC: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x151985E0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151985E4: addiu       $s2, $s2, -0x3D30
    ctx->r18 = ADD32(ctx->r18, -0X3D30);
    // 0x151985E8: ori         $s5, $s5, 0x6
    ctx->r21 = ctx->r21 | 0X6;
    // 0x151985EC: addiu       $s4, $zero, 0x24
    ctx->r20 = ADD32(0, 0X24);
    // 0x151985F0: addiu       $s3, $sp, 0x84
    ctx->r19 = ADD32(ctx->r29, 0X84);
    // 0x151985F4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_151985F8:
    // 0x151985F8: bgez        $s1, L_15198608
    if (SIGNED(ctx->r17) >= 0) {
        // 0x151985FC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_15198608;
    }
    // 0x151985FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15198600: lbu         $s1, 0x25($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X25);
    // 0x15198604: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_15198608:
    // 0x15198608: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519860C: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x15198610: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15198614: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15198618: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1519861C: mflo        $t9
    ctx->r25 = lo;
    // 0x15198620: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x15198624: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x15198628: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x1519862C: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x15198630: sw          $t2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r10;
    // 0x15198634: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x15198638: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x1519863C: lh          $t3, -0x3C4C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X3C4C);
    // 0x15198640: lh          $t4, -0x3C4A($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X3C4A);
    // 0x15198644: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15198648: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1519864C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x15198650: lwc1        $f10, -0x3D1C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3D1C);
    // 0x15198654: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15198658: lh          $t5, -0x3C48($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X3C48);
    // 0x1519865C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15198660: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15198664: lwc1        $f4, -0x3D14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3D14);
    // 0x15198668: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1519866C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15198670: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15198674: lwc1        $f6, -0x3D18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3D18);
    // 0x15198678: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1519867C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x15198680: sub.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x15198684: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x15198688: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1519868C: div.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    // 0x15198690: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15198694: sub.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x15198698: add.s       $f6, $f20, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f8.fl;
    // 0x1519869C: mul.s       $f10, $f6, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x151986A0: nop

    // 0x151986A4: mul.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151986A8: nop

    // 0x151986AC: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x151986B0: nop

    // 0x151986B4: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x151986B8: add.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x151986BC: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x151986C0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151986C4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151986C8: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x151986CC: nop

    // 0x151986D0: bc1f        L_15198784
    if (!c1cs) {
        // 0x151986D4: nop
    
            goto L_15198784;
    }
    // 0x151986D4: nop

    // 0x151986D8: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x151986DC: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x151986E0: lhu         $a2, -0x3CB6($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X3CB6);
    // 0x151986E4: subu        $t7, $t6, $s2
    ctx->r15 = SUB32(ctx->r14, ctx->r18);
    // 0x151986E8: div         $zero, $t7, $s6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r22)));
    // 0x151986EC: mflo        $a3
    ctx->r7 = lo;
    // 0x151986F0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x151986F4: bne         $s6, $zero, L_15198700
    if (ctx->r22 != 0) {
        // 0x151986F8: nop
    
            goto L_15198700;
    }
    // 0x151986F8: nop

    // 0x151986FC: break       7
    do_break(353994492);
L_15198700:
    // 0x15198700: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15198704: bne         $s6, $at, L_15198718
    if (ctx->r22 != ctx->r1) {
        // 0x15198708: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15198718;
    }
    // 0x15198708: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1519870C: bne         $t7, $at, L_15198718
    if (ctx->r15 != ctx->r1) {
        // 0x15198710: nop
    
            goto L_15198718;
    }
    // 0x15198710: nop

    // 0x15198714: break       6
    do_break(353994516);
L_15198718:
    // 0x15198718: jal         0x1505D024
    // 0x1519871C: nop

    func_1505D024(rdram, ctx);
        goto after_0;
    // 0x1519871C: nop

    after_0:
    // 0x15198720: lbu         $t8, 0xC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XC);
    // 0x15198724: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15198728: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x1519872C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15198730: lbu         $t9, 0x1($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1);
    // 0x15198734: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x15198738: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519873C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15198740: jal         0x1518D1C0
    // 0x15198744: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_1518D1C0(rdram, ctx);
        goto after_1;
    // 0x15198744: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x15198748: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x1519874C: beql        $s1, $v0, L_15198788
    if (ctx->r17 == ctx->r2) {
        // 0x15198750: lb          $t4, 0x2D($s0)
        ctx->r12 = MEM_B(ctx->r16, 0X2D);
            goto L_15198788;
    }
    goto skip_0;
    // 0x15198750: lb          $t4, 0x2D($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X2D);
    skip_0:
L_15198754:
    // 0x15198754: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x15198758: sb          $t1, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r9;
    // 0x1519875C: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x15198760: lbu         $t0, 0x25($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X25);
    // 0x15198764: bnel        $t0, $v0, L_15198778
    if (ctx->r8 != ctx->r2) {
        // 0x15198768: lb          $t2, 0x2C($s0)
        ctx->r10 = MEM_B(ctx->r16, 0X2C);
            goto L_15198778;
    }
    goto skip_1;
    // 0x15198768: lb          $t2, 0x2C($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2C);
    skip_1:
    // 0x1519876C: sb          $zero, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = 0;
    // 0x15198770: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x15198774: lb          $t2, 0x2C($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2C);
L_15198778:
    // 0x15198778: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x1519877C: bne         $s1, $v0, L_15198754
    if (ctx->r17 != ctx->r2) {
        // 0x15198780: sb          $t3, 0x2C($s0)
        MEM_B(0X2C, ctx->r16) = ctx->r11;
            goto L_15198754;
    }
    // 0x15198780: sb          $t3, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r11;
L_15198784:
    // 0x15198784: lb          $t4, 0x2D($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X2D);
L_15198788:
    // 0x15198788: bnel        $s1, $t4, L_151985F8
    if (ctx->r17 != ctx->r12) {
        // 0x1519878C: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_151985F8;
    }
    goto skip_2;
    // 0x1519878C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_2:
L_15198790:
    // 0x15198790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15198794: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x15198798: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x1519879C: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x151987A0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151987A4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x151987A8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x151987AC: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x151987B0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x151987B4: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x151987B8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x151987BC: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x151987C0: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x151987C4: jr          $ra
    // 0x151987C8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    return;
    // 0x151987C8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_15191B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15191B8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15191B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15191B94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15191B98: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15191B9C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x15191BA0: lw          $t6, -0x7FF0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7FF0);
    // 0x15191BA4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15191BA8: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x15191BAC: jal         0x151494E0
    // 0x15191BB0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_151494E0(rdram, ctx);
        goto after_0;
    // 0x15191BB0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x15191BB4: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x15191BB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15191BBC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15191BC0: jal         0x15169260
    // 0x15191BC4: lbu         $a3, 0x27($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X27);
    func_15169260(rdram, ctx);
        goto after_1;
    // 0x15191BC4: lbu         $a3, 0x27($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X27);
    after_1:
    // 0x15191BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15191BCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15191BD0: jr          $ra
    // 0x15191BD4: nop

    return;
    return;
    // 0x15191BD4: nop

;}

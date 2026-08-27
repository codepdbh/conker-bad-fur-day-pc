#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_150E2DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E2DB4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x150E2DB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150E2DBC: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150E2DC0: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x150E2DC4: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x150E2DC8: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x150E2DCC: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x150E2DD0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150E2DD4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E2DD8: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x150E2DDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E2DE0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x150E2DE4: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x150E2DE8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x150E2DEC: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x150E2DF0: lhu         $t6, 0xAA($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XAA);
    // 0x150E2DF4: lh          $t9, 0xA2($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XA2);
    // 0x150E2DF8: lh          $t0, 0xA6($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XA6);
    // 0x150E2DFC: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x150E2E00: lbu         $t2, 0x7F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X7F);
    // 0x150E2E04: lh          $t3, 0x82($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X82);
    // 0x150E2E08: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x150E2E0C: lbu         $t5, 0xAF($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XAF);
    // 0x150E2E10: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x150E2E14: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x150E2E18: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150E2E1C: lwc1        $f18, 0x94($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X94);
    // 0x150E2E20: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x150E2E24: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x150E2E28: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150E2E2C: addiu       $t7, $zero, 0x27
    ctx->r15 = ADD32(0, 0X27);
    // 0x150E2E30: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150E2E34: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x150E2E38: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x150E2E3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150E2E40: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x150E2E44: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x150E2E48: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x150E2E4C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x150E2E50: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150E2E54: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x150E2E58: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x150E2E5C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x150E2E60: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x150E2E64: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x150E2E68: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x150E2E6C: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x150E2E70: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x150E2E74: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x150E2E78: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x150E2E7C: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x150E2E80: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x150E2E84: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x150E2E88: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x150E2E8C: jal         0x150E1AB0
    // 0x150E2E90: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    func_150E1AB0(rdram, ctx);
        goto after_0;
    // 0x150E2E90: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x150E2E94: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x150E2E98: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x150E2E9C: jr          $ra
    // 0x150E2EA0: nop

    return;
    return;
    // 0x150E2EA0: nop

;}
RECOMP_FUNC void func_150D8E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D8E1C: lhu         $t6, 0x1E($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1E);
    // 0x150D8E20: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x150D8E24: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x150D8E28: andi        $t8, $t6, 0xFFFD
    ctx->r24 = ctx->r14 & 0XFFFD;
    // 0x150D8E2C: ori         $t0, $t8, 0x8
    ctx->r8 = ctx->r24 | 0X8;
    // 0x150D8E30: sh          $t8, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r24;
    // 0x150D8E34: sh          $t0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r8;
    // 0x150D8E38: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x150D8E3C: sh          $t1, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r9;
    // 0x150D8E40: sh          $t2, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r10;
    // 0x150D8E44: jr          $ra
    // 0x150D8E48: nop

    return;
    return;
    // 0x150D8E48: nop

;}
RECOMP_FUNC void func_150407FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150407FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040800: jr          $ra
    // 0x15040804: nop

    return;
    return;
    // 0x15040804: nop

;}
RECOMP_FUNC void func_10012A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10012A28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x10012A2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10012A30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x10012A34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x10012A38: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x10012A3C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x10012A40: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x10012A44: lbu         $t7, 0x2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2);
    // 0x10012A48: beq         $t7, $zero, L_10012A58
    if (ctx->r15 == 0) {
        // 0x10012A4C: nop
    
            goto L_10012A58;
    }
    // 0x10012A4C: nop

    // 0x10012A50: b           L_10012B74
    // 0x10012A54: nop

        goto L_10012B74;
    // 0x10012A54: nop

L_10012A58:
    // 0x10012A58: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x10012A5C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x10012A60: sb          $t8, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r24;
    // 0x10012A64: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x10012A68: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x10012A6C: beq         $t1, $zero, L_10012A98
    if (ctx->r9 == 0) {
        // 0x10012A70: nop
    
            goto L_10012A98;
    }
    // 0x10012A70: nop

    // 0x10012A74: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x10012A78: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x10012A7C: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x10012A80: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x10012A84: sw          $t5, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r13;
    // 0x10012A88: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x10012A8C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x10012A90: jal         0x10012B84
    // 0x10012A94: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    func_10012B84(rdram, ctx);
        goto after_0;
    // 0x10012A94: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    after_0:
L_10012A98:
    // 0x10012A98: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x10012A9C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x10012AA0: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x10012AA4: blez        $t8, L_10012B6C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x10012AA8: nop
    
            goto L_10012B6C;
    }
    // 0x10012AA8: nop

L_10012AAC:
    // 0x10012AAC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x10012AB0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x10012AB4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x10012AB8: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x10012ABC: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x10012AC0: beq         $t4, $zero, L_10012B4C
    if (ctx->r12 == 0) {
        // 0x10012AC4: nop
    
            goto L_10012B4C;
    }
    // 0x10012AC4: nop

    // 0x10012AC8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x10012ACC: bne         $t5, $zero, L_10012B18
    if (ctx->r13 != 0) {
        // 0x10012AD0: nop
    
            goto L_10012B18;
    }
    // 0x10012AD0: nop

    // 0x10012AD4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x10012AD8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x10012ADC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x10012AE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x10012AE4: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x10012AE8: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x10012AEC: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x10012AF0: sw          $t1, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r9;
    // 0x10012AF4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x10012AF8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x10012AFC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x10012B00: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x10012B04: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x10012B08: jal         0x10012BD0
    // 0x10012B0C: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    func_10012BD0(rdram, ctx);
        goto after_1;
    // 0x10012B0C: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    after_1:
    // 0x10012B10: b           L_10012B4C
    // 0x10012B14: nop

        goto L_10012B4C;
    // 0x10012B14: nop

L_10012B18:
    // 0x10012B18: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x10012B1C: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x10012B20: and         $t7, $t2, $at
    ctx->r15 = ctx->r10 & ctx->r1;
    // 0x10012B24: sll         $t0, $t7, 5
    ctx->r8 = S32(ctx->r15 << 5);
    // 0x10012B28: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x10012B2C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x10012B30: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x10012B34: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x10012B38: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x10012B3C: addu        $t4, $t9, $t8
    ctx->r12 = ADD32(ctx->r25, ctx->r24);
    // 0x10012B40: lw          $t3, 0xC($t4)
    ctx->r11 = MEM_W(ctx->r12, 0XC);
    // 0x10012B44: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x10012B48: sw          $t6, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r14;
L_10012B4C:
    // 0x10012B4C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x10012B50: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x10012B54: addiu       $t7, $t2, 0x1
    ctx->r15 = ADD32(ctx->r10, 0X1);
    // 0x10012B58: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x10012B5C: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x10012B60: slt         $at, $t7, $t1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x10012B64: bne         $at, $zero, L_10012AAC
    if (ctx->r1 != 0) {
        // 0x10012B68: nop
    
            goto L_10012AAC;
    }
    // 0x10012B68: nop

L_10012B6C:
    // 0x10012B6C: b           L_10012B74
    // 0x10012B70: nop

        goto L_10012B74;
    // 0x10012B70: nop

L_10012B74:
    // 0x10012B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10012B78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x10012B7C: jr          $ra
    // 0x10012B80: nop

    return;
    return;
    // 0x10012B80: nop

;}
RECOMP_FUNC void func_10021E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10021E4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x10021E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10021E54: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x10021E58: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x10021E5C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x10021E60: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x10021E64: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x10021E68: blez        $t6, L_10021F3C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x10021E6C: nop
    
            goto L_10021F3C;
    }
    // 0x10021E6C: nop

    // 0x10021E70: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x10021E74: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x10021E78: lw          $t9, 0x30($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X30);
    // 0x10021E7C: lw          $a0, 0x44($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X44);
    // 0x10021E80: lw          $a2, 0x34($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X34);
    // 0x10021E84: jalr        $t9
    // 0x10021E88: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x10021E88: nop

    after_0:
    // 0x10021E8C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x10021E90: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x10021E94: bne         $t8, $zero, L_10021EC0
    if (ctx->r24 != 0) {
        // 0x10021E98: nop
    
            goto L_10021EC0;
    }
    // 0x10021E98: nop

    // 0x10021E9C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x10021EA0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x10021EA4: sw          $t0, 0x80($t1)
    MEM_W(0X80, ctx->r9) = ctx->r8;
    // 0x10021EA8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x10021EAC: sh          $zero, 0x62($t2)
    MEM_H(0X62, ctx->r10) = 0;
    // 0x10021EB0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x10021EB4: sw          $zero, 0x40($t3)
    MEM_W(0X40, ctx->r11) = 0;
    // 0x10021EB8: b           L_10022024
    // 0x10021EBC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
        goto L_10022024;
    // 0x10021EBC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
L_10021EC0:
    // 0x10021EC0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x10021EC4: andi        $t5, $t4, 0x7
    ctx->r13 = ctx->r12 & 0X7;
    // 0x10021EC8: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x10021ECC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x10021ED0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x10021ED4: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x10021ED8: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x10021EDC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x10021EE0: addiu       $t0, $t8, 0x8
    ctx->r8 = ADD32(ctx->r24, 0X8);
    // 0x10021EE4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x10021EE8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x10021EEC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x10021EF0: lh          $t9, 0x46($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X46);
    // 0x10021EF4: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x10021EF8: andi        $t2, $t1, 0x7
    ctx->r10 = ctx->r9 & 0X7;
    // 0x10021EFC: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x10021F00: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x10021F04: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x10021F08: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x10021F0C: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x10021F10: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x10021F14: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x10021F18: or          $t0, $t7, $t8
    ctx->r8 = ctx->r15 | ctx->r24;
    // 0x10021F1C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x10021F20: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x10021F24: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x10021F28: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x10021F2C: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x10021F30: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x10021F34: b           L_10021F40
    // 0x10021F38: nop

        goto L_10021F40;
    // 0x10021F38: nop

L_10021F3C:
    // 0x10021F3C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_10021F40:
    // 0x10021F40: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x10021F44: andi        $t9, $t6, 0x2
    ctx->r25 = ctx->r14 & 0X2;
    // 0x10021F48: beq         $t9, $zero, L_10021F88
    if (ctx->r25 == 0) {
        // 0x10021F4C: nop
    
            goto L_10021F88;
    }
    // 0x10021F4C: nop

    // 0x10021F50: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x10021F54: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x10021F58: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x10021F5C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x10021F60: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x10021F64: lui         $t0, 0xF00
    ctx->r8 = S32(0XF00 << 16);
    // 0x10021F68: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x10021F6C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x10021F70: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x10021F74: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x10021F78: lw          $t3, 0x18($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X18);
    // 0x10021F7C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x10021F80: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x10021F84: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
L_10021F88:
    // 0x10021F88: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10021F8C: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x10021F90: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x10021F94: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x10021F98: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x10021F9C: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x10021FA0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x10021FA4: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x10021FA8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x10021FAC: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x10021FB0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x10021FB4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x10021FB8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x10021FBC: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x10021FC0: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x10021FC4: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x10021FC8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x10021FCC: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x10021FD0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x10021FD4: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x10021FD8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x10021FDC: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x10021FE0: lh          $t9, 0x42($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X42);
    // 0x10021FE4: sll         $t6, $t5, 28
    ctx->r14 = S32(ctx->r13 << 28);
    // 0x10021FE8: sll         $t0, $t8, 16
    ctx->r8 = S32(ctx->r24 << 16);
    // 0x10021FEC: or          $t1, $t6, $t0
    ctx->r9 = ctx->r14 | ctx->r8;
    // 0x10021FF0: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x10021FF4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x10021FF8: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x10021FFC: or          $t5, $t1, $t4
    ctx->r13 = ctx->r9 | ctx->r12;
    // 0x10022000: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x10022004: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x10022008: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x1002200C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x10022010: sw          $zero, 0x40($t0)
    MEM_W(0X40, ctx->r8) = 0;
    // 0x10022014: b           L_10022024
    // 0x10022018: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
        goto L_10022024;
    // 0x10022018: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x1002201C: b           L_10022024
    // 0x10022020: nop

        goto L_10022024;
    // 0x10022020: nop

L_10022024:
    // 0x10022024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10022028: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1002202C: jr          $ra
    // 0x10022030: nop

    return;
    return;
    // 0x10022030: nop

    // 0x10022034: nop

    // 0x10022038: nop

    // 0x1002203C: nop

;}
RECOMP_FUNC void func_151BE558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BE558: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151BE55C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151BE560: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151BE564: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151BE568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151BE56C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151BE570: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x151BE574: bne         $a2, $at, L_151BE5C4
    if (ctx->r6 != ctx->r1) {
        // 0x151BE578: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_151BE5C4;
    }
    // 0x151BE578: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151BE57C: addiu       $v0, $a3, 0xB0
    ctx->r2 = ADD32(ctx->r7, 0XB0);
    // 0x151BE580: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x151BE584: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151BE588: bnel        $v1, $a0, L_151BE5A8
    if (ctx->r3 != ctx->r4) {
        // 0x151BE58C: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_151BE5A8;
    }
    goto skip_0;
    // 0x151BE58C: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x151BE590: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x151BE594: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x151BE598: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x151BE59C: b           L_151BE5F4
    // 0x151BE5A0: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
        goto L_151BE5F4;
    // 0x151BE5A0: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x151BE5A4: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_151BE5A8:
    // 0x151BE5A8: bnel        $t9, $a0, L_151BE5F8
    if (ctx->r25 != ctx->r4) {
        // 0x151BE5AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151BE5F8;
    }
    goto skip_1;
    // 0x151BE5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151BE5B0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x151BE5B4: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x151BE5B8: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x151BE5BC: b           L_151BE5F8
    // 0x151BE5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151BE5F8;
    // 0x151BE5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151BE5C4:
    // 0x151BE5C4: bne         $v0, $zero, L_151BE5F4
    if (ctx->r2 != 0) {
        // 0x151BE5C8: addiu       $v0, $a3, 0xB0
        ctx->r2 = ADD32(ctx->r7, 0XB0);
            goto L_151BE5F4;
    }
    // 0x151BE5C8: addiu       $v0, $a3, 0xB0
    ctx->r2 = ADD32(ctx->r7, 0XB0);
    // 0x151BE5CC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151BE5D0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x151BE5D4: beq         $v1, $t1, L_151BE5EC
    if (ctx->r3 == ctx->r9) {
        // 0x151BE5D8: nop
    
            goto L_151BE5EC;
    }
    // 0x151BE5D8: nop

    // 0x151BE5DC: lbu         $t2, 0x4($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X4);
    // 0x151BE5E0: lbu         $t3, 0x4($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X4);
    // 0x151BE5E4: bnel        $t2, $t3, L_151BE5F8
    if (ctx->r10 != ctx->r11) {
        // 0x151BE5E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151BE5F8;
    }
    goto skip_2;
    // 0x151BE5E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_151BE5EC:
    // 0x151BE5EC: jal         0x1516972C
    // 0x151BE5F0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151BE5F0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
L_151BE5F4:
    // 0x151BE5F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151BE5F8:
    // 0x151BE5F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151BE5FC: jr          $ra
    // 0x151BE600: nop

    return;
    return;
    // 0x151BE600: nop

;}
RECOMP_FUNC void func_151DB2CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DB2CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151DB2D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151DB2D4: sb          $zero, 0x14($a0)
    MEM_B(0X14, ctx->r4) = 0;
    // 0x151DB2D8: jal         0x150ADA20
    // 0x151DB2DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151DB2DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151DB2E0: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151DB2E4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB2E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151DB2EC: mfhi        $t6
    ctx->r14 = hi;
    // 0x151DB2F0: addiu       $t7, $t6, 0x50
    ctx->r15 = ADD32(ctx->r14, 0X50);
    // 0x151DB2F4: sb          $t7, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r15;
    // 0x151DB2F8: sb          $zero, 0x16($a0)
    MEM_B(0X16, ctx->r4) = 0;
    // 0x151DB2FC: jal         0x150ADA20
    // 0x151DB300: sb          $zero, 0x18($a0)
    MEM_B(0X18, ctx->r4) = 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DB300: sb          $zero, 0x18($a0)
    MEM_B(0X18, ctx->r4) = 0;
    after_1:
    // 0x151DB304: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x151DB308: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB30C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151DB310: mfhi        $t8
    ctx->r24 = hi;
    // 0x151DB314: addiu       $t9, $t8, 0xB4
    ctx->r25 = ADD32(ctx->r24, 0XB4);
    // 0x151DB318: sb          $t9, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r25;
    // 0x151DB31C: sb          $zero, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = 0;
    // 0x151DB320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151DB324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151DB328: jr          $ra
    // 0x151DB32C: nop

    return;
    return;
    // 0x151DB32C: nop

;}
RECOMP_FUNC void func_1513E2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513E2A4: jr          $ra
    // 0x1513E2A8: nop

    return;
    return;
    // 0x1513E2A8: nop

;}
RECOMP_FUNC void func_150F33F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F33F8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x150F33FC: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x150F3400: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150F3404: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x150F3408: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x150F340C: lw          $t6, -0x4010($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4010);
    // 0x150F3410: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150F3414: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x150F3418: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x150F341C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3420: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x150F3424: lwc1        $f4, 0x300($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X300);
    // 0x150F3428: lwc1        $f6, 0x1970($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1970);
    // 0x150F342C: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x150F3430: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150F3434: nop

    // 0x150F3438: bc1f        L_150F3498
    if (!c1cs) {
        // 0x150F343C: nop
    
            goto L_150F3498;
    }
    // 0x150F343C: nop

    // 0x150F3440: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F3444: lwc1        $f10, 0x2FC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x150F3448: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150F344C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x150F3450: nop

    // 0x150F3454: bc1f        L_150F347C
    if (!c1cs) {
        // 0x150F3458: nop
    
            goto L_150F347C;
    }
    // 0x150F3458: nop

    // 0x150F345C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150F3460: lw          $v0, -0x65C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X65C0);
    // 0x150F3464: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150F3468: sllv        $t0, $t9, $a0
    ctx->r8 = S32(ctx->r25 << (ctx->r4 & 31));
    // 0x150F346C: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x150F3470: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x150F3474: jr          $ra
    // 0x150F3478: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    return;
    return;
    // 0x150F3478: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
L_150F347C:
    // 0x150F347C: lw          $v0, -0x65C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X65C0);
    // 0x150F3480: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150F3484: sllv        $t4, $t3, $a0
    ctx->r12 = S32(ctx->r11 << (ctx->r4 & 31));
    // 0x150F3488: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x150F348C: nor         $t5, $t4, $zero
    ctx->r13 = ~(ctx->r12 | 0);
    // 0x150F3490: and         $t6, $t2, $t5
    ctx->r14 = ctx->r10 & ctx->r13;
    // 0x150F3494: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
L_150F3498:
    // 0x150F3498: jr          $ra
    // 0x150F349C: nop

    return;
    return;
    // 0x150F349C: nop

;}
RECOMP_FUNC void func_151A4CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A4CE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A4CE4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151A4CE8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151A4CEC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151A4CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A4CF4: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x151A4CF8: bne         $a2, $zero, L_151A4D30
    if (ctx->r6 != 0) {
        // 0x151A4CFC: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_151A4D30;
    }
    // 0x151A4CFC: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x151A4D00: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x151A4D04: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x151A4D08: beq         $t7, $t8, L_151A4D20
    if (ctx->r15 == ctx->r24) {
        // 0x151A4D0C: nop
    
            goto L_151A4D20;
    }
    // 0x151A4D0C: nop

    // 0x151A4D10: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x151A4D14: lbu         $t0, 0x4($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X4);
    // 0x151A4D18: bnel        $t9, $t0, L_151A4D7C
    if (ctx->r25 != ctx->r8) {
        // 0x151A4D1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A4D7C;
    }
    goto skip_0;
    // 0x151A4D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_151A4D20:
    // 0x151A4D20: jal         0x151A4E9C
    // 0x151A4D24: nop

    func_151A4E9C(rdram, ctx);
        goto after_0;
    // 0x151A4D24: nop

    after_0:
    // 0x151A4D28: b           L_151A4D7C
    // 0x151A4D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151A4D7C;
    // 0x151A4D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151A4D30:
    // 0x151A4D30: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x151A4D34: bnel        $v1, $at, L_151A4D7C
    if (ctx->r3 != ctx->r1) {
        // 0x151A4D38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A4D7C;
    }
    goto skip_1;
    // 0x151A4D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151A4D3C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x151A4D40: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x151A4D44: bnel        $a0, $v1, L_151A4D64
    if (ctx->r4 != ctx->r3) {
        // 0x151A4D48: lw          $t3, 0x4($a1)
        ctx->r11 = MEM_W(ctx->r5, 0X4);
            goto L_151A4D64;
    }
    goto skip_2;
    // 0x151A4D48: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    skip_2:
    // 0x151A4D4C: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x151A4D50: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x151A4D54: lbu         $t2, 0x9($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X9);
    // 0x151A4D58: b           L_151A4D78
    // 0x151A4D5C: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
        goto L_151A4D78;
    // 0x151A4D5C: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
    // 0x151A4D60: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
L_151A4D64:
    // 0x151A4D64: bnel        $t3, $v1, L_151A4D7C
    if (ctx->r11 != ctx->r3) {
        // 0x151A4D68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A4D7C;
    }
    goto skip_3;
    // 0x151A4D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x151A4D6C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x151A4D70: lbu         $t4, 0x8($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X8);
    // 0x151A4D74: sb          $t4, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r12;
L_151A4D78:
    // 0x151A4D78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151A4D7C:
    // 0x151A4D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A4D80: jr          $ra
    // 0x151A4D84: nop

    return;
    return;
    // 0x151A4D84: nop

;}
RECOMP_FUNC void func_1513530C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513530C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15135310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15135314: jal         0x15169824
    // 0x15135318: nop

    func_15169824(rdram, ctx);
        goto after_0;
    // 0x15135318: nop

    after_0:
    // 0x1513531C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15135320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15135324: jr          $ra
    // 0x15135328: nop

    return;
    return;
    // 0x15135328: nop

;}
RECOMP_FUNC void func_15103C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15103C14: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15103C18: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x15103C1C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15103C20: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15103C24: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x15103C28: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x15103C2C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15103C30: addiu       $t7, $t7, -0x6550
    ctx->r15 = ADD32(ctx->r15, -0X6550);
    // 0x15103C34: sll         $t6, $a3, 1
    ctx->r14 = S32(ctx->r7 << 1);
    // 0x15103C38: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x15103C3C: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x15103C40: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x15103C44: addiu       $at, $zero, 0x58D
    ctx->r1 = ADD32(0, 0X58D);
    // 0x15103C48: beq         $t8, $zero, L_15103C58
    if (ctx->r24 == 0) {
        // 0x15103C4C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_15103C58;
    }
    // 0x15103C4C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x15103C50: bnel        $s1, $at, L_15103E28
    if (ctx->r17 != ctx->r1) {
        // 0x15103C54: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15103E28;
    }
    goto skip_0;
    // 0x15103C54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
L_15103C58:
    // 0x15103C58: jal         0x1505EEF4
    // 0x15103C5C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_1505EEF4(rdram, ctx);
        goto after_0;
    // 0x15103C5C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_0:
    // 0x15103C60: beq         $v0, $zero, L_15103E24
    if (ctx->r2 == 0) {
        // 0x15103C64: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15103E24;
    }
    // 0x15103C64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15103C68: jal         0x10010894
    // 0x15103C6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_10010894(rdram, ctx);
        goto after_1;
    // 0x15103C6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x15103C70: bne         $v0, $zero, L_15103E24
    if (ctx->r2 != 0) {
        // 0x15103C74: lw          $t9, 0x58($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X58);
            goto L_15103E24;
    }
    // 0x15103C74: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x15103C78: beq         $t9, $zero, L_15103CDC
    if (ctx->r25 == 0) {
        // 0x15103C7C: lw          $t0, 0x60($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X60);
            goto L_15103CDC;
    }
    // 0x15103C7C: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x15103C80: beq         $t0, $zero, L_15103CB8
    if (ctx->r8 == 0) {
        // 0x15103C84: nop
    
            goto L_15103CB8;
    }
    // 0x15103C84: nop

    // 0x15103C88: jal         0x150ADA20
    // 0x15103C8C: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15103C8C: nop

    after_2:
    // 0x15103C90: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x15103C94: divu        $zero, $v0, $t1
    lo = S32(U32(ctx->r2) / U32(ctx->r9)); hi = S32(U32(ctx->r2) % U32(ctx->r9));
    // 0x15103C98: mfhi        $t2
    ctx->r10 = hi;
    // 0x15103C9C: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x15103CA0: bne         $t1, $zero, L_15103CAC
    if (ctx->r9 != 0) {
        // 0x15103CA4: nop
    
            goto L_15103CAC;
    }
    // 0x15103CA4: nop

    // 0x15103CA8: break       7
    do_break(353385640);
L_15103CAC:
    // 0x15103CAC: addu        $s1, $s1, $t3
    ctx->r17 = ADD32(ctx->r17, ctx->r11);
    // 0x15103CB0: b           L_15103CE0
    // 0x15103CB4: lw          $t6, 0x318($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X318);
        goto L_15103CE0;
    // 0x15103CB4: lw          $t6, 0x318($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X318);
L_15103CB8:
    // 0x15103CB8: jal         0x150ADA20
    // 0x15103CBC: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15103CBC: nop

    after_3:
    // 0x15103CC0: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x15103CC4: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x15103CC8: mfhi        $t5
    ctx->r13 = hi;
    // 0x15103CCC: addu        $s1, $s1, $t5
    ctx->r17 = ADD32(ctx->r17, ctx->r13);
    // 0x15103CD0: bne         $t4, $zero, L_15103CDC
    if (ctx->r12 != 0) {
        // 0x15103CD4: nop
    
            goto L_15103CDC;
    }
    // 0x15103CD4: nop

    // 0x15103CD8: break       7
    do_break(353385688);
L_15103CDC:
    // 0x15103CDC: lw          $t6, 0x318($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X318);
L_15103CE0:
    // 0x15103CE0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15103CE4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x15103CE8: beq         $t6, $zero, L_15103CF8
    if (ctx->r14 == 0) {
        // 0x15103CEC: addiu       $t4, $zero, 0x7FBC
        ctx->r12 = ADD32(0, 0X7FBC);
            goto L_15103CF8;
    }
    // 0x15103CEC: addiu       $t4, $zero, 0x7FBC
    ctx->r12 = ADD32(0, 0X7FBC);
    // 0x15103CF0: b           L_15103D04
    // 0x15103CF4: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
        goto L_15103D04;
    // 0x15103CF4: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
L_15103CF8:
    // 0x15103CF8: beql        $t8, $zero, L_15103D08
    if (ctx->r24 == 0) {
        // 0x15103CFC: lw          $t9, 0x48($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X48);
            goto L_15103D08;
    }
    goto skip_1;
    // 0x15103CFC: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    skip_1:
    // 0x15103D00: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_15103D04:
    // 0x15103D04: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
L_15103D08:
    // 0x15103D08: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x15103D0C: addiu       $t5, $zero, 0x7FFF
    ctx->r13 = ADD32(0, 0X7FFF);
    // 0x15103D10: beq         $t9, $zero, L_15103DA0
    if (ctx->r25 == 0) {
        // 0x15103D14: lui         $t7, 0x1510
        ctx->r15 = S32(0X1510 << 16);
            goto L_15103DA0;
    }
    // 0x15103D14: lui         $t7, 0x1510
    ctx->r15 = S32(0X1510 << 16);
    // 0x15103D18: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15103D1C: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15103D20: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15103D24: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15103D28: lui         $t2, 0x1510
    ctx->r10 = S32(0X1510 << 16);
    // 0x15103D2C: addiu       $t2, $t2, 0x3910
    ctx->r10 = ADD32(ctx->r10, 0X3910);
    // 0x15103D30: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15103D34: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15103D38: addiu       $t9, $zero, 0x7530
    ctx->r25 = ADD32(0, 0X7530);
    // 0x15103D3C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15103D40: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15103D44: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x15103D48: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x15103D4C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x15103D50: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x15103D54: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    // 0x15103D58: addiu       $t4, $zero, 0x100
    ctx->r12 = ADD32(0, 0X100);
    // 0x15103D5C: addiu       $t1, $zero, 0x7FFE
    ctx->r9 = ADD32(0, 0X7FFE);
    // 0x15103D60: addiu       $t0, $zero, 0x7FFF
    ctx->r8 = ADD32(0, 0X7FFF);
    // 0x15103D64: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x15103D68: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x15103D6C: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15103D70: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x15103D74: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x15103D78: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15103D7C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x15103D80: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15103D84: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x15103D88: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15103D8C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x15103D90: jal         0x1000FA64
    // 0x15103D94: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    func_1000FA64(rdram, ctx);
        goto after_4;
    // 0x15103D94: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    after_4:
    // 0x15103D98: b           L_15103E1C
    // 0x15103D9C: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
        goto L_15103E1C;
    // 0x15103D9C: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
L_15103DA0:
    // 0x15103DA0: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15103DA4: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15103DA8: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15103DAC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15103DB0: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x15103DB4: addiu       $t7, $t7, 0x3AA0
    ctx->r15 = ADD32(ctx->r15, 0X3AA0);
    // 0x15103DB8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15103DBC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15103DC0: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x15103DC4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15103DC8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15103DCC: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x15103DD0: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15103DD4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x15103DD8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x15103DDC: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15103DE0: sll         $t9, $t8, 15
    ctx->r25 = S32(ctx->r24 << 15);
    // 0x15103DE4: ori         $t0, $t9, 0x14
    ctx->r8 = ctx->r25 | 0X14;
    // 0x15103DE8: addiu       $t6, $zero, 0x7FFE
    ctx->r14 = ADD32(0, 0X7FFE);
    // 0x15103DEC: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x15103DF0: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x15103DF4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x15103DF8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x15103DFC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x15103E00: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x15103E04: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15103E08: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x15103E0C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x15103E10: jal         0x1000FA64
    // 0x15103E14: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_1000FA64(rdram, ctx);
        goto after_5;
    // 0x15103E14: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_5:
    // 0x15103E18: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
L_15103E1C:
    // 0x15103E1C: addiu       $t2, $zero, 0x258
    ctx->r10 = ADD32(0, 0X258);
    // 0x15103E20: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
L_15103E24:
    // 0x15103E24: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_15103E28:
    // 0x15103E28: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x15103E2C: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x15103E30: jr          $ra
    // 0x15103E34: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x15103E34: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15103E38: nop

    // 0x15103E3C: nop

;}
RECOMP_FUNC void func_151D9878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D9878: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D987C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D9880: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151D9884: addiu       $t7, $t7, -0x4C88
    ctx->r15 = ADD32(ctx->r15, -0X4C88);
    // 0x151D9888: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151D988C: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x151D9890: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x151D9894: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D9898: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151D989C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x151D98A0: jal         0x150ADA20
    // 0x151D98A4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151D98A4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    after_0:
    // 0x151D98A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151D98AC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D98B0: mfhi        $t1
    ctx->r9 = hi;
    // 0x151D98B4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151D98B8: addu        $v0, $sp, $t2
    ctx->r2 = ADD32(ctx->r29, ctx->r10);
    // 0x151D98BC: lbu         $v0, 0x1F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1F);
    // 0x151D98C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D98C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D98C8: jr          $ra
    // 0x151D98CC: nop

    return;
    return;
    // 0x151D98CC: nop

;}
RECOMP_FUNC void func_1515D088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515D088: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1515D08C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1515D090: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1515D094: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x1515D098: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x1515D09C: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x1515D0A0: bltz        $v0, L_1515D0B4
    if (SIGNED(ctx->r2) < 0) {
        // 0x1515D0A4: sb          $t7, 0x38($sp)
        MEM_B(0X38, ctx->r29) = ctx->r15;
            goto L_1515D0B4;
    }
    // 0x1515D0A4: sb          $t7, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r15;
    // 0x1515D0A8: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x1515D0AC: bne         $at, $zero, L_1515D0BC
    if (ctx->r1 != 0) {
        // 0x1515D0B0: lw          $t8, 0x40($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X40);
            goto L_1515D0BC;
    }
    // 0x1515D0B0: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
L_1515D0B4:
    // 0x1515D0B4: b           L_1515D120
    // 0x1515D0B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1515D120;
    // 0x1515D0B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1515D0BC:
    // 0x1515D0BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1515D0C0: addiu       $t9, $zero, 0xD
    ctx->r25 = ADD32(0, 0XD);
    // 0x1515D0C4: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x1515D0C8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1515D0CC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1515D0D0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x1515D0D4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1515D0D8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1515D0DC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1515D0E0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1515D0E4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1515D0E8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x1515D0EC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x1515D0F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1515D0F4: jal         0x151491F4
    // 0x1515D0F8: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    func_151491F4(rdram, ctx);
        goto after_0;
    // 0x1515D0F8: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1515D0FC: beq         $v0, $zero, L_1515D11C
    if (ctx->r2 == 0) {
        // 0x1515D100: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1515D11C;
    }
    // 0x1515D100: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1515D104: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1515D108: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x1515D10C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x1515D110: jal         0x10022EC0
    // 0x1515D114: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1515D114: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_1:
    // 0x1515D118: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
L_1515D11C:
    // 0x1515D11C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1515D120:
    // 0x1515D120: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1515D124: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1515D128: jr          $ra
    // 0x1515D12C: nop

    return;
    return;
    // 0x1515D12C: nop

;}
RECOMP_FUNC void func_151B5BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B5BF0: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x151B5BF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151B5BF8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x151B5BFC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151B5C00: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151B5C04: lh          $a2, 0xE2($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XE2);
    // 0x151B5C08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151B5C0C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151B5C10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B5C14: lwc1        $f4, -0x5BD0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5BD0);
    // 0x151B5C18: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x151B5C1C: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x151B5C20: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x151B5C24: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x151B5C28: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x151B5C2C: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x151B5C30: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x151B5C34: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x151B5C38: addiu       $t2, $sp, 0x70
    ctx->r10 = ADD32(ctx->r29, 0X70);
    // 0x151B5C3C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x151B5C40: lw          $at, 0x0($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X0);
    // 0x151B5C44: ori         $t8, $zero, 0xB908
    ctx->r24 = 0 | 0XB908;
    // 0x151B5C48: addiu       $t3, $zero, 0x100
    ctx->r11 = ADD32(0, 0X100);
    // 0x151B5C4C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151B5C50: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x151B5C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151B5C58: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151B5C5C: lw          $at, 0x8($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X8);
    // 0x151B5C60: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x151B5C64: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151B5C68: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x151B5C6C: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x151B5C70: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x151B5C74: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151B5C78: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151B5C7C: lw          $t5, 0x4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X4);
    // 0x151B5C80: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x151B5C84: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151B5C88: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151B5C8C: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151B5C90: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
    // 0x151B5C94: bne         $a2, $t1, L_151B5CB4
    if (ctx->r6 != ctx->r9) {
        // 0x151B5C98: swc1        $f10, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
            goto L_151B5CB4;
    }
    // 0x151B5C98: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x151B5C9C: lbu         $t6, 0xF3($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XF3);
    // 0x151B5CA0: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x151B5CA4: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x151B5CA8: sh          $t7, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r15;
    // 0x151B5CAC: b           L_151B5CCC
    // 0x151B5CB0: srav        $t0, $t9, $t6
    ctx->r8 = S32(SIGNED(ctx->r25) >> (ctx->r14 & 31));
        goto L_151B5CCC;
    // 0x151B5CB0: srav        $t0, $t9, $t6
    ctx->r8 = S32(SIGNED(ctx->r25) >> (ctx->r14 & 31));
L_151B5CB4:
    // 0x151B5CB4: lbu         $t4, 0xF3($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XF3);
    // 0x151B5CB8: ori         $t5, $zero, 0xB988
    ctx->r13 = 0 | 0XB988;
    // 0x151B5CBC: sw          $t5, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r13;
    // 0x151B5CC0: srav        $t0, $t3, $t4
    ctx->r8 = S32(SIGNED(ctx->r11) >> (ctx->r12 & 31));
    // 0x151B5CC4: addu        $t2, $a2, $t0
    ctx->r10 = ADD32(ctx->r6, ctx->r8);
    // 0x151B5CC8: sh          $t2, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r10;
L_151B5CCC:
    // 0x151B5CCC: beq         $a1, $zero, L_151B5D00
    if (ctx->r5 == 0) {
        // 0x151B5CD0: lui         $a2, 0x1500
        ctx->r6 = S32(0X1500 << 16);
            goto L_151B5D00;
    }
    // 0x151B5CD0: lui         $a2, 0x1500
    ctx->r6 = S32(0X1500 << 16);
    // 0x151B5CD4: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x151B5CD8: addiu       $t8, $sp, 0x7C
    ctx->r24 = ADD32(ctx->r29, 0X7C);
    // 0x151B5CDC: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151B5CE0: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x151B5CE4: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x151B5CE8: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x151B5CEC: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x151B5CF0: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x151B5CF4: ori         $t3, $t6, 0x20
    ctx->r11 = ctx->r14 | 0X20;
    // 0x151B5CF8: b           L_151B5D0C
    // 0x151B5CFC: sw          $t3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r11;
        goto L_151B5D0C;
    // 0x151B5CFC: sw          $t3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r11;
L_151B5D00:
    // 0x151B5D00: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    // 0x151B5D04: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    // 0x151B5D08: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
L_151B5D0C:
    // 0x151B5D0C: lui         $a1, 0x1500
    ctx->r5 = S32(0X1500 << 16);
    // 0x151B5D10: addiu       $a1, $a1, 0x2FB4
    ctx->r5 = ADD32(ctx->r5, 0X2FB4);
    // 0x151B5D14: addiu       $a2, $a2, 0x310C
    ctx->r6 = ADD32(ctx->r6, 0X310C);
    // 0x151B5D18: sltu        $at, $a1, $a2
    ctx->r1 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x151B5D1C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x151B5D20: beq         $at, $zero, L_151B5D44
    if (ctx->r1 == 0) {
        // 0x151B5D24: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_151B5D44;
    }
    // 0x151B5D24: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_151B5D28:
    // 0x151B5D28: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x151B5D2C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x151B5D30: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x151B5D34: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x151B5D38: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x151B5D3C: bne         $at, $zero, L_151B5D28
    if (ctx->r1 != 0) {
        // 0x151B5D40: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_151B5D28;
    }
    // 0x151B5D40: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_151B5D44:
    // 0x151B5D44: lui         $at, 0x80D2
    ctx->r1 = S32(0X80D2 << 16);
    // 0x151B5D48: ori         $at, $at, 0xD760
    ctx->r1 = ctx->r1 | 0XD760;
    // 0x151B5D4C: beq         $v0, $at, L_151B5D5C
    if (ctx->r2 == ctx->r1) {
        // 0x151B5D50: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_151B5D5C;
    }
    // 0x151B5D50: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151B5D54: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151B5D58: sb          $t1, -0x258($at)
    MEM_B(-0X258, ctx->r1) = ctx->r9;
L_151B5D5C:
    // 0x151B5D5C: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x151B5D60: beq         $v0, $zero, L_151B5D94
    if (ctx->r2 == 0) {
        // 0x151B5D64: addiu       $a0, $sp, 0x48
        ctx->r4 = ADD32(ctx->r29, 0X48);
            goto L_151B5D94;
    }
    // 0x151B5D64: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x151B5D68: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151B5D6C: addiu       $t5, $sp, 0x88
    ctx->r13 = ADD32(ctx->r29, 0X88);
    // 0x151B5D70: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x151B5D74: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x151B5D78: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x151B5D7C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151B5D80: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x151B5D84: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x151B5D88: ori         $t6, $t9, 0x40
    ctx->r14 = ctx->r25 | 0X40;
    // 0x151B5D8C: b           L_151B5DA0
    // 0x151B5D90: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
        goto L_151B5DA0;
    // 0x151B5D90: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
L_151B5D94:
    // 0x151B5D94: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x151B5D98: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x151B5D9C: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
L_151B5DA0:
    // 0x151B5DA0: lbu         $t3, 0xF7($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XF7);
    // 0x151B5DA4: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x151B5DA8: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x151B5DAC: beq         $t3, $zero, L_151B5DC0
    if (ctx->r11 == 0) {
        // 0x151B5DB0: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_151B5DC0;
    }
    // 0x151B5DB0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x151B5DB4: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x151B5DB8: ori         $t2, $t4, 0x1
    ctx->r10 = ctx->r12 | 0X1;
    // 0x151B5DBC: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
L_151B5DC0:
    // 0x151B5DC0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151B5DC4: div         $zero, $t4, $t0
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r8)));
    // 0x151B5DC8: lbu         $t5, 0xE7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XE7);
    // 0x151B5DCC: sh          $t7, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r15;
    // 0x151B5DD0: lbu         $t7, 0xFB($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XFB);
    // 0x151B5DD4: sb          $t5, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r13;
    // 0x151B5DD8: lw          $t5, 0xFC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XFC);
    // 0x151B5DDC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x151B5DE0: mflo        $t2
    ctx->r10 = lo;
    // 0x151B5DE4: sb          $zero, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = 0;
    // 0x151B5DE8: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x151B5DEC: sb          $t8, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r24;
    // 0x151B5DF0: sb          $zero, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = 0;
    // 0x151B5DF4: sb          $t9, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r25;
    // 0x151B5DF8: sb          $zero, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = 0;
    // 0x151B5DFC: sb          $zero, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = 0;
    // 0x151B5E00: sb          $t6, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r14;
    // 0x151B5E04: sb          $zero, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = 0;
    // 0x151B5E08: sb          $t3, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r11;
    // 0x151B5E0C: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
    // 0x151B5E10: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x151B5E14: sb          $zero, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = 0;
    // 0x151B5E18: sh          $t0, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r8;
    // 0x151B5E1C: bne         $t0, $zero, L_151B5E28
    if (ctx->r8 != 0) {
        // 0x151B5E20: nop
    
            goto L_151B5E28;
    }
    // 0x151B5E20: nop

    // 0x151B5E24: break       7
    do_break(354115108);
L_151B5E28:
    // 0x151B5E28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151B5E2C: bne         $t0, $at, L_151B5E40
    if (ctx->r8 != ctx->r1) {
        // 0x151B5E30: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151B5E40;
    }
    // 0x151B5E30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151B5E34: bne         $t4, $at, L_151B5E40
    if (ctx->r12 != ctx->r1) {
        // 0x151B5E38: nop
    
            goto L_151B5E40;
    }
    // 0x151B5E38: nop

    // 0x151B5E3C: break       6
    do_break(354115132);
L_151B5E40:
    // 0x151B5E40: sh          $t2, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r10;
    // 0x151B5E44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151B5E48: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151B5E4C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151B5E50: jal         0x15132A4C
    // 0x151B5E54: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_15132A4C(rdram, ctx);
        goto after_0;
    // 0x151B5E54: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_0:
    // 0x151B5E58: beq         $v0, $zero, L_151B5E78
    if (ctx->r2 == 0) {
        // 0x151B5E5C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151B5E78;
    }
    // 0x151B5E5C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151B5E60: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x151B5E64: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x151B5E68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x151B5E6C: jal         0x10022EC0
    // 0x151B5E70: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151B5E70: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
    after_1:
    // 0x151B5E74: lw          $v1, 0xC4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC4);
L_151B5E78:
    // 0x151B5E78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151B5E7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151B5E80: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x151B5E84: jr          $ra
    // 0x151B5E88: nop

    return;
    return;
    // 0x151B5E88: nop

    // 0x151B5E8C: jr          $ra
    // 0x151B5E90: nop

    return;
    return;
    // 0x151B5E90: nop

;}
RECOMP_FUNC void func_150DFEFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DFEFC: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x150DFF00: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x150DFF04: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x150DFF08: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150DFF0C: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x150DFF10: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x150DFF14: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x150DFF18: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x150DFF1C: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x150DFF20: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x150DFF24: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x150DFF28: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x150DFF2C: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x150DFF30: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x150DFF34: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x150DFF38: lw          $t6, 0x28($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X28);
    // 0x150DFF3C: addiu       $v0, $s4, 0x28
    ctx->r2 = ADD32(ctx->r20, 0X28);
    // 0x150DFF40: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x150DFF44: sw          $t6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r14;
    // 0x150DFF48: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x150DFF4C: beq         $t8, $zero, L_150DFF68
    if (ctx->r24 == 0) {
        // 0x150DFF50: nop
    
            goto L_150DFF68;
    }
    // 0x150DFF50: nop

    // 0x150DFF54: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x150DFF58: lbu         $t0, 0x3B($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X3B);
    // 0x150DFF5C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x150DFF60: beql        $t9, $t0, L_150DFF74
    if (ctx->r25 == ctx->r8) {
        // 0x150DFF64: lh          $t2, 0x6($v0)
        ctx->r10 = MEM_H(ctx->r2, 0X6);
            goto L_150DFF74;
    }
    goto skip_0;
    // 0x150DFF64: lh          $t2, 0x6($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X6);
    skip_0:
L_150DFF68:
    // 0x150DFF68: b           L_150E0284
    // 0x150DFF6C: sh          $t1, 0xE($s4)
    MEM_H(0XE, ctx->r20) = ctx->r9;
        goto L_150E0284;
    // 0x150DFF6C: sh          $t1, 0xE($s4)
    MEM_H(0XE, ctx->r20) = ctx->r9;
    // 0x150DFF70: lh          $t2, 0x6($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X6);
L_150DFF74:
    // 0x150DFF74: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x150DFF78: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x150DFF7C: sh          $t4, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r12;
    // 0x150DFF80: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x150DFF84: lh          $t5, 0x6($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X6);
    // 0x150DFF88: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x150DFF8C: bgezl       $t5, L_150E0074
    if (SIGNED(ctx->r13) >= 0) {
        // 0x150DFF90: lw          $v0, 0x78($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X78);
            goto L_150E0074;
    }
    goto skip_1;
    // 0x150DFF90: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    skip_1:
    // 0x150DFF94: lwc1        $f4, 0x14($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X14);
    // 0x150DFF98: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150DFF9C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150DFFA0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150DFFA4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x150DFFA8: nop

    // 0x150DFFAC: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    // 0x150DFFB0: lwc1        $f8, 0x18($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X18);
    // 0x150DFFB4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150DFFB8: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x150DFFBC: nop

    // 0x150DFFC0: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
    // 0x150DFFC4: lwc1        $f16, 0x1C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x150DFFC8: sb          $t3, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r11;
    // 0x150DFFCC: sb          $t4, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r12;
    // 0x150DFFD0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150DFFD4: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x150DFFD8: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x150DFFDC: jal         0x150ADA20
    // 0x150DFFE0: sw          $t2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150DFFE0: sw          $t2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r10;
    after_0:
    // 0x150DFFE4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x150DFFE8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150DFFEC: mfhi        $t5
    ctx->r13 = hi;
    // 0x150DFFF0: addiu       $t8, $t5, 0x5
    ctx->r24 = ADD32(ctx->r13, 0X5);
    // 0x150DFFF4: sh          $t8, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r24;
    // 0x150DFFF8: jal         0x150ADA20
    // 0x150DFFFC: sb          $zero, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150DFFFC: sb          $zero, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = 0;
    after_1:
    // 0x150E0000: addiu       $at, $zero, 0x79
    ctx->r1 = ADD32(0, 0X79);
    // 0x150E0004: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E0008: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150E000C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150E0010: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150E0014: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150E0018: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150E001C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150E0020: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150E0024: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150E0028: lbu         $t6, 0xC($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0XC);
    // 0x150E002C: mfhi        $a2
    ctx->r6 = hi;
    // 0x150E0030: addiu       $a2, $a2, 0x32
    ctx->r6 = ADD32(ctx->r6, 0X32);
    // 0x150E0034: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x150E0038: lbu         $t1, 0x1($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0X1);
    // 0x150E003C: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x150E0040: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x150E0044: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150E0048: jal         0x151602C0
    // 0x150E004C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    func_151602C0(rdram, ctx);
        goto after_2;
    // 0x150E004C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    after_2:
    // 0x150E0050: jal         0x150ADA20
    // 0x150E0054: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150E0054: nop

    after_3:
    // 0x150E0058: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x150E005C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E0060: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x150E0064: mfhi        $t2
    ctx->r10 = hi;
    // 0x150E0068: addiu       $t3, $t2, 0x45
    ctx->r11 = ADD32(ctx->r10, 0X45);
    // 0x150E006C: sh          $t3, 0x6($t4)
    MEM_H(0X6, ctx->r12) = ctx->r11;
    // 0x150E0070: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
L_150E0074:
    // 0x150E0074: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150E0078: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x150E007C: lh          $t5, 0x8($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X8);
    // 0x150E0080: subu        $t7, $t5, $t8
    ctx->r15 = SUB32(ctx->r13, ctx->r24);
    // 0x150E0084: sh          $t7, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r15;
    // 0x150E0088: lh          $t9, 0x8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8);
    // 0x150E008C: bgez        $t9, L_150E0204
    if (SIGNED(ctx->r25) >= 0) {
        // 0x150E0090: nop
    
            goto L_150E0204;
    }
    // 0x150E0090: nop

    // 0x150E0094: jal         0x150ADA20
    // 0x150E0098: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150E0098: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    after_4:
    // 0x150E009C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150E00A0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E00A4: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150E00A8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150E00AC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150E00B0: mfhi        $s1
    ctx->r17 = hi;
    // 0x150E00B4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150E00B8: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150E00BC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150E00C0: sll         $t0, $s1, 24
    ctx->r8 = S32(ctx->r17 << 24);
    // 0x150E00C4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150E00C8: sra         $s1, $t0, 24
    ctx->r17 = S32(SIGNED(ctx->r8) >> 24);
    // 0x150E00CC: addiu       $fp, $sp, 0x8C
    ctx->r30 = ADD32(ctx->r29, 0X8C);
    // 0x150E00D0: addiu       $s7, $zero, 0x15
    ctx->r23 = ADD32(0, 0X15);
    // 0x150E00D4: addiu       $s6, $zero, 0x81
    ctx->r22 = ADD32(0, 0X81);
    // 0x150E00D8: addiu       $s5, $zero, 0x3D
    ctx->r21 = ADD32(0, 0X3D);
    // 0x150E00DC: addiu       $t1, $zero, 0xAE
    ctx->r9 = ADD32(0, 0XAE);
L_150E00E0:
    // 0x150E00E0: addiu       $t2, $zero, 0xD2
    ctx->r10 = ADD32(0, 0XD2);
    // 0x150E00E4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150E00E8: sb          $t1, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r9;
    // 0x150E00EC: sb          $t2, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = ctx->r10;
    // 0x150E00F0: jal         0x150ADA20
    // 0x150E00F4: sb          $t3, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = ctx->r11;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150E00F4: sb          $t3, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = ctx->r11;
    after_5:
    // 0x150E00F8: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150E00FC: mfhi        $t4
    ctx->r12 = hi;
    // 0x150E0100: addiu       $t5, $t4, 0x96
    ctx->r13 = ADD32(ctx->r12, 0X96);
    // 0x150E0104: bne         $s5, $zero, L_150E0110
    if (ctx->r21 != 0) {
        // 0x150E0108: nop
    
            goto L_150E0110;
    }
    // 0x150E0108: nop

    // 0x150E010C: break       7
    do_break(353239308);
L_150E0110:
    // 0x150E0110: sb          $t5, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r13;
    // 0x150E0114: jal         0x150ADA20
    // 0x150E0118: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150E0118: nop

    after_6:
    // 0x150E011C: jal         0x150ADA20
    // 0x150E0120: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150E0120: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_7:
    // 0x150E0124: jal         0x150ADA20
    // 0x150E0128: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150E0128: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_8:
    // 0x150E012C: jal         0x150ADA68
    // 0x150E0130: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150E0130: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_9:
    // 0x150E0134: divu        $zero, $s0, $s6
    lo = S32(U32(ctx->r16) / U32(ctx->r22)); hi = S32(U32(ctx->r16) % U32(ctx->r22));
    // 0x150E0138: mfhi        $a2
    ctx->r6 = hi;
    // 0x150E013C: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150E0140: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x150E0144: divu        $zero, $s2, $s7
    lo = S32(U32(ctx->r18) / U32(ctx->r23)); hi = S32(U32(ctx->r18) % U32(ctx->r23));
    // 0x150E0148: add.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x150E014C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150E0150: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x150E0154: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150E0158: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x150E015C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x150E0160: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150E0164: sw          $fp, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r30;
    // 0x150E0168: lbu         $t4, 0xC($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0XC);
    // 0x150E016C: mfhi        $a3
    ctx->r7 = hi;
    // 0x150E0170: addiu       $a2, $a2, -0x3F
    ctx->r6 = ADD32(ctx->r6, -0X3F);
    // 0x150E0174: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x150E0178: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x150E017C: lbu         $t5, 0x1($s4)
    ctx->r13 = MEM_BU(ctx->r20, 0X1);
    // 0x150E0180: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x150E0184: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x150E0188: addiu       $a3, $a3, 0xA
    ctx->r7 = ADD32(ctx->r7, 0XA);
    // 0x150E018C: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x150E0190: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x150E0194: sra         $t7, $t8, 16
    ctx->r15 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150E0198: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x150E019C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x150E01A0: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150E01A4: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x150E01A8: bne         $s6, $zero, L_150E01B4
    if (ctx->r22 != 0) {
        // 0x150E01AC: nop
    
            goto L_150E01B4;
    }
    // 0x150E01AC: nop

    // 0x150E01B0: break       7
    do_break(353239472);
L_150E01B4:
    // 0x150E01B4: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x150E01B8: bne         $s7, $zero, L_150E01C4
    if (ctx->r23 != 0) {
        // 0x150E01BC: nop
    
            goto L_150E01C4;
    }
    // 0x150E01BC: nop

    // 0x150E01C0: break       7
    do_break(353239488);
L_150E01C4:
    // 0x150E01C4: jal         0x15107700
    // 0x150E01C8: nop

    func_15107700(rdram, ctx);
        goto after_10;
    // 0x150E01C8: nop

    after_10:
    // 0x150E01CC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x150E01D0: sll         $t8, $s1, 24
    ctx->r24 = S32(ctx->r17 << 24);
    // 0x150E01D4: sra         $s1, $t8, 24
    ctx->r17 = S32(SIGNED(ctx->r24) >> 24);
    // 0x150E01D8: bgtzl       $s1, L_150E00E0
    if (SIGNED(ctx->r17) > 0) {
        // 0x150E01DC: addiu       $t1, $zero, 0xAE
        ctx->r9 = ADD32(0, 0XAE);
            goto L_150E00E0;
    }
    goto skip_2;
    // 0x150E01DC: addiu       $t1, $zero, 0xAE
    ctx->r9 = ADD32(0, 0XAE);
    skip_2:
    // 0x150E01E0: jal         0x150ADA20
    // 0x150E01E4: nop

    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x150E01E4: nop

    after_11:
    // 0x150E01E8: addiu       $at, $zero, 0x8D
    ctx->r1 = ADD32(0, 0X8D);
    // 0x150E01EC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E01F0: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x150E01F4: mfhi        $t9
    ctx->r25 = hi;
    // 0x150E01F8: addiu       $t0, $t9, 0x19
    ctx->r8 = ADD32(ctx->r25, 0X19);
    // 0x150E01FC: sh          $t0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r8;
    // 0x150E0200: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_150E0204:
    // 0x150E0204: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x150E0208: lw          $t2, -0x161C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X161C);
    // 0x150E020C: lh          $t1, 0xA($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XA);
    // 0x150E0210: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x150E0214: sh          $t3, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r11;
    // 0x150E0218: lh          $t4, 0xA($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XA);
    // 0x150E021C: bgezl       $t4, L_150E0288
    if (SIGNED(ctx->r12) >= 0) {
        // 0x150E0220: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150E0288;
    }
    goto skip_3;
    // 0x150E0220: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_3:
    // 0x150E0224: jal         0x150ADA20
    // 0x150E0228: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x150E0228: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    after_12:
    // 0x150E022C: jal         0x150ADA20
    // 0x150E0230: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x150E0230: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_13:
    // 0x150E0234: andi        $a2, $v0, 0x7F
    ctx->r6 = ctx->r2 & 0X7F;
    // 0x150E0238: lbu         $t0, 0x1($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0X1);
    // 0x150E023C: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    // 0x150E0240: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x150E0244: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x150E0248: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x150E024C: lbu         $a3, 0xC($s4)
    ctx->r7 = MEM_BU(ctx->r20, 0XC);
    // 0x150E0250: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150E0254: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x150E0258: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x150E025C: jal         0x15107B78
    // 0x150E0260: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_15107B78(rdram, ctx);
        goto after_14;
    // 0x150E0260: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_14:
    // 0x150E0264: jal         0x150ADA20
    // 0x150E0268: nop

    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x150E0268: nop

    after_15:
    // 0x150E026C: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x150E0270: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E0274: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x150E0278: mfhi        $t6
    ctx->r14 = hi;
    // 0x150E027C: addiu       $t1, $t6, 0xF
    ctx->r9 = ADD32(ctx->r14, 0XF);
    // 0x150E0280: sh          $t1, 0xA($t2)
    MEM_H(0XA, ctx->r10) = ctx->r9;
L_150E0284:
    // 0x150E0284: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_150E0288:
    // 0x150E0288: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x150E028C: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x150E0290: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x150E0294: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x150E0298: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x150E029C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x150E02A0: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x150E02A4: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x150E02A8: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x150E02AC: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x150E02B0: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x150E02B4: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x150E02B8: jr          $ra
    // 0x150E02BC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    return;
    // 0x150E02BC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_1503192C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503192C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15031930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15031934: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15031938: jal         0x1503195C
    // 0x1503193C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_1503195C(rdram, ctx);
        goto after_0;
    // 0x1503193C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x15031940: beq         $v0, $zero, L_1503194C
    if (ctx->r2 == 0) {
        // 0x15031944: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_1503194C;
    }
    // 0x15031944: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x15031948: sb          $t6, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r14;
L_1503194C:
    // 0x1503194C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15031950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15031954: jr          $ra
    // 0x15031958: nop

    return;
    return;
    // 0x15031958: nop

;}
RECOMP_FUNC void func_1503A08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503A08C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x1503A090: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1503A094: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1503A098: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1503A09C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x1503A0A0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1503A0A4: beq         $v0, $at, L_1503A5F8
    if (ctx->r2 == ctx->r1) {
        // 0x1503A0A8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_1503A5F8;
    }
    // 0x1503A0A8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x1503A0AC: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x1503A0B0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x1503A0B4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1503A0B8: beq         $t6, $zero, L_1503A508
    if (ctx->r14 == 0) {
        // 0x1503A0BC: addu        $t8, $t8, $t7
        ctx->r24 = ADD32(ctx->r24, ctx->r15);
            goto L_1503A508;
    }
    // 0x1503A0BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1503A0C0: lw          $t8, 0x1C90($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1C90);
    // 0x1503A0C4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1503A0C8: beql        $t8, $zero, L_1503A50C
    if (ctx->r24 == 0) {
        // 0x1503A0CC: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_1503A50C;
    }
    goto skip_0;
    // 0x1503A0CC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    skip_0:
    // 0x1503A0D0: jal         0x1503D774
    // 0x1503A0D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1503D774(rdram, ctx);
        goto after_0;
    // 0x1503A0D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x1503A0D8: bnel        $v0, $zero, L_1503A5FC
    if (ctx->r2 != 0) {
        // 0x1503A0DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1503A5FC;
    }
    goto skip_1;
    // 0x1503A0DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x1503A0E0: lbu         $t9, 0x4($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X4);
    // 0x1503A0E4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1503A0E8: lwc1        $f4, 0x150($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X150);
    // 0x1503A0EC: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x1503A0F0: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x1503A0F4: lw          $v1, 0x1C90($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1C90);
    // 0x1503A0F8: lw          $v0, 0x1D4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1D4);
    // 0x1503A0FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1503A100: lbu         $t2, 0x26($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X26);
    // 0x1503A104: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x1503A108: lbu         $t4, 0x3A($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X3A);
    // 0x1503A10C: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x1503A110: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1503A114: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x1503A118: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x1503A11C: bgez        $t4, L_1503A130
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1503A120: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1503A130;
    }
    // 0x1503A120: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1503A124: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1503A128: nop

    // 0x1503A12C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_1503A130:
    // 0x1503A130: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x1503A134: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1503A138: nop

    // 0x1503A13C: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x1503A140: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x1503A144: bc1tl       L_1503A1CC
    if (c1cs) {
        // 0x1503A148: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_1503A1CC;
    }
    goto skip_2;
    // 0x1503A148: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_2:
    // 0x1503A14C: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1503A150: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1503A154: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1503A158: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1503A15C: nop

    // 0x1503A160: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1503A164: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1503A168: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1503A16C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1503A170: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1503A174: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1503A178: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1503A17C: c.eq.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl == ctx->f18.fl;
    // 0x1503A180: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x1503A184: bc1t        L_1503A190
    if (c1cs) {
        // 0x1503A188: nop
    
            goto L_1503A190;
    }
    // 0x1503A188: nop

    // 0x1503A18C: sqrt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = sqrtf(ctx->f18.fl);
L_1503A190:
    // 0x1503A190: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x1503A194: nop

    // 0x1503A198: bc1t        L_1503A1A4
    if (c1cs) {
        // 0x1503A19C: nop
    
            goto L_1503A1A4;
    }
    // 0x1503A19C: nop

    // 0x1503A1A0: div.s       $f2, $f6, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
L_1503A1A4:
    // 0x1503A1A4: mul.s       $f10, $f12, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1503A1A8: nop

    // 0x1503A1AC: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1503A1B0: nop

    // 0x1503A1B4: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1503A1B8: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x1503A1BC: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x1503A1C0: b           L_1503A1E0
    // 0x1503A1C4: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
        goto L_1503A1E0;
    // 0x1503A1C4: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x1503A1C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_1503A1CC:
    // 0x1503A1CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1503A1D0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1503A1D4: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x1503A1D8: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x1503A1DC: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
L_1503A1E0:
    // 0x1503A1E0: lh          $t5, 0x0($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X0);
    // 0x1503A1E4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1503A1E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1503A1EC: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1503A1F0: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x1503A1F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1503A1F8: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1503A1FC: c.eq.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl == ctx->f8.fl;
    // 0x1503A200: nop

    // 0x1503A204: bc1tl       L_1503A274
    if (c1cs) {
        // 0x1503A208: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_1503A274;
    }
    goto skip_3;
    // 0x1503A208: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_3:
    // 0x1503A20C: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1503A210: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1503A214: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1503A218: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1503A21C: nop

    // 0x1503A220: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1503A224: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1503A228: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1503A22C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1503A230: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1503A234: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1503A238: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x1503A23C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1503A240: bc1t        L_1503A24C
    if (c1cs) {
        // 0x1503A244: nop
    
            goto L_1503A24C;
    }
    // 0x1503A244: nop

    // 0x1503A248: div.s       $f2, $f18, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
L_1503A24C:
    // 0x1503A24C: mul.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1503A250: nop

    // 0x1503A254: mul.s       $f10, $f14, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1503A258: nop

    // 0x1503A25C: mul.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1503A260: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x1503A264: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x1503A268: b           L_1503A284
    // 0x1503A26C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
        goto L_1503A284;
    // 0x1503A26C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x1503A270: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_1503A274:
    // 0x1503A274: nop

    // 0x1503A278: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x1503A27C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x1503A280: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
L_1503A284:
    // 0x1503A284: lb          $t6, 0x30($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X30);
    // 0x1503A288: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1503A28C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1503A290: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1503A294: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x1503A298: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    // 0x1503A29C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1503A2A0: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
    // 0x1503A2A4: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1503A2A8: c.eq.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl == ctx->f8.fl;
    // 0x1503A2AC: nop

    // 0x1503A2B0: bc1t        L_1503A348
    if (c1cs) {
        // 0x1503A2B4: nop
    
            goto L_1503A348;
    }
    // 0x1503A2B4: nop

    // 0x1503A2B8: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1503A2BC: nop

    // 0x1503A2C0: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1503A2C4: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1503A2C8: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1503A2CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1503A2D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1503A2D4: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1503A2D8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1503A2DC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x1503A2E0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1503A2E4: bc1t        L_1503A2F0
    if (c1cs) {
        // 0x1503A2E8: nop
    
            goto L_1503A2F0;
    }
    // 0x1503A2E8: nop

    // 0x1503A2EC: div.s       $f2, $f18, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
L_1503A2F0:
    // 0x1503A2F0: div.s       $f0, $f6, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1503A2F4: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1503A2F8: nop

    // 0x1503A2FC: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1503A300: nop

    // 0x1503A304: mul.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1503A308: nop

    // 0x1503A30C: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1503A310: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1503A314: mul.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1503A318: nop

    // 0x1503A31C: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1503A320: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x1503A324: nop

    // 0x1503A328: sb          $t8, 0x1B8($s0)
    MEM_B(0X1B8, ctx->r16) = ctx->r24;
    // 0x1503A32C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1503A330: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1503A334: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x1503A338: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x1503A33C: sb          $t1, 0x1B9($s0)
    MEM_B(0X1B9, ctx->r16) = ctx->r9;
    // 0x1503A340: b           L_1503A3C4
    // 0x1503A344: sb          $t3, 0x1BA($s0)
    MEM_B(0X1BA, ctx->r16) = ctx->r11;
        goto L_1503A3C4;
    // 0x1503A344: sb          $t3, 0x1BA($s0)
    MEM_B(0X1BA, ctx->r16) = ctx->r11;
L_1503A348:
    // 0x1503A348: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1503A34C: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x1503A350: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1503A354: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1503A358: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1503A35C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1503A360: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1503A364: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1503A368: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x1503A36C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1503A370: bc1t        L_1503A384
    if (c1cs) {
        // 0x1503A374: nop
    
            goto L_1503A384;
    }
    // 0x1503A374: nop

    // 0x1503A378: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1503A37C: nop

    // 0x1503A380: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
L_1503A384:
    // 0x1503A384: mul.s       $f10, $f12, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1503A388: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1503A38C: mul.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1503A390: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x1503A394: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x1503A398: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1503A39C: mul.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1503A3A0: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x1503A3A4: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x1503A3A8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1503A3AC: sb          $t5, 0x1B8($s0)
    MEM_B(0X1B8, ctx->r16) = ctx->r13;
    // 0x1503A3B0: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1503A3B4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x1503A3B8: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x1503A3BC: sb          $t7, 0x1B9($s0)
    MEM_B(0X1B9, ctx->r16) = ctx->r15;
    // 0x1503A3C0: sb          $t9, 0x1BA($s0)
    MEM_B(0X1BA, ctx->r16) = ctx->r25;
L_1503A3C4:
    // 0x1503A3C4: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503A3C8: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x1503A3CC: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1503A3D0: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x1503A3D4: nop

    // 0x1503A3D8: sh          $t2, 0x1A4($s0)
    MEM_H(0X1A4, ctx->r16) = ctx->r10;
    // 0x1503A3DC: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503A3E0: lh          $t9, 0x1A4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X1A4);
    // 0x1503A3E4: add.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x1503A3E8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1503A3EC: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x1503A3F0: nop

    // 0x1503A3F4: sh          $t4, 0x1A6($s0)
    MEM_H(0X1A6, ctx->r16) = ctx->r12;
    // 0x1503A3F8: lwc1        $f10, 0x38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503A3FC: lh          $t3, 0x1A6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X1A6);
    // 0x1503A400: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1503A404: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1503A408: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x1503A40C: nop

    // 0x1503A410: sh          $t6, 0x1A8($s0)
    MEM_H(0X1A8, ctx->r16) = ctx->r14;
    // 0x1503A414: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1503A418: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503A41C: lh          $t6, 0x1A8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1A8);
    // 0x1503A420: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1503A424: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1503A428: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1503A42C: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1503A430: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x1503A434: nop

    // 0x1503A438: sh          $t8, 0x1AA($s0)
    MEM_H(0X1AA, ctx->r16) = ctx->r24;
    // 0x1503A43C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1503A440: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1503A444: add.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x1503A448: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1503A44C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x1503A450: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1503A454: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1503A458: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x1503A45C: nop

    // 0x1503A460: sh          $t2, 0x1AC($s0)
    MEM_H(0X1AC, ctx->r16) = ctx->r10;
    // 0x1503A464: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1503A468: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1503A46C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1503A470: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1503A474: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1503A478: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1503A47C: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1503A480: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x1503A484: nop

    // 0x1503A488: sh          $t5, 0x1AE($s0)
    MEM_H(0X1AE, ctx->r16) = ctx->r13;
    // 0x1503A48C: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1503A490: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1503A494: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x1503A498: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1503A49C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1503A4A0: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x1503A4A4: nop

    // 0x1503A4A8: sh          $t8, 0x1B0($s0)
    MEM_H(0X1B0, ctx->r16) = ctx->r24;
    // 0x1503A4AC: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1503A4B0: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1503A4B4: sub.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x1503A4B8: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1503A4BC: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1503A4C0: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1503A4C4: nop

    // 0x1503A4C8: sh          $t1, 0x1B2($s0)
    MEM_H(0X1B2, ctx->r16) = ctx->r9;
    // 0x1503A4CC: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1503A4D0: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1503A4D4: sub.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x1503A4D8: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1503A4DC: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x1503A4E0: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1503A4E4: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x1503A4E8: nop

    // 0x1503A4EC: sh          $t3, 0x1B4($s0)
    MEM_H(0X1B4, ctx->r16) = ctx->r11;
    // 0x1503A4F0: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1503A4F4: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1503A4F8: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1503A4FC: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x1503A500: b           L_1503A5F8
    // 0x1503A504: sh          $t5, 0x1B6($s0)
    MEM_H(0X1B6, ctx->r16) = ctx->r13;
        goto L_1503A5F8;
    // 0x1503A504: sh          $t5, 0x1B6($s0)
    MEM_H(0X1B6, ctx->r16) = ctx->r13;
L_1503A508:
    // 0x1503A508: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
L_1503A50C:
    // 0x1503A50C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1503A510: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x1503A514: lw          $v1, 0x1C90($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1C90);
    // 0x1503A518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1503A51C: addiu       $a1, $sp, 0x36
    ctx->r5 = ADD32(ctx->r29, 0X36);
    // 0x1503A520: beq         $v1, $zero, L_1503A530
    if (ctx->r3 == 0) {
        // 0x1503A524: addiu       $a2, $sp, 0x34
        ctx->r6 = ADD32(ctx->r29, 0X34);
            goto L_1503A530;
    }
    // 0x1503A524: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x1503A528: b           L_1503A534
    // 0x1503A52C: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
        goto L_1503A534;
    // 0x1503A52C: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
L_1503A530:
    // 0x1503A530: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_1503A534:
    // 0x1503A534: addiu       $a3, $sp, 0x32
    ctx->r7 = ADD32(ctx->r29, 0X32);
    // 0x1503A538: jal         0x1507C3E0
    // 0x1503A53C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_1507C3E0(rdram, ctx);
        goto after_1;
    // 0x1503A53C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_1:
    // 0x1503A540: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1503A544: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1503A548: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1503A54C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1503A550: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x1503A554: nop

    // 0x1503A558: sh          $t8, 0x1A4($s0)
    MEM_H(0X1A4, ctx->r16) = ctx->r24;
    // 0x1503A55C: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x1503A560: lh          $v0, 0x1A4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1A4);
    // 0x1503A564: sb          $zero, 0x2CA($s0)
    MEM_B(0X2CA, ctx->r16) = 0;
    // 0x1503A568: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x1503A56C: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x1503A570: bgez        $t1, L_1503A580
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1503A574: sra         $t2, $t1, 3
        ctx->r10 = S32(SIGNED(ctx->r9) >> 3);
            goto L_1503A580;
    }
    // 0x1503A574: sra         $t2, $t1, 3
    ctx->r10 = S32(SIGNED(ctx->r9) >> 3);
    // 0x1503A578: addiu       $at, $t1, 0x7
    ctx->r1 = ADD32(ctx->r9, 0X7);
    // 0x1503A57C: sra         $t2, $at, 3
    ctx->r10 = S32(SIGNED(ctx->r1) >> 3);
L_1503A580:
    // 0x1503A580: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x1503A584: sh          $v0, 0x1AC($s0)
    MEM_H(0X1AC, ctx->r16) = ctx->r2;
    // 0x1503A588: sh          $v0, 0x1B2($s0)
    MEM_H(0X1B2, ctx->r16) = ctx->r2;
    // 0x1503A58C: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1503A590: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1503A594: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1503A598: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1503A59C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x1503A5A0: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1503A5A4: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x1503A5A8: lwc1        $f10, 0x150($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X150);
    // 0x1503A5AC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1503A5B0: sh          $t4, 0x1A6($s0)
    MEM_H(0X1A6, ctx->r16) = ctx->r12;
    // 0x1503A5B4: lh          $t7, 0x1A6($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1A6);
    // 0x1503A5B8: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x1503A5BC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x1503A5C0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1503A5C4: sh          $t6, 0x1A8($s0)
    MEM_H(0X1A8, ctx->r16) = ctx->r14;
    // 0x1503A5C8: lh          $a0, 0x1A8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X1A8);
    // 0x1503A5CC: sh          $a0, 0x1B0($s0)
    MEM_H(0X1B0, ctx->r16) = ctx->r4;
    // 0x1503A5D0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1503A5D4: sh          $a0, 0x1B6($s0)
    MEM_H(0X1B6, ctx->r16) = ctx->r4;
    // 0x1503A5D8: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1503A5DC: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1503A5E0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x1503A5E4: nop

    // 0x1503A5E8: sh          $t9, 0x1AA($s0)
    MEM_H(0X1AA, ctx->r16) = ctx->r25;
    // 0x1503A5EC: lh          $v1, 0x1AA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1AA);
    // 0x1503A5F0: sh          $v1, 0x1AE($s0)
    MEM_H(0X1AE, ctx->r16) = ctx->r3;
    // 0x1503A5F4: sh          $v1, 0x1B4($s0)
    MEM_H(0X1B4, ctx->r16) = ctx->r3;
L_1503A5F8:
    // 0x1503A5F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1503A5FC:
    // 0x1503A5FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1503A600: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x1503A604: jr          $ra
    // 0x1503A608: nop

    return;
    return;
    // 0x1503A608: nop

;}
RECOMP_FUNC void func_1519D030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519D030: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x1519D034: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x1519D038: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x1519D03C: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x1519D040: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x1519D044: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x1519D048: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1519D04C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1519D050: bne         $a0, $zero, L_1519D060
    if (ctx->r4 != 0) {
        // 0x1519D054: sll         $t2, $a1, 6
        ctx->r10 = S32(ctx->r5 << 6);
            goto L_1519D060;
    }
    // 0x1519D054: sll         $t2, $a1, 6
    ctx->r10 = S32(ctx->r5 << 6);
    // 0x1519D058: b           L_1519D230
    // 0x1519D05C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519D230;
    // 0x1519D05C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1519D060:
    // 0x1519D060: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1519D064: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x1519D068: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1519D06C: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x1519D070: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1519D074: addiu       $t3, $t3, -0x7480
    ctx->r11 = ADD32(ctx->r11, -0X7480);
    // 0x1519D078: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1519D07C: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x1519D080: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1519D084: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x1519D088: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x1519D08C: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x1519D090: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x1519D094: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x1519D098: lbu         $t9, 0x3B($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X3B);
    // 0x1519D09C: sb          $t0, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r8;
    // 0x1519D0A0: sb          $zero, 0x53($sp)
    MEM_B(0X53, ctx->r29) = 0;
    // 0x1519D0A4: sb          $a1, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r5;
    // 0x1519D0A8: sh          $a2, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r6;
    // 0x1519D0AC: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x1519D0B0: beq         $a3, $zero, L_1519D0C0
    if (ctx->r7 == 0) {
        // 0x1519D0B4: sb          $t9, 0x50($sp)
        MEM_B(0X50, ctx->r29) = ctx->r25;
            goto L_1519D0C0;
    }
    // 0x1519D0B4: sb          $t9, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r25;
    // 0x1519D0B8: b           L_1519D0C0
    // 0x1519D0BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_1519D0C0;
    // 0x1519D0BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1519D0C0:
    // 0x1519D0C0: ori         $t1, $v1, 0x2
    ctx->r9 = ctx->r3 | 0X2;
    // 0x1519D0C4: sh          $t1, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r9;
    // 0x1519D0C8: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1519D0CC: addiu       $t7, $sp, 0x54
    ctx->r15 = ADD32(ctx->r29, 0X54);
    // 0x1519D0D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1519D0D4: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x1519D0D8: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1519D0DC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1519D0E0: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x1519D0E4: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x1519D0E8: lbu         $t4, 0x8($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X8);
    // 0x1519D0EC: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x1519D0F0: sb          $t4, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r12;
    // 0x1519D0F4: lw          $t5, 0xC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC);
    // 0x1519D0F8: sb          $t5, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r13;
    // 0x1519D0FC: lbu         $t6, 0x10($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X10);
    // 0x1519D100: sb          $t6, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r14;
    // 0x1519D104: lw          $at, 0x14($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X14);
    // 0x1519D108: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x1519D10C: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x1519D110: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x1519D114: lw          $at, 0x1C($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X1C);
    // 0x1519D118: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x1519D11C: lh          $t1, 0x20($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X20);
    // 0x1519D120: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1519D124: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1519D128: sh          $t1, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r9;
    // 0x1519D12C: lh          $t2, 0x22($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X22);
    // 0x1519D130: sh          $t2, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r10;
    // 0x1519D134: lh          $t3, 0x24($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X24);
    // 0x1519D138: sh          $t3, 0x92($sp)
    MEM_H(0X92, ctx->r29) = ctx->r11;
    // 0x1519D13C: lwc1        $f18, 0x28($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X28);
    // 0x1519D140: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x1519D144: lwc1        $f4, 0x2C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x1519D148: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x1519D14C: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1519D150: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x1519D154: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1519D158: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x1519D15C: lh          $t4, 0x38($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X38);
    // 0x1519D160: sh          $t4, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r12;
    // 0x1519D164: lh          $t5, 0x3A($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X3A);
    // 0x1519D168: sh          $t5, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r13;
    // 0x1519D16C: lbu         $t6, 0x3C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3C);
    // 0x1519D170: sb          $t6, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r14;
    // 0x1519D174: lbu         $t9, 0x3D($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X3D);
    // 0x1519D178: sb          $t9, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r25;
    // 0x1519D17C: lbu         $t8, 0x3E($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3E);
    // 0x1519D180: sb          $t8, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r24;
    // 0x1519D184: lbu         $t7, 0x3F($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3F);
    // 0x1519D188: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1519D18C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x1519D190: jal         0x1519E304
    // 0x1519D194: sb          $t7, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r15;
    func_1519E304(rdram, ctx);
        goto after_0;
    // 0x1519D194: sb          $t7, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r15;
    after_0:
    // 0x1519D198: beq         $v0, $zero, L_1519D1C8
    if (ctx->r2 == 0) {
        // 0x1519D19C: addiu       $a0, $sp, 0xAC
        ctx->r4 = ADD32(ctx->r29, 0XAC);
            goto L_1519D1C8;
    }
    // 0x1519D19C: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x1519D1A0: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x1519D1A4: addiu       $t0, $sp, 0x60
    ctx->r8 = ADD32(ctx->r29, 0X60);
    // 0x1519D1A8: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x1519D1AC: lw          $t2, 0x4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X4);
    // 0x1519D1B0: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x1519D1B4: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x1519D1B8: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x1519D1BC: lhu         $t3, 0xBA($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0XBA);
    // 0x1519D1C0: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x1519D1C4: sh          $t4, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r12;
L_1519D1C8:
    // 0x1519D1C8: lbu         $t8, 0xDB($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XDB);
    // 0x1519D1CC: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
    // 0x1519D1D0: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x1519D1D4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x1519D1D8: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x1519D1DC: sw          $t5, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r13;
    // 0x1519D1E0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1519D1E4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1519D1E8: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x1519D1EC: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x1519D1F0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x1519D1F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1519D1F8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1519D1FC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1519D200: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x1519D204: jal         0x15147A80
    // 0x1519D208: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_15147A80(rdram, ctx);
        goto after_1;
    // 0x1519D208: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_1:
    // 0x1519D20C: beq         $v0, $zero, L_1519D22C
    if (ctx->r2 == 0) {
        // 0x1519D210: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1519D22C;
    }
    // 0x1519D210: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1519D214: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x1519D218: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x1519D21C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x1519D220: jal         0x10022EC0
    // 0x1519D224: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1519D224: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_2:
    // 0x1519D228: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
L_1519D22C:
    // 0x1519D22C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1519D230:
    // 0x1519D230: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1519D234: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x1519D238: jr          $ra
    // 0x1519D23C: nop

    return;
    return;
    // 0x1519D23C: nop

;}
RECOMP_FUNC void func_150CF680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CF680: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x150CF684: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150CF688: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x150CF68C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x150CF690: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150CF694: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150CF698: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150CF69C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150CF6A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150CF6A4: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x150CF6A8: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x150CF6AC: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x150CF6B0: lh          $t7, 0x9A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X9A);
    // 0x150CF6B4: addiu       $t8, $zero, 0x31
    ctx->r24 = ADD32(0, 0X31);
    // 0x150CF6B8: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x150CF6BC: sh          $t8, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r24;
    // 0x150CF6C0: sb          $t1, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r9;
    // 0x150CF6C4: addiu       $t6, $zero, 0xC1
    ctx->r14 = ADD32(0, 0XC1);
    // 0x150CF6C8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150CF6CC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150CF6D0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150CF6D4: lui         $t1, 0x20
    ctx->r9 = S32(0X20 << 16);
    // 0x150CF6D8: sb          $t6, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r14;
    // 0x150CF6DC: sh          $t9, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r25;
    // 0x150CF6E0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150CF6E4: sb          $t8, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r24;
    // 0x150CF6E8: ori         $t1, $t1, 0x4
    ctx->r9 = ctx->r9 | 0X4;
    // 0x150CF6EC: sh          $t7, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r15;
    // 0x150CF6F0: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x150CF6F4: sh          $t0, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r8;
    // 0x150CF6F8: sb          $t2, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r10;
    // 0x150CF6FC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150CF700: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150CF704: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150CF708: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150CF70C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150CF710: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150CF714: sb          $t0, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r8;
    // 0x150CF718: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    // 0x150CF71C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x150CF720: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CF724: lw          $t8, 0x2FA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2FA0);
    // 0x150CF728: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x150CF72C: lbu         $t0, 0x9F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X9F);
    // 0x150CF730: sb          $t3, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r11;
    // 0x150CF734: sb          $t4, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r12;
    // 0x150CF738: sb          $t5, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r13;
    // 0x150CF73C: sb          $t6, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r14;
    // 0x150CF740: sb          $t7, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r15;
    // 0x150CF744: sb          $t9, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r25;
    // 0x150CF748: lui         $t2, 0x9F
    ctx->r10 = S32(0X9F << 16);
    // 0x150CF74C: ori         $t2, $t2, 0x601
    ctx->r10 = ctx->r10 | 0X601;
    // 0x150CF750: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x150CF754: addiu       $t4, $zero, 0x17
    ctx->r12 = ADD32(0, 0X17);
    // 0x150CF758: addiu       $t5, $zero, 0x44
    ctx->r13 = ADD32(0, 0X44);
    // 0x150CF75C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x150CF760: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x150CF764: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x150CF768: sb          $zero, 0x30($sp)
    MEM_B(0X30, ctx->r29) = 0;
    // 0x150CF76C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x150CF770: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x150CF774: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x150CF778: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x150CF77C: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x150CF780: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x150CF784: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x150CF788: sw          $t2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r10;
    // 0x150CF78C: sb          $zero, 0x80($sp)
    MEM_B(0X80, ctx->r29) = 0;
    // 0x150CF790: sb          $t3, 0x81($sp)
    MEM_B(0X81, ctx->r29) = ctx->r11;
    // 0x150CF794: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x150CF798: sw          $t5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r13;
    // 0x150CF79C: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    // 0x150CF7A0: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    // 0x150CF7A4: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    // 0x150CF7A8: swc1        $f14, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f14.u32l;
    // 0x150CF7AC: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x150CF7B0: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x150CF7B4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150CF7B8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x150CF7BC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x150CF7C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150CF7C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150CF7C8: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x150CF7CC: sb          $t8, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r24;
    // 0x150CF7D0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x150CF7D4: jal         0x1515548C
    // 0x150CF7D8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_1515548C(rdram, ctx);
        goto after_0;
    // 0x150CF7D8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x150CF7DC: beq         $v0, $zero, L_150CF7F0
    if (ctx->r2 == 0) {
        // 0x150CF7E0: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_150CF7F0;
    }
    // 0x150CF7E0: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x150CF7E4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x150CF7E8: jal         0x10022EC0
    // 0x150CF7EC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150CF7EC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
L_150CF7F0:
    // 0x150CF7F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150CF7F4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x150CF7F8: jr          $ra
    // 0x150CF7FC: nop

    return;
    return;
    // 0x150CF7FC: nop

;}
RECOMP_FUNC void func_151A9634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A9634: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x151A9638: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x151A963C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x151A9640: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x151A9644: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x151A9648: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x151A964C: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x151A9650: jal         0x150ADA68
    // 0x151A9654: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151A9654: nop

    after_0:
    // 0x151A9658: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x151A965C: lwc1        $f4, 0x88($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X88);
    // 0x151A9660: lwc1        $f8, 0x80($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
    // 0x151A9664: addiu       $s0, $s0, 0x80
    ctx->r16 = ADD32(ctx->r16, 0X80);
    // 0x151A9668: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151A966C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151A9670: jal         0x150ADA68
    // 0x151A9674: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151A9674: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x151A9678: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151A967C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151A9680: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151A9684: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151A9688: jal         0x150ADA68
    // 0x151A968C: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151A968C: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x151A9690: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x151A9694: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x151A9698: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151A969C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151A96A0: jal         0x150ADA20
    // 0x151A96A4: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151A96A4: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x151A96A8: lh          $t6, 0x16($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X16);
    // 0x151A96AC: lh          $t9, 0x14($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X14);
    // 0x151A96B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151A96B4: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x151A96B8: mfhi        $t8
    ctx->r24 = hi;
    // 0x151A96BC: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x151A96C0: bne         $t7, $zero, L_151A96CC
    if (ctx->r15 != 0) {
        // 0x151A96C4: nop
    
            goto L_151A96CC;
    }
    // 0x151A96C4: nop

    // 0x151A96C8: break       7
    do_break(354064072);
L_151A96CC:
    // 0x151A96CC: sh          $t2, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r10;
    // 0x151A96D0: jal         0x150ADA20
    // 0x151A96D4: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151A96D4: nop

    after_4:
    // 0x151A96D8: jal         0x150ADA20
    // 0x151A96DC: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151A96DC: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_5:
    // 0x151A96E0: lbu         $v1, 0x28($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X28);
    // 0x151A96E4: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x151A96E8: andi        $t3, $v1, 0x1
    ctx->r11 = ctx->r3 & 0X1;
    // 0x151A96EC: beq         $t3, $zero, L_151A96FC
    if (ctx->r11 == 0) {
        // 0x151A96F0: nop
    
            goto L_151A96FC;
    }
    // 0x151A96F0: nop

    // 0x151A96F4: b           L_151A9724
    // 0x151A96F8: addiu       $t0, $zero, 0x71
    ctx->r8 = ADD32(0, 0X71);
        goto L_151A9724;
    // 0x151A96F8: addiu       $t0, $zero, 0x71
    ctx->r8 = ADD32(0, 0X71);
L_151A96FC:
    // 0x151A96FC: jal         0x150ADA20
    // 0x151A9700: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151A9700: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    after_6:
    // 0x151A9704: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x151A9708: beq         $t4, $zero, L_151A9718
    if (ctx->r12 == 0) {
        // 0x151A970C: lw          $t1, 0x68($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X68);
            goto L_151A9718;
    }
    // 0x151A970C: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x151A9710: b           L_151A971C
    // 0x151A9714: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
        goto L_151A971C;
    // 0x151A9714: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_151A9718:
    // 0x151A9718: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_151A971C:
    // 0x151A971C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x151A9720: lbu         $v1, 0x28($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X28);
L_151A9724:
    // 0x151A9724: andi        $t5, $v1, 0x2
    ctx->r13 = ctx->r3 & 0X2;
    // 0x151A9728: beq         $t5, $zero, L_151A9738
    if (ctx->r13 == 0) {
        // 0x151A972C: lw          $v1, 0x90($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X90);
            goto L_151A9738;
    }
    // 0x151A972C: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x151A9730: b           L_151A973C
    // 0x151A9734: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151A973C;
    // 0x151A9734: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151A9738:
    // 0x151A9738: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151A973C:
    // 0x151A973C: lh          $t7, 0x12($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X12);
    // 0x151A9740: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x151A9744: lh          $t5, 0x1A($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X1A);
    // 0x151A9748: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x151A974C: divu        $zero, $t6, $t8
    lo = S32(U32(ctx->r14) / U32(ctx->r24)); hi = S32(U32(ctx->r14) % U32(ctx->r24));
    // 0x151A9750: mfhi        $t9
    ctx->r25 = hi;
    // 0x151A9754: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x151A9758: lh          $t2, 0x10($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X10);
    // 0x151A975C: divu        $zero, $t1, $t7
    lo = S32(U32(ctx->r9) / U32(ctx->r15)); hi = S32(U32(ctx->r9) % U32(ctx->r15));
    // 0x151A9760: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A9764: addu        $a2, $t9, $t2
    ctx->r6 = ADD32(ctx->r25, ctx->r10);
    // 0x151A9768: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151A976C: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x151A9770: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x151A9774: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151A9778: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x151A977C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x151A9780: addiu       $t3, $zero, 0x23
    ctx->r11 = ADD32(0, 0X23);
    // 0x151A9784: addiu       $t2, $zero, 0x21
    ctx->r10 = ADD32(0, 0X21);
    // 0x151A9788: mfhi        $t6
    ctx->r14 = hi;
    // 0x151A978C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x151A9790: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x151A9794: bne         $t8, $zero, L_151A97A0
    if (ctx->r24 != 0) {
        // 0x151A9798: nop
    
            goto L_151A97A0;
    }
    // 0x151A9798: nop

    // 0x151A979C: break       7
    do_break(354064284);
L_151A97A0:
    // 0x151A97A0: lh          $t8, 0x18($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X18);
    // 0x151A97A4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x151A97A8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x151A97AC: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x151A97B0: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x151A97B4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x151A97B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151A97BC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x151A97C0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x151A97C4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x151A97C8: lh          $t5, 0x1C($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X1C);
    // 0x151A97CC: bne         $t7, $zero, L_151A97D8
    if (ctx->r15 != 0) {
        // 0x151A97D0: nop
    
            goto L_151A97D8;
    }
    // 0x151A97D0: nop

    // 0x151A97D4: break       7
    do_break(354064340);
L_151A97D8:
    // 0x151A97D8: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x151A97DC: lh          $t7, 0x1E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1E);
    // 0x151A97E0: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    // 0x151A97E4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x151A97E8: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x151A97EC: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x151A97F0: lbu         $t8, 0xC($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XC);
    // 0x151A97F4: andi        $t9, $a3, 0xFF
    ctx->r25 = ctx->r7 & 0XFF;
    // 0x151A97F8: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x151A97FC: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x151A9800: lbu         $t9, 0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1);
    // 0x151A9804: jal         0x1514B8E4
    // 0x151A9808: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    func_1514B8E4(rdram, ctx);
        goto after_7;
    // 0x151A9808: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    after_7:
    // 0x151A980C: beq         $v0, $zero, L_151A9820
    if (ctx->r2 == 0) {
        // 0x151A9810: addiu       $a0, $v0, 0x160
        ctx->r4 = ADD32(ctx->r2, 0X160);
            goto L_151A9820;
    }
    // 0x151A9810: addiu       $a0, $v0, 0x160
    ctx->r4 = ADD32(ctx->r2, 0X160);
    // 0x151A9814: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x151A9818: jal         0x10022EC0
    // 0x151A981C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x151A981C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
L_151A9820:
    // 0x151A9820: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x151A9824: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x151A9828: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x151A982C: jr          $ra
    // 0x151A9830: nop

    return;
    return;
    // 0x151A9830: nop

;}
RECOMP_FUNC void func_150B5E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B5E34: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x150B5E38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150B5E3C: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x150B5E40: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x150B5E44: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x150B5E48: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x150B5E4C: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x150B5E50: addiu       $t7, $zero, 0x4403
    ctx->r15 = ADD32(0, 0X4403);
    // 0x150B5E54: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x150B5E58: lui         $t9, 0x2
    ctx->r25 = S32(0X2 << 16);
    // 0x150B5E5C: sb          $t6, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r14;
    // 0x150B5E60: sh          $t7, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r15;
    // 0x150B5E64: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x150B5E68: jal         0x150ADA20
    // 0x150B5E6C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150B5E6C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    after_0:
    // 0x150B5E70: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x150B5E74: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150B5E78: mfhi        $t0
    ctx->r8 = hi;
    // 0x150B5E7C: addiu       $t1, $t0, 0x4
    ctx->r9 = ADD32(ctx->r8, 0X4);
    // 0x150B5E80: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150B5E84: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150B5E88: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150B5E8C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150B5E90: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150B5E94: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150B5E98: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150B5E9C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150B5EA0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150B5EA4: sh          $t1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r9;
    // 0x150B5EA8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150B5EAC: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x150B5EB0: sb          $t2, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r10;
    // 0x150B5EB4: sb          $t3, 0x3D($sp)
    MEM_B(0X3D, ctx->r29) = ctx->r11;
    // 0x150B5EB8: sb          $t4, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = ctx->r12;
    // 0x150B5EBC: sb          $t5, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r13;
    // 0x150B5EC0: sb          $t6, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r14;
    // 0x150B5EC4: sb          $t7, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r15;
    // 0x150B5EC8: sb          $t8, 0x42($sp)
    MEM_B(0X42, ctx->r29) = ctx->r24;
    // 0x150B5ECC: sb          $t9, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r25;
    // 0x150B5ED0: jal         0x150ADA68
    // 0x150B5ED4: sb          $t0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r8;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150B5ED4: sb          $t0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r8;
    after_1:
    // 0x150B5ED8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150B5EDC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150B5EE0: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x150B5EE4: addiu       $t1, $sp, 0x58
    ctx->r9 = ADD32(ctx->r29, 0X58);
    // 0x150B5EE8: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x150B5EEC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150B5EF0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150B5EF4: addiu       $t7, $zero, 0x55
    ctx->r15 = ADD32(0, 0X55);
    // 0x150B5EF8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150B5EFC: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x150B5F00: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x150B5F04: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x150B5F08: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x150B5F0C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150B5F10: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x150B5F14: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x150B5F18: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x150B5F1C: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x150B5F20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150B5F24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B5F28: sh          $t6, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r14;
    // 0x150B5F2C: sh          $t7, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r15;
    // 0x150B5F30: sh          $t8, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r24;
    // 0x150B5F34: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x150B5F38: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x150B5F3C: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x150B5F40: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x150B5F44: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x150B5F48: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    // 0x150B5F4C: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    // 0x150B5F50: jal         0x150ADA20
    // 0x150B5F54: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150B5F54: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x150B5F58: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x150B5F5C: beq         $t9, $zero, L_150B5F6C
    if (ctx->r25 == 0) {
        // 0x150B5F60: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_150B5F6C;
    }
    // 0x150B5F60: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150B5F64: b           L_150B5F6C
    // 0x150B5F68: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_150B5F6C;
    // 0x150B5F68: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_150B5F6C:
    // 0x150B5F6C: jal         0x150ADA20
    // 0x150B5F70: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150B5F70: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_3:
    // 0x150B5F74: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x150B5F78: beq         $t0, $zero, L_150B5F88
    if (ctx->r8 == 0) {
        // 0x150B5F7C: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_150B5F88;
    }
    // 0x150B5F7C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x150B5F80: b           L_150B5F8C
    // 0x150B5F84: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_150B5F8C;
    // 0x150B5F84: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_150B5F88:
    // 0x150B5F88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150B5F8C:
    // 0x150B5F8C: ori         $t4, $v0, 0x1
    ctx->r12 = ctx->r2 | 0X1;
    // 0x150B5F90: or          $t2, $t4, $v1
    ctx->r10 = ctx->r12 | ctx->r3;
    // 0x150B5F94: lbu         $t3, 0x9F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X9F);
    // 0x150B5F98: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x150B5F9C: ori         $t5, $t2, 0xC200
    ctx->r13 = ctx->r10 | 0XC200;
    // 0x150B5FA0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x150B5FA4: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x150B5FA8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150B5FAC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150B5FB0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150B5FB4: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x150B5FB8: sw          $t5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r13;
    // 0x150B5FBC: sb          $t6, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r14;
    // 0x150B5FC0: sb          $t7, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r15;
    // 0x150B5FC4: sb          $t8, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = ctx->r24;
    // 0x150B5FC8: sb          $t9, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = ctx->r25;
    // 0x150B5FCC: sb          $t0, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r8;
    // 0x150B5FD0: sb          $t4, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = ctx->r12;
    // 0x150B5FD4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x150B5FD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150B5FDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B5FE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150B5FE4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150B5FE8: jal         0x15130280
    // 0x150B5FEC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_15130280(rdram, ctx);
        goto after_4;
    // 0x150B5FEC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_4:
    // 0x150B5FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150B5FF4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x150B5FF8: jr          $ra
    // 0x150B5FFC: nop

    return;
    return;
    // 0x150B5FFC: nop

;}
RECOMP_FUNC void func_150F6368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F6368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F636C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F6370: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F6374: jal         0x150F631C
    // 0x150F6378: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F631C(rdram, ctx);
        goto after_0;
    // 0x150F6378: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F637C: jal         0x1514933C
    // 0x150F6380: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x150F6380: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F6384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F6388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F638C: jr          $ra
    // 0x150F6390: nop

    return;
    return;
    // 0x150F6390: nop

;}
RECOMP_FUNC void func_150AE790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AE790: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x150AE794: sw          $s3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r19;
    // 0x150AE798: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150AE79C: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x150AE7A0: sw          $s7, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r23;
    // 0x150AE7A4: sw          $s6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r22;
    // 0x150AE7A8: sw          $s5, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r21;
    // 0x150AE7AC: sw          $s4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r20;
    // 0x150AE7B0: sw          $s2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r18;
    // 0x150AE7B4: sw          $s1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r17;
    // 0x150AE7B8: sw          $s0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r16;
    // 0x150AE7BC: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x150AE7C0: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x150AE7C4: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x150AE7C8: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x150AE7CC: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x150AE7D0: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x150AE7D4: lw          $t6, 0x28($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X28);
    // 0x150AE7D8: addiu       $s0, $s3, 0x28
    ctx->r16 = ADD32(ctx->r19, 0X28);
    // 0x150AE7DC: beql        $t6, $zero, L_150AEB5C
    if (ctx->r14 == 0) {
        // 0x150AE7E0: lw          $ra, 0x94($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X94);
            goto L_150AEB5C;
    }
    goto skip_0;
    // 0x150AE7E0: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    skip_0:
    // 0x150AE7E4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x150AE7E8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x150AE7EC: beql        $t7, $zero, L_150AEB5C
    if (ctx->r15 == 0) {
        // 0x150AE7F0: lw          $ra, 0x94($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X94);
            goto L_150AEB5C;
    }
    goto skip_1;
    // 0x150AE7F0: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    skip_1:
    // 0x150AE7F4: lw          $v1, 0x1D4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1D4);
    // 0x150AE7F8: beql        $v1, $zero, L_150AEB5C
    if (ctx->r3 == 0) {
        // 0x150AE7FC: lw          $ra, 0x94($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X94);
            goto L_150AEB5C;
    }
    goto skip_2;
    // 0x150AE7FC: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    skip_2:
    // 0x150AE800: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    // 0x150AE804: lbu         $t9, 0x3B($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X3B);
    // 0x150AE808: addiu       $s7, $sp, 0x148
    ctx->r23 = ADD32(ctx->r29, 0X148);
    // 0x150AE80C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x150AE810: bne         $t8, $t9, L_150AEB58
    if (ctx->r24 != ctx->r25) {
        // 0x150AE814: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_150AEB58;
    }
    // 0x150AE814: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x150AE818: jal         0x15142314
    // 0x150AE81C: lbu         $a1, 0x5($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X5);
    func_15142314(rdram, ctx);
        goto after_0;
    // 0x150AE81C: lbu         $a1, 0x5($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X5);
    after_0:
    // 0x150AE820: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150AE824: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150AE828: sw          $t0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r8;
    // 0x150AE82C: sh          $t1, 0x156($sp)
    MEM_H(0X156, ctx->r29) = ctx->r9;
    // 0x150AE830: sb          $zero, 0x141($sp)
    MEM_B(0X141, ctx->r29) = 0;
    // 0x150AE834: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x150AE838: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150AE83C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x150AE840: lw          $t3, 0x184($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X184);
    // 0x150AE844: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150AE848: srl         $t5, $t3, 5
    ctx->r13 = S32(U32(ctx->r11) >> 5);
    // 0x150AE84C: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x150AE850: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x150AE854: sb          $t8, 0x142($sp)
    MEM_B(0X142, ctx->r29) = ctx->r24;
    // 0x150AE858: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x150AE85C: lwc1        $f4, 0x180($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X180);
    // 0x150AE860: sb          $t0, 0x140($sp)
    MEM_B(0X140, ctx->r29) = ctx->r8;
    // 0x150AE864: sb          $t1, 0x143($sp)
    MEM_B(0X143, ctx->r29) = ctx->r9;
    // 0x150AE868: jal         0x150ADA20
    // 0x150AE86C: swc1        $f4, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150AE86C: swc1        $f4, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x150AE870: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150AE874: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150AE878: mfhi        $v1
    ctx->r3 = hi;
    // 0x150AE87C: lui         $t3, 0x16
    ctx->r11 = S32(0X16 << 16);
    // 0x150AE880: addiu       $s2, $v1, 0xC
    ctx->r18 = ADD32(ctx->r3, 0XC);
    // 0x150AE884: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150AE888: ori         $t3, $t3, 0x600
    ctx->r11 = ctx->r11 | 0X600;
    // 0x150AE88C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x150AE890: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x150AE894: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x150AE898: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x150AE89C: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x150AE8A0: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
    // 0x150AE8A4: sw          $t2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r10;
    // 0x150AE8A8: sw          $t3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r11;
    // 0x150AE8AC: sw          $t4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r12;
    // 0x150AE8B0: sw          $t5, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r13;
    // 0x150AE8B4: sw          $t7, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r15;
    // 0x150AE8B8: sw          $t6, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r14;
    // 0x150AE8BC: sb          $zero, 0x120($sp)
    MEM_B(0X120, ctx->r29) = 0;
    // 0x150AE8C0: beq         $s2, $zero, L_150AEA34
    if (ctx->r18 == 0) {
        // 0x150AE8C4: sb          $t8, 0x121($sp)
        MEM_B(0X121, ctx->r29) = ctx->r24;
            goto L_150AEA34;
    }
    // 0x150AE8C4: sb          $t8, 0x121($sp)
    MEM_B(0X121, ctx->r29) = ctx->r24;
    // 0x150AE8C8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150AE8CC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150AE8D0: addiu       $s6, $sp, 0x104
    ctx->r22 = ADD32(ctx->r29, 0X104);
    // 0x150AE8D4: addiu       $s5, $sp, 0x128
    ctx->r21 = ADD32(ctx->r29, 0X128);
    // 0x150AE8D8: addiu       $s4, $zero, 0x33
    ctx->r20 = ADD32(0, 0X33);
L_150AE8DC:
    // 0x150AE8DC: jal         0x150ADA20
    // 0x150AE8E0: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150AE8E0: nop

    after_2:
    // 0x150AE8E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150AE8E8: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x150AE8EC: jal         0x150ADA20
    // 0x150AE8F0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150AE8F0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    after_3:
    // 0x150AE8F4: divu        $zero, $v0, $s4
    lo = S32(U32(ctx->r2) / U32(ctx->r20)); hi = S32(U32(ctx->r2) % U32(ctx->r20));
    // 0x150AE8F8: mfhi        $s1
    ctx->r17 = hi;
    // 0x150AE8FC: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x150AE900: bne         $s4, $zero, L_150AE90C
    if (ctx->r20 != 0) {
        // 0x150AE904: nop
    
            goto L_150AE90C;
    }
    // 0x150AE904: nop

    // 0x150AE908: break       7
    do_break(353036552);
L_150AE90C:
    // 0x150AE90C: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x150AE910: jal         0x151423D8
    // 0x150AE914: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x150AE914: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_4:
    // 0x150AE918: addiu       $a0, $s0, -0x40
    ctx->r4 = ADD32(ctx->r16, -0X40);
    // 0x150AE91C: andi        $t1, $a0, 0xFF
    ctx->r9 = ctx->r4 & 0XFF;
    // 0x150AE920: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x150AE924: jal         0x151423D8
    // 0x150AE928: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x150AE928: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_5:
    // 0x150AE92C: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x150AE930: jal         0x151423D8
    // 0x150AE934: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x150AE934: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_6:
    // 0x150AE938: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x150AE93C: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x150AE940: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    // 0x150AE944: jal         0x151423D8
    // 0x150AE948: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_151423D8(rdram, ctx);
        goto after_7;
    // 0x150AE948: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_7:
    // 0x150AE94C: jal         0x150ADA68
    // 0x150AE950: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150AE950: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_8:
    // 0x150AE954: mul.s       $f6, $f0, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x150AE958: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AE95C: lwc1        $f8, -0x88C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X88C);
    // 0x150AE960: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x150AE964: sb          $t3, 0x15D($sp)
    MEM_B(0X15D, ctx->r29) = ctx->r11;
    // 0x150AE968: jal         0x150ADA20
    // 0x150AE96C: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150AE96C: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    after_9:
    // 0x150AE970: andi        $t4, $v0, 0xF
    ctx->r12 = ctx->r2 & 0XF;
    // 0x150AE974: addiu       $t5, $t4, 0x23
    ctx->r13 = ADD32(ctx->r12, 0X23);
    // 0x150AE978: jal         0x150ADA68
    // 0x150AE97C: sh          $t5, 0x154($sp)
    MEM_H(0X154, ctx->r29) = ctx->r13;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150AE97C: sh          $t5, 0x154($sp)
    MEM_H(0X154, ctx->r29) = ctx->r13;
    after_10:
    // 0x150AE980: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AE984: lwc1        $f10, -0x888($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X888);
    // 0x150AE988: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AE98C: lwc1        $f18, -0x884($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X884);
    // 0x150AE990: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150AE994: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150AE998: jal         0x150ADA68
    // 0x150AE99C: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150AE99C: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x150AE9A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AE9A4: lwc1        $f6, -0x880($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X880);
    // 0x150AE9A8: neg.s       $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = -ctx->f20.fl;
    // 0x150AE9AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AE9B0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150AE9B4: lwc1        $f10, -0x87C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X87C);
    // 0x150AE9B8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x150AE9BC: mul.s       $f2, $f20, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x150AE9C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150AE9C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150AE9C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150AE9CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150AE9D0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150AE9D4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150AE9D8: mul.s       $f18, $f2, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x150AE9DC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150AE9E0: swc1        $f16, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f16.u32l;
    // 0x150AE9E4: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x150AE9E8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150AE9EC: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x150AE9F0: mul.s       $f8, $f2, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x150AE9F4: swc1        $f18, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f18.u32l;
    // 0x150AE9F8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150AE9FC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x150AEA00: swc1        $f6, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f6.u32l;
    // 0x150AEA04: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x150AEA08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150AEA0C: swc1        $f8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f8.u32l;
    // 0x150AEA10: lbu         $t6, 0xC($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0XC);
    // 0x150AEA14: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150AEA18: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x150AEA1C: lbu         $t8, 0x1($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X1);
    // 0x150AEA20: jal         0x15147DA0
    // 0x150AEA24: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    func_15147DA0(rdram, ctx);
        goto after_12;
    // 0x150AEA24: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    after_12:
    // 0x150AEA28: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x150AEA2C: bne         $s2, $zero, L_150AE8DC
    if (ctx->r18 != 0) {
        // 0x150AEA30: nop
    
            goto L_150AE8DC;
    }
    // 0x150AEA30: nop

L_150AEA34:
    // 0x150AEA34: jal         0x150ADA68
    // 0x150AEA38: nop

    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x150AEA38: nop

    after_13:
    // 0x150AEA3C: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x150AEA40: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150AEA44: jal         0x150ADA68
    // 0x150AEA48: add.s       $f20, $f0, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f10.fl;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x150AEA48: add.s       $f20, $f0, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f10.fl;
    after_14:
    // 0x150AEA4C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150AEA50: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150AEA54: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x150AEA58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150AEA5C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150AEA60: lwc1        $f16, 0x148($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X148);
    // 0x150AEA64: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150AEA68: sb          $t4, 0xE1($sp)
    MEM_B(0XE1, ctx->r29) = ctx->r12;
    // 0x150AEA6C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x150AEA70: lw          $t8, -0x34EC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X34EC);
    // 0x150AEA74: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150AEA78: add.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150AEA7C: lwc1        $f4, 0x14C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x150AEA80: sb          $t5, 0xE2($sp)
    MEM_B(0XE2, ctx->r29) = ctx->r13;
    // 0x150AEA84: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150AEA88: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150AEA8C: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x150AEA90: div.s       $f8, $f2, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f20.fl);
    // 0x150AEA94: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150AEA98: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x150AEA9C: sh          $zero, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = 0;
    // 0x150AEAA0: trunc.w.s   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x150AEAA4: sh          $zero, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = 0;
    // 0x150AEAA8: sb          $t3, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r11;
    // 0x150AEAAC: sb          $zero, 0xE4($sp)
    MEM_B(0XE4, ctx->r29) = 0;
    // 0x150AEAB0: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x150AEAB4: sb          $zero, 0xE5($sp)
    MEM_B(0XE5, ctx->r29) = 0;
    // 0x150AEAB8: sb          $zero, 0xE6($sp)
    MEM_B(0XE6, ctx->r29) = 0;
    // 0x150AEABC: sh          $t0, 0xCE($sp)
    MEM_H(0XCE, ctx->r29) = ctx->r8;
    // 0x150AEAC0: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x150AEAC4: sh          $t7, 0xDC($sp)
    MEM_H(0XDC, ctx->r29) = ctx->r15;
    // 0x150AEAC8: sb          $t6, 0xE3($sp)
    MEM_B(0XE3, ctx->r29) = ctx->r14;
    // 0x150AEACC: sb          $zero, 0xDE($sp)
    MEM_B(0XDE, ctx->r29) = 0;
    // 0x150AEAD0: sh          $zero, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = 0;
    // 0x150AEAD4: sh          $zero, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = 0;
    // 0x150AEAD8: sb          $zero, 0xD0($sp)
    MEM_B(0XD0, ctx->r29) = 0;
    // 0x150AEADC: sb          $zero, 0xD2($sp)
    MEM_B(0XD2, ctx->r29) = 0;
    // 0x150AEAE0: sb          $zero, 0xD1($sp)
    MEM_B(0XD1, ctx->r29) = 0;
    // 0x150AEAE4: sh          $zero, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = 0;
    // 0x150AEAE8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150AEAEC: sh          $zero, 0xCC($sp)
    MEM_H(0XCC, ctx->r29) = 0;
    // 0x150AEAF0: sh          $zero, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = 0;
    // 0x150AEAF4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150AEAF8: lwc1        $f8, 0x150($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X150);
    // 0x150AEAFC: sh          $zero, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = 0;
    // 0x150AEB00: sb          $t5, 0xD3($sp)
    MEM_B(0XD3, ctx->r29) = ctx->r13;
    // 0x150AEB04: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x150AEB08: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150AEB0C: sh          $zero, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = 0;
    // 0x150AEB10: sw          $t2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r10;
    // 0x150AEB14: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x150AEB18: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x150AEB1C: sb          $zero, 0xDF($sp)
    MEM_B(0XDF, ctx->r29) = 0;
    // 0x150AEB20: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x150AEB24: sw          $t8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r24;
    // 0x150AEB28: sh          $t0, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r8;
    // 0x150AEB2C: sh          $t2, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r10;
    // 0x150AEB30: sh          $t4, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r12;
    // 0x150AEB34: lbu         $t7, 0xC($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0XC);
    // 0x150AEB38: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x150AEB3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150AEB40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150AEB44: lbu         $t6, 0x1($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X1);
    // 0x150AEB48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150AEB4C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150AEB50: jal         0x15167D84
    // 0x150AEB54: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_15167D84(rdram, ctx);
        goto after_15;
    // 0x150AEB54: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_15:
L_150AEB58:
    // 0x150AEB58: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
L_150AEB5C:
    // 0x150AEB5C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x150AEB60: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x150AEB64: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x150AEB68: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x150AEB6C: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x150AEB70: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x150AEB74: lw          $s0, 0x74($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X74);
    // 0x150AEB78: lw          $s1, 0x78($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X78);
    // 0x150AEB7C: lw          $s2, 0x7C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X7C);
    // 0x150AEB80: lw          $s3, 0x80($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X80);
    // 0x150AEB84: lw          $s4, 0x84($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X84);
    // 0x150AEB88: lw          $s5, 0x88($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X88);
    // 0x150AEB8C: lw          $s6, 0x8C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X8C);
    // 0x150AEB90: lw          $s7, 0x90($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X90);
    // 0x150AEB94: jr          $ra
    // 0x150AEB98: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    return;
    // 0x150AEB98: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void func_1509FE0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509FE0C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1509FE10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509FE14: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1509FE18: addiu       $t6, $a1, -0x1A
    ctx->r14 = ADD32(ctx->r5, -0X1A);
    // 0x1509FE1C: sltiu       $at, $t6, 0x14
    ctx->r1 = ctx->r14 < 0X14 ? 1 : 0;
    // 0x1509FE20: beq         $at, $zero, L_150A00D4
    if (ctx->r1 == 0) {
        // 0x1509FE24: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150A00D4;
    }
    // 0x1509FE24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509FE28: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1509FE2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1509FE30: addu        $at, $at, $t6
    gpr jr_addend_1509FE38 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1509FE34: lw          $t6, -0xB00($at)
    ctx->r14 = ADD32(ctx->r1, -0XB00);
    // 0x1509FE38: jr          $t6
    // 0x1509FE3C: nop

    switch (jr_addend_1509FE38 >> 2) {
        case 0: goto L_1509FE40; break;
        case 1: goto L_1509FE68; break;
        case 2: goto L_1509FE80; break;
        case 3: goto L_1509FE8C; break;
        case 4: goto L_1509FEE8; break;
        case 5: goto L_1509FEF8; break;
        case 6: goto L_1509FF04; break;
        case 7: goto L_1509FF10; break;
        case 8: goto L_1509FF1C; break;
        case 9: goto L_1509FFD0; break;
        case 10: goto L_1509FFDC; break;
        case 11: goto L_1509FFE8; break;
        case 12: goto L_1509FFFC; break;
        case 13: goto L_150A0008; break;
        case 14: goto L_150A0020; break;
        case 15: goto L_150A0040; break;
        case 16: goto L_150A0054; break;
        case 17: goto L_150A0068; break;
        case 18: goto L_150A0098; break;
        case 19: goto L_150A00C8; break;
        default: switch_error(__func__, 0x1509FE38, 0x8009F500);
    }
    // 0x1509FE3C: nop

L_1509FE40:
    // 0x1509FE40: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1509FE44: lw          $t8, 0x2E4C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2E4C);
    // 0x1509FE48: sra         $t7, $a3, 3
    ctx->r15 = S32(SIGNED(ctx->r7) >> 3);
    // 0x1509FE4C: andi        $t1, $a3, 0x7
    ctx->r9 = ctx->r7 & 0X7;
    // 0x1509FE50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1509FE54: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x1509FE58: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1509FE5C: sllv        $t3, $t2, $t1
    ctx->r11 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x1509FE60: b           L_150A00D4
    // 0x1509FE64: and         $v0, $t0, $t3
    ctx->r2 = ctx->r8 & ctx->r11;
        goto L_150A00D4;
    // 0x1509FE64: and         $v0, $t0, $t3
    ctx->r2 = ctx->r8 & ctx->r11;
L_1509FE68:
    // 0x1509FE68: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x1509FE6C: sra         $t4, $a0, 16
    ctx->r12 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1509FE70: jal         0x1509B704
    // 0x1509FE74: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_1509B704(rdram, ctx);
        goto after_0;
    // 0x1509FE74: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_0:
    // 0x1509FE78: b           L_150A00D4
    // 0x1509FE7C: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
        goto L_150A00D4;
    // 0x1509FE7C: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
L_1509FE80:
    // 0x1509FE80: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1509FE84: b           L_150A00D4
    // 0x1509FE88: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
        goto L_150A00D4;
    // 0x1509FE88: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
L_1509FE8C:
    // 0x1509FE8C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1509FE90: lb          $a1, -0x274($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X274);
    // 0x1509FE94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1509FE98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509FE9C: blez        $a1, L_1509FED8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1509FEA0: lui         $t8, 0x800D
        ctx->r24 = S32(0X800D << 16);
            goto L_1509FED8;
    }
    // 0x1509FEA0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1509FEA4: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1509FEA8: addiu       $v1, $v1, 0x7270
    ctx->r3 = ADD32(ctx->r3, 0X7270);
    // 0x1509FEAC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_1509FEB0:
    // 0x1509FEB0: lb          $t5, 0x0($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X0);
    // 0x1509FEB4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1509FEB8: sllv        $t7, $t6, $v0
    ctx->r15 = S32(ctx->r14 << (ctx->r2 & 31));
    // 0x1509FEBC: beql        $a2, $t5, L_1509FECC
    if (ctx->r6 == ctx->r13) {
        // 0x1509FEC0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_1509FECC;
    }
    goto skip_0;
    // 0x1509FEC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x1509FEC4: or          $a0, $a0, $t7
    ctx->r4 = ctx->r4 | ctx->r15;
    // 0x1509FEC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_1509FECC:
    // 0x1509FECC: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1509FED0: bne         $at, $zero, L_1509FEB0
    if (ctx->r1 != 0) {
        // 0x1509FED4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_1509FEB0;
    }
    // 0x1509FED4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_1509FED8:
    // 0x1509FED8: lhu         $t8, 0x18A0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X18A0);
    // 0x1509FEDC: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x1509FEE0: b           L_150A00D4
    // 0x1509FEE4: and         $v0, $a0, $t9
    ctx->r2 = ctx->r4 & ctx->r25;
        goto L_150A00D4;
    // 0x1509FEE4: and         $v0, $a0, $t9
    ctx->r2 = ctx->r4 & ctx->r25;
L_1509FEE8:
    // 0x1509FEE8: jal         0x151E5F64
    // 0x1509FEEC: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    func_151E5F64(rdram, ctx);
        goto after_1;
    // 0x1509FEEC: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    after_1:
    // 0x1509FEF0: b           L_150A00D8
    // 0x1509FEF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150A00D8;
    // 0x1509FEF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509FEF8:
    // 0x1509FEF8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1509FEFC: b           L_150A00D4
    // 0x1509FF00: lw          $v0, -0x1608($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1608);
        goto L_150A00D4;
    // 0x1509FF00: lw          $v0, -0x1608($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1608);
L_1509FF04:
    // 0x1509FF04: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1509FF08: b           L_150A00D4
    // 0x1509FF0C: lb          $v0, -0x1C21($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X1C21);
        goto L_150A00D4;
    // 0x1509FF0C: lb          $v0, -0x1C21($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X1C21);
L_1509FF10:
    // 0x1509FF10: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1509FF14: b           L_150A00D4
    // 0x1509FF18: lbu         $v0, -0x1C20($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1C20);
        goto L_150A00D4;
    // 0x1509FF18: lbu         $v0, -0x1C20($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1C20);
L_1509FF1C:
    // 0x1509FF1C: lw          $a3, 0x8($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X8);
    // 0x1509FF20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1509FF24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1509FF28: blez        $a3, L_1509FF50
    if (SIGNED(ctx->r7) <= 0) {
        // 0x1509FF2C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_1509FF50;
    }
    // 0x1509FF2C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1509FF30: sll         $t2, $a3, 2
    ctx->r10 = S32(ctx->r7 << 2);
    // 0x1509FF34: addu        $v1, $t2, $a2
    ctx->r3 = ADD32(ctx->r10, ctx->r6);
L_1509FF38:
    // 0x1509FF38: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x1509FF3C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1509FF40: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x1509FF44: bne         $at, $zero, L_1509FF38
    if (ctx->r1 != 0) {
        // 0x1509FF48: addu        $a0, $a0, $t1
        ctx->r4 = ADD32(ctx->r4, ctx->r9);
            goto L_1509FF38;
    }
    // 0x1509FF48: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x1509FF4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_1509FF50:
    // 0x1509FF50: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x1509FF54: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x1509FF58: jal         0x150ADA68
    // 0x1509FF5C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x1509FF5C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_2:
    // 0x1509FF60: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x1509FF64: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x1509FF68: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x1509FF6C: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x1509FF70: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x1509FF74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1509FF78: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1509FF7C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1509FF80: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1509FF84: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1509FF88: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x1509FF8C: blez        $a3, L_1509FFC8
    if (SIGNED(ctx->r7) <= 0) {
        // 0x1509FF90: nop
    
            goto L_1509FFC8;
    }
    // 0x1509FF90: nop

L_1509FF94:
    // 0x1509FF94: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x1509FF98: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x1509FF9C: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x1509FFA0: bnel        $at, $zero, L_1509FFBC
    if (ctx->r1 != 0) {
        // 0x1509FFA4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_1509FFBC;
    }
    goto skip_1;
    // 0x1509FFA4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_1:
    // 0x1509FFA8: beql        $v1, $zero, L_1509FFBC
    if (ctx->r3 == 0) {
        // 0x1509FFAC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_1509FFBC;
    }
    goto skip_2;
    // 0x1509FFAC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_2:
    // 0x1509FFB0: b           L_150A00D4
    // 0x1509FFB4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_150A00D4;
    // 0x1509FFB4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x1509FFB8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_1509FFBC:
    // 0x1509FFBC: slt         $at, $a1, $a3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x1509FFC0: bne         $at, $zero, L_1509FF94
    if (ctx->r1 != 0) {
        // 0x1509FFC4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_1509FF94;
    }
    // 0x1509FFC4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_1509FFC8:
    // 0x1509FFC8: b           L_150A00D4
    // 0x1509FFCC: addiu       $v0, $a3, -0x1
    ctx->r2 = ADD32(ctx->r7, -0X1);
        goto L_150A00D4;
    // 0x1509FFCC: addiu       $v0, $a3, -0x1
    ctx->r2 = ADD32(ctx->r7, -0X1);
L_1509FFD0:
    // 0x1509FFD0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x1509FFD4: b           L_150A00D4
    // 0x1509FFD8: lb          $v0, -0x270($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X270);
        goto L_150A00D4;
    // 0x1509FFD8: lb          $v0, -0x270($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X270);
L_1509FFDC:
    // 0x1509FFDC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1509FFE0: b           L_150A00D4
    // 0x1509FFE4: lb          $v0, 0xBB1($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XBB1);
        goto L_150A00D4;
    // 0x1509FFE4: lb          $v0, 0xBB1($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XBB1);
L_1509FFE8:
    // 0x1509FFE8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x1509FFEC: lhu         $v0, -0x244($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X244);
    // 0x1509FFF0: andi        $t3, $v0, 0x10
    ctx->r11 = ctx->r2 & 0X10;
    // 0x1509FFF4: b           L_150A00D4
    // 0x1509FFF8: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
        goto L_150A00D4;
    // 0x1509FFF8: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_1509FFFC:
    // 0x1509FFFC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x150A0000: b           L_150A00D4
    // 0x150A0004: lb          $v0, -0x274($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X274);
        goto L_150A00D4;
    // 0x150A0004: lb          $v0, -0x274($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X274);
L_150A0008:
    // 0x150A0008: lw          $t4, 0x8($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X8);
    // 0x150A000C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150A0010: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x150A0014: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x150A0018: b           L_150A00D4
    // 0x150A001C: lhu         $v0, -0x16D0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X16D0);
        goto L_150A00D4;
    // 0x150A001C: lhu         $v0, -0x16D0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X16D0);
L_150A0020:
    // 0x150A0020: lw          $t6, 0x8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X8);
    // 0x150A0024: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150A0028: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150A002C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150A0030: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x150A0034: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x150A0038: b           L_150A00D4
    // 0x150A003C: lhu         $v0, -0x16E8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X16E8);
        goto L_150A00D4;
    // 0x150A003C: lhu         $v0, -0x16E8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X16E8);
L_150A0040:
    // 0x150A0040: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150A0044: lbu         $v0, 0xB94($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB94);
    // 0x150A0048: xori        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 ^ 0X2;
    // 0x150A004C: b           L_150A00D4
    // 0x150A0050: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
        goto L_150A00D4;
    // 0x150A0050: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
L_150A0054:
    // 0x150A0054: lui         $t2, 0x800F
    ctx->r10 = S32(0X800F << 16);
    // 0x150A0058: lw          $t2, -0x6300($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X6300);
    // 0x150A005C: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x150A0060: b           L_150A00D4
    // 0x150A0064: and         $v0, $t9, $t2
    ctx->r2 = ctx->r25 & ctx->r10;
        goto L_150A00D4;
    // 0x150A0064: and         $v0, $t9, $t2
    ctx->r2 = ctx->r25 & ctx->r10;
L_150A0068:
    // 0x150A0068: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x150A006C: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x150A0070: jal         0x1509B704
    // 0x150A0074: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_1509B704(rdram, ctx);
        goto after_3;
    // 0x150A0074: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_3:
    // 0x150A0078: beq         $v0, $zero, L_150A0090
    if (ctx->r2 == 0) {
        // 0x150A007C: nop
    
            goto L_150A0090;
    }
    // 0x150A007C: nop

    // 0x150A0080: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x150A0084: andi        $t0, $v0, 0x2000
    ctx->r8 = ctx->r2 & 0X2000;
    // 0x150A0088: b           L_150A00D4
    // 0x150A008C: sltiu       $v0, $t0, 0x1
    ctx->r2 = ctx->r8 < 0X1 ? 1 : 0;
        goto L_150A00D4;
    // 0x150A008C: sltiu       $v0, $t0, 0x1
    ctx->r2 = ctx->r8 < 0X1 ? 1 : 0;
L_150A0090:
    // 0x150A0090: b           L_150A00D4
    // 0x150A0094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150A00D4;
    // 0x150A0094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150A0098:
    // 0x150A0098: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x150A009C: lw          $t4, 0x3840($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3840);
    // 0x150A00A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150A00A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150A00A8: bne         $t4, $at, L_150A00B8
    if (ctx->r12 != ctx->r1) {
        // 0x150A00AC: nop
    
            goto L_150A00B8;
    }
    // 0x150A00AC: nop

    // 0x150A00B0: b           L_150A00B8
    // 0x150A00B4: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
        goto L_150A00B8;
    // 0x150A00B4: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
L_150A00B8:
    // 0x150A00B8: jal         0x1517EFAC
    // 0x150A00BC: nop

    func_1517EFAC(rdram, ctx);
        goto after_4;
    // 0x150A00BC: nop

    after_4:
    // 0x150A00C0: b           L_150A00D8
    // 0x150A00C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150A00D8;
    // 0x150A00C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150A00C8:
    // 0x150A00C8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150A00CC: b           L_150A00D4
    // 0x150A00D0: lbu         $v0, 0x2E40($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2E40);
        goto L_150A00D4;
    // 0x150A00D0: lbu         $v0, 0x2E40($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2E40);
L_150A00D4:
    // 0x150A00D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150A00D8:
    // 0x150A00D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150A00DC: jr          $ra
    // 0x150A00E0: nop

    return;
    return;
    // 0x150A00E0: nop

;}
RECOMP_FUNC void func_150142EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150142EC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150142F0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150142F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150142F8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150142FC: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
    // 0x15014300: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15014304: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15014308: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x1501430C: sb          $t7, 0x16($s0)
    MEM_B(0X16, ctx->r16) = ctx->r15;
    // 0x15014310: lw          $t8, 0x2FA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2FA0);
    // 0x15014314: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x15014318: bne         $at, $zero, L_15014328
    if (ctx->r1 != 0) {
        // 0x1501431C: nop
    
            goto L_15014328;
    }
    // 0x1501431C: nop

    // 0x15014320: b           L_150144A4
    // 0x15014324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150144A4;
    // 0x15014324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15014328:
    // 0x15014328: lw          $t9, 0x2E4C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2E4C);
    // 0x1501432C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15014330: lbu         $t0, 0x11($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X11);
    // 0x15014334: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x15014338: beql        $t1, $zero, L_1501435C
    if (ctx->r9 == 0) {
        // 0x1501433C: lw          $v0, 0x1C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1C);
            goto L_1501435C;
    }
    goto skip_0;
    // 0x1501433C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    skip_0:
    // 0x15014340: lw          $t2, -0x1610($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1610);
    // 0x15014344: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x15014348: bnel        $t2, $at, L_1501435C
    if (ctx->r10 != ctx->r1) {
        // 0x1501434C: lw          $v0, 0x1C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1C);
            goto L_1501435C;
    }
    goto skip_1;
    // 0x1501434C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    skip_1:
    // 0x15014350: b           L_150144A4
    // 0x15014354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150144A4;
    // 0x15014354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15014358: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
L_1501435C:
    // 0x1501435C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15014360: lwc1        $f0, 0x6680($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6680);
    // 0x15014364: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x15014368: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1501436C: srl         $t4, $v0, 16
    ctx->r12 = S32(U32(ctx->r2) >> 16);
    // 0x15014370: bgez        $t3, L_15014388
    if (SIGNED(ctx->r11) >= 0) {
        // 0x15014374: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15014388;
    }
    // 0x15014374: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15014378: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1501437C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15014380: nop

    // 0x15014384: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_15014388:
    // 0x15014388: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1501438C: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x15014390: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x15014394: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15014398: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1501439C: bgez        $t5, L_150143B0
    if (SIGNED(ctx->r13) >= 0) {
        // 0x150143A0: swc1        $f10, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
            goto L_150143B0;
    }
    // 0x150143A0: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x150143A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150143A8: nop

    // 0x150143AC: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_150143B0:
    // 0x150143B0: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150143B4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150143B8: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x150143BC: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x150143C0: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x150143C4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x150143C8: srl         $t7, $v1, 16
    ctx->r15 = S32(U32(ctx->r3) >> 16);
    // 0x150143CC: bgez        $t6, L_150143E0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x150143D0: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_150143E0;
    }
    // 0x150143D0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150143D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150143D8: nop

    // 0x150143DC: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_150143E0:
    // 0x150143E0: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150143E4: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x150143E8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x150143EC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150143F0: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150143F4: bgez        $t8, L_15014408
    if (SIGNED(ctx->r24) >= 0) {
        // 0x150143F8: swc1        $f4, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
            goto L_15014408;
    }
    // 0x150143F8: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x150143FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15014400: nop

    // 0x15014404: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_15014408:
    // 0x15014408: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1501440C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15014410: jal         0x1514462C
    // 0x15014414: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    func_1514462C(rdram, ctx);
        goto after_0;
    // 0x15014414: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x15014418: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1501441C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15014420: lwc1        $f2, 0x6684($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6684);
    // 0x15014424: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15014428: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1501442C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15014430: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x15014434: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15014438: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x1501443C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x15014440: mul.s       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15014444: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15014448: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1501444C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15014450: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x15014454: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15014458: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x1501445C: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x15014460: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x15014464: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15014468: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1501446C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15014470: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15014474: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15014478: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x1501447C: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x15014480: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x15014484: jal         0x15149130
    // 0x15014488: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    func_15149130(rdram, ctx);
        goto after_1;
    // 0x15014488: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x1501448C: beq         $v0, $zero, L_150144A0
    if (ctx->r2 == 0) {
        // 0x15014490: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150144A0;
    }
    // 0x15014490: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15014494: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x15014498: jal         0x10022EC0
    // 0x1501449C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1501449C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_2:
L_150144A0:
    // 0x150144A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150144A4:
    // 0x150144A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150144A8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150144AC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x150144B0: jr          $ra
    // 0x150144B4: nop

    return;
    return;
    // 0x150144B4: nop

;}
RECOMP_FUNC void func_150F55C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F55C8: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x150F55CC: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x150F55D0: lh          $t2, 0x24($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X24);
    // 0x150F55D4: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x150F55D8: sra         $a1, $a2, 16
    ctx->r5 = S32(SIGNED(ctx->r6) >> 16);
    // 0x150F55DC: subu        $t1, $v0, $a1
    ctx->r9 = SUB32(ctx->r2, ctx->r5);
    // 0x150F55E0: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x150F55E4: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x150F55E8: beq         $at, $zero, L_150F5634
    if (ctx->r1 == 0) {
        // 0x150F55EC: andi        $a3, $a2, 0xFFFF
        ctx->r7 = ctx->r6 & 0XFFFF;
            goto L_150F5634;
    }
    // 0x150F55EC: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
    // 0x150F55F0: subu        $t6, $v0, $t2
    ctx->r14 = SUB32(ctx->r2, ctx->r10);
    // 0x150F55F4: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x150F55F8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150F55FC: div         $zero, $t7, $a1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r5)));
    // 0x150F5600: mflo        $t8
    ctx->r24 = lo;
    // 0x150F5604: sb          $t8, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r24;
    // 0x150F5608: bne         $a1, $zero, L_150F5614
    if (ctx->r5 != 0) {
        // 0x150F560C: nop
    
            goto L_150F5614;
    }
    // 0x150F560C: nop

    // 0x150F5610: break       7
    do_break(353326608);
L_150F5614:
    // 0x150F5614: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150F5618: bne         $a1, $at, L_150F562C
    if (ctx->r5 != ctx->r1) {
        // 0x150F561C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150F562C;
    }
    // 0x150F561C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150F5620: bne         $t7, $at, L_150F562C
    if (ctx->r15 != ctx->r1) {
        // 0x150F5624: nop
    
            goto L_150F562C;
    }
    // 0x150F5624: nop

    // 0x150F5628: break       6
    do_break(353326632);
L_150F562C:
    // 0x150F562C: jr          $ra
    // 0x150F5630: nop

    return;
    return;
    // 0x150F5630: nop

L_150F5634:
    // 0x150F5634: subu        $t9, $t1, $a3
    ctx->r25 = SUB32(ctx->r9, ctx->r7);
    // 0x150F5638: slt         $at, $t9, $t2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x150F563C: beq         $at, $zero, L_150F5650
    if (ctx->r1 == 0) {
        // 0x150F5640: sll         $t4, $t2, 8
        ctx->r12 = S32(ctx->r10 << 8);
            goto L_150F5650;
    }
    // 0x150F5640: sll         $t4, $t2, 8
    ctx->r12 = S32(ctx->r10 << 8);
    // 0x150F5644: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150F5648: jr          $ra
    // 0x150F564C: sb          $t3, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r11;
    return;
    return;
    // 0x150F564C: sb          $t3, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r11;
L_150F5650:
    // 0x150F5650: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x150F5654: div         $zero, $t4, $t0
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r8)));
    // 0x150F5658: mflo        $t5
    ctx->r13 = lo;
    // 0x150F565C: sb          $t5, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r13;
    // 0x150F5660: bne         $t0, $zero, L_150F566C
    if (ctx->r8 != 0) {
        // 0x150F5664: nop
    
            goto L_150F566C;
    }
    // 0x150F5664: nop

    // 0x150F5668: break       7
    do_break(353326696);
L_150F566C:
    // 0x150F566C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150F5670: bne         $t0, $at, L_150F5684
    if (ctx->r8 != ctx->r1) {
        // 0x150F5674: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150F5684;
    }
    // 0x150F5674: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150F5678: bne         $t4, $at, L_150F5684
    if (ctx->r12 != ctx->r1) {
        // 0x150F567C: nop
    
            goto L_150F5684;
    }
    // 0x150F567C: nop

    // 0x150F5680: break       6
    do_break(353326720);
L_150F5684:
    // 0x150F5684: jr          $ra
    // 0x150F5688: nop

    return;
    return;
    // 0x150F5688: nop

;}
RECOMP_FUNC void func_1500A260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500A260: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1500A264: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1500A268: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1500A26C: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x1500A270: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x1500A274: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1500A278: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1500A27C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1500A280: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1500A284: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1500A288: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500A28C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1500A290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1500A294: jal         0x15162FAC
    // 0x1500A298: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_15162FAC(rdram, ctx);
        goto after_0;
    // 0x1500A298: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x1500A29C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1500A2A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1500A2A4: jr          $ra
    // 0x1500A2A8: nop

    return;
    return;
    // 0x1500A2A8: nop

;}
RECOMP_FUNC void func_1500D3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500D3AC: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x1500D3B0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1500D3B4: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x1500D3B8: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x1500D3BC: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x1500D3C0: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x1500D3C4: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x1500D3C8: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x1500D3CC: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x1500D3D0: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x1500D3D4: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x1500D3D8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x1500D3DC: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x1500D3E0: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x1500D3E4: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x1500D3E8: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x1500D3EC: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x1500D3F0: jal         0x1514462C
    // 0x1500D3F4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_1514462C(rdram, ctx);
        goto after_0;
    // 0x1500D3F4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_0:
    // 0x1500D3F8: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1500D3FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1500D400: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1500D404: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500D408: lwc1        $f6, 0x616C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X616C);
    // 0x1500D40C: addiu       $t6, $zero, 0x4D40
    ctx->r14 = ADD32(0, 0X4D40);
    // 0x1500D410: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x1500D414: mul.s       $f30, $f4, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1500D418: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1500D41C: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x1500D420: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1500D424: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1500D428: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1500D42C: addiu       $t3, $zero, 0x53
    ctx->r11 = ADD32(0, 0X53);
    // 0x1500D430: c.lt.s      $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f24.fl < ctx->f30.fl;
    // 0x1500D434: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1500D438: addiu       $s5, $sp, 0x94
    ctx->r21 = ADD32(ctx->r29, 0X94);
    // 0x1500D43C: addiu       $s4, $sp, 0x8C
    ctx->r20 = ADD32(ctx->r29, 0X8C);
    // 0x1500D440: bc1f        L_1500D888
    if (!c1cs) {
        // 0x1500D444: addiu       $s3, $sp, 0x90
        ctx->r19 = ADD32(ctx->r29, 0X90);
            goto L_1500D888;
    }
    // 0x1500D444: addiu       $s3, $sp, 0x90
    ctx->r19 = ADD32(ctx->r29, 0X90);
    // 0x1500D448: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1500D44C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1500D450: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1500D454: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1500D458: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500D45C: swc1        $f24, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f24.u32l;
    // 0x1500D460: swc1        $f24, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f24.u32l;
    // 0x1500D464: swc1        $f24, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f24.u32l;
    // 0x1500D468: swc1        $f24, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f24.u32l;
    // 0x1500D46C: swc1        $f24, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f24.u32l;
    // 0x1500D470: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x1500D474: sh          $t7, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r15;
    // 0x1500D478: sb          $zero, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = 0;
    // 0x1500D47C: sb          $t8, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r24;
    // 0x1500D480: sb          $t9, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = ctx->r25;
    // 0x1500D484: sb          $zero, 0xF6($sp)
    MEM_B(0XF6, ctx->r29) = 0;
    // 0x1500D488: sb          $zero, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = 0;
    // 0x1500D48C: sb          $zero, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = 0;
    // 0x1500D490: sb          $zero, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = 0;
    // 0x1500D494: sb          $zero, 0xFA($sp)
    MEM_B(0XFA, ctx->r29) = 0;
    // 0x1500D498: sb          $zero, 0xFB($sp)
    MEM_B(0XFB, ctx->r29) = 0;
    // 0x1500D49C: sb          $t0, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r8;
    // 0x1500D4A0: sb          $zero, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = 0;
    // 0x1500D4A4: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x1500D4A8: sb          $zero, 0x104($sp)
    MEM_B(0X104, ctx->r29) = 0;
    // 0x1500D4AC: sh          $t1, 0x106($sp)
    MEM_H(0X106, ctx->r29) = ctx->r9;
    // 0x1500D4B0: sh          $t2, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r10;
    // 0x1500D4B4: sh          $t3, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = ctx->r11;
    // 0x1500D4B8: lwc1        $f22, 0x6170($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6170);
    // 0x1500D4BC: addiu       $s2, $sp, 0xC4
    ctx->r18 = ADD32(ctx->r29, 0XC4);
    // 0x1500D4C0: addiu       $s1, $sp, 0xBC
    ctx->r17 = ADD32(ctx->r29, 0XBC);
    // 0x1500D4C4: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    // 0x1500D4C8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_1500D4CC:
    // 0x1500D4CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x1500D4D0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x1500D4D4: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x1500D4D8: jal         0x15008340
    // 0x1500D4DC: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_15008340(rdram, ctx);
        goto after_1;
    // 0x1500D4DC: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_1:
    // 0x1500D4E0: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1500D4E4: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x1500D4E8: jal         0x10024770
    // 0x1500D4EC: sub.s       $f20, $f10, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f14.fl;
    osGetCount_recomp(rdram, ctx);
        goto after_2;
    // 0x1500D4EC: sub.s       $f20, $f10, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f14.fl;
    after_2:
    // 0x1500D4F0: jal         0x150ADA20
    // 0x1500D4F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1500D4F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_3:
    // 0x1500D4F8: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500D4FC: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1500D500: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500D504: mflo        $t4
    ctx->r12 = lo;
    // 0x1500D508: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x1500D50C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x1500D510: bgez        $t5, L_1500D524
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1500D514: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1500D524;
    }
    // 0x1500D514: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1500D518: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500D51C: nop

    // 0x1500D520: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_1500D524:
    // 0x1500D524: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1500D528: mul.s       $f6, $f18, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x1500D52C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500D530: nop

    // 0x1500D534: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x1500D538: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x1500D53C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1500D540: nop

    // 0x1500D544: mul.s       $f4, $f20, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x1500D548: add.s       $f18, $f14, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x1500D54C: add.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1500D550: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    // 0x1500D554: sub.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x1500D558: abs.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = fabsf(ctx->f0.fl);
    // 0x1500D55C: sub.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x1500D560: swc1        $f2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
    // 0x1500D564: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1500D568: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x1500D56C: nop

    // 0x1500D570: bc1fl       L_1500D584
    if (!c1cs) {
        // 0x1500D574: mov.s       $f20, $f12
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
            goto L_1500D584;
    }
    goto skip_0;
    // 0x1500D574: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    skip_0:
    // 0x1500D578: b           L_1500D584
    // 0x1500D57C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_1500D584;
    // 0x1500D57C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1500D580: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
L_1500D584:
    // 0x1500D584: jal         0x10024770
    // 0x1500D588: nop

    osGetCount_recomp(rdram, ctx);
        goto after_4;
    // 0x1500D588: nop

    after_4:
    // 0x1500D58C: jal         0x150ADA20
    // 0x1500D590: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1500D590: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_5:
    // 0x1500D594: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500D598: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500D59C: mflo        $t6
    ctx->r14 = lo;
    // 0x1500D5A0: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x1500D5A4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x1500D5A8: bgez        $t7, L_1500D5BC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1500D5AC: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1500D5BC;
    }
    // 0x1500D5AC: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500D5B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500D5B4: nop

    // 0x1500D5B8: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_1500D5BC:
    // 0x1500D5BC: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1500D5C0: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x1500D5C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1500D5C8: nop

    // 0x1500D5CC: mul.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1500D5D0: add.s       $f6, $f8, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x1500D5D4: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x1500D5D8: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x1500D5DC: jal         0x10024770
    // 0x1500D5E0: nop

    osGetCount_recomp(rdram, ctx);
        goto after_6;
    // 0x1500D5E0: nop

    after_6:
    // 0x1500D5E4: jal         0x150ADA20
    // 0x1500D5E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1500D5E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_7:
    // 0x1500D5EC: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500D5F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500D5F4: mflo        $t8
    ctx->r24 = lo;
    // 0x1500D5F8: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x1500D5FC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1500D600: bgez        $t9, L_1500D614
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1500D604: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1500D614;
    }
    // 0x1500D604: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500D608: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1500D60C: nop

    // 0x1500D610: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_1500D614:
    // 0x1500D614: mul.s       $f0, $f16, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x1500D618: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500D61C: lwc1        $f6, 0x6174($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6174);
    // 0x1500D620: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x1500D624: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1500D628: jal         0x10024770
    // 0x1500D62C: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_8;
    // 0x1500D62C: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x1500D630: jal         0x150ADA20
    // 0x1500D634: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x1500D634: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_9:
    // 0x1500D638: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500D63C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500D640: mflo        $t0
    ctx->r8 = lo;
    // 0x1500D644: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x1500D648: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1500D64C: bgez        $t1, L_1500D660
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1500D650: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1500D660;
    }
    // 0x1500D650: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500D654: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1500D658: nop

    // 0x1500D65C: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
L_1500D660:
    // 0x1500D660: mul.s       $f8, $f18, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x1500D664: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500D668: lwc1        $f6, 0x6178($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6178);
    // 0x1500D66C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500D670: lwc1        $f10, 0x617C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X617C);
    // 0x1500D674: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1500D678: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1500D67C: jal         0x10024770
    // 0x1500D680: swc1        $f16, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f16.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_10;
    // 0x1500D680: swc1        $f16, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x1500D684: jal         0x150ADA20
    // 0x1500D688: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x1500D688: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_11:
    // 0x1500D68C: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500D690: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500D694: mflo        $t2
    ctx->r10 = lo;
    // 0x1500D698: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x1500D69C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x1500D6A0: bgez        $t3, L_1500D6B4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x1500D6A4: cvt.s.w     $f8, $f18
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
            goto L_1500D6B4;
    }
    // 0x1500D6A4: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1500D6A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500D6AC: nop

    // 0x1500D6B0: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_1500D6B4:
    // 0x1500D6B4: mul.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x1500D6B8: nop

    // 0x1500D6BC: mul.s       $f10, $f4, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x1500D6C0: jal         0x10024770
    // 0x1500D6C4: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_12;
    // 0x1500D6C4: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x1500D6C8: jal         0x150ADA20
    // 0x1500D6CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x1500D6CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_13:
    // 0x1500D6D0: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500D6D4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500D6D8: mflo        $t4
    ctx->r12 = lo;
    // 0x1500D6DC: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x1500D6E0: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x1500D6E4: bgez        $t5, L_1500D6F8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1500D6E8: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1500D6F8;
    }
    // 0x1500D6E8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1500D6EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500D6F0: nop

    // 0x1500D6F4: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
L_1500D6F8:
    // 0x1500D6F8: mul.s       $f8, $f18, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x1500D6FC: nop

    // 0x1500D700: mul.s       $f4, $f8, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x1500D704: jal         0x10024770
    // 0x1500D708: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_14;
    // 0x1500D708: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x1500D70C: jal         0x150ADA20
    // 0x1500D710: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x1500D710: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_15:
    // 0x1500D714: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500D718: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500D71C: mflo        $t6
    ctx->r14 = lo;
    // 0x1500D720: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x1500D724: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x1500D728: bgez        $t7, L_1500D73C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1500D72C: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1500D73C;
    }
    // 0x1500D72C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500D730: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500D734: nop

    // 0x1500D738: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_1500D73C:
    // 0x1500D73C: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x1500D740: nop

    // 0x1500D744: mul.s       $f8, $f18, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x1500D748: jal         0x10024770
    // 0x1500D74C: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_16;
    // 0x1500D74C: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x1500D750: jal         0x150ADA20
    // 0x1500D754: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x1500D754: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_17:
    // 0x1500D758: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500D75C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500D760: mflo        $t8
    ctx->r24 = lo;
    // 0x1500D764: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x1500D768: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1500D76C: bgez        $t9, L_1500D780
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1500D770: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1500D780;
    }
    // 0x1500D770: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500D774: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500D778: nop

    // 0x1500D77C: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_1500D780:
    // 0x1500D780: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1500D784: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500D788: lwc1        $f18, 0x6180($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6180);
    // 0x1500D78C: mul.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1500D790: jal         0x10024770
    // 0x1500D794: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_18;
    // 0x1500D794: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    after_18:
    // 0x1500D798: jal         0x150ADA20
    // 0x1500D79C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_19;
    // 0x1500D79C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_19:
    // 0x1500D7A0: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500D7A4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500D7A8: mflo        $t0
    ctx->r8 = lo;
    // 0x1500D7AC: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x1500D7B0: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x1500D7B4: bgez        $t1, L_1500D7C8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1500D7B8: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1500D7C8;
    }
    // 0x1500D7B8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500D7BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1500D7C0: nop

    // 0x1500D7C4: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_1500D7C8:
    // 0x1500D7C8: mul.s       $f16, $f6, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x1500D7CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500D7D0: lwc1        $f18, 0x6184($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6184);
    // 0x1500D7D4: mul.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1500D7D8: jal         0x10024770
    // 0x1500D7DC: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_20;
    // 0x1500D7DC: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    after_20:
    // 0x1500D7E0: jal         0x150ADA20
    // 0x1500D7E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_21;
    // 0x1500D7E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_21:
    // 0x1500D7E8: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500D7EC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500D7F0: mflo        $t2
    ctx->r10 = lo;
    // 0x1500D7F4: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x1500D7F8: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1500D7FC: bgez        $t3, L_1500D810
    if (SIGNED(ctx->r11) >= 0) {
        // 0x1500D800: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1500D810;
    }
    // 0x1500D800: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500D804: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500D808: nop

    // 0x1500D80C: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_1500D810:
    // 0x1500D810: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1500D814: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1500D818: mul.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f26.fl);
    // 0x1500D81C: add.s       $f0, $f18, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f24.fl;
    // 0x1500D820: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x1500D824: jal         0x1510F800
    // 0x1500D828: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    func_1510F800(rdram, ctx);
        goto after_22;
    // 0x1500D828: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    after_22:
    // 0x1500D82C: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1500D830: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x1500D834: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1500D838: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1500D83C: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x1500D840: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x1500D844: jal         0x1510FD20
    // 0x1500D848: nop

    func_1510FD20(rdram, ctx);
        goto after_23;
    // 0x1500D848: nop

    after_23:
    // 0x1500D84C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1500D850: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500D854: sw          $v0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r2;
    // 0x1500D858: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1500D85C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500D860: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1500D864: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1500D868: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1500D86C: jal         0x15132A4C
    // 0x1500D870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15132A4C(rdram, ctx);
        goto after_24;
    // 0x1500D870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_24:
    // 0x1500D874: sub.s       $f30, $f30, $f24
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f30.fl = ctx->f30.fl - ctx->f24.fl;
    // 0x1500D878: c.lt.s      $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f24.fl < ctx->f30.fl;
    // 0x1500D87C: nop

    // 0x1500D880: bc1tl       L_1500D4CC
    if (c1cs) {
        // 0x1500D884: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_1500D4CC;
    }
    goto skip_1;
    // 0x1500D884: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_1:
L_1500D888:
    // 0x1500D888: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x1500D88C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1500D890: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1500D894: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1500D898: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x1500D89C: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x1500D8A0: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x1500D8A4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1500D8A8: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x1500D8AC: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x1500D8B0: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x1500D8B4: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x1500D8B8: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x1500D8BC: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x1500D8C0: jr          $ra
    // 0x1500D8C4: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    return;
    // 0x1500D8C4: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_1507B178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507B17C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B180: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507B184: lbu         $t6, 0x1891($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1891);
    // 0x1507B188: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507B18C: lbu         $t8, 0x1890($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1890);
    // 0x1507B190: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507B194: lbu         $v0, 0x1893($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1893);
    // 0x1507B198: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x1507B19C: or          $v1, $t7, $t8
    ctx->r3 = ctx->r15 | ctx->r24;
    // 0x1507B1A0: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x1507B1A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1507B1A8: bne         $v0, $at, L_1507B1D8
    if (ctx->r2 != ctx->r1) {
        // 0x1507B1AC: sra         $v1, $t9, 16
        ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
            goto L_1507B1D8;
    }
    // 0x1507B1AC: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1507B1B0: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x1507B1B4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507B1B8: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1507B1BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1507B1C0: lwc1        $f8, 0x150($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X150);
    // 0x1507B1C4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1507B1C8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1507B1CC: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x1507B1D0: b           L_1507B224
    // 0x1507B1D4: sh          $t2, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r10;
        goto L_1507B224;
    // 0x1507B1D4: sh          $t2, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r10;
L_1507B1D8:
    // 0x1507B1D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1507B1DC: bnel        $v0, $at, L_1507B20C
    if (ctx->r2 != ctx->r1) {
        // 0x1507B1E0: mtc1        $v1, $f4
        ctx->f4.u32l = ctx->r3;
            goto L_1507B20C;
    }
    goto skip_0;
    // 0x1507B1E0: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    skip_0:
    // 0x1507B1E4: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x1507B1E8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B1EC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507B1F0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1507B1F4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x1507B1F8: jal         0x15062B50
    // 0x1507B1FC: nop

    func_15062B50(rdram, ctx);
        goto after_0;
    // 0x1507B1FC: nop

    after_0:
    // 0x1507B200: b           L_1507B228
    // 0x1507B204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1507B228;
    // 0x1507B204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507B208: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
L_1507B20C:
    // 0x1507B20C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B210: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507B214: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1507B218: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x1507B21C: jal         0x15062B1C
    // 0x1507B220: nop

    func_15062B1C(rdram, ctx);
        goto after_1;
    // 0x1507B220: nop

    after_1:
L_1507B224:
    // 0x1507B224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507B228:
    // 0x1507B228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507B22C: jr          $ra
    // 0x1507B230: nop

    return;
    return;
    // 0x1507B230: nop

;}
RECOMP_FUNC void func_15106540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15106540: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15106544: nop

    // 0x15106548: mul.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1510654C: nop

    // 0x15106550: jr          $ra
    // 0x15106554: nop

    return;
    return;
    // 0x15106554: nop

;}
RECOMP_FUNC void func_1505E650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505E650: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1505E654: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1505E658: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x1505E65C: lhu         $a3, 0x4E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X4E);
    // 0x1505E660: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1505E664: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1505E668: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1505E66C: lbu         $t6, 0x3638($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3638);
    // 0x1505E670: lbu         $a2, 0x4($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X4);
    // 0x1505E674: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1505E678: beql        $t6, $zero, L_1505E6B8
    if (ctx->r14 == 0) {
        // 0x1505E67C: lbu         $v1, 0x4($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X4);
            goto L_1505E6B8;
    }
    goto skip_0;
    // 0x1505E67C: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    skip_0:
    // 0x1505E680: lbu         $t7, 0x3654($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3654);
    // 0x1505E684: beql        $t7, $zero, L_1505E7C0
    if (ctx->r15 == 0) {
        // 0x1505E688: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1505E7C0;
    }
    goto skip_1;
    // 0x1505E688: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x1505E68C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x1505E690: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1505E694: sh          $a3, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r7;
    // 0x1505E698: jal         0x150229E4
    // 0x1505E69C: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    func_150229E4(rdram, ctx);
        goto after_0;
    // 0x1505E69C: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x1505E6A0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1505E6A4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x1505E6A8: lhu         $a3, 0x4E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X4E);
    // 0x1505E6AC: bne         $v0, $zero, L_1505E7BC
    if (ctx->r2 != 0) {
        // 0x1505E6B0: lwc1        $f12, 0x54($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
            goto L_1505E7BC;
    }
    // 0x1505E6B0: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1505E6B4: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
L_1505E6B8:
    // 0x1505E6B8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1505E6BC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1505E6C0: beq         $v1, $at, L_1505E7BC
    if (ctx->r3 == ctx->r1) {
        // 0x1505E6C4: addiu       $a1, $a1, 0x5A90
        ctx->r5 = ADD32(ctx->r5, 0X5A90);
            goto L_1505E7BC;
    }
    // 0x1505E6C4: addiu       $a1, $a1, 0x5A90
    ctx->r5 = ADD32(ctx->r5, 0X5A90);
    // 0x1505E6C8: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x1505E6CC: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x1505E6D0: lhu         $v0, 0x0($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X0);
    // 0x1505E6D4: beql        $v0, $zero, L_1505E7C0
    if (ctx->r2 == 0) {
        // 0x1505E6D8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1505E7C0;
    }
    goto skip_2;
    // 0x1505E6D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x1505E6DC: lw          $t0, 0x2D0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X2D0);
    // 0x1505E6E0: beq         $t0, $zero, L_1505E7BC
    if (ctx->r8 == 0) {
        // 0x1505E6E4: sw          $t0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r8;
            goto L_1505E7BC;
    }
    // 0x1505E6E4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1505E6E8: beq         $v0, $zero, L_1505E7BC
    if (ctx->r2 == 0) {
        // 0x1505E6EC: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_1505E7BC;
    }
    // 0x1505E6EC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1505E6F0: beq         $at, $zero, L_1505E7BC
    if (ctx->r1 == 0) {
        // 0x1505E6F4: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_1505E7BC;
    }
    // 0x1505E6F4: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x1505E6F8: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x1505E6FC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1505E700: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x1505E704: lw          $v0, 0x1588($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1588);
    // 0x1505E708: sll         $t3, $a2, 1
    ctx->r11 = S32(ctx->r6 << 1);
    // 0x1505E70C: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x1505E710: bnel        $v0, $zero, L_1505E72C
    if (ctx->r2 != 0) {
        // 0x1505E714: lhu         $t5, 0x0($t4)
        ctx->r13 = MEM_HU(ctx->r12, 0X0);
            goto L_1505E72C;
    }
    goto skip_3;
    // 0x1505E714: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    skip_3:
    // 0x1505E718: jal         0x1505DFDC
    // 0x1505E71C: nop

    func_1505DFDC(rdram, ctx);
        goto after_1;
    // 0x1505E71C: nop

    after_1:
    // 0x1505E720: b           L_1505E7C0
    // 0x1505E724: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_1505E7C0;
    // 0x1505E724: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1505E728: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
L_1505E72C:
    // 0x1505E72C: slt         $at, $v1, $t5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x1505E730: beql        $at, $zero, L_1505E7C0
    if (ctx->r1 == 0) {
        // 0x1505E734: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1505E7C0;
    }
    goto skip_4;
    // 0x1505E734: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_4:
    // 0x1505E738: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x1505E73C: addiu       $a2, $zero, 0x3E7
    ctx->r6 = ADD32(0, 0X3E7);
    // 0x1505E740: sll         $t7, $a3, 3
    ctx->r15 = S32(ctx->r7 << 3);
    // 0x1505E744: beq         $a2, $t6, L_1505E7BC
    if (ctx->r6 == ctx->r14) {
        // 0x1505E748: addu        $a1, $v0, $t7
        ctx->r5 = ADD32(ctx->r2, ctx->r15);
            goto L_1505E7BC;
    }
    // 0x1505E748: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
    // 0x1505E74C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x1505E750: beq         $a2, $v0, L_1505E7BC
    if (ctx->r6 == ctx->r2) {
        // 0x1505E754: slti        $at, $v0, 0x7530
        ctx->r1 = SIGNED(ctx->r2) < 0X7530 ? 1 : 0;
            goto L_1505E7BC;
    }
    // 0x1505E754: slti        $at, $v0, 0x7530
    ctx->r1 = SIGNED(ctx->r2) < 0X7530 ? 1 : 0;
    // 0x1505E758: bne         $at, $zero, L_1505E770
    if (ctx->r1 != 0) {
        // 0x1505E75C: lw          $a2, 0x38($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X38);
            goto L_1505E770;
    }
    // 0x1505E75C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x1505E760: jal         0x1505DFDC
    // 0x1505E764: nop

    func_1505DFDC(rdram, ctx);
        goto after_2;
    // 0x1505E764: nop

    after_2:
    // 0x1505E768: b           L_1505E7C0
    // 0x1505E76C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_1505E7C0;
    // 0x1505E76C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1505E770:
    // 0x1505E770: lbu         $t8, 0x2FF($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2FF);
    // 0x1505E774: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1505E778: bnel        $t8, $zero, L_1505E78C
    if (ctx->r24 != 0) {
        // 0x1505E77C: lwc1        $f4, 0x50($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
            goto L_1505E78C;
    }
    goto skip_5;
    // 0x1505E77C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    skip_5:
    // 0x1505E780: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1505E784: nop

    // 0x1505E788: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
L_1505E78C:
    // 0x1505E78C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1505E790: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1505E794: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x1505E798: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1505E79C: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x1505E7A0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1505E7A4: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x1505E7A8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x1505E7AC: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x1505E7B0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x1505E7B4: jal         0x1505E0C4
    // 0x1505E7B8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    func_1505E0C4(rdram, ctx);
        goto after_3;
    // 0x1505E7B8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    after_3:
L_1505E7BC:
    // 0x1505E7BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1505E7C0:
    // 0x1505E7C0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1505E7C4: jr          $ra
    // 0x1505E7C8: nop

    return;
    return;
    // 0x1505E7C8: nop

;}
RECOMP_FUNC void func_15147040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15147040: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15147044: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15147048: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1514704C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x15147050: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x15147054: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x15147058: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x1514705C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x15147060: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x15147064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15147068: beql        $t7, $zero, L_151470F0
    if (ctx->r15 == 0) {
        // 0x1514706C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_151470F0;
    }
    goto skip_0;
    // 0x1514706C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x15147070: jal         0x15146890
    // 0x15147074: lbu         $a3, 0x57($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X57);
    func_15146890(rdram, ctx);
        goto after_0;
    // 0x15147074: lbu         $a3, 0x57($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X57);
    after_0:
    // 0x15147078: jal         0x150ADA20
    // 0x1514707C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1514707C: nop

    after_1:
    // 0x15147080: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x15147084: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15147088: mfhi        $t8
    ctx->r24 = hi;
    // 0x1514708C: addiu       $t9, $t8, 0x5
    ctx->r25 = ADD32(ctx->r24, 0X5);
    // 0x15147090: jal         0x150ADA68
    // 0x15147094: sh          $t9, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r25;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x15147094: sh          $t9, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r25;
    after_2:
    // 0x15147098: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x1514709C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151470A0: lh          $t1, 0x42($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X42);
    // 0x151470A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151470A8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151470AC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151470B0: addiu       $t2, $zero, 0x16
    ctx->r10 = ADD32(0, 0X16);
    // 0x151470B4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151470B8: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x151470BC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x151470C0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x151470C4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x151470C8: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151470CC: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151470D0: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x151470D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151470D8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151470DC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151470E0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x151470E4: jal         0x1514C678
    // 0x151470E8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_1514C678(rdram, ctx);
        goto after_3;
    // 0x151470E8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x151470EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_151470F0:
    // 0x151470F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151470F4: jr          $ra
    // 0x151470F8: nop

    return;
    return;
    // 0x151470F8: nop

;}
RECOMP_FUNC void func_150DDFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DDFAC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x150DDFB0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150DDFB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150DDFB8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150DDFBC: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x150DDFC0: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x150DDFC4: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x150DDFC8: lw          $t6, 0x98($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X98);
    // 0x150DDFCC: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x150DDFD0: lw          $t7, 0x94($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X94);
    // 0x150DDFD4: jal         0x150ADA68
    // 0x150DDFD8: sw          $t7, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r15;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150DDFD8: sw          $t7, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r15;
    after_0:
    // 0x150DDFDC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x150DDFE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150DDFE4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150DDFE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150DDFEC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150DDFF0: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x150DDFF4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x150DDFF8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150DDFFC: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x150DE000: jal         0x150ADA20
    // 0x150DE004: sb          $t8, 0x20($t9)
    MEM_B(0X20, ctx->r25) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150DE004: sb          $t8, 0x20($t9)
    MEM_B(0X20, ctx->r25) = ctx->r24;
    after_1:
    // 0x150DE008: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x150DE00C: beq         $v1, $zero, L_150DE028
    if (ctx->r3 == 0) {
        // 0x150DE010: addiu       $t2, $zero, 0x11
        ctx->r10 = ADD32(0, 0X11);
            goto L_150DE028;
    }
    // 0x150DE010: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x150DE014: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150DE018: beq         $v1, $at, L_150DE034
    if (ctx->r3 == ctx->r1) {
        // 0x150DE01C: addiu       $t1, $zero, 0x1E
        ctx->r9 = ADD32(0, 0X1E);
            goto L_150DE034;
    }
    // 0x150DE01C: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x150DE020: b           L_150DE03C
    // 0x150DE024: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
        goto L_150DE03C;
    // 0x150DE024: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
L_150DE028:
    // 0x150DE028: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x150DE02C: b           L_150DE038
    // 0x150DE030: sb          $t0, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r8;
        goto L_150DE038;
    // 0x150DE030: sb          $t0, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r8;
L_150DE034:
    // 0x150DE034: sb          $t1, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r9;
L_150DE038:
    // 0x150DE038: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
L_150DE03C:
    // 0x150DE03C: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x150DE040: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150DE044: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150DE048: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150DE04C: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x150DE050: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x150DE054: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x150DE058: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x150DE05C: sh          $t3, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r11;
    // 0x150DE060: sb          $t4, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r12;
    // 0x150DE064: sb          $t5, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r13;
    // 0x150DE068: sb          $zero, 0x72($sp)
    MEM_B(0X72, ctx->r29) = 0;
    // 0x150DE06C: sb          $zero, 0x73($sp)
    MEM_B(0X73, ctx->r29) = 0;
    // 0x150DE070: sb          $zero, 0x74($sp)
    MEM_B(0X74, ctx->r29) = 0;
    // 0x150DE074: sb          $t6, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r14;
    // 0x150DE078: jal         0x150ADA20
    // 0x150DE07C: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150DE07C: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    after_2:
    // 0x150DE080: jal         0x150ADA20
    // 0x150DE084: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150DE084: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_3:
    // 0x150DE088: jal         0x150ADA20
    // 0x150DE08C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150DE08C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_4:
    // 0x150DE090: lb          $t9, 0x2D($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X2D);
    // 0x150DE094: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x150DE098: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150DE09C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x150DE0A0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x150DE0A4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150DE0A8: addu        $v1, $t8, $t0
    ctx->r3 = ADD32(ctx->r24, ctx->r8);
    // 0x150DE0AC: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150DE0B0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x150DE0B4: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x150DE0B8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x150DE0BC: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150DE0C0: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150DE0C4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x150DE0C8: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x150DE0CC: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x150DE0D0: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x150DE0D4: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x150DE0D8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x150DE0DC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x150DE0E0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150DE0E4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x150DE0E8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x150DE0EC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150DE0F0: lbu         $t7, 0xC($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC);
    // 0x150DE0F4: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x150DE0F8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x150DE0FC: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x150DE100: lbu         $t9, 0x1($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1);
    // 0x150DE104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150DE108: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x150DE10C: jal         0x1513C73C
    // 0x150DE110: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    func_1513C73C(rdram, ctx);
        goto after_5;
    // 0x150DE110: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    after_5:
    // 0x150DE114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150DE118: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150DE11C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x150DE120: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x150DE124: jr          $ra
    // 0x150DE128: nop

    return;
    return;
    // 0x150DE128: nop

;}
RECOMP_FUNC void func_151BEB20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BEB20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151BEB24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151BEB28: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151BEB2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151BEB30: addiu       $t0, $t0, -0x1640
    ctx->r8 = ADD32(ctx->r8, -0X1640);
    // 0x151BEB34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151BEB38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151BEB3C: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEB40: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x151BEB44: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x151BEB48: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x151BEB4C: addu        $a0, $s0, $t7
    ctx->r4 = ADD32(ctx->r16, ctx->r15);
    // 0x151BEB50: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    // 0x151BEB54: jal         0x150A8050
    // 0x151BEB58: lw          $a2, 0x120($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X120);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x151BEB58: lw          $a2, 0x120($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X120);
    after_0:
    // 0x151BEB5C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151BEB60: addiu       $t0, $t0, -0x1640
    ctx->r8 = ADD32(ctx->r8, -0X1640);
    // 0x151BEB64: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEB68: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x151BEB6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BEB70: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x151BEB74: lwc1        $f0, -0x5720($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5720);
    // 0x151BEB78: addu        $t1, $s0, $t9
    ctx->r9 = ADD32(ctx->r16, ctx->r25);
    // 0x151BEB7C: swc1        $f4, 0xAC($t1)
    MEM_W(0XAC, ctx->r9) = ctx->f4.u32l;
    // 0x151BEB80: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEB84: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x151BEB88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151BEB8C: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x151BEB90: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x151BEB94: swc1        $f6, 0xB0($t4)
    MEM_W(0XB0, ctx->r12) = ctx->f6.u32l;
    // 0x151BEB98: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEB9C: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x151BEBA0: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x151BEBA4: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x151BEBA8: swc1        $f8, 0xB4($t7)
    MEM_W(0XB4, ctx->r15) = ctx->f8.u32l;
    // 0x151BEBAC: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEBB0: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x151BEBB4: addu        $v1, $s0, $t9
    ctx->r3 = ADD32(ctx->r16, ctx->r25);
    // 0x151BEBB8: lwc1        $f10, 0x7C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X7C);
    // 0x151BEBBC: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151BEBC0: swc1        $f16, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = ctx->f16.u32l;
    // 0x151BEBC4: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEBC8: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x151BEBCC: addu        $v1, $s0, $t2
    ctx->r3 = ADD32(ctx->r16, ctx->r10);
    // 0x151BEBD0: lwc1        $f18, 0x80($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X80);
    // 0x151BEBD4: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151BEBD8: swc1        $f4, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->f4.u32l;
    // 0x151BEBDC: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEBE0: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x151BEBE4: addu        $v1, $s0, $t4
    ctx->r3 = ADD32(ctx->r16, ctx->r12);
    // 0x151BEBE8: lwc1        $f6, 0x84($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X84);
    // 0x151BEBEC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151BEBF0: swc1        $f8, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->f8.u32l;
    // 0x151BEBF4: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEBF8: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x151BEBFC: addu        $v1, $s0, $t6
    ctx->r3 = ADD32(ctx->r16, ctx->r14);
    // 0x151BEC00: lwc1        $f10, 0x8C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8C);
    // 0x151BEC04: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151BEC08: swc1        $f16, 0x8C($v1)
    MEM_W(0X8C, ctx->r3) = ctx->f16.u32l;
    // 0x151BEC0C: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEC10: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x151BEC14: addu        $v1, $s0, $t8
    ctx->r3 = ADD32(ctx->r16, ctx->r24);
    // 0x151BEC18: lwc1        $f18, 0x90($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X90);
    // 0x151BEC1C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151BEC20: swc1        $f4, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->f4.u32l;
    // 0x151BEC24: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEC28: sll         $t1, $t9, 6
    ctx->r9 = S32(ctx->r25 << 6);
    // 0x151BEC2C: addu        $v1, $s0, $t1
    ctx->r3 = ADD32(ctx->r16, ctx->r9);
    // 0x151BEC30: lwc1        $f6, 0x94($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X94);
    // 0x151BEC34: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151BEC38: swc1        $f8, 0x94($v1)
    MEM_W(0X94, ctx->r3) = ctx->f8.u32l;
    // 0x151BEC3C: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEC40: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x151BEC44: addu        $v1, $s0, $t3
    ctx->r3 = ADD32(ctx->r16, ctx->r11);
    // 0x151BEC48: lwc1        $f10, 0x9C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X9C);
    // 0x151BEC4C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151BEC50: swc1        $f16, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->f16.u32l;
    // 0x151BEC54: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEC58: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x151BEC5C: addu        $v1, $s0, $t5
    ctx->r3 = ADD32(ctx->r16, ctx->r13);
    // 0x151BEC60: lwc1        $f18, 0xA0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XA0);
    // 0x151BEC64: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151BEC68: swc1        $f4, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->f4.u32l;
    // 0x151BEC6C: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x151BEC70: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x151BEC74: addu        $v1, $s0, $t7
    ctx->r3 = ADD32(ctx->r16, ctx->r15);
    // 0x151BEC78: lwc1        $f6, 0xA4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XA4);
    // 0x151BEC7C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151BEC80: swc1        $f8, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->f8.u32l;
    // 0x151BEC84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151BEC88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151BEC8C: jr          $ra
    // 0x151BEC90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151BEC90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1501CE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501CE54: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501CE58: addiu       $t6, $t6, 0x3640
    ctx->r14 = ADD32(ctx->r14, 0X3640);
    // 0x1501CE5C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x1501CE60: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x1501CE64: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1501CE68: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x1501CE6C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x1501CE70: lbu         $a1, 0x363A($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X363A);
    // 0x1501CE74: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1501CE78: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x1501CE7C: beq         $a1, $zero, L_1501CFF0
    if (ctx->r5 == 0) {
        // 0x1501CE80: nop
    
            goto L_1501CFF0;
    }
    // 0x1501CE80: nop

    // 0x1501CE84: lw          $a2, 0x35D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X35D8);
    // 0x1501CE88: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x1501CE8C: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1501CE90: lhu         $t7, 0x0($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X0);
    // 0x1501CE94: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x1501CE98: addiu       $t4, $t4, 0x3688
    ctx->r12 = ADD32(ctx->r12, 0X3688);
    // 0x1501CE9C: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x1501CEA0: bne         $at, $zero, L_1501CEC8
    if (ctx->r1 != 0) {
        // 0x1501CEA4: sll         $t8, $t8, 3
        ctx->r24 = S32(ctx->r24 << 3);
            goto L_1501CEC8;
    }
    // 0x1501CEA4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1501CEA8: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x1501CEAC: lw          $t5, 0x0($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X0);
    // 0x1501CEB0: addiu       $at, $zero, -0x270F
    ctx->r1 = ADD32(0, -0X270F);
    // 0x1501CEB4: lh          $a3, 0x12($t5)
    ctx->r7 = MEM_H(ctx->r13, 0X12);
    // 0x1501CEB8: beq         $a3, $at, L_1501CEC8
    if (ctx->r7 == ctx->r1) {
        // 0x1501CEBC: nop
    
            goto L_1501CEC8;
    }
    // 0x1501CEBC: nop

    // 0x1501CEC0: jr          $ra
    // 0x1501CEC4: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    return;
    return;
    // 0x1501CEC4: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
L_1501CEC8:
    // 0x1501CEC8: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1501CECC: addiu       $t4, $t4, 0x3688
    ctx->r12 = ADD32(ctx->r12, 0X3688);
    // 0x1501CED0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1501CED4: blez        $a1, L_1501CF50
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1501CED8: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_1501CF50;
    }
    // 0x1501CED8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1501CEDC: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1501CEE0: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x1501CEE4: lw          $t2, 0x35C8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X35C8);
    // 0x1501CEE8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_1501CEEC:
    // 0x1501CEEC: lhu         $t6, 0x0($t2)
    ctx->r14 = MEM_HU(ctx->r10, 0X0);
    // 0x1501CEF0: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x1501CEF4: addu        $t7, $a2, $t1
    ctx->r15 = ADD32(ctx->r6, ctx->r9);
    // 0x1501CEF8: beql        $t6, $zero, L_1501CF44
    if (ctx->r14 == 0) {
        // 0x1501CEFC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_1501CF44;
    }
    goto skip_0;
    // 0x1501CEFC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_0:
    // 0x1501CF00: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x1501CF04: sll         $t9, $a0, 4
    ctx->r25 = S32(ctx->r4 << 4);
    // 0x1501CF08: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x1501CF0C: beq         $t8, $zero, L_1501CF40
    if (ctx->r24 == 0) {
        // 0x1501CF10: sll         $t9, $t9, 3
        ctx->r25 = S32(ctx->r25 << 3);
            goto L_1501CF40;
    }
    // 0x1501CF10: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x1501CF14: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x1501CF18: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x1501CF1C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x1501CF20: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1501CF24: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1501CF28: lh          $t3, 0xA($t8)
    ctx->r11 = MEM_H(ctx->r24, 0XA);
    // 0x1501CF2C: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x1501CF30: beql        $at, $zero, L_1501CF44
    if (ctx->r1 == 0) {
        // 0x1501CF34: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_1501CF44;
    }
    goto skip_1;
    // 0x1501CF34: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_1:
    // 0x1501CF38: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x1501CF3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_1501CF40:
    // 0x1501CF40: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_1501CF44:
    // 0x1501CF44: slt         $at, $t0, $a1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1501CF48: bne         $at, $zero, L_1501CEEC
    if (ctx->r1 != 0) {
        // 0x1501CF4C: addiu       $t1, $t1, 0x2
        ctx->r9 = ADD32(ctx->r9, 0X2);
            goto L_1501CEEC;
    }
    // 0x1501CF4C: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
L_1501CF50:
    // 0x1501CF50: bne         $a3, $zero, L_1501CFF0
    if (ctx->r7 != 0) {
        // 0x1501CF54: nop
    
            goto L_1501CFF0;
    }
    // 0x1501CF54: nop

    // 0x1501CF58: blez        $a1, L_1501CFF0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1501CF5C: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_1501CFF0;
    }
    // 0x1501CF5C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1501CF60: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1501CF64: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x1501CF68: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1501CF6C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1501CF70: addiu       $t3, $t3, 0x35D0
    ctx->r11 = ADD32(ctx->r11, 0X35D0);
    // 0x1501CF74: addiu       $t4, $t4, 0x3778
    ctx->r12 = ADD32(ctx->r12, 0X3778);
    // 0x1501CF78: lw          $t2, 0x35C8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X35C8);
    // 0x1501CF7C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_1501CF80:
    // 0x1501CF80: lhu         $t5, 0x0($t2)
    ctx->r13 = MEM_HU(ctx->r10, 0X0);
    // 0x1501CF84: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x1501CF88: addu        $t6, $t3, $v0
    ctx->r14 = ADD32(ctx->r11, ctx->r2);
    // 0x1501CF8C: beql        $t5, $zero, L_1501CFE4
    if (ctx->r13 == 0) {
        // 0x1501CF90: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_1501CFE4;
    }
    goto skip_2;
    // 0x1501CF90: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_2:
    // 0x1501CF94: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1501CF98: sll         $t9, $a0, 4
    ctx->r25 = S32(ctx->r4 << 4);
    // 0x1501CF9C: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x1501CFA0: addu        $t8, $t7, $t1
    ctx->r24 = ADD32(ctx->r15, ctx->r9);
    // 0x1501CFA4: lhu         $a2, 0x0($t8)
    ctx->r6 = MEM_HU(ctx->r24, 0X0);
    // 0x1501CFA8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x1501CFAC: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x1501CFB0: beq         $a2, $zero, L_1501CFE0
    if (ctx->r6 == 0) {
        // 0x1501CFB4: sll         $t6, $t0, 2
        ctx->r14 = S32(ctx->r8 << 2);
            goto L_1501CFE0;
    }
    // 0x1501CFB4: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x1501CFB8: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x1501CFBC: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1501CFC0: sll         $t9, $a2, 3
    ctx->r25 = S32(ctx->r6 << 3);
    // 0x1501CFC4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1501CFC8: addu        $t5, $t8, $t9
    ctx->r13 = ADD32(ctx->r24, ctx->r25);
    // 0x1501CFCC: lh          $a3, -0x2($t5)
    ctx->r7 = MEM_H(ctx->r13, -0X2);
    // 0x1501CFD0: slt         $at, $t6, $a3
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x1501CFD4: beql        $at, $zero, L_1501CFE4
    if (ctx->r1 == 0) {
        // 0x1501CFD8: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_1501CFE4;
    }
    goto skip_3;
    // 0x1501CFD8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_3:
    // 0x1501CFDC: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
L_1501CFE0:
    // 0x1501CFE0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_1501CFE4:
    // 0x1501CFE4: slt         $at, $t0, $a1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1501CFE8: bne         $at, $zero, L_1501CF80
    if (ctx->r1 != 0) {
        // 0x1501CFEC: addiu       $t1, $t1, 0x2
        ctx->r9 = ADD32(ctx->r9, 0X2);
            goto L_1501CF80;
    }
    // 0x1501CFEC: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
L_1501CFF0:
    // 0x1501CFF0: jr          $ra
    // 0x1501CFF4: nop

    return;
    return;
    // 0x1501CFF4: nop

;}
RECOMP_FUNC void func_15054A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15054A0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15054A10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15054A14: lw          $v0, 0x2D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2D0);
    // 0x15054A18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15054A1C: beql        $v0, $zero, L_15054A50
    if (ctx->r2 == 0) {
        // 0x15054A20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15054A50;
    }
    goto skip_0;
    // 0x15054A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15054A24: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15054A28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15054A2C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15054A30: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15054A34: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x15054A38: nop

    // 0x15054A3C: bc1fl       L_15054A50
    if (!c1cs) {
        // 0x15054A40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15054A50;
    }
    goto skip_1;
    // 0x15054A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15054A44: jal         0x15060F28
    // 0x15054A48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_0;
    // 0x15054A48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x15054A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15054A50:
    // 0x15054A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15054A54: jr          $ra
    // 0x15054A58: nop

    return;
    return;
    // 0x15054A58: nop

;}
RECOMP_FUNC void func_15009334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009334: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x15009338: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1500933C: addiu       $t5, $t5, 0x3098
    ctx->r13 = ADD32(ctx->r13, 0X3098);
    // 0x15009340: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15009344: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x15009348: subu        $t4, $t4, $a0
    ctx->r12 = SUB32(ctx->r12, ctx->r4);
    // 0x1500934C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15009350: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x15009354: addu        $t4, $t4, $a0
    ctx->r12 = ADD32(ctx->r12, ctx->r4);
    // 0x15009358: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1500935C: addu        $v0, $t6, $t4
    ctx->r2 = ADD32(ctx->r14, ctx->r12);
    // 0x15009360: lbu         $a1, 0x15($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X15);
    // 0x15009364: sra         $t7, $a1, 2
    ctx->r15 = S32(SIGNED(ctx->r5) >> 2);
    // 0x15009368: addiu       $t8, $t7, -0x9
    ctx->r24 = ADD32(ctx->r15, -0X9);
    // 0x1500936C: sltiu       $at, $t8, 0x10
    ctx->r1 = ctx->r24 < 0X10 ? 1 : 0;
    // 0x15009370: beq         $at, $zero, L_150095C8
    if (ctx->r1 == 0) {
        // 0x15009374: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_150095C8;
    }
    // 0x15009374: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x15009378: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1500937C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15009380: addu        $at, $at, $t8
    gpr jr_addend_15009388 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15009384: lw          $t8, 0x5B78($at)
    ctx->r24 = ADD32(ctx->r1, 0X5B78);
    // 0x15009388: jr          $t8
    // 0x1500938C: nop

    switch (jr_addend_15009388 >> 2) {
        case 0: goto L_15009390; break;
        case 1: goto L_15009390; break;
        case 2: goto L_150095C8; break;
        case 3: goto L_150095C8; break;
        case 4: goto L_150095C8; break;
        case 5: goto L_150095C8; break;
        case 6: goto L_15009538; break;
        case 7: goto L_15009390; break;
        case 8: goto L_150095C8; break;
        case 9: goto L_150095C8; break;
        case 10: goto L_150095C8; break;
        case 11: goto L_150095C8; break;
        case 12: goto L_150095C8; break;
        case 13: goto L_150095C8; break;
        case 14: goto L_150095C8; break;
        case 15: goto L_15009584; break;
        default: switch_error(__func__, 0x15009388, 0x80095B78);
    }
    // 0x1500938C: nop

L_15009390:
    // 0x15009390: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x15009394: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x15009398: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x1500939C: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x150093A0: srl         $t6, $v1, 8
    ctx->r14 = S32(U32(ctx->r3) >> 8);
    // 0x150093A4: srl         $t8, $v1, 16
    ctx->r24 = S32(U32(ctx->r3) >> 16);
    // 0x150093A8: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x150093AC: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x150093B0: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    // 0x150093B4: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x150093B8: lbu         $t6, 0x16($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X16);
    // 0x150093BC: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x150093C0: beq         $a1, $at, L_1500942C
    if (ctx->r5 == ctx->r1) {
        // 0x150093C4: sb          $t7, 0x16($v0)
        MEM_B(0X16, ctx->r2) = ctx->r15;
            goto L_1500942C;
    }
    // 0x150093C4: sb          $t7, 0x16($v0)
    MEM_B(0X16, ctx->r2) = ctx->r15;
    // 0x150093C8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x150093CC: beq         $a1, $at, L_150093E8
    if (ctx->r5 == ctx->r1) {
        // 0x150093D0: lw          $a0, 0x70($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X70);
            goto L_150093E8;
    }
    // 0x150093D0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x150093D4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x150093D8: beq         $a1, $at, L_150094C8
    if (ctx->r5 == ctx->r1) {
        // 0x150093DC: lui         $v1, 0x800E
        ctx->r3 = S32(0X800E << 16);
            goto L_150094C8;
    }
    // 0x150093DC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150093E0: b           L_150095CC
    // 0x150093E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_150095CC;
    // 0x150093E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150093E8:
    // 0x150093E8: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x150093EC: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x150093F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150093F4: jal         0x1515D4D4
    // 0x150093F8: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    func_1515D4D4(rdram, ctx);
        goto after_0;
    // 0x150093F8: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    after_0:
    // 0x150093FC: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15009400: addiu       $t5, $t5, 0x3098
    ctx->r13 = ADD32(ctx->r13, 0X3098);
    // 0x15009404: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x15009408: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1500940C: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x15009410: lw          $t0, 0x20($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X20);
    // 0x15009414: beql        $t0, $zero, L_150095CC
    if (ctx->r8 == 0) {
        // 0x15009418: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150095CC;
    }
    goto skip_0;
    // 0x15009418: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x1500941C: jal         0x1500AB5C
    // 0x15009420: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_1500AB5C(rdram, ctx);
        goto after_1;
    // 0x15009420: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x15009424: b           L_150095CC
    // 0x15009428: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_150095CC;
    // 0x15009428: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1500942C:
    // 0x1500942C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15009430: addu        $v0, $t6, $t4
    ctx->r2 = ADD32(ctx->r14, ctx->r12);
    // 0x15009434: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    // 0x15009438: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x1500943C: lw          $t0, 0x20($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X20);
    // 0x15009440: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x15009444: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x15009448: lh          $a2, 0x4($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X4);
    // 0x1500944C: srl         $t7, $a3, 8
    ctx->r15 = S32(U32(ctx->r7) >> 8);
    // 0x15009450: andi        $a3, $t7, 0xFF
    ctx->r7 = ctx->r15 & 0XFF;
    // 0x15009454: srl         $t1, $v1, 24
    ctx->r9 = S32(U32(ctx->r3) >> 24);
    // 0x15009458: srl         $t2, $v1, 31
    ctx->r10 = S32(U32(ctx->r3) >> 31);
    // 0x1500945C: andi        $t9, $t1, 0x7F
    ctx->r25 = ctx->r9 & 0X7F;
    // 0x15009460: andi        $t6, $t2, 0x1
    ctx->r14 = ctx->r10 & 0X1;
    // 0x15009464: andi        $t7, $t0, 0xFFFF
    ctx->r15 = ctx->r8 & 0XFFFF;
    // 0x15009468: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x1500946C: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x15009470: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x15009474: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x15009478: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x1500947C: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x15009480: srl         $t3, $t0, 16
    ctx->r11 = S32(U32(ctx->r8) >> 16);
    // 0x15009484: andi        $t8, $t3, 0xFFFF
    ctx->r24 = ctx->r11 & 0XFFFF;
    // 0x15009488: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x1500948C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x15009490: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x15009494: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15009498: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1500949C: jal         0x1515D5AC
    // 0x150094A0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_1515D5AC(rdram, ctx);
        goto after_2;
    // 0x150094A0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_2:
    // 0x150094A4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x150094A8: beq         $v0, $zero, L_150095C8
    if (ctx->r2 == 0) {
        // 0x150094AC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_150095C8;
    }
    // 0x150094AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150094B0: beql        $a1, $zero, L_150095CC
    if (ctx->r5 == 0) {
        // 0x150094B4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150095CC;
    }
    goto skip_1;
    // 0x150094B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x150094B8: jal         0x1500A94C
    // 0x150094BC: nop

    func_1500A94C(rdram, ctx);
        goto after_3;
    // 0x150094BC: nop

    after_3:
    // 0x150094C0: b           L_150095CC
    // 0x150094C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_150095CC;
    // 0x150094C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150094C8:
    // 0x150094C8: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x150094CC: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x150094D0: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x150094D4: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x150094D8: addiu       $v1, $v1, -0x32DC
    ctx->r3 = ADD32(ctx->r3, -0X32DC);
    // 0x150094DC: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x150094E0: sb          $t9, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r25;
    // 0x150094E4: sb          $t6, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r14;
    // 0x150094E8: addu        $v0, $t7, $t4
    ctx->r2 = ADD32(ctx->r15, ctx->r12);
    // 0x150094EC: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x150094F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150094F4: addiu       $a0, $a0, -0x32D8
    ctx->r4 = ADD32(ctx->r4, -0X32D8);
    // 0x150094F8: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x150094FC: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x15009500: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15009504: srl         $t8, $t6, 8
    ctx->r24 = S32(U32(ctx->r14) >> 8);
    // 0x15009508: sb          $t8, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r24;
    // 0x1500950C: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x15009510: srl         $t7, $t9, 16
    ctx->r15 = S32(U32(ctx->r25) >> 16);
    // 0x15009514: sb          $t7, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r15;
    // 0x15009518: lw          $t8, 0x1C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X1C);
    // 0x1500951C: srl         $t6, $t8, 24
    ctx->r14 = S32(U32(ctx->r24) >> 24);
    // 0x15009520: sb          $t6, -0x32C4($at)
    MEM_B(-0X32C4, ctx->r1) = ctx->r14;
    // 0x15009524: lw          $t7, 0x18($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X18);
    // 0x15009528: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500952C: srl         $t9, $t7, 24
    ctx->r25 = S32(U32(ctx->r15) >> 24);
    // 0x15009530: b           L_150095C8
    // 0x15009534: sb          $t9, -0x32C3($at)
    MEM_B(-0X32C3, ctx->r1) = ctx->r25;
        goto L_150095C8;
    // 0x15009534: sb          $t9, -0x32C3($at)
    MEM_B(-0X32C3, ctx->r1) = ctx->r25;
L_15009538:
    // 0x15009538: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x1500953C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15009540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15009544: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15009548: jal         0x10003C40
    // 0x1500954C: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    allocate_memory(rdram, ctx);
        goto after_4;
    // 0x1500954C: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    after_4:
    // 0x15009550: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15009554: addiu       $t5, $t5, 0x3098
    ctx->r13 = ADD32(ctx->r13, 0X3098);
    // 0x15009558: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x1500955C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15009560: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15009564: addiu       $v1, $v1, -0x3280
    ctx->r3 = ADD32(ctx->r3, -0X3280);
    // 0x15009568: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x1500956C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x15009570: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x15009574: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15009578: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x1500957C: b           L_150095CC
    // 0x15009580: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_150095CC;
    // 0x15009580: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_15009584:
    // 0x15009584: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x15009588: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1500958C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15009590: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15009594: jal         0x10003C40
    // 0x15009598: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    allocate_memory(rdram, ctx);
        goto after_5;
    // 0x15009598: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    after_5:
    // 0x1500959C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150095A0: addiu       $t5, $t5, 0x3098
    ctx->r13 = ADD32(ctx->r13, 0X3098);
    // 0x150095A4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x150095A8: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x150095AC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150095B0: addiu       $v1, $v1, -0x327C
    ctx->r3 = ADD32(ctx->r3, -0X327C);
    // 0x150095B4: addu        $t6, $t4, $t9
    ctx->r14 = ADD32(ctx->r12, ctx->r25);
    // 0x150095B8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x150095BC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x150095C0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x150095C4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_150095C8:
    // 0x150095C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150095CC:
    // 0x150095CC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x150095D0: jr          $ra
    // 0x150095D4: nop

    return;
    return;
    // 0x150095D4: nop

;}
RECOMP_FUNC void func_15079790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15079790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15079794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15079798: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507979C: lbu         $t6, 0x1892($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1892);
    // 0x150797A0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150797A4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150797A8: beq         $t6, $zero, L_150797C0
    if (ctx->r14 == 0) {
        // 0x150797AC: nop
    
            goto L_150797C0;
    }
    // 0x150797AC: nop

    // 0x150797B0: lw          $t8, 0x154C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X154C);
    // 0x150797B4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150797B8: b           L_15079870
    // 0x150797BC: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
        goto L_15079870;
    // 0x150797BC: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
L_150797C0:
    // 0x150797C0: lw          $t0, 0x154C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X154C);
    // 0x150797C4: addiu       $t9, $zero, 0x3A
    ctx->r25 = ADD32(0, 0X3A);
    // 0x150797C8: jal         0x150ADA20
    // 0x150797CC: sb          $t9, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150797CC: sb          $t9, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r25;
    after_0:
    // 0x150797D0: addiu       $at, $zero, 0x1F4
    ctx->r1 = ADD32(0, 0X1F4);
    // 0x150797D4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150797D8: mfhi        $t1
    ctx->r9 = hi;
    // 0x150797DC: addiu       $t2, $t1, -0xFA
    ctx->r10 = ADD32(ctx->r9, -0XFA);
    // 0x150797E0: jal         0x150ADA20
    // 0x150797E4: sh          $t2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150797E4: sh          $t2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r10;
    after_1:
    // 0x150797E8: addiu       $at, $zero, 0x1F4
    ctx->r1 = ADD32(0, 0X1F4);
    // 0x150797EC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150797F0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150797F4: addiu       $a1, $a1, 0x154C
    ctx->r5 = ADD32(ctx->r5, 0X154C);
    // 0x150797F8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150797FC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15079800: addiu       $a0, $a0, 0x2104
    ctx->r4 = ADD32(ctx->r4, 0X2104);
    // 0x15079804: lbu         $t4, 0x13F($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X13F);
    // 0x15079808: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x1507980C: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x15079810: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x15079814: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x15079818: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1507981C: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x15079820: mfhi        $t7
    ctx->r15 = hi;
    // 0x15079824: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x15079828: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x1507982C: addiu       $t8, $t7, -0xFA
    ctx->r24 = ADD32(ctx->r15, -0XFA);
    // 0x15079830: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x15079834: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15079838: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1507983C: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x15079840: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x15079844: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x15079848: lbu         $t2, 0x13F($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X13F);
    // 0x1507984C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x15079850: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x15079854: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x15079858: lh          $t6, 0x4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X4);
    // 0x1507985C: addu        $t2, $t6, $t0
    ctx->r10 = ADD32(ctx->r14, ctx->r8);
    // 0x15079860: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x15079864: nop

    // 0x15079868: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1507986C: swc1        $f10, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f10.u32l;
L_15079870:
    // 0x15079870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15079874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15079878: jr          $ra
    // 0x1507987C: nop

    return;
    return;
    // 0x1507987C: nop

;}
RECOMP_FUNC void func_150E8470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E8470: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x150E8474: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x150E8478: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150E847C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150E8480: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x150E8484: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x150E8488: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x150E848C: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x150E8490: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x150E8494: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x150E8498: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x150E849C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x150E84A0: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x150E84A4: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x150E84A8: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x150E84AC: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x150E84B0: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150E84B4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150E84B8: jal         0x150ADA68
    // 0x150E84BC: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150E84BC: nop

    after_0:
    // 0x150E84C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150E84C4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150E84C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E84CC: lwc1        $f4, 0x1368($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1368);
    // 0x150E84D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E84D4: lwc1        $f6, 0x136C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X136C);
    // 0x150E84D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150E84DC: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150E84E0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150E84E4: addiu       $s1, $s3, 0x28
    ctx->r17 = ADD32(ctx->r19, 0X28);
    // 0x150E84E8: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150E84EC: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x150E84F0: lui         $t1, 0x80
    ctx->r9 = S32(0X80 << 16);
    // 0x150E84F4: addiu       $t6, $zero, 0x6C
    ctx->r14 = ADD32(0, 0X6C);
    // 0x150E84F8: addiu       $t7, $zero, 0x5103
    ctx->r15 = ADD32(0, 0X5103);
    // 0x150E84FC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150E8500: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x150E8504: addiu       $t9, $zero, 0x73
    ctx->r25 = ADD32(0, 0X73);
    // 0x150E8508: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x150E850C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150E8510: ori         $t1, $t1, 0xDE07
    ctx->r9 = ctx->r9 | 0XDE07;
    // 0x150E8514: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x150E8518: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x150E851C: addiu       $t4, $zero, 0x19
    ctx->r12 = ADD32(0, 0X19);
    // 0x150E8520: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150E8524: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E8528: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150E852C: addiu       $fp, $sp, 0x90
    ctx->r30 = ADD32(ctx->r29, 0X90);
    // 0x150E8530: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x150E8534: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150E8538: c.lt.s      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.fl < ctx->f8.fl;
    // 0x150E853C: nop

    // 0x150E8540: bc1fl       L_150E87E0
    if (!c1cs) {
        // 0x150E8544: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150E87E0;
    }
    goto skip_0;
    // 0x150E8544: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_0:
    // 0x150E8548: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150E854C: nop

    // 0x150E8550: lwc1        $f10, 0x1370($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1370);
    // 0x150E8554: sb          $t6, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r14;
    // 0x150E8558: sh          $t7, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r15;
    // 0x150E855C: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x150E8560: sh          $t9, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r25;
    // 0x150E8564: sh          $t0, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r8;
    // 0x150E8568: sw          $t1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r9;
    // 0x150E856C: sb          $t2, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r10;
    // 0x150E8570: sb          $t3, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = ctx->r11;
    // 0x150E8574: sb          $t4, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = ctx->r12;
    // 0x150E8578: sb          $t5, 0xFF($sp)
    MEM_B(0XFF, ctx->r29) = ctx->r13;
    // 0x150E857C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150E8580: addiu       $t7, $zero, 0x73
    ctx->r15 = ADD32(0, 0X73);
    // 0x150E8584: addiu       $t8, $zero, 0x24
    ctx->r24 = ADD32(0, 0X24);
    // 0x150E8588: addiu       $t9, $zero, 0x22
    ctx->r25 = ADD32(0, 0X22);
    // 0x150E858C: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x150E8590: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150E8594: addiu       $t2, $zero, 0x7B
    ctx->r10 = ADD32(0, 0X7B);
    // 0x150E8598: addiu       $t3, $zero, 0x93
    ctx->r11 = ADD32(0, 0X93);
    // 0x150E859C: addiu       $t4, $zero, 0xAA
    ctx->r12 = ADD32(0, 0XAA);
    // 0x150E85A0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150E85A4: sb          $zero, 0x90($sp)
    MEM_B(0X90, ctx->r29) = 0;
    // 0x150E85A8: sb          $zero, 0x91($sp)
    MEM_B(0X91, ctx->r29) = 0;
    // 0x150E85AC: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x150E85B0: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x150E85B4: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x150E85B8: sb          $t6, 0x100($sp)
    MEM_B(0X100, ctx->r29) = ctx->r14;
    // 0x150E85BC: sb          $zero, 0x101($sp)
    MEM_B(0X101, ctx->r29) = 0;
    // 0x150E85C0: sh          $t7, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r15;
    // 0x150E85C4: sb          $t8, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r24;
    // 0x150E85C8: sb          $t9, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r25;
    // 0x150E85CC: sb          $t0, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r8;
    // 0x150E85D0: sb          $t1, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r9;
    // 0x150E85D4: sb          $t2, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r10;
    // 0x150E85D8: sb          $t3, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r11;
    // 0x150E85DC: sb          $t4, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = ctx->r12;
    // 0x150E85E0: sb          $t5, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r13;
    // 0x150E85E4: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x150E85E8: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x150E85EC: addiu       $t6, $sp, 0xCC
    ctx->r14 = ADD32(ctx->r29, 0XCC);
    // 0x150E85F0: addiu       $s7, $sp, 0x9C
    ctx->r23 = ADD32(ctx->r29, 0X9C);
    // 0x150E85F4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150E85F8: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x150E85FC: addiu       $s6, $zero, 0x22
    ctx->r22 = ADD32(0, 0X22);
    // 0x150E8600: addiu       $s5, $zero, 0x9C
    ctx->r21 = ADD32(0, 0X9C);
    // 0x150E8604: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x150E8608: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x150E860C: addiu       $s4, $zero, -0xC1
    ctx->r20 = ADD32(0, -0XC1);
    // 0x150E8610: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    // 0x150E8614: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x150E8618: lui         $at, 0x428E
    ctx->r1 = S32(0X428E << 16);
    // 0x150E861C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150E8620: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E8624: lwc1        $f28, 0x1374($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X1374);
    // 0x150E8628: lui         $at, 0x4288
    ctx->r1 = S32(0X4288 << 16);
    // 0x150E862C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150E8630: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150E8634: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150E8638: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x150E863C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150E8640: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x150E8644: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x150E8648: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x150E864C: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x150E8650: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x150E8654: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
L_150E8658:
    // 0x150E8658: jal         0x150ADA20
    // 0x150E865C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150E865C: nop

    after_1:
    // 0x150E8660: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x150E8664: mfhi        $t0
    ctx->r8 = hi;
    // 0x150E8668: addiu       $t1, $t0, 0x4
    ctx->r9 = ADD32(ctx->r8, 0X4);
    // 0x150E866C: bne         $s2, $zero, L_150E8678
    if (ctx->r18 != 0) {
        // 0x150E8670: nop
    
            goto L_150E8678;
    }
    // 0x150E8670: nop

    // 0x150E8674: break       7
    do_break(353273460);
L_150E8678:
    // 0x150E8678: sb          $t1, 0x92($sp)
    MEM_B(0X92, ctx->r29) = ctx->r9;
    // 0x150E867C: jal         0x150ADA20
    // 0x150E8680: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150E8680: nop

    after_2:
    // 0x150E8684: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x150E8688: mfhi        $t2
    ctx->r10 = hi;
    // 0x150E868C: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x150E8690: bne         $s2, $zero, L_150E869C
    if (ctx->r18 != 0) {
        // 0x150E8694: nop
    
            goto L_150E869C;
    }
    // 0x150E8694: nop

    // 0x150E8698: break       7
    do_break(353273496);
L_150E869C:
    // 0x150E869C: sb          $t3, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r11;
    // 0x150E86A0: jal         0x150ADA68
    // 0x150E86A4: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150E86A4: nop

    after_3:
    // 0x150E86A8: mul.s       $f16, $f0, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150E86AC: jal         0x150ADA68
    // 0x150E86B0: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150E86B0: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x150E86B4: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150E86B8: jal         0x150ADA68
    // 0x150E86BC: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150E86BC: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x150E86C0: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150E86C4: lw          $t4, 0xF4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF4);
    // 0x150E86C8: and         $t5, $t4, $s4
    ctx->r13 = ctx->r12 & ctx->r20;
    // 0x150E86CC: sw          $t5, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r13;
    // 0x150E86D0: add.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x150E86D4: mul.s       $f8, $f4, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x150E86D8: jal         0x150ADA20
    // 0x150E86DC: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150E86DC: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x150E86E0: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x150E86E4: beq         $t8, $zero, L_150E86F4
    if (ctx->r24 == 0) {
        // 0x150E86E8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_150E86F4;
    }
    // 0x150E86E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150E86EC: b           L_150E86F4
    // 0x150E86F0: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
        goto L_150E86F4;
    // 0x150E86F0: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
L_150E86F4:
    // 0x150E86F4: jal         0x150ADA20
    // 0x150E86F8: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150E86F8: nop

    after_7:
    // 0x150E86FC: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x150E8700: beq         $t7, $zero, L_150E8710
    if (ctx->r15 == 0) {
        // 0x150E8704: lw          $t6, 0xF4($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XF4);
            goto L_150E8710;
    }
    // 0x150E8704: lw          $t6, 0xF4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF4);
    // 0x150E8708: b           L_150E8714
    // 0x150E870C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_150E8714;
    // 0x150E870C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_150E8710:
    // 0x150E8710: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150E8714:
    // 0x150E8714: or          $t9, $v0, $s0
    ctx->r25 = ctx->r2 | ctx->r16;
    // 0x150E8718: or          $t0, $t6, $t9
    ctx->r8 = ctx->r14 | ctx->r25;
    // 0x150E871C: jal         0x150ADA20
    // 0x150E8720: sw          $t0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150E8720: sw          $t0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r8;
    after_8:
    // 0x150E8724: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150E8728: mfhi        $t1
    ctx->r9 = hi;
    // 0x150E872C: addiu       $t2, $t1, 0x64
    ctx->r10 = ADD32(ctx->r9, 0X64);
    // 0x150E8730: bne         $s5, $zero, L_150E873C
    if (ctx->r21 != 0) {
        // 0x150E8734: nop
    
            goto L_150E873C;
    }
    // 0x150E8734: nop

    // 0x150E8738: break       7
    do_break(353273656);
L_150E873C:
    // 0x150E873C: sb          $t2, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = ctx->r10;
    // 0x150E8740: jal         0x150ADA20
    // 0x150E8744: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150E8744: nop

    after_9:
    // 0x150E8748: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x150E874C: mfhi        $t3
    ctx->r11 = hi;
    // 0x150E8750: addiu       $t4, $t3, 0x8D
    ctx->r12 = ADD32(ctx->r11, 0X8D);
    // 0x150E8754: bne         $s6, $zero, L_150E8760
    if (ctx->r22 != 0) {
        // 0x150E8758: nop
    
            goto L_150E8760;
    }
    // 0x150E8758: nop

    // 0x150E875C: break       7
    do_break(353273692);
L_150E8760:
    // 0x150E8760: sh          $t4, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r12;
    // 0x150E8764: jal         0x150ADA68
    // 0x150E8768: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150E8768: nop

    after_10:
    // 0x150E876C: mul.s       $f10, $f0, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x150E8770: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150E8774: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150E8778: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x150E877C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150E8780: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150E8784: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x150E8788: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150E878C: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x150E8790: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x150E8794: lbu         $t5, 0xC($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0XC);
    // 0x150E8798: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x150E879C: lbu         $t8, 0x1($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X1);
    // 0x150E87A0: jal         0x15130280
    // 0x150E87A4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_15130280(rdram, ctx);
        goto after_11;
    // 0x150E87A4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_11:
    // 0x150E87A8: beq         $v0, $zero, L_150E87BC
    if (ctx->r2 == 0) {
        // 0x150E87AC: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_150E87BC;
    }
    // 0x150E87AC: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x150E87B0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x150E87B4: jal         0x10022EC0
    // 0x150E87B8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x150E87B8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_12:
L_150E87BC:
    // 0x150E87BC: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150E87C0: sub.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f22.fl;
    // 0x150E87C4: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x150E87C8: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150E87CC: c.lt.s      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.fl < ctx->f8.fl;
    // 0x150E87D0: nop

    // 0x150E87D4: bc1t        L_150E8658
    if (c1cs) {
        // 0x150E87D8: nop
    
            goto L_150E8658;
    }
    // 0x150E87D8: nop

    // 0x150E87DC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_150E87E0:
    // 0x150E87E0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150E87E4: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150E87E8: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x150E87EC: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x150E87F0: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x150E87F4: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x150E87F8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x150E87FC: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x150E8800: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x150E8804: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x150E8808: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x150E880C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x150E8810: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x150E8814: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x150E8818: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x150E881C: jr          $ra
    // 0x150E8820: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    return;
    // 0x150E8820: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_1518D1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518D1C0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1518D1C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1518D1C8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x1518D1CC: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x1518D1D0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x1518D1D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1518D1D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1518D1DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1518D1E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1518D1E4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1518D1E8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1518D1EC: bne         $s0, $zero, L_1518D1FC
    if (ctx->r16 != 0) {
        // 0x1518D1F0: nop
    
            goto L_1518D1FC;
    }
    // 0x1518D1F0: nop

    // 0x1518D1F4: b           L_1518D6C8
    // 0x1518D1F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518D6C8;
    // 0x1518D1F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518D1FC:
    // 0x1518D1FC: beq         $a3, $zero, L_1518D2A4
    if (ctx->r7 == 0) {
        // 0x1518D200: lui         $s1, 0x800E
        ctx->r17 = S32(0X800E << 16);
            goto L_1518D2A4;
    }
    // 0x1518D200: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x1518D204: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x1518D208: addiu       $s2, $s2, -0x2E70
    ctx->r18 = ADD32(ctx->r18, -0X2E70);
    // 0x1518D20C: addiu       $s1, $s1, -0x31B0
    ctx->r17 = ADD32(ctx->r17, -0X31B0);
    // 0x1518D210: lb          $t7, 0x0($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X0);
L_1518D214:
    // 0x1518D214: lw          $a0, 0x84($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X84);
    // 0x1518D218: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x1518D21C: beq         $a0, $zero, L_1518D284
    if (ctx->r4 == 0) {
        // 0x1518D220: sb          $t8, 0x0($s2)
        MEM_B(0X0, ctx->r18) = ctx->r24;
            goto L_1518D284;
    }
    // 0x1518D220: sb          $t8, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r24;
    // 0x1518D224: lb          $t9, 0x0($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X0);
    // 0x1518D228: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x1518D22C: addiu       $t1, $t1, -0x2E68
    ctx->r9 = ADD32(ctx->r9, -0X2E68);
    // 0x1518D230: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1518D234: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x1518D238: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
L_1518D23C:
    // 0x1518D23C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x1518D240: lw          $t3, 0x18($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X18);
    // 0x1518D244: beq         $s0, $t3, L_1518D25C
    if (ctx->r16 == ctx->r11) {
        // 0x1518D248: nop
    
            goto L_1518D25C;
    }
    // 0x1518D248: nop

    // 0x1518D24C: lbu         $t4, 0x3B($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X3B);
    // 0x1518D250: lbu         $t5, 0x1C($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X1C);
    // 0x1518D254: bnel        $t4, $t5, L_1518D27C
    if (ctx->r12 != ctx->r13) {
        // 0x1518D258: lw          $a0, 0x0($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X0);
            goto L_1518D27C;
    }
    goto skip_0;
    // 0x1518D258: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    skip_0:
L_1518D25C:
    // 0x1518D25C: jal         0x1516972C
    // 0x1518D260: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x1518D260: nop

    after_0:
    // 0x1518D264: lb          $t6, 0x0($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X0);
    // 0x1518D268: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1518D26C: addiu       $t8, $t8, -0x2E68
    ctx->r24 = ADD32(ctx->r24, -0X2E68);
    // 0x1518D270: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1518D274: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x1518D278: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
L_1518D27C:
    // 0x1518D27C: bnel        $a0, $zero, L_1518D23C
    if (ctx->r4 != 0) {
        // 0x1518D280: lw          $t2, 0x8($a0)
        ctx->r10 = MEM_W(ctx->r4, 0X8);
            goto L_1518D23C;
    }
    goto skip_1;
    // 0x1518D280: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    skip_1:
L_1518D284:
    // 0x1518D284: lb          $t9, 0x0($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X0);
    // 0x1518D288: addiu       $s1, $s1, 0x1A0
    ctx->r17 = ADD32(ctx->r17, 0X1A0);
    // 0x1518D28C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x1518D290: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x1518D294: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
    // 0x1518D298: addiu       $t1, $t1, -0x2E70
    ctx->r9 = ADD32(ctx->r9, -0X2E70);
    // 0x1518D29C: bnel        $s1, $t1, L_1518D214
    if (ctx->r17 != ctx->r9) {
        // 0x1518D2A0: lb          $t7, 0x0($s2)
        ctx->r15 = MEM_B(ctx->r18, 0X0);
            goto L_1518D214;
    }
    goto skip_2;
    // 0x1518D2A0: lb          $t7, 0x0($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X0);
    skip_2:
L_1518D2A4:
    // 0x1518D2A4: lh          $t3, 0x4E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4E);
    // 0x1518D2A8: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x1518D2AC: lbu         $t2, 0x3B($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3B);
    // 0x1518D2B0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x1518D2B4: sltiu       $at, $t4, 0x12
    ctx->r1 = ctx->r12 < 0X12 ? 1 : 0;
    // 0x1518D2B8: beq         $at, $zero, L_1518D6C4
    if (ctx->r1 == 0) {
        // 0x1518D2BC: sb          $t2, 0x40($sp)
        MEM_B(0X40, ctx->r29) = ctx->r10;
            goto L_1518D6C4;
    }
    // 0x1518D2BC: sb          $t2, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r10;
    // 0x1518D2C0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1518D2C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518D2C8: addu        $at, $at, $t4
    gpr jr_addend_1518D2D0 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x1518D2CC: lw          $t4, 0x7B14($at)
    ctx->r12 = ADD32(ctx->r1, 0X7B14);
    // 0x1518D2D0: jr          $t4
    // 0x1518D2D4: nop

    switch (jr_addend_1518D2D0 >> 2) {
        case 0: goto L_1518D3A0; break;
        case 1: goto L_1518D3D0; break;
        case 2: goto L_1518D404; break;
        case 3: goto L_1518D438; break;
        case 4: goto L_1518D46C; break;
        case 5: goto L_1518D49C; break;
        case 6: goto L_1518D4CC; break;
        case 7: goto L_1518D4FC; break;
        case 8: goto L_1518D52C; break;
        case 9: goto L_1518D2D8; break;
        case 10: goto L_1518D31C; break;
        case 11: goto L_1518D35C; break;
        case 12: goto L_1518D55C; break;
        case 13: goto L_1518D5A0; break;
        case 14: goto L_1518D5D4; break;
        case 15: goto L_1518D618; break;
        case 16: goto L_1518D65C; break;
        case 17: goto L_1518D690; break;
        default: switch_error(__func__, 0x1518D2D0, 0x800A7B14);
    }
    // 0x1518D2D4: nop

L_1518D2D8:
    // 0x1518D2D8: addiu       $t5, $zero, 0x4B
    ctx->r13 = ADD32(0, 0X4B);
    // 0x1518D2DC: sh          $t5, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r13;
    // 0x1518D2E0: lbu         $t6, 0x1CA($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1CA);
    // 0x1518D2E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1518D2E8: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x1518D2EC: beq         $t6, $zero, L_1518D300
    if (ctx->r14 == 0) {
        // 0x1518D2F0: addiu       $a0, $sp, 0x3C
        ctx->r4 = ADD32(ctx->r29, 0X3C);
            goto L_1518D300;
    }
    // 0x1518D2F0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D2F4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1518D2F8: b           L_1518D304
    // 0x1518D2FC: sb          $t7, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r15;
        goto L_1518D304;
    // 0x1518D2FC: sb          $t7, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r15;
L_1518D300:
    // 0x1518D300: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
L_1518D304:
    // 0x1518D304: sb          $t8, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r24;
    // 0x1518D308: sb          $t9, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r25;
    // 0x1518D30C: jal         0x1518E3C4
    // 0x1518D310: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_1;
    // 0x1518D310: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_1:
    // 0x1518D314: b           L_1518D6CC
    // 0x1518D318: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D318: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D31C:
    // 0x1518D31C: addiu       $t0, $zero, 0x4B
    ctx->r8 = ADD32(0, 0X4B);
    // 0x1518D320: sh          $t0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r8;
    // 0x1518D324: lbu         $t1, 0x1CA($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1CA);
    // 0x1518D328: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1518D32C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1518D330: beq         $t1, $zero, L_1518D340
    if (ctx->r9 == 0) {
        // 0x1518D334: addiu       $a0, $sp, 0x3C
        ctx->r4 = ADD32(ctx->r29, 0X3C);
            goto L_1518D340;
    }
    // 0x1518D334: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D338: b           L_1518D344
    // 0x1518D33C: sb          $t2, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r10;
        goto L_1518D344;
    // 0x1518D33C: sb          $t2, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r10;
L_1518D340:
    // 0x1518D340: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
L_1518D344:
    // 0x1518D344: sb          $zero, 0x45($sp)
    MEM_B(0X45, ctx->r29) = 0;
    // 0x1518D348: sb          $t3, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r11;
    // 0x1518D34C: jal         0x1518E3C4
    // 0x1518D350: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_2;
    // 0x1518D350: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_2:
    // 0x1518D354: b           L_1518D6CC
    // 0x1518D358: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D358: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D35C:
    // 0x1518D35C: addiu       $t4, $zero, 0x4B
    ctx->r12 = ADD32(0, 0X4B);
    // 0x1518D360: sh          $t4, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r12;
    // 0x1518D364: lbu         $t5, 0x1CA($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1CA);
    // 0x1518D368: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1518D36C: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x1518D370: beq         $t5, $zero, L_1518D384
    if (ctx->r13 == 0) {
        // 0x1518D374: addiu       $a0, $sp, 0x3C
        ctx->r4 = ADD32(ctx->r29, 0X3C);
            goto L_1518D384;
    }
    // 0x1518D374: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D378: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1518D37C: b           L_1518D388
    // 0x1518D380: sb          $t6, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r14;
        goto L_1518D388;
    // 0x1518D380: sb          $t6, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r14;
L_1518D384:
    // 0x1518D384: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
L_1518D388:
    // 0x1518D388: sb          $t7, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r15;
    // 0x1518D38C: sb          $t8, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r24;
    // 0x1518D390: jal         0x1518E3C4
    // 0x1518D394: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_3;
    // 0x1518D394: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_3:
    // 0x1518D398: b           L_1518D6CC
    // 0x1518D39C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D39C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D3A0:
    // 0x1518D3A0: addiu       $t9, $zero, 0x1F4
    ctx->r25 = ADD32(0, 0X1F4);
    // 0x1518D3A4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1518D3A8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1518D3AC: sh          $t9, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r25;
    // 0x1518D3B0: sb          $t0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r8;
    // 0x1518D3B4: sb          $zero, 0x45($sp)
    MEM_B(0X45, ctx->r29) = 0;
    // 0x1518D3B8: sb          $t1, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r9;
    // 0x1518D3BC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D3C0: jal         0x1518E3C4
    // 0x1518D3C4: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_4;
    // 0x1518D3C4: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_4:
    // 0x1518D3C8: b           L_1518D6CC
    // 0x1518D3CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D3CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D3D0:
    // 0x1518D3D0: addiu       $t2, $zero, 0xBB8
    ctx->r10 = ADD32(0, 0XBB8);
    // 0x1518D3D4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1518D3D8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1518D3DC: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x1518D3E0: sh          $t2, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r10;
    // 0x1518D3E4: sb          $t3, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r11;
    // 0x1518D3E8: sb          $t4, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r12;
    // 0x1518D3EC: sb          $t5, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r13;
    // 0x1518D3F0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D3F4: jal         0x1518E3C4
    // 0x1518D3F8: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_5;
    // 0x1518D3F8: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_5:
    // 0x1518D3FC: b           L_1518D6CC
    // 0x1518D400: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D400: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D404:
    // 0x1518D404: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x1518D408: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1518D40C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x1518D410: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x1518D414: sh          $t6, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r14;
    // 0x1518D418: sb          $t7, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r15;
    // 0x1518D41C: sb          $t8, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r24;
    // 0x1518D420: sb          $t9, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r25;
    // 0x1518D424: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D428: jal         0x1518E3C4
    // 0x1518D42C: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_6;
    // 0x1518D42C: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_6:
    // 0x1518D430: b           L_1518D6CC
    // 0x1518D434: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D434: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D438:
    // 0x1518D438: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x1518D43C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1518D440: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x1518D444: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x1518D448: sh          $t0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r8;
    // 0x1518D44C: sb          $t1, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r9;
    // 0x1518D450: sb          $t2, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r10;
    // 0x1518D454: sb          $t3, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r11;
    // 0x1518D458: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D45C: jal         0x1518E3C4
    // 0x1518D460: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_7;
    // 0x1518D460: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_7:
    // 0x1518D464: b           L_1518D6CC
    // 0x1518D468: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D468: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D46C:
    // 0x1518D46C: addiu       $t4, $zero, 0xBB8
    ctx->r12 = ADD32(0, 0XBB8);
    // 0x1518D470: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x1518D474: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1518D478: sh          $t4, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r12;
    // 0x1518D47C: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
    // 0x1518D480: sb          $t5, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r13;
    // 0x1518D484: sb          $t6, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r14;
    // 0x1518D488: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D48C: jal         0x1518E3C4
    // 0x1518D490: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_8;
    // 0x1518D490: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_8:
    // 0x1518D494: b           L_1518D6CC
    // 0x1518D498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D49C:
    // 0x1518D49C: addiu       $t7, $zero, 0xBB8
    ctx->r15 = ADD32(0, 0XBB8);
    // 0x1518D4A0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x1518D4A4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x1518D4A8: sh          $t7, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r15;
    // 0x1518D4AC: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
    // 0x1518D4B0: sb          $t8, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r24;
    // 0x1518D4B4: sb          $t9, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r25;
    // 0x1518D4B8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D4BC: jal         0x1518E3C4
    // 0x1518D4C0: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_9;
    // 0x1518D4C0: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_9:
    // 0x1518D4C4: b           L_1518D6CC
    // 0x1518D4C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D4C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D4CC:
    // 0x1518D4CC: addiu       $t0, $zero, 0xBB8
    ctx->r8 = ADD32(0, 0XBB8);
    // 0x1518D4D0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1518D4D4: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x1518D4D8: sh          $t0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r8;
    // 0x1518D4DC: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
    // 0x1518D4E0: sb          $t1, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r9;
    // 0x1518D4E4: sb          $t2, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r10;
    // 0x1518D4E8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D4EC: jal         0x1518E3C4
    // 0x1518D4F0: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_10;
    // 0x1518D4F0: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_10:
    // 0x1518D4F4: b           L_1518D6CC
    // 0x1518D4F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D4F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D4FC:
    // 0x1518D4FC: addiu       $t3, $zero, 0xBB8
    ctx->r11 = ADD32(0, 0XBB8);
    // 0x1518D500: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x1518D504: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x1518D508: sh          $t3, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r11;
    // 0x1518D50C: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
    // 0x1518D510: sb          $t4, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r12;
    // 0x1518D514: sb          $t5, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r13;
    // 0x1518D518: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D51C: jal         0x1518E3C4
    // 0x1518D520: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_11;
    // 0x1518D520: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_11:
    // 0x1518D524: b           L_1518D6CC
    // 0x1518D528: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D528: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D52C:
    // 0x1518D52C: addiu       $t6, $zero, 0xBB8
    ctx->r14 = ADD32(0, 0XBB8);
    // 0x1518D530: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x1518D534: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x1518D538: sh          $t6, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r14;
    // 0x1518D53C: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
    // 0x1518D540: sb          $t7, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r15;
    // 0x1518D544: sb          $t8, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r24;
    // 0x1518D548: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D54C: jal         0x1518E3C4
    // 0x1518D550: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_12;
    // 0x1518D550: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_12:
    // 0x1518D554: b           L_1518D6CC
    // 0x1518D558: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D558: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D55C:
    // 0x1518D55C: lh          $t9, 0x52($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X52);
    // 0x1518D560: addiu       $at, $zero, 0x3E7
    ctx->r1 = ADD32(0, 0X3E7);
    // 0x1518D564: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1518D568: bne         $t9, $at, L_1518D578
    if (ctx->r25 != ctx->r1) {
        // 0x1518D56C: sh          $t9, 0x42($sp)
        MEM_H(0X42, ctx->r29) = ctx->r25;
            goto L_1518D578;
    }
    // 0x1518D56C: sh          $t9, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r25;
    // 0x1518D570: b           L_1518D580
    // 0x1518D574: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
        goto L_1518D580;
    // 0x1518D574: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
L_1518D578:
    // 0x1518D578: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1518D57C: sb          $t0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r8;
L_1518D580:
    // 0x1518D580: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x1518D584: sb          $t1, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r9;
    // 0x1518D588: sb          $t2, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r10;
    // 0x1518D58C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D590: jal         0x1518E3C4
    // 0x1518D594: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_13;
    // 0x1518D594: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_13:
    // 0x1518D598: b           L_1518D6CC
    // 0x1518D59C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D59C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D5A0:
    // 0x1518D5A0: lh          $t3, 0x52($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X52);
    // 0x1518D5A4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1518D5A8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x1518D5AC: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x1518D5B0: sb          $t4, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r12;
    // 0x1518D5B4: sb          $t5, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r13;
    // 0x1518D5B8: sb          $t6, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r14;
    // 0x1518D5BC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D5C0: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    // 0x1518D5C4: jal         0x1518E3C4
    // 0x1518D5C8: sh          $t3, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r11;
    func_1518E3C4(rdram, ctx);
        goto after_14;
    // 0x1518D5C8: sh          $t3, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r11;
    after_14:
    // 0x1518D5CC: b           L_1518D6CC
    // 0x1518D5D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D5D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D5D4:
    // 0x1518D5D4: lh          $t7, 0x52($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X52);
    // 0x1518D5D8: addiu       $at, $zero, 0x3E7
    ctx->r1 = ADD32(0, 0X3E7);
    // 0x1518D5DC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x1518D5E0: bne         $t7, $at, L_1518D5F0
    if (ctx->r15 != ctx->r1) {
        // 0x1518D5E4: sh          $t7, 0x42($sp)
        MEM_H(0X42, ctx->r29) = ctx->r15;
            goto L_1518D5F0;
    }
    // 0x1518D5E4: sh          $t7, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r15;
    // 0x1518D5E8: b           L_1518D5F8
    // 0x1518D5EC: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
        goto L_1518D5F8;
    // 0x1518D5EC: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
L_1518D5F0:
    // 0x1518D5F0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1518D5F4: sb          $t8, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r24;
L_1518D5F8:
    // 0x1518D5F8: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x1518D5FC: sb          $t9, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r25;
    // 0x1518D600: sb          $t0, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r8;
    // 0x1518D604: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D608: jal         0x1518E3C4
    // 0x1518D60C: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_15;
    // 0x1518D60C: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_15:
    // 0x1518D610: b           L_1518D6CC
    // 0x1518D614: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D614: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D618:
    // 0x1518D618: lh          $t1, 0x52($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X52);
    // 0x1518D61C: addiu       $at, $zero, 0x3E7
    ctx->r1 = ADD32(0, 0X3E7);
    // 0x1518D620: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x1518D624: bne         $t1, $at, L_1518D634
    if (ctx->r9 != ctx->r1) {
        // 0x1518D628: sh          $t1, 0x42($sp)
        MEM_H(0X42, ctx->r29) = ctx->r9;
            goto L_1518D634;
    }
    // 0x1518D628: sh          $t1, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r9;
    // 0x1518D62C: b           L_1518D63C
    // 0x1518D630: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
        goto L_1518D63C;
    // 0x1518D630: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
L_1518D634:
    // 0x1518D634: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1518D638: sb          $t2, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r10;
L_1518D63C:
    // 0x1518D63C: addiu       $t4, $zero, 0xD
    ctx->r12 = ADD32(0, 0XD);
    // 0x1518D640: sb          $t3, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r11;
    // 0x1518D644: sb          $t4, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r12;
    // 0x1518D648: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D64C: jal         0x1518E3C4
    // 0x1518D650: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_16;
    // 0x1518D650: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_16:
    // 0x1518D654: b           L_1518D6CC
    // 0x1518D658: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D658: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D65C:
    // 0x1518D65C: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x1518D660: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1518D664: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x1518D668: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x1518D66C: sh          $t5, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r13;
    // 0x1518D670: sb          $t6, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r14;
    // 0x1518D674: sb          $t7, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r15;
    // 0x1518D678: sb          $t8, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r24;
    // 0x1518D67C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D680: jal         0x1518E3C4
    // 0x1518D684: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    func_1518E3C4(rdram, ctx);
        goto after_17;
    // 0x1518D684: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    after_17:
    // 0x1518D688: b           L_1518D6CC
    // 0x1518D68C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D68C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D690:
    // 0x1518D690: lh          $t9, 0x52($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X52);
    // 0x1518D694: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1518D698: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1518D69C: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x1518D6A0: sb          $t0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r8;
    // 0x1518D6A4: sb          $t1, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r9;
    // 0x1518D6A8: sb          $t2, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r10;
    // 0x1518D6AC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1518D6B0: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    // 0x1518D6B4: jal         0x1518E3C4
    // 0x1518D6B8: sh          $t9, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r25;
    func_1518E3C4(rdram, ctx);
        goto after_18;
    // 0x1518D6B8: sh          $t9, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r25;
    after_18:
    // 0x1518D6BC: b           L_1518D6CC
    // 0x1518D6C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1518D6CC;
    // 0x1518D6C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D6C4:
    // 0x1518D6C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518D6C8:
    // 0x1518D6C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518D6CC:
    // 0x1518D6CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1518D6D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1518D6D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1518D6D8: jr          $ra
    // 0x1518D6DC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x1518D6DC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_1509E640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509E640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509E644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509E648: beq         $a1, $zero, L_1509E66C
    if (ctx->r5 == 0) {
        // 0x1509E64C: lui         $t6, 0x800D
        ctx->r14 = S32(0X800D << 16);
            goto L_1509E66C;
    }
    // 0x1509E64C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1509E650: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1509E654: beq         $a1, $at, L_1509E694
    if (ctx->r5 == ctx->r1) {
        // 0x1509E658: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1509E694;
    }
    // 0x1509E658: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1509E65C: beq         $a1, $at, L_1509E6D0
    if (ctx->r5 == ctx->r1) {
        // 0x1509E660: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509E6D0;
    }
    // 0x1509E660: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509E664: b           L_1509E6E0
    // 0x1509E668: nop

        goto L_1509E6E0;
    // 0x1509E668: nop

L_1509E66C:
    // 0x1509E66C: lw          $t6, 0x3840($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3840);
    // 0x1509E670: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x1509E674: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x1509E678: bne         $at, $zero, L_1509E684
    if (ctx->r1 != 0) {
        // 0x1509E67C: nop
    
            goto L_1509E684;
    }
    // 0x1509E67C: nop

    // 0x1509E680: lw          $a1, 0x8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X8);
L_1509E684:
    // 0x1509E684: jal         0x1001263C
    // 0x1509E688: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_1001263C(rdram, ctx);
        goto after_0;
    // 0x1509E688: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x1509E68C: b           L_1509E6E0
    // 0x1509E690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509E6E0;
    // 0x1509E690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509E694:
    // 0x1509E694: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1509E698: lw          $t7, 0x3840($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3840);
    // 0x1509E69C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1509E6A0: bnel        $t7, $at, L_1509E6C0
    if (ctx->r15 != ctx->r1) {
        // 0x1509E6A4: lw          $a0, 0x8($a2)
        ctx->r4 = MEM_W(ctx->r6, 0X8);
            goto L_1509E6C0;
    }
    goto skip_0;
    // 0x1509E6A4: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    skip_0:
    // 0x1509E6A8: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    // 0x1509E6AC: jal         0x151F2D6C
    // 0x1509E6B0: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    func_151F2D6C(rdram, ctx);
        goto after_1;
    // 0x1509E6B0: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    after_1:
    // 0x1509E6B4: b           L_1509E6E0
    // 0x1509E6B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509E6E0;
    // 0x1509E6B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1509E6BC: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
L_1509E6C0:
    // 0x1509E6C0: jal         0x151F2D6C
    // 0x1509E6C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151F2D6C(rdram, ctx);
        goto after_2;
    // 0x1509E6C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x1509E6C8: b           L_1509E6E0
    // 0x1509E6CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509E6E0;
    // 0x1509E6CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509E6D0:
    // 0x1509E6D0: jal         0x151F2BA8
    // 0x1509E6D4: nop

    func_151F2BA8(rdram, ctx);
        goto after_3;
    // 0x1509E6D4: nop

    after_3:
    // 0x1509E6D8: b           L_1509E6E0
    // 0x1509E6DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509E6E0;
    // 0x1509E6DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509E6E0:
    // 0x1509E6E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1509E6E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1509E6E8: jr          $ra
    // 0x1509E6EC: nop

    return;
    return;
    // 0x1509E6EC: nop

;}
RECOMP_FUNC void func_150A7770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A7770: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
L_150A7774:
    // 0x150A7774: addi        $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x150A7778: addi        $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x150A777C: bnel        $a2, $zero, L_150A7774
    if (ctx->r6 != 0) {
        // 0x150A7780: sb          $a1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r5;
            goto L_150A7774;
    }
    goto skip_0;
    // 0x150A7780: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    skip_0:
    // 0x150A7784: jr          $ra
    // 0x150A7788: nop

    return;
    return;
    // 0x150A7788: nop

    // 0x150A778C: nop

;}
RECOMP_FUNC void func_15022754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15022754: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15022758: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1502275C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15022760: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15022764: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15022768: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1502276C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15022770: addiu       $t6, $t6, 0x363A
    ctx->r14 = ADD32(ctx->r14, 0X363A);
    // 0x15022774: addu        $s1, $s2, $t6
    ctx->r17 = ADD32(ctx->r18, ctx->r14);
    // 0x15022778: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x1502277C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15022780: blez        $t7, L_150227A4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15022784: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150227A4;
    }
    // 0x15022784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_15022788:
    // 0x15022788: jal         0x150226BC
    // 0x1502278C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_150226BC(rdram, ctx);
        goto after_0;
    // 0x1502278C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x15022790: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
    // 0x15022794: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15022798: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x1502279C: bnel        $at, $zero, L_15022788
    if (ctx->r1 != 0) {
        // 0x150227A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15022788;
    }
    goto skip_0;
    // 0x150227A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_150227A4:
    // 0x150227A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150227A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150227AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150227B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150227B4: jr          $ra
    // 0x150227B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150227B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15008E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15008E00: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008E04: sb          $zero, -0x21B0($at)
    MEM_B(-0X21B0, ctx->r1) = 0;
    // 0x15008E08: jr          $ra
    // 0x15008E0C: nop

    return;
    return;
    // 0x15008E0C: nop

;}
RECOMP_FUNC void func_150D13A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D13A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D13A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D13A8: lwc1        $f0, 0xBC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x150D13AC: lwc1        $f4, 0xB8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XB8);
    // 0x150D13B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D13B4: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x150D13B8: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x150D13BC: lwc1        $f2, 0x148($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X148);
    // 0x150D13C0: swc1        $f6, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f6.u32l;
    // 0x150D13C4: lwc1        $f8, 0x8B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X8B0);
    // 0x150D13C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D13CC: lwc1        $f6, 0xC4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC4);
    // 0x150D13D0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150D13D4: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x150D13D8: swc1        $f10, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f10.u32l;
    // 0x150D13DC: lwc1        $f18, 0x8B4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X8B4);
    // 0x150D13E0: swc1        $f8, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f8.u32l;
    // 0x150D13E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D13E8: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150D13EC: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x150D13F0: lwc1        $f10, 0x8B8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X8B8);
    // 0x150D13F4: mul.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x150D13F8: jal         0x15059C84
    // 0x150D13FC: swc1        $f16, 0x148($a0)
    MEM_W(0X148, ctx->r4) = ctx->f16.u32l;
    func_15059C84(rdram, ctx);
        goto after_0;
    // 0x150D13FC: swc1        $f16, 0x148($a0)
    MEM_W(0X148, ctx->r4) = ctx->f16.u32l;
    after_0:
    // 0x150D1400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D1404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D1408: jr          $ra
    // 0x150D140C: nop

    return;
    return;
    // 0x150D140C: nop

;}
RECOMP_FUNC void func_1506D898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506D898: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506D89C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506D8A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506D8A4: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x1506D8A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506D8AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1506D8B0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1506D8B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506D8B8: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1506D8BC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1506D8C0: addiu       $a1, $zero, 0x297
    ctx->r5 = ADD32(0, 0X297);
    // 0x1506D8C4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1506D8C8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1506D8CC: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x1506D8D0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1506D8D4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1506D8D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1506D8DC: jal         0x1505E650
    // 0x1506D8E0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1506D8E0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_0:
    // 0x1506D8E4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506D8E8: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x1506D8EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1506D8F0: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x1506D8F4: lbu         $t6, 0x100($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X100);
    // 0x1506D8F8: andi        $t7, $t6, 0xFFDF
    ctx->r15 = ctx->r14 & 0XFFDF;
    // 0x1506D8FC: sb          $t7, 0x100($v0)
    MEM_B(0X100, ctx->r2) = ctx->r15;
    // 0x1506D900: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x1506D904: sb          $zero, 0x83($t8)
    MEM_B(0X83, ctx->r24) = 0;
    // 0x1506D908: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1506D90C: sb          $zero, 0x89($t9)
    MEM_B(0X89, ctx->r25) = 0;
    // 0x1506D910: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x1506D914: lw          $t1, 0x31C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X31C);
    // 0x1506D918: sb          $zero, 0x97($t1)
    MEM_B(0X97, ctx->r9) = 0;
    // 0x1506D91C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x1506D920: lw          $t4, 0x31C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X31C);
    // 0x1506D924: sb          $t2, 0x44($t4)
    MEM_B(0X44, ctx->r12) = ctx->r10;
    // 0x1506D928: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1506D92C: jr          $ra
    // 0x1506D930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1506D930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15010780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15010780: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15010784: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15010788: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1501078C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15010790: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15010794: addiu       $t6, $zero, 0x3A98
    ctx->r14 = ADD32(0, 0X3A98);
    // 0x15010798: addiu       $t7, $zero, 0x4D
    ctx->r15 = ADD32(0, 0X4D);
    // 0x1501079C: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x150107A0: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x150107A4: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x150107A8: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x150107AC: addiu       $t2, $zero, 0x7F
    ctx->r10 = ADD32(0, 0X7F);
    // 0x150107B0: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x150107B4: addiu       $t4, $zero, 0x7F
    ctx->r12 = ADD32(0, 0X7F);
    // 0x150107B8: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x150107BC: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x150107C0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x150107C4: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x150107C8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x150107CC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x150107D0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x150107D4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x150107D8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150107DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150107E0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150107E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150107E8: addiu       $a3, $zero, 0x6C
    ctx->r7 = ADD32(0, 0X6C);
    // 0x150107EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150107F0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x150107F4: jal         0x15177410
    // 0x150107F8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_15177410(rdram, ctx);
        goto after_0;
    // 0x150107F8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x150107FC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x15010800: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15010804: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15010808: addiu       $t5, $zero, 0x3A98
    ctx->r13 = ADD32(0, 0X3A98);
    // 0x1501080C: addiu       $t6, $zero, 0x4D
    ctx->r14 = ADD32(0, 0X4D);
    // 0x15010810: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x15010814: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x15010818: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x1501081C: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x15010820: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x15010824: addiu       $t2, $zero, 0x7F
    ctx->r10 = ADD32(0, 0X7F);
    // 0x15010828: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x1501082C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x15010830: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x15010834: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x15010838: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x1501083C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x15010840: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x15010844: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x15010848: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x1501084C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15010850: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15010854: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15010858: addiu       $a2, $zero, 0x19E4
    ctx->r6 = ADD32(0, 0X19E4);
    // 0x1501085C: addiu       $a3, $zero, 0x6C
    ctx->r7 = ADD32(0, 0X6C);
    // 0x15010860: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15010864: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x15010868: jal         0x15177410
    // 0x1501086C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_15177410(rdram, ctx);
        goto after_1;
    // 0x1501086C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x15010870: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15010874: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15010878: jr          $ra
    // 0x1501087C: nop

    return;
    return;
    // 0x1501087C: nop

;}
RECOMP_FUNC void func_150763B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150763B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150763B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150763B8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150763BC: lbu         $v0, 0x1890($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1890);
    // 0x150763C0: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x150763C4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150763C8: bne         $v0, $at, L_150763EC
    if (ctx->r2 != ctx->r1) {
        // 0x150763CC: addiu       $a0, $a0, 0x154C
        ctx->r4 = ADD32(ctx->r4, 0X154C);
            goto L_150763EC;
    }
    // 0x150763CC: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x150763D0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150763D4: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x150763D8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x150763DC: lw          $t6, 0x144($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X144);
    // 0x150763E0: lbu         $t7, 0xF($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XF);
    // 0x150763E4: b           L_150763F4
    // 0x150763E8: sb          $t7, 0x1E5($v1)
    MEM_B(0X1E5, ctx->r3) = ctx->r15;
        goto L_150763F4;
    // 0x150763E8: sb          $t7, 0x1E5($v1)
    MEM_B(0X1E5, ctx->r3) = ctx->r15;
L_150763EC:
    // 0x150763EC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x150763F0: sb          $v0, 0x1E5($t8)
    MEM_B(0X1E5, ctx->r24) = ctx->r2;
L_150763F4:
    // 0x150763F4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x150763F8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150763FC: sb          $zero, 0x1E7($t9)
    MEM_B(0X1E7, ctx->r25) = 0;
    // 0x15076400: lbu         $t0, 0x1892($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1892);
    // 0x15076404: beq         $t0, $zero, L_15076448
    if (ctx->r8 == 0) {
        // 0x15076408: nop
    
            goto L_15076448;
    }
    // 0x15076408: nop

    // 0x1507640C: jal         0x150ADA20
    // 0x15076410: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15076410: nop

    after_0:
    // 0x15076414: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x15076418: lbu         $t2, 0x1892($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X1892);
    // 0x1507641C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15076420: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x15076424: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x15076428: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x1507642C: mfhi        $t3
    ctx->r11 = hi;
    // 0x15076430: lbu         $t1, 0x1E5($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X1E5);
    // 0x15076434: bne         $t2, $zero, L_15076440
    if (ctx->r10 != 0) {
        // 0x15076438: nop
    
            goto L_15076440;
    }
    // 0x15076438: nop

    // 0x1507643C: break       7
    do_break(352805948);
L_15076440:
    // 0x15076440: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x15076444: sb          $t4, 0x1E5($v1)
    MEM_B(0X1E5, ctx->r3) = ctx->r12;
L_15076448:
    // 0x15076448: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507644C: lbu         $v0, 0x1893($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1893);
    // 0x15076450: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15076454: bnel        $v0, $at, L_15076474
    if (ctx->r2 != ctx->r1) {
        // 0x15076458: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15076474;
    }
    goto skip_0;
    // 0x15076458: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x1507645C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x15076460: sb          $zero, 0x1E6($t5)
    MEM_B(0X1E6, ctx->r13) = 0;
    // 0x15076464: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x15076468: b           L_150764B8
    // 0x1507646C: sb          $zero, 0x1E8($t6)
    MEM_B(0X1E8, ctx->r14) = 0;
        goto L_150764B8;
    // 0x1507646C: sb          $zero, 0x1E8($t6)
    MEM_B(0X1E8, ctx->r14) = 0;
    // 0x15076470: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_15076474:
    // 0x15076474: bne         $v0, $at, L_15076498
    if (ctx->r2 != ctx->r1) {
        // 0x15076478: lui         $t0, 0x800D
        ctx->r8 = S32(0X800D << 16);
            goto L_15076498;
    }
    // 0x15076478: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1507647C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15076480: lbu         $t7, 0x1891($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1891);
    // 0x15076484: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x15076488: sb          $t7, 0x1E6($t8)
    MEM_B(0X1E6, ctx->r24) = ctx->r15;
    // 0x1507648C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x15076490: b           L_150764B8
    // 0x15076494: sb          $zero, 0x1E8($t9)
    MEM_B(0X1E8, ctx->r25) = 0;
        goto L_150764B8;
    // 0x15076494: sb          $zero, 0x1E8($t9)
    MEM_B(0X1E8, ctx->r25) = 0;
L_15076498:
    // 0x15076498: lbu         $t0, 0x1891($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1891);
    // 0x1507649C: bnel        $t0, $zero, L_150764BC
    if (ctx->r8 != 0) {
        // 0x150764A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150764BC;
    }
    goto skip_1;
    // 0x150764A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150764A4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x150764A8: lbu         $t2, 0x1E5($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X1E5);
    // 0x150764AC: sb          $t2, 0x1E6($v1)
    MEM_B(0X1E6, ctx->r3) = ctx->r10;
    // 0x150764B0: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x150764B4: sb          $zero, 0x1E8($t1)
    MEM_B(0X1E8, ctx->r9) = 0;
L_150764B8:
    // 0x150764B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150764BC:
    // 0x150764BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150764C0: jr          $ra
    // 0x150764C4: nop

    return;
    return;
    // 0x150764C4: nop

;}
RECOMP_FUNC void func_151A8A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A8A78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A8A7C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151A8A80: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151A8A84: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151A8A88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A8A8C: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x151A8A90: bne         $a2, $zero, L_151A8AC8
    if (ctx->r6 != 0) {
        // 0x151A8A94: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_151A8AC8;
    }
    // 0x151A8A94: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x151A8A98: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151A8A9C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x151A8AA0: beq         $v1, $t7, L_151A8AB8
    if (ctx->r3 == ctx->r15) {
        // 0x151A8AA4: nop
    
            goto L_151A8AB8;
    }
    // 0x151A8AA4: nop

    // 0x151A8AA8: lbu         $t8, 0x4($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X4);
    // 0x151A8AAC: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x151A8AB0: bnel        $t8, $t9, L_151A8B14
    if (ctx->r24 != ctx->r25) {
        // 0x151A8AB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A8B14;
    }
    goto skip_0;
    // 0x151A8AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_151A8AB8:
    // 0x151A8AB8: jal         0x1516972C
    // 0x151A8ABC: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151A8ABC: nop

    after_0:
    // 0x151A8AC0: b           L_151A8B14
    // 0x151A8AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151A8B14;
    // 0x151A8AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151A8AC8:
    // 0x151A8AC8: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x151A8ACC: bnel        $v1, $at, L_151A8B14
    if (ctx->r3 != ctx->r1) {
        // 0x151A8AD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A8B14;
    }
    goto skip_1;
    // 0x151A8AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151A8AD4: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x151A8AD8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x151A8ADC: bnel        $a0, $v1, L_151A8AFC
    if (ctx->r4 != ctx->r3) {
        // 0x151A8AE0: lw          $t2, 0x4($a1)
        ctx->r10 = MEM_W(ctx->r5, 0X4);
            goto L_151A8AFC;
    }
    goto skip_2;
    // 0x151A8AE0: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
    skip_2:
    // 0x151A8AE4: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x151A8AE8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x151A8AEC: lbu         $t1, 0x9($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X9);
    // 0x151A8AF0: b           L_151A8B10
    // 0x151A8AF4: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
        goto L_151A8B10;
    // 0x151A8AF4: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x151A8AF8: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
L_151A8AFC:
    // 0x151A8AFC: bnel        $t2, $v1, L_151A8B14
    if (ctx->r10 != ctx->r3) {
        // 0x151A8B00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A8B14;
    }
    goto skip_3;
    // 0x151A8B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x151A8B04: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x151A8B08: lbu         $t3, 0x8($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X8);
    // 0x151A8B0C: sb          $t3, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r11;
L_151A8B10:
    // 0x151A8B10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151A8B14:
    // 0x151A8B14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A8B18: jr          $ra
    // 0x151A8B1C: nop

    return;
    return;
    // 0x151A8B1C: nop

;}
RECOMP_FUNC void func_1503B9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503B9BC: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x1503B9C0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1503B9C4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x1503B9C8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x1503B9CC: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x1503B9D0: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x1503B9D4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x1503B9D8: sw          $a0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r4;
    // 0x1503B9DC: lw          $t8, 0x150($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X150);
    // 0x1503B9E0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1503B9E4: addiu       $t6, $t6, -0x3D30
    ctx->r14 = ADD32(ctx->r14, -0X3D30);
    // 0x1503B9E8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1503B9EC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1503B9F0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1503B9F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1503B9F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1503B9FC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1503BA00: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1503BA04: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1503BA08: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1503BA0C: addu        $s0, $t9, $t6
    ctx->r16 = ADD32(ctx->r25, ctx->r14);
    // 0x1503BA10: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    // 0x1503BA14: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x1503BA18: beql        $v1, $zero, L_1503CB7C
    if (ctx->r3 == 0) {
        // 0x1503BA1C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1503CB7C;
    }
    goto skip_0;
    // 0x1503BA1C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x1503BA20: lw          $v0, 0x11C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X11C);
    // 0x1503BA24: bnel        $v0, $zero, L_1503BA40
    if (ctx->r2 != 0) {
        // 0x1503BA28: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_1503BA40;
    }
    goto skip_1;
    // 0x1503BA28: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    skip_1:
    // 0x1503BA2C: jal         0x1503B7C0
    // 0x1503BA30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1503B7C0(rdram, ctx);
        goto after_0;
    // 0x1503BA30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x1503BA34: lw          $t7, 0x31C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X31C);
    // 0x1503BA38: lw          $v0, 0x11C($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X11C);
    // 0x1503BA3C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_1503BA40:
    // 0x1503BA40: lw          $a0, 0x150($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X150);
    // 0x1503BA44: jal         0x1503B95C
    // 0x1503BA48: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_1503B95C(rdram, ctx);
        goto after_1;
    // 0x1503BA48: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x1503BA4C: lw          $t8, 0x1D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1D4);
    // 0x1503BA50: sw          $v0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r2;
    // 0x1503BA54: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1503BA58: bne         $t8, $zero, L_1503BA84
    if (ctx->r24 != 0) {
        // 0x1503BA5C: lw          $t6, 0x150($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X150);
            goto L_1503BA84;
    }
    // 0x1503BA5C: lw          $t6, 0x150($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X150);
    // 0x1503BA60: lw          $t6, 0x150($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X150);
    // 0x1503BA64: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1503BA68: lbu         $t9, 0x4000($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X4000);
    // 0x1503BA6C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1503BA70: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x1503BA74: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1503BA78: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x1503BA7C: b           L_1503CB78
    // 0x1503BA80: sb          $t7, 0x4000($at)
    MEM_B(0X4000, ctx->r1) = ctx->r15;
        goto L_1503CB78;
    // 0x1503BA80: sb          $t7, 0x4000($at)
    MEM_B(0X4000, ctx->r1) = ctx->r15;
L_1503BA84:
    // 0x1503BA84: lbu         $v1, 0x4000($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4000);
    // 0x1503BA88: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1503BA8C: sllv        $v0, $t9, $t6
    ctx->r2 = S32(ctx->r25 << (ctx->r14 & 31));
    // 0x1503BA90: and         $t8, $v1, $v0
    ctx->r24 = ctx->r3 & ctx->r2;
    // 0x1503BA94: beq         $t8, $zero, L_1503BAB4
    if (ctx->r24 == 0) {
        // 0x1503BA98: lui         $t6, 0x800E
        ctx->r14 = S32(0X800E << 16);
            goto L_1503BAB4;
    }
    // 0x1503BA98: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1503BA9C: nor         $t7, $v0, $zero
    ctx->r15 = ~(ctx->r2 | 0);
    // 0x1503BAA0: and         $t9, $v1, $t7
    ctx->r25 = ctx->r3 & ctx->r15;
    // 0x1503BAA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1503BAA8: sb          $t9, 0x4000($at)
    MEM_B(0X4000, ctx->r1) = ctx->r25;
    // 0x1503BAAC: b           L_1503BAB8
    // 0x1503BAB0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
        goto L_1503BAB8;
    // 0x1503BAB0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_1503BAB4:
    // 0x1503BAB4: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
L_1503BAB8:
    // 0x1503BAB8: lw          $t6, -0x400C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X400C);
    // 0x1503BABC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1503BAC0: bnel        $t6, $zero, L_1503BAD8
    if (ctx->r14 != 0) {
        // 0x1503BAC4: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_1503BAD8;
    }
    goto skip_2;
    // 0x1503BAC4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    skip_2:
    // 0x1503BAC8: lbu         $t8, 0x2FD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2FD);
    // 0x1503BACC: beq         $t8, $zero, L_1503BAD8
    if (ctx->r24 == 0) {
        // 0x1503BAD0: nop
    
            goto L_1503BAD8;
    }
    // 0x1503BAD0: nop

    // 0x1503BAD4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_1503BAD8:
    // 0x1503BAD8: beql        $t4, $zero, L_1503BB20
    if (ctx->r12 == 0) {
        // 0x1503BADC: lw          $t9, 0xA0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XA0);
            goto L_1503BB20;
    }
    goto skip_3;
    // 0x1503BADC: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    skip_3:
    // 0x1503BAE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1503BAE4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x1503BAE8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1503BAEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1503BAF0: swc1        $f10, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f10.u32l;
    // 0x1503BAF4: swc1        $f20, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f20.u32l;
    // 0x1503BAF8: swc1        $f20, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f20.u32l;
    // 0x1503BAFC: swc1        $f4, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->f4.u32l;
    // 0x1503BB00: jal         0x150ADA20
    // 0x1503BB04: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1503BB04: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    after_2:
    // 0x1503BB08: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x1503BB0C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1503BB10: mfhi        $t7
    ctx->r15 = hi;
    // 0x1503BB14: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1503BB18: sh          $t7, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r15;
    // 0x1503BB1C: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
L_1503BB20:
    // 0x1503BB20: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x1503BB24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1503BB28: bne         $t9, $zero, L_1503BB6C
    if (ctx->r25 != 0) {
        // 0x1503BB2C: addiu       $a2, $sp, 0xFC
        ctx->r6 = ADD32(ctx->r29, 0XFC);
            goto L_1503BB6C;
    }
    // 0x1503BB2C: addiu       $a2, $sp, 0xFC
    ctx->r6 = ADD32(ctx->r29, 0XFC);
    // 0x1503BB30: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x1503BB34: lbu         $v1, 0x4E($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4E);
    // 0x1503BB38: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1503BB3C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1503BB40: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1503BB44: beql        $at, $zero, L_1503BB6C
    if (ctx->r1 == 0) {
        // 0x1503BB48: sb          $zero, 0x4E($s1)
        MEM_B(0X4E, ctx->r17) = 0;
            goto L_1503BB6C;
    }
    goto skip_4;
    // 0x1503BB48: sb          $zero, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = 0;
    skip_4:
    // 0x1503BB4C: lbu         $t6, -0x1540($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1540);
    // 0x1503BB50: subu        $t8, $v1, $v0
    ctx->r24 = SUB32(ctx->r3, ctx->r2);
    // 0x1503BB54: bne         $t6, $zero, L_1503BB60
    if (ctx->r14 != 0) {
        // 0x1503BB58: nop
    
            goto L_1503BB60;
    }
    // 0x1503BB58: nop

    // 0x1503BB5C: sb          $t8, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r24;
L_1503BB60:
    // 0x1503BB60: b           L_1503BB6C
    // 0x1503BB64: sw          $t7, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r15;
        goto L_1503BB6C;
    // 0x1503BB64: sw          $t7, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r15;
    // 0x1503BB68: sb          $zero, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = 0;
L_1503BB6C:
    // 0x1503BB6C: lw          $v0, 0x1D4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1D4);
    // 0x1503BB70: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1503BB74: addiu       $t5, $t5, 0x4008
    ctx->r13 = ADD32(ctx->r13, 0X4008);
    // 0x1503BB78: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503BB7C: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x1503BB80: swc1        $f6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f6.u32l;
    // 0x1503BB84: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503BB88: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
    // 0x1503BB8C: lwc1        $f10, 0x38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503BB90: bne         $t9, $zero, L_1503BD8C
    if (ctx->r25 != 0) {
        // 0x1503BB94: swc1        $f10, 0x8($t5)
        MEM_W(0X8, ctx->r13) = ctx->f10.u32l;
            goto L_1503BD8C;
    }
    // 0x1503BB94: swc1        $f10, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f10.u32l;
    // 0x1503BB98: b           L_1503BC24
    // 0x1503BB9C: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
        goto L_1503BC24;
    // 0x1503BB9C: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x1503BBA0: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x1503BBA4: subu        $t6, $t6, $t0
    ctx->r14 = SUB32(ctx->r14, ctx->r8);
    // 0x1503BBA8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503BBAC: addu        $v1, $s1, $t6
    ctx->r3 = ADD32(ctx->r17, ctx->r14);
    // 0x1503BBB0: addiu       $v1, $v1, -0x120
    ctx->r3 = ADD32(ctx->r3, -0X120);
    // 0x1503BBB4: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x1503BBB8: sll         $a0, $t0, 6
    ctx->r4 = S32(ctx->r8 << 6);
    // 0x1503BBBC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1503BBC0: beq         $a1, $t0, L_1503BBF8
    if (ctx->r5 == ctx->r8) {
        // 0x1503BBC4: lw          $t8, 0x1D4($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X1D4);
            goto L_1503BBF8;
    }
    // 0x1503BBC4: lw          $t8, 0x1D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1D4);
L_1503BBC8:
    // 0x1503BBC8: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
    // 0x1503BBCC: lwc1        $f24, 0x30($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503BBD0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1503BBD4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x1503BBD8: swc1        $f24, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f24.u32l;
    // 0x1503BBDC: lwc1        $f24, 0x34($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503BBE0: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x1503BBE4: swc1        $f24, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->f24.u32l;
    // 0x1503BBE8: lwc1        $f24, 0x38($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503BBEC: swc1        $f24, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f24.u32l;
    // 0x1503BBF0: bne         $a1, $t0, L_1503BBC8
    if (ctx->r5 != ctx->r8) {
        // 0x1503BBF4: lw          $t8, 0x1D4($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X1D4);
            goto L_1503BBC8;
    }
    // 0x1503BBF4: lw          $t8, 0x1D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1D4);
L_1503BBF8:
    // 0x1503BBF8: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
    // 0x1503BBFC: lwc1        $f24, 0x30($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503BC00: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x1503BC04: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x1503BC08: swc1        $f24, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->f24.u32l;
    // 0x1503BC0C: lwc1        $f24, 0x34($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503BC10: swc1        $f24, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->f24.u32l;
    // 0x1503BC14: lwc1        $f24, 0x38($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503BC18: swc1        $f24, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f24.u32l;
    // 0x1503BC1C: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x1503BC20: beq         $t0, $at, L_1503CB78
    if (ctx->r8 == ctx->r1) {
        // 0x1503BC24: sll         $a0, $t0, 6
        ctx->r4 = S32(ctx->r8 << 6);
            goto L_1503CB78;
    }
L_1503BC24:
    // 0x1503BC24: sll         $a0, $t0, 6
    ctx->r4 = S32(ctx->r8 << 6);
    // 0x1503BC28: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x1503BC2C: subu        $t7, $t7, $t0
    ctx->r15 = SUB32(ctx->r15, ctx->r8);
    // 0x1503BC30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503BC34: addu        $v1, $s1, $t7
    ctx->r3 = ADD32(ctx->r17, ctx->r15);
    // 0x1503BC38: addiu       $v1, $v1, -0x120
    ctx->r3 = ADD32(ctx->r3, -0X120);
    // 0x1503BC3C: addiu       $t0, $zero, 0x7C0
    ctx->r8 = ADD32(0, 0X7C0);
    // 0x1503BC40: addiu       $a2, $a0, 0x40
    ctx->r6 = ADD32(ctx->r4, 0X40);
    // 0x1503BC44: addiu       $a3, $a0, 0x80
    ctx->r7 = ADD32(ctx->r4, 0X80);
    // 0x1503BC48: addiu       $a1, $a0, 0xC0
    ctx->r5 = ADD32(ctx->r4, 0XC0);
    // 0x1503BC4C: addiu       $t0, $t0, -0x100
    ctx->r8 = ADD32(ctx->r8, -0X100);
    // 0x1503BC50: beq         $a1, $t0, L_1503BCF0
    if (ctx->r5 == ctx->r8) {
        // 0x1503BC54: lw          $t9, 0x1D4($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X1D4);
            goto L_1503BCF0;
    }
    // 0x1503BC54: lw          $t9, 0x1D4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1D4);
L_1503BC58:
    // 0x1503BC58: addu        $v0, $t9, $a0
    ctx->r2 = ADD32(ctx->r25, ctx->r4);
    // 0x1503BC5C: lwc1        $f24, 0x30($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503BC60: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x1503BC64: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x1503BC68: swc1        $f24, -0x30($v1)
    MEM_W(-0X30, ctx->r3) = ctx->f24.u32l;
    // 0x1503BC6C: lwc1        $f24, 0x34($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503BC70: swc1        $f24, -0x2C($v1)
    MEM_W(-0X2C, ctx->r3) = ctx->f24.u32l;
    // 0x1503BC74: lwc1        $f24, 0x38($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503BC78: swc1        $f24, -0x28($v1)
    MEM_W(-0X28, ctx->r3) = ctx->f24.u32l;
    // 0x1503BC7C: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x1503BC80: addu        $v0, $t6, $a2
    ctx->r2 = ADD32(ctx->r14, ctx->r6);
    // 0x1503BC84: lwc1        $f24, 0x30($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503BC88: addiu       $a2, $a2, 0x100
    ctx->r6 = ADD32(ctx->r6, 0X100);
    // 0x1503BC8C: swc1        $f24, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = ctx->f24.u32l;
    // 0x1503BC90: lwc1        $f24, 0x34($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503BC94: swc1        $f24, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->f24.u32l;
    // 0x1503BC98: lwc1        $f24, 0x38($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503BC9C: swc1        $f24, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->f24.u32l;
    // 0x1503BCA0: lw          $t8, 0x1D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1D4);
    // 0x1503BCA4: addu        $v0, $t8, $a3
    ctx->r2 = ADD32(ctx->r24, ctx->r7);
    // 0x1503BCA8: lwc1        $f24, 0x30($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503BCAC: addiu       $a3, $a3, 0x100
    ctx->r7 = ADD32(ctx->r7, 0X100);
    // 0x1503BCB0: swc1        $f24, -0x18($v1)
    MEM_W(-0X18, ctx->r3) = ctx->f24.u32l;
    // 0x1503BCB4: lwc1        $f24, 0x34($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503BCB8: swc1        $f24, -0x14($v1)
    MEM_W(-0X14, ctx->r3) = ctx->f24.u32l;
    // 0x1503BCBC: lwc1        $f24, 0x38($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503BCC0: swc1        $f24, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->f24.u32l;
    // 0x1503BCC4: lw          $t7, 0x1D4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1D4);
    // 0x1503BCC8: addu        $v0, $t7, $a1
    ctx->r2 = ADD32(ctx->r15, ctx->r5);
    // 0x1503BCCC: lwc1        $f24, 0x30($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503BCD0: addiu       $a1, $a1, 0x100
    ctx->r5 = ADD32(ctx->r5, 0X100);
    // 0x1503BCD4: swc1        $f24, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->f24.u32l;
    // 0x1503BCD8: lwc1        $f24, 0x34($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503BCDC: swc1        $f24, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->f24.u32l;
    // 0x1503BCE0: lwc1        $f24, 0x38($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503BCE4: swc1        $f24, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f24.u32l;
    // 0x1503BCE8: bne         $a1, $t0, L_1503BC58
    if (ctx->r5 != ctx->r8) {
        // 0x1503BCEC: lw          $t9, 0x1D4($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X1D4);
            goto L_1503BC58;
    }
    // 0x1503BCEC: lw          $t9, 0x1D4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1D4);
L_1503BCF0:
    // 0x1503BCF0: addu        $v0, $t9, $a0
    ctx->r2 = ADD32(ctx->r25, ctx->r4);
    // 0x1503BCF4: lwc1        $f24, 0x30($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503BCF8: addiu       $t0, $t0, 0x100
    ctx->r8 = ADD32(ctx->r8, 0X100);
    // 0x1503BCFC: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x1503BD00: swc1        $f24, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f24.u32l;
    // 0x1503BD04: lwc1        $f24, 0x34($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503BD08: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x1503BD0C: swc1        $f24, -0x2C($v1)
    MEM_W(-0X2C, ctx->r3) = ctx->f24.u32l;
    // 0x1503BD10: lwc1        $f24, 0x38($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503BD14: swc1        $f24, -0x28($v1)
    MEM_W(-0X28, ctx->r3) = ctx->f24.u32l;
    // 0x1503BD18: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x1503BD1C: addu        $v0, $t6, $a2
    ctx->r2 = ADD32(ctx->r14, ctx->r6);
    // 0x1503BD20: lwc1        $f24, 0x30($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503BD24: addiu       $a2, $a2, 0x100
    ctx->r6 = ADD32(ctx->r6, 0X100);
    // 0x1503BD28: swc1        $f24, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = ctx->f24.u32l;
    // 0x1503BD2C: lwc1        $f24, 0x34($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503BD30: swc1        $f24, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->f24.u32l;
    // 0x1503BD34: lwc1        $f24, 0x38($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503BD38: swc1        $f24, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->f24.u32l;
    // 0x1503BD3C: lw          $t8, 0x1D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1D4);
    // 0x1503BD40: addu        $v0, $t8, $a3
    ctx->r2 = ADD32(ctx->r24, ctx->r7);
    // 0x1503BD44: lwc1        $f24, 0x30($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503BD48: addiu       $a3, $a3, 0x100
    ctx->r7 = ADD32(ctx->r7, 0X100);
    // 0x1503BD4C: swc1        $f24, -0x18($v1)
    MEM_W(-0X18, ctx->r3) = ctx->f24.u32l;
    // 0x1503BD50: lwc1        $f24, 0x34($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503BD54: swc1        $f24, -0x14($v1)
    MEM_W(-0X14, ctx->r3) = ctx->f24.u32l;
    // 0x1503BD58: lwc1        $f24, 0x38($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503BD5C: swc1        $f24, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->f24.u32l;
    // 0x1503BD60: lw          $t7, 0x1D4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1D4);
    // 0x1503BD64: addu        $v0, $t7, $a1
    ctx->r2 = ADD32(ctx->r15, ctx->r5);
    // 0x1503BD68: lwc1        $f24, 0x30($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503BD6C: addiu       $a1, $a1, 0x100
    ctx->r5 = ADD32(ctx->r5, 0X100);
    // 0x1503BD70: swc1        $f24, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->f24.u32l;
    // 0x1503BD74: lwc1        $f24, 0x34($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503BD78: swc1        $f24, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->f24.u32l;
    // 0x1503BD7C: lwc1        $f24, 0x38($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503BD80: swc1        $f24, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f24.u32l;
    // 0x1503BD84: b           L_1503CB7C
    // 0x1503BD88: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_1503CB7C;
    // 0x1503BD88: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1503BD8C:
    // 0x1503BD8C: lw          $v0, 0x1D4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1D4);
    // 0x1503BD90: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x1503BD94: lwc1        $f10, 0x630($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X630);
    // 0x1503BD98: addiu       $v0, $v0, 0x600
    ctx->r2 = ADD32(ctx->r2, 0X600);
    // 0x1503BD9C: swc1        $f10, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f10.u32l;
    // 0x1503BDA0: lwc1        $f4, 0x34($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503BDA4: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    // 0x1503BDA8: lwc1        $f6, 0x38($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503BDAC: addiu       $v0, $sp, 0x138
    ctx->r2 = ADD32(ctx->r29, 0X138);
    // 0x1503BDB0: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x1503BDB4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x1503BDB8: beq         $v1, $at, L_1503BDC8
    if (ctx->r3 == ctx->r1) {
        // 0x1503BDBC: addiu       $at, $zero, 0xB0
        ctx->r1 = ADD32(0, 0XB0);
            goto L_1503BDC8;
    }
    // 0x1503BDBC: addiu       $at, $zero, 0xB0
    ctx->r1 = ADD32(0, 0XB0);
    // 0x1503BDC0: bne         $v1, $at, L_1503BDD8
    if (ctx->r3 != ctx->r1) {
        // 0x1503BDC4: lui         $t6, 0x800A
        ctx->r14 = S32(0X800A << 16);
            goto L_1503BDD8;
    }
    // 0x1503BDC4: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
L_1503BDC8:
    // 0x1503BDC8: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x1503BDCC: addiu       $t9, $t9, -0x7900
    ctx->r25 = ADD32(ctx->r25, -0X7900);
    // 0x1503BDD0: b           L_1503BDE0
    // 0x1503BDD4: sw          $t9, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r25;
        goto L_1503BDE0;
    // 0x1503BDD4: sw          $t9, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r25;
L_1503BDD8:
    // 0x1503BDD8: addiu       $t6, $t6, -0x7910
    ctx->r14 = ADD32(ctx->r14, -0X7910);
    // 0x1503BDDC: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
L_1503BDE0:
    // 0x1503BDE0: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x1503BDE4: sltu        $at, $a2, $v0
    ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x1503BDE8: swc1        $f20, -0xC($a2)
    MEM_W(-0XC, ctx->r6) = ctx->f20.u32l;
    // 0x1503BDEC: swc1        $f20, -0x8($a2)
    MEM_W(-0X8, ctx->r6) = ctx->f20.u32l;
    // 0x1503BDF0: bne         $at, $zero, L_1503BDE0
    if (ctx->r1 != 0) {
        // 0x1503BDF4: swc1        $f20, -0x4($a2)
        MEM_W(-0X4, ctx->r6) = ctx->f20.u32l;
            goto L_1503BDE0;
    }
    // 0x1503BDF4: swc1        $f20, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f20.u32l;
    // 0x1503BDF8: lwc1        $f22, 0x3C($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1503BDFC: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x1503BE00: nop

    // 0x1503BE04: bc1fl       L_1503BE18
    if (!c1cs) {
        // 0x1503BE08: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_1503BE18;
    }
    goto skip_5;
    // 0x1503BE08: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    skip_5:
    // 0x1503BE0C: b           L_1503BE44
    // 0x1503BE10: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
        goto L_1503BE44;
    // 0x1503BE10: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    // 0x1503BE14: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
L_1503BE18:
    // 0x1503BE18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1503BE1C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x1503BE20: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x1503BE24: nop

    // 0x1503BE28: bc1fl       L_1503BE40
    if (!c1cs) {
        // 0x1503BE2C: mov.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
            goto L_1503BE40;
    }
    goto skip_6;
    // 0x1503BE2C: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    skip_6:
    // 0x1503BE30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1503BE34: b           L_1503BE44
    // 0x1503BE38: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
        goto L_1503BE44;
    // 0x1503BE38: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x1503BE3C: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_1503BE40:
    // 0x1503BE40: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
L_1503BE44:
    // 0x1503BE44: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1503BE48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1503BE4C: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1503BE50: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x1503BE54: nop

    // 0x1503BE58: bc1f        L_1503BE70
    if (!c1cs) {
        // 0x1503BE5C: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_1503BE70;
    }
    // 0x1503BE5C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1503BE60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1503BE64: nop

    // 0x1503BE68: mul.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f6.fl);
    // 0x1503BE6C: nop

L_1503BE70:
    // 0x1503BE70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503BE74: lwc1        $f10, -0x77C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X77C8);
    // 0x1503BE78: lwc1        $f8, 0x3C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x1503BE7C: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    // 0x1503BE80: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1503BE84: jal         0x15047D60
    // 0x1503BE88: nop

    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x1503BE88: nop

    after_3:
    // 0x1503BE8C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1503BE90: lbu         $t8, -0x1540($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1540);
    // 0x1503BE94: mul.s       $f24, $f0, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x1503BE98: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1503BE9C: bne         $t8, $zero, L_1503BEEC
    if (ctx->r24 != 0) {
        // 0x1503BEA0: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_1503BEEC;
    }
    // 0x1503BEA0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1503BEA4: lbu         $t7, -0x15F4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X15F4);
    // 0x1503BEA8: bnel        $t7, $zero, L_1503BEF0
    if (ctx->r15 != 0) {
        // 0x1503BEAC: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_1503BEF0;
    }
    goto skip_7;
    // 0x1503BEAC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    skip_7:
    // 0x1503BEB0: lwc1        $f4, 0x3C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x1503BEB4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1503BEB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1503BEBC: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x1503BEC0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1503BEC4: swc1        $f6, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f6.u32l;
    // 0x1503BEC8: lwc1        $f0, 0x3C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x1503BECC: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x1503BED0: nop

    // 0x1503BED4: bc1fl       L_1503BEF0
    if (!c1cs) {
        // 0x1503BED8: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_1503BEF0;
    }
    goto skip_8;
    // 0x1503BED8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    skip_8:
    // 0x1503BEDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1503BEE0: nop

    // 0x1503BEE4: sub.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x1503BEE8: swc1        $f4, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f4.u32l;
L_1503BEEC:
    // 0x1503BEEC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
L_1503BEF0:
    // 0x1503BEF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1503BEF4: lwc1        $f6, 0x3C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x1503BEF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503BEFC: lwc1        $f4, -0x77C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X77C4);
    // 0x1503BF00: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1503BF04: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    // 0x1503BF08: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1503BF0C: jal         0x15047D60
    // 0x1503BF10: nop

    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x1503BF10: nop

    after_4:
    // 0x1503BF14: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x1503BF18: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
    // 0x1503BF1C: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x1503BF20: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1503BF24: add.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x1503BF28: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1503BF2C: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x1503BF30: swc1        $f6, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f6.u32l;
    // 0x1503BF34: lw          $a1, 0x318($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X318);
    // 0x1503BF38: beq         $a1, $zero, L_1503C138
    if (ctx->r5 == 0) {
        // 0x1503BF3C: nop
    
            goto L_1503C138;
    }
    // 0x1503BF3C: nop

    // 0x1503BF40: lw          $t9, 0x2C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X2C);
    // 0x1503BF44: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x1503BF48: bne         $t9, $at, L_1503C138
    if (ctx->r25 != ctx->r1) {
        // 0x1503BF4C: lui         $at, 0xC188
        ctx->r1 = S32(0XC188 << 16);
            goto L_1503C138;
    }
    // 0x1503BF4C: lui         $at, 0xC188
    ctx->r1 = S32(0XC188 << 16);
    // 0x1503BF50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1503BF54: lwc1        $f10, 0x388($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X388);
    // 0x1503BF58: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x1503BF5C: nop

    // 0x1503BF60: bc1f        L_1503C138
    if (!c1cs) {
        // 0x1503BF64: nop
    
            goto L_1503C138;
    }
    // 0x1503BF64: nop

    // 0x1503BF68: lwc1        $f22, 0x2F8($a1)
    ctx->f22.u32l = MEM_W(ctx->r5, 0X2F8);
    // 0x1503BF6C: lwc1        $f18, 0x74C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X74C);
    // 0x1503BF70: lwc1        $f16, 0x300($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X300);
    // 0x1503BF74: lwc1        $f10, 0x754($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X754);
    // 0x1503BF78: add.s       $f18, $f22, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f18.fl;
    // 0x1503BF7C: lwc1        $f22, 0x14($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1503BF80: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1503BF84: add.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1503BF88: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x1503BF8C: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x1503BF90: sub.s       $f12, $f18, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f22.fl;
    // 0x1503BF94: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    // 0x1503BF98: jal         0x150484A0
    // 0x1503BF9C: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    func_150484A0(rdram, ctx);
        goto after_5;
    // 0x1503BF9C: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    after_5:
    // 0x1503BFA0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1503BFA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1503BFA8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x1503BFAC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1503BFB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503BFB4: lwc1        $f4, -0x77C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X77C0);
    // 0x1503BFB8: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x1503BFBC: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    // 0x1503BFC0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1503BFC4: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1503BFC8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1503BFCC: add.s       $f2, $f6, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x1503BFD0: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x1503BFD4: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x1503BFD8: bc1fl       L_1503BFE8
    if (!c1cs) {
        // 0x1503BFDC: lhu         $t6, 0x76($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X76);
            goto L_1503BFE8;
    }
    goto skip_9;
    // 0x1503BFDC: lhu         $t6, 0x76($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X76);
    skip_9:
    // 0x1503BFE0: sub.s       $f14, $f2, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x1503BFE4: lhu         $t6, 0x76($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X76);
L_1503BFE8:
    // 0x1503BFE8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1503BFEC: bgez        $t6, L_1503C000
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1503BFF0: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1503C000;
    }
    // 0x1503BFF0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1503BFF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1503BFF8: nop

    // 0x1503BFFC: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_1503C000:
    // 0x1503C000: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x1503C004: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1503C008: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x1503C00C: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x1503C010: mul.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1503C014: jal         0x15048A70
    // 0x1503C018: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    func_15048A70(rdram, ctx);
        goto after_6;
    // 0x1503C018: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    after_6:
    // 0x1503C01C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1503C020: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1503C024: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x1503C028: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x1503C02C: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    // 0x1503C030: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1503C034: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1503C038: bc1f        L_1503C138
    if (!c1cs) {
        // 0x1503C03C: addiu       $t8, $zero, 0x3C
        ctx->r24 = ADD32(0, 0X3C);
            goto L_1503C138;
    }
    // 0x1503C03C: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x1503C040: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1503C044: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x1503C048: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1503C04C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x1503C050: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1503C054: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1503C058: bc1fl       L_1503C068
    if (!c1cs) {
        // 0x1503C05C: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_1503C068;
    }
    goto skip_10;
    // 0x1503C05C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_10:
    // 0x1503C060: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x1503C064: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_1503C068:
    // 0x1503C068: nop

    // 0x1503C06C: bc1fl       L_1503C080
    if (!c1cs) {
        // 0x1503C070: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_1503C080;
    }
    goto skip_11;
    // 0x1503C070: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_11:
    // 0x1503C074: b           L_1503C0A8
    // 0x1503C078: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_1503C0A8;
    // 0x1503C078: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1503C07C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_1503C080:
    // 0x1503C080: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1503C084: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x1503C088: nop

    // 0x1503C08C: bc1fl       L_1503C0A4
    if (!c1cs) {
        // 0x1503C090: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_1503C0A4;
    }
    goto skip_12;
    // 0x1503C090: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_12:
    // 0x1503C094: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1503C098: b           L_1503C0A8
    // 0x1503C09C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_1503C0A8;
    // 0x1503C09C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1503C0A0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_1503C0A4:
    // 0x1503C0A4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_1503C0A8:
    // 0x1503C0A8: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x1503C0AC: lui         $at, 0xC1B8
    ctx->r1 = S32(0XC1B8 << 16);
    // 0x1503C0B0: bc1fl       L_1503C0E4
    if (!c1cs) {
        // 0x1503C0B4: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_1503C0E4;
    }
    goto skip_13;
    // 0x1503C0B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_13:
    // 0x1503C0B8: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x1503C0BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1503C0C0: nop

    // 0x1503C0C4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1503C0C8: nop

    // 0x1503C0CC: bc1f        L_1503C100
    if (!c1cs) {
        // 0x1503C0D0: nop
    
            goto L_1503C100;
    }
    // 0x1503C0D0: nop

    // 0x1503C0D4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1503C0D8: b           L_1503C100
    // 0x1503C0DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1503C100;
    // 0x1503C0DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1503C0E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_1503C0E4:
    // 0x1503C0E4: nop

    // 0x1503C0E8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1503C0EC: nop

    // 0x1503C0F0: bc1f        L_1503C100
    if (!c1cs) {
        // 0x1503C0F4: nop
    
            goto L_1503C100;
    }
    // 0x1503C0F4: nop

    // 0x1503C0F8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1503C0FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1503C100:
    // 0x1503C100: beql        $v0, $zero, L_1503C124
    if (ctx->r2 == 0) {
        // 0x1503C104: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_1503C124;
    }
    goto skip_14;
    // 0x1503C104: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    skip_14:
    // 0x1503C108: lwc1        $f12, 0x40($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X40);
    // 0x1503C10C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503C110: lwc1        $f10, -0x77BC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X77BC);
    // 0x1503C114: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x1503C118: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1503C11C: add.s       $f2, $f12, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x1503C120: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
L_1503C124:
    // 0x1503C124: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1503C128: swc1        $f2, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f2.u32l;
    // 0x1503C12C: sh          $t8, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r24;
    // 0x1503C130: swc1        $f8, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->f8.u32l;
    // 0x1503C134: sw          $t7, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r15;
L_1503C138:
    // 0x1503C138: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503C13C: lwc1        $f10, -0x77B8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X77B8);
    // 0x1503C140: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1503C144: lhu         $v0, 0x84($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X84);
    // 0x1503C148: addiu       $at, $zero, 0x122
    ctx->r1 = ADD32(0, 0X122);
    // 0x1503C14C: mul.s       $f22, $f4, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1503C150: beq         $v0, $at, L_1503C16C
    if (ctx->r2 == ctx->r1) {
        // 0x1503C154: addiu       $at, $zero, 0x128
        ctx->r1 = ADD32(0, 0X128);
            goto L_1503C16C;
    }
    // 0x1503C154: addiu       $at, $zero, 0x128
    ctx->r1 = ADD32(0, 0X128);
    // 0x1503C158: beq         $v0, $at, L_1503C16C
    if (ctx->r2 == ctx->r1) {
        // 0x1503C15C: addiu       $at, $zero, 0x129
        ctx->r1 = ADD32(0, 0X129);
            goto L_1503C16C;
    }
    // 0x1503C15C: addiu       $at, $zero, 0x129
    ctx->r1 = ADD32(0, 0X129);
    // 0x1503C160: beq         $v0, $at, L_1503C16C
    if (ctx->r2 == ctx->r1) {
        // 0x1503C164: addiu       $at, $zero, 0x12A
        ctx->r1 = ADD32(0, 0X12A);
            goto L_1503C16C;
    }
    // 0x1503C164: addiu       $at, $zero, 0x12A
    ctx->r1 = ADD32(0, 0X12A);
    // 0x1503C168: bne         $v0, $at, L_1503C178
    if (ctx->r2 != ctx->r1) {
        // 0x1503C16C: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_1503C178;
    }
L_1503C16C:
    // 0x1503C16C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503C170: lwc1        $f6, -0x77B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X77B4);
    // 0x1503C174: sub.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f6.fl;
L_1503C178:
    // 0x1503C178: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x1503C17C: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x1503C180: jal         0x15047D60
    // 0x1503C184: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    sinf_recomp(rdram, ctx);
        goto after_7;
    // 0x1503C184: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    after_7:
    // 0x1503C188: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x1503C18C: jal         0x15047C00
    // 0x1503C190: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    cosf_recomp(rdram, ctx);
        goto after_8;
    // 0x1503C190: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_8:
    // 0x1503C194: lhu         $a0, 0x84($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X84);
    // 0x1503C198: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1503C19C: lui         $ra, 0x800C
    ctx->r31 = S32(0X800C << 16);
    // 0x1503C1A0: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x1503C1A4: addiu       $ra, $ra, -0x15F4
    ctx->r31 = ADD32(ctx->r31, -0X15F4);
    // 0x1503C1A8: addiu       $t5, $t5, 0x4008
    ctx->r13 = ADD32(ctx->r13, 0X4008);
    // 0x1503C1AC: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    // 0x1503C1B0: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1503C1B4: beq         $a0, $at, L_1503C1D0
    if (ctx->r4 == ctx->r1) {
        // 0x1503C1B8: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_1503C1D0;
    }
    // 0x1503C1B8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x1503C1BC: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x1503C1C0: beq         $a0, $at, L_1503C1D0
    if (ctx->r4 == ctx->r1) {
        // 0x1503C1C4: addiu       $at, $zero, 0xD1
        ctx->r1 = ADD32(0, 0XD1);
            goto L_1503C1D0;
    }
    // 0x1503C1C4: addiu       $at, $zero, 0xD1
    ctx->r1 = ADD32(0, 0XD1);
    // 0x1503C1C8: bnel        $a0, $at, L_1503C228
    if (ctx->r4 != ctx->r1) {
        // 0x1503C1CC: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_1503C228;
    }
    goto skip_15;
    // 0x1503C1CC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_15:
L_1503C1D0:
    // 0x1503C1D0: lwc1        $f4, 0xB8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x1503C1D4: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x1503C1D8: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x1503C1DC: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
    // 0x1503C1E0: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x1503C1E4: bc1fl       L_1503C20C
    if (!c1cs) {
        // 0x1503C1E8: lwc1        $f6, 0x100($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
            goto L_1503C20C;
    }
    goto skip_16;
    // 0x1503C1E8: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
    skip_16:
    // 0x1503C1EC: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1503C1F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1503C1F4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1503C1F8: swc1        $f8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f8.u32l;
    // 0x1503C1FC: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x1503C200: add.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x1503C204: swc1        $f10, 0x4010($at)
    MEM_W(0X4010, ctx->r1) = ctx->f10.u32l;
    // 0x1503C208: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
L_1503C20C:
    // 0x1503C20C: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x1503C210: sub.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x1503C214: add.s       $f10, $f4, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x1503C218: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x1503C21C: b           L_1503C6D0
    // 0x1503C220: swc1        $f10, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f10.u32l;
        goto L_1503C6D0;
    // 0x1503C220: swc1        $f10, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f10.u32l;
    // 0x1503C224: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_1503C228:
    // 0x1503C228: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1503C22C: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1503C230: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1503C234: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x1503C238: nop

    // 0x1503C23C: bc1fl       L_1503C6D4
    if (!c1cs) {
        // 0x1503C240: lw          $t6, 0xA0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XA0);
            goto L_1503C6D4;
    }
    goto skip_17;
    // 0x1503C240: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    skip_17:
    // 0x1503C244: lwc1        $f22, 0x3C($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1503C248: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1503C24C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1503C250: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x1503C254: nop

    // 0x1503C258: bc1fl       L_1503C26C
    if (!c1cs) {
        // 0x1503C25C: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_1503C26C;
    }
    goto skip_18;
    // 0x1503C25C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_18:
    // 0x1503C260: b           L_1503C294
    // 0x1503C264: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
        goto L_1503C294;
    // 0x1503C264: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    // 0x1503C268: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_1503C26C:
    // 0x1503C26C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1503C270: c.lt.s      $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f4.fl < ctx->f22.fl;
    // 0x1503C274: nop

    // 0x1503C278: bc1fl       L_1503C290
    if (!c1cs) {
        // 0x1503C27C: mov.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
            goto L_1503C290;
    }
    goto skip_19;
    // 0x1503C27C: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    skip_19:
    // 0x1503C280: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1503C284: b           L_1503C294
    // 0x1503C288: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
        goto L_1503C294;
    // 0x1503C288: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x1503C28C: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_1503C290:
    // 0x1503C290: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
L_1503C294:
    // 0x1503C294: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x1503C298: add.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f22.fl + ctx->f22.fl;
    // 0x1503C29C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1503C2A0: lbu         $t9, 0x35EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X35EA);
    // 0x1503C2A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1503C2A8: sub.s       $f24, $f0, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x1503C2AC: bnel        $t9, $at, L_1503C2F8
    if (ctx->r25 != ctx->r1) {
        // 0x1503C2B0: lbu         $v1, 0x4($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X4);
            goto L_1503C2F8;
    }
    goto skip_20;
    // 0x1503C2B0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    skip_20:
    // 0x1503C2B4: lbu         $v0, 0x3C9D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3C9D);
    // 0x1503C2B8: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x1503C2BC: beql        $at, $zero, L_1503C2F8
    if (ctx->r1 == 0) {
        // 0x1503C2C0: lbu         $v1, 0x4($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X4);
            goto L_1503C2F8;
    }
    goto skip_21;
    // 0x1503C2C0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    skip_21:
    // 0x1503C2C4: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x1503C2C8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1503C2CC: bgez        $v0, L_1503C2E0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1503C2D0: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1503C2E0;
    }
    // 0x1503C2D0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1503C2D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1503C2D8: nop

    // 0x1503C2DC: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_1503C2E0:
    // 0x1503C2E0: mul.s       $f24, $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f8.fl);
    // 0x1503C2E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503C2E8: lwc1        $f10, -0x77B0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X77B0);
    // 0x1503C2EC: mul.s       $f24, $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x1503C2F0: nop

    // 0x1503C2F4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
L_1503C2F8:
    // 0x1503C2F8: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x1503C2FC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x1503C300: beq         $v1, $at, L_1503C310
    if (ctx->r3 == ctx->r1) {
        // 0x1503C304: addiu       $at, $zero, 0xB0
        ctx->r1 = ADD32(0, 0XB0);
            goto L_1503C310;
    }
    // 0x1503C304: addiu       $at, $zero, 0xB0
    ctx->r1 = ADD32(0, 0XB0);
    // 0x1503C308: bnel        $v1, $at, L_1503C31C
    if (ctx->r3 != ctx->r1) {
        // 0x1503C30C: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_1503C31C;
    }
    goto skip_22;
    // 0x1503C30C: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    skip_22:
L_1503C310:
    // 0x1503C310: b           L_1503C36C
    // 0x1503C314: addiu       $v0, $v0, -0x7898
    ctx->r2 = ADD32(ctx->r2, -0X7898);
        goto L_1503C36C;
    // 0x1503C314: addiu       $v0, $v0, -0x7898
    ctx->r2 = ADD32(ctx->r2, -0X7898);
    // 0x1503C318: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
L_1503C31C:
    // 0x1503C31C: beq         $a0, $at, L_1503C32C
    if (ctx->r4 == ctx->r1) {
        // 0x1503C320: lui         $v0, 0x800A
        ctx->r2 = S32(0X800A << 16);
            goto L_1503C32C;
    }
    // 0x1503C320: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x1503C324: addiu       $at, $zero, 0x18B
    ctx->r1 = ADD32(0, 0X18B);
    // 0x1503C328: bne         $a0, $at, L_1503C364
    if (ctx->r4 != ctx->r1) {
        // 0x1503C32C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_1503C364;
    }
L_1503C32C:
    // 0x1503C32C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1503C330: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x1503C334: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x1503C338: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503C33C: addiu       $t8, $sp, 0xFC
    ctx->r24 = ADD32(ctx->r29, 0XFC);
    // 0x1503C340: swc1        $f20, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f20.u32l;
    // 0x1503C344: addu        $a2, $t6, $t8
    ctx->r6 = ADD32(ctx->r14, ctx->r24);
    // 0x1503C348: addiu       $v0, $v0, -0x78AC
    ctx->r2 = ADD32(ctx->r2, -0X78AC);
    // 0x1503C34C: swc1        $f20, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f20.u32l;
    // 0x1503C350: swc1        $f20, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f20.u32l;
    // 0x1503C354: swc1        $f20, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f20.u32l;
    // 0x1503C358: swc1        $f20, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f20.u32l;
    // 0x1503C35C: b           L_1503C36C
    // 0x1503C360: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
        goto L_1503C36C;
    // 0x1503C360: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
L_1503C364:
    // 0x1503C364: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x1503C368: addiu       $v0, $v0, -0x78C0
    ctx->r2 = ADD32(ctx->r2, -0X78C0);
L_1503C36C:
    // 0x1503C36C: lw          $t7, 0x31C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X31C);
    // 0x1503C370: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x1503C374: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1503C378: lbu         $t9, 0x78($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X78);
    // 0x1503C37C: bnel        $t9, $at, L_1503C3C0
    if (ctx->r25 != ctx->r1) {
        // 0x1503C380: lwc1        $f10, 0x0($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
            goto L_1503C3C0;
    }
    goto skip_23;
    // 0x1503C380: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    skip_23:
    // 0x1503C384: beql        $a1, $zero, L_1503C3C0
    if (ctx->r5 == 0) {
        // 0x1503C388: lwc1        $f10, 0x0($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
            goto L_1503C3C0;
    }
    goto skip_24;
    // 0x1503C388: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    skip_24:
    // 0x1503C38C: lw          $t6, 0x2C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X2C);
    // 0x1503C390: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x1503C394: bne         $t6, $at, L_1503C3BC
    if (ctx->r14 != ctx->r1) {
        // 0x1503C398: lui         $at, 0xC188
        ctx->r1 = S32(0XC188 << 16);
            goto L_1503C3BC;
    }
    // 0x1503C398: lui         $at, 0xC188
    ctx->r1 = S32(0XC188 << 16);
    // 0x1503C39C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1503C3A0: lwc1        $f4, 0x388($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X388);
    // 0x1503C3A4: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x1503C3A8: nop

    // 0x1503C3AC: bc1fl       L_1503C3C0
    if (!c1cs) {
        // 0x1503C3B0: lwc1        $f10, 0x0($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
            goto L_1503C3C0;
    }
    goto skip_25;
    // 0x1503C3B0: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    skip_25:
    // 0x1503C3B4: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x1503C3B8: nop

L_1503C3BC:
    // 0x1503C3BC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
L_1503C3C0:
    // 0x1503C3C0: lwc1        $f8, 0x100($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X100);
    // 0x1503C3C4: c.eq.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl == ctx->f20.fl;
    // 0x1503C3C8: mul.s       $f6, $f24, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x1503C3CC: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x1503C3D0: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1503C3D4: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    // 0x1503C3D8: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1503C3DC: mul.s       $f6, $f24, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f8.fl);
    // 0x1503C3E0: lwc1        $f8, 0x118($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X118);
    // 0x1503C3E4: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1503C3E8: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    // 0x1503C3EC: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1503C3F0: mul.s       $f6, $f24, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x1503C3F4: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1503C3F8: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1503C3FC: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    // 0x1503C400: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1503C404: mul.s       $f6, $f24, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f8.fl);
    // 0x1503C408: lwc1        $f8, 0x130($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X130);
    // 0x1503C40C: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1503C410: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
    // 0x1503C414: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1503C418: mul.s       $f6, $f24, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x1503C41C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1503C420: bc1f        L_1503C6B0
    if (!c1cs) {
        // 0x1503C424: swc1        $f4, 0x130($sp)
        MEM_W(0X130, ctx->r29) = ctx->f4.u32l;
            goto L_1503C6B0;
    }
    // 0x1503C424: swc1        $f4, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f4.u32l;
    // 0x1503C428: lh          $v0, 0x4C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4C);
    // 0x1503C42C: lw          $t8, 0xB0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB0);
    // 0x1503C430: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503C434: beql        $v0, $zero, L_1503C504
    if (ctx->r2 == 0) {
        // 0x1503C438: lwc1        $f8, 0x40($s1)
        ctx->f8.u32l = MEM_W(ctx->r17, 0X40);
            goto L_1503C504;
    }
    goto skip_26;
    // 0x1503C438: lwc1        $f8, 0x40($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X40);
    skip_26:
    // 0x1503C43C: bne         $t8, $zero, L_1503C500
    if (ctx->r24 != 0) {
        // 0x1503C440: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_1503C500;
    }
    // 0x1503C440: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1503C444: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x1503C448: subu        $t9, $v0, $t7
    ctx->r25 = SUB32(ctx->r2, ctx->r15);
    // 0x1503C44C: sh          $t9, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r25;
    // 0x1503C450: lh          $t6, 0x4C($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X4C);
    // 0x1503C454: bgtzl       $t6, L_1503C6D4
    if (SIGNED(ctx->r14) > 0) {
        // 0x1503C458: lw          $t6, 0xA0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XA0);
            goto L_1503C6D4;
    }
    goto skip_27;
    // 0x1503C458: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    skip_27:
    // 0x1503C45C: swc1        $f20, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f20.u32l;
    // 0x1503C460: jal         0x150ADA20
    // 0x1503C464: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x1503C464: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    after_9:
    // 0x1503C468: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x1503C46C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1503C470: mfhi        $t8
    ctx->r24 = hi;
    // 0x1503C474: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1503C478: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1503C47C: bgez        $t8, L_1503C490
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1503C480: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1503C490;
    }
    // 0x1503C480: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1503C484: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1503C488: nop

    // 0x1503C48C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_1503C490:
    // 0x1503C490: jal         0x150ADA20
    // 0x1503C494: swc1        $f8, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x1503C494: swc1        $f8, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->f8.u32l;
    after_10:
    // 0x1503C498: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x1503C49C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1503C4A0: mfhi        $t7
    ctx->r15 = hi;
    // 0x1503C4A4: addiu       $t9, $t7, 0xA
    ctx->r25 = ADD32(ctx->r15, 0XA);
    // 0x1503C4A8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1503C4AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1503C4B0: bgez        $t9, L_1503C4C4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1503C4B4: cvt.s.w     $f24, $f4
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1503C4C4;
    }
    // 0x1503C4B4: cvt.s.w     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1503C4B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1503C4BC: nop

    // 0x1503C4C0: add.s       $f24, $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f10.fl;
L_1503C4C4:
    // 0x1503C4C4: jal         0x150ADA20
    // 0x1503C4C8: nop

    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x1503C4C8: nop

    after_11:
    // 0x1503C4CC: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1503C4D0: lui         $ra, 0x800C
    ctx->r31 = S32(0X800C << 16);
    // 0x1503C4D4: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x1503C4D8: addiu       $ra, $ra, -0x15F4
    ctx->r31 = ADD32(ctx->r31, -0X15F4);
    // 0x1503C4DC: addiu       $t5, $t5, 0x4008
    ctx->r13 = ADD32(ctx->r13, 0X4008);
    // 0x1503C4E0: beq         $t6, $zero, L_1503C4F0
    if (ctx->r14 == 0) {
        // 0x1503C4E4: lw          $t4, 0x9C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X9C);
            goto L_1503C4F0;
    }
    // 0x1503C4E4: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1503C4E8: b           L_1503C4F8
    // 0x1503C4EC: swc1        $f24, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f24.u32l;
        goto L_1503C4F8;
    // 0x1503C4EC: swc1        $f24, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f24.u32l;
L_1503C4F0:
    // 0x1503C4F0: neg.s       $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = -ctx->f24.fl;
    // 0x1503C4F4: swc1        $f6, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f6.u32l;
L_1503C4F8:
    // 0x1503C4F8: b           L_1503C6D0
    // 0x1503C4FC: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
        goto L_1503C6D0;
    // 0x1503C4FC: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
L_1503C500:
    // 0x1503C500: lwc1        $f8, 0x40($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X40);
L_1503C504:
    // 0x1503C504: lwc1        $f4, -0x77AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X77AC);
    // 0x1503C508: swc1        $f14, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f14.u32l;
    // 0x1503C50C: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    // 0x1503C510: mul.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x1503C514: jal         0x15047D60
    // 0x1503C518: nop

    sinf_recomp(rdram, ctx);
        goto after_12;
    // 0x1503C518: nop

    after_12:
    // 0x1503C51C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1503C520: lwc1        $f10, 0x48($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X48);
    // 0x1503C524: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1503C528: lwc1        $f6, 0x40($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X40);
    // 0x1503C52C: mul.s       $f24, $f0, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1503C530: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503C534: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1503C538: lwc1        $f10, -0x77A8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X77A8);
    // 0x1503C53C: mul.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1503C540: jal         0x15047D60
    // 0x1503C544: nop

    sinf_recomp(rdram, ctx);
        goto after_13;
    // 0x1503C544: nop

    after_13:
    // 0x1503C548: lwc1        $f6, 0x48($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X48);
    // 0x1503C54C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1503C550: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1503C554: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1503C558: lwc1        $f14, 0xE8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x1503C55C: lwc1        $f10, 0x12C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1503C560: lwc1        $f12, 0xE4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x1503C564: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1503C568: lbu         $t8, -0x1540($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1540);
    // 0x1503C56C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x1503C570: mul.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x1503C574: lwc1        $f4, 0xFC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x1503C578: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1503C57C: lui         $ra, 0x800C
    ctx->r31 = S32(0X800C << 16);
    // 0x1503C580: addiu       $ra, $ra, -0x15F4
    ctx->r31 = ADD32(ctx->r31, -0X15F4);
    // 0x1503C584: addiu       $t5, $t5, 0x4008
    ctx->r13 = ADD32(ctx->r13, 0X4008);
    // 0x1503C588: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1503C58C: mul.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1503C590: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1503C594: mul.s       $f10, $f14, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x1503C598: swc1        $f8, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f8.u32l;
    // 0x1503C59C: lwc1        $f8, 0x134($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X134);
    // 0x1503C5A0: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1503C5A4: mul.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1503C5A8: swc1        $f6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f6.u32l;
    // 0x1503C5AC: lwc1        $f6, 0x104($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X104);
    // 0x1503C5B0: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1503C5B4: mul.s       $f8, $f12, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x1503C5B8: swc1        $f10, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f10.u32l;
    // 0x1503C5BC: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1503C5C0: bne         $t8, $zero, L_1503C6D0
    if (ctx->r24 != 0) {
        // 0x1503C5C4: swc1        $f4, 0x104($sp)
        MEM_W(0X104, ctx->r29) = ctx->f4.u32l;
            goto L_1503C6D0;
    }
    // 0x1503C5C4: swc1        $f4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f4.u32l;
    // 0x1503C5C8: lbu         $t7, 0x0($ra)
    ctx->r15 = MEM_BU(ctx->r31, 0X0);
    // 0x1503C5CC: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    // 0x1503C5D0: bnel        $t7, $zero, L_1503C6D4
    if (ctx->r15 != 0) {
        // 0x1503C5D4: lw          $t6, 0xA0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XA0);
            goto L_1503C6D4;
    }
    goto skip_28;
    // 0x1503C5D4: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    skip_28:
    // 0x1503C5D8: bnel        $t9, $zero, L_1503C6D4
    if (ctx->r25 != 0) {
        // 0x1503C5DC: lw          $t6, 0xA0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XA0);
            goto L_1503C6D4;
    }
    goto skip_29;
    // 0x1503C5DC: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    skip_29:
    // 0x1503C5E0: lwc1        $f2, 0x44($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X44);
    // 0x1503C5E4: lwc1        $f10, 0x40($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X40);
    // 0x1503C5E8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1503C5EC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1503C5F0: add.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x1503C5F4: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x1503C5F8: swc1        $f6, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f6.u32l;
    // 0x1503C5FC: lwc1        $f12, 0x40($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X40);
    // 0x1503C600: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x1503C604: nop

    // 0x1503C608: bc1tl       L_1503C628
    if (c1cs) {
        // 0x1503C60C: lui         $at, 0x4170
        ctx->r1 = S32(0X4170 << 16);
            goto L_1503C628;
    }
    goto skip_30;
    // 0x1503C60C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    skip_30:
    // 0x1503C610: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1503C614: nop

    // 0x1503C618: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x1503C61C: nop

    // 0x1503C620: bc1f        L_1503C6D0
    if (!c1cs) {
        // 0x1503C624: lui         $at, 0x4170
        ctx->r1 = S32(0X4170 << 16);
            goto L_1503C6D0;
    }
    // 0x1503C624: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
L_1503C628:
    // 0x1503C628: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1503C62C: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x1503C630: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1503C634: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x1503C638: nop

    // 0x1503C63C: bc1f        L_1503C680
    if (!c1cs) {
        // 0x1503C640: nop
    
            goto L_1503C680;
    }
    // 0x1503C640: nop

    // 0x1503C644: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1503C648: lwc1        $f8, 0x48($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X48);
    // 0x1503C64C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1503C650: mul.s       $f6, $f2, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x1503C654: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x1503C658: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x1503C65C: swc1        $f6, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f6.u32l;
    // 0x1503C660: bc1f        L_1503C674
    if (!c1cs) {
        // 0x1503C664: swc1        $f10, 0x48($s1)
        MEM_W(0X48, ctx->r17) = ctx->f10.u32l;
            goto L_1503C674;
    }
    // 0x1503C664: swc1        $f10, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->f10.u32l;
    // 0x1503C668: sub.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x1503C66C: b           L_1503C6D0
    // 0x1503C670: swc1        $f6, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f6.u32l;
        goto L_1503C6D0;
    // 0x1503C670: swc1        $f6, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f6.u32l;
L_1503C674:
    // 0x1503C674: add.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x1503C678: b           L_1503C6D0
    // 0x1503C67C: swc1        $f8, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f8.u32l;
        goto L_1503C6D0;
    // 0x1503C67C: swc1        $f8, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f8.u32l;
L_1503C680:
    // 0x1503C680: jal         0x150ADA20
    // 0x1503C684: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_14;
    // 0x1503C684: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    after_14:
    // 0x1503C688: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x1503C68C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1503C690: mfhi        $t6
    ctx->r14 = hi;
    // 0x1503C694: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1503C698: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1503C69C: lui         $ra, 0x800C
    ctx->r31 = S32(0X800C << 16);
    // 0x1503C6A0: addiu       $ra, $ra, -0x15F4
    ctx->r31 = ADD32(ctx->r31, -0X15F4);
    // 0x1503C6A4: addiu       $t5, $t5, 0x4008
    ctx->r13 = ADD32(ctx->r13, 0X4008);
    // 0x1503C6A8: b           L_1503C6D0
    // 0x1503C6AC: sh          $t6, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r14;
        goto L_1503C6D0;
    // 0x1503C6AC: sh          $t6, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r14;
L_1503C6B0:
    // 0x1503C6B0: lbu         $t8, -0x1540($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1540);
    // 0x1503C6B4: bnel        $t8, $zero, L_1503C6D4
    if (ctx->r24 != 0) {
        // 0x1503C6B8: lw          $t6, 0xA0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XA0);
            goto L_1503C6D4;
    }
    goto skip_31;
    // 0x1503C6B8: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    skip_31:
    // 0x1503C6BC: lbu         $t7, 0x0($ra)
    ctx->r15 = MEM_BU(ctx->r31, 0X0);
    // 0x1503C6C0: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x1503C6C4: bnel        $t7, $zero, L_1503C6D4
    if (ctx->r15 != 0) {
        // 0x1503C6C8: lw          $t6, 0xA0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XA0);
            goto L_1503C6D4;
    }
    goto skip_32;
    // 0x1503C6C8: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    skip_32:
    // 0x1503C6CC: sh          $t9, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r25;
L_1503C6D0:
    // 0x1503C6D0: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
L_1503C6D4:
    // 0x1503C6D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1503C6D8: addiu       $a2, $sp, 0x108
    ctx->r6 = ADD32(ctx->r29, 0X108);
    // 0x1503C6DC: bne         $t6, $at, L_1503C708
    if (ctx->r14 != ctx->r1) {
        // 0x1503C6E0: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_1503C708;
    }
    // 0x1503C6E0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x1503C6E4: lbu         $t8, 0x4E($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X4E);
    // 0x1503C6E8: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x1503C6EC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1503C6F0: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x1503C6F4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1503C6F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1503C6FC: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1503C700: div.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1503C704: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
L_1503C708:
    // 0x1503C708: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1503C70C: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x1503C710: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1503C714: addiu       $t3, $t3, -0x78F0
    ctx->r11 = ADD32(ctx->r11, -0X78F0);
    // 0x1503C718: addiu       $v0, $s1, 0xC
    ctx->r2 = ADD32(ctx->r17, 0XC);
    // 0x1503C71C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x1503C720: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1503C724: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
L_1503C728:
    // 0x1503C728: lwc1        $f12, 0x14C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x1503C72C: lwc1        $f4, -0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, -0XC);
    // 0x1503C730: lwc1        $f6, -0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0XC);
    // 0x1503C734: lwc1        $f8, -0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, -0X8);
    // 0x1503C738: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1503C73C: lwc1        $f4, 0x150($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X150);
    // 0x1503C740: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1503C744: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
    // 0x1503C748: lbu         $v1, -0x1540($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1540);
    // 0x1503C74C: add.s       $f22, $f10, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1503C750: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x1503C754: lwc1        $f8, -0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, -0X4);
    // 0x1503C758: lwc1        $f6, -0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0X8);
    // 0x1503C75C: mul.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x1503C760: add.s       $f20, $f10, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1503C764: lwc1        $f10, -0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X4);
    // 0x1503C768: bne         $a3, $zero, L_1503C78C
    if (ctx->r7 != 0) {
        // 0x1503C76C: add.s       $f18, $f4, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
            goto L_1503C78C;
    }
    // 0x1503C76C: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1503C770: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x1503C774: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x1503C778: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x1503C77C: sub.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f6.fl;
    // 0x1503C780: sub.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x1503C784: b           L_1503C7A4
    // 0x1503C788: sub.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f4.fl;
        goto L_1503C7A4;
    // 0x1503C788: sub.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f4.fl;
L_1503C78C:
    // 0x1503C78C: lwc1        $f10, -0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, -0XC);
    // 0x1503C790: lwc1        $f6, -0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, -0X8);
    // 0x1503C794: lwc1        $f8, -0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, -0X4);
    // 0x1503C798: sub.s       $f22, $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f10.fl;
    // 0x1503C79C: sub.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x1503C7A0: sub.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f8.fl;
L_1503C7A4:
    // 0x1503C7A4: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x1503C7A8: nop

    // 0x1503C7AC: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x1503C7B0: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1503C7B4: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x1503C7B8: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x1503C7BC: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1503C7C0: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1503C7C4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1503C7C8: div.s       $f2, $f24, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f24.fl, ctx->f0.fl);
    // 0x1503C7CC: mul.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x1503C7D0: nop

    // 0x1503C7D4: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x1503C7D8: nop

    // 0x1503C7DC: mul.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x1503C7E0: nop

    // 0x1503C7E4: mul.s       $f10, $f4, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x1503C7E8: nop

    // 0x1503C7EC: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x1503C7F0: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1503C7F4: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    // 0x1503C7F8: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x1503C7FC: lwc1        $f8, 0x150($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X150);
    // 0x1503C800: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x1503C804: nop

    // 0x1503C808: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1503C80C: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x1503C810: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1503C814: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x1503C818: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x1503C81C: lwc1        $f8, 0x14C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x1503C820: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1503C824: nop

    // 0x1503C828: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1503C82C: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x1503C830: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1503C834: bne         $v1, $zero, L_1503C8C0
    if (ctx->r3 != 0) {
        // 0x1503C838: swc1        $f8, 0xF4($sp)
        MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
            goto L_1503C8C0;
    }
    // 0x1503C838: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    // 0x1503C83C: lbu         $t6, 0x0($ra)
    ctx->r14 = MEM_BU(ctx->r31, 0X0);
    // 0x1503C840: bnel        $t6, $zero, L_1503C8C4
    if (ctx->r14 != 0) {
        // 0x1503C844: lwc1        $f10, 0x0($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
            goto L_1503C8C4;
    }
    goto skip_33;
    // 0x1503C844: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    skip_33:
    // 0x1503C848: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1503C84C: addu        $t7, $t3, $a3
    ctx->r15 = ADD32(ctx->r11, ctx->r7);
    // 0x1503C850: bne         $t4, $zero, L_1503C864
    if (ctx->r12 != 0) {
        // 0x1503C854: sub.s       $f0, $f4, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f12.fl;
            goto L_1503C864;
    }
    // 0x1503C854: sub.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x1503C858: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x1503C85C: mul.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1503C860: nop

L_1503C864:
    // 0x1503C864: add.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x1503C868: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1503C86C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503C870: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x1503C874: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x1503C878: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x1503C87C: addu        $t8, $t3, $a3
    ctx->r24 = ADD32(ctx->r11, ctx->r7);
    // 0x1503C880: bne         $t4, $zero, L_1503C894
    if (ctx->r12 != 0) {
        // 0x1503C884: sub.s       $f0, $f8, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f14.fl;
            goto L_1503C894;
    }
    // 0x1503C884: sub.s       $f0, $f8, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x1503C888: lwc1        $f4, -0x78E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X78E0);
    // 0x1503C88C: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1503C890: nop

L_1503C894:
    // 0x1503C894: add.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x1503C898: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1503C89C: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x1503C8A0: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x1503C8A4: bne         $t4, $zero, L_1503C8B8
    if (ctx->r12 != 0) {
        // 0x1503C8A8: sub.s       $f0, $f6, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f16.fl;
            goto L_1503C8B8;
    }
    // 0x1503C8A8: sub.s       $f0, $f6, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x1503C8AC: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x1503C8B0: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1503C8B4: nop

L_1503C8B8:
    // 0x1503C8B8: add.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x1503C8BC: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_1503C8C0:
    // 0x1503C8C0: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
L_1503C8C4:
    // 0x1503C8C4: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1503C8C8: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1503C8CC: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
    // 0x1503C8D0: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x1503C8D4: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1503C8D8: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1503C8DC: swc1        $f6, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f6.u32l;
    // 0x1503C8E0: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x1503C8E4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1503C8E8: lwc1        $f6, 0x138($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X138);
    // 0x1503C8EC: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    // 0x1503C8F0: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1503C8F4: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x1503C8F8: lwc1        $f4, 0x13C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x1503C8FC: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x1503C900: swc1        $f10, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f10.u32l;
    // 0x1503C904: mul.s       $f10, $f4, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x1503C908: sw          $t2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r10;
    // 0x1503C90C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x1503C910: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x1503C914: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x1503C918: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x1503C91C: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x1503C920: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1503C924: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x1503C928: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x1503C92C: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1503C930: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1503C934: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1503C938: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1503C93C: div.s       $f2, $f24, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f24.fl, ctx->f0.fl);
    // 0x1503C940: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1503C944: nop

    // 0x1503C948: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1503C94C: nop

    // 0x1503C950: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1503C954: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
    // 0x1503C958: mul.s       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x1503C95C: swc1        $f6, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f6.u32l;
    // 0x1503C960: mul.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x1503C964: swc1        $f4, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f4.u32l;
    // 0x1503C968: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1503C96C: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x1503C970: jal         0x15048360
    // 0x1503C974: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    func_15048360(rdram, ctx);
        goto after_15;
    // 0x1503C974: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    after_15:
    // 0x1503C978: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503C97C: lwc1        $f8, -0x77A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X77A4);
    // 0x1503C980: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1503C984: lbu         $t9, -0x1540($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1540);
    // 0x1503C988: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1503C98C: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x1503C990: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1503C994: lui         $ra, 0x800C
    ctx->r31 = S32(0X800C << 16);
    // 0x1503C998: addiu       $ra, $ra, -0x15F4
    ctx->r31 = ADD32(ctx->r31, -0X15F4);
    // 0x1503C99C: addiu       $t5, $t5, 0x4008
    ctx->r13 = ADD32(ctx->r13, 0X4008);
    // 0x1503C9A0: addiu       $t3, $t3, -0x78F0
    ctx->r11 = ADD32(ctx->r11, -0X78F0);
    // 0x1503C9A4: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x1503C9A8: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x1503C9AC: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x1503C9B0: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x1503C9B4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x1503C9B8: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x1503C9BC: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x1503C9C0: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1503C9C4: bne         $t9, $zero, L_1503CA4C
    if (ctx->r25 != 0) {
        // 0x1503C9C8: abs.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
            goto L_1503CA4C;
    }
    // 0x1503C9C8: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1503C9CC: lbu         $t6, 0x0($ra)
    ctx->r14 = MEM_BU(ctx->r31, 0X0);
    // 0x1503C9D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503C9D4: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x1503C9D8: bnel        $t6, $zero, L_1503CA50
    if (ctx->r14 != 0) {
        // 0x1503C9DC: lwc1        $f10, 0x0($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
            goto L_1503CA50;
    }
    goto skip_34;
    // 0x1503C9DC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    skip_34:
    // 0x1503C9E0: lwc1        $f12, -0x78D0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X78D0);
    // 0x1503C9E4: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x1503C9E8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x1503C9EC: nop

    // 0x1503C9F0: bc1fl       L_1503CA50
    if (!c1cs) {
        // 0x1503C9F4: lwc1        $f10, 0x0($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
            goto L_1503CA50;
    }
    goto skip_35;
    // 0x1503C9F4: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    skip_35:
    // 0x1503C9F8: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1503C9FC: beq         $t4, $zero, L_1503CA08
    if (ctx->r12 == 0) {
        // 0x1503CA00: sub.s       $f2, $f24, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f24.fl - ctx->f2.fl;
            goto L_1503CA08;
    }
    // 0x1503CA00: sub.s       $f2, $f24, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f24.fl - ctx->f2.fl;
    // 0x1503CA04: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
L_1503CA08:
    // 0x1503CA08: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1503CA0C: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1503CA10: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1503CA14: sub.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x1503CA18: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1503CA1C: add.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x1503CA20: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x1503CA24: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x1503CA28: sub.s       $f0, $f8, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x1503CA2C: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1503CA30: add.s       $f10, $f14, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x1503CA34: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x1503CA38: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x1503CA3C: sub.s       $f0, $f6, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x1503CA40: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1503CA44: add.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x1503CA48: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_1503CA4C:
    // 0x1503CA4C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
L_1503CA50:
    // 0x1503CA50: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1503CA54: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x1503CA58: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x1503CA5C: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1503CA60: subu        $t9, $t9, $t2
    ctx->r25 = SUB32(ctx->r25, ctx->r10);
    // 0x1503CA64: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1503CA68: addu        $v1, $s1, $t9
    ctx->r3 = ADD32(ctx->r17, ctx->r25);
    // 0x1503CA6C: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
    // 0x1503CA70: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1503CA74: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x1503CA78: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x1503CA7C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x1503CA80: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1503CA84: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x1503CA88: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x1503CA8C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x1503CA90: swc1        $f6, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f6.u32l;
    // 0x1503CA94: lwc1        $f8, -0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X4);
    // 0x1503CA98: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x1503CA9C: lwc1        $f6, 0x138($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X138);
    // 0x1503CAA0: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x1503CAA4: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1503CAA8: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x1503CAAC: lwc1        $f4, 0x13C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x1503CAB0: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x1503CAB4: swc1        $f10, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f10.u32l;
    // 0x1503CAB8: mul.s       $f10, $f4, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x1503CABC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x1503CAC0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1503CAC4: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x1503CAC8: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1503CACC: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1503CAD0: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1503CAD4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1503CAD8: div.s       $f2, $f24, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f24.fl, ctx->f0.fl);
    // 0x1503CADC: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1503CAE0: nop

    // 0x1503CAE4: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1503CAE8: nop

    // 0x1503CAEC: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1503CAF0: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
    // 0x1503CAF4: swc1        $f6, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f6.u32l;
    // 0x1503CAF8: swc1        $f4, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f4.u32l;
    // 0x1503CAFC: lwc1        $f6, -0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, -0X4);
    // 0x1503CB00: lwc1        $f4, 0x14C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x1503CB04: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1503CB08: lwc1        $f8, -0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, -0XC);
    // 0x1503CB0C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1503CB10: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1503CB14: swc1        $f10, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f10.u32l;
    // 0x1503CB18: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x1503CB1C: lwc1        $f6, 0x13C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x1503CB20: lwc1        $f10, 0x150($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X150);
    // 0x1503CB24: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x1503CB28: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1503CB2C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1503CB30: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1503CB34: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1503CB38: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1503CB3C: swc1        $f8, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f8.u32l;
    // 0x1503CB40: lwc1        $f4, 0x140($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X140);
    // 0x1503CB44: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1503CB48: lwc1        $f8, 0x14C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x1503CB4C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1503CB50: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1503CB54: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1503CB58: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1503CB5C: bne         $a3, $at, L_1503C728
    if (ctx->r7 != ctx->r1) {
        // 0x1503CB60: swc1        $f6, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f6.u32l;
            goto L_1503C728;
    }
    // 0x1503CB60: swc1        $f6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f6.u32l;
    // 0x1503CB64: lw          $a0, 0x150($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X150);
    // 0x1503CB68: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x1503CB6C: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x1503CB70: jal         0x1503CB98
    // 0x1503CB74: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_1503CB98(rdram, ctx);
        goto after_16;
    // 0x1503CB74: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_16:
L_1503CB78:
    // 0x1503CB78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1503CB7C:
    // 0x1503CB7C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x1503CB80: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x1503CB84: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x1503CB88: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x1503CB8C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x1503CB90: jr          $ra
    // 0x1503CB94: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    return;
    // 0x1503CB94: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_15185C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15185C44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15185C48: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15185C4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15185C50: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x15185C54: nop

    // 0x15185C58: bc1f        L_15185C64
    if (!c1cs) {
        // 0x15185C5C: nop
    
            goto L_15185C64;
    }
    // 0x15185C5C: nop

    // 0x15185C60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15185C64:
    // 0x15185C64: jr          $ra
    // 0x15185C68: nop

    return;
    return;
    // 0x15185C68: nop

;}
RECOMP_FUNC void func_15005FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005FA0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15005FA4: jr          $ra
    // 0x15005FA8: nop

    return;
    return;
    // 0x15005FA8: nop

;}
RECOMP_FUNC void func_10020ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10020ABC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x10020AC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10020AC4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x10020AC8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x10020ACC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x10020AD0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x10020AD4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x10020AD8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x10020ADC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x10020AE0: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x10020AE4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x10020AE8: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x10020AEC: beq         $t9, $zero, L_10020B04
    if (ctx->r25 == 0) {
        // 0x10020AF0: nop
    
            goto L_10020B04;
    }
    // 0x10020AF0: nop

    // 0x10020AF4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x10020AF8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x10020AFC: lw          $t2, 0x28($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X28);
    // 0x10020B00: sb          $t0, 0xA($t2)
    MEM_B(0XA, ctx->r10) = ctx->r8;
L_10020B04:
    // 0x10020B04: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x10020B08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x10020B0C: lw          $t4, 0x8C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8C);
    // 0x10020B10: bne         $t4, $at, L_10020B24
    if (ctx->r12 != ctx->r1) {
        // 0x10020B14: nop
    
            goto L_10020B24;
    }
    // 0x10020B14: nop

    // 0x10020B18: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x10020B1C: bne         $t5, $zero, L_10020B2C
    if (ctx->r13 != 0) {
        // 0x10020B20: nop
    
            goto L_10020B2C;
    }
    // 0x10020B20: nop

L_10020B24:
    // 0x10020B24: b           L_10020E08
    // 0x10020B28: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
        goto L_10020E08;
    // 0x10020B28: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_10020B2C:
    // 0x10020B2C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x10020B30: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x10020B34: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x10020B38: jal         0x10022040
    // 0x10020B3C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    func_10022040(rdram, ctx);
        goto after_0;
    // 0x10020B3C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    after_0:
    // 0x10020B40: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x10020B44: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10020B48: lw          $t7, 0x80($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X80);
    // 0x10020B4C: beq         $t7, $zero, L_10020D50
    if (ctx->r15 == 0) {
        // 0x10020B50: nop
    
            goto L_10020D50;
    }
    // 0x10020B50: nop

    // 0x10020B54: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x10020B58: sw          $zero, 0x80($t8)
    MEM_W(0X80, ctx->r24) = 0;
    // 0x10020B5C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x10020B60: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x10020B64: lh          $t1, 0x60($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X60);
    // 0x10020B68: lh          $t3, 0x62($t9)
    ctx->r11 = MEM_H(ctx->r25, 0X62);
    // 0x10020B6C: sll         $t0, $t1, 1
    ctx->r8 = S32(ctx->r9 << 1);
    // 0x10020B70: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x10020B74: lh          $t2, -0x43F0($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X43F0);
    // 0x10020B78: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10020B7C: mflo        $t4
    ctx->r12 = lo;
    // 0x10020B80: sra         $t5, $t4, 15
    ctx->r13 = S32(SIGNED(ctx->r12) >> 15);
    // 0x10020B84: sh          $t5, 0x70($t9)
    MEM_H(0X70, ctx->r25) = ctx->r13;
    // 0x10020B88: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10020B8C: lh          $t7, 0x64($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X64);
    // 0x10020B90: lh          $t8, 0x70($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X70);
    // 0x10020B94: lw          $a2, 0x7C($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X7C);
    // 0x10020B98: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x10020B9C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x10020BA0: addiu       $a3, $t6, 0x6C
    ctx->r7 = ADD32(ctx->r14, 0X6C);
    // 0x10020BA4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x10020BA8: jal         0x10020E18
    // 0x10020BAC: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    _getRate(rdram, ctx);
        goto after_1;
    // 0x10020BAC: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x10020BB0: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x10020BB4: sh          $v0, 0x6E($t1)
    MEM_H(0X6E, ctx->r9) = ctx->r2;
    // 0x10020BB8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x10020BBC: lui         $t5, 0x8003
    ctx->r13 = S32(0X8003 << 16);
    // 0x10020BC0: lh          $t2, 0x60($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X60);
    // 0x10020BC4: lh          $t9, 0x62($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X62);
    // 0x10020BC8: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x10020BCC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x10020BD0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x10020BD4: lh          $t5, -0x42F2($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X42F2);
    // 0x10020BD8: multu       $t5, $t9
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10020BDC: mflo        $t7
    ctx->r15 = lo;
    // 0x10020BE0: sra         $t8, $t7, 15
    ctx->r24 = S32(SIGNED(ctx->r15) >> 15);
    // 0x10020BE4: sh          $t8, 0x76($t0)
    MEM_H(0X76, ctx->r8) = ctx->r24;
    // 0x10020BE8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10020BEC: lh          $t1, 0x66($t6)
    ctx->r9 = MEM_H(ctx->r14, 0X66);
    // 0x10020BF0: lh          $t2, 0x76($t6)
    ctx->r10 = MEM_H(ctx->r14, 0X76);
    // 0x10020BF4: lw          $a2, 0x7C($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X7C);
    // 0x10020BF8: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x10020BFC: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x10020C00: addiu       $a3, $t6, 0x72
    ctx->r7 = ADD32(ctx->r14, 0X72);
    // 0x10020C04: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x10020C08: jal         0x10020E18
    // 0x10020C0C: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    _getRate(rdram, ctx);
        goto after_2;
    // 0x10020C0C: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_2:
    // 0x10020C10: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x10020C14: sh          $v0, 0x74($t3)
    MEM_H(0X74, ctx->r11) = ctx->r2;
    // 0x10020C18: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x10020C1C: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x10020C20: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x10020C24: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x10020C28: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x10020C2C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x10020C30: lui         $at, 0x906
    ctx->r1 = S32(0X906 << 16);
    // 0x10020C34: lh          $t7, 0x64($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X64);
    // 0x10020C38: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x10020C3C: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x10020C40: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x10020C44: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x10020C48: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x10020C4C: lh          $t6, 0x68($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X68);
    // 0x10020C50: lh          $t5, 0x6A($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X6A);
    // 0x10020C54: andi        $t3, $t6, 0xFFFF
    ctx->r11 = ctx->r14 & 0XFFFF;
    // 0x10020C58: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x10020C5C: andi        $t9, $t5, 0xFFFF
    ctx->r25 = ctx->r13 & 0XFFFF;
    // 0x10020C60: or          $t7, $t4, $t9
    ctx->r15 = ctx->r12 | ctx->r25;
    // 0x10020C64: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x10020C68: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x10020C6C: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x10020C70: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x10020C74: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x10020C78: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10020C7C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x10020C80: lui         $at, 0x904
    ctx->r1 = S32(0X904 << 16);
    // 0x10020C84: lh          $t3, 0x76($t6)
    ctx->r11 = MEM_H(ctx->r14, 0X76);
    // 0x10020C88: andi        $t2, $t3, 0xFFFF
    ctx->r10 = ctx->r11 & 0XFFFF;
    // 0x10020C8C: or          $t5, $t2, $at
    ctx->r13 = ctx->r10 | ctx->r1;
    // 0x10020C90: sw          $t5, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r13;
    // 0x10020C94: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x10020C98: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x10020C9C: lh          $t7, 0x74($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X74);
    // 0x10020CA0: lhu         $t1, 0x72($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X72);
    // 0x10020CA4: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x10020CA8: sll         $t0, $t8, 16
    ctx->r8 = S32(ctx->r24 << 16);
    // 0x10020CAC: andi        $t6, $t1, 0xFFFF
    ctx->r14 = ctx->r9 & 0XFFFF;
    // 0x10020CB0: or          $t3, $t0, $t6
    ctx->r11 = ctx->r8 | ctx->r14;
    // 0x10020CB4: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
    // 0x10020CB8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x10020CBC: addiu       $t4, $t5, 0x8
    ctx->r12 = ADD32(ctx->r13, 0X8);
    // 0x10020CC0: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x10020CC4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x10020CC8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x10020CCC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x10020CD0: lui         $at, 0x900
    ctx->r1 = S32(0X900 << 16);
    // 0x10020CD4: lh          $t8, 0x70($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X70);
    // 0x10020CD8: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x10020CDC: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x10020CE0: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x10020CE4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10020CE8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x10020CEC: lh          $t3, 0x6E($t6)
    ctx->r11 = MEM_H(ctx->r14, 0X6E);
    // 0x10020CF0: lhu         $t4, 0x6C($t6)
    ctx->r12 = MEM_HU(ctx->r14, 0X6C);
    // 0x10020CF4: andi        $t2, $t3, 0xFFFF
    ctx->r10 = ctx->r11 & 0XFFFF;
    // 0x10020CF8: sll         $t5, $t2, 16
    ctx->r13 = S32(ctx->r10 << 16);
    // 0x10020CFC: andi        $t7, $t4, 0xFFFF
    ctx->r15 = ctx->r12 & 0XFFFF;
    // 0x10020D00: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x10020D04: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x10020D08: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x10020D0C: addiu       $t0, $t1, 0x8
    ctx->r8 = ADD32(ctx->r9, 0X8);
    // 0x10020D10: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x10020D14: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x10020D18: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x10020D1C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x10020D20: lui         $at, 0x301
    ctx->r1 = S32(0X301 << 16);
    // 0x10020D24: lh          $t2, 0x66($t3)
    ctx->r10 = MEM_H(ctx->r11, 0X66);
    // 0x10020D28: andi        $t6, $t2, 0xFFFF
    ctx->r14 = ctx->r10 & 0XFFFF;
    // 0x10020D2C: or          $t4, $t6, $at
    ctx->r12 = ctx->r14 | ctx->r1;
    // 0x10020D30: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x10020D34: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x10020D38: jal         0x100233C0
    // 0x10020D3C: lw          $a0, 0x5C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X5C);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_3;
    // 0x10020D3C: lw          $a0, 0x5C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X5C);
    after_3:
    // 0x10020D40: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x10020D44: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x10020D48: b           L_10020D80
    // 0x10020D4C: nop

        goto L_10020D80;
    // 0x10020D4C: nop

L_10020D50:
    // 0x10020D50: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x10020D54: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x10020D58: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x10020D5C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x10020D60: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x10020D64: lui         $t0, 0x300
    ctx->r8 = S32(0X300 << 16);
    // 0x10020D68: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x10020D6C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x10020D70: jal         0x100233C0
    // 0x10020D74: lw          $a0, 0x5C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X5C);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x10020D74: lw          $a0, 0x5C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X5C);
    after_4:
    // 0x10020D78: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x10020D7C: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
L_10020D80:
    // 0x10020D80: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x10020D84: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x10020D88: addiu       $t7, $t5, 0x170
    ctx->r15 = ADD32(ctx->r13, 0X170);
    // 0x10020D8C: sh          $t7, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r15;
    // 0x10020D90: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x10020D94: lw          $t9, 0x78($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X78);
    // 0x10020D98: addiu       $t1, $t9, 0xB8
    ctx->r9 = ADD32(ctx->r25, 0XB8);
    // 0x10020D9C: sw          $t1, 0x78($t8)
    MEM_W(0X78, ctx->r24) = ctx->r9;
    // 0x10020DA0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x10020DA4: lh          $t3, 0x68($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X68);
    // 0x10020DA8: andi        $t2, $t3, 0x2
    ctx->r10 = ctx->r11 & 0X2;
    // 0x10020DAC: bne         $t2, $zero, L_10020DC4
    if (ctx->r10 != 0) {
        // 0x10020DB0: nop
    
            goto L_10020DC4;
    }
    // 0x10020DB0: nop

    // 0x10020DB4: lh          $t6, 0x6A($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X6A);
    // 0x10020DB8: andi        $t5, $t6, 0x2
    ctx->r13 = ctx->r14 & 0X2;
    // 0x10020DBC: beq         $t5, $zero, L_10020DF8
    if (ctx->r13 == 0) {
        // 0x10020DC0: nop
    
            goto L_10020DF8;
    }
    // 0x10020DC0: nop

L_10020DC4:
    // 0x10020DC4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x10020DC8: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x10020DCC: lh          $t4, 0x68($t7)
    ctx->r12 = MEM_H(ctx->r15, 0X68);
    // 0x10020DD0: and         $t9, $t4, $at
    ctx->r25 = ctx->r12 & ctx->r1;
    // 0x10020DD4: sh          $t9, 0x68($t7)
    MEM_H(0X68, ctx->r15) = ctx->r25;
    // 0x10020DD8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x10020DDC: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x10020DE0: lh          $t8, 0x6A($t1)
    ctx->r24 = MEM_H(ctx->r9, 0X6A);
    // 0x10020DE4: and         $t3, $t8, $at
    ctx->r11 = ctx->r24 & ctx->r1;
    // 0x10020DE8: sh          $t3, 0x6A($t1)
    MEM_H(0X6A, ctx->r9) = ctx->r11;
    // 0x10020DEC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x10020DF0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x10020DF4: sw          $t2, 0x80($t0)
    MEM_W(0X80, ctx->r8) = ctx->r10;
L_10020DF8:
    // 0x10020DF8: b           L_10020E08
    // 0x10020DFC: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
        goto L_10020E08;
    // 0x10020DFC: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x10020E00: b           L_10020E08
    // 0x10020E04: nop

        goto L_10020E08;
    // 0x10020E04: nop

L_10020E08:
    // 0x10020E08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10020E0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x10020E10: jr          $ra
    // 0x10020E14: nop

    return;
    return;
    // 0x10020E14: nop

;}
RECOMP_FUNC void func_151E8214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E8214: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151E8218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151E821C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151E8220: lbu         $t6, 0xB94($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XB94);
    // 0x151E8224: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x151E8228: beql        $t6, $at, L_151E82AC
    if (ctx->r14 == ctx->r1) {
        // 0x151E822C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151E82AC;
    }
    goto skip_0;
    // 0x151E822C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151E8230: jal         0x1517EFDC
    // 0x151E8234: nop

    func_1517EFDC(rdram, ctx);
        goto after_0;
    // 0x151E8234: nop

    after_0:
    // 0x151E8238: bne         $v0, $zero, L_151E8248
    if (ctx->r2 != 0) {
        // 0x151E823C: lui         $v1, 0x800E
        ctx->r3 = S32(0X800E << 16);
            goto L_151E8248;
    }
    // 0x151E823C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E8240: addiu       $v1, $v1, 0xA90
    ctx->r3 = ADD32(ctx->r3, 0XA90);
    // 0x151E8244: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_151E8248:
    // 0x151E8248: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E824C: addiu       $v1, $v1, 0xA90
    ctx->r3 = ADD32(ctx->r3, 0XA90);
    // 0x151E8250: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x151E8254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151E8258: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x151E825C: slti        $at, $t7, 0xA1
    ctx->r1 = SIGNED(ctx->r15) < 0XA1 ? 1 : 0;
    // 0x151E8260: bne         $at, $zero, L_151E82A8
    if (ctx->r1 != 0) {
        // 0x151E8264: addiu       $t9, $zero, -0x2
        ctx->r25 = ADD32(0, -0X2);
            goto L_151E82A8;
    }
    // 0x151E8264: addiu       $t9, $zero, -0x2
    ctx->r25 = ADD32(0, -0X2);
    // 0x151E8268: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E826C: sh          $zero, -0x234($at)
    MEM_H(-0X234, ctx->r1) = 0;
    // 0x151E8270: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E8274: sb          $t8, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r24;
    // 0x151E8278: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E827C: sb          $v0, -0x274($at)
    MEM_B(-0X274, ctx->r1) = ctx->r2;
    // 0x151E8280: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E8284: sb          $v0, -0x270($at)
    MEM_B(-0X270, ctx->r1) = ctx->r2;
    // 0x151E8288: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E828C: sb          $zero, -0x25C($at)
    MEM_B(-0X25C, ctx->r1) = 0;
    // 0x151E8290: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E8294: sh          $t9, 0xA80($at)
    MEM_H(0XA80, ctx->r1) = ctx->r25;
    // 0x151E8298: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x151E829C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x151E82A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151E82A4: sb          $t0, 0x2E43($at)
    MEM_B(0X2E43, ctx->r1) = ctx->r8;
L_151E82A8:
    // 0x151E82A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151E82AC:
    // 0x151E82AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151E82B0: jr          $ra
    // 0x151E82B4: nop

    return;
    return;
    // 0x151E82B4: nop

;}
RECOMP_FUNC void func_151C94D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C94D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151C94D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151C94DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151C94E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151C94E4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151C94E8: lw          $t7, 0x13C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X13C);
    // 0x151C94EC: addiu       $s0, $t6, 0x110
    ctx->r16 = ADD32(ctx->r14, 0X110);
    // 0x151C94F0: beql        $t7, $zero, L_151C9518
    if (ctx->r15 == 0) {
        // 0x151C94F4: lw          $s0, 0x20($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X20);
            goto L_151C9518;
    }
    goto skip_0;
    // 0x151C94F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x151C94F8: jal         0x1516972C
    // 0x151C94FC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151C94FC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_0:
    // 0x151C9500: lui         $a0, 0x151D
    ctx->r4 = S32(0X151D << 16);
    // 0x151C9504: addiu       $a0, $a0, -0x7854
    ctx->r4 = ADD32(ctx->r4, -0X7854);
    // 0x151C9508: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151C950C: jal         0x1000FD38
    // 0x151C9510: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1000FD38(rdram, ctx);
        goto after_1;
    // 0x151C9510: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x151C9514: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
L_151C9518:
    // 0x151C9518: lw          $a0, 0x144($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X144);
    // 0x151C951C: addiu       $s0, $s0, 0x110
    ctx->r16 = ADD32(ctx->r16, 0X110);
    // 0x151C9520: beql        $a0, $zero, L_151C9534
    if (ctx->r4 == 0) {
        // 0x151C9524: lw          $a0, 0x38($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X38);
            goto L_151C9534;
    }
    goto skip_1;
    // 0x151C9524: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    skip_1:
    // 0x151C9528: jal         0x1516972C
    // 0x151C952C: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x151C952C: nop

    after_2:
    // 0x151C9530: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
L_151C9534:
    // 0x151C9534: beql        $a0, $zero, L_151C9548
    if (ctx->r4 == 0) {
        // 0x151C9538: lw          $a0, 0x3C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X3C);
            goto L_151C9548;
    }
    goto skip_2;
    // 0x151C9538: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    skip_2:
    // 0x151C953C: jal         0x1516972C
    // 0x151C9540: nop

    func_1516972C(rdram, ctx);
        goto after_3;
    // 0x151C9540: nop

    after_3:
    // 0x151C9544: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
L_151C9548:
    // 0x151C9548: beql        $a0, $zero, L_151C955C
    if (ctx->r4 == 0) {
        // 0x151C954C: lw          $a0, 0x40($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X40);
            goto L_151C955C;
    }
    goto skip_3;
    // 0x151C954C: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    skip_3:
    // 0x151C9550: jal         0x1516972C
    // 0x151C9554: nop

    func_1516972C(rdram, ctx);
        goto after_4;
    // 0x151C9554: nop

    after_4:
    // 0x151C9558: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
L_151C955C:
    // 0x151C955C: beql        $a0, $zero, L_151C9570
    if (ctx->r4 == 0) {
        // 0x151C9560: lw          $a0, 0x44($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X44);
            goto L_151C9570;
    }
    goto skip_4;
    // 0x151C9560: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    skip_4:
    // 0x151C9564: jal         0x1516972C
    // 0x151C9568: nop

    func_1516972C(rdram, ctx);
        goto after_5;
    // 0x151C9568: nop

    after_5:
    // 0x151C956C: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
L_151C9570:
    // 0x151C9570: beql        $a0, $zero, L_151C9584
    if (ctx->r4 == 0) {
        // 0x151C9574: lw          $a0, 0x48($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X48);
            goto L_151C9584;
    }
    goto skip_5;
    // 0x151C9574: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    skip_5:
    // 0x151C9578: jal         0x1516972C
    // 0x151C957C: nop

    func_1516972C(rdram, ctx);
        goto after_6;
    // 0x151C957C: nop

    after_6:
    // 0x151C9580: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
L_151C9584:
    // 0x151C9584: beql        $a0, $zero, L_151C9598
    if (ctx->r4 == 0) {
        // 0x151C9588: lw          $a0, 0x4C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X4C);
            goto L_151C9598;
    }
    goto skip_6;
    // 0x151C9588: lw          $a0, 0x4C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4C);
    skip_6:
    // 0x151C958C: jal         0x1516972C
    // 0x151C9590: nop

    func_1516972C(rdram, ctx);
        goto after_7;
    // 0x151C9590: nop

    after_7:
    // 0x151C9594: lw          $a0, 0x4C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4C);
L_151C9598:
    // 0x151C9598: beql        $a0, $zero, L_151C95AC
    if (ctx->r4 == 0) {
        // 0x151C959C: lw          $a0, 0x50($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X50);
            goto L_151C95AC;
    }
    goto skip_7;
    // 0x151C959C: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    skip_7:
    // 0x151C95A0: jal         0x1516972C
    // 0x151C95A4: nop

    func_1516972C(rdram, ctx);
        goto after_8;
    // 0x151C95A4: nop

    after_8:
    // 0x151C95A8: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
L_151C95AC:
    // 0x151C95AC: beq         $a0, $zero, L_151C95BC
    if (ctx->r4 == 0) {
        // 0x151C95B0: nop
    
            goto L_151C95BC;
    }
    // 0x151C95B0: nop

    // 0x151C95B4: jal         0x1516972C
    // 0x151C95B8: nop

    func_1516972C(rdram, ctx);
        goto after_9;
    // 0x151C95B8: nop

    after_9:
L_151C95BC:
    // 0x151C95BC: jal         0x1513CA6C
    // 0x151C95C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_1513CA6C(rdram, ctx);
        goto after_10;
    // 0x151C95C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_10:
    // 0x151C95C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151C95C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151C95CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151C95D0: jr          $ra
    // 0x151C95D4: nop

    return;
    return;
    // 0x151C95D4: nop

;}
RECOMP_FUNC void func_151A26EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A26EC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x151A26F0: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x151A26F4: lh          $a3, 0xCA($sp)
    ctx->r7 = MEM_H(ctx->r29, 0XCA);
    // 0x151A26F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151A26FC: bgtz        $a3, L_151A2708
    if (SIGNED(ctx->r7) > 0) {
        // 0x151A2700: lh          $v0, 0xCE($sp)
        ctx->r2 = MEM_H(ctx->r29, 0XCE);
            goto L_151A2708;
    }
    // 0x151A2700: lh          $v0, 0xCE($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XCE);
    // 0x151A2704: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_151A2708:
    // 0x151A2708: bgtz        $v0, L_151A2714
    if (SIGNED(ctx->r2) > 0) {
        // 0x151A270C: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_151A2714;
    }
    // 0x151A270C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x151A2710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151A2714:
    // 0x151A2714: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x151A2718: mflo        $t6
    ctx->r14 = lo;
    // 0x151A271C: lh          $t8, 0xD2($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XD2);
    // 0x151A2720: lb          $t9, 0xD7($sp)
    ctx->r25 = MEM_B(ctx->r29, 0XD7);
    // 0x151A2724: div         $zero, $v1, $a3
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r7)));
    // 0x151A2728: addiu       $t1, $zero, 0x5203
    ctx->r9 = ADD32(0, 0X5203);
    // 0x151A272C: lwc1        $f0, 0xBC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x151A2730: sh          $t6, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r14;
    // 0x151A2734: sh          $t1, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r9;
    // 0x151A2738: lui         $t2, 0x20
    ctx->r10 = S32(0X20 << 16);
    // 0x151A273C: lh          $t3, 0xC2($sp)
    ctx->r11 = MEM_H(ctx->r29, 0XC2);
    // 0x151A2740: lbu         $t4, 0xDB($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XDB);
    // 0x151A2744: lbu         $t5, 0xDF($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XDF);
    // 0x151A2748: lbu         $t6, 0xE3($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XE3);
    // 0x151A274C: lbu         $t1, 0xC7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XC7);
    // 0x151A2750: mflo        $t7
    ctx->r15 = lo;
    // 0x151A2754: addiu       $t0, $zero, 0x27
    ctx->r8 = ADD32(0, 0X27);
    // 0x151A2758: ori         $t2, $t2, 0x5
    ctx->r10 = ctx->r10 | 0X5;
    // 0x151A275C: sh          $t7, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r15;
    // 0x151A2760: sb          $t0, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r8;
    // 0x151A2764: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x151A2768: sh          $t8, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r24;
    // 0x151A276C: sb          $t9, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = ctx->r25;
    // 0x151A2770: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151A2774: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151A2778: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151A277C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151A2780: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151A2784: swc1        $f12, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f12.u32l;
    // 0x151A2788: sh          $v0, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r2;
    // 0x151A278C: bne         $v0, $zero, L_151A2798
    if (ctx->r2 != 0) {
        // 0x151A2790: nop
    
            goto L_151A2798;
    }
    // 0x151A2790: nop

    // 0x151A2794: break       7
    do_break(354035604);
L_151A2798:
    // 0x151A2798: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A279C: bne         $v0, $at, L_151A27B0
    if (ctx->r2 != ctx->r1) {
        // 0x151A27A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A27B0;
    }
    // 0x151A27A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A27A4: bne         $v1, $at, L_151A27B0
    if (ctx->r3 != ctx->r1) {
        // 0x151A27A8: nop
    
            goto L_151A27B0;
    }
    // 0x151A27A8: nop

    // 0x151A27AC: break       6
    do_break(354035628);
L_151A27B0:
    // 0x151A27B0: sh          $a3, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r7;
    // 0x151A27B4: bne         $a3, $zero, L_151A27C0
    if (ctx->r7 != 0) {
        // 0x151A27B8: nop
    
            goto L_151A27C0;
    }
    // 0x151A27B8: nop

    // 0x151A27BC: break       7
    do_break(354035644);
L_151A27C0:
    // 0x151A27C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A27C4: bne         $a3, $at, L_151A27D8
    if (ctx->r7 != ctx->r1) {
        // 0x151A27C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A27D8;
    }
    // 0x151A27C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A27CC: bne         $v1, $at, L_151A27D8
    if (ctx->r3 != ctx->r1) {
        // 0x151A27D0: nop
    
            goto L_151A27D8;
    }
    // 0x151A27D0: nop

    // 0x151A27D4: break       6
    do_break(354035668);
L_151A27D8:
    // 0x151A27D8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151A27DC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151A27E0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x151A27E4: sb          $t7, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r15;
    // 0x151A27E8: sb          $t8, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r24;
    // 0x151A27EC: sb          $t9, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r25;
    // 0x151A27F0: sb          $t0, 0x42($sp)
    MEM_B(0X42, ctx->r29) = ctx->r8;
    // 0x151A27F4: sb          $t2, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r10;
    // 0x151A27F8: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x151A27FC: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x151A2800: sh          $t3, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r11;
    // 0x151A2804: sb          $t4, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r12;
    // 0x151A2808: sb          $t5, 0x3D($sp)
    MEM_B(0X3D, ctx->r29) = ctx->r13;
    // 0x151A280C: sb          $t6, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = ctx->r14;
    // 0x151A2810: sb          $t1, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r9;
    // 0x151A2814: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151A2818: addiu       $t3, $sp, 0x58
    ctx->r11 = ADD32(ctx->r29, 0X58);
    // 0x151A281C: addiu       $t7, $sp, 0x64
    ctx->r15 = ADD32(ctx->r29, 0X64);
    // 0x151A2820: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151A2824: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x151A2828: addiu       $t1, $sp, 0x70
    ctx->r9 = ADD32(ctx->r29, 0X70);
    // 0x151A282C: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x151A2830: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151A2834: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151A2838: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x151A283C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151A2840: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151A2844: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x151A2848: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x151A284C: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x151A2850: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x151A2854: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x151A2858: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x151A285C: lw          $t4, 0x4($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X4);
    // 0x151A2860: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x151A2864: lw          $at, 0x8($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X8);
    // 0x151A2868: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x151A286C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A2870: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x151A2874: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151A2878: sh          $t3, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r11;
    // 0x151A287C: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x151A2880: jal         0x150ADA20
    // 0x151A2884: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151A2884: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x151A2888: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x151A288C: beq         $t6, $zero, L_151A289C
    if (ctx->r14 == 0) {
        // 0x151A2890: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151A289C;
    }
    // 0x151A2890: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151A2894: b           L_151A289C
    // 0x151A2898: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_151A289C;
    // 0x151A2898: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_151A289C:
    // 0x151A289C: jal         0x150ADA20
    // 0x151A28A0: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151A28A0: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_1:
    // 0x151A28A4: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x151A28A8: beq         $t9, $zero, L_151A28B8
    if (ctx->r25 == 0) {
        // 0x151A28AC: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_151A28B8;
    }
    // 0x151A28AC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x151A28B0: b           L_151A28BC
    // 0x151A28B4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_151A28BC;
    // 0x151A28B4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_151A28B8:
    // 0x151A28B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151A28BC:
    // 0x151A28BC: ori         $t8, $v0, 0x7
    ctx->r24 = ctx->r2 | 0X7;
    // 0x151A28C0: or          $t2, $t8, $v1
    ctx->r10 = ctx->r24 | ctx->r3;
    // 0x151A28C4: lw          $t5, 0xE8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE8);
    // 0x151A28C8: ori         $t1, $t2, 0xD200
    ctx->r9 = ctx->r10 | 0XD200;
    // 0x151A28CC: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x151A28D0: or          $t4, $t1, $at
    ctx->r12 = ctx->r9 | ctx->r1;
    // 0x151A28D4: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x151A28D8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x151A28DC: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x151A28E0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151A28E4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151A28E8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x151A28EC: sw          $t4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r12;
    // 0x151A28F0: sb          $t3, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r11;
    // 0x151A28F4: sb          $t6, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r14;
    // 0x151A28F8: sb          $t9, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = ctx->r25;
    // 0x151A28FC: sb          $t8, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = ctx->r24;
    // 0x151A2900: sb          $t7, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r15;
    // 0x151A2904: sb          $t0, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = ctx->r8;
    // 0x151A2908: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x151A290C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151A2910: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x151A2914: lbu         $a3, 0xE7($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XE7);
    // 0x151A2918: jal         0x15130374
    // 0x151A291C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_15130374(rdram, ctx);
        goto after_2;
    // 0x151A291C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_2:
    // 0x151A2920: beq         $v0, $zero, L_151A294C
    if (ctx->r2 == 0) {
        // 0x151A2924: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_151A294C;
    }
    // 0x151A2924: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x151A2928: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x151A292C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x151A2930: jal         0x10022EC0
    // 0x151A2934: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151A2934: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
    after_3:
    // 0x151A2938: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x151A293C: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x151A2940: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x151A2944: jal         0x10022EC0
    // 0x151A2948: addiu       $a0, $v1, 0xB0
    ctx->r4 = ADD32(ctx->r3, 0XB0);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x151A2948: addiu       $a0, $v1, 0xB0
    ctx->r4 = ADD32(ctx->r3, 0XB0);
    after_4:
L_151A294C:
    // 0x151A294C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151A2950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151A2954: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x151A2958: jr          $ra
    // 0x151A295C: nop

    return;
    return;
    // 0x151A295C: nop

;}
RECOMP_FUNC void func_1502B5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502B5C8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1502B5CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1502B5D0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x1502B5D4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x1502B5D8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1502B5DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1502B5E0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1502B5E4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1502B5E8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x1502B5EC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x1502B5F0: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x1502B5F4: beq         $a0, $zero, L_1502B600
    if (ctx->r4 == 0) {
        // 0x1502B5F8: addiu       $s2, $sp, 0x40
        ctx->r18 = ADD32(ctx->r29, 0X40);
            goto L_1502B600;
    }
    // 0x1502B5F8: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x1502B5FC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
L_1502B600:
    // 0x1502B600: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1502B604: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x1502B608: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x1502B60C: lui         $s0, 0xAB
    ctx->r16 = S32(0XAB << 16);
    // 0x1502B610: addiu       $s0, $s0, 0x1950
    ctx->r16 = ADD32(ctx->r16, 0X1950);
    // 0x1502B614: beq         $t7, $zero, L_1502B670
    if (ctx->r15 == 0) {
        // 0x1502B618: addiu       $s1, $sp, 0x58
        ctx->r17 = ADD32(ctx->r29, 0X58);
            goto L_1502B670;
    }
    // 0x1502B618: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x1502B61C: lui         $s5, 0xFFF
    ctx->r21 = S32(0XFFF << 16);
    // 0x1502B620: ori         $s5, $s5, 0xFFFF
    ctx->r21 = ctx->r21 | 0XFFFF;
    // 0x1502B624: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
    // 0x1502B628: addiu       $s3, $zero, -0x4
    ctx->r19 = ADD32(0, -0X4);
L_1502B62C:
    // 0x1502B62C: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x1502B630: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
    // 0x1502B634: and         $s1, $t8, $s3
    ctx->r17 = ctx->r24 & ctx->r19;
    // 0x1502B638: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x1502B63C: beq         $t9, $zero, L_1502B654
    if (ctx->r25 == 0) {
        // 0x1502B640: lw          $a1, -0x4($s1)
        ctx->r5 = MEM_W(ctx->r17, -0X4);
            goto L_1502B654;
    }
    // 0x1502B640: lw          $a1, -0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, -0X4);
    // 0x1502B644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502B648: jal         0x1502AC88
    // 0x1502B64C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_1502AC88(rdram, ctx);
        goto after_0;
    // 0x1502B64C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
    // 0x1502B650: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_1502B654:
    // 0x1502B654: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1502B658: and         $t1, $t0, $s5
    ctx->r9 = ctx->r8 & ctx->r21;
    // 0x1502B65C: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
    // 0x1502B660: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x1502B664: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x1502B668: bne         $t3, $zero, L_1502B62C
    if (ctx->r11 != 0) {
        // 0x1502B66C: sw          $t3, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r11;
            goto L_1502B62C;
    }
    // 0x1502B66C: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_1502B670:
    // 0x1502B670: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x1502B674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502B678: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x1502B67C: beq         $t4, $zero, L_1502B694
    if (ctx->r12 == 0) {
        // 0x1502B680: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1502B694;
    }
    // 0x1502B680: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1502B684: jal         0x1502B350
    // 0x1502B688: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1502B350(rdram, ctx);
        goto after_1;
    // 0x1502B688: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x1502B68C: b           L_1502B694
    // 0x1502B690: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_1502B694;
    // 0x1502B690: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_1502B694:
    // 0x1502B694: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1502B698: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1502B69C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1502B6A0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1502B6A4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1502B6A8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1502B6AC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x1502B6B0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x1502B6B4: jr          $ra
    // 0x1502B6B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1502B6B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_15009150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15009154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15009158: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1500915C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15009160: sw          $zero, -0x229C($at)
    MEM_W(-0X229C, ctx->r1) = 0;
    // 0x15009164: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15009168: lbu         $t6, -0x3230($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3230);
    // 0x1500916C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15009170: sb          $zero, -0x229F($at)
    MEM_B(-0X229F, ctx->r1) = 0;
    // 0x15009174: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15009178: beq         $t6, $zero, L_150091B8
    if (ctx->r14 == 0) {
        // 0x1500917C: sb          $zero, -0x2D30($at)
        MEM_B(-0X2D30, ctx->r1) = 0;
            goto L_150091B8;
    }
    // 0x1500917C: sb          $zero, -0x2D30($at)
    MEM_B(-0X2D30, ctx->r1) = 0;
    // 0x15009180: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x15009184: lw          $t7, 0xDF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XDF0);
    // 0x15009188: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x1500918C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15009190: lbu         $t8, 0x10($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X10);
    // 0x15009194: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15009198: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1500919C: lw          $t0, -0x3004($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3004);
    // 0x150091A0: beql        $t0, $zero, L_150091BC
    if (ctx->r8 == 0) {
        // 0x150091A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150091BC;
    }
    goto skip_0;
    // 0x150091A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150091A8: jal         0x1517E080
    // 0x150091AC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_1517E080(rdram, ctx);
        goto after_0;
    // 0x150091AC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_0:
    // 0x150091B0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x150091B4: sb          $t1, 0x2E($v0)
    MEM_B(0X2E, ctx->r2) = ctx->r9;
L_150091B8:
    // 0x150091B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150091BC:
    // 0x150091BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150091C0: jr          $ra
    // 0x150091C4: nop

    return;
    return;
    // 0x150091C4: nop

;}
RECOMP_FUNC void func_1506A83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506A83C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506A840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506A844: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1506A848: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1506A84C: jal         0x151BC104
    // 0x1506A850: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151BC104(rdram, ctx);
        goto after_0;
    // 0x1506A850: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1506A854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506A858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506A85C: jr          $ra
    // 0x1506A860: nop

    return;
    return;
    // 0x1506A860: nop

;}
RECOMP_FUNC void func_150AFC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AFC68: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x150AFC6C: sw          $ra, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r31;
    // 0x150AFC70: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    // 0x150AFC74: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x150AFC78: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x150AFC7C: sw          $a3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r7;
    // 0x150AFC80: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x150AFC84: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150AFC88: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x150AFC8C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x150AFC90: lw          $t6, 0xD8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD8);
    // 0x150AFC94: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
    // 0x150AFC98: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150AFC9C: addiu       $t5, $zero, 0xAA
    ctx->r13 = ADD32(0, 0XAA);
    // 0x150AFCA0: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
    // 0x150AFCA4: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x150AFCA8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150AFCAC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150AFCB0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150AFCB4: addiu       $t2, $zero, 0xAA
    ctx->r10 = ADD32(0, 0XAA);
    // 0x150AFCB8: addiu       $t3, $zero, 0xAA
    ctx->r11 = ADD32(0, 0XAA);
    // 0x150AFCBC: addiu       $t4, $zero, 0xAA
    ctx->r12 = ADD32(0, 0XAA);
    // 0x150AFCC0: sw          $t6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r14;
    // 0x150AFCC4: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
    // 0x150AFCC8: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x150AFCCC: lbu         $t6, 0xE3($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XE3);
    // 0x150AFCD0: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x150AFCD4: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x150AFCD8: sw          $t4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r12;
    // 0x150AFCDC: sw          $t3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r11;
    // 0x150AFCE0: sw          $t2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r10;
    // 0x150AFCE4: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x150AFCE8: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x150AFCEC: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x150AFCF0: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x150AFCF4: addiu       $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
    // 0x150AFCF8: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x150AFCFC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150AFD00: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x150AFD04: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150AFD08: sw          $t4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r12;
    // 0x150AFD0C: sw          $t3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r11;
    // 0x150AFD10: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
    // 0x150AFD14: sw          $t1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r9;
    // 0x150AFD18: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
    // 0x150AFD1C: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x150AFD20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150AFD24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150AFD28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150AFD2C: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    // 0x150AFD30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150AFD34: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150AFD38: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150AFD3C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150AFD40: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150AFD44: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150AFD48: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150AFD4C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150AFD50: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150AFD54: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x150AFD58: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x150AFD5C: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x150AFD60: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x150AFD64: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x150AFD68: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x150AFD6C: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x150AFD70: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x150AFD74: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x150AFD78: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x150AFD7C: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x150AFD80: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x150AFD84: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x150AFD88: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x150AFD8C: sw          $t7, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r15;
    // 0x150AFD90: sw          $t6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r14;
    // 0x150AFD94: sw          $t8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r24;
    // 0x150AFD98: jal         0x1516D99C
    // 0x150AFD9C: sw          $t5, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r13;
    func_1516D99C(rdram, ctx);
        goto after_0;
    // 0x150AFD9C: sw          $t5, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r13;
    after_0:
    // 0x150AFDA0: lw          $ra, 0xCC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XCC);
    // 0x150AFDA4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x150AFDA8: jr          $ra
    // 0x150AFDAC: nop

    return;
    return;
    // 0x150AFDAC: nop

;}
RECOMP_FUNC void func_151BE210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BE210: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151BE214: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151BE218: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151BE21C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151BE220: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151BE224: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151BE228: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151BE22C: lwc1        $f4, 0x134($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X134);
    // 0x151BE230: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151BE234: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151BE238: swc1        $f8, 0x134($s1)
    MEM_W(0X134, ctx->r17) = ctx->f8.u32l;
    // 0x151BE23C: lwc1        $f10, 0x134($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X134);
    // 0x151BE240: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x151BE244: nop

    // 0x151BE248: bc1fl       L_151BE288
    if (!c1cs) {
        // 0x151BE24C: addiu       $s0, $s1, 0x110
        ctx->r16 = ADD32(ctx->r17, 0X110);
            goto L_151BE288;
    }
    goto skip_0;
    // 0x151BE24C: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    skip_0:
    // 0x151BE250: jal         0x150ADA68
    // 0x151BE254: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151BE254: nop

    after_0:
    // 0x151BE258: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x151BE25C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151BE260: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    // 0x151BE264: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151BE268: jal         0x150ADA68
    // 0x151BE26C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151BE26C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x151BE270: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151BE274: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151BE278: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151BE27C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151BE280: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
    // 0x151BE284: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
L_151BE288:
    // 0x151BE288: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151BE28C: lwc1        $f0, 0x2C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x151BE290: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BE294: lwc1        $f6, -0x5764($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5764);
    // 0x151BE298: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x151BE29C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151BE2A0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151BE2A4: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x151BE2A8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151BE2AC: swc1        $f10, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f10.u32l;
    // 0x151BE2B0: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151BE2B4: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151BE2B8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151BE2BC: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x151BE2C0: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151BE2C4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x151BE2C8: nop

    // 0x151BE2CC: bc1fl       L_151BE340
    if (!c1cs) {
        // 0x151BE2D0: lwc1        $f0, 0x30($s1)
        ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
            goto L_151BE340;
    }
    goto skip_1;
    // 0x151BE2D0: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    skip_1:
    // 0x151BE2D4: jal         0x150ADA68
    // 0x151BE2D8: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151BE2D8: nop

    after_2:
    // 0x151BE2DC: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x151BE2E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151BE2E4: nop

    // 0x151BE2E8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151BE2EC: jal         0x150ADA20
    // 0x151BE2F0: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151BE2F0: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
    after_3:
    // 0x151BE2F4: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x151BE2F8: beq         $t6, $zero, L_151BE320
    if (ctx->r14 == 0) {
        // 0x151BE2FC: nop
    
            goto L_151BE320;
    }
    // 0x151BE2FC: nop

    // 0x151BE300: jal         0x150ADA68
    // 0x151BE304: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151BE304: nop

    after_4:
    // 0x151BE308: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151BE30C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151BE310: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151BE314: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151BE318: b           L_151BE33C
    // 0x151BE31C: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
        goto L_151BE33C;
    // 0x151BE31C: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
L_151BE320:
    // 0x151BE320: jal         0x150ADA68
    // 0x151BE324: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x151BE324: nop

    after_5:
    // 0x151BE328: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x151BE32C: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151BE330: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151BE334: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151BE338: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
L_151BE33C:
    // 0x151BE33C: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
L_151BE340:
    // 0x151BE340: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151BE344: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BE348: lwc1        $f10, -0x5760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5760);
    // 0x151BE34C: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x151BE350: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151BE354: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151BE358: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x151BE35C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151BE360: swc1        $f18, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f18.u32l;
    // 0x151BE364: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151BE368: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151BE36C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151BE370: swc1        $f8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f8.u32l;
    // 0x151BE374: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151BE378: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x151BE37C: nop

    // 0x151BE380: bc1fl       L_151BE3C0
    if (!c1cs) {
        // 0x151BE384: lwc1        $f0, 0x3C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
            goto L_151BE3C0;
    }
    goto skip_2;
    // 0x151BE384: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    skip_2:
    // 0x151BE388: jal         0x150ADA68
    // 0x151BE38C: nop

    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151BE38C: nop

    after_6:
    // 0x151BE390: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151BE394: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151BE398: nop

    // 0x151BE39C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151BE3A0: jal         0x150ADA68
    // 0x151BE3A4: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x151BE3A4: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    after_7:
    // 0x151BE3A8: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151BE3AC: lwc1        $f10, 0x2C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151BE3B0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151BE3B4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151BE3B8: swc1        $f16, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f16.u32l;
    // 0x151BE3BC: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
L_151BE3C0:
    // 0x151BE3C0: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151BE3C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BE3C8: lwc1        $f14, -0x575C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X575C);
    // 0x151BE3CC: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x151BE3D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BE3D4: lwc1        $f6, -0x5758($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5758);
    // 0x151BE3D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151BE3DC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151BE3E0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151BE3E4: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x151BE3E8: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x151BE3EC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x151BE3F0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x151BE3F4: lwc1        $f16, 0x3C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151BE3F8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x151BE3FC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x151BE400: nop

    // 0x151BE404: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x151BE408: beql        $t8, $zero, L_151BE458
    if (ctx->r24 == 0) {
        // 0x151BE40C: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_151BE458;
    }
    goto skip_3;
    // 0x151BE40C: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_3:
    // 0x151BE410: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151BE414: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151BE418: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151BE41C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x151BE420: nop

    // 0x151BE424: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x151BE428: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x151BE42C: nop

    // 0x151BE430: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x151BE434: bne         $t8, $zero, L_151BE44C
    if (ctx->r24 != 0) {
        // 0x151BE438: nop
    
            goto L_151BE44C;
    }
    // 0x151BE438: nop

    // 0x151BE43C: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x151BE440: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151BE444: b           L_151BE464
    // 0x151BE448: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_151BE464;
    // 0x151BE448: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_151BE44C:
    // 0x151BE44C: b           L_151BE464
    // 0x151BE450: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_151BE464;
    // 0x151BE450: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151BE454: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_151BE458:
    // 0x151BE458: nop

    // 0x151BE45C: bltz        $t8, L_151BE44C
    if (SIGNED(ctx->r24) < 0) {
        // 0x151BE460: nop
    
            goto L_151BE44C;
    }
    // 0x151BE460: nop

L_151BE464:
    // 0x151BE464: sb          $t8, 0x5C($s1)
    MEM_B(0X5C, ctx->r17) = ctx->r24;
    // 0x151BE468: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x151BE46C: lwc1        $f2, 0x40($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151BE470: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151BE474: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151BE478: lwc1        $f16, 0x4C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151BE47C: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x151BE480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151BE484: sub.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x151BE488: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x151BE48C: nop

    // 0x151BE490: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x151BE494: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x151BE498: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x151BE49C: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    // 0x151BE4A0: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
    // 0x151BE4A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151BE4A8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151BE4AC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x151BE4B0: jr          $ra
    // 0x151BE4B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151BE4B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_151284C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151284C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151284C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151284CC: jal         0x1512C490
    // 0x151284D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1512C490(rdram, ctx);
        goto after_0;
    // 0x151284D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151284D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151284D8: lw          $v0, 0x3D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3D0);
    // 0x151284DC: lbu         $v1, 0x23C($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X23C);
    // 0x151284E0: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151284E4: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x151284E8: swc1        $f4, 0x2B0($a0)
    MEM_W(0X2B0, ctx->r4) = ctx->f4.u32l;
    // 0x151284EC: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151284F0: swc1        $f6, 0x2B4($a0)
    MEM_W(0X2B4, ctx->r4) = ctx->f6.u32l;
    // 0x151284F4: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151284F8: beq         $v1, $zero, L_15128504
    if (ctx->r3 == 0) {
        // 0x151284FC: swc1        $f8, 0x2B8($a0)
        MEM_W(0X2B8, ctx->r4) = ctx->f8.u32l;
            goto L_15128504;
    }
    // 0x151284FC: swc1        $f8, 0x2B8($a0)
    MEM_W(0X2B8, ctx->r4) = ctx->f8.u32l;
    // 0x15128500: sb          $t6, 0x23C($a0)
    MEM_B(0X23C, ctx->r4) = ctx->r14;
L_15128504:
    // 0x15128504: lw          $t7, 0x84($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X84);
    // 0x15128508: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x1512850C: beql        $t8, $zero, L_15128534
    if (ctx->r24 == 0) {
        // 0x15128510: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15128534;
    }
    goto skip_0;
    // 0x15128510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15128514: lh          $t9, 0x5FE($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X5FE);
    // 0x15128518: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x1512851C: bgtzl       $t9, L_15128534
    if (SIGNED(ctx->r25) > 0) {
        // 0x15128520: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15128534;
    }
    goto skip_1;
    // 0x15128520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15128524: sh          $t0, 0x5FE($a0)
    MEM_H(0X5FE, ctx->r4) = ctx->r8;
    // 0x15128528: jal         0x15128774
    // 0x1512852C: lw          $a1, 0x3D0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3D0);
    func_15128774(rdram, ctx);
        goto after_1;
    // 0x1512852C: lw          $a1, 0x3D0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3D0);
    after_1:
    // 0x15128530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15128534:
    // 0x15128534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15128538: jr          $ra
    // 0x1512853C: nop

    return;
    return;
    // 0x1512853C: nop

;}
RECOMP_FUNC void func_1000C934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000C934: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1000C938: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1000C93C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1000C940: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1000C944: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1000C948: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x1000C94C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1000C950: lw          $t6, -0x4010($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4010);
    // 0x1000C954: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1000C958: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    // 0x1000C95C: lw          $v0, 0x5F0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X5F0);
    // 0x1000C960: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1000C964: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x1000C968: beq         $t7, $zero, L_1000C978
    if (ctx->r15 == 0) {
        // 0x1000C96C: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_1000C978;
    }
    // 0x1000C96C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x1000C970: b           L_1000C978
    // 0x1000C974: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
        goto L_1000C978;
    // 0x1000C974: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
L_1000C978:
    // 0x1000C978: lw          $t8, -0x1610($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1610);
    // 0x1000C97C: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x1000C980: bnel        $t8, $at, L_1000C9D8
    if (ctx->r24 != ctx->r1) {
        // 0x1000C984: lw          $a1, 0x3C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X3C);
            goto L_1000C9D8;
    }
    goto skip_0;
    // 0x1000C984: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x1000C988: bne         $v0, $zero, L_1000C9D4
    if (ctx->r2 != 0) {
        // 0x1000C98C: addiu       $a0, $zero, 0x898
        ctx->r4 = ADD32(0, 0X898);
            goto L_1000C9D4;
    }
    // 0x1000C98C: addiu       $a0, $zero, 0x898
    ctx->r4 = ADD32(0, 0X898);
    // 0x1000C990: addiu       $t9, $zero, 0xBB8
    ctx->r25 = ADD32(0, 0XBB8);
    // 0x1000C994: addiu       $t0, $zero, 0x5DC
    ctx->r8 = ADD32(0, 0X5DC);
    // 0x1000C998: addiu       $t1, $sp, 0x3C
    ctx->r9 = ADD32(ctx->r29, 0X3C);
    // 0x1000C99C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1000C9A0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1000C9A4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1000C9A8: addiu       $a1, $zero, 0x42A
    ctx->r5 = ADD32(0, 0X42A);
    // 0x1000C9AC: addiu       $a2, $zero, -0x640
    ctx->r6 = ADD32(0, -0X640);
    // 0x1000C9B0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1000C9B4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1000C9B8: jal         0x100114D0
    // 0x1000C9BC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_100114D0(rdram, ctx);
        goto after_0;
    // 0x1000C9BC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x1000C9C0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x1000C9C4: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x1000C9C8: andi        $t2, $a1, 0xFF00
    ctx->r10 = ctx->r5 & 0XFF00;
    // 0x1000C9CC: subu        $a1, $a3, $t2
    ctx->r5 = SUB32(ctx->r7, ctx->r10);
    // 0x1000C9D0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
L_1000C9D4:
    // 0x1000C9D4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
L_1000C9D8:
    // 0x1000C9D8: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x1000C9DC: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    // 0x1000C9E0: xor         $t4, $a1, $t3
    ctx->r12 = ctx->r5 ^ ctx->r11;
    // 0x1000C9E4: sltu        $t4, $zero, $t4
    ctx->r12 = 0 < ctx->r12 ? 1 : 0;
    // 0x1000C9E8: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x1000C9EC: beql        $t5, $zero, L_1000CA04
    if (ctx->r13 == 0) {
        // 0x1000C9F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1000CA04;
    }
    goto skip_1;
    // 0x1000C9F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    skip_1:
    // 0x1000C9F4: jal         0x1000E40C
    // 0x1000C9F8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_1000E40C(rdram, ctx);
        goto after_1;
    // 0x1000C9F8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_1:
    // 0x1000C9FC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x1000CA00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
L_1000CA04:
    // 0x1000CA04: or          $v0, $a1, $at
    ctx->r2 = ctx->r5 | ctx->r1;
    // 0x1000CA08: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1000CA0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1000CA10: jr          $ra
    // 0x1000CA14: nop

    return;
    return;
    // 0x1000CA14: nop

;}
RECOMP_FUNC void func_15062B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15062B1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15062B20: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15062B24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15062B28: lwc1        $f4, 0x14C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x15062B2C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15062B30: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15062B34: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x15062B38: jal         0x15062AC4
    // 0x15062B3C: sh          $t7, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r15;
    func_15062AC4(rdram, ctx);
        goto after_0;
    // 0x15062B3C: sh          $t7, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r15;
    after_0:
    // 0x15062B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15062B44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15062B48: jr          $ra
    // 0x15062B4C: nop

    return;
    return;
    // 0x15062B4C: nop

;}
RECOMP_FUNC void func_15146508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15146508: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1514650C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15146510: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15146514: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x15146518: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x1514651C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x15146520: lbu         $t6, 0x3B($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3B);
    // 0x15146524: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x15146528: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x1514652C: sb          $t6, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r14;
    // 0x15146530: lbu         $t7, 0x3B($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X3B);
    // 0x15146534: jal         0x15169040
    // 0x15146538: sb          $t7, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r15;
    func_15169040(rdram, ctx);
        goto after_0;
    // 0x15146538: sb          $t7, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r15;
    after_0:
    // 0x1514653C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15146540: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15146544: jr          $ra
    // 0x15146548: nop

    return;
    return;
    // 0x15146548: nop

;}
RECOMP_FUNC void func_15017578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15017578: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1501757C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15017580: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15017584: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x15017588: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1501758C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15017590: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x15017594: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15017598: jal         0x1502B5C8
    // 0x1501759C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_1502B5C8(rdram, ctx);
        goto after_0;
    // 0x1501759C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x150175A0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x150175A4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150175A8: sw          $v0, 0x23C0($at)
    MEM_W(0X23C0, ctx->r1) = ctx->r2;
    // 0x150175AC: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x150175B0: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x150175B4: mflo        $t8
    ctx->r24 = lo;
    // 0x150175B8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x150175BC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150175C0: sw          $t8, 0x7380($at)
    MEM_W(0X7380, ctx->r1) = ctx->r24;
    // 0x150175C4: jal         0x150174C0
    // 0x150175C8: lbu         $a0, -0x4100($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X4100);
    func_150174C0(rdram, ctx);
        goto after_1;
    // 0x150175C8: lbu         $a0, -0x4100($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X4100);
    after_1:
    // 0x150175CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150175D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150175D4: jr          $ra
    // 0x150175D8: nop

    return;
    return;
    // 0x150175D8: nop

;}
RECOMP_FUNC void func_15094EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15094EA0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x15094EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15094EA8: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x15094EAC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15094EB0: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x15094EB4: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x15094EB8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15094EBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15094EC0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x15094EC4: lw          $t8, -0x3D60($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3D60);
    // 0x15094EC8: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x15094ECC: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x15094ED0: jal         0x151EFEB8
    // 0x15094ED4: addu        $a1, $t8, $t0
    ctx->r5 = ADD32(ctx->r24, ctx->r8);
    guMtxL2F(rdram, ctx);
        goto after_0;
    // 0x15094ED4: addu        $a1, $t8, $t0
    ctx->r5 = ADD32(ctx->r24, ctx->r8);
    after_0:
    // 0x15094ED8: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x15094EDC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15094EE0: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15094EE4: lbu         $t5, -0x1640($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1640);
    // 0x15094EE8: lw          $t1, -0x19D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X19D8);
    // 0x15094EEC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15094EF0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x15094EF4: sll         $t3, $t3, 7
    ctx->r11 = S32(ctx->r11 << 7);
    // 0x15094EF8: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x15094EFC: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x15094F00: addu        $a1, $t4, $t6
    ctx->r5 = ADD32(ctx->r12, ctx->r14);
    // 0x15094F04: addiu       $a1, $a1, 0x100
    ctx->r5 = ADD32(ctx->r5, 0X100);
    // 0x15094F08: jal         0x151EFEB8
    // 0x15094F0C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    guMtxL2F(rdram, ctx);
        goto after_1;
    // 0x15094F0C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x15094F10: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x15094F14: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15094F18: addiu       $t8, $t8, 0x2CA8
    ctx->r24 = ADD32(ctx->r24, 0X2CA8);
    // 0x15094F1C: sll         $t9, $t7, 6
    ctx->r25 = S32(ctx->r15 << 6);
    // 0x15094F20: addu        $a2, $t9, $t8
    ctx->r6 = ADD32(ctx->r25, ctx->r24);
    // 0x15094F24: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x15094F28: jal         0x150A7A48
    // 0x15094F2C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_150A7A48(rdram, ctx);
        goto after_2;
    // 0x15094F2C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x15094F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15094F34: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x15094F38: jr          $ra
    // 0x15094F3C: nop

    return;
    return;
    // 0x15094F3C: nop

;}
RECOMP_FUNC void func_151BB044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BB044: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151BB048: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151BB04C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x151BB050: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x151BB054: lui         $t0, 0x151C
    ctx->r8 = S32(0X151C << 16);
    // 0x151BB058: addiu       $t0, $t0, -0x4F20
    ctx->r8 = ADD32(ctx->r8, -0X4F20);
    // 0x151BB05C: lwc1        $f4, 0x14($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X14);
    // 0x151BB060: lwc1        $f8, 0x18($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X18);
    // 0x151BB064: lwc1        $f16, 0x1C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x151BB068: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151BB06C: addiu       $t7, $zero, 0x2000
    ctx->r15 = ADD32(0, 0X2000);
    // 0x151BB070: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x151BB074: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151BB078: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x151BB07C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151BB080: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151BB084: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x151BB088: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x151BB08C: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x151BB090: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x151BB094: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x151BB098: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    // 0x151BB09C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x151BB0A0: addiu       $t8, $zero, 0x320
    ctx->r24 = ADD32(0, 0X320);
    // 0x151BB0A4: sll         $t4, $a3, 16
    ctx->r12 = S32(ctx->r7 << 16);
    // 0x151BB0A8: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    // 0x151BB0AC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151BB0B0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x151BB0B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151BB0B8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151BB0BC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151BB0C0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151BB0C4: addiu       $a0, $zero, 0x4A7
    ctx->r4 = ADD32(0, 0X4A7);
    // 0x151BB0C8: jal         0x1000FA64
    // 0x151BB0CC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_1000FA64(rdram, ctx);
        goto after_0;
    // 0x151BB0CC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_0:
    // 0x151BB0D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151BB0D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151BB0D8: jr          $ra
    // 0x151BB0DC: nop

    return;
    return;
    // 0x151BB0DC: nop

;}
RECOMP_FUNC void func_15075AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075AAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15075AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15075AB4: jal         0x15075548
    // 0x15075AB8: nop

    func_15075548(rdram, ctx);
        goto after_0;
    // 0x15075AB8: nop

    after_0:
    // 0x15075ABC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15075AC0: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x15075AC4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x15075AC8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15075ACC: lw          $t6, 0x2104($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2104);
    // 0x15075AD0: lbu         $t7, 0x13F($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X13F);
    // 0x15075AD4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15075AD8: lbu         $t1, 0x1891($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1891);
    // 0x15075ADC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15075AE0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x15075AE4: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x15075AE8: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x15075AEC: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x15075AF0: addu        $v0, $t0, $t2
    ctx->r2 = ADD32(ctx->r8, ctx->r10);
    // 0x15075AF4: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x15075AF8: lh          $t4, 0x4($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X4);
    // 0x15075AFC: lwc1        $f18, 0x1C($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x15075B00: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x15075B04: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x15075B08: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15075B0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15075B10: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15075B14: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15075B18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15075B1C: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x15075B20: abs.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = fabsf(ctx->f2.fl);
    // 0x15075B24: abs.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = fabsf(ctx->f12.fl);
    // 0x15075B28: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x15075B2C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15075B30: nop

    // 0x15075B34: bc1fl       L_15075B54
    if (!c1cs) {
        // 0x15075B38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15075B54;
    }
    goto skip_0;
    // 0x15075B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15075B3C: sh          $zero, 0x21C($v1)
    MEM_H(0X21C, ctx->r3) = 0;
    // 0x15075B40: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x15075B44: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15075B48: nop

    // 0x15075B4C: swc1        $f8, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f8.u32l;
    // 0x15075B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15075B54:
    // 0x15075B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15075B58: jr          $ra
    // 0x15075B5C: nop

    return;
    return;
    // 0x15075B5C: nop

;}
RECOMP_FUNC void func_1514EB8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514EB8C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1514EB90: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1514EB94: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1514EB98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1514EB9C: jr          $ra
    // 0x1514EBA0: nop

    return;
    return;
    // 0x1514EBA0: nop

;}
RECOMP_FUNC void func_151E4264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E4264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151E4268: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E426C: addiu       $v0, $v0, -0x280
    ctx->r2 = ADD32(ctx->r2, -0X280);
    // 0x151E4270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151E4274: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x151E4278: beq         $t6, $zero, L_151E4288
    if (ctx->r14 == 0) {
        // 0x151E427C: nop
    
            goto L_151E4288;
    }
    // 0x151E427C: nop

    // 0x151E4280: b           L_151E4304
    // 0x151E4284: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
        goto L_151E4304;
    // 0x151E4284: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_151E4288:
    // 0x151E4288: jal         0x151E530C
    // 0x151E428C: nop

    func_151E530C(rdram, ctx);
        goto after_0;
    // 0x151E428C: nop

    after_0:
    // 0x151E4290: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E4294: lh          $t7, 0xB9A($t7)
    ctx->r15 = MEM_H(ctx->r15, 0XB9A);
    // 0x151E4298: bne         $t7, $zero, L_151E42AC
    if (ctx->r15 != 0) {
        // 0x151E429C: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_151E42AC;
    }
    // 0x151E429C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151E42A0: lbu         $t8, 0x35EA($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X35EA);
    // 0x151E42A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151E42A8: beq         $t8, $at, L_151E4304
    if (ctx->r24 == ctx->r1) {
        // 0x151E42AC: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_151E4304;
    }
L_151E42AC:
    // 0x151E42AC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151E42B0: lbu         $t9, 0x35EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X35EA);
    // 0x151E42B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151E42B8: bnel        $t9, $at, L_151E42E0
    if (ctx->r25 != ctx->r1) {
        // 0x151E42BC: addiu       $t0, $zero, 0x7
        ctx->r8 = ADD32(0, 0X7);
            goto L_151E42E0;
    }
    goto skip_0;
    // 0x151E42BC: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    skip_0:
    // 0x151E42C0: jal         0x151F2CDC
    // 0x151E42C4: nop

    func_151F2CDC(rdram, ctx);
        goto after_1;
    // 0x151E42C4: nop

    after_1:
    // 0x151E42C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151E42CC: bne         $v0, $at, L_151E42DC
    if (ctx->r2 != ctx->r1) {
        // 0x151E42D0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_151E42DC;
    }
    // 0x151E42D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151E42D4: jal         0x151F2D6C
    // 0x151E42D8: addiu       $a1, $zero, 0x2DE0
    ctx->r5 = ADD32(0, 0X2DE0);
    func_151F2D6C(rdram, ctx);
        goto after_2;
    // 0x151E42D8: addiu       $a1, $zero, 0x2DE0
    ctx->r5 = ADD32(0, 0X2DE0);
    after_2:
L_151E42DC:
    // 0x151E42DC: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
L_151E42E0:
    // 0x151E42E0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E42E4: sb          $t0, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r8;
    // 0x151E42E8: lui         $t1, 0x151E
    ctx->r9 = S32(0X151E << 16);
    // 0x151E42EC: addiu       $t1, $t1, 0x2834
    ctx->r9 = ADD32(ctx->r9, 0X2834);
    // 0x151E42F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E42F4: sw          $t1, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r9;
    // 0x151E42F8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E42FC: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x151E4300: sb          $t2, -0x28C($at)
    MEM_B(-0X28C, ctx->r1) = ctx->r10;
L_151E4304:
    // 0x151E4304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151E4308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151E430C: jr          $ra
    // 0x151E4310: nop

    return;
    return;
    // 0x151E4310: nop

;}
RECOMP_FUNC void func_150F02EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F02EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F02F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F02F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F02F8: jal         0x150F0318
    // 0x150F02FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F0318(rdram, ctx);
        goto after_0;
    // 0x150F02FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F0300: jal         0x15149368
    // 0x150F0304: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15149368(rdram, ctx);
        goto after_1;
    // 0x150F0304: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F0308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F030C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F0310: jr          $ra
    // 0x150F0314: nop

    return;
    return;
    // 0x150F0314: nop

;}
RECOMP_FUNC void func_150000B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150000B0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150000B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150000B8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150000BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150000C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150000C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150000C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150000CC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x150000D0: lw          $v0, 0xDF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XDF0);
    // 0x150000D4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x150000D8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x150000DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150000E0: beq         $v0, $zero, L_1500011C
    if (ctx->r2 == 0) {
        // 0x150000E4: sb          $zero, 0x1F00($at)
        MEM_B(0X1F00, ctx->r1) = 0;
            goto L_1500011C;
    }
    // 0x150000E4: sb          $zero, 0x1F00($at)
    MEM_B(0X1F00, ctx->r1) = 0;
    // 0x150000E8: lwl         $at, 0x2C($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X2C);
    // 0x150000EC: lwr         $at, 0x2F($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X2F);
    // 0x150000F0: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x150000F4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150000F8: lwl         $t9, 0x30($v0)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r2, 0X30);
    // 0x150000FC: lwr         $t9, 0x33($v0)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r2, 0X33);
    // 0x15000100: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x15000104: lwl         $at, 0x34($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X34);
    // 0x15000108: lwr         $at, 0x37($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X37);
    // 0x1500010C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x15000110: lhu         $at, 0x38($v0)
    ctx->r1 = MEM_HU(ctx->r2, 0X38);
    // 0x15000114: b           L_1500013C
    // 0x15000118: sh          $at, 0xC($t6)
    MEM_H(0XC, ctx->r14) = ctx->r1;
        goto L_1500013C;
    // 0x15000118: sh          $at, 0xC($t6)
    MEM_H(0XC, ctx->r14) = ctx->r1;
L_1500011C:
    // 0x1500011C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15000120: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x15000124: sb          $t1, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r9;
    // 0x15000128: sh          $zero, 0x62($sp)
    MEM_H(0X62, ctx->r29) = 0;
    // 0x1500012C: sh          $zero, 0x68($sp)
    MEM_H(0X68, ctx->r29) = 0;
    // 0x15000130: sb          $t2, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r10;
    // 0x15000134: sh          $zero, 0x60($sp)
    MEM_H(0X60, ctx->r29) = 0;
    // 0x15000138: sh          $zero, 0x66($sp)
    MEM_H(0X66, ctx->r29) = 0;
L_1500013C:
    // 0x1500013C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x15000140: sw          $zero, 0x1F04($at)
    MEM_W(0X1F04, ctx->r1) = 0;
    // 0x15000144: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x15000148: sw          $zero, 0x1F08($at)
    MEM_W(0X1F08, ctx->r1) = 0;
    // 0x1500014C: lh          $s1, 0x60($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X60);
    // 0x15000150: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x15000154: sw          $zero, 0x1F0C($at)
    MEM_W(0X1F0C, ctx->r1) = 0;
    // 0x15000158: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1500015C: bne         $s1, $at, L_15000188
    if (ctx->r17 != ctx->r1) {
        // 0x15000160: lui         $t3, 0x800D
        ctx->r11 = S32(0X800D << 16);
            goto L_15000188;
    }
    // 0x15000160: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15000164: lw          $t3, 0x2E4C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2E4C);
    // 0x15000168: addiu       $s1, $zero, 0x46
    ctx->r17 = ADD32(0, 0X46);
    // 0x1500016C: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x15000170: lbu         $t4, 0x4($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X4);
    // 0x15000174: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x15000178: beql        $t5, $zero, L_1500018C
    if (ctx->r13 == 0) {
        // 0x1500017C: lbu         $t7, 0x6C($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X6C);
            goto L_1500018C;
    }
    goto skip_0;
    // 0x1500017C: lbu         $t7, 0x6C($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6C);
    skip_0:
    // 0x15000180: sh          $t8, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r24;
    // 0x15000184: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
L_15000188:
    // 0x15000188: lbu         $t7, 0x6C($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6C);
L_1500018C:
    // 0x1500018C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x15000190: beq         $at, $zero, L_1500020C
    if (ctx->r1 == 0) {
        // 0x15000194: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_1500020C;
    }
    // 0x15000194: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15000198: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500019C: addu        $at, $at, $t7
    gpr jr_addend_150001A4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x150001A0: lw          $t7, 0x1A30($at)
    ctx->r15 = ADD32(ctx->r1, 0X1A30);
    // 0x150001A4: jr          $t7
    // 0x150001A8: nop

    switch (jr_addend_150001A4 >> 2) {
        case 0: goto L_150001B0; break;
        case 1: goto L_150001C4; break;
        case 2: goto L_150001AC; break;
        case 3: goto L_150001C0; break;
        case 4: goto L_150001B0; break;
        default: switch_error(__func__, 0x150001A4, 0x80091A30);
    }
    // 0x150001A8: nop

L_150001AC:
    // 0x150001AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_150001B0:
    // 0x150001B0: jal         0x1000DEC4
    // 0x150001B4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_1000DEC4(rdram, ctx);
        goto after_0;
    // 0x150001B4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_0:
    // 0x150001B8: b           L_1500020C
    // 0x150001BC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
        goto L_1500020C;
    // 0x150001BC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
L_150001C0:
    // 0x150001C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_150001C4:
    // 0x150001C4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150001C8: lbu         $t6, -0x164C($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X164C);
    // 0x150001CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150001D0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150001D4: bne         $t6, $at, L_150001EC
    if (ctx->r14 != ctx->r1) {
        // 0x150001D8: nop
    
            goto L_150001EC;
    }
    // 0x150001D8: nop

    // 0x150001DC: jal         0x1000DEC4
    // 0x150001E0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_1000DEC4(rdram, ctx);
        goto after_1;
    // 0x150001E0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_1:
    // 0x150001E4: b           L_1500020C
    // 0x150001E8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
        goto L_1500020C;
    // 0x150001E8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
L_150001EC:
    // 0x150001EC: lw          $t9, -0x1608($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1608);
    // 0x150001F0: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x150001F4: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x150001F8: beq         $t9, $at, L_1500020C
    if (ctx->r25 == ctx->r1) {
        // 0x150001FC: addiu       $s3, $zero, -0x1
        ctx->r19 = ADD32(0, -0X1);
            goto L_1500020C;
    }
    // 0x150001FC: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x15000200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15000204: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    // 0x15000208: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
L_1500020C:
    // 0x1500020C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x15000210: jal         0x1000B548
    // 0x15000214: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_1000B548(rdram, ctx);
        goto after_2;
    // 0x15000214: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_2:
    // 0x15000218: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x1500021C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x15000220: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15000224: beq         $at, $zero, L_15000294
    if (ctx->r1 == 0) {
        // 0x15000228: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_15000294;
    }
    // 0x15000228: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x1500022C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x15000230: subu        $a1, $t1, $v0
    ctx->r5 = SUB32(ctx->r9, ctx->r2);
    // 0x15000234: andi        $t2, $a1, 0x3
    ctx->r10 = ctx->r5 & 0X3;
    // 0x15000238: beq         $t2, $zero, L_15000268
    if (ctx->r10 == 0) {
        // 0x1500023C: addu        $a0, $t2, $v0
        ctx->r4 = ADD32(ctx->r10, ctx->r2);
            goto L_15000268;
    }
    // 0x1500023C: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    // 0x15000240: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x15000244: addiu       $t4, $sp, 0x4C
    ctx->r12 = ADD32(ctx->r29, 0X4C);
    // 0x15000248: addu        $s0, $t3, $t4
    ctx->r16 = ADD32(ctx->r11, ctx->r12);
    // 0x1500024C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_15000250:
    // 0x15000250: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15000254: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x15000258: bne         $a0, $v1, L_15000250
    if (ctx->r4 != ctx->r3) {
        // 0x1500025C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_15000250;
    }
    // 0x1500025C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15000260: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15000264: beq         $v1, $at, L_15000294
    if (ctx->r3 == ctx->r1) {
        // 0x15000268: sll         $t5, $v1, 2
        ctx->r13 = S32(ctx->r3 << 2);
            goto L_15000294;
    }
L_15000268:
    // 0x15000268: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x1500026C: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x15000270: addu        $s0, $t5, $t8
    ctx->r16 = ADD32(ctx->r13, ctx->r24);
    // 0x15000274: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x15000278: addiu       $v0, $sp, 0x58
    ctx->r2 = ADD32(ctx->r29, 0X58);
L_1500027C:
    // 0x1500027C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x15000280: sw          $s2, -0xC($s0)
    MEM_W(-0XC, ctx->r16) = ctx->r18;
    // 0x15000284: sw          $s2, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->r18;
    // 0x15000288: sw          $s2, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r18;
    // 0x1500028C: bne         $s0, $v0, L_1500027C
    if (ctx->r16 != ctx->r2) {
        // 0x15000290: sw          $s2, -0x10($s0)
        MEM_W(-0X10, ctx->r16) = ctx->r18;
            goto L_1500027C;
    }
    // 0x15000290: sw          $s2, -0x10($s0)
    MEM_W(-0X10, ctx->r16) = ctx->r18;
L_15000294:
    // 0x15000294: lbu         $t7, 0x6C($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6C);
    // 0x15000298: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1500029C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x150002A0: bne         $t7, $at, L_1500032C
    if (ctx->r15 != ctx->r1) {
        // 0x150002A4: lh          $s3, 0x66($sp)
        ctx->r19 = MEM_H(ctx->r29, 0X66);
            goto L_1500032C;
    }
    // 0x150002A4: lh          $s3, 0x66($sp)
    ctx->r19 = MEM_H(ctx->r29, 0X66);
    // 0x150002A8: bltz        $s3, L_1500032C
    if (SIGNED(ctx->r19) < 0) {
        // 0x150002AC: addiu       $s0, $sp, 0x4C
        ctx->r16 = ADD32(ctx->r29, 0X4C);
            goto L_1500032C;
    }
    // 0x150002AC: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
    // 0x150002B0: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
    // 0x150002B4: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x150002B8: lh          $s1, 0x60($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X60);
    // 0x150002BC: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    // 0x150002C0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
L_150002C4:
    // 0x150002C4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x150002C8: bne         $s3, $t9, L_15000314
    if (ctx->r19 != ctx->r25) {
        // 0x150002CC: nop
    
            goto L_15000314;
    }
    // 0x150002CC: nop

    // 0x150002D0: bltz        $s1, L_150002F4
    if (SIGNED(ctx->r17) < 0) {
        // 0x150002D4: addiu       $v0, $sp, 0x4C
        ctx->r2 = ADD32(ctx->r29, 0X4C);
            goto L_150002F4;
    }
    // 0x150002D4: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x150002D8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
L_150002DC:
    // 0x150002DC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x150002E0: bne         $s1, $t1, L_150002EC
    if (ctx->r17 != ctx->r9) {
        // 0x150002E4: nop
    
            goto L_150002EC;
    }
    // 0x150002E4: nop

    // 0x150002E8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_150002EC:
    // 0x150002EC: bnel        $v0, $v1, L_150002DC
    if (ctx->r2 != ctx->r3) {
        // 0x150002F0: lw          $t1, 0x0($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X0);
            goto L_150002DC;
    }
    goto skip_1;
    // 0x150002F0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    skip_1:
L_150002F4:
    // 0x150002F4: bltz        $s3, L_15000314
    if (SIGNED(ctx->r19) < 0) {
        // 0x150002F8: nop
    
            goto L_15000314;
    }
    // 0x150002F8: nop

    // 0x150002FC: lhu         $t3, 0x68($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X68);
    // 0x15000300: sll         $s1, $s3, 16
    ctx->r17 = S32(ctx->r19 << 16);
    // 0x15000304: sra         $t2, $s1, 16
    ctx->r10 = S32(SIGNED(ctx->r17) >> 16);
    // 0x15000308: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x1500030C: sh          $a0, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r4;
    // 0x15000310: sh          $t3, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r11;
L_15000314:
    // 0x15000314: bnel        $s0, $a1, L_150002C4
    if (ctx->r16 != ctx->r5) {
        // 0x15000318: lw          $t9, 0x0($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X0);
            goto L_150002C4;
    }
    goto skip_2;
    // 0x15000318: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x1500031C: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    // 0x15000320: bltz        $s3, L_1500032C
    if (SIGNED(ctx->r19) < 0) {
        // 0x15000324: sh          $s3, 0x66($sp)
        MEM_H(0X66, ctx->r29) = ctx->r19;
            goto L_1500032C;
    }
    // 0x15000324: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    // 0x15000328: sh          $zero, 0x66($sp)
    MEM_H(0X66, ctx->r29) = 0;
L_1500032C:
    // 0x1500032C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15000330: jal         0x1000E2F4
    // 0x15000334: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_1000E2F4(rdram, ctx);
        goto after_3;
    // 0x15000334: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_3:
    // 0x15000338: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x1500033C: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
    // 0x15000340: bnel        $a2, $zero, L_1500044C
    if (ctx->r6 != 0) {
        // 0x15000344: lh          $s1, 0x60($sp)
        ctx->r17 = MEM_H(ctx->r29, 0X60);
            goto L_1500044C;
    }
    goto skip_3;
    // 0x15000344: lh          $s1, 0x60($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X60);
    skip_3:
L_15000348:
    // 0x15000348: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x1500034C: lh          $s1, 0x60($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X60);
    // 0x15000350: lh          $s3, 0x66($sp)
    ctx->r19 = MEM_H(ctx->r29, 0X66);
    // 0x15000354: beql        $s2, $a0, L_15000430
    if (ctx->r18 == ctx->r4) {
        // 0x15000358: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_15000430;
    }
    goto skip_4;
    // 0x15000358: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_4:
    // 0x1500035C: bne         $s1, $a0, L_150003C4
    if (ctx->r17 != ctx->r4) {
        // 0x15000360: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_150003C4;
    }
    // 0x15000360: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15000364: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    // 0x15000368: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1500036C: lhu         $a2, 0x64($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X64);
    // 0x15000370: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15000374: jal         0x1000E46C
    // 0x15000378: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    func_1000E46C(rdram, ctx);
        goto after_4;
    // 0x15000378: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    after_4:
    // 0x1500037C: lhu         $a2, 0x64($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X64);
    // 0x15000380: lh          $a0, 0x60($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X60);
    // 0x15000384: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x15000388: xori        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 ^ 0XFFFF;
    // 0x1500038C: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x15000390: jal         0x1000E46C
    // 0x15000394: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1000E46C(rdram, ctx);
        goto after_5;
    // 0x15000394: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x15000398: lh          $a0, 0x60($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X60);
    // 0x1500039C: jal         0x1000E40C
    // 0x150003A0: lhu         $a1, 0x62($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X62);
    func_1000E40C(rdram, ctx);
        goto after_6;
    // 0x150003A0: lhu         $a1, 0x62($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X62);
    after_6:
    // 0x150003A4: lh          $a0, 0x60($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X60);
    // 0x150003A8: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x150003AC: jal         0x1000DF68
    // 0x150003B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1000DF68(rdram, ctx);
        goto after_7;
    // 0x150003B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x150003B4: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x150003B8: sh          $s2, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r18;
    // 0x150003BC: b           L_1500042C
    // 0x150003C0: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
        goto L_1500042C;
    // 0x150003C0: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
L_150003C4:
    // 0x150003C4: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    // 0x150003C8: bne         $s3, $a0, L_1500042C
    if (ctx->r19 != ctx->r4) {
        // 0x150003CC: sh          $s3, 0x66($sp)
        MEM_H(0X66, ctx->r29) = ctx->r19;
            goto L_1500042C;
    }
    // 0x150003CC: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    // 0x150003D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150003D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150003D8: lhu         $a2, 0x6A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X6A);
    // 0x150003DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150003E0: jal         0x1000E46C
    // 0x150003E4: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    func_1000E46C(rdram, ctx);
        goto after_8;
    // 0x150003E4: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    after_8:
    // 0x150003E8: lhu         $a2, 0x6A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X6A);
    // 0x150003EC: lh          $a0, 0x66($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X66);
    // 0x150003F0: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x150003F4: xori        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 ^ 0XFFFF;
    // 0x150003F8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x150003FC: jal         0x1000E46C
    // 0x15000400: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1000E46C(rdram, ctx);
        goto after_9;
    // 0x15000400: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x15000404: lh          $a0, 0x66($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X66);
    // 0x15000408: jal         0x1000E40C
    // 0x1500040C: lhu         $a1, 0x68($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X68);
    func_1000E40C(rdram, ctx);
        goto after_10;
    // 0x1500040C: lhu         $a1, 0x68($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X68);
    after_10:
    // 0x15000410: lh          $a0, 0x66($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X66);
    // 0x15000414: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x15000418: jal         0x1000DF68
    // 0x1500041C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1000DF68(rdram, ctx);
        goto after_11;
    // 0x1500041C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x15000420: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x15000424: sh          $s2, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r18;
    // 0x15000428: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
L_1500042C:
    // 0x1500042C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_15000430:
    // 0x15000430: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x15000434: lh          $s1, 0x60($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X60);
    // 0x15000438: bne         $s0, $t6, L_15000348
    if (ctx->r16 != ctx->r14) {
        // 0x1500043C: lh          $s3, 0x66($sp)
        ctx->r19 = MEM_H(ctx->r29, 0X66);
            goto L_15000348;
    }
    // 0x1500043C: lh          $s3, 0x66($sp)
    ctx->r19 = MEM_H(ctx->r29, 0X66);
    // 0x15000440: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    // 0x15000444: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    // 0x15000448: lh          $s1, 0x60($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X60);
L_1500044C:
    // 0x1500044C: lh          $s3, 0x66($sp)
    ctx->r19 = MEM_H(ctx->r29, 0X66);
    // 0x15000450: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15000454: bltz        $s1, L_15000460
    if (SIGNED(ctx->r17) < 0) {
        // 0x15000458: nop
    
            goto L_15000460;
    }
    // 0x15000458: nop

    // 0x1500045C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
L_15000460:
    // 0x15000460: bltz        $s3, L_1500046C
    if (SIGNED(ctx->r19) < 0) {
        // 0x15000464: lw          $a0, 0x44($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X44);
            goto L_1500046C;
    }
    // 0x15000464: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x15000468: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_1500046C:
    // 0x1500046C: beq         $s4, $zero, L_150004E0
    if (ctx->r20 == 0) {
        // 0x15000470: slt         $at, $a0, $s4
        ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_150004E0;
    }
    // 0x15000470: slt         $at, $a0, $s4
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x15000474: beq         $at, $zero, L_150004E0
    if (ctx->r1 == 0) {
        // 0x15000478: subu        $a3, $s4, $a0
        ctx->r7 = SUB32(ctx->r20, ctx->r4);
            goto L_150004E0;
    }
    // 0x15000478: subu        $a3, $s4, $a0
    ctx->r7 = SUB32(ctx->r20, ctx->r4);
    // 0x1500047C: beq         $a3, $zero, L_150004E0
    if (ctx->r7 == 0) {
        // 0x15000480: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_150004E0;
    }
    // 0x15000480: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x15000484: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x15000488: addiu       $t1, $sp, 0x4C
    ctx->r9 = ADD32(ctx->r29, 0X4C);
    // 0x1500048C: addu        $s0, $t9, $t1
    ctx->r16 = ADD32(ctx->r25, ctx->r9);
    // 0x15000490: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_15000494:
    // 0x15000494: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x15000498: beql        $s2, $a0, L_150004C8
    if (ctx->r18 == ctx->r4) {
        // 0x1500049C: addiu       $s0, $s0, -0x4
        ctx->r16 = ADD32(ctx->r16, -0X4);
            goto L_150004C8;
    }
    goto skip_5;
    // 0x1500049C: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
    skip_5:
    // 0x150004A0: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    // 0x150004A4: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    // 0x150004A8: jal         0x1000DE1C
    // 0x150004AC: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    func_1000DE1C(rdram, ctx);
        goto after_12;
    // 0x150004AC: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    after_12:
    // 0x150004B0: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x150004B4: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x150004B8: lh          $s1, 0x60($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X60);
    // 0x150004BC: lh          $s3, 0x66($sp)
    ctx->r19 = MEM_H(ctx->r29, 0X66);
    // 0x150004C0: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x150004C4: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
L_150004C8:
    // 0x150004C8: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x150004CC: sltu        $at, $s0, $t2
    ctx->r1 = ctx->r16 < ctx->r10 ? 1 : 0;
    // 0x150004D0: bnel        $at, $zero, L_150004E4
    if (ctx->r1 != 0) {
        // 0x150004D4: sh          $s1, 0x60($sp)
        MEM_H(0X60, ctx->r29) = ctx->r17;
            goto L_150004E4;
    }
    goto skip_6;
    // 0x150004D4: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    skip_6:
    // 0x150004D8: bnel        $a3, $zero, L_15000494
    if (ctx->r7 != 0) {
        // 0x150004DC: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_15000494;
    }
    goto skip_7;
    // 0x150004DC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_7:
L_150004E0:
    // 0x150004E0: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
L_150004E4:
    // 0x150004E4: bltz        $s1, L_150005D0
    if (SIGNED(ctx->r17) < 0) {
        // 0x150004E8: sh          $s3, 0x66($sp)
        MEM_H(0X66, ctx->r29) = ctx->r19;
            goto L_150005D0;
    }
    // 0x150004E8: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    // 0x150004EC: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x150004F0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150004F4: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
    // 0x150004F8: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
L_150004FC:
    // 0x150004FC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x15000500: beql        $s2, $t3, L_15000510
    if (ctx->r18 == ctx->r11) {
        // 0x15000504: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15000510;
    }
    goto skip_8;
    // 0x15000504: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_8:
    // 0x15000508: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x1500050C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15000510:
    // 0x15000510: bne         $v1, $t0, L_150004FC
    if (ctx->r3 != ctx->r8) {
        // 0x15000514: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_150004FC;
    }
    // 0x15000514: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15000518: bne         $a3, $s2, L_15000548
    if (ctx->r7 != ctx->r18) {
        // 0x1500051C: nop
    
            goto L_15000548;
    }
    // 0x1500051C: nop

    // 0x15000520: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    // 0x15000524: blez        $s1, L_15000540
    if (SIGNED(ctx->r17) <= 0) {
        // 0x15000528: sh          $s3, 0x66($sp)
        MEM_H(0X66, ctx->r29) = ctx->r19;
            goto L_15000540;
    }
    // 0x15000528: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    // 0x1500052C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15000530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15000534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15000538: jal         0x1000D96C
    // 0x1500053C: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    func_1000D96C(rdram, ctx);
        goto after_13;
    // 0x1500053C: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    after_13:
L_15000540:
    // 0x15000540: b           L_150005A8
    // 0x15000544: lh          $s1, 0x60($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X60);
        goto L_150005A8;
    // 0x15000544: lh          $s1, 0x60($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X60);
L_15000548:
    // 0x15000548: blez        $s1, L_1500057C
    if (SIGNED(ctx->r17) <= 0) {
        // 0x1500054C: sh          $s3, 0x66($sp)
        MEM_H(0X66, ctx->r29) = ctx->r19;
            goto L_1500057C;
    }
    // 0x1500054C: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    // 0x15000550: sll         $t4, $a3, 2
    ctx->r12 = S32(ctx->r7 << 2);
    // 0x15000554: addiu       $t5, $sp, 0x4C
    ctx->r13 = ADD32(ctx->r29, 0X4C);
    // 0x15000558: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x1500055C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x15000560: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    // 0x15000564: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x15000568: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1500056C: jal         0x1000D96C
    // 0x15000570: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_1000D96C(rdram, ctx);
        goto after_14;
    // 0x15000570: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_14:
    // 0x15000574: b           L_150005A0
    // 0x15000578: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
        goto L_150005A0;
    // 0x15000578: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_1500057C:
    // 0x1500057C: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x15000580: addiu       $t7, $sp, 0x4C
    ctx->r15 = ADD32(ctx->r29, 0X4C);
    // 0x15000584: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    // 0x15000588: addu        $v0, $t8, $t7
    ctx->r2 = ADD32(ctx->r24, ctx->r15);
    // 0x1500058C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x15000590: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x15000594: jal         0x1000DE1C
    // 0x15000598: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_1000DE1C(rdram, ctx);
        goto after_15;
    // 0x15000598: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_15:
    // 0x1500059C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_150005A0:
    // 0x150005A0: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x150005A4: lh          $s1, 0x60($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X60);
L_150005A8:
    // 0x150005A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150005AC: lhu         $a2, 0x64($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X64);
    // 0x150005B0: blez        $s1, L_150005D0
    if (SIGNED(ctx->r17) <= 0) {
        // 0x150005B4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_150005D0;
    }
    // 0x150005B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150005B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150005BC: jal         0x1000E46C
    // 0x150005C0: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    func_1000E46C(rdram, ctx);
        goto after_16;
    // 0x150005C0: sh          $s1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r17;
    after_16:
    // 0x150005C4: lh          $a0, 0x60($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X60);
    // 0x150005C8: jal         0x1000E40C
    // 0x150005CC: lhu         $a1, 0x62($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X62);
    func_1000E40C(rdram, ctx);
        goto after_17;
    // 0x150005CC: lhu         $a1, 0x62($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X62);
    after_17:
L_150005D0:
    // 0x150005D0: lh          $s3, 0x66($sp)
    ctx->r19 = MEM_H(ctx->r29, 0X66);
    // 0x150005D4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x150005D8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x150005DC: bltz        $s3, L_150006B4
    if (SIGNED(ctx->r19) < 0) {
        // 0x150005E0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_150006B4;
    }
    // 0x150005E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150005E4: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
L_150005E8:
    // 0x150005E8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x150005EC: beql        $s2, $t6, L_150005FC
    if (ctx->r18 == ctx->r14) {
        // 0x150005F0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_150005FC;
    }
    goto skip_9;
    // 0x150005F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_9:
    // 0x150005F4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x150005F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_150005FC:
    // 0x150005FC: bne         $v1, $t0, L_150005E8
    if (ctx->r3 != ctx->r8) {
        // 0x15000600: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_150005E8;
    }
    // 0x15000600: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15000604: bne         $a3, $s2, L_15000630
    if (ctx->r7 != ctx->r18) {
        // 0x15000608: nop
    
            goto L_15000630;
    }
    // 0x15000608: nop

    // 0x1500060C: blez        $s3, L_15000628
    if (SIGNED(ctx->r19) <= 0) {
        // 0x15000610: sh          $s3, 0x66($sp)
        MEM_H(0X66, ctx->r29) = ctx->r19;
            goto L_15000628;
    }
    // 0x15000610: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    // 0x15000614: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15000618: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1500061C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15000620: jal         0x1000D96C
    // 0x15000624: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    func_1000D96C(rdram, ctx);
        goto after_18;
    // 0x15000624: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    after_18:
L_15000628:
    // 0x15000628: b           L_1500068C
    // 0x1500062C: lh          $s3, 0x66($sp)
    ctx->r19 = MEM_H(ctx->r29, 0X66);
        goto L_1500068C;
    // 0x1500062C: lh          $s3, 0x66($sp)
    ctx->r19 = MEM_H(ctx->r29, 0X66);
L_15000630:
    // 0x15000630: blez        $s3, L_15000664
    if (SIGNED(ctx->r19) <= 0) {
        // 0x15000634: sll         $t2, $a3, 2
        ctx->r10 = S32(ctx->r7 << 2);
            goto L_15000664;
    }
    // 0x15000634: sll         $t2, $a3, 2
    ctx->r10 = S32(ctx->r7 << 2);
    // 0x15000638: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x1500063C: addiu       $t1, $sp, 0x4C
    ctx->r9 = ADD32(ctx->r29, 0X4C);
    // 0x15000640: addu        $v0, $t9, $t1
    ctx->r2 = ADD32(ctx->r25, ctx->r9);
    // 0x15000644: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x15000648: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    // 0x1500064C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x15000650: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15000654: jal         0x1000D96C
    // 0x15000658: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_1000D96C(rdram, ctx);
        goto after_19;
    // 0x15000658: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_19:
    // 0x1500065C: b           L_15000684
    // 0x15000660: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
        goto L_15000684;
    // 0x15000660: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_15000664:
    // 0x15000664: addiu       $t3, $sp, 0x4C
    ctx->r11 = ADD32(ctx->r29, 0X4C);
    // 0x15000668: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    // 0x1500066C: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x15000670: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x15000674: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x15000678: jal         0x1000DE1C
    // 0x1500067C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_1000DE1C(rdram, ctx);
        goto after_20;
    // 0x1500067C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_20:
    // 0x15000680: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_15000684:
    // 0x15000684: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x15000688: lh          $s3, 0x66($sp)
    ctx->r19 = MEM_H(ctx->r29, 0X66);
L_1500068C:
    // 0x1500068C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15000690: lhu         $a2, 0x6A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X6A);
    // 0x15000694: blez        $s3, L_150006B4
    if (SIGNED(ctx->r19) <= 0) {
        // 0x15000698: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_150006B4;
    }
    // 0x15000698: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1500069C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150006A0: jal         0x1000E46C
    // 0x150006A4: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    func_1000E46C(rdram, ctx);
        goto after_21;
    // 0x150006A4: sh          $s3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r19;
    after_21:
    // 0x150006A8: lh          $a0, 0x66($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X66);
    // 0x150006AC: jal         0x1000E40C
    // 0x150006B0: lhu         $a1, 0x68($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X68);
    func_1000E40C(rdram, ctx);
        goto after_22;
    // 0x150006B0: lhu         $a1, 0x68($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X68);
    after_22:
L_150006B4:
    // 0x150006B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150006B8: jal         0x10017944
    // 0x150006BC: lbu         $a1, 0x6D($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6D);
    func_10017944(rdram, ctx);
        goto after_23;
    // 0x150006BC: lbu         $a1, 0x6D($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6D);
    after_23:
    // 0x150006C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150006C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150006C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150006CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150006D0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x150006D4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x150006D8: jr          $ra
    // 0x150006DC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    return;
    // 0x150006DC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_1518FC04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518FC04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1518FC08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518FC0C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1518FC10: lw          $a0, 0x2C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X2C);
    // 0x1518FC14: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x1518FC18: sw          $at, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r1;
    // 0x1518FC1C: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x1518FC20: sw          $t8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r24;
    // 0x1518FC24: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x1518FC28: jal         0x1514BE20
    // 0x1518FC2C: sw          $at, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r1;
    func_1514BE20(rdram, ctx);
        goto after_0;
    // 0x1518FC2C: sw          $at, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r1;
    after_0:
    // 0x1518FC30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518FC34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1518FC38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1518FC3C: jr          $ra
    // 0x1518FC40: nop

    return;
    return;
    // 0x1518FC40: nop

;}
RECOMP_FUNC void func_150B9560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B9560: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x150B9564: slti        $at, $v1, 0x50
    ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
    // 0x150B9568: beq         $at, $zero, L_150B95A4
    if (ctx->r1 == 0) {
        // 0x150B956C: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_150B95A4;
    }
    // 0x150B956C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B9570: lwc1        $f4, -0x22C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X22C);
    // 0x150B9574: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150B9578: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150B957C: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x150B9580: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150B9584: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150B9588: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150B958C: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x150B9590: lwc1        $f18, 0x38($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X38);
    // 0x150B9594: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150B9598: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x150B959C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150B95A0: swc1        $f6, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f6.u32l;
L_150B95A4:
    // 0x150B95A4: slti        $at, $v1, 0x73
    ctx->r1 = SIGNED(ctx->r3) < 0X73 ? 1 : 0;
    // 0x150B95A8: bne         $at, $zero, L_150B95D8
    if (ctx->r1 != 0) {
        // 0x150B95AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150B95D8;
    }
    // 0x150B95AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150B95B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B95B4: lwc1        $f0, -0x228($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X228);
    // 0x150B95B8: lwc1        $f10, 0x2C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x150B95BC: lwc1        $f16, 0x30($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150B95C0: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150B95C4: nop

    // 0x150B95C8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x150B95CC: swc1        $f8, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f8.u32l;
    // 0x150B95D0: b           L_150B95F4
    // 0x150B95D4: swc1        $f18, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f18.u32l;
        goto L_150B95F4;
    // 0x150B95D4: swc1        $f18, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f18.u32l;
L_150B95D8:
    // 0x150B95D8: slti        $at, $v1, 0x41
    ctx->r1 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x150B95DC: beq         $at, $zero, L_150B95F4
    if (ctx->r1 == 0) {
        // 0x150B95E0: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_150B95F4;
    }
    // 0x150B95E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B95E4: lwc1        $f6, -0x224($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X224);
    // 0x150B95E8: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150B95EC: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150B95F0: swc1        $f10, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
L_150B95F4:
    // 0x150B95F4: jr          $ra
    // 0x150B95F8: nop

    return;
    return;
    // 0x150B95F8: nop

;}
RECOMP_FUNC void func_150B6D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B6D78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150B6D7C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150B6D80: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x150B6D84: addiu       $s0, $s0, -0x676C
    ctx->r16 = ADD32(ctx->r16, -0X676C);
    // 0x150B6D88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150B6D8C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150B6D90: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x150B6D94: beq         $a0, $zero, L_150B6DA8
    if (ctx->r4 == 0) {
        // 0x150B6D98: nop
    
            goto L_150B6DA8;
    }
    // 0x150B6D98: nop

    // 0x150B6D9C: jal         0x1516972C
    // 0x150B6DA0: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150B6DA0: nop

    after_0:
    // 0x150B6DA4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_150B6DA8:
    // 0x150B6DA8: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x150B6DAC: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x150B6DB0: addiu       $s1, $s1, -0x6740
    ctx->r17 = ADD32(ctx->r17, -0X6740);
    // 0x150B6DB4: addiu       $s0, $s0, -0x6768
    ctx->r16 = ADD32(ctx->r16, -0X6768);
    // 0x150B6DB8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_150B6DBC:
    // 0x150B6DBC: beql        $a0, $zero, L_150B6DD4
    if (ctx->r4 == 0) {
        // 0x150B6DC0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_150B6DD4;
    }
    goto skip_0;
    // 0x150B6DC0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x150B6DC4: jal         0x1516972C
    // 0x150B6DC8: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x150B6DC8: nop

    after_1:
    // 0x150B6DCC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x150B6DD0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_150B6DD4:
    // 0x150B6DD4: bnel        $s0, $s1, L_150B6DBC
    if (ctx->r16 != ctx->r17) {
        // 0x150B6DD8: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_150B6DBC;
    }
    goto skip_1;
    // 0x150B6DD8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x150B6DDC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150B6DE0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150B6DE4: sb          $t6, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r14;
    // 0x150B6DE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150B6DEC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x150B6DF0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x150B6DF4: jr          $ra
    // 0x150B6DF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x150B6DF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_15108E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15108E10: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x15108E14: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x15108E18: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x15108E1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15108E20: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x15108E24: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x15108E28: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x15108E2C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x15108E30: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x15108E34: lw          $t6, 0x50($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X50);
    // 0x15108E38: addu        $s1, $v0, $t6
    ctx->r17 = ADD32(ctx->r2, ctx->r14);
    // 0x15108E3C: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x15108E40: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x15108E44: jal         0x150A8050
    // 0x15108E48: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x15108E48: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    after_0:
    // 0x15108E4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15108E50: lwc1        $f0, 0x2494($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2494);
    // 0x15108E54: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15108E58: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x15108E5C: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x15108E60: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15108E64: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x15108E68: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    // 0x15108E6C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15108E70: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15108E74: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15108E78: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15108E7C: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x15108E80: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
    // 0x15108E84: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15108E88: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x15108E8C: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15108E90: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15108E94: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x15108E98: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x15108E9C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15108EA0: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x15108EA4: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x15108EA8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15108EAC: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x15108EB0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x15108EB4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15108EB8: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x15108EBC: lui         $a2, 0xC48A
    ctx->r6 = S32(0XC48A << 16);
    // 0x15108EC0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15108EC4: addiu       $t7, $sp, 0xB0
    ctx->r15 = ADD32(ctx->r29, 0XB0);
    // 0x15108EC8: addiu       $t8, $sp, 0xB4
    ctx->r24 = ADD32(ctx->r29, 0XB4);
    // 0x15108ECC: addiu       $t9, $sp, 0xB8
    ctx->r25 = ADD32(ctx->r29, 0XB8);
    // 0x15108ED0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x15108ED4: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x15108ED8: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x15108EDC: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x15108EE0: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x15108EE4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15108EE8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15108EEC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15108EF0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x15108EF4: jal         0x150A7960
    // 0x15108EF8: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15108EF8: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_1:
    // 0x15108EFC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x15108F00: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x15108F04: lwc1        $f14, 0x10($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X10);
    // 0x15108F08: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x15108F0C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x15108F10: sub.s       $f0, $f6, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x15108F14: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x15108F18: addiu       $t1, $sp, 0x5C
    ctx->r9 = ADD32(ctx->r29, 0X5C);
    // 0x15108F1C: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x15108F20: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x15108F24: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x15108F28: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x15108F2C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x15108F30: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x15108F34: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x15108F38: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x15108F3C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15108F40: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15108F44: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15108F48: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    // 0x15108F4C: jal         0x150AC9C0
    // 0x15108F50: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_150AC9C0(rdram, ctx);
        goto after_2;
    // 0x15108F50: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x15108F54: bne         $v0, $zero, L_15108F78
    if (ctx->r2 != 0) {
        // 0x15108F58: addiu       $t4, $sp, 0xB0
        ctx->r12 = ADD32(ctx->r29, 0XB0);
            goto L_15108F78;
    }
    // 0x15108F58: addiu       $t4, $sp, 0xB0
    ctx->r12 = ADD32(ctx->r29, 0XB0);
    // 0x15108F5C: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x15108F60: addiu       $t3, $sp, 0x58
    ctx->r11 = ADD32(ctx->r29, 0X58);
    // 0x15108F64: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x15108F68: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x15108F6C: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x15108F70: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x15108F74: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
L_15108F78:
    // 0x15108F78: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15108F7C: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x15108F80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15108F84: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15108F88: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x15108F8C: nop

    // 0x15108F90: sh          $t8, 0xE($t9)
    MEM_H(0XE, ctx->r25) = ctx->r24;
    // 0x15108F94: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15108F98: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x15108F9C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15108FA0: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x15108FA4: nop

    // 0x15108FA8: sh          $t1, 0x10($t2)
    MEM_H(0X10, ctx->r10) = ctx->r9;
    // 0x15108FAC: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15108FB0: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x15108FB4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15108FB8: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x15108FBC: nop

    // 0x15108FC0: sh          $t3, 0x12($t4)
    MEM_H(0X12, ctx->r12) = ctx->r11;
    // 0x15108FC4: lbu         $t6, 0x20($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X20);
    // 0x15108FC8: beql        $t6, $zero, L_15108FE0
    if (ctx->r14 == 0) {
        // 0x15108FCC: lw          $t9, 0x14($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X14);
            goto L_15108FE0;
    }
    goto skip_0;
    // 0x15108FCC: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    skip_0:
    // 0x15108FD0: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x15108FD4: b           L_15108FE8
    // 0x15108FD8: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
        goto L_15108FE8;
    // 0x15108FD8: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
    // 0x15108FDC: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
L_15108FE0:
    // 0x15108FE0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15108FE4: sb          $t8, 0x9($t9)
    MEM_B(0X9, ctx->r25) = ctx->r24;
L_15108FE8:
    // 0x15108FE8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x15108FEC: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x15108FF0: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x15108FF4: jr          $ra
    // 0x15108FF8: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x15108FF8: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_1000E934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000E934: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x1000E938: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1000E93C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1000E940: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1000E944: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1000E948: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1000E94C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1000E950: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1000E954: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1000E958: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1000E95C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1000E960: lui         $s4, 0x8004
    ctx->r20 = S32(0X8004 << 16);
    // 0x1000E964: lui         $s5, 0x8004
    ctx->r21 = S32(0X8004 << 16);
    // 0x1000E968: lui         $s6, 0x8004
    ctx->r22 = S32(0X8004 << 16);
    // 0x1000E96C: lui         $s7, 0x8004
    ctx->r23 = S32(0X8004 << 16);
    // 0x1000E970: lui         $fp, 0x8004
    ctx->r30 = S32(0X8004 << 16);
    // 0x1000E974: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x1000E978: addiu       $a1, $a1, 0x1880
    ctx->r5 = ADD32(ctx->r5, 0X1880);
    // 0x1000E97C: addiu       $fp, $fp, 0x1890
    ctx->r30 = ADD32(ctx->r30, 0X1890);
    // 0x1000E980: addiu       $s7, $s7, 0x18A0
    ctx->r23 = ADD32(ctx->r23, 0X18A0);
    // 0x1000E984: addiu       $s6, $s6, 0x17B0
    ctx->r22 = ADD32(ctx->r22, 0X17B0);
    // 0x1000E988: addiu       $s5, $s5, 0x17C0
    ctx->r21 = ADD32(ctx->r21, 0X17C0);
    // 0x1000E98C: addiu       $s4, $s4, 0x18B0
    ctx->r20 = ADD32(ctx->r20, 0X18B0);
    // 0x1000E990: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1000E994: addiu       $s2, $zero, 0x10
    ctx->r18 = ADD32(0, 0X10);
    // 0x1000E998: addiu       $s1, $zero, 0x100
    ctx->r17 = ADD32(0, 0X100);
    // 0x1000E99C: ori         $s0, $zero, 0x8000
    ctx->r16 = 0 | 0X8000;
L_1000E9A0:
    // 0x1000E9A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1000E9A4: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x1000E9A8: or          $v1, $s5, $zero
    ctx->r3 = ctx->r21 | 0;
L_1000E9AC:
    // 0x1000E9AC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1000E9B0: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x1000E9B4: sw          $s1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r17;
    // 0x1000E9B8: sw          $s0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r16;
    // 0x1000E9BC: sw          $s1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r17;
    // 0x1000E9C0: sw          $s0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r16;
    // 0x1000E9C4: sw          $s1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r17;
    // 0x1000E9C8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x1000E9CC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x1000E9D0: sw          $s0, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->r16;
    // 0x1000E9D4: bne         $a0, $s2, L_1000E9AC
    if (ctx->r4 != ctx->r18) {
        // 0x1000E9D8: sw          $s1, -0x10($v1)
        MEM_W(-0X10, ctx->r3) = ctx->r17;
            goto L_1000E9AC;
    }
    // 0x1000E9D8: sw          $s1, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r17;
    // 0x1000E9DC: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    // 0x1000E9E0: jal         0x10008F24
    // 0x1000E9E4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_10008F24(rdram, ctx);
        goto after_0;
    // 0x1000E9E4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x1000E9E8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x1000E9EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1000E9F0: sltiu       $at, $s3, 0x3
    ctx->r1 = ctx->r19 < 0X3 ? 1 : 0;
    // 0x1000E9F4: addiu       $s4, $s4, 0x40
    ctx->r20 = ADD32(ctx->r20, 0X40);
    // 0x1000E9F8: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
    // 0x1000E9FC: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x1000EA00: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x1000EA04: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
    // 0x1000EA08: sw          $zero, -0x4($s6)
    MEM_W(-0X4, ctx->r22) = 0;
    // 0x1000EA0C: sw          $zero, -0x4($s7)
    MEM_W(-0X4, ctx->r23) = 0;
    // 0x1000EA10: sw          $zero, -0x4($fp)
    MEM_W(-0X4, ctx->r30) = 0;
    // 0x1000EA14: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x1000EA18: bne         $at, $zero, L_1000E9A0
    if (ctx->r1 != 0) {
        // 0x1000EA1C: sw          $zero, -0x4($a1)
        MEM_W(-0X4, ctx->r5) = 0;
            goto L_1000E9A0;
    }
    // 0x1000EA1C: sw          $zero, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = 0;
    // 0x1000EA20: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x1000EA24: addiu       $a0, $a0, 0x19A8
    ctx->r4 = ADD32(ctx->r4, 0X19A8);
    // 0x1000EA28: jal         0x100226F0
    // 0x1000EA2C: addiu       $a1, $zero, 0x4B0
    ctx->r5 = ADD32(0, 0X4B0);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x1000EA2C: addiu       $a1, $zero, 0x4B0
    ctx->r5 = ADD32(0, 0X4B0);
    after_1:
    // 0x1000EA30: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000EA34: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000EA38: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x1000EA3C: sb          $zero, 0x19A0($at)
    MEM_B(0X19A0, ctx->r1) = 0;
    // 0x1000EA40: addiu       $a0, $a0, 0x1E58
    ctx->r4 = ADD32(ctx->r4, 0X1E58);
    // 0x1000EA44: addiu       $v0, $v0, 0x19A8
    ctx->r2 = ADD32(ctx->r2, 0X19A8);
    // 0x1000EA48: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_1000EA4C:
    // 0x1000EA4C: addiu       $v0, $v0, 0x190
    ctx->r2 = ADD32(ctx->r2, 0X190);
    // 0x1000EA50: sw          $v1, -0x128($v0)
    MEM_W(-0X128, ctx->r2) = ctx->r3;
    // 0x1000EA54: sw          $v1, -0xC4($v0)
    MEM_W(-0XC4, ctx->r2) = ctx->r3;
    // 0x1000EA58: sw          $v1, -0x60($v0)
    MEM_W(-0X60, ctx->r2) = ctx->r3;
    // 0x1000EA5C: bne         $v0, $a0, L_1000EA4C
    if (ctx->r2 != ctx->r4) {
        // 0x1000EA60: sw          $v1, -0x18C($v0)
        MEM_W(-0X18C, ctx->r2) = ctx->r3;
            goto L_1000EA4C;
    }
    // 0x1000EA60: sw          $v1, -0x18C($v0)
    MEM_W(-0X18C, ctx->r2) = ctx->r3;
    // 0x1000EA64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1000EA68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1000EA6C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1000EA70: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1000EA74: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1000EA78: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1000EA7C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1000EA80: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1000EA84: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x1000EA88: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x1000EA8C: jr          $ra
    // 0x1000EA90: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    return;
    // 0x1000EA90: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_151BA518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BA518: addiu       $sp, $sp, -0x1E8
    ctx->r29 = ADD32(ctx->r29, -0X1E8);
    // 0x151BA51C: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x151BA520: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151BA524: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x151BA528: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x151BA52C: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x151BA530: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x151BA534: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x151BA538: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x151BA53C: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x151BA540: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x151BA544: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x151BA548: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x151BA54C: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x151BA550: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x151BA554: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x151BA558: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x151BA55C: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x151BA560: sw          $a1, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r5;
    // 0x151BA564: sw          $a2, 0x1F0($sp)
    MEM_W(0X1F0, ctx->r29) = ctx->r6;
    // 0x151BA568: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x151BA56C: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
    // 0x151BA570: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151BA574: addiu       $t7, $zero, -0x3F
    ctx->r15 = ADD32(0, -0X3F);
    // 0x151BA578: addiu       $t8, $zero, 0x34
    ctx->r24 = ADD32(0, 0X34);
    // 0x151BA57C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x151BA580: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x151BA584: sh          $zero, 0x18C($sp)
    MEM_H(0X18C, ctx->r29) = 0;
    // 0x151BA588: sh          $t6, 0x18E($sp)
    MEM_H(0X18E, ctx->r29) = ctx->r14;
    // 0x151BA58C: sh          $t7, 0x190($sp)
    MEM_H(0X190, ctx->r29) = ctx->r15;
    // 0x151BA590: sh          $t8, 0x192($sp)
    MEM_H(0X192, ctx->r29) = ctx->r24;
    // 0x151BA594: bne         $at, $zero, L_151BA5A4
    if (ctx->r1 != 0) {
        // 0x151BA598: sw          $t9, 0x194($sp)
        MEM_W(0X194, ctx->r29) = ctx->r25;
            goto L_151BA5A4;
    }
    // 0x151BA598: sw          $t9, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r25;
    // 0x151BA59C: b           L_151BA5A8
    // 0x151BA5A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151BA5A8;
    // 0x151BA5A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151BA5A4:
    // 0x151BA5A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151BA5A8:
    // 0x151BA5A8: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x151BA5AC: srav        $t1, $t0, $v0
    ctx->r9 = S32(SIGNED(ctx->r8) >> (ctx->r2 & 31));
    // 0x151BA5B0: sw          $t1, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r9;
    // 0x151BA5B4: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151BA5B8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151BA5BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151BA5C0: swc1        $f4, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f4.u32l;
    // 0x151BA5C4: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151BA5C8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x151BA5CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151BA5D0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151BA5D4: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x151BA5D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BA5DC: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x151BA5E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151BA5E4: swc1        $f10, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f10.u32l;
    // 0x151BA5E8: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151BA5EC: lui         $at, 0x4288
    ctx->r1 = S32(0X4288 << 16);
    // 0x151BA5F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151BA5F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BA5F8: lwc1        $f10, -0x5844($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5844);
    // 0x151BA5FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BA600: swc1        $f16, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f16.u32l;
    // 0x151BA604: lwc1        $f16, -0x5840($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5840);
    // 0x151BA608: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x151BA60C: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x151BA610: sw          $t2, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->r10;
    // 0x151BA614: swc1        $f18, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f18.u32l;
    // 0x151BA618: swc1        $f4, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f4.u32l;
    // 0x151BA61C: swc1        $f6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f6.u32l;
    // 0x151BA620: swc1        $f8, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f8.u32l;
    // 0x151BA624: swc1        $f10, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f10.u32l;
    // 0x151BA628: beq         $at, $zero, L_151BA648
    if (ctx->r1 == 0) {
        // 0x151BA62C: swc1        $f16, 0x1BC($sp)
        MEM_W(0X1BC, ctx->r29) = ctx->f16.u32l;
            goto L_151BA648;
    }
    // 0x151BA62C: swc1        $f16, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f16.u32l;
    // 0x151BA630: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151BA634: lb          $t3, -0x274($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X274);
    // 0x151BA638: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151BA63C: slti        $at, $t3, 0x8
    ctx->r1 = SIGNED(ctx->r11) < 0X8 ? 1 : 0;
    // 0x151BA640: bne         $at, $zero, L_151BA650
    if (ctx->r1 != 0) {
        // 0x151BA644: nop
    
            goto L_151BA650;
    }
    // 0x151BA644: nop

L_151BA648:
    // 0x151BA648: b           L_151BA650
    // 0x151BA64C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151BA650;
    // 0x151BA64C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151BA650:
    // 0x151BA650: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x151BA654: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151BA658: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BA65C: lwc1        $f4, -0x583C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X583C);
    // 0x151BA660: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BA664: lwc1        $f6, -0x5838($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5838);
    // 0x151BA668: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151BA66C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x151BA670: srav        $t5, $t4, $v0
    ctx->r13 = S32(SIGNED(ctx->r12) >> (ctx->r2 & 31));
    // 0x151BA674: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x151BA678: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x151BA67C: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x151BA680: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x151BA684: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x151BA688: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x151BA68C: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x151BA690: sw          $t5, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r13;
    // 0x151BA694: sh          $t6, 0x1D8($sp)
    MEM_H(0X1D8, ctx->r29) = ctx->r14;
    // 0x151BA698: sh          $t7, 0x1DA($sp)
    MEM_H(0X1DA, ctx->r29) = ctx->r15;
    // 0x151BA69C: sh          $t8, 0x1DC($sp)
    MEM_H(0X1DC, ctx->r29) = ctx->r24;
    // 0x151BA6A0: sh          $t9, 0x1DE($sp)
    MEM_H(0X1DE, ctx->r29) = ctx->r25;
    // 0x151BA6A4: sh          $t0, 0x1E0($sp)
    MEM_H(0X1E0, ctx->r29) = ctx->r8;
    // 0x151BA6A8: sh          $t1, 0x1E2($sp)
    MEM_H(0X1E2, ctx->r29) = ctx->r9;
    // 0x151BA6AC: swc1        $f18, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->f18.u32l;
    // 0x151BA6B0: swc1        $f4, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->f4.u32l;
    // 0x151BA6B4: swc1        $f6, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->f6.u32l;
    // 0x151BA6B8: beq         $at, $zero, L_151BA6D0
    if (ctx->r1 == 0) {
        // 0x151BA6BC: swc1        $f8, 0x1D4($sp)
        MEM_W(0X1D4, ctx->r29) = ctx->f8.u32l;
            goto L_151BA6D0;
    }
    // 0x151BA6BC: swc1        $f8, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->f8.u32l;
    // 0x151BA6C0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151BA6C4: lb          $t2, -0x274($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X274);
    // 0x151BA6C8: slti        $at, $t2, 0x8
    ctx->r1 = SIGNED(ctx->r10) < 0X8 ? 1 : 0;
    // 0x151BA6CC: bne         $at, $zero, L_151BA6DC
    if (ctx->r1 != 0) {
        // 0x151BA6D0: addiu       $t3, $zero, -0x1
        ctx->r11 = ADD32(0, -0X1);
            goto L_151BA6DC;
    }
L_151BA6D0:
    // 0x151BA6D0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151BA6D4: b           L_151BA6E0
    // 0x151BA6D8: sb          $t3, 0x1E4($sp)
    MEM_B(0X1E4, ctx->r29) = ctx->r11;
        goto L_151BA6E0;
    // 0x151BA6D8: sb          $t3, 0x1E4($sp)
    MEM_B(0X1E4, ctx->r29) = ctx->r11;
L_151BA6DC:
    // 0x151BA6DC: sb          $zero, 0x1E4($sp)
    MEM_B(0X1E4, ctx->r29) = 0;
L_151BA6E0:
    // 0x151BA6E0: addiu       $a0, $sp, 0x18C
    ctx->r4 = ADD32(ctx->r29, 0X18C);
    // 0x151BA6E4: lbu         $a1, 0x1EF($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1EF);
    // 0x151BA6E8: jal         0x1514FCE8
    // 0x151BA6EC: lw          $a2, 0x1F0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1F0);
    func_1514FCE8(rdram, ctx);
        goto after_0;
    // 0x151BA6EC: lw          $a2, 0x1F0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1F0);
    after_0:
    // 0x151BA6F0: lw          $t4, 0x1D4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1D4);
    // 0x151BA6F4: beql        $t4, $zero, L_151BB000
    if (ctx->r12 == 0) {
        // 0x151BA6F8: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_151BB000;
    }
    goto skip_0;
    // 0x151BA6F8: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_0:
    // 0x151BA6FC: lbu         $t5, 0x74($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X74);
    // 0x151BA700: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151BA704: addiu       $fp, $sp, 0x168
    ctx->r30 = ADD32(ctx->r29, 0X168);
    // 0x151BA708: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x151BA70C: beq         $t6, $at, L_151BAFFC
    if (ctx->r14 == ctx->r1) {
        // 0x151BA710: or          $a0, $fp, $zero
        ctx->r4 = ctx->r30 | 0;
            goto L_151BAFFC;
    }
    // 0x151BA710: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x151BA714: jal         0x1504715C
    // 0x151BA718: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x151BA718: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x151BA71C: lw          $s3, 0x1D4($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X1D4);
    // 0x151BA720: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    // 0x151BA724: addiu       $a2, $sp, 0xD4
    ctx->r6 = ADD32(ctx->r29, 0XD4);
    // 0x151BA728: addiu       $s3, $s3, 0x40
    ctx->r19 = ADD32(ctx->r19, 0X40);
    // 0x151BA72C: addiu       $t7, $sp, 0x15C
    ctx->r15 = ADD32(ctx->r29, 0X15C);
    // 0x151BA730: addiu       $t8, $sp, 0x160
    ctx->r24 = ADD32(ctx->r29, 0X160);
    // 0x151BA734: addiu       $t9, $sp, 0x164
    ctx->r25 = ADD32(ctx->r29, 0X164);
    // 0x151BA738: addiu       $t0, $sp, 0xC4
    ctx->r8 = ADD32(ctx->r29, 0XC4);
    // 0x151BA73C: addiu       $t1, $sp, 0xC8
    ctx->r9 = ADD32(ctx->r29, 0XC8);
    // 0x151BA740: addiu       $t2, $sp, 0xCC
    ctx->r10 = ADD32(ctx->r29, 0XCC);
    // 0x151BA744: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x151BA748: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x151BA74C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151BA750: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151BA754: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151BA758: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151BA75C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151BA760: jal         0x1503F404
    // 0x151BA764: addiu       $a3, $sp, 0xD8
    ctx->r7 = ADD32(ctx->r29, 0XD8);
    func_1503F404(rdram, ctx);
        goto after_2;
    // 0x151BA764: addiu       $a3, $sp, 0xD8
    ctx->r7 = ADD32(ctx->r29, 0XD8);
    after_2:
    // 0x151BA768: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151BA76C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151BA770: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BA774: lwc1        $f10, -0x5834($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5834);
    // 0x151BA778: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151BA77C: addiu       $t3, $zero, 0x39E9
    ctx->r11 = ADD32(0, 0X39E9);
    // 0x151BA780: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151BA784: addiu       $t5, $zero, 0xD
    ctx->r13 = ADD32(0, 0XD);
    // 0x151BA788: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x151BA78C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151BA790: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x151BA794: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x151BA798: swc1        $f0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f0.u32l;
    // 0x151BA79C: swc1        $f0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f0.u32l;
    // 0x151BA7A0: sw          $t3, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r11;
    // 0x151BA7A4: sb          $zero, 0x134($sp)
    MEM_B(0X134, ctx->r29) = 0;
    // 0x151BA7A8: sw          $zero, 0x138($sp)
    MEM_W(0X138, ctx->r29) = 0;
    // 0x151BA7AC: sb          $t4, 0x13C($sp)
    MEM_B(0X13C, ctx->r29) = ctx->r12;
    // 0x151BA7B0: sb          $t5, 0x13D($sp)
    MEM_B(0X13D, ctx->r29) = ctx->r13;
    // 0x151BA7B4: sb          $zero, 0x13E($sp)
    MEM_B(0X13E, ctx->r29) = 0;
    // 0x151BA7B8: sb          $t6, 0x13F($sp)
    MEM_B(0X13F, ctx->r29) = ctx->r14;
    // 0x151BA7BC: sb          $zero, 0x140($sp)
    MEM_B(0X140, ctx->r29) = 0;
    // 0x151BA7C0: sb          $zero, 0x141($sp)
    MEM_B(0X141, ctx->r29) = 0;
    // 0x151BA7C4: sb          $zero, 0x142($sp)
    MEM_B(0X142, ctx->r29) = 0;
    // 0x151BA7C8: sb          $zero, 0x143($sp)
    MEM_B(0X143, ctx->r29) = 0;
    // 0x151BA7CC: sb          $t7, 0x144($sp)
    MEM_B(0X144, ctx->r29) = ctx->r15;
    // 0x151BA7D0: sb          $zero, 0x146($sp)
    MEM_B(0X146, ctx->r29) = 0;
    // 0x151BA7D4: sw          $s0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r16;
    // 0x151BA7D8: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x151BA7DC: swc1        $f16, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f16.u32l;
    // 0x151BA7E0: lbu         $t8, 0x3B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3B);
    // 0x151BA7E4: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x151BA7E8: addiu       $t0, $zero, 0x15
    ctx->r8 = ADD32(0, 0X15);
    // 0x151BA7EC: sh          $t9, 0x14E($sp)
    MEM_H(0X14E, ctx->r29) = ctx->r25;
    // 0x151BA7F0: sh          $t0, 0x150($sp)
    MEM_H(0X150, ctx->r29) = ctx->r8;
    // 0x151BA7F4: sb          $t8, 0x14C($sp)
    MEM_B(0X14C, ctx->r29) = ctx->r24;
    // 0x151BA7F8: jal         0x150ADA68
    // 0x151BA7FC: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151BA7FC: nop

    after_3:
    // 0x151BA800: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BA804: lwc1        $f22, -0x5830($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X5830);
    // 0x151BA808: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x151BA80C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x151BA810: lui         $at, 0x42A6
    ctx->r1 = S32(0X42A6 << 16);
    // 0x151BA814: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BA818: mul.s       $f18, $f0, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x151BA81C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151BA820: mul.s       $f20, $f6, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x151BA824: jal         0x150ADA20
    // 0x151BA828: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151BA828: nop

    after_4:
    // 0x151BA82C: addiu       $s6, $zero, 0x24
    ctx->r22 = ADD32(0, 0X24);
    // 0x151BA830: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x151BA834: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x151BA838: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151BA83C: mfhi        $t1
    ctx->r9 = hi;
    // 0x151BA840: addiu       $t2, $t1, 0x1E
    ctx->r10 = ADD32(ctx->r9, 0X1E);
    // 0x151BA844: bne         $s6, $zero, L_151BA850
    if (ctx->r22 != 0) {
        // 0x151BA848: nop
    
            goto L_151BA850;
    }
    // 0x151BA848: nop

    // 0x151BA84C: break       7
    do_break(354134092);
L_151BA850:
    // 0x151BA850: addiu       $t3, $zero, 0x27
    ctx->r11 = ADD32(0, 0X27);
    // 0x151BA854: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x151BA858: sh          $t2, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r10;
    // 0x151BA85C: sh          $t3, 0x132($sp)
    MEM_H(0X132, ctx->r29) = ctx->r11;
    // 0x151BA860: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x151BA864: jal         0x150ADA68
    // 0x151BA868: swc1        $f2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x151BA868: swc1        $f2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x151BA86C: lui         $at, 0xC3F4
    ctx->r1 = S32(0XC3F4 << 16);
    // 0x151BA870: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151BA874: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151BA878: addiu       $a0, $a0, -0x5A70
    ctx->r4 = ADD32(ctx->r4, -0X5A70);
    // 0x151BA87C: mul.s       $f28, $f8, $f22
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f28.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x151BA880: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x151BA884: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x151BA888: jal         0x15143134
    // 0x151BA88C: swc1        $f28, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f28.u32l;
    func_15143134(rdram, ctx);
        goto after_6;
    // 0x151BA88C: swc1        $f28, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f28.u32l;
    after_6:
    // 0x151BA890: addiu       $s7, $sp, 0x110
    ctx->r23 = ADD32(ctx->r29, 0X110);
    // 0x151BA894: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151BA898: addiu       $a0, $a0, -0x5A64
    ctx->r4 = ADD32(ctx->r4, -0X5A64);
    // 0x151BA89C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151BA8A0: jal         0x15143134
    // 0x151BA8A4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_15143134(rdram, ctx);
        goto after_7;
    // 0x151BA8A4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_7:
    // 0x151BA8A8: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    // 0x151BA8AC: lwc1        $f16, 0x104($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X104);
    // 0x151BA8B0: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x151BA8B4: lwc1        $f6, 0x108($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X108);
    // 0x151BA8B8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151BA8BC: lwc1        $f16, 0x10C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x151BA8C0: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x151BA8C4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151BA8C8: mul.s       $f6, $f18, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x151BA8CC: swc1        $f18, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f18.u32l;
    // 0x151BA8D0: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151BA8D4: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x151BA8D8: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    // 0x151BA8DC: addiu       $t4, $sp, 0x15C
    ctx->r12 = ADD32(ctx->r29, 0X15C);
    // 0x151BA8E0: mul.s       $f16, $f4, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x151BA8E4: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    // 0x151BA8E8: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    // 0x151BA8EC: addiu       $s4, $sp, 0xEC
    ctx->r20 = ADD32(ctx->r29, 0XEC);
    // 0x151BA8F0: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    // 0x151BA8F4: swc1        $f16, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f16.u32l;
    // 0x151BA8F8: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151BA8FC: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x151BA900: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x151BA904: sw          $t7, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r15;
    // 0x151BA908: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151BA90C: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x151BA910: lui         $at, 0x42DA
    ctx->r1 = S32(0X42DA << 16);
    // 0x151BA914: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151BA918: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x151BA91C: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x151BA920: jal         0x150ADA68
    // 0x151BA924: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x151BA924: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x151BA928: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BA92C: lwc1        $f24, -0x582C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X582C);
    // 0x151BA930: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BA934: lwc1        $f26, -0x5828($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X5828);
    // 0x151BA938: mul.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151BA93C: add.s       $f4, $f10, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f26.fl;
    // 0x151BA940: mul.s       $f16, $f4, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x151BA944: jal         0x150ADA68
    // 0x151BA948: swc1        $f16, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x151BA948: swc1        $f16, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x151BA94C: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151BA950: lbu         $t8, 0x1EF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1EF);
    // 0x151BA954: lw          $t9, 0x1F0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F0);
    // 0x151BA958: addiu       $s5, $sp, 0xDC
    ctx->r21 = ADD32(ctx->r29, 0XDC);
    // 0x151BA95C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x151BA960: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151BA964: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151BA968: add.s       $f6, $f18, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x151BA96C: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x151BA970: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151BA974: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151BA978: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x151BA97C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151BA980: jal         0x1513264C
    // 0x151BA984: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
    func_1513264C(rdram, ctx);
        goto after_10;
    // 0x151BA984: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x151BA988: jal         0x150ADA68
    // 0x151BA98C: nop

    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x151BA98C: nop

    after_11:
    // 0x151BA990: mul.s       $f10, $f0, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x151BA994: lui         $at, 0x42A6
    ctx->r1 = S32(0X42A6 << 16);
    // 0x151BA998: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BA99C: nop

    // 0x151BA9A0: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151BA9A4: mul.s       $f20, $f16, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x151BA9A8: jal         0x150ADA20
    // 0x151BA9AC: nop

    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x151BA9AC: nop

    after_12:
    // 0x151BA9B0: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x151BA9B4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151BA9B8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151BA9BC: mfhi        $t0
    ctx->r8 = hi;
    // 0x151BA9C0: addiu       $t1, $t0, 0x1E
    ctx->r9 = ADD32(ctx->r8, 0X1E);
    // 0x151BA9C4: bne         $s6, $zero, L_151BA9D0
    if (ctx->r22 != 0) {
        // 0x151BA9C8: nop
    
            goto L_151BA9D0;
    }
    // 0x151BA9C8: nop

    // 0x151BA9CC: break       7
    do_break(354134476);
L_151BA9D0:
    // 0x151BA9D0: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x151BA9D4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x151BA9D8: sh          $t1, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r9;
    // 0x151BA9DC: sh          $t2, 0x132($sp)
    MEM_H(0X132, ctx->r29) = ctx->r10;
    // 0x151BA9E0: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x151BA9E4: jal         0x150ADA68
    // 0x151BA9E8: swc1        $f2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x151BA9E8: swc1        $f2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f2.u32l;
    after_13:
    // 0x151BA9EC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151BA9F0: swc1        $f28, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f28.u32l;
    // 0x151BA9F4: addiu       $a0, $a0, -0x5A58
    ctx->r4 = ADD32(ctx->r4, -0X5A58);
    // 0x151BA9F8: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x151BA9FC: jal         0x15143134
    // 0x151BAA00: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_15143134(rdram, ctx);
        goto after_14;
    // 0x151BAA00: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_14:
    // 0x151BAA04: jal         0x150ADA20
    // 0x151BAA08: nop

    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x151BAA08: nop

    after_15:
    // 0x151BAA0C: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x151BAA10: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x151BAA14: subu        $t6, $t6, $t3
    ctx->r14 = SUB32(ctx->r14, ctx->r11);
    // 0x151BAA18: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x151BAA1C: addiu       $t5, $t5, -0x5A4C
    ctx->r13 = ADD32(ctx->r13, -0X5A4C);
    // 0x151BAA20: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151BAA24: addu        $a0, $t6, $t5
    ctx->r4 = ADD32(ctx->r14, ctx->r13);
    // 0x151BAA28: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151BAA2C: jal         0x15143134
    // 0x151BAA30: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_15143134(rdram, ctx);
        goto after_16;
    // 0x151BAA30: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_16:
    // 0x151BAA34: lwc1        $f18, 0x110($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X110);
    // 0x151BAA38: lwc1        $f6, 0x104($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X104);
    // 0x151BAA3C: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x151BAA40: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
    // 0x151BAA44: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x151BAA48: lwc1        $f6, 0x10C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x151BAA4C: lwc1        $f18, 0x118($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X118);
    // 0x151BAA50: sub.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151BAA54: mul.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x151BAA58: swc1        $f8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f8.u32l;
    // 0x151BAA5C: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x151BAA60: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x151BAA64: swc1        $f16, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f16.u32l;
    // 0x151BAA68: addiu       $t4, $sp, 0x15C
    ctx->r12 = ADD32(ctx->r29, 0X15C);
    // 0x151BAA6C: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x151BAA70: swc1        $f10, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f10.u32l;
    // 0x151BAA74: swc1        $f4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f4.u32l;
    // 0x151BAA78: swc1        $f18, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f18.u32l;
    // 0x151BAA7C: swc1        $f6, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f6.u32l;
    // 0x151BAA80: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151BAA84: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x151BAA88: lw          $t9, 0x4($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X4);
    // 0x151BAA8C: sw          $t9, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r25;
    // 0x151BAA90: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151BAA94: jal         0x150ADA68
    // 0x151BAA98: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    func_150ADA68(rdram, ctx);
        goto after_17;
    // 0x151BAA98: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    after_17:
    // 0x151BAA9C: mul.s       $f8, $f0, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151BAAA0: add.s       $f4, $f8, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x151BAAA4: mul.s       $f16, $f4, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x151BAAA8: jal         0x150ADA68
    // 0x151BAAAC: swc1        $f16, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_18;
    // 0x151BAAAC: swc1        $f16, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f16.u32l;
    after_18:
    // 0x151BAAB0: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151BAAB4: lbu         $t0, 0x1EF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1EF);
    // 0x151BAAB8: lw          $t1, 0x1F0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1F0);
    // 0x151BAABC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x151BAAC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151BAAC4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151BAAC8: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x151BAACC: add.s       $f10, $f18, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x151BAAD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151BAAD4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x151BAAD8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x151BAADC: mul.s       $f6, $f10, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x151BAAE0: jal         0x1513264C
    // 0x151BAAE4: swc1        $f6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f6.u32l;
    func_1513264C(rdram, ctx);
        goto after_19;
    // 0x151BAAE4: swc1        $f6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f6.u32l;
    after_19:
    // 0x151BAAE8: addiu       $t2, $zero, 0x29
    ctx->r10 = ADD32(0, 0X29);
    // 0x151BAAEC: sh          $t2, 0x132($sp)
    MEM_H(0X132, ctx->r29) = ctx->r10;
    // 0x151BAAF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_151BAAF4:
    // 0x151BAAF4: jal         0x150ADA20
    // 0x151BAAF8: nop

    func_150ADA20(rdram, ctx);
        goto after_20;
    // 0x151BAAF8: nop

    after_20:
    // 0x151BAAFC: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x151BAB00: beq         $t3, $zero, L_151BAC68
    if (ctx->r11 == 0) {
        // 0x151BAB04: sll         $t6, $s0, 2
        ctx->r14 = S32(ctx->r16 << 2);
            goto L_151BAC68;
    }
    // 0x151BAB04: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x151BAB08: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x151BAB0C: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x151BAB10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x151BAB14: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151BAB18: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151BAB1C: addiu       $t4, $t4, -0x5A04
    ctx->r12 = ADD32(ctx->r12, -0X5A04);
    // 0x151BAB20: addiu       $t8, $t8, -0x5A34
    ctx->r24 = ADD32(ctx->r24, -0X5A34);
    // 0x151BAB24: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x151BAB28: addiu       $t5, $t5, -0x59D4
    ctx->r13 = ADD32(ctx->r13, -0X59D4);
    // 0x151BAB2C: addu        $t7, $v0, $t8
    ctx->r15 = ADD32(ctx->r2, ctx->r24);
    // 0x151BAB30: addu        $t9, $v0, $t4
    ctx->r25 = ADD32(ctx->r2, ctx->r12);
    // 0x151BAB34: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x151BAB38: sw          $t7, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r15;
    // 0x151BAB3C: jal         0x150ADA68
    // 0x151BAB40: addu        $s1, $t6, $t5
    ctx->r17 = ADD32(ctx->r14, ctx->r13);
    func_150ADA68(rdram, ctx);
        goto after_21;
    // 0x151BAB40: addu        $s1, $t6, $t5
    ctx->r17 = ADD32(ctx->r14, ctx->r13);
    after_21:
    // 0x151BAB44: mul.s       $f8, $f0, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x151BAB48: lui         $at, 0x42A6
    ctx->r1 = S32(0X42A6 << 16);
    // 0x151BAB4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BAB50: nop

    // 0x151BAB54: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151BAB58: mul.s       $f20, $f16, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x151BAB5C: jal         0x150ADA20
    // 0x151BAB60: nop

    func_150ADA20(rdram, ctx);
        goto after_22;
    // 0x151BAB60: nop

    after_22:
    // 0x151BAB64: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x151BAB68: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151BAB6C: mfhi        $t0
    ctx->r8 = hi;
    // 0x151BAB70: addiu       $t1, $t0, 0x1E
    ctx->r9 = ADD32(ctx->r8, 0X1E);
    // 0x151BAB74: bne         $s6, $zero, L_151BAB80
    if (ctx->r22 != 0) {
        // 0x151BAB78: nop
    
            goto L_151BAB80;
    }
    // 0x151BAB78: nop

    // 0x151BAB7C: break       7
    do_break(354134908);
L_151BAB80:
    // 0x151BAB80: sh          $t1, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r9;
    // 0x151BAB84: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x151BAB88: jal         0x150ADA68
    // 0x151BAB8C: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_23;
    // 0x151BAB8C: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    after_23:
    // 0x151BAB90: swc1        $f28, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f28.u32l;
    // 0x151BAB94: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x151BAB98: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x151BAB9C: jal         0x15143134
    // 0x151BABA0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_15143134(rdram, ctx);
        goto after_24;
    // 0x151BABA0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_24:
    // 0x151BABA4: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x151BABA8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151BABAC: jal         0x15143134
    // 0x151BABB0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_15143134(rdram, ctx);
        goto after_25;
    // 0x151BABB0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_25:
    // 0x151BABB4: lwc1        $f18, 0x110($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X110);
    // 0x151BABB8: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    // 0x151BABBC: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x151BABC0: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
    // 0x151BABC4: sub.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x151BABC8: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x151BABCC: lwc1        $f18, 0x118($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X118);
    // 0x151BABD0: sub.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x151BABD4: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x151BABD8: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    // 0x151BABDC: sub.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x151BABE0: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x151BABE4: swc1        $f16, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f16.u32l;
    // 0x151BABE8: addiu       $t2, $sp, 0x15C
    ctx->r10 = ADD32(ctx->r29, 0X15C);
    // 0x151BABEC: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x151BABF0: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
    // 0x151BABF4: swc1        $f4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f4.u32l;
    // 0x151BABF8: swc1        $f18, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f18.u32l;
    // 0x151BABFC: swc1        $f10, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f10.u32l;
    // 0x151BAC00: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x151BAC04: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x151BAC08: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x151BAC0C: sw          $t5, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r13;
    // 0x151BAC10: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x151BAC14: jal         0x150ADA68
    // 0x151BAC18: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    func_150ADA68(rdram, ctx);
        goto after_26;
    // 0x151BAC18: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    after_26:
    // 0x151BAC1C: mul.s       $f6, $f0, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151BAC20: add.s       $f4, $f6, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f26.fl;
    // 0x151BAC24: mul.s       $f16, $f4, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x151BAC28: jal         0x150ADA68
    // 0x151BAC2C: swc1        $f16, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_27;
    // 0x151BAC2C: swc1        $f16, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f16.u32l;
    after_27:
    // 0x151BAC30: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151BAC34: lbu         $t8, 0x1EF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1EF);
    // 0x151BAC38: lw          $t7, 0x1F0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F0);
    // 0x151BAC3C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x151BAC40: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151BAC44: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151BAC48: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x151BAC4C: add.s       $f8, $f18, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x151BAC50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151BAC54: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151BAC58: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151BAC5C: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x151BAC60: jal         0x1513264C
    // 0x151BAC64: swc1        $f10, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f10.u32l;
    func_1513264C(rdram, ctx);
        goto after_28;
    // 0x151BAC64: swc1        $f10, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f10.u32l;
    after_28:
L_151BAC68:
    // 0x151BAC68: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151BAC6C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151BAC70: bne         $s0, $at, L_151BAAF4
    if (ctx->r16 != ctx->r1) {
        // 0x151BAC74: nop
    
            goto L_151BAAF4;
    }
    // 0x151BAC74: nop

    // 0x151BAC78: addiu       $t4, $zero, 0x2B
    ctx->r12 = ADD32(0, 0X2B);
    // 0x151BAC7C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151BAC80: sh          $t4, 0x132($sp)
    MEM_H(0X132, ctx->r29) = ctx->r12;
    // 0x151BAC84: addiu       $a0, $a0, -0x59C4
    ctx->r4 = ADD32(ctx->r4, -0X59C4);
    // 0x151BAC88: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x151BAC8C: jal         0x15143134
    // 0x151BAC90: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_15143134(rdram, ctx);
        goto after_29;
    // 0x151BAC90: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_29:
    // 0x151BAC94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BAC98: lwc1        $f0, -0x5824($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5824);
    // 0x151BAC9C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151BACA0: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x151BACA4: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x151BACA8: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
L_151BACAC:
    // 0x151BACAC: jal         0x150ADA20
    // 0x151BACB0: nop

    func_150ADA20(rdram, ctx);
        goto after_30;
    // 0x151BACB0: nop

    after_30:
    // 0x151BACB4: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x151BACB8: beq         $t9, $zero, L_151BAE24
    if (ctx->r25 == 0) {
        // 0x151BACBC: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_151BAE24;
    }
    // 0x151BACBC: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x151BACC0: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x151BACC4: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151BACC8: addiu       $t0, $t0, -0x59B8
    ctx->r8 = ADD32(ctx->r8, -0X59B8);
    // 0x151BACCC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x151BACD0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x151BACD4: addiu       $t6, $t6, -0x59A0
    ctx->r14 = ADD32(ctx->r14, -0X59A0);
    // 0x151BACD8: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x151BACDC: sw          $t1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r9;
    // 0x151BACE0: jal         0x150ADA68
    // 0x151BACE4: addu        $s0, $v0, $t6
    ctx->r16 = ADD32(ctx->r2, ctx->r14);
    func_150ADA68(rdram, ctx);
        goto after_31;
    // 0x151BACE4: addu        $s0, $v0, $t6
    ctx->r16 = ADD32(ctx->r2, ctx->r14);
    after_31:
    // 0x151BACE8: mul.s       $f6, $f0, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x151BACEC: lui         $at, 0x42A6
    ctx->r1 = S32(0X42A6 << 16);
    // 0x151BACF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BACF4: nop

    // 0x151BACF8: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151BACFC: mul.s       $f20, $f16, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x151BAD00: jal         0x150ADA20
    // 0x151BAD04: nop

    func_150ADA20(rdram, ctx);
        goto after_32;
    // 0x151BAD04: nop

    after_32:
    // 0x151BAD08: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x151BAD0C: mfhi        $t3
    ctx->r11 = hi;
    // 0x151BAD10: addiu       $t2, $t3, 0x1E
    ctx->r10 = ADD32(ctx->r11, 0X1E);
    // 0x151BAD14: bne         $s6, $zero, L_151BAD20
    if (ctx->r22 != 0) {
        // 0x151BAD18: nop
    
            goto L_151BAD20;
    }
    // 0x151BAD18: nop

    // 0x151BAD1C: break       7
    do_break(354135324);
L_151BAD20:
    // 0x151BAD20: sh          $t2, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r10;
    // 0x151BAD24: jal         0x150ADA68
    // 0x151BAD28: nop

    func_150ADA68(rdram, ctx);
        goto after_33;
    // 0x151BAD28: nop

    after_33:
    // 0x151BAD2C: swc1        $f28, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f28.u32l;
    // 0x151BAD30: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x151BAD34: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151BAD38: jal         0x15143134
    // 0x151BAD3C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_15143134(rdram, ctx);
        goto after_34;
    // 0x151BAD3C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_34:
    // 0x151BAD40: lwc1        $f18, 0x110($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X110);
    // 0x151BAD44: lwc1        $f8, 0x104($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X104);
    // 0x151BAD48: lwc1        $f6, 0x114($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X114);
    // 0x151BAD4C: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
    // 0x151BAD50: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x151BAD54: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x151BAD58: lwc1        $f18, 0x118($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X118);
    // 0x151BAD5C: sub.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x151BAD60: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x151BAD64: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    // 0x151BAD68: sub.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x151BAD6C: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x151BAD70: swc1        $f16, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f16.u32l;
    // 0x151BAD74: addiu       $t5, $sp, 0x15C
    ctx->r13 = ADD32(ctx->r29, 0X15C);
    // 0x151BAD78: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x151BAD7C: swc1        $f6, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f6.u32l;
    // 0x151BAD80: swc1        $f4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f4.u32l;
    // 0x151BAD84: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151BAD88: swc1        $f18, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f18.u32l;
    // 0x151BAD8C: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151BAD90: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
    // 0x151BAD94: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x151BAD98: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x151BAD9C: lw          $t4, 0x4($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X4);
    // 0x151BADA0: sw          $t4, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r12;
    // 0x151BADA4: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x151BADA8: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x151BADAC: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x151BADB0: lwc1        $f18, 0xF0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x151BADB4: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151BADB8: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151BADBC: lwc1        $f10, 0xF4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x151BADC0: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x151BADC4: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    // 0x151BADC8: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151BADCC: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x151BADD0: jal         0x150ADA68
    // 0x151BADD4: swc1        $f16, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_35;
    // 0x151BADD4: swc1        $f16, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f16.u32l;
    after_35:
    // 0x151BADD8: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151BADDC: add.s       $f6, $f18, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x151BADE0: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x151BADE4: jal         0x150ADA68
    // 0x151BADE8: swc1        $f8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_36;
    // 0x151BADE8: swc1        $f8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f8.u32l;
    after_36:
    // 0x151BADEC: mul.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151BADF0: lbu         $t9, 0x1EF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1EF);
    // 0x151BADF4: lw          $t0, 0x1F0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1F0);
    // 0x151BADF8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x151BADFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151BAE00: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151BAE04: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x151BAE08: add.s       $f4, $f10, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f26.fl;
    // 0x151BAE0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151BAE10: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151BAE14: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151BAE18: mul.s       $f16, $f4, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x151BAE1C: jal         0x1513264C
    // 0x151BAE20: swc1        $f16, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f16.u32l;
    func_1513264C(rdram, ctx);
        goto after_37;
    // 0x151BAE20: swc1        $f16, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f16.u32l;
    after_37:
L_151BAE24:
    // 0x151BAE24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151BAE28: bne         $s1, $s2, L_151BACAC
    if (ctx->r17 != ctx->r18) {
        // 0x151BAE2C: nop
    
            goto L_151BACAC;
    }
    // 0x151BAE2C: nop

    // 0x151BAE30: addiu       $t1, $zero, 0x2C
    ctx->r9 = ADD32(0, 0X2C);
    // 0x151BAE34: sh          $t1, 0x132($sp)
    MEM_H(0X132, ctx->r29) = ctx->r9;
    // 0x151BAE38: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_151BAE3C:
    // 0x151BAE3C: jal         0x150ADA20
    // 0x151BAE40: nop

    func_150ADA20(rdram, ctx);
        goto after_38;
    // 0x151BAE40: nop

    after_38:
    // 0x151BAE44: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x151BAE48: beq         $t6, $zero, L_151BAFEC
    if (ctx->r14 == 0) {
        // 0x151BAE4C: sll         $t3, $s1, 2
        ctx->r11 = S32(ctx->r17 << 2);
            goto L_151BAFEC;
    }
    // 0x151BAE4C: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x151BAE50: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x151BAE54: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x151BAE58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x151BAE5C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151BAE60: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x151BAE64: addiu       $t5, $t5, -0x5958
    ctx->r13 = ADD32(ctx->r13, -0X5958);
    // 0x151BAE68: addiu       $t7, $t7, -0x5988
    ctx->r15 = ADD32(ctx->r15, -0X5988);
    // 0x151BAE6C: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x151BAE70: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x151BAE74: addiu       $t9, $t9, -0x5928
    ctx->r25 = ADD32(ctx->r25, -0X5928);
    // 0x151BAE78: addiu       $t2, $t2, -0x58F8
    ctx->r10 = ADD32(ctx->r10, -0X58F8);
    // 0x151BAE7C: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x151BAE80: addu        $t4, $v0, $t5
    ctx->r12 = ADD32(ctx->r2, ctx->r13);
    // 0x151BAE84: sw          $t4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r12;
    // 0x151BAE88: sw          $t8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r24;
    // 0x151BAE8C: addu        $s2, $t3, $t2
    ctx->r18 = ADD32(ctx->r11, ctx->r10);
    // 0x151BAE90: jal         0x150ADA68
    // 0x151BAE94: addu        $s0, $v0, $t9
    ctx->r16 = ADD32(ctx->r2, ctx->r25);
    func_150ADA68(rdram, ctx);
        goto after_39;
    // 0x151BAE94: addu        $s0, $v0, $t9
    ctx->r16 = ADD32(ctx->r2, ctx->r25);
    after_39:
    // 0x151BAE98: mul.s       $f18, $f0, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x151BAE9C: lui         $at, 0x42A6
    ctx->r1 = S32(0X42A6 << 16);
    // 0x151BAEA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151BAEA4: nop

    // 0x151BAEA8: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x151BAEAC: mul.s       $f20, $f8, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x151BAEB0: jal         0x150ADA20
    // 0x151BAEB4: nop

    func_150ADA20(rdram, ctx);
        goto after_40;
    // 0x151BAEB4: nop

    after_40:
    // 0x151BAEB8: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x151BAEBC: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x151BAEC0: mfhi        $t0
    ctx->r8 = hi;
    // 0x151BAEC4: addiu       $t1, $t0, 0x1E
    ctx->r9 = ADD32(ctx->r8, 0X1E);
    // 0x151BAEC8: bne         $s6, $zero, L_151BAED4
    if (ctx->r22 != 0) {
        // 0x151BAECC: nop
    
            goto L_151BAED4;
    }
    // 0x151BAECC: nop

    // 0x151BAED0: break       7
    do_break(354135760);
L_151BAED4:
    // 0x151BAED4: sh          $t1, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r9;
    // 0x151BAED8: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x151BAEDC: jal         0x150ADA68
    // 0x151BAEE0: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_41;
    // 0x151BAEE0: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    after_41:
    // 0x151BAEE4: swc1        $f28, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f28.u32l;
    // 0x151BAEE8: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x151BAEEC: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x151BAEF0: jal         0x15143134
    // 0x151BAEF4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_15143134(rdram, ctx);
        goto after_42;
    // 0x151BAEF4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_42:
    // 0x151BAEF8: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x151BAEFC: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151BAF00: jal         0x15143134
    // 0x151BAF04: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_15143134(rdram, ctx);
        goto after_43;
    // 0x151BAF04: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_43:
    // 0x151BAF08: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    // 0x151BAF0C: lwc1        $f4, 0x104($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X104);
    // 0x151BAF10: lwc1        $f18, 0x114($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X114);
    // 0x151BAF14: lwc1        $f6, 0x108($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X108);
    // 0x151BAF18: sub.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151BAF1C: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x151BAF20: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x151BAF24: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x151BAF28: mul.s       $f6, $f16, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x151BAF2C: swc1        $f16, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f16.u32l;
    // 0x151BAF30: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151BAF34: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x151BAF38: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    // 0x151BAF3C: addiu       $t6, $sp, 0x15C
    ctx->r14 = ADD32(ctx->r29, 0X15C);
    // 0x151BAF40: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x151BAF44: swc1        $f18, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f18.u32l;
    // 0x151BAF48: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    // 0x151BAF4C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151BAF50: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    // 0x151BAF54: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151BAF58: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    // 0x151BAF5C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x151BAF60: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x151BAF64: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x151BAF68: sw          $t7, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r15;
    // 0x151BAF6C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x151BAF70: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x151BAF74: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x151BAF78: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x151BAF7C: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x151BAF80: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151BAF84: lwc1        $f16, 0xF4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x151BAF88: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x151BAF8C: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x151BAF90: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x151BAF94: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x151BAF98: jal         0x150ADA68
    // 0x151BAF9C: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_44;
    // 0x151BAF9C: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    after_44:
    // 0x151BAFA0: mul.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151BAFA4: add.s       $f18, $f10, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f26.fl;
    // 0x151BAFA8: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x151BAFAC: jal         0x150ADA68
    // 0x151BAFB0: swc1        $f4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_45;
    // 0x151BAFB0: swc1        $f4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f4.u32l;
    after_45:
    // 0x151BAFB4: mul.s       $f16, $f0, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151BAFB8: lbu         $t8, 0x1EF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1EF);
    // 0x151BAFBC: lw          $t5, 0x1F0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1F0);
    // 0x151BAFC0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x151BAFC4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151BAFC8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151BAFCC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x151BAFD0: add.s       $f6, $f16, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f26.fl;
    // 0x151BAFD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151BAFD8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151BAFDC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x151BAFE0: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x151BAFE4: jal         0x1513264C
    // 0x151BAFE8: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
    func_1513264C(rdram, ctx);
        goto after_46;
    // 0x151BAFE8: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
    after_46:
L_151BAFEC:
    // 0x151BAFEC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151BAFF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151BAFF4: bne         $s1, $at, L_151BAE3C
    if (ctx->r17 != ctx->r1) {
        // 0x151BAFF8: nop
    
            goto L_151BAE3C;
    }
    // 0x151BAFF8: nop

L_151BAFFC:
    // 0x151BAFFC: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_151BB000:
    // 0x151BB000: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x151BB004: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x151BB008: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x151BB00C: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x151BB010: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x151BB014: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x151BB018: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x151BB01C: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x151BB020: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x151BB024: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x151BB028: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x151BB02C: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x151BB030: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x151BB034: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x151BB038: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x151BB03C: jr          $ra
    // 0x151BB040: addiu       $sp, $sp, 0x1E8
    ctx->r29 = ADD32(ctx->r29, 0X1E8);
    return;
    return;
    // 0x151BB040: addiu       $sp, $sp, 0x1E8
    ctx->r29 = ADD32(ctx->r29, 0X1E8);
;}
RECOMP_FUNC void func_10018CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10018CB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10018CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10018CB8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10018CBC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x10018CC0: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x10018CC4: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x10018CC8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x10018CCC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x10018CD0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x10018CD4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x10018CD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10018CDC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x10018CE0: jal         0x1001C224
    // 0x10018CE4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x10018CE4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x10018CE8: b           L_10018CF0
    // 0x10018CEC: nop

        goto L_10018CF0;
    // 0x10018CEC: nop

L_10018CF0:
    // 0x10018CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10018CF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10018CF8: jr          $ra
    // 0x10018CFC: nop

    return;
    return;
    // 0x10018CFC: nop

;}
RECOMP_FUNC void func_15010680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15010680: lui         $t6, 0x150F
    ctx->r14 = S32(0X150F << 16);
    // 0x15010684: addiu       $t6, $t6, -0x56FC
    ctx->r14 = ADD32(ctx->r14, -0X56FC);
    // 0x15010688: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1501068C: sw          $t6, 0x940($at)
    MEM_W(0X940, ctx->r1) = ctx->r14;
    // 0x15010690: jr          $ra
    // 0x15010694: nop

    return;
    return;
    // 0x15010694: nop

;}
RECOMP_FUNC void func_151BE788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BE788: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151BE78C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151BE790: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151BE794: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151BE798: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151BE79C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151BE7A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x151BE7A4: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x151BE7A8: addiu       $a2, $t6, 0x180
    ctx->r6 = ADD32(ctx->r14, 0X180);
    // 0x151BE7AC: addiu       $a3, $t6, 0x184
    ctx->r7 = ADD32(ctx->r14, 0X184);
    // 0x151BE7B0: jal         0x15169850
    // 0x151BE7B4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x151BE7B4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x151BE7B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151BE7BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151BE7C0: jr          $ra
    // 0x151BE7C4: nop

    return;
    return;
    // 0x151BE7C4: nop

;}
RECOMP_FUNC void func_1506BF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BF1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506BF20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506BF24: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506BF28: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506BF2C: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1506BF30: lwc1        $f6, 0x118($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X118);
    // 0x1506BF34: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x1506BF38: nop

    // 0x1506BF3C: bc1fl       L_1506BF50
    if (!c1cs) {
        // 0x1506BF40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1506BF50;
    }
    goto skip_0;
    // 0x1506BF40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1506BF44: jal         0x1506BF5C
    // 0x1506BF48: nop

    func_1506BF5C(rdram, ctx);
        goto after_0;
    // 0x1506BF48: nop

    after_0:
    // 0x1506BF4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1506BF50:
    // 0x1506BF50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506BF54: jr          $ra
    // 0x1506BF58: nop

    return;
    return;
    // 0x1506BF58: nop

;}
RECOMP_FUNC void func_150CF5E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CF5E8: lui         $a2, 0xF200
    ctx->r6 = S32(0XF200 << 16);
    // 0x150CF5EC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150CF5F0: lw          $t6, -0x7770($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7770);
    // 0x150CF5F4: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x150CF5F8: lw          $t1, -0x776C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X776C);
    // 0x150CF5FC: sra         $t7, $t6, 7
    ctx->r15 = S32(SIGNED(ctx->r14) >> 7);
    // 0x150CF600: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x150CF604: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x150CF608: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x150CF60C: sra         $t2, $t1, 7
    ctx->r10 = S32(SIGNED(ctx->r9) >> 7);
    // 0x150CF610: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x150CF614: or          $t0, $t9, $a2
    ctx->r8 = ctx->r25 | ctx->r6;
    // 0x150CF618: lui         $t5, 0x47
    ctx->r13 = S32(0X47 << 16);
    // 0x150CF61C: ori         $t5, $t5, 0xE47E
    ctx->r13 = ctx->r13 | 0XE47E;
    // 0x150CF620: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x150CF624: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x150CF628: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x150CF62C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150CF630: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150CF634: lw          $t6, -0x7768($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7768);
    // 0x150CF638: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x150CF63C: lw          $t2, -0x7764($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X7764);
    // 0x150CF640: sra         $t7, $t6, 7
    ctx->r15 = S32(SIGNED(ctx->r14) >> 7);
    // 0x150CF644: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x150CF648: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x150CF64C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150CF650: sra         $t0, $t2, 7
    ctx->r8 = S32(SIGNED(ctx->r10) >> 7);
    // 0x150CF654: andi        $t3, $t0, 0xFFF
    ctx->r11 = ctx->r8 & 0XFFF;
    // 0x150CF658: or          $t1, $t9, $a2
    ctx->r9 = ctx->r25 | ctx->r6;
    // 0x150CF65C: lui         $t5, 0x147
    ctx->r13 = S32(0X147 << 16);
    // 0x150CF660: ori         $t5, $t5, 0xE47E
    ctx->r13 = ctx->r13 | 0XE47E;
    // 0x150CF664: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x150CF668: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x150CF66C: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x150CF670: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150CF674: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150CF678: jr          $ra
    // 0x150CF67C: nop

    return;
    return;
    // 0x150CF67C: nop

;}
RECOMP_FUNC void func_15145AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15145AD8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x15145ADC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15145AE0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15145AE4: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x15145AE8: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x15145AEC: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x15145AF0: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x15145AF4: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x15145AF8: addiu       $t7, $sp, 0x78
    ctx->r15 = ADD32(ctx->r29, 0X78);
    // 0x15145AFC: beql        $t6, $zero, L_15145B0C
    if (ctx->r14 == 0) {
        // 0x15145B00: lw          $a3, 0xA0($sp)
        ctx->r7 = MEM_W(ctx->r29, 0XA0);
            goto L_15145B0C;
    }
    goto skip_0;
    // 0x15145B00: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    skip_0:
    // 0x15145B04: sw          $t7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r15;
    // 0x15145B08: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
L_15145B0C:
    // 0x15145B0C: lw          $s0, 0xA4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA4);
    // 0x15145B10: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x15145B14: beq         $a3, $zero, L_15145B20
    if (ctx->r7 == 0) {
        // 0x15145B18: lw          $a2, 0x9C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X9C);
            goto L_15145B20;
    }
    // 0x15145B18: lw          $a2, 0x9C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X9C);
    // 0x15145B1C: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
L_15145B20:
    // 0x15145B20: beql        $s0, $zero, L_15145B30
    if (ctx->r16 == 0) {
        // 0x15145B24: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_15145B30;
    }
    goto skip_1;
    // 0x15145B24: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    skip_1:
    // 0x15145B28: addiu       $s0, $sp, 0x7C
    ctx->r16 = ADD32(ctx->r29, 0X7C);
    // 0x15145B2C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
L_15145B30:
    // 0x15145B30: jal         0x1515C1A0
    // 0x15145B34: sw          $a3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r7;
    func_1515C1A0(rdram, ctx);
        goto after_0;
    // 0x15145B34: sw          $a3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r7;
    after_0:
    // 0x15145B38: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x15145B3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15145B40: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x15145B44: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x15145B48: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x15145B4C: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x15145B50: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x15145B54: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x15145B58: bc1fl       L_15145B6C
    if (!c1cs) {
        // 0x15145B5C: lwc1        $f6, 0x0($t8)
        ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
            goto L_15145B6C;
    }
    goto skip_2;
    // 0x15145B5C: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    skip_2:
    // 0x15145B60: b           L_15145C7C
    // 0x15145B64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15145C7C;
    // 0x15145B64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15145B68: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
L_15145B6C:
    // 0x15145B6C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x15145B70: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15145B74: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x15145B78: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x15145B7C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x15145B80: bc1f        L_15145B90
    if (!c1cs) {
        // 0x15145B84: nop
    
            goto L_15145B90;
    }
    // 0x15145B84: nop

    // 0x15145B88: b           L_15145C7C
    // 0x15145B8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15145C7C;
    // 0x15145B8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15145B90:
    // 0x15145B90: lwc1        $f8, 0xE0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XE0);
    // 0x15145B94: lwc1        $f0, 0xDC($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0XDC);
    // 0x15145B98: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x15145B9C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15145BA0: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x15145BA4: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15145BA8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15145BAC: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x15145BB0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15145BB4: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x15145BB8: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15145BBC: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x15145BC0: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15145BC4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15145BC8: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x15145BCC: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15145BD0: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x15145BD4: jal         0x15145128
    // 0x15145BD8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_15145128(rdram, ctx);
        goto after_1;
    // 0x15145BD8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x15145BDC: bne         $v0, $zero, L_15145BEC
    if (ctx->r2 != 0) {
        // 0x15145BE0: lwc1        $f0, 0x40($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
            goto L_15145BEC;
    }
    // 0x15145BE0: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15145BE4: b           L_15145C7C
    // 0x15145BE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15145C7C;
    // 0x15145BE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15145BEC:
    // 0x15145BEC: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15145BF0: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x15145BF4: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15145BF8: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x15145BFC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15145C00: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x15145C04: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x15145C08: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15145C0C: addiu       $t3, $sp, 0x48
    ctx->r11 = ADD32(ctx->r29, 0X48);
    // 0x15145C10: addiu       $t4, $sp, 0x44
    ctx->r12 = ADD32(ctx->r29, 0X44);
    // 0x15145C14: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x15145C18: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x15145C1C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x15145C20: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x15145C24: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15145C28: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x15145C2C: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x15145C30: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x15145C34: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x15145C38: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x15145C3C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15145C40: jal         0x151451F0
    // 0x15145C44: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_151451F0(rdram, ctx);
        goto after_2;
    // 0x15145C44: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_2:
    // 0x15145C48: bne         $v0, $zero, L_15145C58
    if (ctx->r2 != 0) {
        // 0x15145C4C: lw          $v1, 0x98($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X98);
            goto L_15145C58;
    }
    // 0x15145C4C: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x15145C50: b           L_15145C7C
    // 0x15145C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15145C7C;
    // 0x15145C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15145C58:
    // 0x15145C58: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x15145C5C: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15145C60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15145C64: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x15145C68: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15145C6C: swc1        $f18, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f18.u32l;
    // 0x15145C70: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15145C74: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15145C78: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
L_15145C7C:
    // 0x15145C7C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15145C80: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15145C84: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x15145C88: jr          $ra
    // 0x15145C8C: nop

    return;
    return;
    // 0x15145C8C: nop

;}
RECOMP_FUNC void func_1000B294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000B294: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000B298: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x1000B29C: addiu       $a2, $a2, 0x17BC
    ctx->r6 = ADD32(ctx->r6, 0X17BC);
    // 0x1000B2A0: addiu       $v1, $v1, 0x17B0
    ctx->r3 = ADD32(ctx->r3, 0X17B0);
    // 0x1000B2A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_1000B2A8:
    // 0x1000B2A8: beql        $v0, $zero, L_1000B2E4
    if (ctx->r2 == 0) {
        // 0x1000B2AC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_1000B2E4;
    }
    goto skip_0;
    // 0x1000B2AC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x1000B2B0: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x1000B2B4: bnel        $a0, $t6, L_1000B2C8
    if (ctx->r4 != ctx->r14) {
        // 0x1000B2B8: lw          $a1, 0x60($v0)
        ctx->r5 = MEM_W(ctx->r2, 0X60);
            goto L_1000B2C8;
    }
    goto skip_1;
    // 0x1000B2B8: lw          $a1, 0x60($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X60);
    skip_1:
    // 0x1000B2BC: sw          $v0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r2;
    // 0x1000B2C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1000B2C4: lw          $a1, 0x60($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X60);
L_1000B2C8:
    // 0x1000B2C8: beql        $a1, $zero, L_1000B2E4
    if (ctx->r5 == 0) {
        // 0x1000B2CC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_1000B2E4;
    }
    goto skip_2;
    // 0x1000B2CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_2:
    // 0x1000B2D0: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x1000B2D4: bnel        $a0, $t7, L_1000B2E4
    if (ctx->r4 != ctx->r15) {
        // 0x1000B2D8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_1000B2E4;
    }
    goto skip_3;
    // 0x1000B2D8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_3:
    // 0x1000B2DC: sw          $a1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r5;
    // 0x1000B2E0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_1000B2E4:
    // 0x1000B2E4: bnel        $v1, $a2, L_1000B2A8
    if (ctx->r3 != ctx->r6) {
        // 0x1000B2E8: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_1000B2A8;
    }
    goto skip_4;
    // 0x1000B2E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_4:
    // 0x1000B2EC: jr          $ra
    // 0x1000B2F0: nop

    return;
    return;
    // 0x1000B2F0: nop

;}
RECOMP_FUNC void func_16000424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16000424: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x16000428: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1600042C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x16000430: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x16000434: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x16000438: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1600043C: jal         0x16001338
    // 0x16000440: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_16001338(rdram, ctx);
        goto after_0;
    // 0x16000440: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x16000444: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x16000448: addiu       $a1, $a1, 0x4728
    ctx->r5 = ADD32(ctx->r5, 0X4728);
    // 0x1600044C: jal         0x160012B0
    // 0x16000450: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_160012B0(rdram, ctx);
        goto after_1;
    // 0x16000450: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_1:
    // 0x16000454: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    // 0x16000458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1600045C: jal         0x16001044
    // 0x16000460: lw          $a2, 0x11C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X11C);
    func_16001044(rdram, ctx);
        goto after_2;
    // 0x16000460: lw          $a2, 0x11C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X11C);
    after_2:
    // 0x16000464: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x16000468: addiu       $a1, $a1, 0x472C
    ctx->r5 = ADD32(ctx->r5, 0X472C);
    // 0x1600046C: jal         0x160012B0
    // 0x16000470: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    func_160012B0(rdram, ctx);
        goto after_3;
    // 0x16000470: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_3:
    // 0x16000474: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    // 0x16000478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1600047C: jal         0x16001044
    // 0x16000480: lw          $a2, 0x120($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X120);
    func_16001044(rdram, ctx);
        goto after_4;
    // 0x16000480: lw          $a2, 0x120($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X120);
    after_4:
    // 0x16000484: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x16000488: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x1600048C: jal         0x16001338
    // 0x16000490: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_16001338(rdram, ctx);
        goto after_5;
    // 0x16000490: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_5:
    // 0x16000494: lw          $v0, 0x120($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X120);
    // 0x16000498: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x1600049C: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    // 0x160004A0: srl         $v1, $v0, 2
    ctx->r3 = S32(U32(ctx->r2) >> 2);
    // 0x160004A4: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x160004A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x160004AC: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x160004B0: lw          $a1, 0x3848($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3848);
    // 0x160004B4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x160004B8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x160004BC: jal         0x160012B0
    // 0x160004C0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_160012B0(rdram, ctx);
        goto after_6;
    // 0x160004C0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_6:
    // 0x160004C4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x160004C8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x160004CC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x160004D0: bne         $v1, $at, L_160004EC
    if (ctx->r3 != ctx->r1) {
        // 0x160004D4: addiu       $a0, $zero, 0x6F
        ctx->r4 = ADD32(0, 0X6F);
            goto L_160004EC;
    }
    // 0x160004D4: addiu       $a0, $zero, 0x6F
    ctx->r4 = ADD32(0, 0X6F);
    // 0x160004D8: srl         $a2, $v0, 28
    ctx->r6 = S32(U32(ctx->r2) >> 28);
    // 0x160004DC: andi        $t8, $a2, 0x3
    ctx->r24 = ctx->r6 & 0X3;
    // 0x160004E0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x160004E4: jal         0x16001044
    // 0x160004E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_16001044(rdram, ctx);
        goto after_7;
    // 0x160004E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_160004EC:
    // 0x160004EC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x160004F0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x160004F4: jal         0x16001338
    // 0x160004F8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_16001338(rdram, ctx);
        goto after_8;
    // 0x160004F8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_8:
    // 0x160004FC: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x16000500: addiu       $a1, $a1, 0x4734
    ctx->r5 = ADD32(ctx->r5, 0X4734);
    // 0x16000504: jal         0x160012B0
    // 0x16000508: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    func_160012B0(rdram, ctx);
        goto after_9;
    // 0x16000508: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    after_9:
    // 0x1600050C: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    // 0x16000510: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x16000514: jal         0x16001044
    // 0x16000518: lw          $a2, 0x118($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X118);
    func_16001044(rdram, ctx);
        goto after_10;
    // 0x16000518: lw          $a2, 0x118($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X118);
    after_10:
    // 0x1600051C: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x16000520: addiu       $a1, $a1, 0x4738
    ctx->r5 = ADD32(ctx->r5, 0X4738);
    // 0x16000524: jal         0x160012B0
    // 0x16000528: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    func_160012B0(rdram, ctx);
        goto after_11;
    // 0x16000528: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    after_11:
    // 0x1600052C: addiu       $a0, $zero, 0xAB
    ctx->r4 = ADD32(0, 0XAB);
    // 0x16000530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x16000534: jal         0x16001044
    // 0x16000538: lw          $a2, 0x124($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X124);
    func_16001044(rdram, ctx);
        goto after_12;
    // 0x16000538: lw          $a2, 0x124($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X124);
    after_12:
    // 0x1600053C: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x16000540: addiu       $a1, $a1, 0x4740
    ctx->r5 = ADD32(ctx->r5, 0X4740);
    // 0x16000544: jal         0x160012B0
    // 0x16000548: addiu       $a0, $zero, 0xC3
    ctx->r4 = ADD32(0, 0XC3);
    func_160012B0(rdram, ctx);
        goto after_13;
    // 0x16000548: addiu       $a0, $zero, 0xC3
    ctx->r4 = ADD32(0, 0XC3);
    after_13:
    // 0x1600054C: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
    // 0x16000550: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x16000554: jal         0x16001044
    // 0x16000558: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    func_16001044(rdram, ctx);
        goto after_14;
    // 0x16000558: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    after_14:
    // 0x1600055C: lui         $t9, 0x1600
    ctx->r25 = S32(0X1600 << 16);
    // 0x16000560: lbu         $t9, 0x38A4($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X38A4);
    // 0x16000564: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    // 0x16000568: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x1600056C: beql        $t9, $zero, L_16000580
    if (ctx->r25 == 0) {
        // 0x16000570: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_16000580;
    }
    goto skip_0;
    // 0x16000570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x16000574: jal         0x160012B0
    // 0x16000578: addiu       $a1, $a1, 0x4748
    ctx->r5 = ADD32(ctx->r5, 0X4748);
    func_160012B0(rdram, ctx);
        goto after_15;
    // 0x16000578: addiu       $a1, $a1, 0x4748
    ctx->r5 = ADD32(ctx->r5, 0X4748);
    after_15:
    // 0x1600057C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_16000580:
    // 0x16000580: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x16000584: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x16000588: jr          $ra
    // 0x1600058C: nop

    return;
    return;
    // 0x1600058C: nop

;}
RECOMP_FUNC void func_1513B9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513B9DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513B9E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513B9E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1513B9E8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x1513B9EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1513B9F0: jal         0x100043B4
    // 0x1513B9F4: lw          $a0, 0x4C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4C);
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x1513B9F4: lw          $a0, 0x4C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4C);
    after_0:
    // 0x1513B9F8: jal         0x15169824
    // 0x1513B9FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_1;
    // 0x1513B9FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1513BA00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513BA04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513BA08: jr          $ra
    // 0x1513BA0C: nop

    return;
    return;
    // 0x1513BA0C: nop

;}
RECOMP_FUNC void func_10026700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10026700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10026704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10026708: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1002670C: jal         0x10027630
    // 0x10026710: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __osSiDeviceBusy_recomp(rdram, ctx);
        goto after_0;
    // 0x10026710: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x10026714: beq         $v0, $zero, L_10026724
    if (ctx->r2 == 0) {
        // 0x10026718: nop
    
            goto L_10026724;
    }
    // 0x10026718: nop

    // 0x1002671C: b           L_10026740
    // 0x10026720: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_10026740;
    // 0x10026720: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_10026724:
    // 0x10026724: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x10026728: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x1002672C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x10026730: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x10026734: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x10026738: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1002673C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_10026740:
    // 0x10026740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10026744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10026748: jr          $ra
    // 0x1002674C: nop

    return;
    return;
    // 0x1002674C: nop

;}
RECOMP_FUNC void func_15023440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15023440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15023444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15023448: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1502344C: beql        $a1, $zero, L_15023470
    if (ctx->r5 == 0) {
        // 0x15023450: lbu         $t6, 0xC($a2)
        ctx->r14 = MEM_BU(ctx->r6, 0XC);
            goto L_15023470;
    }
    goto skip_0;
    // 0x15023450: lbu         $t6, 0xC($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XC);
    skip_0:
    // 0x15023454: lw          $a0, 0x34($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X34);
    // 0x15023458: jal         0x1516D2E0
    // 0x1502345C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_1516D2E0(rdram, ctx);
        goto after_0;
    // 0x1502345C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x15023460: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x15023464: b           L_15023490
    // 0x15023468: sw          $zero, 0x34($a2)
    MEM_W(0X34, ctx->r6) = 0;
        goto L_15023490;
    // 0x15023468: sw          $zero, 0x34($a2)
    MEM_W(0X34, ctx->r6) = 0;
    // 0x1502346C: lbu         $t6, 0xC($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XC);
L_15023470:
    // 0x15023470: beql        $t6, $zero, L_15023490
    if (ctx->r14 == 0) {
        // 0x15023474: sw          $zero, 0x34($a2)
        MEM_W(0X34, ctx->r6) = 0;
            goto L_15023490;
    }
    goto skip_1;
    // 0x15023474: sw          $zero, 0x34($a2)
    MEM_W(0X34, ctx->r6) = 0;
    skip_1:
    // 0x15023478: lw          $a0, 0x34($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X34);
    // 0x1502347C: jal         0x1516D328
    // 0x15023480: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_1516D328(rdram, ctx);
        goto after_1;
    // 0x15023480: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x15023484: b           L_15023490
    // 0x15023488: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
        goto L_15023490;
    // 0x15023488: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x1502348C: sw          $zero, 0x34($a2)
    MEM_W(0X34, ctx->r6) = 0;
L_15023490:
    // 0x15023490: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x15023494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15023498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1502349C: jr          $ra
    // 0x150234A0: nop

    return;
    return;
    // 0x150234A0: nop

;}
RECOMP_FUNC void func_150779D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150779D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150779D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150779DC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150779E0: lbu         $t6, 0x1892($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1892);
    // 0x150779E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150779E8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150779EC: beq         $t6, $zero, L_150779FC
    if (ctx->r14 == 0) {
        // 0x150779F0: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_150779FC;
    }
    // 0x150779F0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150779F4: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x150779F8: lbu         $v0, 0x222($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X222);
L_150779FC:
    // 0x150779FC: lbu         $t8, 0x3E78($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3E78);
    // 0x15077A00: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x15077A04: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x15077A08: beq         $v0, $t8, L_15077A90
    if (ctx->r2 == ctx->r24) {
        // 0x15077A0C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_15077A90;
    }
    // 0x15077A0C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15077A10: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x15077A14: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15077A18: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x15077A1C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15077A20: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x15077A24: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15077A28: addiu       $t0, $t0, -0x3D30
    ctx->r8 = ADD32(ctx->r8, -0X3D30);
    // 0x15077A2C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15077A30: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x15077A34: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x15077A38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15077A3C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15077A40: bne         $t1, $at, L_15077A54
    if (ctx->r9 != ctx->r1) {
        // 0x15077A44: nop
    
            goto L_15077A54;
    }
    // 0x15077A44: nop

    // 0x15077A48: lbu         $t2, 0x65($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X65);
    // 0x15077A4C: bnel        $t2, $zero, L_15077A94
    if (ctx->r10 != 0) {
        // 0x15077A50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15077A94;
    }
    goto skip_0;
    // 0x15077A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_15077A54:
    // 0x15077A54: jal         0x1505A6F8
    // 0x15077A58: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_1505A6F8(rdram, ctx);
        goto after_0;
    // 0x15077A58: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x15077A5C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15077A60: lbu         $t3, 0x1893($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X1893);
    // 0x15077A64: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15077A68: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x15077A6C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x15077A70: nop

    // 0x15077A74: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15077A78: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15077A7C: nop

    // 0x15077A80: bc1fl       L_15077A94
    if (!c1cs) {
        // 0x15077A84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15077A94;
    }
    goto skip_1;
    // 0x15077A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15077A88: jal         0x15075400
    // 0x15077A8C: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_1;
    // 0x15077A8C: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_1:
L_15077A90:
    // 0x15077A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15077A94:
    // 0x15077A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15077A98: jr          $ra
    // 0x15077A9C: nop

    return;
    return;
    // 0x15077A9C: nop

;}
RECOMP_FUNC void func_15124B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15124B18: lh          $t6, 0x1B4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X1B4);
    // 0x15124B1C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x15124B20: bnel        $t6, $zero, L_15124B30
    if (ctx->r14 != 0) {
        // 0x15124B24: lw          $v0, 0x2C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X2C);
            goto L_15124B30;
    }
    goto skip_0;
    // 0x15124B24: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    skip_0:
    // 0x15124B28: sh          $t7, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r15;
    // 0x15124B2C: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
L_15124B30:
    // 0x15124B30: andi        $t8, $v0, 0x80
    ctx->r24 = ctx->r2 & 0X80;
    // 0x15124B34: beq         $t8, $zero, L_15124B70
    if (ctx->r24 == 0) {
        // 0x15124B38: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_15124B70;
    }
    // 0x15124B38: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x15124B3C: lw          $t9, 0x36C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X36C);
    // 0x15124B40: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15124B44: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x15124B48: andi        $t1, $t0, 0x10
    ctx->r9 = ctx->r8 & 0X10;
    // 0x15124B4C: beq         $t1, $zero, L_15124B70
    if (ctx->r9 == 0) {
        // 0x15124B50: nop
    
            goto L_15124B70;
    }
    // 0x15124B50: nop

    // 0x15124B54: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15124B58: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x15124B5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15124B60: swc1        $f0, 0x348($a0)
    MEM_W(0X348, ctx->r4) = ctx->f0.u32l;
    // 0x15124B64: swc1        $f0, 0x34C($a0)
    MEM_W(0X34C, ctx->r4) = ctx->f0.u32l;
    // 0x15124B68: jr          $ra
    // 0x15124B6C: swc1        $f4, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f4.u32l;
    return;
    return;
    // 0x15124B6C: swc1        $f4, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f4.u32l;
L_15124B70:
    // 0x15124B70: beq         $v0, $zero, L_15124B8C
    if (ctx->r2 == 0) {
        // 0x15124B74: nop
    
            goto L_15124B8C;
    }
    // 0x15124B74: nop

    // 0x15124B78: lwc1        $f6, 0x2FC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2FC);
    // 0x15124B7C: lwc1        $f8, 0x354($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X354);
    // 0x15124B80: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15124B84: jr          $ra
    // 0x15124B88: swc1        $f10, 0x348($a0)
    MEM_W(0X348, ctx->r4) = ctx->f10.u32l;
    return;
    return;
    // 0x15124B88: swc1        $f10, 0x348($a0)
    MEM_W(0X348, ctx->r4) = ctx->f10.u32l;
L_15124B8C:
    // 0x15124B8C: beql        $v0, $zero, L_15124BD8
    if (ctx->r2 == 0) {
        // 0x15124B90: lw          $t5, 0x3D0($a0)
        ctx->r13 = MEM_W(ctx->r4, 0X3D0);
            goto L_15124BD8;
    }
    goto skip_1;
    // 0x15124B90: lw          $t5, 0x3D0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X3D0);
    skip_1:
    // 0x15124B94: lw          $t2, 0x3D0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X3D0);
    // 0x15124B98: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15124B9C: lbu         $t3, 0x102($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X102);
    // 0x15124BA0: bnel        $t3, $zero, L_15124BD8
    if (ctx->r11 != 0) {
        // 0x15124BA4: lw          $t5, 0x3D0($a0)
        ctx->r13 = MEM_W(ctx->r4, 0X3D0);
            goto L_15124BD8;
    }
    goto skip_2;
    // 0x15124BA4: lw          $t5, 0x3D0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X3D0);
    skip_2:
    // 0x15124BA8: lw          $t4, -0x1610($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1610);
    // 0x15124BAC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x15124BB0: beq         $t4, $at, L_15124BD4
    if (ctx->r12 == ctx->r1) {
        // 0x15124BB4: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_15124BD4;
    }
    // 0x15124BB4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15124BB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15124BBC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x15124BC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15124BC4: swc1        $f0, 0x348($a0)
    MEM_W(0X348, ctx->r4) = ctx->f0.u32l;
    // 0x15124BC8: swc1        $f0, 0x34C($a0)
    MEM_W(0X34C, ctx->r4) = ctx->f0.u32l;
    // 0x15124BCC: jr          $ra
    // 0x15124BD0: swc1        $f16, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f16.u32l;
    return;
    return;
    // 0x15124BD0: swc1        $f16, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f16.u32l;
L_15124BD4:
    // 0x15124BD4: lw          $t5, 0x3D0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X3D0);
L_15124BD8:
    // 0x15124BD8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15124BDC: lbu         $t6, 0x102($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X102);
    // 0x15124BE0: beql        $t6, $zero, L_15124C08
    if (ctx->r14 == 0) {
        // 0x15124BE4: lh          $t7, 0x1B4($a0)
        ctx->r15 = MEM_H(ctx->r4, 0X1B4);
            goto L_15124C08;
    }
    goto skip_3;
    // 0x15124BE4: lh          $t7, 0x1B4($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1B4);
    skip_3:
    // 0x15124BE8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15124BEC: lui         $at, 0x4342
    ctx->r1 = S32(0X4342 << 16);
    // 0x15124BF0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15124BF4: swc1        $f0, 0x348($a0)
    MEM_W(0X348, ctx->r4) = ctx->f0.u32l;
    // 0x15124BF8: swc1        $f0, 0x34C($a0)
    MEM_W(0X34C, ctx->r4) = ctx->f0.u32l;
    // 0x15124BFC: jr          $ra
    // 0x15124C00: swc1        $f18, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f18.u32l;
    return;
    return;
    // 0x15124C00: swc1        $f18, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f18.u32l;
    // 0x15124C04: lh          $t7, 0x1B4($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1B4);
L_15124C08:
    // 0x15124C08: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x15124C0C: addiu       $t9, $t9, 0x34B0
    ctx->r25 = ADD32(ctx->r25, 0X34B0);
    // 0x15124C10: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x15124C14: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x15124C18: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15124C1C: swc1        $f4, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f4.u32l;
    // 0x15124C20: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15124C24: swc1        $f6, 0x348($a0)
    MEM_W(0X348, ctx->r4) = ctx->f6.u32l;
    // 0x15124C28: lwc1        $f8, 0x348($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X348);
    // 0x15124C2C: swc1        $f8, 0x34C($a0)
    MEM_W(0X34C, ctx->r4) = ctx->f8.u32l;
    // 0x15124C30: jr          $ra
    // 0x15124C34: nop

    return;
    return;
    // 0x15124C34: nop

;}
RECOMP_FUNC void __osPackRamWriteData2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F2660: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151F2664: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x151F2668: addiu       $t6, $t6, 0x29D0
    ctx->r14 = ADD32(ctx->r14, 0X29D0);
    // 0x151F266C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F2670: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x151F2674: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x151F2678: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x151F267C: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x151F2680: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_151F2684:
    // 0x151F2684: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x151F2688: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x151F268C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151F2690: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151F2694: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x151F2698: sw          $zero, 0x29D0($at)
    MEM_W(0X29D0, ctx->r1) = 0;
    // 0x151F269C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x151F26A0: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x151F26A4: bne         $at, $zero, L_151F2684
    if (ctx->r1 != 0) {
        // 0x151F26A8: sw          $t0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r8;
            goto L_151F2684;
    }
    // 0x151F26A8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151F26AC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151F26B0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151F26B4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151F26B8: addiu       $t3, $zero, 0x23
    ctx->r11 = ADD32(0, 0X23);
    // 0x151F26BC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151F26C0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151F26C4: sw          $t1, 0x2A0C($at)
    MEM_W(0X2A0C, ctx->r1) = ctx->r9;
    // 0x151F26C8: sb          $t2, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r10;
    // 0x151F26CC: sb          $t3, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r11;
    // 0x151F26D0: sb          $t4, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r12;
    // 0x151F26D4: sb          $t5, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r13;
    // 0x151F26D8: jal         0x10025FD0
    // 0x151F26DC: lhu         $a0, 0x4E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4E);
    __osContAddressCrc_recomp(rdram, ctx);
        goto after_0;
    // 0x151F26DC: lhu         $a0, 0x4E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4E);
    after_0:
    // 0x151F26E0: lhu         $t6, 0x4E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X4E);
    // 0x151F26E4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151F26E8: sb          $t9, 0x42($sp)
    MEM_B(0X42, ctx->r29) = ctx->r25;
    // 0x151F26EC: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x151F26F0: or          $t8, $v0, $t7
    ctx->r24 = ctx->r2 | ctx->r15;
    // 0x151F26F4: sh          $t8, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r24;
    // 0x151F26F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_151F26FC:
    // 0x151F26FC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x151F2700: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x151F2704: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x151F2708: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x151F270C: sb          $t1, 0x22($t3)
    MEM_B(0X22, ctx->r11) = ctx->r9;
    // 0x151F2710: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x151F2714: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x151F2718: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151F271C: slti        $at, $t7, 0x20
    ctx->r1 = SIGNED(ctx->r15) < 0X20 ? 1 : 0;
    // 0x151F2720: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x151F2724: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151F2728: bne         $at, $zero, L_151F26FC
    if (ctx->r1 != 0) {
        // 0x151F272C: sw          $t5, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r13;
            goto L_151F26FC;
    }
    // 0x151F272C: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x151F2730: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151F2734: beq         $t8, $zero, L_151F2770
    if (ctx->r24 == 0) {
        // 0x151F2738: nop
    
            goto L_151F2770;
    }
    // 0x151F2738: nop

    // 0x151F273C: blez        $t8, L_151F2770
    if (SIGNED(ctx->r24) <= 0) {
        // 0x151F2740: sw          $zero, 0x18($sp)
        MEM_W(0X18, ctx->r29) = 0;
            goto L_151F2770;
    }
    // 0x151F2740: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_151F2744:
    // 0x151F2744: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x151F2748: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
    // 0x151F274C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x151F2750: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x151F2754: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x151F2758: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x151F275C: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x151F2760: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x151F2764: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151F2768: bne         $at, $zero, L_151F2744
    if (ctx->r1 != 0) {
        // 0x151F276C: sw          $t1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r9;
            goto L_151F2744;
    }
    // 0x151F276C: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
L_151F2770:
    // 0x151F2770: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x151F2774: addiu       $t8, $t6, 0x24
    ctx->r24 = ADD32(ctx->r14, 0X24);
    // 0x151F2778: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
L_151F277C:
    // 0x151F277C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x151F2780: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x151F2784: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x151F2788: swl         $at, -0xC($t5)
    do_swl(rdram, -0XC, ctx->r13, ctx->r1);
    // 0x151F278C: swr         $at, -0x9($t5)
    do_swr(rdram, -0X9, ctx->r13, ctx->r1);
    // 0x151F2790: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x151F2794: swl         $at, -0x8($t5)
    do_swl(rdram, -0X8, ctx->r13, ctx->r1);
    // 0x151F2798: swr         $at, -0x5($t5)
    do_swr(rdram, -0X5, ctx->r13, ctx->r1);
    // 0x151F279C: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x151F27A0: swl         $at, -0x4($t5)
    do_swl(rdram, -0X4, ctx->r13, ctx->r1);
    // 0x151F27A4: bne         $t6, $t8, L_151F277C
    if (ctx->r14 != ctx->r24) {
        // 0x151F27A8: swr         $at, -0x1($t5)
        do_swr(rdram, -0X1, ctx->r13, ctx->r1);
            goto L_151F277C;
    }
    // 0x151F27A8: swr         $at, -0x1($t5)
    do_swr(rdram, -0X1, ctx->r13, ctx->r1);
    // 0x151F27AC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x151F27B0: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x151F27B4: swl         $at, 0x0($t5)
    do_swl(rdram, 0X0, ctx->r13, ctx->r1);
    // 0x151F27B8: swr         $at, 0x3($t5)
    do_swr(rdram, 0X3, ctx->r13, ctx->r1);
    // 0x151F27BC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x151F27C0: addiu       $t0, $t9, 0x28
    ctx->r8 = ADD32(ctx->r25, 0X28);
    // 0x151F27C4: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x151F27C8: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
    // 0x151F27CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F27D0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151F27D4: jr          $ra
    // 0x151F27D8: nop

    return;
    return;
    // 0x151F27D8: nop

;}
RECOMP_FUNC void func_1519F7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519F7F0: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x1519F7F4: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x1519F7F8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1519F7FC: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x1519F800: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x1519F804: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x1519F808: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x1519F80C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x1519F810: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x1519F814: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x1519F818: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x1519F81C: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x1519F820: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x1519F824: lw          $s3, 0x98($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X98);
    // 0x1519F828: lw          $a3, 0x94($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X94);
    // 0x1519F82C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x1519F830: lw          $s4, 0x18($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X18);
    // 0x1519F834: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x1519F838: bnel        $t6, $zero, L_1519F84C
    if (ctx->r14 != 0) {
        // 0x1519F83C: lw          $t7, 0x1D4($s4)
        ctx->r15 = MEM_W(ctx->r20, 0X1D4);
            goto L_1519F84C;
    }
    goto skip_0;
    // 0x1519F83C: lw          $t7, 0x1D4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1D4);
    skip_0:
    // 0x1519F840: b           L_1519FE38
    // 0x1519F844: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519FE38;
    // 0x1519F844: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519F848: lw          $t7, 0x1D4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1D4);
L_1519F84C:
    // 0x1519F84C: bnel        $t7, $zero, L_1519F860
    if (ctx->r15 != 0) {
        // 0x1519F850: lbu         $t8, 0x1C($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X1C);
            goto L_1519F860;
    }
    goto skip_1;
    // 0x1519F850: lbu         $t8, 0x1C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1C);
    skip_1:
    // 0x1519F854: b           L_1519FE38
    // 0x1519F858: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519FE38;
    // 0x1519F858: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519F85C: lbu         $t8, 0x1C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1C);
L_1519F860:
    // 0x1519F860: lbu         $t9, 0x3B($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X3B);
    // 0x1519F864: beql        $t8, $t9, L_1519F878
    if (ctx->r24 == ctx->r25) {
        // 0x1519F868: sw          $a3, 0x110($sp)
        MEM_W(0X110, ctx->r29) = ctx->r7;
            goto L_1519F878;
    }
    goto skip_2;
    // 0x1519F868: sw          $a3, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r7;
    skip_2:
    // 0x1519F86C: b           L_1519FE38
    // 0x1519F870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519FE38;
    // 0x1519F870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519F874: sw          $a3, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r7;
L_1519F878:
    // 0x1519F878: lhu         $t0, 0x1E($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X1E);
    // 0x1519F87C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519F880: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1519F884: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x1519F888: bne         $t1, $zero, L_1519F8DC
    if (ctx->r9 != 0) {
        // 0x1519F88C: addiu       $s0, $s1, 0x10
        ctx->r16 = ADD32(ctx->r17, 0X10);
            goto L_1519F8DC;
    }
    // 0x1519F88C: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    // 0x1519F890: lbu         $a1, 0x23($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X23);
    // 0x1519F894: sw          $a3, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r7;
    // 0x1519F898: jal         0x1519EF90
    // 0x1519F89C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1519EF90(rdram, ctx);
        goto after_0;
    // 0x1519F89C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
    // 0x1519F8A0: beq         $v0, $zero, L_1519F8D4
    if (ctx->r2 == 0) {
        // 0x1519F8A4: nop
    
            goto L_1519F8D4;
    }
    // 0x1519F8A4: nop

    // 0x1519F8A8: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x1519F8AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1519F8B0: sw          $at, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r1;
    // 0x1519F8B4: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x1519F8B8: sw          $t3, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r11;
    // 0x1519F8BC: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x1519F8C0: sw          $at, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r1;
    // 0x1519F8C4: lhu         $t4, 0x1E($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X1E);
    // 0x1519F8C8: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x1519F8CC: b           L_1519F8DC
    // 0x1519F8D0: sh          $t5, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r13;
        goto L_1519F8DC;
    // 0x1519F8D0: sh          $t5, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r13;
L_1519F8D4:
    // 0x1519F8D4: b           L_1519FE38
    // 0x1519F8D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1519FE38;
    // 0x1519F8D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519F8DC:
    // 0x1519F8DC: bne         $v0, $zero, L_1519F98C
    if (ctx->r2 != 0) {
        // 0x1519F8E0: lw          $a3, 0x110($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X110);
            goto L_1519F98C;
    }
    // 0x1519F8E0: lw          $a3, 0x110($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X110);
    // 0x1519F8E4: lbu         $a1, 0x23($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X23);
    // 0x1519F8E8: sw          $a3, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r7;
    // 0x1519F8EC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1519F8F0: jal         0x1519EF90
    // 0x1519F8F4: addiu       $a2, $s1, 0x10
    ctx->r6 = ADD32(ctx->r17, 0X10);
    func_1519EF90(rdram, ctx);
        goto after_1;
    // 0x1519F8F4: addiu       $a2, $s1, 0x10
    ctx->r6 = ADD32(ctx->r17, 0X10);
    after_1:
    // 0x1519F8F8: bnel        $v0, $zero, L_1519F990
    if (ctx->r2 != 0) {
        // 0x1519F8FC: lwc1        $f4, 0x14($s4)
        ctx->f4.u32l = MEM_W(ctx->r20, 0X14);
            goto L_1519F990;
    }
    goto skip_3;
    // 0x1519F8FC: lwc1        $f4, 0x14($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X14);
    skip_3:
    // 0x1519F900: jal         0x1519F48C
    // 0x1519F904: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_1519F48C(rdram, ctx);
        goto after_2;
    // 0x1519F904: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x1519F908: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x1519F90C: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x1519F910: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x1519F914: sw          $v0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r2;
    // 0x1519F918: lw          $t6, 0x20($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X20);
    // 0x1519F91C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1519F920: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1519F924: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1519F928: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1519F92C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1519F930: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1519F934: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x1519F938: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x1519F93C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1519F940: addiu       $s2, $v0, 0x58
    ctx->r18 = ADD32(ctx->r2, 0X58);
    // 0x1519F944: jal         0x151491F4
    // 0x1519F948: sb          $t6, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = ctx->r14;
    func_151491F4(rdram, ctx);
        goto after_3;
    // 0x1519F948: sb          $t6, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = ctx->r14;
    after_3:
    // 0x1519F94C: beq         $v0, $zero, L_1519F964
    if (ctx->r2 == 0) {
        // 0x1519F950: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_1519F964;
    }
    // 0x1519F950: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1519F954: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1519F958: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    // 0x1519F95C: jal         0x10022EC0
    // 0x1519F960: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x1519F960: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
L_1519F964:
    // 0x1519F964: lw          $t0, 0x20($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X20);
    // 0x1519F968: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1519F96C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1519F970: bnel        $t0, $at, L_1519F984
    if (ctx->r8 != ctx->r1) {
        // 0x1519F974: sw          $s0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r16;
            goto L_1519F984;
    }
    goto skip_4;
    // 0x1519F974: sw          $s0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r16;
    skip_4:
    // 0x1519F978: b           L_1519FE38
    // 0x1519F97C: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
        goto L_1519FE38;
    // 0x1519F97C: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x1519F980: sw          $s0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r16;
L_1519F984:
    // 0x1519F984: b           L_1519FE38
    // 0x1519F988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1519FE38;
    // 0x1519F988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519F98C:
    // 0x1519F98C: lwc1        $f4, 0x14($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X14);
L_1519F990:
    // 0x1519F990: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519F994: lwc1        $f2, -0x730C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X730C);
    // 0x1519F998: lw          $a3, 0x110($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X110);
    // 0x1519F99C: swc1        $f4, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->f4.u32l;
    // 0x1519F9A0: lwc1        $f6, 0x1C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x1519F9A4: lwc1        $f10, 0x10($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X10);
    // 0x1519F9A8: swc1        $f6, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->f6.u32l;
    // 0x1519F9AC: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x1519F9B0: lwc1        $f4, 0x14($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14);
    // 0x1519F9B4: lwc1        $f6, 0x14($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X14);
    // 0x1519F9B8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1519F9BC: lwc1        $f10, 0x18($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X18);
    // 0x1519F9C0: lwc1        $f8, 0x18($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X18);
    // 0x1519F9C4: sub.s       $f24, $f4, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1519F9C8: abs.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = fabsf(ctx->f16.fl);
    // 0x1519F9CC: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1519F9D0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1519F9D4: nop

    // 0x1519F9D8: bc1t        L_1519FA08
    if (c1cs) {
        // 0x1519F9DC: nop
    
            goto L_1519FA08;
    }
    // 0x1519F9DC: nop

    // 0x1519F9E0: abs.s       $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = fabsf(ctx->f24.fl);
    // 0x1519F9E4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1519F9E8: nop

    // 0x1519F9EC: bc1t        L_1519FA08
    if (c1cs) {
        // 0x1519F9F0: nop
    
            goto L_1519FA08;
    }
    // 0x1519F9F0: nop

    // 0x1519F9F4: abs.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = fabsf(ctx->f18.fl);
    // 0x1519F9F8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1519F9FC: nop

    // 0x1519FA00: bc1fl       L_1519FA48
    if (!c1cs) {
        // 0x1519FA04: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1519FA48;
    }
    goto skip_5;
    // 0x1519FA04: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_5:
L_1519FA08:
    // 0x1519FA08: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1519FA0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1519FA10: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1519FA14: mul.s       $f6, $f24, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x1519FA18: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1519FA1C: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x1519FA20: lwc1        $f6, 0x8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X8);
    // 0x1519FA24: lwc1        $f4, 0xC($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0XC);
    // 0x1519FA28: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1519FA2C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1519FA30: div.s       $f12, $f28, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f28.fl, ctx->f0.fl);
    // 0x1519FA34: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1519FA38: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1519FA3C: swc1        $f10, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f10.u32l;
    // 0x1519FA40: swc1        $f12, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f12.u32l;
    // 0x1519FA44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_1519FA48:
    // 0x1519FA48: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1519FA4C: lwc1        $f2, 0xC($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0XC);
    // 0x1519FA50: lwc1        $f12, 0xF4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x1519FA54: c.lt.s      $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl < ctx->f2.fl;
    // 0x1519FA58: nop

    // 0x1519FA5C: bc1fl       L_1519FE38
    if (!c1cs) {
        // 0x1519FA60: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1519FE38;
    }
    goto skip_6;
    // 0x1519FA60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_6:
    // 0x1519FA64: div.s       $f14, $f28, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f28.fl, ctx->f2.fl);
    // 0x1519FA68: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1519FA6C: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1519FA70: lwc1        $f6, 0x1C($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x1519FA74: addiu       $a1, $s3, 0x10
    ctx->r5 = ADD32(ctx->r19, 0X10);
    // 0x1519FA78: addiu       $t1, $sp, 0xC8
    ctx->r9 = ADD32(ctx->r29, 0XC8);
    // 0x1519FA7C: add.s       $f20, $f6, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1519FA80: mul.s       $f8, $f20, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x1519FA84: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    // 0x1519FA88: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x1519FA8C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x1519FA90: lw          $t4, 0x4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X4);
    // 0x1519FA94: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x1519FA98: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x1519FA9C: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x1519FAA0: lwc1        $f10, 0x3C($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X3C);
    // 0x1519FAA4: lwc1        $f0, 0x38($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X38);
    // 0x1519FAA8: lw          $t5, 0x20($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X20);
    // 0x1519FAAC: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x1519FAB0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x1519FAB4: add.s       $f22, $f0, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x1519FAB8: bne         $t5, $at, L_1519FAEC
    if (ctx->r13 != ctx->r1) {
        // 0x1519FABC: sub.s       $f26, $f0, $f22
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f26.fl = ctx->f0.fl - ctx->f22.fl;
            goto L_1519FAEC;
    }
    // 0x1519FABC: sub.s       $f26, $f0, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f26.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x1519FAC0: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x1519FAC4: lwc1        $f10, 0x4C($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X4C);
    // 0x1519FAC8: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1519FACC: nop

    // 0x1519FAD0: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1519FAD4: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x1519FAD8: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x1519FADC: lwc1        $f8, 0x4C($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X4C);
    // 0x1519FAE0: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1519FAE4: b           L_1519FB10
    // 0x1519FAE8: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
        goto L_1519FB10;
    // 0x1519FAE8: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
L_1519FAEC:
    // 0x1519FAEC: mul.s       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x1519FAF0: lwc1        $f4, 0x4C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X4C);
    // 0x1519FAF4: neg.s       $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = -ctx->f16.fl;
    // 0x1519FAF8: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1519FAFC: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x1519FB00: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x1519FB04: lwc1        $f4, 0x4C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X4C);
    // 0x1519FB08: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1519FB0C: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
L_1519FB10:
    // 0x1519FB10: lb          $v1, 0x2E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2E);
    // 0x1519FB14: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1519FB18: bgezl       $v1, L_1519FB2C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1519FB1C: lb          $t6, 0x2D($s1)
        ctx->r14 = MEM_B(ctx->r17, 0X2D);
            goto L_1519FB2C;
    }
    goto skip_7;
    // 0x1519FB1C: lb          $t6, 0x2D($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X2D);
    skip_7:
    // 0x1519FB20: lbu         $v1, 0x25($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X25);
    // 0x1519FB24: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1519FB28: lb          $t6, 0x2D($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X2D);
L_1519FB2C:
    // 0x1519FB2C: beq         $v1, $t6, L_1519FB94
    if (ctx->r3 == ctx->r14) {
        // 0x1519FB30: nop
    
            goto L_1519FB94;
    }
    // 0x1519FB30: nop

    // 0x1519FB34: lb          $t7, 0x2C($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X2C);
    // 0x1519FB38: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    // 0x1519FB3C: addiu       $v1, $zero, 0x24
    ctx->r3 = ADD32(0, 0X24);
    // 0x1519FB40: beq         $t7, $zero, L_1519FB94
    if (ctx->r15 == 0) {
        // 0x1519FB44: nop
    
            goto L_1519FB94;
    }
    // 0x1519FB44: nop

    // 0x1519FB48: bgez        $a0, L_1519FB58
    if (SIGNED(ctx->r4) >= 0) {
        // 0x1519FB4C: nop
    
            goto L_1519FB58;
    }
    // 0x1519FB4C: nop

    // 0x1519FB50: lbu         $a0, 0x25($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X25);
    // 0x1519FB54: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_1519FB58:
    // 0x1519FB58: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519FB5C: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x1519FB60: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1519FB64: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1519FB68: mflo        $t8
    ctx->r24 = lo;
    // 0x1519FB6C: addu        $v0, $t8, $a3
    ctx->r2 = ADD32(ctx->r24, ctx->r7);
    // 0x1519FB70: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1519FB74: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1519FB78: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x1519FB7C: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519FB80: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x1519FB84: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1519FB88: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1519FB8C: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519FB90: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
L_1519FB94:
    // 0x1519FB94: mul.s       $f10, $f16, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x1519FB98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519FB9C: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x1519FBA0: mul.s       $f6, $f24, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f14.fl);
    // 0x1519FBA4: sw          $a3, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r7;
    // 0x1519FBA8: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x1519FBAC: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x1519FBB0: mul.s       $f8, $f26, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f14.fl);
    // 0x1519FBB4: lwc1        $f26, -0x7308($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X7308);
    // 0x1519FBB8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1519FBBC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1519FBC0: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x1519FBC4: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x1519FBC8: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x1519FBCC: addiu       $v1, $zero, 0x24
    ctx->r3 = ADD32(0, 0X24);
L_1519FBD0:
    // 0x1519FBD0: lw          $a3, 0x110($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X110);
    // 0x1519FBD4: lb          $t9, 0x2E($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X2E);
    // 0x1519FBD8: addiu       $t3, $sp, 0xA8
    ctx->r11 = ADD32(ctx->r29, 0XA8);
    // 0x1519FBDC: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x1519FBE0: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519FBE4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1519FBE8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x1519FBEC: mflo        $t0
    ctx->r8 = lo;
    // 0x1519FBF0: addu        $s0, $t0, $a3
    ctx->r16 = ADD32(ctx->r8, ctx->r7);
    // 0x1519FBF4: sw          $at, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r1;
    // 0x1519FBF8: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x1519FBFC: sw          $t4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r12;
    // 0x1519FC00: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x1519FC04: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x1519FC08: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x1519FC0C: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x1519FC10: lh          $t5, 0x2E($s3)
    ctx->r13 = MEM_H(ctx->r19, 0X2E);
    // 0x1519FC14: swc1        $f22, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f22.u32l;
    // 0x1519FC18: sh          $t5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r13;
    // 0x1519FC1C: lh          $t6, 0x30($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X30);
    // 0x1519FC20: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x1519FC24: lh          $t7, 0x32($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X32);
    // 0x1519FC28: sh          $t8, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r24;
    // 0x1519FC2C: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x1519FC30: lh          $t9, 0x28($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X28);
    // 0x1519FC34: jal         0x150ADA20
    // 0x1519FC38: sh          $t9, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1519FC38: sh          $t9, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r25;
    after_5:
    // 0x1519FC3C: lbu         $t3, 0x45($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X45);
    // 0x1519FC40: lh          $t0, 0x28($s3)
    ctx->r8 = MEM_H(ctx->r19, 0X28);
    // 0x1519FC44: lbu         $t1, 0x44($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X44);
    // 0x1519FC48: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x1519FC4C: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x1519FC50: mfhi        $t5
    ctx->r13 = hi;
    // 0x1519FC54: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x1519FC58: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x1519FC5C: sh          $t6, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r14;
    // 0x1519FC60: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1519FC64: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1519FC68: bne         $t4, $zero, L_1519FC74
    if (ctx->r12 != 0) {
        // 0x1519FC6C: nop
    
            goto L_1519FC74;
    }
    // 0x1519FC6C: nop

    // 0x1519FC70: break       7
    do_break(354024560);
L_1519FC74:
    // 0x1519FC74: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x1519FC78: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1519FC7C: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1519FC80: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1519FC84: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x1519FC88: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x1519FC8C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1519FC90: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x1519FC94: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1519FC98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519FC9C: lwc1        $f8, -0x7304($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7304);
    // 0x1519FCA0: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x1519FCA4: lwc1        $f0, 0x118($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X118);
    // 0x1519FCA8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x1519FCAC: nop

    // 0x1519FCB0: bc1fl       L_1519FCCC
    if (!c1cs) {
        // 0x1519FCB4: add.s       $f4, $f0, $f24
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f24.fl;
            goto L_1519FCCC;
    }
    goto skip_8;
    // 0x1519FCB4: add.s       $f4, $f0, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f24.fl;
    skip_8:
    // 0x1519FCB8: lwc1        $f10, 0x18($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X18);
    // 0x1519FCBC: add.s       $f6, $f10, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x1519FCC0: b           L_1519FCD0
    // 0x1519FCC4: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
        goto L_1519FCD0;
    // 0x1519FCC4: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x1519FCC8: add.s       $f4, $f0, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f24.fl;
L_1519FCCC:
    // 0x1519FCCC: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
L_1519FCD0:
    // 0x1519FCD0: lwc1        $f0, 0x8C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1519FCD4: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1519FCD8: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1519FCDC: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x1519FCE0: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x1519FCE4: lwc1        $f0, 0x94($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X94);
    // 0x1519FCE8: bc1t        L_1519FD08
    if (c1cs) {
        // 0x1519FCEC: nop
    
            goto L_1519FD08;
    }
    // 0x1519FCEC: nop

    // 0x1519FCF0: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1519FCF4: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x1519FCF8: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x1519FCFC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x1519FD00: bc1fl       L_1519FD14
    if (!c1cs) {
        // 0x1519FD04: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_1519FD14;
    }
    goto skip_9;
    // 0x1519FD04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_9:
L_1519FD08:
    // 0x1519FD08: b           L_1519FD48
    // 0x1519FD0C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_1519FD48;
    // 0x1519FD0C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1519FD10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_1519FD14:
    // 0x1519FD14: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x1519FD18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1519FD1C: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1519FD20: addiu       $a3, $s1, 0x60
    ctx->r7 = ADD32(ctx->r17, 0X60);
    // 0x1519FD24: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x1519FD28: jal         0x15045800
    // 0x1519FD2C: nop

    func_15045800(rdram, ctx);
        goto after_6;
    // 0x1519FD2C: nop

    after_6:
    // 0x1519FD30: beql        $v0, $zero, L_1519FD48
    if (ctx->r2 == 0) {
        // 0x1519FD34: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_1519FD48;
    }
    goto skip_10;
    // 0x1519FD34: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    skip_10:
    // 0x1519FD38: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x1519FD3C: b           L_1519FD48
    // 0x1519FD40: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
        goto L_1519FD48;
    // 0x1519FD40: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x1519FD44: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_1519FD48:
    // 0x1519FD48: beql        $s2, $zero, L_1519FDB4
    if (ctx->r18 == 0) {
        // 0x1519FD4C: lwc1        $f10, 0xC8($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
            goto L_1519FDB4;
    }
    goto skip_11;
    // 0x1519FD4C: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    skip_11:
    // 0x1519FD50: lb          $t7, 0x2E($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X2E);
    // 0x1519FD54: lbu         $t9, 0x25($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X25);
    // 0x1519FD58: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x1519FD5C: sb          $t8, 0x2E($s1)
    MEM_B(0X2E, ctx->r17) = ctx->r24;
    // 0x1519FD60: lb          $v0, 0x2E($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2E);
    // 0x1519FD64: bnel        $t9, $v0, L_1519FD78
    if (ctx->r25 != ctx->r2) {
        // 0x1519FD68: lb          $t0, 0x2C($s1)
        ctx->r8 = MEM_B(ctx->r17, 0X2C);
            goto L_1519FD78;
    }
    goto skip_12;
    // 0x1519FD68: lb          $t0, 0x2C($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X2C);
    skip_12:
    // 0x1519FD6C: sb          $zero, 0x2E($s1)
    MEM_B(0X2E, ctx->r17) = 0;
    // 0x1519FD70: lb          $v0, 0x2E($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2E);
    // 0x1519FD74: lb          $t0, 0x2C($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X2C);
L_1519FD78:
    // 0x1519FD78: lb          $v1, 0x2D($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2D);
    // 0x1519FD7C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x1519FD80: bne         $v1, $v0, L_1519FDB0
    if (ctx->r3 != ctx->r2) {
        // 0x1519FD84: sb          $t1, 0x2C($s1)
        MEM_B(0X2C, ctx->r17) = ctx->r9;
            goto L_1519FDB0;
    }
    // 0x1519FD84: sb          $t1, 0x2C($s1)
    MEM_B(0X2C, ctx->r17) = ctx->r9;
    // 0x1519FD88: addiu       $t3, $v1, 0x1
    ctx->r11 = ADD32(ctx->r3, 0X1);
    // 0x1519FD8C: sb          $t3, 0x2D($s1)
    MEM_B(0X2D, ctx->r17) = ctx->r11;
    // 0x1519FD90: lb          $t2, 0x2D($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X2D);
    // 0x1519FD94: lbu         $t4, 0x25($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X25);
    // 0x1519FD98: bnel        $t4, $t2, L_1519FDA8
    if (ctx->r12 != ctx->r10) {
        // 0x1519FD9C: lb          $t5, 0x2C($s1)
        ctx->r13 = MEM_B(ctx->r17, 0X2C);
            goto L_1519FDA8;
    }
    goto skip_13;
    // 0x1519FD9C: lb          $t5, 0x2C($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X2C);
    skip_13:
    // 0x1519FDA0: sb          $zero, 0x2D($s1)
    MEM_B(0X2D, ctx->r17) = 0;
    // 0x1519FDA4: lb          $t5, 0x2C($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X2C);
L_1519FDA8:
    // 0x1519FDA8: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x1519FDAC: sb          $t6, 0x2C($s1)
    MEM_B(0X2C, ctx->r17) = ctx->r14;
L_1519FDB0:
    // 0x1519FDB0: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
L_1519FDB4:
    // 0x1519FDB4: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1519FDB8: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x1519FDBC: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1519FDC0: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1519FDC4: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1519FDC8: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x1519FDCC: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x1519FDD0: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1519FDD4: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    // 0x1519FDD8: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1519FDDC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1519FDE0: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x1519FDE4: add.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f6.fl;
    // 0x1519FDE8: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    // 0x1519FDEC: lwc1        $f8, 0xC($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0XC);
    // 0x1519FDF0: sub.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x1519FDF4: sub.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f28.fl;
    // 0x1519FDF8: swc1        $f10, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f10.u32l;
    // 0x1519FDFC: lwc1        $f6, 0xC($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XC);
    // 0x1519FE00: c.lt.s      $f28, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f28.fl < ctx->f6.fl;
    // 0x1519FE04: nop

    // 0x1519FE08: bc1tl       L_1519FBD0
    if (c1cs) {
        // 0x1519FE0C: addiu       $v1, $zero, 0x24
        ctx->r3 = ADD32(0, 0X24);
            goto L_1519FBD0;
    }
    goto skip_14;
    // 0x1519FE0C: addiu       $v1, $zero, 0x24
    ctx->r3 = ADD32(0, 0X24);
    skip_14:
    // 0x1519FE10: addiu       $t8, $sp, 0xC8
    ctx->r24 = ADD32(ctx->r29, 0XC8);
    // 0x1519FE14: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x1519FE18: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x1519FE1C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x1519FE20: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x1519FE24: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x1519FE28: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x1519FE2C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x1519FE30: swc1        $f20, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f20.u32l;
    // 0x1519FE34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519FE38:
    // 0x1519FE38: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x1519FE3C: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x1519FE40: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x1519FE44: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x1519FE48: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x1519FE4C: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x1519FE50: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1519FE54: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x1519FE58: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x1519FE5C: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x1519FE60: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x1519FE64: jr          $ra
    // 0x1519FE68: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    return;
    // 0x1519FE68: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_15110360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15110360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15110364: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x15110368: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x1511036C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15110370: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15110374: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15110378: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x1511037C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x15110380: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x15110384: jal         0x151102CC
    // 0x15110388: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    func_151102CC(rdram, ctx);
        goto after_0;
    // 0x15110388: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    after_0:
    // 0x1511038C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x15110390: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15110394: lw          $t6, -0x19D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19D8);
    // 0x15110398: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1511039C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x151103A0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x151103A4: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x151103A8: addu        $a1, $t6, $t8
    ctx->r5 = ADD32(ctx->r14, ctx->r24);
    // 0x151103AC: addiu       $a1, $a1, 0xBC
    ctx->r5 = ADD32(ctx->r5, 0XBC);
    // 0x151103B0: jal         0x150A7A48
    // 0x151103B4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    func_150A7A48(rdram, ctx);
        goto after_1;
    // 0x151103B4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_1:
    // 0x151103B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151103BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151103C0: jr          $ra
    // 0x151103C4: nop

    return;
    return;
    // 0x151103C4: nop

;}
RECOMP_FUNC void func_1507B448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B448: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507B44C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B450: jal         0x1507A3E8
    // 0x1507B454: nop

    func_1507A3E8(rdram, ctx);
        goto after_0;
    // 0x1507B454: nop

    after_0:
    // 0x1507B458: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507B45C: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1507B460: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x1507B464: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B468: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507B46C: jal         0x1506E46C
    // 0x1507B470: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1506E46C(rdram, ctx);
        goto after_1;
    // 0x1507B470: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x1507B474: beq         $v0, $zero, L_1507B484
    if (ctx->r2 == 0) {
        // 0x1507B478: addiu       $a0, $zero, 0xBE
        ctx->r4 = ADD32(0, 0XBE);
            goto L_1507B484;
    }
    // 0x1507B478: addiu       $a0, $zero, 0xBE
    ctx->r4 = ADD32(0, 0XBE);
    // 0x1507B47C: jal         0x1506BAD8
    // 0x1507B480: addiu       $a1, $zero, 0x514
    ctx->r5 = ADD32(0, 0X514);
    func_1506BAD8(rdram, ctx);
        goto after_2;
    // 0x1507B480: addiu       $a1, $zero, 0x514
    ctx->r5 = ADD32(0, 0X514);
    after_2:
L_1507B484:
    // 0x1507B484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507B488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507B48C: jr          $ra
    // 0x1507B490: nop

    return;
    return;
    // 0x1507B490: nop

;}
RECOMP_FUNC void func_1514D978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514D978: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1514D97C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514D980: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1514D984: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x1514D988: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1514D98C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1514D990: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1514D994: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1514D998: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1514D99C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1514D9A0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x1514D9A4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1514D9A8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x1514D9AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1514D9B0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x1514D9B4: jal         0x15158BD0
    // 0x1514D9B8: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    func_15158BD0(rdram, ctx);
        goto after_0;
    // 0x1514D9B8: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1514D9BC: beq         $v0, $zero, L_1514D9E4
    if (ctx->r2 == 0) {
        // 0x1514D9C0: addiu       $a0, $v0, 0x58
        ctx->r4 = ADD32(ctx->r2, 0X58);
            goto L_1514D9E4;
    }
    // 0x1514D9C0: addiu       $a0, $v0, 0x58
    ctx->r4 = ADD32(ctx->r2, 0X58);
    // 0x1514D9C4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x1514D9C8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x1514D9CC: jal         0x10022EC0
    // 0x1514D9D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1514D9D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x1514D9D4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x1514D9D8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x1514D9DC: jal         0x1514EC1C
    // 0x1514D9E0: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_1514EC1C(rdram, ctx);
        goto after_2;
    // 0x1514D9E0: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_2:
L_1514D9E4:
    // 0x1514D9E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514D9E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1514D9EC: jr          $ra
    // 0x1514D9F0: nop

    return;
    return;
    // 0x1514D9F0: nop

;}
RECOMP_FUNC void func_1506FC1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FC1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FC20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FC24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FC28: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FC2C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FC30: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x1506FC34: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1506FC38: jal         0x151A0A10
    // 0x1506FC3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151A0A10(rdram, ctx);
        goto after_0;
    // 0x1506FC3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1506FC40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FC44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FC48: jr          $ra
    // 0x1506FC4C: nop

    return;
    return;
    // 0x1506FC4C: nop

;}
RECOMP_FUNC void func_1517A84C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517A84C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1517A850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1517A854: lhu         $v0, 0xA6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA6);
    // 0x1517A858: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1517A85C: bne         $v0, $zero, L_1517A918
    if (ctx->r2 != 0) {
        // 0x1517A860: nop
    
            goto L_1517A918;
    }
    // 0x1517A860: nop

    // 0x1517A864: lh          $t6, 0x90($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X90);
    // 0x1517A868: lh          $t7, 0xA0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA0);
    // 0x1517A86C: lh          $v0, 0xA2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XA2);
    // 0x1517A870: lh          $t9, 0x92($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X92);
    // 0x1517A874: lh          $t1, 0x94($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X94);
    // 0x1517A878: lh          $t2, 0xA4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XA4);
    // 0x1517A87C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1517A880: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x1517A884: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x1517A888: sh          $t8, 0x90($a0)
    MEM_H(0X90, ctx->r4) = ctx->r24;
    // 0x1517A88C: sh          $t0, 0x92($a0)
    MEM_H(0X92, ctx->r4) = ctx->r8;
    // 0x1517A890: blez        $v0, L_1517A8B4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1517A894: sh          $t3, 0x94($a0)
        MEM_H(0X94, ctx->r4) = ctx->r11;
            goto L_1517A8B4;
    }
    // 0x1517A894: sh          $t3, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r11;
    // 0x1517A898: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x1517A89C: sh          $t4, 0xA2($a0)
    MEM_H(0XA2, ctx->r4) = ctx->r12;
    // 0x1517A8A0: lh          $t5, 0xA2($a0)
    ctx->r13 = MEM_H(ctx->r4, 0XA2);
    // 0x1517A8A4: addiu       $t6, $zero, -0x3
    ctx->r14 = ADD32(0, -0X3);
    // 0x1517A8A8: bgtzl       $t5, L_1517A8B8
    if (SIGNED(ctx->r13) > 0) {
        // 0x1517A8AC: lh          $v1, 0xB0($a0)
        ctx->r3 = MEM_H(ctx->r4, 0XB0);
            goto L_1517A8B8;
    }
    goto skip_0;
    // 0x1517A8AC: lh          $v1, 0xB0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XB0);
    skip_0:
    // 0x1517A8B0: sh          $t6, 0xA2($a0)
    MEM_H(0XA2, ctx->r4) = ctx->r14;
L_1517A8B4:
    // 0x1517A8B4: lh          $v1, 0xB0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XB0);
L_1517A8B8:
    // 0x1517A8B8: lh          $t7, 0x92($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X92);
    // 0x1517A8BC: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x1517A8C0: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x1517A8C4: subu        $v0, $t7, $v1
    ctx->r2 = SUB32(ctx->r15, ctx->r3);
    // 0x1517A8C8: bgtzl       $v0, L_1517A8E8
    if (SIGNED(ctx->r2) > 0) {
        // 0x1517A8CC: lh          $t0, 0x96($a0)
        ctx->r8 = MEM_H(ctx->r4, 0X96);
            goto L_1517A8E8;
    }
    goto skip_1;
    // 0x1517A8CC: lh          $t0, 0x96($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X96);
    skip_1:
    // 0x1517A8D0: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x1517A8D4: sh          $zero, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = 0;
    // 0x1517A8D8: sh          $t9, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r25;
    // 0x1517A8DC: b           L_1517A948
    // 0x1517A8E0: sh          $v1, 0x92($a0)
    MEM_H(0X92, ctx->r4) = ctx->r3;
        goto L_1517A948;
    // 0x1517A8E0: sh          $v1, 0x92($a0)
    MEM_H(0X92, ctx->r4) = ctx->r3;
    // 0x1517A8E4: lh          $t0, 0x96($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X96);
L_1517A8E8:
    // 0x1517A8E8: lb          $t1, 0x9C($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X9C);
    // 0x1517A8EC: lh          $t3, 0x98($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X98);
    // 0x1517A8F0: lb          $t4, 0x9D($a0)
    ctx->r12 = MEM_B(ctx->r4, 0X9D);
    // 0x1517A8F4: lh          $t6, 0x9A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X9A);
    // 0x1517A8F8: lb          $t7, 0x9E($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X9E);
    // 0x1517A8FC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x1517A900: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x1517A904: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1517A908: sh          $t2, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r10;
    // 0x1517A90C: sh          $t5, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r13;
    // 0x1517A910: b           L_1517A948
    // 0x1517A914: sh          $t8, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r24;
        goto L_1517A948;
    // 0x1517A914: sh          $t8, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r24;
L_1517A918:
    // 0x1517A918: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x1517A91C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x1517A920: subu        $v0, $v0, $t9
    ctx->r2 = SUB32(ctx->r2, ctx->r25);
    // 0x1517A924: blez        $v0, L_1517A940
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1517A928: sll         $t0, $v0, 8
        ctx->r8 = S32(ctx->r2 << 8);
            goto L_1517A940;
    }
    // 0x1517A928: sll         $t0, $v0, 8
    ctx->r8 = S32(ctx->r2 << 8);
    // 0x1517A92C: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x1517A930: mflo        $t1
    ctx->r9 = lo;
    // 0x1517A934: sh          $v0, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r2;
    // 0x1517A938: b           L_1517A948
    // 0x1517A93C: sb          $t1, 0xB3($a0)
    MEM_B(0XB3, ctx->r4) = ctx->r9;
        goto L_1517A948;
    // 0x1517A93C: sb          $t1, 0xB3($a0)
    MEM_B(0XB3, ctx->r4) = ctx->r9;
L_1517A940:
    // 0x1517A940: jal         0x1516972C
    // 0x1517A944: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x1517A944: nop

    after_0:
L_1517A948:
    // 0x1517A948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1517A94C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1517A950: jr          $ra
    // 0x1517A954: nop

    return;
    return;
    // 0x1517A954: nop

;}

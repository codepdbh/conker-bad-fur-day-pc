#include <stdio.h>
#include <stdbool.h>
#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_150A2CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A2CA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150A2CA8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150A2CAC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150A2CB0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150A2CB4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150A2CB8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150A2CBC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150A2CC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150A2CC4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150A2CC8: lw          $t7, 0x3094($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3094);
    // 0x150A2CCC: andi        $t6, $s1, 0xFFF
    ctx->r14 = ctx->r17 & 0XFFF;
    // 0x150A2CD0: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x150A2CD4: sltu        $at, $t7, $t6
    ctx->r1 = ctx->r15 < ctx->r14 ? 1 : 0;
    // 0x150A2CD8: beq         $at, $zero, L_150A2CE8
    if (ctx->r1 == 0) {
        // 0x150A2CDC: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_150A2CE8;
    }
    // 0x150A2CDC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150A2CE0: b           L_150A2D64
    // 0x150A2CE4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_150A2D64;
    // 0x150A2CE4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150A2CE8:
    // 0x150A2CE8: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x150A2CEC: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x150A2CF0: addiu       $s2, $s2, 0x2138
    ctx->r18 = ADD32(ctx->r18, 0X2138);
    // 0x150A2CF4: addiu       $s3, $s3, 0x30F0
    ctx->r19 = ADD32(ctx->r19, 0X30F0);
    // 0x150A2CF8: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x150A2CFC: lhu         $t8, 0x208($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X208);
L_150A2D00:
    // 0x150A2D00: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150A2D04: sllv        $t0, $t9, $s0
    ctx->r8 = S32(ctx->r25 << (ctx->r16 & 31));
    // 0x150A2D08: and         $t1, $t8, $t0
    ctx->r9 = ctx->r24 & ctx->r8;
    // 0x150A2D0C: beq         $t1, $zero, L_150A2D54
    if (ctx->r9 == 0) {
        // 0x150A2D10: sll         $t2, $s0, 2
        ctx->r10 = S32(ctx->r16 << 2);
            goto L_150A2D54;
    }
    // 0x150A2D10: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x150A2D14: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x150A2D18: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x150A2D1C: srl         $t4, $s1, 6
    ctx->r12 = S32(U32(ctx->r17) >> 6);
    // 0x150A2D20: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x150A2D24: addu        $t3, $s3, $t2
    ctx->r11 = ADD32(ctx->r19, ctx->r10);
    // 0x150A2D28: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x150A2D2C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x150A2D30: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x150A2D34: andi        $a3, $s1, 0x3F
    ctx->r7 = ctx->r17 & 0X3F;
    // 0x150A2D38: jal         0x10026800
    // 0x150A2D3C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    __ull_rshift_recomp(rdram, ctx);
        goto after_0;
    // 0x150A2D3C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x150A2D40: andi        $t9, $v1, 0x1
    ctx->r25 = ctx->r3 & 0X1;
    // 0x150A2D44: beql        $t9, $zero, L_150A2D58
    if (ctx->r25 == 0) {
        // 0x150A2D48: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_150A2D58;
    }
    goto skip_0;
    // 0x150A2D48: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x150A2D4C: b           L_150A2D64
    // 0x150A2D50: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_150A2D64;
    // 0x150A2D50: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_150A2D54:
    // 0x150A2D54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_150A2D58:
    // 0x150A2D58: bnel        $s0, $s4, L_150A2D00
    if (ctx->r16 != ctx->r20) {
        // 0x150A2D5C: lhu         $t8, 0x208($s2)
        ctx->r24 = MEM_HU(ctx->r18, 0X208);
            goto L_150A2D00;
    }
    goto skip_1;
    // 0x150A2D5C: lhu         $t8, 0x208($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X208);
    skip_1:
    // 0x150A2D60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150A2D64:
    // 0x150A2D64: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150A2D68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150A2D6C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150A2D70: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150A2D74: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x150A2D78: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x150A2D7C: jr          $ra
    // 0x150A2D80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x150A2D80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1506B328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B328: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506B32C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506B330: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506B334: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506B338: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506B33C: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x1506B340: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1506B344: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x1506B348: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1506B34C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1506B350: jal         0x1505E650
    // 0x1506B354: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1506B354: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x1506B358: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1506B35C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506B360: jr          $ra
    // 0x1506B364: nop

    return;
    return;
    // 0x1506B364: nop

;}
RECOMP_FUNC void func_1505E7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505E7CC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1505E7D0: lbu         $v0, 0x4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X4);
    // 0x1505E7D4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1505E7D8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1505E7DC: bne         $v0, $at, L_1505E7EC
    if (ctx->r2 != ctx->r1) {
        // 0x1505E7E0: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_1505E7EC;
    }
    // 0x1505E7E0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1505E7E4: jr          $ra
    // 0x1505E7E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1505E7E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1505E7EC:
    // 0x1505E7EC: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x1505E7F0: lw          $v1, 0x1588($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1588);
    // 0x1505E7F4: bnel        $v1, $zero, L_1505E808
    if (ctx->r3 != 0) {
        // 0x1505E7F8: lw          $v0, -0x4($v1)
        ctx->r2 = MEM_W(ctx->r3, -0X4);
            goto L_1505E808;
    }
    goto skip_0;
    // 0x1505E7F8: lw          $v0, -0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X4);
    skip_0:
    // 0x1505E7FC: jr          $ra
    // 0x1505E800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1505E800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1505E804: lw          $v0, -0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X4);
L_1505E808:
    // 0x1505E808: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x1505E80C: bne         $v0, $zero, L_1505E81C
    if (ctx->r2 != 0) {
        // 0x1505E810: nop
    
            goto L_1505E81C;
    }
    // 0x1505E810: nop

    // 0x1505E814: jr          $ra
    // 0x1505E818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1505E818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1505E81C:
    // 0x1505E81C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1505E820: lw          $a0, -0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, -0X8);
    // 0x1505E824: mflo        $v0
    ctx->r2 = lo;
    // 0x1505E828: bne         $a0, $zero, L_1505E838
    if (ctx->r4 != 0) {
        // 0x1505E82C: nop
    
            goto L_1505E838;
    }
    // 0x1505E82C: nop

    // 0x1505E830: jr          $ra
    // 0x1505E834: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1505E834: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1505E838:
    // 0x1505E838: beq         $v0, $zero, L_1505E868
    if (ctx->r2 == 0) {
        // 0x1505E83C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1505E868;
    }
    // 0x1505E83C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1505E840: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_1505E844:
    // 0x1505E844: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x1505E848: bnel        $a2, $t8, L_1505E85C
    if (ctx->r6 != ctx->r24) {
        // 0x1505E84C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_1505E85C;
    }
    goto skip_1;
    // 0x1505E84C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x1505E850: jr          $ra
    // 0x1505E854: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x1505E854: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1505E858: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_1505E85C:
    // 0x1505E85C: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x1505E860: bne         $at, $zero, L_1505E844
    if (ctx->r1 != 0) {
        // 0x1505E864: addiu       $a1, $a1, 0x18
        ctx->r5 = ADD32(ctx->r5, 0X18);
            goto L_1505E844;
    }
    // 0x1505E864: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
L_1505E868:
    // 0x1505E868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1505E86C: jr          $ra
    // 0x1505E870: nop

    return;
    return;
    // 0x1505E870: nop

;}
RECOMP_FUNC void func_151C4820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C4820: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x151C4824: sdc1        $f30, 0xA0($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0XA0, ctx->r29);
    // 0x151C4828: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C482C: sw          $s2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r18;
    // 0x151C4830: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151C4834: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x151C4838: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x151C483C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x151C4840: sw          $ra, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r31;
    // 0x151C4844: sw          $s4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r20;
    // 0x151C4848: sw          $s3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r19;
    // 0x151C484C: sw          $s1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r17;
    // 0x151C4850: sw          $s0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r16;
    // 0x151C4854: sdc1        $f28, 0x98($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X98, ctx->r29);
    // 0x151C4858: sdc1        $f26, 0x90($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X90, ctx->r29);
    // 0x151C485C: sdc1        $f24, 0x88($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X88, ctx->r29);
    // 0x151C4860: sdc1        $f22, 0x80($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X80, ctx->r29);
    // 0x151C4864: sdc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X78, ctx->r29);
    // 0x151C4868: lwc1        $f4, 0x4C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x151C486C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151C4870: lwc1        $f10, 0x50($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X50);
    // 0x151C4874: addiu       $s0, $s2, 0x28
    ctx->r16 = ADD32(ctx->r18, 0X28);
    // 0x151C4878: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151C487C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151C4880: swc1        $f16, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f16.u32l;
    // 0x151C4884: lwc1        $f18, 0x50($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X50);
    // 0x151C4888: c.lt.s      $f30, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f30.fl < ctx->f18.fl;
    // 0x151C488C: nop

    // 0x151C4890: bc1fl       L_151C4A7C
    if (!c1cs) {
        // 0x151C4894: lw          $ra, 0xBC($sp)
        ctx->r31 = MEM_W(ctx->r29, 0XBC);
            goto L_151C4A7C;
    }
    goto skip_0;
    // 0x151C4894: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
    skip_0:
    // 0x151C4898: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151C489C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151C48A0: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x151C48A4: div.s       $f2, $f30, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f30.fl, ctx->f4.fl);
    // 0x151C48A8: addiu       $s3, $s0, 0x2C
    ctx->r19 = ADD32(ctx->r16, 0X2C);
    // 0x151C48AC: addiu       $s4, $zero, 0x38
    ctx->r20 = ADD32(0, 0X38);
    // 0x151C48B0: addiu       $s1, $sp, 0xF4
    ctx->r17 = ADD32(ctx->r29, 0XF4);
    // 0x151C48B4: add.s       $f24, $f6, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x151C48B8: mul.s       $f10, $f24, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x151C48BC: swc1        $f10, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f10.u32l;
    // 0x151C48C0: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151C48C4: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151C48C8: lwc1        $f26, 0x10($s0)
    ctx->f26.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151C48CC: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151C48D0: lwc1        $f28, 0x14($s0)
    ctx->f28.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151C48D4: mul.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151C48D8: nop

    // 0x151C48DC: mul.s       $f18, $f12, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x151C48E0: nop

    // 0x151C48E4: mul.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x151C48E8: swc1        $f18, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f18.u32l;
    // 0x151C48EC: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
L_151C48F0:
    // 0x151C48F0: jal         0x15047D60
    // 0x151C48F4: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x151C48F4: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_0:
    // 0x151C48F8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x151C48FC: jal         0x15047D60
    // 0x151C4900: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x151C4900: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    after_1:
    // 0x151C4904: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151C4908: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151C490C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151C4910: mul.s       $f8, $f20, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x151C4914: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151C4918: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x151C491C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151C4920: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x151C4924: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C4928: jal         0x151436B4
    // 0x151C492C: add.s       $f14, $f16, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f4.fl;
    func_151436B4(rdram, ctx);
        goto after_2;
    // 0x151C492C: add.s       $f14, $f16, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f4.fl;
    after_2:
    // 0x151C4930: jal         0x150ADA68
    // 0x151C4934: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151C4934: nop

    after_3:
    // 0x151C4938: jal         0x150ADA68
    // 0x151C493C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151C493C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x151C4940: jal         0x150ADA20
    // 0x151C4944: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151C4944: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_5:
    // 0x151C4948: divu        $zero, $v0, $s4
    lo = S32(U32(ctx->r2) / U32(ctx->r20)); hi = S32(U32(ctx->r2) % U32(ctx->r20));
    // 0x151C494C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151C4950: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151C4954: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151C4958: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x151C495C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C4960: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x151C4964: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151C4968: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x151C496C: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151C4970: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151C4974: mul.s       $f18, $f20, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x151C4978: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151C497C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x151C4980: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x151C4984: mul.s       $f6, $f22, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x151C4988: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C498C: mfhi        $t6
    ctx->r14 = hi;
    // 0x151C4990: addiu       $t7, $t6, 0xC8
    ctx->r15 = ADD32(ctx->r14, 0XC8);
    // 0x151C4994: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151C4998: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x151C499C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C49A0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x151C49A4: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C49A8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x151C49AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151C49B0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151C49B4: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x151C49B8: lwc1        $f16, 0x40($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151C49BC: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x151C49C0: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x151C49C4: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x151C49C8: swc1        $f24, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f24.u32l;
    // 0x151C49CC: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x151C49D0: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x151C49D4: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x151C49D8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x151C49DC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x151C49E0: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x151C49E4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x151C49E8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151C49EC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x151C49F0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x151C49F4: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x151C49F8: lbu         $t1, 0xC($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0XC);
    // 0x151C49FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151C4A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151C4A04: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x151C4A08: lbu         $t2, 0x1($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X1);
    // 0x151C4A0C: bne         $s4, $zero, L_151C4A18
    if (ctx->r20 != 0) {
        // 0x151C4A10: nop
    
            goto L_151C4A18;
    }
    // 0x151C4A10: nop

    // 0x151C4A14: break       7
    do_break(354175508);
L_151C4A18:
    // 0x151C4A18: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x151C4A1C: jal         0x151C229C
    // 0x151C4A20: nop

    func_151C229C(rdram, ctx);
        goto after_6;
    // 0x151C4A20: nop

    after_6:
    // 0x151C4A24: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151C4A28: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151C4A2C: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151C4A30: sub.s       $f18, $f8, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f30.fl;
    // 0x151C4A34: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x151C4A38: add.s       $f26, $f26, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f4.fl;
    // 0x151C4A3C: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
    // 0x151C4A40: add.s       $f28, $f28, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f28.fl + ctx->f10.fl;
    // 0x151C4A44: sub.s       $f24, $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f24.fl - ctx->f6.fl;
    // 0x151C4A48: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151C4A4C: c.lt.s      $f30, $f16
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f30.fl < ctx->f16.fl;
    // 0x151C4A50: nop

    // 0x151C4A54: bc1t        L_151C48F0
    if (c1cs) {
        // 0x151C4A58: nop
    
            goto L_151C48F0;
    }
    // 0x151C4A58: nop

    // 0x151C4A5C: jal         0x15144B68
    // 0x151C4A60: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    func_15144B68(rdram, ctx);
        goto after_7;
    // 0x151C4A60: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_7:
    // 0x151C4A64: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x151C4A68: jal         0x15144B68
    // 0x151C4A6C: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    func_15144B68(rdram, ctx);
        goto after_8;
    // 0x151C4A6C: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    after_8:
    // 0x151C4A70: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x151C4A74: swc1        $f24, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f24.u32l;
    // 0x151C4A78: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
L_151C4A7C:
    // 0x151C4A7C: ldc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X78);
    // 0x151C4A80: ldc1        $f22, 0x80($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X80);
    // 0x151C4A84: ldc1        $f24, 0x88($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X88);
    // 0x151C4A88: ldc1        $f26, 0x90($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X90);
    // 0x151C4A8C: ldc1        $f28, 0x98($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X98);
    // 0x151C4A90: ldc1        $f30, 0xA0($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0XA0);
    // 0x151C4A94: lw          $s0, 0xA8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA8);
    // 0x151C4A98: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x151C4A9C: lw          $s2, 0xB0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB0);
    // 0x151C4AA0: lw          $s3, 0xB4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XB4);
    // 0x151C4AA4: lw          $s4, 0xB8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB8);
    // 0x151C4AA8: jr          $ra
    // 0x151C4AAC: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    return;
    // 0x151C4AAC: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void func_1507EABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507EABC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1507EAC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1507EAC4: lbu         $a1, 0x70($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X70);
    // 0x1507EAC8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x1507EACC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1507EAD0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1507EAD4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x1507EAD8: jal         0x1507E7E4
    // 0x1507EADC: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    func_1507E7E4(rdram, ctx);
        goto after_0;
    // 0x1507EADC: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    after_0:
    // 0x1507EAE0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1507EAE4: lbu         $t7, 0x6C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X6C);
    // 0x1507EAE8: sb          $zero, 0x71($a0)
    MEM_B(0X71, ctx->r4) = 0;
    // 0x1507EAEC: sh          $zero, 0x72($a0)
    MEM_H(0X72, ctx->r4) = 0;
    // 0x1507EAF0: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x1507EAF4: bnel        $at, $zero, L_1507EB08
    if (ctx->r1 != 0) {
        // 0x1507EAF8: lbu         $t8, 0x6D($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X6D);
            goto L_1507EB08;
    }
    goto skip_0;
    // 0x1507EAF8: lbu         $t8, 0x6D($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X6D);
    skip_0:
    // 0x1507EAFC: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x1507EB00: sb          $zero, 0x6A($a0)
    MEM_B(0X6A, ctx->r4) = 0;
    // 0x1507EB04: lbu         $t8, 0x6D($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X6D);
L_1507EB08:
    // 0x1507EB08: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x1507EB0C: bnel        $at, $zero, L_1507EB20
    if (ctx->r1 != 0) {
        // 0x1507EB10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1507EB20;
    }
    goto skip_1;
    // 0x1507EB10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x1507EB14: sb          $zero, 0x6D($a0)
    MEM_B(0X6D, ctx->r4) = 0;
    // 0x1507EB18: sb          $zero, 0x6B($a0)
    MEM_B(0X6B, ctx->r4) = 0;
    // 0x1507EB1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1507EB20:
    // 0x1507EB20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1507EB24: jr          $ra
    // 0x1507EB28: nop

    return;
    return;
    // 0x1507EB28: nop

;}
RECOMP_FUNC void func_1517B7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517B7A8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x1517B7AC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x1517B7B0: slti        $at, $v0, 0x300
    ctx->r1 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x1517B7B4: bne         $at, $zero, L_1517B7D4
    if (ctx->r1 != 0) {
        // 0x1517B7B8: slti        $at, $v0, 0x501
        ctx->r1 = SIGNED(ctx->r2) < 0X501 ? 1 : 0;
            goto L_1517B7D4;
    }
    // 0x1517B7B8: slti        $at, $v0, 0x501
    ctx->r1 = SIGNED(ctx->r2) < 0X501 ? 1 : 0;
    // 0x1517B7BC: bne         $at, $zero, L_1517B7D0
    if (ctx->r1 != 0) {
        // 0x1517B7C0: addiu       $t7, $zero, 0x300
        ctx->r15 = ADD32(0, 0X300);
            goto L_1517B7D0;
    }
    // 0x1517B7C0: addiu       $t7, $zero, 0x300
    ctx->r15 = ADD32(0, 0X300);
    // 0x1517B7C4: addiu       $t6, $v0, -0x200
    ctx->r14 = ADD32(ctx->r2, -0X200);
    // 0x1517B7C8: b           L_1517B7D4
    // 0x1517B7CC: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
        goto L_1517B7D4;
    // 0x1517B7CC: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
L_1517B7D0:
    // 0x1517B7D0: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
L_1517B7D4:
    // 0x1517B7D4: lh          $t8, 0x0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X0);
    // 0x1517B7D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1517B7DC: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x1517B7E0: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x1517B7E4: sh          $t9, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r25;
    // 0x1517B7E8: lh          $t0, 0x4($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X4);
    // 0x1517B7EC: sh          $t0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r8;
    // 0x1517B7F0: jr          $ra
    // 0x1517B7F4: nop

    return;
    return;
    // 0x1517B7F4: nop

;}
RECOMP_FUNC void func_151494E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151494E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151494E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151494E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151494EC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151494F0: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x151494F4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x151494F8: addiu       $a0, $a0, 0x5770
    ctx->r4 = ADD32(ctx->r4, 0X5770);
    // 0x151494FC: jal         0x15169260
    // 0x15149500: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_15169260(rdram, ctx);
        goto after_0;
    // 0x15149500: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x15149504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15149508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514950C: jr          $ra
    // 0x15149510: nop

    return;
    return;
    // 0x15149510: nop

;}
RECOMP_FUNC void func_10004074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // Safety net: the free-list tree walk below (L_100041C0) has no bound
    // other than reaching a null child pointer. If the tree was corrupted by
    // an earlier bug (this heap's block headers live right next to whatever
    // else got overwritten by out-of-range writes elsewhere in this port),
    // that null may never be reached, hanging this thread forever with no
    // crash. Bail out to this function's own existing no-op return path
    // rather than keep mutating a tree we no longer trust.
    uint32_t freeTreeWalkGuard = 0;
    // 0x10004074: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x10004078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000407C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x10004080: beq         $a2, $zero, L_10004240
    if (ctx->r6 == 0) {
        // 0x10004084: addiu       $v1, $a2, -0xC
        ctx->r3 = ADD32(ctx->r6, -0XC);
            goto L_10004240;
    }
    // 0x10004084: addiu       $v1, $a2, -0xC
    ctx->r3 = ADD32(ctx->r6, -0XC);
    // 0x10004088: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1000408C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x10004090: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x10004094: jal         0x10024880
    // 0x10004098: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x10004098: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_0:
    // 0x1000409C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x100040A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x100040A4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x100040A8: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x100040AC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x100040B0: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x100040B4: beql        $a0, $zero, L_100040F8
    if (ctx->r4 == 0) {
        // 0x100040B8: lw          $a0, 0x0($a1)
        ctx->r4 = MEM_W(ctx->r5, 0X0);
            goto L_100040F8;
    }
    goto skip_0;
    // 0x100040B8: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    skip_0:
    // 0x100040BC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x100040C0: srl         $t6, $v0, 24
    ctx->r14 = S32(U32(ctx->r2) >> 24);
    // 0x100040C4: bnel        $t6, $zero, L_100040F8
    if (ctx->r14 != 0) {
        // 0x100040C8: lw          $a0, 0x0($a1)
        ctx->r4 = MEM_W(ctx->r5, 0X0);
            goto L_100040F8;
    }
    goto skip_1;
    // 0x100040C8: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    skip_1:
    // 0x100040CC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x100040D0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x100040D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x100040D8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x100040DC: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x100040E0: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x100040E4: addiu       $t0, $t9, 0xC
    ctx->r8 = ADD32(ctx->r25, 0XC);
    // 0x100040E8: beq         $t7, $zero, L_100040F4
    if (ctx->r15 == 0) {
        // 0x100040EC: sw          $t0, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r8;
            goto L_100040F4;
    }
    // 0x100040EC: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x100040F0: sw          $a0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r4;
L_100040F4:
    // 0x100040F4: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
L_100040F8:
    // 0x100040F8: beq         $a0, $zero, L_1000417C
    if (ctx->r4 == 0) {
        // 0x100040FC: nop
    
            goto L_1000417C;
    }
    // 0x100040FC: nop

    // 0x10004100: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x10004104: srl         $t2, $t1, 24
    ctx->r10 = S32(U32(ctx->r9) >> 24);
    // 0x10004108: bne         $t2, $zero, L_1000417C
    if (ctx->r10 != 0) {
        // 0x1000410C: nop
    
            goto L_1000417C;
    }
    // 0x1000410C: nop

    // 0x10004110: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x10004114: lw          $t4, 0x8($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X8);
    // 0x10004118: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000411C: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x10004120: lw          $t5, 0x8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X8);
    // 0x10004124: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x10004128: addiu       $v0, $v0, -0x7F48
    ctx->r2 = ADD32(ctx->r2, -0X7F48);
    // 0x1000412C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x10004130: addiu       $t7, $t6, 0xC
    ctx->r15 = ADD32(ctx->r14, 0XC);
    // 0x10004134: beq         $t3, $zero, L_10004140
    if (ctx->r11 == 0) {
        // 0x10004138: sw          $t7, 0x8($a1)
        MEM_W(0X8, ctx->r5) = ctx->r15;
            goto L_10004140;
    }
    // 0x10004138: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
    // 0x1000413C: sw          $a1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r5;
L_10004140:
    // 0x10004140: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x10004144: beq         $t8, $zero, L_10004150
    if (ctx->r24 == 0) {
        // 0x10004148: sw          $t8, 0xC($a1)
        MEM_W(0XC, ctx->r5) = ctx->r24;
            goto L_10004150;
    }
    // 0x10004148: sw          $t8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r24;
    // 0x1000414C: sw          $a1, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r5;
L_10004150:
    // 0x10004150: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x10004154: bne         $v1, $zero, L_10004168
    if (ctx->r3 != 0) {
        // 0x10004158: nop
    
            goto L_10004168;
    }
    // 0x10004158: nop

    // 0x1000415C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x10004160: b           L_1000417C
    // 0x10004164: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
        goto L_1000417C;
    // 0x10004164: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
L_10004168:
    // 0x10004168: beq         $v1, $a1, L_1000417C
    if (ctx->r3 == ctx->r5) {
        // 0x1000416C: nop
    
            goto L_1000417C;
    }
    // 0x1000416C: nop

    // 0x10004170: beq         $v1, $zero, L_1000417C
    if (ctx->r3 == 0) {
        // 0x10004174: sw          $v1, 0x10($a1)
        MEM_W(0X10, ctx->r5) = ctx->r3;
            goto L_1000417C;
    }
    // 0x10004174: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    // 0x10004178: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
L_1000417C:
    // 0x1000417C: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x10004180: bne         $a3, $zero, L_10004200
    if (ctx->r7 != 0) {
        // 0x10004184: addiu       $v0, $v0, -0x7F48
        ctx->r2 = ADD32(ctx->r2, -0X7F48);
            goto L_10004200;
    }
    // 0x10004184: addiu       $v0, $v0, -0x7F48
    ctx->r2 = ADD32(ctx->r2, -0X7F48);
    // 0x10004188: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x1000418C: bne         $v1, $zero, L_100041A4
    if (ctx->r3 != 0) {
        // 0x10004190: sltu        $at, $a1, $v1
        ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
            goto L_100041A4;
    }
    // 0x10004190: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x10004194: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x10004198: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
    // 0x1000419C: b           L_10004200
    // 0x100041A0: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
        goto L_10004200;
    // 0x100041A0: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_100041A4:
    // 0x100041A4: beql        $at, $zero, L_100041C4
    if (ctx->r1 == 0) {
        // 0x100041A8: lw          $v0, 0xC($v1)
        ctx->r2 = MEM_W(ctx->r3, 0XC);
            goto L_100041C4;
    }
    goto skip_2;
    // 0x100041A8: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    skip_2:
    // 0x100041AC: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x100041B0: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
    // 0x100041B4: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
    // 0x100041B8: b           L_10004200
    // 0x100041BC: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
        goto L_10004200;
    // 0x100041BC: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_100041C0:
    freeTreeWalkGuard++;
    if (freeTreeWalkGuard >= 10000) {
        static bool warnedAboutRunawayTreeWalk = false;
        if (!warnedAboutRunawayTreeWalk) {
            fprintf(stderr, "[Conker Warning] func_10004074: free-list tree walk exceeded 10000 steps (likely a corrupted/cyclic tree), abandoning this free() to avoid hanging.\n");
            fflush(stderr);
            warnedAboutRunawayTreeWalk = true;
        }
        goto L_10004240;
    }
    // 0x100041C0: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
L_100041C4:
    // 0x100041C4: bne         $v0, $zero, L_100041DC
    if (ctx->r2 != 0) {
        // 0x100041C8: sltu        $at, $a1, $v0
        ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
            goto L_100041DC;
    }
    // 0x100041C8: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x100041CC: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x100041D0: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    // 0x100041D4: b           L_10004200
    // 0x100041D8: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
        goto L_10004200;
    // 0x100041D8: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
L_100041DC:
    // 0x100041DC: beq         $at, $zero, L_100041F8
    if (ctx->r1 == 0) {
        // 0x100041E0: nop
    
            goto L_100041F8;
    }
    // 0x100041E0: nop

    // 0x100041E4: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x100041E8: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    // 0x100041EC: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x100041F0: b           L_10004200
    // 0x100041F4: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
        goto L_10004200;
    // 0x100041F4: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
L_100041F8:
    // 0x100041F8: b           L_100041C0
    // 0x100041FC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_100041C0;
    // 0x100041FC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_10004200:
    // 0x10004200: lw          $t1, 0xC($a1)
    ctx->r9 = MEM_W(ctx->r5, 0XC);
    // 0x10004204: lui         $v1, 0x8003
    ctx->r3 = S32(0X8003 << 16);
    // 0x10004208: addiu       $v1, $v1, -0x53D0
    ctx->r3 = ADD32(ctx->r3, -0X53D0);
    // 0x1000420C: bne         $t1, $zero, L_10004218
    if (ctx->r9 != 0) {
        // 0x10004210: lui         $at, 0x8004
        ctx->r1 = S32(0X8004 << 16);
            goto L_10004218;
    }
    // 0x10004210: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10004214: sw          $a1, -0x7F44($at)
    MEM_W(-0X7F44, ctx->r1) = ctx->r5;
L_10004218:
    // 0x10004218: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x1000421C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x10004220: sltu        $at, $t2, $v0
    ctx->r1 = ctx->r10 < ctx->r2 ? 1 : 0;
    // 0x10004224: beq         $at, $zero, L_10004238
    if (ctx->r1 == 0) {
        // 0x10004228: nop
    
            goto L_10004238;
    }
    // 0x10004228: nop

    // 0x1000422C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x10004230: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10004234: sw          $a1, -0x7F50($at)
    MEM_W(-0X7F50, ctx->r1) = ctx->r5;
L_10004238:
    // 0x10004238: jal         0x10024880
    // 0x1000423C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x1000423C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_10004240:
    // 0x10004240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10004244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x10004248: jr          $ra
    // 0x1000424C: nop

    return;
    return;
    // 0x1000424C: nop

;}
RECOMP_FUNC void func_1500C2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500C2F0: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x1500C2F4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1500C2F8: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x1500C2FC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x1500C300: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x1500C304: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x1500C308: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x1500C30C: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x1500C310: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x1500C314: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x1500C318: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x1500C31C: sw          $a0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r4;
    // 0x1500C320: jal         0x1514462C
    // 0x1500C324: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    func_1514462C(rdram, ctx);
        goto after_0;
    // 0x1500C324: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    after_0:
    // 0x1500C328: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1500C32C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1500C330: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1500C334: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500C338: lwc1        $f6, 0x6120($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6120);
    // 0x1500C33C: addiu       $t6, $zero, 0x5D40
    ctx->r14 = ADD32(0, 0X5D40);
    // 0x1500C340: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x1500C344: mul.s       $f30, $f4, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1500C348: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1500C34C: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x1500C350: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1500C354: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1500C358: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1500C35C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1500C360: c.lt.s      $f26, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f26.fl < ctx->f30.fl;
    // 0x1500C364: addiu       $s1, $sp, 0x74
    ctx->r17 = ADD32(ctx->r29, 0X74);
    // 0x1500C368: bc1fl       L_1500C8A8
    if (!c1cs) {
        // 0x1500C36C: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_1500C8A8;
    }
    goto skip_0;
    // 0x1500C36C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x1500C370: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1500C374: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1500C378: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1500C37C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1500C380: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500C384: swc1        $f26, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f26.u32l;
    // 0x1500C388: swc1        $f26, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f26.u32l;
    // 0x1500C38C: swc1        $f26, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f26.u32l;
    // 0x1500C390: swc1        $f26, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f26.u32l;
    // 0x1500C394: swc1        $f26, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f26.u32l;
    // 0x1500C398: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x1500C39C: sh          $t7, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r15;
    // 0x1500C3A0: sb          $zero, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = 0;
    // 0x1500C3A4: sb          $t8, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r24;
    // 0x1500C3A8: sb          $t9, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = ctx->r25;
    // 0x1500C3AC: sb          $zero, 0xF6($sp)
    MEM_B(0XF6, ctx->r29) = 0;
    // 0x1500C3B0: sb          $zero, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = 0;
    // 0x1500C3B4: sb          $zero, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = 0;
    // 0x1500C3B8: sb          $zero, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = 0;
    // 0x1500C3BC: sb          $zero, 0xFA($sp)
    MEM_B(0XFA, ctx->r29) = 0;
    // 0x1500C3C0: sb          $zero, 0xFB($sp)
    MEM_B(0XFB, ctx->r29) = 0;
    // 0x1500C3C4: sb          $t0, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r8;
    // 0x1500C3C8: sb          $zero, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = 0;
    // 0x1500C3CC: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x1500C3D0: sb          $zero, 0x104($sp)
    MEM_B(0X104, ctx->r29) = 0;
    // 0x1500C3D4: sh          $t1, 0x106($sp)
    MEM_H(0X106, ctx->r29) = ctx->r9;
    // 0x1500C3D8: sh          $t2, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r10;
    // 0x1500C3DC: lwc1        $f22, 0x6124($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6124);
    // 0x1500C3E0: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
L_1500C3E4:
    // 0x1500C3E4: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x1500C3E8: addiu       $t3, $t3, 0x60F0
    ctx->r11 = ADD32(ctx->r11, 0X60F0);
    // 0x1500C3EC: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x1500C3F0: addiu       $t7, $sp, 0x8C
    ctx->r15 = ADD32(ctx->r29, 0X8C);
    // 0x1500C3F4: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x1500C3F8: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x1500C3FC: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x1500C400: addiu       $a2, $sp, 0xC4
    ctx->r6 = ADD32(ctx->r29, 0XC4);
    // 0x1500C404: addiu       $a3, $sp, 0x90
    ctx->r7 = ADD32(ctx->r29, 0X90);
    // 0x1500C408: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
    // 0x1500C40C: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x1500C410: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    // 0x1500C414: lw          $t6, 0xC($t3)
    ctx->r14 = MEM_W(ctx->r11, 0XC);
    // 0x1500C418: sw          $t6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r14;
    // 0x1500C41C: lhu         $at, 0x10($t3)
    ctx->r1 = MEM_HU(ctx->r11, 0X10);
    // 0x1500C420: sh          $at, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r1;
    // 0x1500C424: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1500C428: jal         0x15008340
    // 0x1500C42C: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    func_15008340(rdram, ctx);
        goto after_1;
    // 0x1500C42C: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    after_1:
    // 0x1500C430: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1500C434: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x1500C438: jal         0x10024770
    // 0x1500C43C: sub.s       $f20, $f10, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f14.fl;
    osGetCount_recomp(rdram, ctx);
        goto after_2;
    // 0x1500C43C: sub.s       $f20, $f10, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f14.fl;
    after_2:
    // 0x1500C440: jal         0x150ADA20
    // 0x1500C444: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1500C444: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_3:
    // 0x1500C448: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500C44C: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1500C450: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500C454: mflo        $t8
    ctx->r24 = lo;
    // 0x1500C458: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x1500C45C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x1500C460: bgez        $t9, L_1500C474
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1500C464: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1500C474;
    }
    // 0x1500C464: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1500C468: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500C46C: nop

    // 0x1500C470: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_1500C474:
    // 0x1500C474: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1500C478: mul.s       $f6, $f18, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x1500C47C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500C480: nop

    // 0x1500C484: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x1500C488: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x1500C48C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1500C490: nop

    // 0x1500C494: mul.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x1500C498: add.s       $f18, $f14, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x1500C49C: add.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1500C4A0: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    // 0x1500C4A4: sub.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x1500C4A8: abs.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = fabsf(ctx->f0.fl);
    // 0x1500C4AC: sub.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x1500C4B0: swc1        $f2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
    // 0x1500C4B4: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1500C4B8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x1500C4BC: nop

    // 0x1500C4C0: bc1fl       L_1500C4D4
    if (!c1cs) {
        // 0x1500C4C4: mov.s       $f20, $f12
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
            goto L_1500C4D4;
    }
    goto skip_1;
    // 0x1500C4C4: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    skip_1:
    // 0x1500C4C8: b           L_1500C4D4
    // 0x1500C4CC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_1500C4D4;
    // 0x1500C4CC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1500C4D0: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
L_1500C4D4:
    // 0x1500C4D4: jal         0x10024770
    // 0x1500C4D8: nop

    osGetCount_recomp(rdram, ctx);
        goto after_4;
    // 0x1500C4D8: nop

    after_4:
    // 0x1500C4DC: jal         0x150ADA20
    // 0x1500C4E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1500C4E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_5:
    // 0x1500C4E4: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500C4E8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500C4EC: mflo        $t0
    ctx->r8 = lo;
    // 0x1500C4F0: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x1500C4F4: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x1500C4F8: bgez        $t1, L_1500C50C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1500C4FC: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1500C50C;
    }
    // 0x1500C4FC: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500C500: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500C504: nop

    // 0x1500C508: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_1500C50C:
    // 0x1500C50C: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1500C510: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x1500C514: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1500C518: nop

    // 0x1500C51C: mul.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1500C520: add.s       $f6, $f8, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f24.fl;
    // 0x1500C524: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x1500C528: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x1500C52C: jal         0x10024770
    // 0x1500C530: nop

    osGetCount_recomp(rdram, ctx);
        goto after_6;
    // 0x1500C530: nop

    after_6:
    // 0x1500C534: jal         0x150ADA20
    // 0x1500C538: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1500C538: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_7:
    // 0x1500C53C: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500C540: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500C544: mflo        $t2
    ctx->r10 = lo;
    // 0x1500C548: andi        $t5, $t2, 0xFFFF
    ctx->r13 = ctx->r10 & 0XFFFF;
    // 0x1500C54C: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x1500C550: bgez        $t5, L_1500C564
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1500C554: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1500C564;
    }
    // 0x1500C554: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500C558: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1500C55C: nop

    // 0x1500C560: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_1500C564:
    // 0x1500C564: mul.s       $f0, $f16, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x1500C568: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500C56C: lwc1        $f6, 0x6128($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6128);
    // 0x1500C570: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x1500C574: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1500C578: jal         0x10024770
    // 0x1500C57C: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_8;
    // 0x1500C57C: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x1500C580: jal         0x150ADA20
    // 0x1500C584: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x1500C584: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_9:
    // 0x1500C588: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500C58C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500C590: mflo        $t4
    ctx->r12 = lo;
    // 0x1500C594: andi        $t3, $t4, 0xFFFF
    ctx->r11 = ctx->r12 & 0XFFFF;
    // 0x1500C598: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x1500C59C: bgez        $t3, L_1500C5B0
    if (SIGNED(ctx->r11) >= 0) {
        // 0x1500C5A0: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1500C5B0;
    }
    // 0x1500C5A0: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500C5A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1500C5A8: nop

    // 0x1500C5AC: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
L_1500C5B0:
    // 0x1500C5B0: mul.s       $f8, $f18, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x1500C5B4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500C5B8: lwc1        $f6, 0x612C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X612C);
    // 0x1500C5BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500C5C0: lwc1        $f10, 0x6130($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6130);
    // 0x1500C5C4: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1500C5C8: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1500C5CC: jal         0x10024770
    // 0x1500C5D0: swc1        $f16, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f16.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_10;
    // 0x1500C5D0: swc1        $f16, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x1500C5D4: jal         0x150ADA20
    // 0x1500C5D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x1500C5D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_11:
    // 0x1500C5DC: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500C5E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500C5E4: mflo        $t6
    ctx->r14 = lo;
    // 0x1500C5E8: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x1500C5EC: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x1500C5F0: bgez        $t7, L_1500C604
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1500C5F4: cvt.s.w     $f8, $f18
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
            goto L_1500C604;
    }
    // 0x1500C5F4: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1500C5F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500C5FC: nop

    // 0x1500C600: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_1500C604:
    // 0x1500C604: mul.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x1500C608: nop

    // 0x1500C60C: mul.s       $f10, $f4, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x1500C610: jal         0x10024770
    // 0x1500C614: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_12;
    // 0x1500C614: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x1500C618: jal         0x150ADA20
    // 0x1500C61C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x1500C61C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_13:
    // 0x1500C620: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500C624: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500C628: mflo        $t8
    ctx->r24 = lo;
    // 0x1500C62C: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x1500C630: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x1500C634: bgez        $t9, L_1500C648
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1500C638: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1500C648;
    }
    // 0x1500C638: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1500C63C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500C640: nop

    // 0x1500C644: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
L_1500C648:
    // 0x1500C648: mul.s       $f8, $f18, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x1500C64C: nop

    // 0x1500C650: mul.s       $f4, $f8, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x1500C654: jal         0x10024770
    // 0x1500C658: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_14;
    // 0x1500C658: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x1500C65C: jal         0x150ADA20
    // 0x1500C660: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x1500C660: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_15:
    // 0x1500C664: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500C668: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500C66C: mflo        $t0
    ctx->r8 = lo;
    // 0x1500C670: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x1500C674: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1500C678: bgez        $t1, L_1500C68C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1500C67C: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1500C68C;
    }
    // 0x1500C67C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500C680: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500C684: nop

    // 0x1500C688: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_1500C68C:
    // 0x1500C68C: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x1500C690: nop

    // 0x1500C694: mul.s       $f8, $f18, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x1500C698: jal         0x10024770
    // 0x1500C69C: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_16;
    // 0x1500C69C: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x1500C6A0: jal         0x150ADA20
    // 0x1500C6A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x1500C6A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_17:
    // 0x1500C6A8: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500C6AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500C6B0: mflo        $t2
    ctx->r10 = lo;
    // 0x1500C6B4: andi        $t5, $t2, 0xFFFF
    ctx->r13 = ctx->r10 & 0XFFFF;
    // 0x1500C6B8: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1500C6BC: bgez        $t5, L_1500C6D0
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1500C6C0: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1500C6D0;
    }
    // 0x1500C6C0: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500C6C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500C6C8: nop

    // 0x1500C6CC: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_1500C6D0:
    // 0x1500C6D0: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1500C6D4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500C6D8: lwc1        $f18, 0x6134($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6134);
    // 0x1500C6DC: mul.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1500C6E0: jal         0x10024770
    // 0x1500C6E4: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_18;
    // 0x1500C6E4: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    after_18:
    // 0x1500C6E8: jal         0x150ADA20
    // 0x1500C6EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_19;
    // 0x1500C6EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_19:
    // 0x1500C6F0: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500C6F4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500C6F8: mflo        $t4
    ctx->r12 = lo;
    // 0x1500C6FC: andi        $t3, $t4, 0xFFFF
    ctx->r11 = ctx->r12 & 0XFFFF;
    // 0x1500C700: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1500C704: bgez        $t3, L_1500C718
    if (SIGNED(ctx->r11) >= 0) {
        // 0x1500C708: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1500C718;
    }
    // 0x1500C708: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500C70C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1500C710: nop

    // 0x1500C714: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_1500C718:
    // 0x1500C718: mul.s       $f16, $f6, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x1500C71C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500C720: lwc1        $f18, 0x6138($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6138);
    // 0x1500C724: mul.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1500C728: jal         0x10024770
    // 0x1500C72C: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_20;
    // 0x1500C72C: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    after_20:
    // 0x1500C730: jal         0x150ADA20
    // 0x1500C734: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_21;
    // 0x1500C734: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_21:
    // 0x1500C738: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500C73C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1500C740: mflo        $t6
    ctx->r14 = lo;
    // 0x1500C744: nop

    // 0x1500C748: nop

    // 0x1500C74C: divu        $zero, $t6, $at
    lo = S32(U32(ctx->r14) / U32(ctx->r1)); hi = S32(U32(ctx->r14) % U32(ctx->r1));
    // 0x1500C750: mfhi        $t7
    ctx->r15 = hi;
    // 0x1500C754: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x1500C758: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x1500C75C: lhu         $a0, 0x0($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X0);
    // 0x1500C760: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x1500C764: beq         $a0, $at, L_1500C798
    if (ctx->r4 == ctx->r1) {
        // 0x1500C768: sh          $a0, 0xEA($sp)
        MEM_H(0XEA, ctx->r29) = ctx->r4;
            goto L_1500C798;
    }
    // 0x1500C768: sh          $a0, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = ctx->r4;
    // 0x1500C76C: addiu       $at, $zero, 0x48
    ctx->r1 = ADD32(0, 0X48);
    // 0x1500C770: beq         $a0, $at, L_1500C798
    if (ctx->r4 == ctx->r1) {
        // 0x1500C774: addiu       $at, $zero, 0x4E
        ctx->r1 = ADD32(0, 0X4E);
            goto L_1500C798;
    }
    // 0x1500C774: addiu       $at, $zero, 0x4E
    ctx->r1 = ADD32(0, 0X4E);
    // 0x1500C778: beq         $a0, $at, L_1500C798
    if (ctx->r4 == ctx->r1) {
        // 0x1500C77C: addiu       $at, $zero, 0x4F
        ctx->r1 = ADD32(0, 0X4F);
            goto L_1500C798;
    }
    // 0x1500C77C: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    // 0x1500C780: beq         $a0, $at, L_1500C798
    if (ctx->r4 == ctx->r1) {
        // 0x1500C784: addiu       $at, $zero, 0x50
        ctx->r1 = ADD32(0, 0X50);
            goto L_1500C798;
    }
    // 0x1500C784: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x1500C788: beq         $a0, $at, L_1500C798
    if (ctx->r4 == ctx->r1) {
        // 0x1500C78C: addiu       $at, $zero, 0x51
        ctx->r1 = ADD32(0, 0X51);
            goto L_1500C798;
    }
    // 0x1500C78C: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x1500C790: bne         $a0, $at, L_1500C7F0
    if (ctx->r4 != ctx->r1) {
        // 0x1500C794: nop
    
            goto L_1500C7F0;
    }
    // 0x1500C794: nop

L_1500C798:
    // 0x1500C798: jal         0x10024770
    // 0x1500C79C: nop

    osGetCount_recomp(rdram, ctx);
        goto after_22;
    // 0x1500C79C: nop

    after_22:
    // 0x1500C7A0: jal         0x150ADA20
    // 0x1500C7A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_23;
    // 0x1500C7A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_23:
    // 0x1500C7A8: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500C7AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500C7B0: mflo        $t0
    ctx->r8 = lo;
    // 0x1500C7B4: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x1500C7B8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x1500C7BC: bgez        $t1, L_1500C7D0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1500C7C0: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1500C7D0;
    }
    // 0x1500C7C0: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500C7C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500C7C8: nop

    // 0x1500C7CC: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_1500C7D0:
    // 0x1500C7D0: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1500C7D4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1500C7D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500C7DC: mul.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x1500C7E0: add.s       $f0, $f18, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x1500C7E4: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x1500C7E8: b           L_1500C840
    // 0x1500C7EC: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
        goto L_1500C840;
    // 0x1500C7EC: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
L_1500C7F0:
    // 0x1500C7F0: jal         0x10024770
    // 0x1500C7F4: nop

    osGetCount_recomp(rdram, ctx);
        goto after_24;
    // 0x1500C7F4: nop

    after_24:
    // 0x1500C7F8: jal         0x150ADA20
    // 0x1500C7FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_25;
    // 0x1500C7FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_25:
    // 0x1500C800: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500C804: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500C808: mflo        $t2
    ctx->r10 = lo;
    // 0x1500C80C: andi        $t5, $t2, 0xFFFF
    ctx->r13 = ctx->r10 & 0XFFFF;
    // 0x1500C810: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1500C814: bgez        $t5, L_1500C828
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1500C818: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1500C828;
    }
    // 0x1500C818: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500C81C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1500C820: nop

    // 0x1500C824: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_1500C828:
    // 0x1500C828: mul.s       $f16, $f6, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x1500C82C: nop

    // 0x1500C830: mul.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x1500C834: add.s       $f0, $f18, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x1500C838: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x1500C83C: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
L_1500C840:
    // 0x1500C840: jal         0x1510F800
    // 0x1500C844: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1510F800(rdram, ctx);
        goto after_26;
    // 0x1500C844: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_26:
    // 0x1500C848: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1500C84C: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x1500C850: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1500C854: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1500C858: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x1500C85C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x1500C860: jal         0x1510FD20
    // 0x1500C864: nop

    func_1510FD20(rdram, ctx);
        goto after_27;
    // 0x1500C864: nop

    after_27:
    // 0x1500C868: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1500C86C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500C870: sw          $v0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r2;
    // 0x1500C874: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1500C878: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500C87C: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x1500C880: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1500C884: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1500C888: jal         0x15132A4C
    // 0x1500C88C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15132A4C(rdram, ctx);
        goto after_28;
    // 0x1500C88C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_28:
    // 0x1500C890: sub.s       $f30, $f30, $f26
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f30.fl = ctx->f30.fl - ctx->f26.fl;
    // 0x1500C894: c.lt.s      $f26, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f26.fl < ctx->f30.fl;
    // 0x1500C898: nop

    // 0x1500C89C: bc1t        L_1500C3E4
    if (c1cs) {
        // 0x1500C8A0: nop
    
            goto L_1500C3E4;
    }
    // 0x1500C8A0: nop

    // 0x1500C8A4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_1500C8A8:
    // 0x1500C8A8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1500C8AC: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x1500C8B0: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x1500C8B4: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x1500C8B8: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x1500C8BC: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x1500C8C0: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x1500C8C4: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x1500C8C8: jr          $ra
    // 0x1500C8CC: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    return;
    // 0x1500C8CC: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_150D6434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D6434: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150D6438: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150D643C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150D6440: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x150D6444: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x150D6448: jal         0x150ADA68
    // 0x150D644C: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150D644C: nop

    after_0:
    // 0x150D6450: jal         0x150ADA68
    // 0x150D6454: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150D6454: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x150D6458: jal         0x150ADA68
    // 0x150D645C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150D645C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x150D6460: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150D6464: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D6468: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x150D646C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x150D6470: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D6474: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150D6478: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D647C: lwc1        $f4, 0xAB0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XAB0);
    // 0x150D6480: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150D6484: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D6488: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x150D648C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150D6490: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150D6494: lwc1        $f8, 0xAB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XAB4);
    // 0x150D6498: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150D649C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x150D64A0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x150D64A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150D64A8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150D64AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D64B0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150D64B4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150D64B8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x150D64BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150D64C0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150D64C4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150D64C8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150D64CC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x150D64D0: jal         0x15154884
    // 0x150D64D4: nop

    func_15154884(rdram, ctx);
        goto after_3;
    // 0x150D64D4: nop

    after_3:
    // 0x150D64D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150D64DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150D64E0: jr          $ra
    // 0x150D64E4: nop

    return;
    return;
    // 0x150D64E4: nop

;}
RECOMP_FUNC void func_15009944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009944: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15009948: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1500994C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15009950: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x15009954: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x15009958: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1500995C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15009960: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15009964: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15009968: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1500996C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15009970: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15009974: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x15009978: jal         0x15162740
    // 0x1500997C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15162740(rdram, ctx);
        goto after_0;
    // 0x1500997C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x15009980: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15009984: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15009988: jr          $ra
    // 0x1500998C: nop

    return;
    return;
    // 0x1500998C: nop

;}
RECOMP_FUNC void func_150C3994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C3994: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x150C3998: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x150C399C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C39A0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x150C39A4: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x150C39A8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x150C39AC: bnel        $t6, $at, L_150C3A78
    if (ctx->r14 != ctx->r1) {
        // 0x150C39B0: lwc1        $f0, 0x20($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
            goto L_150C3A78;
    }
    goto skip_0;
    // 0x150C39B0: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    skip_0:
    // 0x150C39B4: lw          $t7, 0x2E4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2E4);
    // 0x150C39B8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150C39BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C39C0: bne         $t7, $zero, L_150C3A6C
    if (ctx->r15 != 0) {
        // 0x150C39C4: addiu       $a1, $zero, 0x64
        ctx->r5 = ADD32(0, 0X64);
            goto L_150C3A6C;
    }
    // 0x150C39C4: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x150C39C8: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C39CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C39D0: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C39D4: addiu       $t6, $zero, 0x7D0
    ctx->r14 = ADD32(0, 0X7D0);
    // 0x150C39D8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150C39DC: addiu       $t7, $zero, 0x3E8
    ctx->r15 = ADD32(0, 0X3E8);
    // 0x150C39E0: addiu       $t8, $zero, 0x190
    ctx->r24 = ADD32(0, 0X190);
    // 0x150C39E4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C39E8: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C39EC: addiu       $t0, $zero, 0xC00
    ctx->r8 = ADD32(0, 0XC00);
    // 0x150C39F0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150C39F4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150C39F8: addiu       $t1, $zero, 0xC00
    ctx->r9 = ADD32(0, 0XC00);
    // 0x150C39FC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C3A00: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x150C3A04: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x150C3A08: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x150C3A0C: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x150C3A10: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x150C3A14: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x150C3A18: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150C3A1C: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x150C3A20: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150C3A24: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150C3A28: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x150C3A2C: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x150C3A30: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x150C3A34: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x150C3A38: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x150C3A3C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x150C3A40: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x150C3A44: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150C3A48: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x150C3A4C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150C3A50: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150C3A54: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    // 0x150C3A58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150C3A5C: jal         0x151B9BF0
    // 0x150C3A60: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_151B9BF0(rdram, ctx);
        goto after_0;
    // 0x150C3A60: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_0:
    // 0x150C3A64: b           L_150C3A78
    // 0x150C3A68: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
        goto L_150C3A78;
    // 0x150C3A68: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
L_150C3A6C:
    // 0x150C3A6C: jal         0x15188810
    // 0x150C3A70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15188810(rdram, ctx);
        goto after_1;
    // 0x150C3A70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x150C3A74: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
L_150C3A78:
    // 0x150C3A78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150C3A7C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150C3A80: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x150C3A84: nop

    // 0x150C3A88: bc1fl       L_150C3AFC
    if (!c1cs) {
        // 0x150C3A8C: lbu         $v0, 0x83($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X83);
            goto L_150C3AFC;
    }
    goto skip_1;
    // 0x150C3A8C: lbu         $v0, 0x83($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X83);
    skip_1:
    // 0x150C3A90: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150C3A94: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C3A98: nop

    // 0x150C3A9C: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x150C3AA0: nop

    // 0x150C3AA4: bc1fl       L_150C3AFC
    if (!c1cs) {
        // 0x150C3AA8: lbu         $v0, 0x83($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X83);
            goto L_150C3AFC;
    }
    goto skip_2;
    // 0x150C3AA8: lbu         $v0, 0x83($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X83);
    skip_2:
    // 0x150C3AAC: lbu         $t5, 0x136($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X136);
    // 0x150C3AB0: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x150C3AB4: bnel        $t5, $zero, L_150C3AFC
    if (ctx->r13 != 0) {
        // 0x150C3AB8: lbu         $v0, 0x83($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X83);
            goto L_150C3AFC;
    }
    goto skip_3;
    // 0x150C3AB8: lbu         $v0, 0x83($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X83);
    skip_3:
    // 0x150C3ABC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C3AC0: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    // 0x150C3AC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150C3AC8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x150C3ACC: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x150C3AD0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x150C3AD4: addiu       $t6, $zero, 0x9C4
    ctx->r14 = ADD32(0, 0X9C4);
    // 0x150C3AD8: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x150C3ADC: nop

    // 0x150C3AE0: bc1fl       L_150C3AFC
    if (!c1cs) {
        // 0x150C3AE4: lbu         $v0, 0x83($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X83);
            goto L_150C3AFC;
    }
    goto skip_4;
    // 0x150C3AE4: lbu         $v0, 0x83($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X83);
    skip_4:
    // 0x150C3AE8: jal         0x10010630
    // 0x150C3AEC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_10010630(rdram, ctx);
        goto after_2;
    // 0x150C3AEC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_2:
    // 0x150C3AF0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150C3AF4: sb          $t7, 0x136($s0)
    MEM_B(0X136, ctx->r16) = ctx->r15;
    // 0x150C3AF8: lbu         $v0, 0x83($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X83);
L_150C3AFC:
    // 0x150C3AFC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x150C3B00: bnel        $v0, $zero, L_150C3C4C
    if (ctx->r2 != 0) {
        // 0x150C3B04: addiu       $t1, $v0, 0x1
        ctx->r9 = ADD32(ctx->r2, 0X1);
            goto L_150C3C4C;
    }
    goto skip_5;
    // 0x150C3B04: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    skip_5:
    // 0x150C3B08: lw          $t8, 0x2E4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2E4);
    // 0x150C3B0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C3B10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C3B14: bne         $t8, $zero, L_150C3BF4
    if (ctx->r24 != 0) {
        // 0x150C3B18: swc1        $f4, 0x148($s0)
        MEM_W(0X148, ctx->r16) = ctx->f4.u32l;
            goto L_150C3BF4;
    }
    // 0x150C3B18: swc1        $f4, 0x148($s0)
    MEM_W(0X148, ctx->r16) = ctx->f4.u32l;
    // 0x150C3B1C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150C3B20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C3B24: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C3B28: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C3B2C: addiu       $t7, $zero, 0x898
    ctx->r15 = ADD32(0, 0X898);
    // 0x150C3B30: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150C3B34: addiu       $t8, $zero, 0x500
    ctx->r24 = ADD32(0, 0X500);
    // 0x150C3B38: addiu       $t9, $zero, 0x320
    ctx->r25 = ADD32(0, 0X320);
    // 0x150C3B3C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150C3B40: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C3B44: addiu       $t1, $zero, 0xC00
    ctx->r9 = ADD32(0, 0XC00);
    // 0x150C3B48: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150C3B4C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x150C3B50: addiu       $t2, $zero, 0xC00
    ctx->r10 = ADD32(0, 0XC00);
    // 0x150C3B54: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150C3B58: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x150C3B5C: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x150C3B60: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150C3B64: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x150C3B68: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x150C3B6C: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x150C3B70: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x150C3B74: addiu       $t0, $zero, 0x2BC
    ctx->r8 = ADD32(0, 0X2BC);
    // 0x150C3B78: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150C3B7C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150C3B80: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x150C3B84: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x150C3B88: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x150C3B8C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x150C3B90: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x150C3B94: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x150C3B98: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x150C3B9C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150C3BA0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150C3BA4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150C3BA8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150C3BAC: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    // 0x150C3BB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150C3BB4: jal         0x151B9BF0
    // 0x150C3BB8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_151B9BF0(rdram, ctx);
        goto after_3;
    // 0x150C3BB8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_3:
    // 0x150C3BBC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150C3BC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C3BC4: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C3BC8: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C3BCC: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x150C3BD0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150C3BD4: jal         0x150C1660
    // 0x150C3BD8: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    func_150C1660(rdram, ctx);
        goto after_4;
    // 0x150C3BD8: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    after_4:
    // 0x150C3BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C3BE0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x150C3BE4: jal         0x1506AC8C
    // 0x150C3BE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506AC8C(rdram, ctx);
        goto after_5;
    // 0x150C3BE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x150C3BEC: b           L_150C3C04
    // 0x150C3BF0: addiu       $t6, $zero, 0x7D0
    ctx->r14 = ADD32(0, 0X7D0);
        goto L_150C3C04;
    // 0x150C3BF0: addiu       $t6, $zero, 0x7D0
    ctx->r14 = ADD32(0, 0X7D0);
L_150C3BF4:
    // 0x150C3BF4: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x150C3BF8: jal         0x15188810
    // 0x150C3BFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15188810(rdram, ctx);
        goto after_6;
    // 0x150C3BFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x150C3C00: addiu       $t6, $zero, 0x7D0
    ctx->r14 = ADD32(0, 0X7D0);
L_150C3C04:
    // 0x150C3C04: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150C3C08: addiu       $a0, $zero, 0x1A9
    ctx->r4 = ADD32(0, 0X1A9);
    // 0x150C3C0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150C3C10: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    // 0x150C3C14: jal         0x10010344
    // 0x150C3C18: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    func_10010344(rdram, ctx);
        goto after_7;
    // 0x150C3C18: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    after_7:
    // 0x150C3C1C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150C3C20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C3C24: lw          $t8, 0xF8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XF8);
    // 0x150C3C28: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x150C3C2C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x150C3C30: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150C3C34: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x150C3C38: sb          $t7, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r15;
    // 0x150C3C3C: sw          $t9, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r25;
    // 0x150C3C40: lbu         $v0, 0x83($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X83);
    // 0x150C3C44: swc1        $f18, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f18.u32l;
    // 0x150C3C48: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
L_150C3C4C:
    // 0x150C3C4C: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x150C3C50: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150C3C54: slti        $at, $t2, 0xB
    ctx->r1 = SIGNED(ctx->r10) < 0XB ? 1 : 0;
    // 0x150C3C58: sb          $t0, 0x125($s0)
    MEM_B(0X125, ctx->r16) = ctx->r8;
    // 0x150C3C5C: bne         $at, $zero, L_150C3C78
    if (ctx->r1 != 0) {
        // 0x150C3C60: sb          $t1, 0x83($s0)
        MEM_B(0X83, ctx->r16) = ctx->r9;
            goto L_150C3C78;
    }
    // 0x150C3C60: sb          $t1, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r9;
    // 0x150C3C64: lw          $t3, 0xF8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XF8);
    // 0x150C3C68: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x150C3C6C: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x150C3C70: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x150C3C74: sw          $t4, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r12;
L_150C3C78:
    // 0x150C3C78: lhu         $t5, 0x7A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X7A);
    // 0x150C3C7C: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x150C3C80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C3C84: addiu       $t6, $t5, 0x4000
    ctx->r14 = ADD32(ctx->r13, 0X4000);
    // 0x150C3C88: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x150C3C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C3C90: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150C3C94: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150C3C98: jal         0x15059140
    // 0x150C3C9C: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    func_15059140(rdram, ctx);
        goto after_8;
    // 0x150C3C9C: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    after_8:
    // 0x150C3CA0: lwc1        $f0, 0x148($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X148);
    // 0x150C3CA4: lwc1        $f16, 0xB8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x150C3CA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C3CAC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150C3CB0: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x150C3CB4: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150C3CB8: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
    // 0x150C3CBC: lwc1        $f4, 0x334($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X334);
    // 0x150C3CC0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x150C3CC4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150C3CC8: bc1f        L_150C3CEC
    if (!c1cs) {
        // 0x150C3CCC: swc1        $f6, 0x148($s0)
        MEM_W(0X148, ctx->r16) = ctx->f6.u32l;
            goto L_150C3CEC;
    }
    // 0x150C3CCC: swc1        $f6, 0x148($s0)
    MEM_W(0X148, ctx->r16) = ctx->f6.u32l;
    // 0x150C3CD0: lbu         $t7, 0x83($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X83);
    // 0x150C3CD4: slti        $at, $t7, 0x15
    ctx->r1 = SIGNED(ctx->r15) < 0X15 ? 1 : 0;
    // 0x150C3CD8: bnel        $at, $zero, L_150C3CF0
    if (ctx->r1 != 0) {
        // 0x150C3CDC: lbu         $t9, 0x107($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X107);
            goto L_150C3CF0;
    }
    goto skip_6;
    // 0x150C3CDC: lbu         $t9, 0x107($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X107);
    skip_6:
    // 0x150C3CE0: lh          $t8, 0xCC($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XCC);
    // 0x150C3CE4: beq         $t8, $zero, L_150C3D04
    if (ctx->r24 == 0) {
        // 0x150C3CE8: nop
    
            goto L_150C3D04;
    }
    // 0x150C3CE8: nop

L_150C3CEC:
    // 0x150C3CEC: lbu         $t9, 0x107($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X107);
L_150C3CF0:
    // 0x150C3CF0: bne         $t9, $zero, L_150C3D04
    if (ctx->r25 != 0) {
        // 0x150C3CF4: nop
    
            goto L_150C3D04;
    }
    // 0x150C3CF4: nop

    // 0x150C3CF8: lbu         $t0, 0x1CA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1CA);
    // 0x150C3CFC: bnel        $t0, $zero, L_150C3D38
    if (ctx->r8 != 0) {
        // 0x150C3D00: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_150C3D38;
    }
    goto skip_7;
    // 0x150C3D00: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_7:
L_150C3D04:
    // 0x150C3D04: jal         0x150C3D5C
    // 0x150C3D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150C3D5C(rdram, ctx);
        goto after_9;
    // 0x150C3D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x150C3D0C: addiu       $t1, $zero, 0x9C4
    ctx->r9 = ADD32(0, 0X9C4);
    // 0x150C3D10: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150C3D14: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    // 0x150C3D18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150C3D1C: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x150C3D20: jal         0x10010630
    // 0x150C3D24: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_10010630(rdram, ctx);
        goto after_10;
    // 0x150C3D24: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_10:
    // 0x150C3D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C3D2C: jal         0x15060F28
    // 0x150C3D30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15060F28(rdram, ctx);
        goto after_11;
    // 0x150C3D30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x150C3D34: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_150C3D38:
    // 0x150C3D38: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x150C3D3C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x150C3D40: jr          $ra
    // 0x150C3D44: nop

    return;
    return;
    // 0x150C3D44: nop

;}
RECOMP_FUNC void func_150A2940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A2940: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150A2944: lw          $t7, 0x3094($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3094);
    // 0x150A2948: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x150A294C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x150A2950: sltu        $at, $t6, $t7
    ctx->r1 = ctx->r14 < ctx->r15 ? 1 : 0;
    // 0x150A2954: beq         $at, $zero, L_150A29C0
    if (ctx->r1 == 0) {
        // 0x150A2958: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_150A29C0;
    }
    // 0x150A2958: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x150A295C: beq         $a1, $v1, L_150A298C
    if (ctx->r5 == ctx->r3) {
        // 0x150A2960: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_150A298C;
    }
    // 0x150A2960: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x150A2964: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x150A2968: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x150A296C: addiu       $a3, $a3, 0x3098
    ctx->r7 = ADD32(ctx->r7, 0X3098);
    // 0x150A2970: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x150A2974: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x150A2978: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150A297C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x150A2980: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150A2984: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x150A2988: sw          $a1, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r5;
L_150A298C:
    // 0x150A298C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x150A2990: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x150A2994: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x150A2998: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x150A299C: addiu       $a3, $a3, 0x3098
    ctx->r7 = ADD32(ctx->r7, 0X3098);
    // 0x150A29A0: beq         $a2, $v1, L_150A29B4
    if (ctx->r6 == ctx->r3) {
        // 0x150A29A4: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_150A29B4;
    }
    // 0x150A29A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x150A29A8: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x150A29AC: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x150A29B0: sb          $a2, 0x17($t2)
    MEM_B(0X17, ctx->r10) = ctx->r6;
L_150A29B4:
    // 0x150A29B4: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x150A29B8: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x150A29BC: sw          $zero, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = 0;
L_150A29C0:
    // 0x150A29C0: jr          $ra
    // 0x150A29C4: nop

    return;
    return;
    // 0x150A29C4: nop

;}
RECOMP_FUNC void func_150714AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150714AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150714B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150714B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150714B8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150714BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150714C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150714C4: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150714C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150714CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150714D0: jal         0x150FF840
    // 0x150714D4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_150FF840(rdram, ctx);
        goto after_0;
    // 0x150714D4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x150714D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150714DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150714E0: jr          $ra
    // 0x150714E4: nop

    return;
    return;
    // 0x150714E4: nop

;}
RECOMP_FUNC void func_1506DA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DA94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1506DA98: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1506DA9C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506DAA0: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506DAA4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1506DAA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1506DAAC: beq         $t6, $zero, L_1506DAF0
    if (ctx->r14 == 0) {
        // 0x1506DAB0: addiu       $a2, $zero, 0x18
        ctx->r6 = ADD32(0, 0X18);
            goto L_1506DAF0;
    }
    // 0x1506DAB0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x1506DAB4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506DAB8: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506DABC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1506DAC0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1506DAC4: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x1506DAC8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x1506DACC: nop

    // 0x1506DAD0: bc1fl       L_1506DAF4
    if (!c1cs) {
        // 0x1506DAD4: addiu       $t7, $zero, 0x199
        ctx->r15 = ADD32(0, 0X199);
            goto L_1506DAF4;
    }
    goto skip_0;
    // 0x1506DAD4: addiu       $t7, $zero, 0x199
    ctx->r15 = ADD32(0, 0X199);
    skip_0:
    // 0x1506DAD8: lwc1        $f6, 0x3C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x1506DADC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x1506DAE0: nop

    // 0x1506DAE4: bc1fl       L_1506DAF4
    if (!c1cs) {
        // 0x1506DAE8: addiu       $t7, $zero, 0x199
        ctx->r15 = ADD32(0, 0X199);
            goto L_1506DAF4;
    }
    goto skip_1;
    // 0x1506DAE8: addiu       $t7, $zero, 0x199
    ctx->r15 = ADD32(0, 0X199);
    skip_1:
    // 0x1506DAEC: sb          $zero, 0x83($v0)
    MEM_B(0X83, ctx->r2) = 0;
L_1506DAF0:
    // 0x1506DAF0: addiu       $t7, $zero, 0x199
    ctx->r15 = ADD32(0, 0X199);
L_1506DAF4:
    // 0x1506DAF4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x1506DAF8: addiu       $t9, $zero, 0xAA
    ctx->r25 = ADD32(0, 0XAA);
    // 0x1506DAFC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1506DB00: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1506DB04: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1506DB08: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1506DB0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1506DB10: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1506DB14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1506DB18: jal         0x15174690
    // 0x1506DB1C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15174690(rdram, ctx);
        goto after_0;
    // 0x1506DB1C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_0:
    // 0x1506DB20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1506DB24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1506DB28: jr          $ra
    // 0x1506DB2C: nop

    return;
    return;
    // 0x1506DB2C: nop

;}
RECOMP_FUNC void func_15071254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15071258: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507125C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15071260: jal         0x15070F60
    // 0x15071264: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_15070F60(rdram, ctx);
        goto after_0;
    // 0x15071264: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x15071268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507126C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15071270: jr          $ra
    // 0x15071274: nop

    return;
    return;
    // 0x15071274: nop

;}
RECOMP_FUNC void func_15173D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15173D00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15173D04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15173D08: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15173D0C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15173D10: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x15173D14: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15173D18: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x15173D1C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x15173D20: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15173D24: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173D28: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15173D2C: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x15173D30: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x15173D34: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x15173D38: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x15173D3C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173D40: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15173D44: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x15173D48: ori         $t8, $t8, 0xC00
    ctx->r24 = ctx->r24 | 0XC00;
    // 0x15173D4C: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x15173D50: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x15173D54: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173D58: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x15173D5C: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x15173D60: ori         $t9, $t9, 0xA01
    ctx->r25 = ctx->r25 | 0XA01;
    // 0x15173D64: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x15173D68: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x15173D6C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x15173D70: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173D74: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x15173D78: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x15173D7C: ori         $t7, $t7, 0x1E01
    ctx->r15 = ctx->r15 | 0X1E01;
    // 0x15173D80: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x15173D84: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x15173D88: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173D8C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15173D90: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x15173D94: ori         $t8, $t8, 0x1001
    ctx->r24 = ctx->r24 | 0X1001;
    // 0x15173D98: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15173D9C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15173DA0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173DA4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15173DA8: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x15173DAC: ori         $t9, $t9, 0x1801
    ctx->r25 = ctx->r25 | 0X1801;
    // 0x15173DB0: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x15173DB4: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x15173DB8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x15173DBC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173DC0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15173DC4: lui         $t7, 0xE300
    ctx->r15 = S32(0XE300 << 16);
    // 0x15173DC8: ori         $t7, $t7, 0x1A01
    ctx->r15 = ctx->r15 | 0X1A01;
    // 0x15173DCC: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x15173DD0: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x15173DD4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x15173DD8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173DDC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15173DE0: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x15173DE4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x15173DE8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15173DEC: lw          $t7, -0x19E0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X19E0);
    // 0x15173DF0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x15173DF4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173DF8: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x15173DFC: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15173E00: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15173E04: lw          $t6, -0x163C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X163C);
    // 0x15173E08: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173E0C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15173E10: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173E14: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15173E18: addiu       $t3, $t3, -0x19D8
    ctx->r11 = ADD32(ctx->r11, -0X19D8);
    // 0x15173E1C: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x15173E20: lui         $ra, 0x700
    ctx->r31 = S32(0X700 << 16);
    // 0x15173E24: mflo        $t8
    ctx->r24 = lo;
    // 0x15173E28: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x15173E2C: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x15173E30: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x15173E34: lui         $t8, 0xF510
    ctx->r24 = S32(0XF510 << 16);
    // 0x15173E38: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x15173E3C: sw          $ra, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r31;
    // 0x15173E40: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x15173E44: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15173E48: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15173E4C: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x15173E50: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x15173E54: lh          $t2, 0x3A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X3A);
    // 0x15173E58: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x15173E5C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173E60: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x15173E64: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x15173E68: sll         $t2, $t7, 7
    ctx->r10 = S32(ctx->r15 << 7);
    // 0x15173E6C: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x15173E70: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x15173E74: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15173E78: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x15173E7C: nop

    // 0x15173E80: addiu       $v1, $a3, -0x1
    ctx->r3 = ADD32(ctx->r7, -0X1);
    // 0x15173E84: slti        $at, $v1, 0x7FF
    ctx->r1 = SIGNED(ctx->r3) < 0X7FF ? 1 : 0;
    // 0x15173E88: beq         $at, $zero, L_15173E98
    if (ctx->r1 == 0) {
        // 0x15173E8C: sll         $v0, $a3, 1
        ctx->r2 = S32(ctx->r7 << 1);
            goto L_15173E98;
    }
    // 0x15173E8C: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x15173E90: b           L_15173E9C
    // 0x15173E94: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
        goto L_15173E9C;
    // 0x15173E94: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
L_15173E98:
    // 0x15173E98: addiu       $t1, $zero, 0x7FF
    ctx->r9 = ADD32(0, 0X7FF);
L_15173E9C:
    // 0x15173E9C: bgez        $v0, L_15173EAC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15173EA0: sra         $t7, $v0, 3
        ctx->r15 = S32(SIGNED(ctx->r2) >> 3);
            goto L_15173EAC;
    }
    // 0x15173EA0: sra         $t7, $v0, 3
    ctx->r15 = S32(SIGNED(ctx->r2) >> 3);
    // 0x15173EA4: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x15173EA8: sra         $t7, $at, 3
    ctx->r15 = S32(SIGNED(ctx->r1) >> 3);
L_15173EAC:
    // 0x15173EAC: bgtz        $t7, L_15173EBC
    if (SIGNED(ctx->r15) > 0) {
        // 0x15173EB0: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_15173EBC;
    }
    // 0x15173EB0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x15173EB4: b           L_15173EC0
    // 0x15173EB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_15173EC0;
    // 0x15173EB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_15173EBC:
    // 0x15173EBC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_15173EC0:
    // 0x15173EC0: bgtz        $v0, L_15173ED0
    if (SIGNED(ctx->r2) > 0) {
        // 0x15173EC4: addiu       $t8, $a3, 0x7FF
        ctx->r24 = ADD32(ctx->r7, 0X7FF);
            goto L_15173ED0;
    }
    // 0x15173EC4: addiu       $t8, $a3, 0x7FF
    ctx->r24 = ADD32(ctx->r7, 0X7FF);
    // 0x15173EC8: b           L_15173ED4
    // 0x15173ECC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_15173ED4;
    // 0x15173ECC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_15173ED0:
    // 0x15173ED0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_15173ED4:
    // 0x15173ED4: div         $zero, $t8, $a2
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r6)));
    // 0x15173ED8: mflo        $t9
    ctx->r25 = lo;
    // 0x15173EDC: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x15173EE0: bne         $a2, $zero, L_15173EEC
    if (ctx->r6 != 0) {
        // 0x15173EE4: nop
    
            goto L_15173EEC;
    }
    // 0x15173EE4: nop

    // 0x15173EE8: break       7
    do_break(353844968);
L_15173EEC:
    // 0x15173EEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15173EF0: bne         $a2, $at, L_15173F04
    if (ctx->r6 != ctx->r1) {
        // 0x15173EF4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15173F04;
    }
    // 0x15173EF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15173EF8: bne         $t8, $at, L_15173F04
    if (ctx->r24 != ctx->r1) {
        // 0x15173EFC: nop
    
            goto L_15173F04;
    }
    // 0x15173EFC: nop

    // 0x15173F00: break       6
    do_break(353844992);
L_15173F04:
    // 0x15173F04: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x15173F08: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x15173F0C: or          $t7, $t6, $ra
    ctx->r15 = ctx->r14 | ctx->r31;
    // 0x15173F10: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x15173F14: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x15173F18: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15173F1C: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x15173F20: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15173F24: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15173F28: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173F2C: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x15173F30: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15173F34: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x15173F38: addu        $t9, $t7, $t2
    ctx->r25 = ADD32(ctx->r15, ctx->r10);
    // 0x15173F3C: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x15173F40: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173F44: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15173F48: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15173F4C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x15173F50: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x15173F54: nop

    // 0x15173F58: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x15173F5C: addiu       $t9, $t7, 0x7
    ctx->r25 = ADD32(ctx->r15, 0X7);
    // 0x15173F60: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x15173F64: andi        $t8, $t6, 0x1FF
    ctx->r24 = ctx->r14 & 0X1FF;
    // 0x15173F68: sll         $t7, $t8, 9
    ctx->r15 = S32(ctx->r24 << 9);
    // 0x15173F6C: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x15173F70: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x15173F74: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x15173F78: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x15173F7C: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x15173F80: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173F84: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x15173F88: addu        $t7, $t8, $t2
    ctx->r15 = ADD32(ctx->r24, ctx->r10);
    // 0x15173F8C: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x15173F90: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15173F94: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x15173F98: nop

    // 0x15173F9C: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x15173FA0: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x15173FA4: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x15173FA8: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x15173FAC: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x15173FB0: lui         $t8, 0xFF10
    ctx->r24 = S32(0XFF10 << 16);
    // 0x15173FB4: ori         $t8, $t8, 0x3
    ctx->r24 = ctx->r24 | 0X3;
    // 0x15173FB8: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x15173FBC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x15173FC0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173FC4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15173FC8: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x15173FCC: lui         $t9, 0xED00
    ctx->r25 = S32(0XED00 << 16);
    // 0x15173FD0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15173FD4: lw          $t6, 0x0($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X0);
    // 0x15173FD8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15173FDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15173FE0: addu        $t8, $t6, $t2
    ctx->r24 = ADD32(ctx->r14, ctx->r10);
    // 0x15173FE4: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x15173FE8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173FEC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15173FF0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15173FF4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173FF8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15173FFC: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x15174000: nop

    // 0x15174004: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x15174008: nop

    // 0x1517400C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15174010: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15174014: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15174018: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x1517401C: nop

    // 0x15174020: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x15174024: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x15174028: ori         $t6, $t9, 0x4
    ctx->r14 = ctx->r25 | 0X4;
    // 0x1517402C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x15174030: lui         $t8, 0xE400
    ctx->r24 = S32(0XE400 << 16);
    // 0x15174034: ori         $t8, $t8, 0xC004
    ctx->r24 = ctx->r24 | 0XC004;
    // 0x15174038: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x1517403C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x15174040: lui         $t7, 0xE100
    ctx->r15 = S32(0XE100 << 16);
    // 0x15174044: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x15174048: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x1517404C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15174050: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x15174054: sll         $t4, $t6, 21
    ctx->r12 = S32(ctx->r14 << 21);
    // 0x15174058: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x1517405C: lui         $t9, 0x1000
    ctx->r25 = S32(0X1000 << 16);
    // 0x15174060: ori         $t9, $t9, 0x400
    ctx->r25 = ctx->r25 | 0X400;
    // 0x15174064: lui         $t7, 0xF100
    ctx->r15 = S32(0XF100 << 16);
    // 0x15174068: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x1517406C: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x15174070: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15174074: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15174078: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x1517407C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x15174080: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15174084: lw          $t7, -0x19E0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X19E0);
    // 0x15174088: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x1517408C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15174090: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15174094: multu       $t8, $t7
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15174098: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1517409C: lbu         $t8, -0x1640($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1640);
    // 0x151740A0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151740A4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151740A8: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x151740AC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151740B0: or          $t5, $a0, $zero
    ctx->r13 = ctx->r4 | 0;
    // 0x151740B4: mflo        $t9
    ctx->r25 = lo;
    // 0x151740B8: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x151740BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x151740C0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x151740C4: lw          $t9, -0x5518($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5518);
    // 0x151740C8: lui         $t7, 0xF510
    ctx->r15 = S32(0XF510 << 16);
    // 0x151740CC: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x151740D0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151740D4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x151740D8: sw          $ra, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r31;
    // 0x151740DC: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x151740E0: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x151740E4: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x151740E8: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x151740EC: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x151740F0: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x151740F4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151740F8: addu        $t7, $t8, $t2
    ctx->r15 = ADD32(ctx->r24, ctx->r10);
    // 0x151740FC: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x15174100: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15174104: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x15174108: nop

    // 0x1517410C: addiu       $v1, $a3, -0x1
    ctx->r3 = ADD32(ctx->r7, -0X1);
    // 0x15174110: slti        $at, $v1, 0x7FF
    ctx->r1 = SIGNED(ctx->r3) < 0X7FF ? 1 : 0;
    // 0x15174114: beq         $at, $zero, L_15174124
    if (ctx->r1 == 0) {
        // 0x15174118: sll         $v0, $a3, 1
        ctx->r2 = S32(ctx->r7 << 1);
            goto L_15174124;
    }
    // 0x15174118: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x1517411C: b           L_15174128
    // 0x15174120: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
        goto L_15174128;
    // 0x15174120: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
L_15174124:
    // 0x15174124: addiu       $t1, $zero, 0x7FF
    ctx->r9 = ADD32(0, 0X7FF);
L_15174128:
    // 0x15174128: bgez        $v0, L_15174138
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1517412C: sra         $t6, $v0, 3
        ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
            goto L_15174138;
    }
    // 0x1517412C: sra         $t6, $v0, 3
    ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
    // 0x15174130: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x15174134: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_15174138:
    // 0x15174138: bgtz        $t6, L_15174148
    if (SIGNED(ctx->r14) > 0) {
        // 0x1517413C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_15174148;
    }
    // 0x1517413C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x15174140: b           L_1517414C
    // 0x15174144: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_1517414C;
    // 0x15174144: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_15174148:
    // 0x15174148: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_1517414C:
    // 0x1517414C: bgtz        $v0, L_1517415C
    if (SIGNED(ctx->r2) > 0) {
        // 0x15174150: addiu       $t8, $a3, 0x7FF
        ctx->r24 = ADD32(ctx->r7, 0X7FF);
            goto L_1517415C;
    }
    // 0x15174150: addiu       $t8, $a3, 0x7FF
    ctx->r24 = ADD32(ctx->r7, 0X7FF);
    // 0x15174154: b           L_15174160
    // 0x15174158: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_15174160;
    // 0x15174158: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_1517415C:
    // 0x1517415C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_15174160:
    // 0x15174160: div         $zero, $t8, $a2
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r6)));
    // 0x15174164: mflo        $t7
    ctx->r15 = lo;
    // 0x15174168: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x1517416C: bne         $a2, $zero, L_15174178
    if (ctx->r6 != 0) {
        // 0x15174170: nop
    
            goto L_15174178;
    }
    // 0x15174170: nop

    // 0x15174174: break       7
    do_break(353845620);
L_15174178:
    // 0x15174178: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1517417C: bne         $a2, $at, L_15174190
    if (ctx->r6 != ctx->r1) {
        // 0x15174180: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15174190;
    }
    // 0x15174180: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15174184: bne         $t8, $at, L_15174190
    if (ctx->r24 != ctx->r1) {
        // 0x15174188: nop
    
            goto L_15174190;
    }
    // 0x15174188: nop

    // 0x1517418C: break       6
    do_break(353845644);
L_15174190:
    // 0x15174190: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x15174194: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x15174198: or          $t6, $t9, $ra
    ctx->r14 = ctx->r25 | ctx->r31;
    // 0x1517419C: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x151741A0: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x151741A4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151741A8: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x151741AC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x151741B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151741B4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151741B8: lw          $t6, 0x0($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X0);
    // 0x151741BC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151741C0: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x151741C4: addu        $t7, $t6, $t2
    ctx->r15 = ADD32(ctx->r14, ctx->r10);
    // 0x151741C8: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x151741CC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151741D0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151741D4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151741D8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151741DC: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x151741E0: nop

    // 0x151741E4: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x151741E8: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x151741EC: sra         $t9, $t7, 3
    ctx->r25 = S32(SIGNED(ctx->r15) >> 3);
    // 0x151741F0: andi        $t8, $t9, 0x1FF
    ctx->r24 = ctx->r25 & 0X1FF;
    // 0x151741F4: sll         $t6, $t8, 9
    ctx->r14 = S32(ctx->r24 << 9);
    // 0x151741F8: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x151741FC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x15174200: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x15174204: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x15174208: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x1517420C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15174210: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x15174214: addu        $t6, $t8, $t2
    ctx->r14 = ADD32(ctx->r24, ctx->r10);
    // 0x15174218: lwc1        $f18, 0x4($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X4);
    // 0x1517421C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15174220: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x15174224: nop

    // 0x15174228: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x1517422C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x15174230: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x15174234: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x15174238: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x1517423C: lui         $t8, 0xFF10
    ctx->r24 = S32(0XFF10 << 16);
    // 0x15174240: ori         $t8, $t8, 0x3
    ctx->r24 = ctx->r24 | 0X3;
    // 0x15174244: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x15174248: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1517424C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15174250: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15174254: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x15174258: lui         $t7, 0xE400
    ctx->r15 = S32(0XE400 << 16);
    // 0x1517425C: ori         $t7, $t7, 0xC004
    ctx->r15 = ctx->r15 | 0XC004;
    // 0x15174260: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15174264: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15174268: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1517426C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15174270: lui         $t9, 0xE100
    ctx->r25 = S32(0XE100 << 16);
    // 0x15174274: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x15174278: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x1517427C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15174280: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15174284: lui         $t6, 0x1000
    ctx->r14 = S32(0X1000 << 16);
    // 0x15174288: ori         $t6, $t6, 0x400
    ctx->r14 = ctx->r14 | 0X400;
    // 0x1517428C: lui         $t8, 0xF100
    ctx->r24 = S32(0XF100 << 16);
    // 0x15174290: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x15174294: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x15174298: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1517429C: jal         0x1501A680
    // 0x151742A0: nop

    func_1501A680(rdram, ctx);
        goto after_0;
    // 0x151742A0: nop

    after_0:
    // 0x151742A4: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x151742A8: lh          $a1, 0x2FA6($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X2FA6);
    // 0x151742AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151742B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151742B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151742B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151742BC: jal         0x1501A490
    // 0x151742C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1501A490(rdram, ctx);
        goto after_1;
    // 0x151742C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x151742C4: lui         $t7, 0xE300
    ctx->r15 = S32(0XE300 << 16);
    // 0x151742C8: ori         $t7, $t7, 0xC00
    ctx->r15 = ctx->r15 | 0XC00;
    // 0x151742CC: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x151742D0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x151742D4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x151742D8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x151742DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151742E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151742E4: jr          $ra
    // 0x151742E8: nop

    return;
    return;
    // 0x151742E8: nop

;}
RECOMP_FUNC void func_10019ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10019ED8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10019EDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10019EE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x10019EE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x10019EE8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x10019EEC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x10019EF0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x10019EF4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x10019EF8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x10019EFC: lw          $t8, 0x60($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X60);
    // 0x10019F00: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x10019F04: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x10019F08: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x10019F0C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x10019F10: sb          $t6, 0x14($t1)
    MEM_B(0X14, ctx->r9) = ctx->r14;
    // 0x10019F14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x10019F18: jal         0x10019D98
    // 0x10019F1C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_10019D98(rdram, ctx);
        goto after_0;
    // 0x10019F1C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x10019F20: b           L_10019F28
    // 0x10019F24: nop

        goto L_10019F28;
    // 0x10019F24: nop

L_10019F28:
    // 0x10019F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10019F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10019F30: jr          $ra
    // 0x10019F34: nop

    return;
    return;
    // 0x10019F34: nop

;}
RECOMP_FUNC void func_151D66F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D66F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D66F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D66F8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151D66FC: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x151D6700: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151D6704: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x151D6708: bne         $t6, $at, L_151D671C
    if (ctx->r14 != ctx->r1) {
        // 0x151D670C: nop
    
            goto L_151D671C;
    }
    // 0x151D670C: nop

    // 0x151D6710: lbu         $t7, -0x7F80($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7F80);
    // 0x151D6714: beql        $t7, $zero, L_151D676C
    if (ctx->r15 == 0) {
        // 0x151D6718: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151D676C;
    }
    goto skip_0;
    // 0x151D6718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_151D671C:
    // 0x151D671C: bne         $a1, $zero, L_151D6728
    if (ctx->r5 != 0) {
        // 0x151D6720: lui         $at, 0x800C
        ctx->r1 = S32(0X800C << 16);
            goto L_151D6728;
    }
    // 0x151D6720: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151D6724: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_151D6728:
    // 0x151D6728: beq         $a0, $zero, L_151D673C
    if (ctx->r4 == 0) {
        // 0x151D672C: sb          $a0, -0x1A8C($at)
        MEM_B(-0X1A8C, ctx->r1) = ctx->r4;
            goto L_151D673C;
    }
    // 0x151D672C: sb          $a0, -0x1A8C($at)
    MEM_B(-0X1A8C, ctx->r1) = ctx->r4;
    // 0x151D6730: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151D6734: b           L_151D6744
    // 0x151D6738: sb          $a1, -0x1A8B($at)
    MEM_B(-0X1A8B, ctx->r1) = ctx->r5;
        goto L_151D6744;
    // 0x151D6738: sb          $a1, -0x1A8B($at)
    MEM_B(-0X1A8B, ctx->r1) = ctx->r5;
L_151D673C:
    // 0x151D673C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151D6740: sb          $zero, -0x1A8B($at)
    MEM_B(-0X1A8B, ctx->r1) = 0;
L_151D6744:
    // 0x151D6744: bne         $a0, $zero, L_151D6768
    if (ctx->r4 != 0) {
        // 0x151D6748: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_151D6768;
    }
    // 0x151D6748: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151D674C: lw          $v0, -0x1A90($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1A90);
    // 0x151D6750: beq         $v0, $zero, L_151D6768
    if (ctx->r2 == 0) {
        // 0x151D6754: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_151D6768;
    }
    // 0x151D6754: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151D6758: jal         0x100043B4
    // 0x151D675C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x151D675C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x151D6760: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151D6764: sw          $zero, -0x1A90($at)
    MEM_W(-0X1A90, ctx->r1) = 0;
L_151D6768:
    // 0x151D6768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D676C:
    // 0x151D676C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D6770: jr          $ra
    // 0x151D6774: nop

    return;
    return;
    // 0x151D6774: nop

;}
RECOMP_FUNC void func_15116BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15116BAC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15116BB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15116BB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15116BB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15116BBC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x15116BC0: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x15116BC4: ori         $at, $at, 0x3FF
    ctx->r1 = ctx->r1 | 0X3FF;
    // 0x15116BC8: sra         $t4, $v0, 10
    ctx->r12 = S32(SIGNED(ctx->r2) >> 10);
    // 0x15116BCC: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x15116BD0: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x15116BD4: beq         $t4, $zero, L_15116C38
    if (ctx->r12 == 0) {
        // 0x15116BD8: and         $ra, $v0, $at
        ctx->r31 = ctx->r2 & ctx->r1;
            goto L_15116C38;
    }
    // 0x15116BD8: and         $ra, $v0, $at
    ctx->r31 = ctx->r2 & ctx->r1;
    // 0x15116BDC: lhu         $t6, 0x74($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X74);
    // 0x15116BE0: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x15116BE4: subu        $t7, $t7, $t4
    ctx->r15 = SUB32(ctx->r15, ctx->r12);
    // 0x15116BE8: bne         $t6, $zero, L_15116C38
    if (ctx->r14 != 0) {
        // 0x15116BEC: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_15116C38;
    }
    // 0x15116BEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15116BF0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15116BF4: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x15116BF8: lh          $a1, -0x6DA0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6DA0);
    // 0x15116BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15116C00: addiu       $a2, $zero, 0x5DC0
    ctx->r6 = ADD32(0, 0X5DC0);
    // 0x15116C04: beq         $a1, $zero, L_15116C38
    if (ctx->r5 == 0) {
        // 0x15116C08: addiu       $a3, $zero, 0x7D0
        ctx->r7 = ADD32(0, 0X7D0);
            goto L_15116C38;
    }
    // 0x15116C08: addiu       $a3, $zero, 0x7D0
    ctx->r7 = ADD32(0, 0X7D0);
    // 0x15116C0C: addiu       $t8, $zero, 0xFA0
    ctx->r24 = ADD32(0, 0XFA0);
    // 0x15116C10: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x15116C14: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15116C18: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15116C1C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15116C20: jal         0x15114D24
    // 0x15116C24: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    func_15114D24(rdram, ctx);
        goto after_0;
    // 0x15116C24: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    after_0:
    // 0x15116C28: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x15116C2C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x15116C30: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x15116C34: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
L_15116C38:
    // 0x15116C38: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15116C3C: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x15116C40: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15116C44: addiu       $v0, $s0, 0x10
    ctx->r2 = ADD32(ctx->r16, 0X10);
    // 0x15116C48: multu       $ra, $t9
    result = U64(U32(ctx->r31)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15116C4C: addiu       $a2, $s0, 0x7C
    ctx->r6 = ADD32(ctx->r16, 0X7C);
    // 0x15116C50: addiu       $a3, $s0, 0x5A
    ctx->r7 = ADD32(ctx->r16, 0X5A);
    // 0x15116C54: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x15116C58: mflo        $t1
    ctx->r9 = lo;
    // 0x15116C5C: sra         $t6, $t1, 1
    ctx->r14 = S32(SIGNED(ctx->r9) >> 1);
    // 0x15116C60: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
L_15116C64:
    // 0x15116C64: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x15116C68: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x15116C6C: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
    // 0x15116C70: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x15116C74: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x15116C78: beq         $a0, $v1, L_15116CE0
    if (ctx->r4 == ctx->r3) {
        // 0x15116C7C: slt         $at, $v1, $a0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_15116CE0;
    }
    // 0x15116C7C: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15116C80: beq         $at, $zero, L_15116CB0
    if (ctx->r1 == 0) {
        // 0x15116C84: addu        $t9, $a0, $t1
        ctx->r25 = ADD32(ctx->r4, ctx->r9);
            goto L_15116CB0;
    }
    // 0x15116C84: addu        $t9, $a0, $t1
    ctx->r25 = ADD32(ctx->r4, ctx->r9);
    // 0x15116C88: subu        $t8, $a0, $t1
    ctx->r24 = SUB32(ctx->r4, ctx->r9);
    // 0x15116C8C: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x15116C90: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x15116C94: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x15116C98: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
    // 0x15116C9C: bgezl       $a1, L_15116CD4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x15116CA0: slt         $at, $t2, $a1
        ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_15116CD4;
    }
    goto skip_0;
    // 0x15116CA0: slt         $at, $t2, $a1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r5) ? 1 : 0;
    skip_0:
    // 0x15116CA4: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x15116CA8: b           L_15116CD0
    // 0x15116CAC: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
        goto L_15116CD0;
    // 0x15116CAC: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
L_15116CB0:
    // 0x15116CB0: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x15116CB4: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x15116CB8: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x15116CBC: subu        $a1, $v1, $a0
    ctx->r5 = SUB32(ctx->r3, ctx->r4);
    // 0x15116CC0: bgezl       $a1, L_15116CD4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x15116CC4: slt         $at, $t2, $a1
        ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_15116CD4;
    }
    goto skip_1;
    // 0x15116CC4: slt         $at, $t2, $a1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r5) ? 1 : 0;
    skip_1:
    // 0x15116CC8: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x15116CCC: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
L_15116CD0:
    // 0x15116CD0: slt         $at, $t2, $a1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r5) ? 1 : 0;
L_15116CD4:
    // 0x15116CD4: beql        $at, $zero, L_15116CE4
    if (ctx->r1 == 0) {
        // 0x15116CD8: lh          $t6, 0x0($a3)
        ctx->r14 = MEM_H(ctx->r7, 0X0);
            goto L_15116CE4;
    }
    goto skip_2;
    // 0x15116CD8: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
    skip_2:
    // 0x15116CDC: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
L_15116CE0:
    // 0x15116CE0: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
L_15116CE4:
    // 0x15116CE4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x15116CE8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x15116CEC: subu        $t7, $a0, $t6
    ctx->r15 = SUB32(ctx->r4, ctx->r14);
    // 0x15116CF0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x15116CF4: bne         $t0, $t3, L_15116C64
    if (ctx->r8 != ctx->r11) {
        // 0x15116CF8: sh          $t7, -0x2($a3)
        MEM_H(-0X2, ctx->r7) = ctx->r15;
            goto L_15116C64;
    }
    // 0x15116CF8: sh          $t7, -0x2($a3)
    MEM_H(-0X2, ctx->r7) = ctx->r15;
    // 0x15116CFC: beq         $t4, $zero, L_15116D68
    if (ctx->r12 == 0) {
        // 0x15116D00: sll         $t8, $t4, 2
        ctx->r24 = S32(ctx->r12 << 2);
            goto L_15116D68;
    }
    // 0x15116D00: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x15116D04: subu        $t8, $t8, $t4
    ctx->r24 = SUB32(ctx->r24, ctx->r12);
    // 0x15116D08: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15116D0C: addiu       $t9, $t9, -0x6DA0
    ctx->r25 = ADD32(ctx->r25, -0X6DA0);
    // 0x15116D10: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15116D14: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x15116D18: lh          $a1, 0x8($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8);
    // 0x15116D1C: beql        $a1, $zero, L_15116D6C
    if (ctx->r5 == 0) {
        // 0x15116D20: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15116D6C;
    }
    goto skip_3;
    // 0x15116D20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x15116D24: lh          $t6, 0xA($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XA);
    // 0x15116D28: negu        $t9, $t1
    ctx->r25 = SUB32(0, ctx->r9);
    // 0x15116D2C: multu       $t6, $ra
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r31)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15116D30: mflo        $t7
    ctx->r15 = lo;
    // 0x15116D34: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x15116D38: subu        $t2, $t2, $t8
    ctx->r10 = SUB32(ctx->r10, ctx->r24);
    // 0x15116D3C: bgtz        $t2, L_15116D68
    if (SIGNED(ctx->r10) > 0) {
        // 0x15116D40: slt         $at, $t9, $t2
        ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_15116D68;
    }
    // 0x15116D40: slt         $at, $t9, $t2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x15116D44: bne         $at, $zero, L_15116D50
    if (ctx->r1 != 0) {
        // 0x15116D48: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15116D50;
    }
    // 0x15116D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15116D4C: beq         $t5, $zero, L_15116D68
    if (ctx->r13 == 0) {
        // 0x15116D50: addiu       $t6, $zero, 0xFA0
        ctx->r14 = ADD32(0, 0XFA0);
            goto L_15116D68;
    }
L_15116D50:
    // 0x15116D50: addiu       $t6, $zero, 0xFA0
    ctx->r14 = ADD32(0, 0XFA0);
    // 0x15116D54: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15116D58: addiu       $a2, $zero, 0x5DC0
    ctx->r6 = ADD32(0, 0X5DC0);
    // 0x15116D5C: addiu       $a3, $zero, 0x7D0
    ctx->r7 = ADD32(0, 0X7D0);
    // 0x15116D60: jal         0x15114D24
    // 0x15116D64: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15114D24(rdram, ctx);
        goto after_1;
    // 0x15116D64: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
L_15116D68:
    // 0x15116D68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15116D6C:
    // 0x15116D6C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15116D70: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15116D74: jr          $ra
    // 0x15116D78: nop

    return;
    return;
    // 0x15116D78: nop

;}
RECOMP_FUNC void func_15052760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15052760: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x15052764: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15052768: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1505276C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x15052770: lhu         $t9, 0x76($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X76);
    // 0x15052774: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x15052778: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1505277C: subu        $a1, $t8, $t9
    ctx->r5 = SUB32(ctx->r24, ctx->r25);
    // 0x15052780: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x15052784: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x15052788: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x1505278C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x15052790: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x15052794: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x15052798: lh          $t3, -0x3D9C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X3D9C);
    // 0x1505279C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x150527A0: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x150527A4: div         $zero, $t2, $t3
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r11)));
    // 0x150527A8: mflo        $v0
    ctx->r2 = lo;
    // 0x150527AC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x150527B0: bne         $t3, $zero, L_150527BC
    if (ctx->r11 != 0) {
        // 0x150527B4: nop
    
            goto L_150527BC;
    }
    // 0x150527B4: nop

    // 0x150527B8: break       7
    do_break(352659384);
L_150527BC:
    // 0x150527BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150527C0: bne         $t3, $at, L_150527D4
    if (ctx->r11 != ctx->r1) {
        // 0x150527C4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150527D4;
    }
    // 0x150527C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150527C8: bne         $t2, $at, L_150527D4
    if (ctx->r10 != ctx->r1) {
        // 0x150527CC: nop
    
            goto L_150527D4;
    }
    // 0x150527CC: nop

    // 0x150527D0: break       6
    do_break(352659408);
L_150527D4:
    // 0x150527D4: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x150527D8: beq         $v1, $at, L_150527E8
    if (ctx->r3 == ctx->r1) {
        // 0x150527DC: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_150527E8;
    }
    // 0x150527DC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x150527E0: beq         $v1, $at, L_150528C0
    if (ctx->r3 == ctx->r1) {
        // 0x150527E4: nop
    
            goto L_150528C0;
    }
    // 0x150527E4: nop

L_150527E8:
    // 0x150527E8: lhu         $t4, 0x22C($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X22C);
    // 0x150527EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150527F0: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x150527F4: bne         $t5, $zero, L_150528C0
    if (ctx->r13 != 0) {
        // 0x150527F8: nop
    
            goto L_150528C0;
    }
    // 0x150527F8: nop

    // 0x150527FC: lwc1        $f0, -0x6CB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6CB8);
    // 0x15052800: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x15052804: bne         $v1, $at, L_15052810
    if (ctx->r3 != ctx->r1) {
        // 0x15052808: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_15052810;
    }
    // 0x15052808: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x1505280C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
L_15052810:
    // 0x15052810: lbu         $t6, 0x226($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X226);
    // 0x15052814: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15052818: bnel        $t6, $at, L_15052860
    if (ctx->r14 != ctx->r1) {
        // 0x1505281C: lbu         $v1, 0x1E5($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X1E5);
            goto L_15052860;
    }
    goto skip_0;
    // 0x1505281C: lbu         $v1, 0x1E5($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1E5);
    skip_0:
    // 0x15052820: lbu         $t8, 0x87($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X87);
    // 0x15052824: sra         $a1, $v0, 8
    ctx->r5 = S32(SIGNED(ctx->r2) >> 8);
    // 0x15052828: sll         $t9, $a1, 24
    ctx->r25 = S32(ctx->r5 << 24);
    // 0x1505282C: sra         $t0, $t9, 24
    ctx->r8 = S32(SIGNED(ctx->r25) >> 24);
    // 0x15052830: sll         $v1, $a1, 24
    ctx->r3 = S32(ctx->r5 << 24);
    // 0x15052834: xor         $t1, $t8, $t0
    ctx->r9 = ctx->r24 ^ ctx->r8;
    // 0x15052838: sra         $t7, $v1, 24
    ctx->r15 = S32(SIGNED(ctx->r3) >> 24);
    // 0x1505283C: andi        $t2, $t1, 0x80
    ctx->r10 = ctx->r9 & 0X80;
    // 0x15052840: beq         $t2, $zero, L_1505284C
    if (ctx->r10 == 0) {
        // 0x15052844: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_1505284C;
    }
    // 0x15052844: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x15052848: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1505284C:
    // 0x1505284C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15052850: lwc1        $f0, -0x6CB4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6CB4);
    // 0x15052854: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x15052858: sb          $v1, 0x87($a0)
    MEM_B(0X87, ctx->r4) = ctx->r3;
    // 0x1505285C: lbu         $v1, 0x1E5($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1E5);
L_15052860:
    // 0x15052860: beq         $v1, $zero, L_150528C0
    if (ctx->r3 == 0) {
        // 0x15052864: nop
    
            goto L_150528C0;
    }
    // 0x15052864: nop

    // 0x15052868: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1505286C: lwc1        $f2, 0xC4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XC4);
    // 0x15052870: mflo        $t3
    ctx->r11 = lo;
    // 0x15052874: nop

    // 0x15052878: nop

    // 0x1505287C: div         $zero, $v0, $t3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r11)));
    // 0x15052880: mflo        $t4
    ctx->r12 = lo;
    // 0x15052884: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x15052888: bne         $t3, $zero, L_15052894
    if (ctx->r11 != 0) {
        // 0x1505288C: nop
    
            goto L_15052894;
    }
    // 0x1505288C: nop

    // 0x15052890: break       7
    do_break(352659600);
L_15052894:
    // 0x15052894: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15052898: bne         $t3, $at, L_150528AC
    if (ctx->r11 != ctx->r1) {
        // 0x1505289C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150528AC;
    }
    // 0x1505289C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150528A0: bne         $v0, $at, L_150528AC
    if (ctx->r2 != ctx->r1) {
        // 0x150528A4: nop
    
            goto L_150528AC;
    }
    // 0x150528A4: nop

    // 0x150528A8: break       6
    do_break(352659624);
L_150528AC:
    // 0x150528AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150528B0: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x150528B4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150528B8: add.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x150528BC: swc1        $f16, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f16.u32l;
L_150528C0:
    // 0x150528C0: jr          $ra
    // 0x150528C4: nop

    return;
    return;
    // 0x150528C4: nop

;}
RECOMP_FUNC void func_151ACA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151ACA60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151ACA64: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151ACA68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151ACA6C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151ACA70: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x151ACA74: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x151ACA78: bne         $s0, $zero, L_151ACA88
    if (ctx->r16 != 0) {
        // 0x151ACA7C: addiu       $a0, $zero, 0x30
        ctx->r4 = ADD32(0, 0X30);
            goto L_151ACA88;
    }
    // 0x151ACA7C: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x151ACA80: b           L_151ACB24
    // 0x151ACA84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151ACB24;
    // 0x151ACA84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151ACA88:
    // 0x151ACA88: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x151ACA8C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151ACA90: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151ACA94: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151ACA98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151ACA9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151ACAA0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151ACAA4: jal         0x15167A68
    // 0x151ACAA8: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x151ACAA8: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    after_0:
    // 0x151ACAAC: bne         $v0, $zero, L_151ACABC
    if (ctx->r2 != 0) {
        // 0x151ACAB0: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_151ACABC;
    }
    // 0x151ACAB0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x151ACAB4: b           L_151ACB24
    // 0x151ACAB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151ACB24;
    // 0x151ACAB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151ACABC:
    // 0x151ACABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151ACAC0: addiu       $a1, $a2, 0x18
    ctx->r5 = ADD32(ctx->r6, 0X18);
    // 0x151ACAC4: jal         0x151ACB38
    // 0x151ACAC8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_151ACB38(rdram, ctx);
        goto after_1;
    // 0x151ACAC8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_1:
    // 0x151ACACC: bne         $v0, $zero, L_151ACAE4
    if (ctx->r2 != 0) {
        // 0x151ACAD0: lw          $a2, 0x2C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X2C);
            goto L_151ACAE4;
    }
    // 0x151ACAD0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x151ACAD4: jal         0x1516979C
    // 0x151ACAD8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_1516979C(rdram, ctx);
        goto after_2;
    // 0x151ACAD8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x151ACADC: b           L_151ACB24
    // 0x151ACAE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151ACB24;
    // 0x151ACAE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151ACAE4:
    // 0x151ACAE4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x151ACAE8: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x151ACAEC: subu        $t0, $s0, $t9
    ctx->r8 = SUB32(ctx->r16, ctx->r25);
    // 0x151ACAF0: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x151ACAF4: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x151ACAF8: sw          $s0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r16;
    // 0x151ACAFC: lbu         $t8, 0x3B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3B);
    // 0x151ACB00: mflo        $t1
    ctx->r9 = lo;
    // 0x151ACB04: sw          $t1, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r9;
    // 0x151ACB08: sb          $t8, 0x20($a2)
    MEM_B(0X20, ctx->r6) = ctx->r24;
    // 0x151ACB0C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151ACB10: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151ACB14: sw          $t2, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r10;
    // 0x151ACB18: sw          $zero, 0x14($a2)
    MEM_W(0X14, ctx->r6) = 0;
    // 0x151ACB1C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151ACB20: swc1        $f4, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f4.u32l;
L_151ACB24:
    // 0x151ACB24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151ACB28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151ACB2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151ACB30: jr          $ra
    // 0x151ACB34: nop

    return;
    return;
    // 0x151ACB34: nop

;}
RECOMP_FUNC void func_15008840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15008840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15008844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15008848: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1500884C: addiu       $a0, $a0, -0x6630
    ctx->r4 = ADD32(ctx->r4, -0X6630);
    // 0x15008850: jal         0x100226F0
    // 0x15008854: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x15008854: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x15008858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1500885C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15008860: jr          $ra
    // 0x15008864: nop

    return;
    return;
    // 0x15008864: nop

;}
RECOMP_FUNC void func_1515C158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515C158: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1515C15C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x1515C160: addiu       $a1, $a1, -0x2E70
    ctx->r5 = ADD32(ctx->r5, -0X2E70);
    // 0x1515C164: addiu       $v1, $v1, -0x31B0
    ctx->r3 = ADD32(ctx->r3, -0X31B0);
    // 0x1515C168: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x1515C16C: lw          $v0, 0xC8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC8);
L_1515C170:
    // 0x1515C170: addiu       $v1, $v1, 0x1A0
    ctx->r3 = ADD32(ctx->r3, 0X1A0);
    // 0x1515C174: beq         $v0, $zero, L_1515C190
    if (ctx->r2 == 0) {
        // 0x1515C178: nop
    
            goto L_1515C190;
    }
    // 0x1515C178: nop

    // 0x1515C17C: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
L_1515C180:
    // 0x1515C180: sw          $a0, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r4;
    // 0x1515C184: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x1515C188: bnel        $v0, $zero, L_1515C180
    if (ctx->r2 != 0) {
        // 0x1515C18C: sw          $zero, 0x44($v0)
        MEM_W(0X44, ctx->r2) = 0;
            goto L_1515C180;
    }
    goto skip_0;
    // 0x1515C18C: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    skip_0:
L_1515C190:
    // 0x1515C190: bnel        $v1, $a1, L_1515C170
    if (ctx->r3 != ctx->r5) {
        // 0x1515C194: lw          $v0, 0xC8($v1)
        ctx->r2 = MEM_W(ctx->r3, 0XC8);
            goto L_1515C170;
    }
    goto skip_1;
    // 0x1515C194: lw          $v0, 0xC8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC8);
    skip_1:
    // 0x1515C198: jr          $ra
    // 0x1515C19C: nop

    return;
    return;
    // 0x1515C19C: nop

;}
RECOMP_FUNC void func_1500ED80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500ED80: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1500ED84: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1500ED88: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1500ED8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500ED90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1500ED94: addiu       $t6, $zero, 0x4BB
    ctx->r14 = ADD32(0, 0X4BB);
    // 0x1500ED98: addiu       $t7, $zero, 0x3A98
    ctx->r15 = ADD32(0, 0X3A98);
    // 0x1500ED9C: addiu       $t8, $zero, 0x4D
    ctx->r24 = ADD32(0, 0X4D);
    // 0x1500EDA0: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x1500EDA4: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x1500EDA8: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x1500EDAC: addiu       $t2, $zero, 0x7F
    ctx->r10 = ADD32(0, 0X7F);
    // 0x1500EDB0: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x1500EDB4: addiu       $t4, $zero, 0x7F
    ctx->r12 = ADD32(0, 0X7F);
    // 0x1500EDB8: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x1500EDBC: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x1500EDC0: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x1500EDC4: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x1500EDC8: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x1500EDCC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x1500EDD0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x1500EDD4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x1500EDD8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x1500EDDC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1500EDE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500EDE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1500EDE8: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    // 0x1500EDEC: addiu       $a2, $zero, -0xDAC
    ctx->r6 = ADD32(0, -0XDAC);
    // 0x1500EDF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1500EDF4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x1500EDF8: jal         0x15177410
    // 0x1500EDFC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_15177410(rdram, ctx);
        goto after_0;
    // 0x1500EDFC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1500EE00: jal         0x150124A0
    // 0x1500EE04: nop

    func_150124A0(rdram, ctx);
        goto after_1;
    // 0x1500EE04: nop

    after_1:
    // 0x1500EE08: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1500EE0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1500EE10: jr          $ra
    // 0x1500EE14: nop

    return;
    return;
    // 0x1500EE14: nop

;}
RECOMP_FUNC void func_15073054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073054: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15073058: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507305C: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15073060: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x15073064: sh          $t6, 0x22E($t7)
    MEM_H(0X22E, ctx->r15) = ctx->r14;
    // 0x15073068: jr          $ra
    // 0x1507306C: nop

    return;
    return;
    // 0x1507306C: nop

;}
RECOMP_FUNC void func_15055A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15055A2C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15055A30: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15055A34: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x15055A38: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x15055A3C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x15055A40: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x15055A44: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x15055A48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15055A4C: addiu       $v1, $zero, 0x3E8
    ctx->r3 = ADD32(0, 0X3E8);
    // 0x15055A50: bne         $t6, $at, L_15055A60
    if (ctx->r14 != ctx->r1) {
        // 0x15055A54: addiu       $a0, $zero, 0x60D
        ctx->r4 = ADD32(0, 0X60D);
            goto L_15055A60;
    }
    // 0x15055A54: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    // 0x15055A58: b           L_15055A88
    // 0x15055A5C: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
        goto L_15055A88;
    // 0x15055A5C: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
L_15055A60:
    // 0x15055A60: jal         0x150ADA20
    // 0x15055A64: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15055A64: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_0:
    // 0x15055A68: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15055A6C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15055A70: mfhi        $t7
    ctx->r15 = hi;
    // 0x15055A74: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x15055A78: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x15055A7C: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x15055A80: lhu         $a0, -0x6E64($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X6E64);
    // 0x15055A84: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
L_15055A88:
    // 0x15055A88: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x15055A8C: jal         0x150ADA20
    // 0x15055A90: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15055A90: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_1:
    // 0x15055A94: addiu       $at, $zero, 0x1F4
    ctx->r1 = ADD32(0, 0X1F4);
    // 0x15055A98: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15055A9C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15055AA0: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15055AA4: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15055AA8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15055AAC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x15055AB0: mfhi        $a2
    ctx->r6 = hi;
    // 0x15055AB4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15055AB8: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x15055ABC: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x15055AC0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15055AC4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x15055AC8: addiu       $t7, $zero, 0xBB8
    ctx->r15 = ADD32(0, 0XBB8);
    // 0x15055ACC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x15055AD0: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x15055AD4: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15055AD8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x15055ADC: addiu       $a1, $zero, 0x7FBC
    ctx->r5 = ADD32(0, 0X7FBC);
    // 0x15055AE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15055AE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15055AE8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x15055AEC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15055AF0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x15055AF4: jal         0x10010F88
    // 0x15055AF8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_10010F88(rdram, ctx);
        goto after_2;
    // 0x15055AF8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_2:
    // 0x15055AFC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15055B00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15055B04: jr          $ra
    // 0x15055B08: nop

    return;
    return;
    // 0x15055B08: nop

;}
RECOMP_FUNC void func_150F0390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F0390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F0394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F0398: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F039C: jal         0x150F03E8
    // 0x150F03A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F03E8(rdram, ctx);
        goto after_0;
    // 0x150F03A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F03A4: jal         0x151617C4
    // 0x150F03A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151617C4(rdram, ctx);
        goto after_1;
    // 0x150F03A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F03AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F03B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F03B4: jr          $ra
    // 0x150F03B8: nop

    return;
    return;
    // 0x150F03B8: nop

;}
RECOMP_FUNC void func_150D3FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D3FD4: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x150D3FD8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150D3FDC: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x150D3FE0: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x150D3FE4: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x150D3FE8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x150D3FEC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150D3FF0: lw          $t6, 0x98($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X98);
    // 0x150D3FF4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150D3FF8: lbu         $t7, 0x35EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35EA);
    // 0x150D3FFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150D4000: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x150D4004: beq         $t7, $at, L_150D4058
    if (ctx->r15 == ctx->r1) {
        // 0x150D4008: lw          $t0, 0x94($a2)
        ctx->r8 = MEM_W(ctx->r6, 0X94);
            goto L_150D4058;
    }
    // 0x150D4008: lw          $t0, 0x94($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X94);
    // 0x150D400C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x150D4010: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
    // 0x150D4014: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x150D4018: jal         0x1515C0F8
    // 0x150D401C: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    func_1515C0F8(rdram, ctx);
        goto after_0;
    // 0x150D401C: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    after_0:
    // 0x150D4020: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x150D4024: beq         $v0, $zero, L_150D404C
    if (ctx->r2 == 0) {
        // 0x150D4028: lw          $t0, 0x88($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X88);
            goto L_150D404C;
    }
    // 0x150D4028: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x150D402C: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x150D4030: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x150D4034: jal         0x15143E64
    // 0x150D4038: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
    func_15143E64(rdram, ctx);
        goto after_1;
    // 0x150D4038: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
    after_1:
    // 0x150D403C: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x150D4040: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x150D4044: b           L_150D4088
    // 0x150D4048: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_150D4088;
    // 0x150D4048: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_150D404C:
    // 0x150D404C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150D4050: b           L_150D408C
    // 0x150D4054: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
        goto L_150D408C;
    // 0x150D4054: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_150D4058:
    // 0x150D4058: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x150D405C: lw          $t9, -0x4010($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4010);
    // 0x150D4060: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x150D4064: lw          $t1, 0x5F0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X5F0);
    // 0x150D4068: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x150D406C: beql        $t2, $zero, L_150D4084
    if (ctx->r10 == 0) {
        // 0x150D4070: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_150D4084;
    }
    goto skip_0;
    // 0x150D4070: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x150D4074: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150D4078: b           L_150D408C
    // 0x150D407C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
        goto L_150D408C;
    // 0x150D407C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150D4080: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_150D4084:
    // 0x150D4084: nop

L_150D4088:
    // 0x150D4088: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_150D408C:
    // 0x150D408C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150D4090: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x150D4094: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150D4098: nop

    // 0x150D409C: bc1fl       L_150D40B4
    if (!c1cs) {
        // 0x150D40A0: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_150D40B4;
    }
    goto skip_1;
    // 0x150D40A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_1:
    // 0x150D40A4: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x150D40A8: b           L_150D40FC
    // 0x150D40AC: lb          $v1, 0x2C($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X2C);
        goto L_150D40FC;
    // 0x150D40AC: lb          $v1, 0x2C($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X2C);
    // 0x150D40B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_150D40B4:
    // 0x150D40B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D40B8: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x150D40BC: nop

    // 0x150D40C0: bc1fl       L_150D40DC
    if (!c1cs) {
        // 0x150D40C4: sub.s       $f6, $f2, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_150D40DC;
    }
    goto skip_2;
    // 0x150D40C4: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
    skip_2:
    // 0x150D40C8: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x150D40CC: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150D40D0: b           L_150D40FC
    // 0x150D40D4: lb          $v1, 0x2C($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X2C);
        goto L_150D40FC;
    // 0x150D40D4: lb          $v1, 0x2C($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X2C);
    // 0x150D40D8: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
L_150D40DC:
    // 0x150D40DC: lwc1        $f8, 0xA10($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XA10);
    // 0x150D40E0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x150D40E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D40E8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150D40EC: nop

    // 0x150D40F0: mul.s       $f26, $f10, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150D40F4: nop

    // 0x150D40F8: lb          $v1, 0x2C($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X2C);
L_150D40FC:
    // 0x150D40FC: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x150D4100: bnel        $at, $zero, L_150D427C
    if (ctx->r1 != 0) {
        // 0x150D4104: slti        $at, $v1, 0x2
        ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_150D427C;
    }
    goto skip_3;
    // 0x150D4104: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    skip_3:
    // 0x150D4108: lb          $a0, 0x2E($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X2E);
    // 0x150D410C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x150D4110: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x150D4114: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x150D4118: bgezl       $a0, L_150D412C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x150D411C: lb          $v0, 0x2D($a2)
        ctx->r2 = MEM_B(ctx->r6, 0X2D);
            goto L_150D412C;
    }
    goto skip_4;
    // 0x150D411C: lb          $v0, 0x2D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X2D);
    skip_4:
    // 0x150D4120: lbu         $a0, 0x25($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X25);
    // 0x150D4124: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x150D4128: lb          $v0, 0x2D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X2D);
L_150D412C:
    // 0x150D412C: beq         $a0, $v0, L_150D4244
    if (ctx->r4 == ctx->r2) {
        // 0x150D4130: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_150D4244;
    }
    // 0x150D4130: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_150D4134:
    // 0x150D4134: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x150D4138: bgez        $a0, L_150D4148
    if (SIGNED(ctx->r4) >= 0) {
        // 0x150D413C: nop
    
            goto L_150D4148;
    }
    // 0x150D413C: nop

    // 0x150D4140: lbu         $a0, 0x25($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X25);
    // 0x150D4144: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_150D4148:
    // 0x150D4148: multu       $a1, $a3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150D414C: mflo        $t3
    ctx->r11 = lo;
    // 0x150D4150: addu        $v1, $t3, $t0
    ctx->r3 = ADD32(ctx->r11, ctx->r8);
    // 0x150D4154: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x150D4158: add.s       $f24, $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f16.fl;
    // 0x150D415C: c.lt.s      $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f26.fl < ctx->f24.fl;
    // 0x150D4160: nop

    // 0x150D4164: bc1f        L_150D4238
    if (!c1cs) {
        // 0x150D4168: nop
    
            goto L_150D4238;
    }
    // 0x150D4168: nop

    // 0x150D416C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150D4170: nop

    // 0x150D4174: c.eq.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl == ctx->f16.fl;
    // 0x150D4178: nop

    // 0x150D417C: bc1t        L_150D4200
    if (c1cs) {
        // 0x150D4180: nop
    
            goto L_150D4200;
    }
    // 0x150D4180: nop

    // 0x150D4184: sub.s       $f8, $f24, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f24.fl - ctx->f26.fl;
    // 0x150D4188: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150D418C: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150D4190: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x150D4194: div.s       $f14, $f8, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x150D4198: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150D419C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150D41A0: mflo        $t4
    ctx->r12 = lo;
    // 0x150D41A4: addu        $v0, $t4, $t0
    ctx->r2 = ADD32(ctx->r12, ctx->r8);
    // 0x150D41A8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150D41AC: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150D41B0: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150D41B4: sub.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x150D41B8: sub.s       $f20, $f2, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x150D41BC: mul.s       $f8, $f18, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x150D41C0: sub.s       $f22, $f12, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x150D41C4: mul.s       $f4, $f20, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x150D41C8: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x150D41CC: mul.s       $f8, $f22, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f14.fl);
    // 0x150D41D0: sub.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x150D41D4: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x150D41D8: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x150D41DC: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x150D41E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D41E4: nop

    // 0x150D41E8: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x150D41EC: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x150D41F0: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x150D41F4: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x150D41F8: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
    // 0x150D41FC: lb          $v0, 0x2D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X2D);
L_150D4200:
    // 0x150D4200: beq         $a0, $v0, L_150D4238
    if (ctx->r4 == ctx->r2) {
        // 0x150D4204: mov.s       $f24, $f26
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    ctx->f24.fl = ctx->f26.fl;
            goto L_150D4238;
    }
    // 0x150D4204: mov.s       $f24, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    ctx->f24.fl = ctx->f26.fl;
L_150D4208:
    // 0x150D4208: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x150D420C: sb          $t5, 0x2D($a2)
    MEM_B(0X2D, ctx->r6) = ctx->r13;
    // 0x150D4210: lb          $v0, 0x2D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X2D);
    // 0x150D4214: lbu         $t6, 0x25($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X25);
    // 0x150D4218: bnel        $t6, $v0, L_150D422C
    if (ctx->r14 != ctx->r2) {
        // 0x150D421C: lb          $t7, 0x2C($a2)
        ctx->r15 = MEM_B(ctx->r6, 0X2C);
            goto L_150D422C;
    }
    goto skip_5;
    // 0x150D421C: lb          $t7, 0x2C($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X2C);
    skip_5:
    // 0x150D4220: sb          $zero, 0x2D($a2)
    MEM_B(0X2D, ctx->r6) = 0;
    // 0x150D4224: lb          $v0, 0x2D($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X2D);
    // 0x150D4228: lb          $t7, 0x2C($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X2C);
L_150D422C:
    // 0x150D422C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x150D4230: bne         $a0, $v0, L_150D4208
    if (ctx->r4 != ctx->r2) {
        // 0x150D4234: sb          $t8, 0x2C($a2)
        MEM_B(0X2C, ctx->r6) = ctx->r24;
            goto L_150D4208;
    }
    // 0x150D4234: sb          $t8, 0x2C($a2)
    MEM_B(0X2C, ctx->r6) = ctx->r24;
L_150D4238:
    // 0x150D4238: bnel        $a0, $v0, L_150D4134
    if (ctx->r4 != ctx->r2) {
        // 0x150D423C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_150D4134;
    }
    goto skip_6;
    // 0x150D423C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    skip_6:
    // 0x150D4240: lb          $v1, 0x2C($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X2C);
L_150D4244:
    // 0x150D4244: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150D4248: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150D424C: c.eq.s      $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f24.fl == ctx->f6.fl;
    // 0x150D4250: nop

    // 0x150D4254: bc1tl       L_150D426C
    if (c1cs) {
        // 0x150D4258: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_150D426C;
    }
    goto skip_7;
    // 0x150D4258: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_7:
    // 0x150D425C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D4260: b           L_150D4270
    // 0x150D4264: div.s       $f12, $f4, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f24.fl);
        goto L_150D4270;
    // 0x150D4264: div.s       $f12, $f4, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f24.fl);
    // 0x150D4268: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_150D426C:
    // 0x150D426C: nop

L_150D4270:
    // 0x150D4270: swc1        $f12, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f12.u32l;
    // 0x150D4274: swc1        $f24, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f24.u32l;
    // 0x150D4278: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
L_150D427C:
    // 0x150D427C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x150D4280: lwc1        $f12, 0x80($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150D4284: bne         $at, $zero, L_150D42E0
    if (ctx->r1 != 0) {
        // 0x150D4288: lwc1        $f24, 0x84($sp)
        ctx->f24.u32l = MEM_W(ctx->r29, 0X84);
            goto L_150D42E0;
    }
    // 0x150D4288: lwc1        $f24, 0x84($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X84);
    // 0x150D428C: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x150D4290: lb          $v0, 0x2E($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X2E);
    // 0x150D4294: mov.s       $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    ctx->f0.fl = ctx->f24.fl;
    // 0x150D4298: lwc1        $f8, 0x14($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X14);
    // 0x150D429C: mul.s       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x150D42A0: nop

    // 0x150D42A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_150D42A8:
    // 0x150D42A8: bgez        $v0, L_150D42B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150D42AC: nop
    
            goto L_150D42B8;
    }
    // 0x150D42AC: nop

    // 0x150D42B0: lbu         $v0, 0x25($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X25);
    // 0x150D42B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_150D42B8:
    // 0x150D42B8: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150D42BC: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150D42C0: mflo        $t1
    ctx->r9 = lo;
    // 0x150D42C4: addu        $v1, $t1, $t0
    ctx->r3 = ADD32(ctx->r9, ctx->r8);
    // 0x150D42C8: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x150D42CC: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x150D42D0: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x150D42D4: lb          $t2, 0x2D($a2)
    ctx->r10 = MEM_B(ctx->r6, 0X2D);
    // 0x150D42D8: bnel        $v0, $t2, L_150D42A8
    if (ctx->r2 != ctx->r10) {
        // 0x150D42DC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_150D42A8;
    }
    goto skip_8;
    // 0x150D42DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_8:
L_150D42E0:
    // 0x150D42E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150D42E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150D42E8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x150D42EC: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x150D42F0: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x150D42F4: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x150D42F8: jr          $ra
    // 0x150D42FC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    return;
    // 0x150D42FC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_15179B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15179B14: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x15179B18: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x15179B1C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15179B20: addiu       $v0, $v0, -0x2BC8
    ctx->r2 = ADD32(ctx->r2, -0X2BC8);
    // 0x15179B24: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x15179B28: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15179B2C: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x15179B30: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x15179B34: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x15179B38: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x15179B3C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x15179B40: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x15179B44: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x15179B48: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15179B4C: lh          $s5, 0x0($v0)
    ctx->r21 = MEM_H(ctx->r2, 0X0);
    // 0x15179B50: lh          $s6, 0x4($v0)
    ctx->r22 = MEM_H(ctx->r2, 0X4);
    // 0x15179B54: blez        $s7, L_15179C80
    if (SIGNED(ctx->r23) <= 0) {
        // 0x15179B58: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_15179C80;
    }
    // 0x15179B58: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15179B5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15179B60: lwc1        $f20, 0x7208($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7208);
    // 0x15179B64: addiu       $s4, $sp, 0x48
    ctx->r20 = ADD32(ctx->r29, 0X48);
    // 0x15179B68: addiu       $s3, $zero, 0x1F4
    ctx->r19 = ADD32(0, 0X1F4);
L_15179B6C:
    // 0x15179B6C: jal         0x150ADA20
    // 0x15179B70: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15179B70: nop

    after_0:
    // 0x15179B74: div         $zero, $v0, $s3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r19)));
    // 0x15179B78: mfhi        $t6
    ctx->r14 = hi;
    // 0x15179B7C: addu        $s0, $t6, $s5
    ctx->r16 = ADD32(ctx->r14, ctx->r21);
    // 0x15179B80: bne         $s3, $zero, L_15179B8C
    if (ctx->r19 != 0) {
        // 0x15179B84: nop
    
            goto L_15179B8C;
    }
    // 0x15179B84: nop

    // 0x15179B88: break       7
    do_break(353868680);
L_15179B8C:
    // 0x15179B8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15179B90: bne         $s3, $at, L_15179BA4
    if (ctx->r19 != ctx->r1) {
        // 0x15179B94: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15179BA4;
    }
    // 0x15179B94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15179B98: bne         $v0, $at, L_15179BA4
    if (ctx->r2 != ctx->r1) {
        // 0x15179B9C: nop
    
            goto L_15179BA4;
    }
    // 0x15179B9C: nop

    // 0x15179BA0: break       6
    do_break(353868704);
L_15179BA4:
    // 0x15179BA4: jal         0x150ADA20
    // 0x15179BA8: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15179BA8: nop

    after_1:
    // 0x15179BAC: div         $zero, $v0, $s3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r19)));
    // 0x15179BB0: mfhi        $t7
    ctx->r15 = hi;
    // 0x15179BB4: addu        $a2, $t7, $s6
    ctx->r6 = ADD32(ctx->r15, ctx->r22);
    // 0x15179BB8: bne         $s3, $zero, L_15179BC4
    if (ctx->r19 != 0) {
        // 0x15179BBC: nop
    
            goto L_15179BC4;
    }
    // 0x15179BBC: nop

    // 0x15179BC0: break       7
    do_break(353868736);
L_15179BC4:
    // 0x15179BC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15179BC8: bne         $s3, $at, L_15179BDC
    if (ctx->r19 != ctx->r1) {
        // 0x15179BCC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15179BDC;
    }
    // 0x15179BCC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15179BD0: bne         $v0, $at, L_15179BDC
    if (ctx->r2 != ctx->r1) {
        // 0x15179BD4: nop
    
            goto L_15179BDC;
    }
    // 0x15179BD4: nop

    // 0x15179BD8: break       6
    do_break(353868760);
L_15179BDC:
    // 0x15179BDC: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x15179BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15179BE4: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    // 0x15179BE8: jal         0x1510F8D8
    // 0x15179BEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510F8D8(rdram, ctx);
        goto after_2;
    // 0x15179BEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x15179BF0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15179BF4: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x15179BF8: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x15179BFC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15179C00: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
    // 0x15179C04: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x15179C08: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x15179C0C: ori         $t3, $zero, 0x9804
    ctx->r11 = 0 | 0X9804;
    // 0x15179C10: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15179C14: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x15179C18: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15179C1C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15179C20: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x15179C24: bc1t        L_15179C74
    if (c1cs) {
        // 0x15179C28: addiu       $t4, $zero, 0xFF
        ctx->r12 = ADD32(0, 0XFF);
            goto L_15179C74;
    }
    // 0x15179C28: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15179C2C: sw          $zero, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = 0;
    // 0x15179C30: sh          $t8, 0xD2($sp)
    MEM_H(0XD2, ctx->r29) = ctx->r24;
    // 0x15179C34: sh          $s0, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = ctx->r16;
    // 0x15179C38: sh          $v0, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r2;
    // 0x15179C3C: sh          $s1, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = ctx->r17;
    // 0x15179C40: sh          $t9, 0xDC($sp)
    MEM_H(0XDC, ctx->r29) = ctx->r25;
    // 0x15179C44: sh          $t0, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = ctx->r8;
    // 0x15179C48: sh          $zero, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = 0;
    // 0x15179C4C: sb          $t1, 0xEA($sp)
    MEM_B(0XEA, ctx->r29) = ctx->r9;
    // 0x15179C50: sb          $t2, 0xE8($sp)
    MEM_B(0XE8, ctx->r29) = ctx->r10;
    // 0x15179C54: sh          $t3, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = ctx->r11;
    // 0x15179C58: sb          $zero, 0xE9($sp)
    MEM_B(0XE9, ctx->r29) = 0;
    // 0x15179C5C: jal         0x1516865C
    // 0x15179C60: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_1516865C(rdram, ctx);
        goto after_3;
    // 0x15179C60: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_3:
    // 0x15179C64: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15179C68: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15179C6C: jal         0x15168800
    // 0x15179C70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15168800(rdram, ctx);
        goto after_4;
    // 0x15179C70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_15179C74:
    // 0x15179C74: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15179C78: bne         $s2, $s7, L_15179B6C
    if (ctx->r18 != ctx->r23) {
        // 0x15179C7C: nop
    
            goto L_15179B6C;
    }
    // 0x15179C7C: nop

L_15179C80:
    // 0x15179C80: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15179C84: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15179C88: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x15179C8C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x15179C90: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x15179C94: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x15179C98: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x15179C9C: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x15179CA0: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x15179CA4: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x15179CA8: jr          $ra
    // 0x15179CAC: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    return;
    // 0x15179CAC: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_151C1D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C1D5C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x151C1D60: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x151C1D64: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x151C1D68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151C1D6C: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x151C1D70: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x151C1D74: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x151C1D78: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x151C1D7C: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x151C1D80: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x151C1D84: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x151C1D88: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x151C1D8C: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x151C1D90: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x151C1D94: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x151C1D98: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x151C1D9C: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x151C1DA0: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x151C1DA4: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x151C1DA8: addiu       $t7, $sp, 0x98
    ctx->r15 = ADD32(ctx->r29, 0X98);
    // 0x151C1DAC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x151C1DB0: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x151C1DB4: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x151C1DB8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151C1DBC: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151C1DC0: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x151C1DC4: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x151C1DC8: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x151C1DCC: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x151C1DD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C1DD4: lwc1        $f20, -0x563C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X563C);
    // 0x151C1DD8: lw          $s1, 0xD8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD8);
    // 0x151C1DDC: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x151C1DE0: lw          $s4, 0xC0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC0);
    // 0x151C1DE4: lw          $s5, 0xC4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XC4);
    // 0x151C1DE8: lb          $s6, 0xCB($sp)
    ctx->r22 = MEM_B(ctx->r29, 0XCB);
    // 0x151C1DEC: lw          $s7, 0xCC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XCC);
    // 0x151C1DF0: lw          $fp, 0xDC($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XDC);
    // 0x151C1DF4: lwc1        $f24, 0xB8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x151C1DF8: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x151C1DFC: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
L_151C1E00:
    // 0x151C1E00: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x151C1E04: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x151C1E08: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x151C1E0C: lwc1        $f6, 0x4($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X4);
    // 0x151C1E10: lw          $a2, 0x9C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X9C);
    // 0x151C1E14: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x151C1E18: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x151C1E1C: lwc1        $f8, 0x8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X8);
    // 0x151C1E20: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x151C1E24: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x151C1E28: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x151C1E2C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x151C1E30: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x151C1E34: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x151C1E38: swc1        $f24, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f24.u32l;
    // 0x151C1E3C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x151C1E40: jal         0x15081690
    // 0x151C1E44: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_15081690(rdram, ctx);
        goto after_0;
    // 0x151C1E44: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x151C1E48: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x151C1E4C: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151C1E50: beq         $v0, $zero, L_151C1F50
    if (ctx->r2 == 0) {
        // 0x151C1E54: add.s       $f22, $f22, $f10
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f10.fl;
            goto L_151C1F50;
    }
    // 0x151C1E54: add.s       $f22, $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f10.fl;
    // 0x151C1E58: lbu         $t1, 0x4F($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X4F);
    // 0x151C1E5C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151C1E60: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x151C1E64: andi        $t2, $t1, 0x60
    ctx->r10 = ctx->r9 & 0X60;
    // 0x151C1E68: bne         $t2, $at, L_151C1F48
    if (ctx->r10 != ctx->r1) {
        // 0x151C1E6C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_151C1F48;
    }
    // 0x151C1E6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C1E70: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151C1E74: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151C1E78: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x151C1E7C: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x151C1E80: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x151C1E84: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x151C1E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151C1E8C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x151C1E90: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x151C1E94: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151C1E98: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151C1E9C: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x151C1EA0: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x151C1EA4: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    // 0x151C1EA8: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151C1EAC: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151C1EB0: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x151C1EB4: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x151C1EB8: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x151C1EBC: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151C1EC0: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151C1EC4: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x151C1EC8: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x151C1ECC: lw          $at, 0x10($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X10);
    // 0x151C1ED0: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151C1ED4: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x151C1ED8: swc1        $f22, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f22.u32l;
    // 0x151C1EDC: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151C1EE0: add.s       $f22, $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f20.fl;
    // 0x151C1EE4: swc1        $f18, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f18.u32l;
    // 0x151C1EE8: lwl         $at, 0x44($s0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r16, 0X44);
    // 0x151C1EEC: lwr         $at, 0x47($s0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r16, 0X47);
    // 0x151C1EF0: swl         $at, 0x4($s1)
    do_swl(rdram, 0X4, ctx->r17, ctx->r1);
    // 0x151C1EF4: swr         $at, 0x7($s1)
    do_swr(rdram, 0X7, ctx->r17, ctx->r1);
    // 0x151C1EF8: lwl         $t8, 0x48($s0)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r16, 0X48);
    // 0x151C1EFC: lwr         $t8, 0x4B($s0)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r16, 0X4B);
    // 0x151C1F00: swl         $t8, 0x8($s1)
    do_swl(rdram, 0X8, ctx->r17, ctx->r24);
    // 0x151C1F04: swr         $t8, 0xB($s1)
    do_swr(rdram, 0XB, ctx->r17, ctx->r24);
    // 0x151C1F08: lwl         $at, 0x4C($s0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r16, 0X4C);
    // 0x151C1F0C: lwr         $at, 0x4F($s0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r16, 0X4F);
    // 0x151C1F10: swl         $at, 0xC($s1)
    do_swl(rdram, 0XC, ctx->r17, ctx->r1);
    // 0x151C1F14: swr         $at, 0xF($s1)
    do_swr(rdram, 0XF, ctx->r17, ctx->r1);
    // 0x151C1F18: lwl         $t8, 0x50($s0)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r16, 0X50);
    // 0x151C1F1C: lwr         $t8, 0x53($s0)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r16, 0X53);
    // 0x151C1F20: swl         $t8, 0x10($s1)
    do_swl(rdram, 0X10, ctx->r17, ctx->r24);
    // 0x151C1F24: swr         $t8, 0x13($s1)
    do_swr(rdram, 0X13, ctx->r17, ctx->r24);
    // 0x151C1F28: lhu         $at, 0x54($s0)
    ctx->r1 = MEM_HU(ctx->r16, 0X54);
    // 0x151C1F2C: sh          $at, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r1;
    // 0x151C1F30: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x151C1F34: sb          $t1, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r9;
    // 0x151C1F38: sb          $t2, 0x1D($s1)
    MEM_B(0X1D, ctx->r17) = ctx->r10;
    // 0x151C1F3C: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x151C1F40: b           L_151C1F54
    // 0x151C1F44: sw          $t0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r8;
        goto L_151C1F54;
    // 0x151C1F44: sw          $t0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r8;
L_151C1F48:
    // 0x151C1F48: b           L_151C1F54
    // 0x151C1F4C: nop

        goto L_151C1F54;
    // 0x151C1F4C: nop

L_151C1F50:
    // 0x151C1F50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C1F54:
    // 0x151C1F54: bnel        $v0, $zero, L_151C1E00
    if (ctx->r2 != 0) {
        // 0x151C1F58: lwc1        $f4, 0x0($s2)
        ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
            goto L_151C1E00;
    }
    goto skip_0;
    // 0x151C1F58: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    skip_0:
    // 0x151C1F5C: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x151C1F60: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x151C1F64: sw          $at, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r1;
    // 0x151C1F68: lw          $t3, 0x4($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X4);
    // 0x151C1F6C: sw          $t3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r11;
    // 0x151C1F70: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x151C1F74: swc1        $f22, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f22.u32l;
    // 0x151C1F78: sw          $at, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r1;
    // 0x151C1F7C: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x151C1F80: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x151C1F84: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x151C1F88: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x151C1F8C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x151C1F90: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x151C1F94: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x151C1F98: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x151C1F9C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x151C1FA0: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x151C1FA4: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x151C1FA8: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x151C1FAC: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x151C1FB0: jr          $ra
    // 0x151C1FB4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    return;
    // 0x151C1FB4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_15166FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15166FD8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15166FDC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15166FE0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15166FE4: lui         $t6, 0xDA38
    ctx->r14 = S32(0XDA38 << 16);
    // 0x15166FE8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15166FEC: addiu       $t7, $t7, -0x6B90
    ctx->r15 = ADD32(ctx->r15, -0X6B90);
    // 0x15166FF0: ori         $t6, $t6, 0x3
    ctx->r14 = ctx->r14 | 0X3;
    // 0x15166FF4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x15166FF8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x15166FFC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15167000: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15167004: jr          $ra
    // 0x15167008: nop

    return;
    return;
    // 0x15167008: nop

;}
RECOMP_FUNC void func_1507EFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507EFA0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x1507EFA4: addiu       $v1, $a1, 0x4
    ctx->r3 = ADD32(ctx->r5, 0X4);
L_1507EFA8:
    // 0x1507EFA8: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x1507EFAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1507EFB0: bne         $a0, $t6, L_1507EFC0
    if (ctx->r4 != ctx->r14) {
        // 0x1507EFB4: nop
    
            goto L_1507EFC0;
    }
    // 0x1507EFB4: nop

    // 0x1507EFB8: jr          $ra
    // 0x1507EFBC: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    return;
    return;
    // 0x1507EFBC: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_1507EFC0:
    // 0x1507EFC0: bgez        $v0, L_1507EFA8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1507EFC4: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_1507EFA8;
    }
    // 0x1507EFC4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1507EFC8: jr          $ra
    // 0x1507EFCC: nop

    return;
    return;
    // 0x1507EFCC: nop

;}
RECOMP_FUNC void func_1514E87C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514E87C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514E880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514E884: jal         0x1515F10C
    // 0x1514E888: nop

    func_1515F10C(rdram, ctx);
        goto after_0;
    // 0x1514E888: nop

    after_0:
    // 0x1514E88C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514E890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514E894: jr          $ra
    // 0x1514E898: nop

    return;
    return;
    // 0x1514E898: nop

;}
RECOMP_FUNC void func_151AD174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AD174: addiu       $sp, $sp, -0x308
    ctx->r29 = ADD32(ctx->r29, -0X308);
    // 0x151AD178: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x151AD17C: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x151AD180: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x151AD184: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151AD188: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x151AD18C: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x151AD190: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x151AD194: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x151AD198: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x151AD19C: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x151AD1A0: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x151AD1A4: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x151AD1A8: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x151AD1AC: swc1        $f22, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f22.u32l;
    // 0x151AD1B0: lh          $v0, 0x52($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X52);
    // 0x151AD1B4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151AD1B8: beql        $v0, $zero, L_151AD1E0
    if (ctx->r2 == 0) {
        // 0x151AD1BC: lbu         $t9, 0x42($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X42);
            goto L_151AD1E0;
    }
    goto skip_0;
    // 0x151AD1BC: lbu         $t9, 0x42($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X42);
    skip_0:
    // 0x151AD1C0: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x151AD1C4: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x151AD1C8: sh          $t7, 0x52($s0)
    MEM_H(0X52, ctx->r16) = ctx->r15;
    // 0x151AD1CC: lh          $t8, 0x52($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X52);
    // 0x151AD1D0: bgezl       $t8, L_151AD1E0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x151AD1D4: lbu         $t9, 0x42($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X42);
            goto L_151AD1E0;
    }
    goto skip_1;
    // 0x151AD1D4: lbu         $t9, 0x42($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X42);
    skip_1:
    // 0x151AD1D8: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x151AD1DC: lbu         $t9, 0x42($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X42);
L_151AD1E0:
    // 0x151AD1E0: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x151AD1E4: sw          $t6, 0x2F8($sp)
    MEM_W(0X2F8, ctx->r29) = ctx->r14;
    // 0x151AD1E8: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x151AD1EC: beql        $v1, $zero, L_151AD320
    if (ctx->r3 == 0) {
        // 0x151AD1F0: lwc1        $f10, 0x4C($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
            goto L_151AD320;
    }
    goto skip_2;
    // 0x151AD1F0: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    skip_2:
    // 0x151AD1F4: lw          $v0, 0x31C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X31C);
    // 0x151AD1F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AD1FC: lwc1        $f6, -0x6D88($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6D88);
    // 0x151AD200: lbu         $t7, 0xAE($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XAE);
    // 0x151AD204: sw          $t7, 0x2F4($sp)
    MEM_W(0X2F4, ctx->r29) = ctx->r15;
    // 0x151AD208: lhu         $t9, 0x76($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X76);
    // 0x151AD20C: lbu         $t8, 0xAC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XAC);
    // 0x151AD210: lwc1        $f4, 0xA8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XA8);
    // 0x151AD214: sra         $t6, $t9, 8
    ctx->r14 = S32(SIGNED(ctx->r25) >> 8);
    // 0x151AD218: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x151AD21C: andi        $s2, $t7, 0xFF
    ctx->r18 = ctx->r15 & 0XFF;
    // 0x151AD220: mul.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151AD224: jal         0x150489B0
    // 0x151AD228: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_150489B0(rdram, ctx);
        goto after_0;
    // 0x151AD228: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_0:
    // 0x151AD22C: lw          $s3, 0x2F4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2F4);
    // 0x151AD230: mul.s       $f10, $f20, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x151AD234: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x151AD238: sll         $t9, $s3, 2
    ctx->r25 = S32(ctx->r19 << 2);
    // 0x151AD23C: subu        $t9, $t9, $s3
    ctx->r25 = SUB32(ctx->r25, ctx->r19);
    // 0x151AD240: sll         $s3, $t9, 3
    ctx->r19 = S32(ctx->r25 << 3);
    // 0x151AD244: addu        $s1, $t8, $s3
    ctx->r17 = ADD32(ctx->r24, ctx->r19);
    // 0x151AD248: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x151AD24C: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x151AD250: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151AD254: jal         0x15048A40
    // 0x151AD258: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    func_15048A40(rdram, ctx);
        goto after_1;
    // 0x151AD258: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    after_1:
    // 0x151AD25C: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x151AD260: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x151AD264: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x151AD268: addu        $s1, $t6, $s3
    ctx->r17 = ADD32(ctx->r14, ctx->r19);
    // 0x151AD26C: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x151AD270: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151AD274: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151AD278: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
    // 0x151AD27C: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x151AD280: lhu         $a1, 0x76($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X76);
    // 0x151AD284: lwc1        $f4, 0x3C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x151AD288: sra         $t7, $a1, 8
    ctx->r15 = S32(SIGNED(ctx->r5) >> 8);
    // 0x151AD28C: andi        $s2, $t7, 0xFF
    ctx->r18 = ctx->r15 & 0XFF;
    // 0x151AD290: mul.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151AD294: jal         0x150489B0
    // 0x151AD298: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_150489B0(rdram, ctx);
        goto after_2;
    // 0x151AD298: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_2:
    // 0x151AD29C: mul.s       $f10, $f20, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x151AD2A0: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x151AD2A4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x151AD2A8: addu        $s1, $t9, $s3
    ctx->r17 = ADD32(ctx->r25, ctx->r19);
    // 0x151AD2AC: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x151AD2B0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151AD2B4: jal         0x15048A40
    // 0x151AD2B8: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    func_15048A40(rdram, ctx);
        goto after_3;
    // 0x151AD2B8: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    after_3:
    // 0x151AD2BC: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x151AD2C0: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x151AD2C4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x151AD2C8: addu        $s1, $t8, $s3
    ctx->r17 = ADD32(ctx->r24, ctx->r19);
    // 0x151AD2CC: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x151AD2D0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151AD2D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151AD2D8: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
    // 0x151AD2DC: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x151AD2E0: addu        $s1, $t6, $s3
    ctx->r17 = ADD32(ctx->r14, ctx->r19);
    // 0x151AD2E4: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x151AD2E8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151AD2EC: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    // 0x151AD2F0: lw          $t7, 0x44($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X44);
    // 0x151AD2F4: lw          $v0, 0x31C($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X31C);
    // 0x151AD2F8: lbu         $v1, 0xAD($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XAD);
    // 0x151AD2FC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x151AD300: bgtzl       $v1, L_151AD31C
    if (SIGNED(ctx->r3) > 0) {
        // 0x151AD304: sb          $v1, 0xAD($v0)
        MEM_B(0XAD, ctx->r2) = ctx->r3;
            goto L_151AD31C;
    }
    goto skip_3;
    // 0x151AD304: sb          $v1, 0xAD($v0)
    MEM_B(0XAD, ctx->r2) = ctx->r3;
    skip_3:
    // 0x151AD308: swc1        $f22, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->f22.u32l;
    // 0x151AD30C: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x151AD310: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151AD314: lw          $v0, 0x31C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X31C);
    // 0x151AD318: sb          $v1, 0xAD($v0)
    MEM_B(0XAD, ctx->r2) = ctx->r3;
L_151AD31C:
    // 0x151AD31C: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
L_151AD320:
    // 0x151AD320: c.eq.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl == ctx->f10.fl;
    // 0x151AD324: nop

    // 0x151AD328: bc1tl       L_151AD3AC
    if (c1cs) {
        // 0x151AD32C: lw          $t0, 0x2F8($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2F8);
            goto L_151AD3AC;
    }
    goto skip_4;
    // 0x151AD32C: lw          $t0, 0x2F8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2F8);
    skip_4:
    // 0x151AD330: jal         0x150489B0
    // 0x151AD334: lbu         $a0, 0x50($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X50);
    func_150489B0(rdram, ctx);
        goto after_4;
    // 0x151AD334: lbu         $a0, 0x50($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X50);
    after_4:
    // 0x151AD338: lbu         $t6, 0x51($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X51);
    // 0x151AD33C: addiu       $s2, $zero, 0x18
    ctx->r18 = ADD32(0, 0X18);
    // 0x151AD340: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151AD344: multu       $t6, $s2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151AD348: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x151AD34C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151AD350: mflo        $t7
    ctx->r15 = lo;
    // 0x151AD354: addu        $s1, $t8, $t7
    ctx->r17 = ADD32(ctx->r24, ctx->r15);
    // 0x151AD358: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x151AD35C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151AD360: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x151AD364: jal         0x15048A40
    // 0x151AD368: lbu         $a0, 0x50($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X50);
    func_15048A40(rdram, ctx);
        goto after_5;
    // 0x151AD368: lbu         $a0, 0x50($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X50);
    after_5:
    // 0x151AD36C: lbu         $t6, 0x51($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X51);
    // 0x151AD370: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151AD374: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x151AD378: multu       $t6, $s2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151AD37C: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151AD380: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AD384: mflo        $t8
    ctx->r24 = lo;
    // 0x151AD388: addu        $s1, $t9, $t8
    ctx->r17 = ADD32(ctx->r25, ctx->r24);
    // 0x151AD38C: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x151AD390: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AD394: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
    // 0x151AD398: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151AD39C: lwc1        $f6, -0x6D84($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6D84);
    // 0x151AD3A0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151AD3A4: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
    // 0x151AD3A8: lw          $t0, 0x2F8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2F8);
L_151AD3AC:
    // 0x151AD3AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151AD3B0: addiu       $t2, $sp, 0x1EC
    ctx->r10 = ADD32(ctx->r29, 0X1EC);
    // 0x151AD3B4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x151AD3B8: blez        $t0, L_151AD430
    if (SIGNED(ctx->r8) <= 0) {
        // 0x151AD3BC: addiu       $a2, $sp, 0xFC
        ctx->r6 = ADD32(ctx->r29, 0XFC);
            goto L_151AD430;
    }
    // 0x151AD3BC: addiu       $a2, $sp, 0xFC
    ctx->r6 = ADD32(ctx->r29, 0XFC);
    // 0x151AD3C0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
L_151AD3C4:
    // 0x151AD3C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151AD3C8: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x151AD3CC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_151AD3D0:
    // 0x151AD3D0: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x151AD3D4: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x151AD3D8: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x151AD3DC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x151AD3E0: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x151AD3E4: addu        $t8, $t9, $a0
    ctx->r24 = ADD32(ctx->r25, ctx->r4);
    // 0x151AD3E8: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x151AD3EC: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x151AD3F0: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x151AD3F4: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x151AD3F8: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x151AD3FC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x151AD400: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x151AD404: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x151AD408: addu        $t8, $t9, $a0
    ctx->r24 = ADD32(ctx->r25, ctx->r4);
    // 0x151AD40C: lwc1        $f4, 0xC($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0XC);
    // 0x151AD410: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x151AD414: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x151AD418: bne         $a0, $a1, L_151AD3D0
    if (ctx->r4 != ctx->r5) {
        // 0x151AD41C: swc1        $f4, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
            goto L_151AD3D0;
    }
    // 0x151AD41C: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    // 0x151AD420: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x151AD424: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x151AD428: bne         $a3, $t0, L_151AD3C4
    if (ctx->r7 != ctx->r8) {
        // 0x151AD42C: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_151AD3C4;
    }
    // 0x151AD42C: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
L_151AD430:
    // 0x151AD430: lw          $v0, 0x2F8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2F8);
    // 0x151AD434: addiu       $t6, $sp, 0x1EC
    ctx->r14 = ADD32(ctx->r29, 0X1EC);
    // 0x151AD438: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x151AD43C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x151AD440: bltz        $v0, L_151AD84C
    if (SIGNED(ctx->r2) < 0) {
        // 0x151AD444: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_151AD84C;
    }
    // 0x151AD444: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x151AD448: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151AD44C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AD450: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AD454: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151AD458: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151AD45C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x151AD460: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AD464: lwc1        $f26, -0x6D80($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X6D80);
    // 0x151AD468: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AD46C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x151AD470: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x151AD474: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x151AD478: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x151AD47C: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x151AD480: lwc1        $f18, -0x6D7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6D7C);
    // 0x151AD484: sll         $s3, $v0, 2
    ctx->r19 = S32(ctx->r2 << 2);
    // 0x151AD488: subu        $s3, $s3, $v0
    ctx->r19 = SUB32(ctx->r19, ctx->r2);
    // 0x151AD48C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AD490: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151AD494: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x151AD498: addu        $s2, $t9, $t6
    ctx->r18 = ADD32(ctx->r25, ctx->r14);
    // 0x151AD49C: addu        $t2, $t7, $t6
    ctx->r10 = ADD32(ctx->r15, ctx->r14);
    // 0x151AD4A0: ldc1        $f16, -0x6D78($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X6D78);
    // 0x151AD4A4: sll         $s3, $s3, 3
    ctx->r19 = S32(ctx->r19 << 3);
    // 0x151AD4A8: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x151AD4AC: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x151AD4B0: addiu       $s1, $sp, 0x2F4
    ctx->r17 = ADD32(ctx->r29, 0X2F4);
    // 0x151AD4B4: addiu       $ra, $sp, 0xE8
    ctx->r31 = ADD32(ctx->r29, 0XE8);
    // 0x151AD4B8: addiu       $t5, $zero, 0x39
    ctx->r13 = ADD32(0, 0X39);
    // 0x151AD4BC: addiu       $t4, $sp, 0xE8
    ctx->r12 = ADD32(ctx->r29, 0XE8);
    // 0x151AD4C0: addiu       $t3, $sp, 0xE8
    ctx->r11 = ADD32(ctx->r29, 0XE8);
L_151AD4C4:
    // 0x151AD4C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151AD4C8: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x151AD4CC: addiu       $a1, $sp, 0x2E8
    ctx->r5 = ADD32(ctx->r29, 0X2E8);
    // 0x151AD4D0: addiu       $v0, $sp, 0x2DC
    ctx->r2 = ADD32(ctx->r29, 0X2DC);
    // 0x151AD4D4: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
L_151AD4D8:
    // 0x151AD4D8: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151AD4DC: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x151AD4E0: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151AD4E4: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x151AD4E8: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x151AD4EC: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x151AD4F0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x151AD4F4: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x151AD4F8: sub.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x151AD4FC: addu        $t6, $t9, $a0
    ctx->r14 = ADD32(ctx->r25, ctx->r4);
    // 0x151AD500: lwc1        $f8, 0xC($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0XC);
    // 0x151AD504: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x151AD508: sltu        $at, $a2, $t3
    ctx->r1 = ctx->r6 < ctx->r11 ? 1 : 0;
    // 0x151AD50C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x151AD510: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x151AD514: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x151AD518: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x151AD51C: swc1        $f4, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f4.u32l;
    // 0x151AD520: bne         $at, $zero, L_151AD4D8
    if (ctx->r1 != 0) {
        // 0x151AD524: swc1        $f8, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f8.u32l;
            goto L_151AD4D8;
    }
    // 0x151AD524: swc1        $f8, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f8.u32l;
    // 0x151AD528: lwc1        $f6, 0x2E8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2E8);
    // 0x151AD52C: lwc1        $f8, 0xC($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XC);
    // 0x151AD530: lwc1        $f10, 0x2EC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2EC);
    // 0x151AD534: lwc1        $f4, 0x10($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X10);
    // 0x151AD538: sub.s       $f30, $f6, $f8
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f30.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151AD53C: lwc1        $f8, 0x14($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X14);
    // 0x151AD540: lwc1        $f6, 0x2F0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2F0);
    // 0x151AD544: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151AD548: mul.s       $f22, $f30, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x151AD54C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151AD550: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151AD554: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151AD558: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x151AD55C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151AD560: mul.s       $f24, $f12, $f12
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f24.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151AD564: swc1        $f12, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f12.u32l;
    // 0x151AD568: addiu       $a1, $sp, 0x2E8
    ctx->r5 = ADD32(ctx->r29, 0X2E8);
    // 0x151AD56C: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151AD570: addiu       $v0, $sp, 0x2DC
    ctx->r2 = ADD32(ctx->r29, 0X2DC);
    // 0x151AD574: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x151AD578: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151AD57C: add.s       $f4, $f22, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f22.fl + ctx->f10.fl;
    // 0x151AD580: add.s       $f0, $f4, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x151AD584: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    // 0x151AD588: add.s       $f0, $f22, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f22.fl + ctx->f24.fl;
    // 0x151AD58C: c.eq.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
    // 0x151AD590: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151AD594: bc1fl       L_151AD5A8
    if (!c1cs) {
        // 0x151AD598: div.s       $f10, $f0, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
            goto L_151AD5A8;
    }
    goto skip_5;
    // 0x151AD598: div.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    skip_5:
    // 0x151AD59C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151AD5A0: nop

    // 0x151AD5A4: div.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
L_151AD5A8:
    // 0x151AD5A8: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x151AD5AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AD5B0: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x151AD5B4: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151AD5B8: nop

    // 0x151AD5BC: mul.s       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151AD5C0: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x151AD5C4: sub.s       $f20, $f4, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x151AD5C8: bc1f        L_151AD5DC
    if (!c1cs) {
        // 0x151AD5CC: nop
    
            goto L_151AD5DC;
    }
    // 0x151AD5CC: nop

    // 0x151AD5D0: sqrt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = sqrtf(ctx->f20.fl);
    // 0x151AD5D4: b           L_151AD5E4
    // 0x151AD5D8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_151AD5E4;
    // 0x151AD5D8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_151AD5DC:
    // 0x151AD5DC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x151AD5E0: nop

L_151AD5E4:
    // 0x151AD5E4: div.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = DIV_S(ctx->f20.fl, ctx->f14.fl);
    // 0x151AD5E8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x151AD5EC: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151AD5F0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x151AD5F4: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151AD5F8: mul.s       $f0, $f30, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f30.fl, ctx->f14.fl);
    // 0x151AD5FC: nop

    // 0x151AD600: mul.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x151AD604: nop

    // 0x151AD608: mul.s       $f12, $f8, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x151AD60C: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x151AD610: sub.s       $f2, $f10, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x151AD614: sub.s       $f12, $f22, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f22.fl - ctx->f12.fl;
    // 0x151AD618: lw          $t0, -0x1610($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1610);
    // 0x151AD61C: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x151AD620: swc1        $f2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f2.u32l;
    // 0x151AD624: swc1        $f12, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f12.u32l;
L_151AD628:
    // 0x151AD628: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151AD62C: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x151AD630: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x151AD634: sltu        $at, $a2, $ra
    ctx->r1 = ctx->r6 < ctx->r31 ? 1 : 0;
    // 0x151AD638: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151AD63C: addu        $v1, $t2, $a0
    ctx->r3 = ADD32(ctx->r10, ctx->r4);
    // 0x151AD640: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x151AD644: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151AD648: mul.s       $f4, $f10, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x151AD64C: beq         $a3, $zero, L_151AD690
    if (ctx->r7 == 0) {
        // 0x151AD650: swc1        $f4, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
            goto L_151AD690;
    }
    // 0x151AD650: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x151AD654: lwc1        $f6, -0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, -0XC);
    // 0x151AD658: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151AD65C: addu        $t8, $t4, $a0
    ctx->r24 = ADD32(ctx->r12, ctx->r4);
    // 0x151AD660: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AD664: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151AD668: mul.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x151AD66C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151AD670: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x151AD674: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x151AD678: mul.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x151AD67C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151AD680: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x151AD684: add.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f10.d + ctx->f6.d;
    // 0x151AD688: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x151AD68C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_151AD690:
    // 0x151AD690: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151AD694: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151AD698: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x151AD69C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x151AD6A0: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x151AD6A4: bne         $t5, $t0, L_151AD6C4
    if (ctx->r13 != ctx->r8) {
        // 0x151AD6A8: swc1        $f8, -0x4($a1)
        MEM_W(-0X4, ctx->r5) = ctx->f8.u32l;
            goto L_151AD6C4;
    }
    // 0x151AD6A8: swc1        $f8, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f8.u32l;
    // 0x151AD6AC: lwc1        $f4, 0x2E8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2E8);
    // 0x151AD6B0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x151AD6B4: nop

    // 0x151AD6B8: bc1f        L_151AD6C4
    if (!c1cs) {
        // 0x151AD6BC: nop
    
            goto L_151AD6C4;
    }
    // 0x151AD6BC: nop

    // 0x151AD6C0: swc1        $f18, 0x2E8($sp)
    MEM_W(0X2E8, ctx->r29) = ctx->f18.u32l;
L_151AD6C4:
    // 0x151AD6C4: bne         $at, $zero, L_151AD628
    if (ctx->r1 != 0) {
        // 0x151AD6C8: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_151AD628;
    }
    // 0x151AD6C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x151AD6CC: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x151AD6D0: lwc1        $f10, 0x2F0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2F0);
    // 0x151AD6D4: lwc1        $f8, 0x2E8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2E8);
    // 0x151AD6D8: addu        $v0, $t7, $s3
    ctx->r2 = ADD32(ctx->r15, ctx->r19);
    // 0x151AD6DC: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x151AD6E0: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151AD6E4: lwc1        $f0, 0x2DC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2DC);
    // 0x151AD6E8: sub.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151AD6EC: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151AD6F0: lwc1        $f10, 0x2EC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2EC);
    // 0x151AD6F4: sub.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x151AD6F8: lwc1        $f20, 0xD8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151AD6FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151AD700: sub.s       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151AD704: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151AD708: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151AD70C: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x151AD710: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x151AD714: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x151AD718: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x151AD71C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151AD720: lwc1        $f0, 0x2E4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2E4);
    // 0x151AD724: addiu       $a1, $sp, 0x2E8
    ctx->r5 = ADD32(ctx->r29, 0X2E8);
    // 0x151AD728: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x151AD72C: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151AD730: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151AD734: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x151AD738: add.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x151AD73C: swc1        $f20, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f20.u32l;
    // 0x151AD740: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151AD744: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x151AD748: nop

    // 0x151AD74C: bc1tl       L_151AD764
    if (c1cs) {
        // 0x151AD750: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_151AD764;
    }
    goto skip_6;
    // 0x151AD750: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_6:
    // 0x151AD754: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151AD758: b           L_151AD768
    // 0x151AD75C: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
        goto L_151AD768;
    // 0x151AD75C: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151AD760: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_151AD764:
    // 0x151AD764: nop

L_151AD768:
    // 0x151AD768: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x151AD76C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x151AD770: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x151AD774: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x151AD778: beq         $a1, $s1, L_151AD7E8
    if (ctx->r5 == ctx->r17) {
        // 0x151AD77C: lw          $t9, 0x38($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X38);
            goto L_151AD7E8;
    }
    // 0x151AD77C: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
L_151AD780:
    // 0x151AD780: lwc1        $f30, -0x4($a1)
    ctx->f30.u32l = MEM_W(ctx->r5, -0X4);
    // 0x151AD784: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x151AD788: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
    // 0x151AD78C: lwc1        $f24, 0x18($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151AD790: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x151AD794: subu        $t9, $t9, $a3
    ctx->r25 = SUB32(ctx->r25, ctx->r7);
    // 0x151AD798: sub.s       $f30, $f30, $f24
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f30.fl = ctx->f30.fl - ctx->f24.fl;
    // 0x151AD79C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x151AD7A0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x151AD7A4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x151AD7A8: mul.s       $f30, $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f2.fl);
    // 0x151AD7AC: add.s       $f24, $f30, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = ctx->f30.fl + ctx->f24.fl;
    // 0x151AD7B0: swc1        $f24, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f24.u32l;
    // 0x151AD7B4: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x151AD7B8: lwc1        $f24, -0x4($v1)
    ctx->f24.u32l = MEM_W(ctx->r3, -0X4);
    // 0x151AD7BC: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x151AD7C0: addu        $v0, $t6, $a0
    ctx->r2 = ADD32(ctx->r14, ctx->r4);
    // 0x151AD7C4: lwc1        $f30, 0x0($v0)
    ctx->f30.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151AD7C8: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x151AD7CC: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x151AD7D0: sub.s       $f24, $f30, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = ctx->f30.fl - ctx->f24.fl;
    // 0x151AD7D4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x151AD7D8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x151AD7DC: swc1        $f24, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f24.u32l;
    // 0x151AD7E0: bne         $a1, $s1, L_151AD780
    if (ctx->r5 != ctx->r17) {
        // 0x151AD7E4: lw          $t9, 0x38($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X38);
            goto L_151AD780;
    }
    // 0x151AD7E4: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
L_151AD7E8:
    // 0x151AD7E8: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x151AD7EC: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
    // 0x151AD7F0: lwc1        $f24, 0x18($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151AD7F4: lwc1        $f30, -0x4($a1)
    ctx->f30.u32l = MEM_W(ctx->r5, -0X4);
    // 0x151AD7F8: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x151AD7FC: subu        $t9, $t9, $a3
    ctx->r25 = SUB32(ctx->r25, ctx->r7);
    // 0x151AD800: sub.s       $f30, $f30, $f24
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f30.fl = ctx->f30.fl - ctx->f24.fl;
    // 0x151AD804: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x151AD808: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x151AD80C: mul.s       $f30, $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f2.fl);
    // 0x151AD810: add.s       $f24, $f30, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = ctx->f30.fl + ctx->f24.fl;
    // 0x151AD814: swc1        $f24, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f24.u32l;
    // 0x151AD818: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x151AD81C: lwc1        $f24, -0x4($v1)
    ctx->f24.u32l = MEM_W(ctx->r3, -0X4);
    // 0x151AD820: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x151AD824: addu        $v0, $t6, $a0
    ctx->r2 = ADD32(ctx->r14, ctx->r4);
    // 0x151AD828: lwc1        $f30, 0x0($v0)
    ctx->f30.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151AD82C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x151AD830: sub.s       $f24, $f30, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = ctx->f30.fl - ctx->f24.fl;
    // 0x151AD834: swc1        $f24, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f24.u32l;
    // 0x151AD838: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x151AD83C: addiu       $t2, $t2, -0xC
    ctx->r10 = ADD32(ctx->r10, -0XC);
    // 0x151AD840: addiu       $s2, $s2, -0xC
    ctx->r18 = ADD32(ctx->r18, -0XC);
    // 0x151AD844: bgez        $a3, L_151AD4C4
    if (SIGNED(ctx->r7) >= 0) {
        // 0x151AD848: addiu       $s3, $s3, -0x18
        ctx->r19 = ADD32(ctx->r19, -0X18);
            goto L_151AD4C4;
    }
    // 0x151AD848: addiu       $s3, $s3, -0x18
    ctx->r19 = ADD32(ctx->r19, -0X18);
L_151AD84C:
    // 0x151AD84C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x151AD850: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AD854: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151AD858: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x151AD85C: nop

    // 0x151AD860: bc1fl       L_151AD8FC
    if (!c1cs) {
        // 0x151AD864: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_151AD8FC;
    }
    goto skip_7;
    // 0x151AD864: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_7:
    // 0x151AD868: lhu         $a0, 0x54($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X54);
    // 0x151AD86C: beq         $a0, $zero, L_151AD884
    if (ctx->r4 == 0) {
        // 0x151AD870: nop
    
            goto L_151AD884;
    }
    // 0x151AD870: nop

    // 0x151AD874: jal         0x1000F3D0
    // 0x151AD878: nop

    func_1000F3D0(rdram, ctx);
        goto after_6;
    // 0x151AD878: nop

    after_6:
    // 0x151AD87C: bnel        $v0, $zero, L_151AD8FC
    if (ctx->r2 != 0) {
        // 0x151AD880: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_151AD8FC;
    }
    goto skip_8;
    // 0x151AD880: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_8:
L_151AD884:
    // 0x151AD884: jal         0x150ADA20
    // 0x151AD888: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151AD888: nop

    after_7:
    // 0x151AD88C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x151AD890: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AD894: lwc1        $f10, 0x2E8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2E8);
    // 0x151AD898: lwc1        $f4, 0x2EC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2EC);
    // 0x151AD89C: mfhi        $a1
    ctx->r5 = hi;
    // 0x151AD8A0: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151AD8A4: lwc1        $f10, 0x2F0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2F0);
    // 0x151AD8A8: addiu       $t9, $zero, 0xFA
    ctx->r25 = ADD32(0, 0XFA);
    // 0x151AD8AC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151AD8B0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151AD8B4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x151AD8B8: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151AD8BC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x151AD8C0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151AD8C4: addiu       $a1, $a1, 0x507
    ctx->r5 = ADD32(ctx->r5, 0X507);
    // 0x151AD8C8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151AD8CC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x151AD8D0: addiu       $t6, $zero, -0x7E0C
    ctx->r14 = ADD32(0, -0X7E0C);
    // 0x151AD8D4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x151AD8D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151AD8DC: addiu       $a2, $zero, 0x7530
    ctx->r6 = ADD32(0, 0X7530);
    // 0x151AD8E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151AD8E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151AD8E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151AD8EC: jal         0x10010E78
    // 0x151AD8F0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_10010E78(rdram, ctx);
        goto after_8;
    // 0x151AD8F0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_8:
    // 0x151AD8F4: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x151AD8F8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_151AD8FC:
    // 0x151AD8FC: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x151AD900: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x151AD904: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x151AD908: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x151AD90C: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x151AD910: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x151AD914: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x151AD918: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x151AD91C: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x151AD920: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x151AD924: jr          $ra
    // 0x151AD928: addiu       $sp, $sp, 0x308
    ctx->r29 = ADD32(ctx->r29, 0X308);
    return;
    return;
    // 0x151AD928: addiu       $sp, $sp, 0x308
    ctx->r29 = ADD32(ctx->r29, 0X308);
;}
RECOMP_FUNC void func_10012B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10012B84: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x10012B88: beq         $t6, $zero, L_10012B98
    if (ctx->r14 == 0) {
        // 0x10012B8C: nop
    
            goto L_10012B98;
    }
    // 0x10012B8C: nop

    // 0x10012B90: jr          $ra
    // 0x10012B94: nop

    return;
    return;
    // 0x10012B94: nop

L_10012B98:
    // 0x10012B98: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x10012B9C: sb          $t7, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r15;
    // 0x10012BA0: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x10012BA4: and         $t8, $a1, $at
    ctx->r24 = ctx->r5 & ctx->r1;
    // 0x10012BA8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x10012BAC: sll         $t9, $a1, 5
    ctx->r25 = S32(ctx->r5 << 5);
    // 0x10012BB0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x10012BB4: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    // 0x10012BB8: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x10012BBC: sw          $t1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r9;
    // 0x10012BC0: jr          $ra
    // 0x10012BC4: nop

    return;
    return;
    // 0x10012BC4: nop

    // 0x10012BC8: jr          $ra
    // 0x10012BCC: nop

    return;
    return;
    // 0x10012BCC: nop

;}
RECOMP_FUNC void func_1501E400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501E400: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1501E404: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1501E408: addiu       $v1, $v1, 0x3A58
    ctx->r3 = ADD32(ctx->r3, 0X3A58);
    // 0x1501E40C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1501E410: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x1501E414: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501E418: addiu       $t7, $t7, 0x35B8
    ctx->r15 = ADD32(ctx->r15, 0X35B8);
    // 0x1501E41C: beq         $v0, $zero, L_1501E42C
    if (ctx->r2 == 0) {
        // 0x1501E420: sll         $a2, $a0, 2
        ctx->r6 = S32(ctx->r4 << 2);
            goto L_1501E42C;
    }
    // 0x1501E420: sll         $a2, $a0, 2
    ctx->r6 = S32(ctx->r4 << 2);
    // 0x1501E424: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x1501E428: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
L_1501E42C:
    // 0x1501E42C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501E430: addiu       $t8, $t8, 0x35B0
    ctx->r24 = ADD32(ctx->r24, 0X35B0);
    // 0x1501E434: addu        $v1, $a2, $t8
    ctx->r3 = ADD32(ctx->r6, ctx->r24);
    // 0x1501E438: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1501E43C: addu        $a1, $a2, $t7
    ctx->r5 = ADD32(ctx->r6, ctx->r15);
    // 0x1501E440: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1501E444: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x1501E448: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x1501E44C: lbu         $t0, 0x35EA($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X35EA);
    // 0x1501E450: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1501E454: bnel        $t0, $at, L_1501E534
    if (ctx->r8 != ctx->r1) {
        // 0x1501E458: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1501E534;
    }
    goto skip_0;
    // 0x1501E458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1501E45C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x1501E460: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1501E464: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x1501E468: jal         0x1501E1B4
    // 0x1501E46C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_1501E1B4(rdram, ctx);
        goto after_0;
    // 0x1501E46C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x1501E470: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1501E474: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x1501E478: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x1501E47C: bne         $a0, $zero, L_1501E490
    if (ctx->r4 != 0) {
        // 0x1501E480: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_1501E490;
    }
    // 0x1501E480: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x1501E484: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1501E488: lbu         $t1, -0x1540($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1540);
    // 0x1501E48C: bne         $t1, $zero, L_1501E4A4
    if (ctx->r9 != 0) {
        // 0x1501E490: lui         $t3, 0x800C
        ctx->r11 = S32(0X800C << 16);
            goto L_1501E4A4;
    }
L_1501E490:
    // 0x1501E490: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1501E494: lw          $t3, -0x15F8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X15F8);
    // 0x1501E498: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x1501E49C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x1501E4A0: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_1501E4A4:
    // 0x1501E4A4: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1501E4A8: addu        $t5, $t5, $a0
    ctx->r13 = ADD32(ctx->r13, ctx->r4);
    // 0x1501E4AC: lbu         $t5, 0x35C0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X35C0);
    // 0x1501E4B0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1501E4B4: bnel        $t5, $zero, L_1501E4E4
    if (ctx->r13 != 0) {
        // 0x1501E4B8: sw          $v1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r3;
            goto L_1501E4E4;
    }
    goto skip_1;
    // 0x1501E4B8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    skip_1:
    // 0x1501E4BC: lhu         $v0, 0x3C8E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3C8E);
    // 0x1501E4C0: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x1501E4C4: bnel        $v0, $t6, L_1501E4E4
    if (ctx->r2 != ctx->r14) {
        // 0x1501E4C8: sw          $v1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r3;
            goto L_1501E4E4;
    }
    goto skip_2;
    // 0x1501E4C8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    skip_2:
    // 0x1501E4CC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1501E4D0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x1501E4D4: beql        $v0, $t7, L_1501E4E4
    if (ctx->r2 == ctx->r15) {
        // 0x1501E4D8: sw          $v1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r3;
            goto L_1501E4E4;
    }
    goto skip_3;
    // 0x1501E4D8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    skip_3:
    // 0x1501E4DC: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x1501E4E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
L_1501E4E4:
    // 0x1501E4E4: jal         0x151F2CDC
    // 0x1501E4E8: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_151F2CDC(rdram, ctx);
        goto after_1;
    // 0x1501E4E8: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x1501E4EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1501E4F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x1501E4F4: bne         $v0, $at, L_1501E510
    if (ctx->r2 != ctx->r1) {
        // 0x1501E4F8: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_1501E510;
    }
    // 0x1501E4F8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x1501E4FC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x1501E500: jal         0x15080228
    // 0x1501E504: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_15080228(rdram, ctx);
        goto after_2;
    // 0x1501E504: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_2:
    // 0x1501E508: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x1501E50C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
L_1501E510:
    // 0x1501E510: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1501E514: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x1501E518: lw          $v0, 0x3640($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3640);
    // 0x1501E51C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1501E520: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1501E524: bnel        $at, $zero, L_1501E534
    if (ctx->r1 != 0) {
        // 0x1501E528: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1501E534;
    }
    goto skip_4;
    // 0x1501E528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x1501E52C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x1501E530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1501E534:
    // 0x1501E534: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1501E538: jr          $ra
    // 0x1501E53C: nop

    return;
    return;
    // 0x1501E53C: nop

;}
RECOMP_FUNC void func_15000AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15000AC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15000AC4: sb          $zero, -0x619C($at)
    MEM_B(-0X619C, ctx->r1) = 0;
    // 0x15000AC8: jr          $ra
    // 0x15000ACC: nop

    return;
    return;
    // 0x15000ACC: nop

;}
RECOMP_FUNC void func_151AAB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AAB78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151AAB7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AAB80: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x151AAB84: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x151AAB88: jal         0x1513530C
    // 0x151AAB8C: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    func_1513530C(rdram, ctx);
        goto after_0;
    // 0x151AAB8C: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    after_0:
    // 0x151AAB90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AAB94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151AAB98: jr          $ra
    // 0x151AAB9C: nop

    return;
    return;
    // 0x151AAB9C: nop

;}
RECOMP_FUNC void func_151B7144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B7144: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x151B7148: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151B714C: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x151B7150: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x151B7154: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x151B7158: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x151B715C: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x151B7160: addiu       $t7, $zero, 0xE03
    ctx->r15 = ADD32(0, 0XE03);
    // 0x151B7164: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x151B7168: addiu       $t9, $zero, 0x12
    ctx->r25 = ADD32(0, 0X12);
    // 0x151B716C: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x151B7170: sb          $t6, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r14;
    // 0x151B7174: sh          $t7, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r15;
    // 0x151B7178: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x151B717C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151B7180: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151B7184: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x151B7188: sh          $t9, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r25;
    // 0x151B718C: jal         0x150ADA20
    // 0x151B7190: sh          $t0, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151B7190: sh          $t0, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r8;
    after_0:
    // 0x151B7194: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x151B7198: beq         $t1, $zero, L_151B71A8
    if (ctx->r9 == 0) {
        // 0x151B719C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151B71A8;
    }
    // 0x151B719C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151B71A0: b           L_151B71A8
    // 0x151B71A4: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_151B71A8;
    // 0x151B71A4: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_151B71A8:
    // 0x151B71A8: jal         0x150ADA20
    // 0x151B71AC: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151B71AC: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_1:
    // 0x151B71B0: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x151B71B4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x151B71B8: beq         $t2, $zero, L_151B71C8
    if (ctx->r10 == 0) {
        // 0x151B71BC: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_151B71C8;
    }
    // 0x151B71BC: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x151B71C0: b           L_151B71CC
    // 0x151B71C4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_151B71CC;
    // 0x151B71C4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_151B71C8:
    // 0x151B71C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151B71CC:
    // 0x151B71CC: ori         $t3, $v0, 0x1
    ctx->r11 = ctx->r2 | 0X1;
    // 0x151B71D0: or          $t8, $t3, $v1
    ctx->r24 = ctx->r11 | ctx->r3;
    // 0x151B71D4: ori         $t9, $t8, 0xCE00
    ctx->r25 = ctx->r24 | 0XCE00;
    // 0x151B71D8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x151B71DC: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x151B71E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B71E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151B71E8: lwc1        $f4, -0x5B84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5B84);
    // 0x151B71EC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151B71F0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x151B71F4: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151B71F8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151B71FC: sw          $t0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r8;
    // 0x151B7200: sb          $t1, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r9;
    // 0x151B7204: sb          $t2, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r10;
    // 0x151B7208: sb          $t3, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = ctx->r11;
    // 0x151B720C: sb          $t4, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = ctx->r12;
    // 0x151B7210: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151B7214: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x151B7218: addiu       $t7, $zero, 0xDD
    ctx->r15 = ADD32(0, 0XDD);
    // 0x151B721C: addiu       $t8, $zero, 0xD3
    ctx->r24 = ADD32(0, 0XD3);
    // 0x151B7220: addiu       $t9, $zero, 0xCD
    ctx->r25 = ADD32(0, 0XCD);
    // 0x151B7224: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151B7228: addiu       $t1, $zero, 0x57
    ctx->r9 = ADD32(0, 0X57);
    // 0x151B722C: addiu       $t2, $zero, 0x55
    ctx->r10 = ADD32(0, 0X55);
    // 0x151B7230: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x151B7234: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151B7238: sb          $t5, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r13;
    // 0x151B723C: sb          $zero, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = 0;
    // 0x151B7240: sh          $t6, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r14;
    // 0x151B7244: sb          $t7, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r15;
    // 0x151B7248: sb          $t8, 0x3D($sp)
    MEM_B(0X3D, ctx->r29) = ctx->r24;
    // 0x151B724C: sb          $t9, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = ctx->r25;
    // 0x151B7250: sb          $t0, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r8;
    // 0x151B7254: sb          $t1, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r9;
    // 0x151B7258: sb          $t2, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r10;
    // 0x151B725C: sb          $t3, 0x42($sp)
    MEM_B(0X42, ctx->r29) = ctx->r11;
    // 0x151B7260: sb          $t4, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r12;
    // 0x151B7264: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    // 0x151B7268: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x151B726C: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151B7270: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x151B7274: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x151B7278: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x151B727C: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x151B7280: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x151B7284: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x151B7288: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x151B728C: jal         0x150ADA20
    // 0x151B7290: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151B7290: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x151B7294: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151B7298: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151B729C: mfhi        $t5
    ctx->r13 = hi;
    // 0x151B72A0: addiu       $t6, $t5, 0xC8
    ctx->r14 = ADD32(ctx->r13, 0XC8);
    // 0x151B72A4: jal         0x150ADA20
    // 0x151B72A8: sb          $t6, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151B72A8: sb          $t6, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r14;
    after_3:
    // 0x151B72AC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x151B72B0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151B72B4: mfhi        $t7
    ctx->r15 = hi;
    // 0x151B72B8: addiu       $t8, $t7, 0x1E
    ctx->r24 = ADD32(ctx->r15, 0X1E);
    // 0x151B72BC: jal         0x150ADA68
    // 0x151B72C0: sh          $t8, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r24;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151B72C0: sh          $t8, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r24;
    after_4:
    // 0x151B72C4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x151B72C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151B72CC: lui         $at, 0x42B2
    ctx->r1 = S32(0X42B2 << 16);
    // 0x151B72D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B72D4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151B72D8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151B72DC: lbu         $t9, 0x9F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X9F);
    // 0x151B72E0: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x151B72E4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x151B72E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151B72EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151B72F0: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151B72F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B72F8: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x151B72FC: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x151B7300: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x151B7304: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x151B7308: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    // 0x151B730C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151B7310: jal         0x15130280
    // 0x151B7314: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_15130280(rdram, ctx);
        goto after_5;
    // 0x151B7314: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_5:
    // 0x151B7318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151B731C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x151B7320: jr          $ra
    // 0x151B7324: nop

    return;
    return;
    // 0x151B7324: nop

;}
RECOMP_FUNC void func_15075B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075B8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15075B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15075B94: jal         0x15075650
    // 0x15075B98: nop

    func_15075650(rdram, ctx);
        goto after_0;
    // 0x15075B98: nop

    after_0:
    // 0x15075B9C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15075BA0: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15075BA4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x15075BA8: sb          $t6, 0x223($t7)
    MEM_B(0X223, ctx->r15) = ctx->r14;
    // 0x15075BAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15075BB0: jr          $ra
    // 0x15075BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15075BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1506B268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B268: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506B26C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506B270: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506B274: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1506B278: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506B27C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1506B280: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x1506B284: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1506B288: sb          $zero, 0x83($t6)
    MEM_B(0X83, ctx->r14) = 0;
    // 0x1506B28C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1506B290: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x1506B294: sb          $zero, 0x89($t7)
    MEM_B(0X89, ctx->r15) = 0;
    // 0x1506B298: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1506B29C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1506B2A0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1506B2A4: jal         0x1505E650
    // 0x1506B2A8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1506B2A8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_0:
    // 0x1506B2AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1506B2B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506B2B4: jr          $ra
    // 0x1506B2B8: nop

    return;
    return;
    // 0x1506B2B8: nop

;}
RECOMP_FUNC void func_1515D914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515D914: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x1515D918: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x1515D91C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x1515D920: lw          $s2, 0x168($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X168);
    // 0x1515D924: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x1515D928: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1515D92C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x1515D930: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x1515D934: sw          $a1, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r5;
    // 0x1515D938: sw          $a2, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r6;
    // 0x1515D93C: sw          $a3, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r7;
    // 0x1515D940: lw          $t7, 0x14C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14C);
    // 0x1515D944: addiu       $t6, $sp, 0x118
    ctx->r14 = ADD32(ctx->r29, 0X118);
    // 0x1515D948: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1515D94C: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
    // 0x1515D950: lw          $a1, 0x144($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X144);
    // 0x1515D954: lw          $a2, 0x148($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X148);
    // 0x1515D958: lw          $a3, 0x160($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X160);
    // 0x1515D95C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x1515D960: jal         0x1515E278
    // 0x1515D964: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_1515E278(rdram, ctx);
        goto after_0;
    // 0x1515D964: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x1515D968: andi        $t8, $s2, 0x2
    ctx->r24 = ctx->r18 & 0X2;
    // 0x1515D96C: beq         $t8, $zero, L_1515DA34
    if (ctx->r24 == 0) {
        // 0x1515D970: sw          $t8, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r24;
            goto L_1515DA34;
    }
    // 0x1515D970: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x1515D974: addiu       $t6, $sp, 0xB0
    ctx->r14 = ADD32(ctx->r29, 0XB0);
    // 0x1515D978: addiu       $t7, $sp, 0xAC
    ctx->r15 = ADD32(ctx->r29, 0XAC);
    // 0x1515D97C: addiu       $t8, $sp, 0xAB
    ctx->r24 = ADD32(ctx->r29, 0XAB);
    // 0x1515D980: addiu       $t9, $sp, 0xAA
    ctx->r25 = ADD32(ctx->r29, 0XAA);
    // 0x1515D984: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1515D988: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1515D98C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1515D990: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1515D994: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
    // 0x1515D998: lw          $a1, 0x144($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X144);
    // 0x1515D99C: lw          $a2, 0x148($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X148);
    // 0x1515D9A0: jal         0x1515E43C
    // 0x1515D9A4: lw          $a3, 0x160($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X160);
    func_1515E43C(rdram, ctx);
        goto after_1;
    // 0x1515D9A4: lw          $a3, 0x160($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X160);
    after_1:
    // 0x1515D9A8: addiu       $a0, $sp, 0x118
    ctx->r4 = ADD32(ctx->r29, 0X118);
    // 0x1515D9AC: lbu         $t3, 0xAB($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XAB);
    // 0x1515D9B0: addiu       $a3, $sp, 0x114
    ctx->r7 = ADD32(ctx->r29, 0X114);
    // 0x1515D9B4: addiu       $t1, $sp, 0xB0
    ctx->r9 = ADD32(ctx->r29, 0XB0);
    // 0x1515D9B8: lbu         $t4, 0xAA($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XAA);
    // 0x1515D9BC: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x1515D9C0: addiu       $t2, $sp, 0xAF
    ctx->r10 = ADD32(ctx->r29, 0XAF);
    // 0x1515D9C4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
L_1515D9C8:
    // 0x1515D9C8: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x1515D9CC: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x1515D9D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1515D9D4: subu        $a1, $t0, $v1
    ctx->r5 = SUB32(ctx->r8, ctx->r3);
    // 0x1515D9D8: multu       $a1, $t3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515D9DC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x1515D9E0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x1515D9E4: mflo        $t6
    ctx->r14 = lo;
    // 0x1515D9E8: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x1515D9EC: addu        $v0, $v1, $t7
    ctx->r2 = ADD32(ctx->r3, ctx->r15);
    // 0x1515D9F0: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x1515D9F4: multu       $t9, $t8
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515D9F8: mflo        $t6
    ctx->r14 = lo;
    // 0x1515D9FC: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x1515DA00: sb          $t7, -0x1($a3)
    MEM_B(-0X1, ctx->r7) = ctx->r15;
    // 0x1515DA04: multu       $a1, $t4
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515DA08: lbu         $t7, -0x1($a2)
    ctx->r15 = MEM_BU(ctx->r6, -0X1);
    // 0x1515DA0C: mflo        $t8
    ctx->r24 = lo;
    // 0x1515DA10: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x1515DA14: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x1515DA18: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x1515DA1C: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515DA20: mflo        $t8
    ctx->r24 = lo;
    // 0x1515DA24: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x1515DA28: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x1515DA2C: bne         $a2, $t2, L_1515D9C8
    if (ctx->r6 != ctx->r10) {
        // 0x1515DA30: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_1515D9C8;
    }
    // 0x1515DA30: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_1515DA34:
    // 0x1515DA34: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1515DA38: addiu       $a0, $sp, 0x118
    ctx->r4 = ADD32(ctx->r29, 0X118);
    // 0x1515DA3C: lw          $v1, 0x158($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X158);
    // 0x1515DA40: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x1515DA44: lw          $a1, 0x164($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X164);
L_1515DA48:
    // 0x1515DA48: beq         $a1, $zero, L_1515DA7C
    if (ctx->r5 == 0) {
        // 0x1515DA4C: andi        $t6, $s2, 0x8
        ctx->r14 = ctx->r18 & 0X8;
            goto L_1515DA7C;
    }
    // 0x1515DA4C: andi        $t6, $s2, 0x8
    ctx->r14 = ctx->r18 & 0X8;
    // 0x1515DA50: bne         $t6, $zero, L_1515DA74
    if (ctx->r14 != 0) {
        // 0x1515DA54: addu        $v0, $a1, $t0
        ctx->r2 = ADD32(ctx->r5, ctx->r8);
            goto L_1515DA74;
    }
    // 0x1515DA54: addu        $v0, $a1, $t0
    ctx->r2 = ADD32(ctx->r5, ctx->r8);
    // 0x1515DA58: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x1515DA5C: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x1515DA60: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515DA64: mflo        $t8
    ctx->r24 = lo;
    // 0x1515DA68: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x1515DA6C: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x1515DA70: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
L_1515DA74:
    // 0x1515DA74: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x1515DA78: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
L_1515DA7C:
    // 0x1515DA7C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x1515DA80: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1515DA84: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x1515DA88: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1515DA8C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1515DA90: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x1515DA94: bne         $at, $zero, L_1515DA48
    if (ctx->r1 != 0) {
        // 0x1515DA98: sb          $v0, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r2;
            goto L_1515DA48;
    }
    // 0x1515DA98: sb          $v0, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r2;
    // 0x1515DA9C: lw          $s1, 0x154($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X154);
    // 0x1515DAA0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1515DAA4: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x1515DAA8: blez        $s1, L_1515DB14
    if (SIGNED(ctx->r17) <= 0) {
        // 0x1515DAAC: andi        $v1, $s1, 0x3
        ctx->r3 = ctx->r17 & 0X3;
            goto L_1515DB14;
    }
    // 0x1515DAAC: andi        $v1, $s1, 0x3
    ctx->r3 = ctx->r17 & 0X3;
    // 0x1515DAB0: beq         $v1, $zero, L_1515DAE0
    if (ctx->r3 == 0) {
        // 0x1515DAB4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1515DAE0;
    }
    // 0x1515DAB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1515DAB8: sll         $t9, $zero, 2
    ctx->r25 = S32(0 << 2);
    // 0x1515DABC: addiu       $t6, $sp, 0xB8
    ctx->r14 = ADD32(ctx->r29, 0XB8);
    // 0x1515DAC0: lui         $t5, 0x7FFF
    ctx->r13 = S32(0X7FFF << 16);
    // 0x1515DAC4: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x1515DAC8: addu        $a1, $t9, $t6
    ctx->r5 = ADD32(ctx->r25, ctx->r14);
L_1515DACC:
    // 0x1515DACC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1515DAD0: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x1515DAD4: bne         $v0, $t0, L_1515DACC
    if (ctx->r2 != ctx->r8) {
        // 0x1515DAD8: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_1515DACC;
    }
    // 0x1515DAD8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x1515DADC: beq         $t0, $s1, L_1515DB14
    if (ctx->r8 == ctx->r17) {
        // 0x1515DAE0: addiu       $t8, $sp, 0xB8
        ctx->r24 = ADD32(ctx->r29, 0XB8);
            goto L_1515DB14;
    }
L_1515DAE0:
    // 0x1515DAE0: addiu       $t8, $sp, 0xB8
    ctx->r24 = ADD32(ctx->r29, 0XB8);
    // 0x1515DAE4: lui         $t5, 0x7FFF
    ctx->r13 = S32(0X7FFF << 16);
    // 0x1515DAE8: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x1515DAEC: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x1515DAF0: addu        $v0, $t9, $t8
    ctx->r2 = ADD32(ctx->r25, ctx->r24);
    // 0x1515DAF4: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x1515DAF8: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
L_1515DAFC:
    // 0x1515DAFC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x1515DB00: sw          $t5, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r13;
    // 0x1515DB04: sw          $t5, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r13;
    // 0x1515DB08: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
    // 0x1515DB0C: bne         $a1, $v0, L_1515DAFC
    if (ctx->r5 != ctx->r2) {
        // 0x1515DB10: sw          $t5, -0x10($a1)
        MEM_W(-0X10, ctx->r5) = ctx->r13;
            goto L_1515DAFC;
    }
    // 0x1515DB10: sw          $t5, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r13;
L_1515DB14:
    // 0x1515DB14: lui         $t5, 0x7FFF
    ctx->r13 = S32(0X7FFF << 16);
    // 0x1515DB18: andi        $t6, $s2, 0x1
    ctx->r14 = ctx->r18 & 0X1;
    // 0x1515DB1C: bne         $t6, $zero, L_1515DB40
    if (ctx->r14 != 0) {
        // 0x1515DB20: ori         $t5, $t5, 0xFFFF
        ctx->r13 = ctx->r13 | 0XFFFF;
            goto L_1515DB40;
    }
    // 0x1515DB20: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x1515DB24: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x1515DB28: lw          $t9, 0x144($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X144);
    // 0x1515DB2C: lw          $t8, 0x148($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X148);
    // 0x1515DB30: sh          $t7, 0x11C($sp)
    MEM_H(0X11C, ctx->r29) = ctx->r15;
    // 0x1515DB34: sh          $t9, 0x11E($sp)
    MEM_H(0X11E, ctx->r29) = ctx->r25;
    // 0x1515DB38: b           L_1515DC64
    // 0x1515DB3C: sh          $t8, 0x120($sp)
    MEM_H(0X120, ctx->r29) = ctx->r24;
        goto L_1515DC64;
    // 0x1515DB3C: sh          $t8, 0x120($sp)
    MEM_H(0X120, ctx->r29) = ctx->r24;
L_1515DB40:
    // 0x1515DB40: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515DB44: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1515DB48: lw          $t6, -0x4010($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4010);
    // 0x1515DB4C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x1515DB50: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x1515DB54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1515DB58: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x1515DB5C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1515DB60: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x1515DB64: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x1515DB68: addu        $v0, $t6, $t9
    ctx->r2 = ADD32(ctx->r14, ctx->r25);
    // 0x1515DB6C: lwc1        $f4, 0x2BC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2BC);
    // 0x1515DB70: lwc1        $f6, 0x2F8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x1515DB74: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x1515DB78: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x1515DB7C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1515DB80: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x1515DB84: lwc1        $f16, 0x2FC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x1515DB88: lwc1        $f10, 0x2C0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X2C0);
    // 0x1515DB8C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1515DB90: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x1515DB94: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    // 0x1515DB98: lwc1        $f6, 0x300($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X300);
    // 0x1515DB9C: lwc1        $f4, 0x2C4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2C4);
    // 0x1515DBA0: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1515DBA4: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x1515DBA8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1515DBAC: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x1515DBB0: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x1515DBB4: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x1515DBB8: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x1515DBBC: mul.s       $f16, $f8, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x1515DBC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1515DBC4: add.s       $f0, $f16, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x1515DBC8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1515DBCC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x1515DBD0: nop

    // 0x1515DBD4: bc1tl       L_1515DC54
    if (c1cs) {
        // 0x1515DBD8: lw          $t6, 0x144($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X144);
            goto L_1515DC54;
    }
    goto skip_0;
    // 0x1515DBD8: lw          $t6, 0x144($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X144);
    skip_0:
    // 0x1515DBDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1515DBE0: lw          $t8, 0x140($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X140);
    // 0x1515DBE4: lw          $t9, 0x144($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X144);
    // 0x1515DBE8: div.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1515DBEC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1515DBF0: nop

    // 0x1515DBF4: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1515DBF8: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1515DBFC: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x1515DC00: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x1515DC04: mul.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x1515DC08: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1515DC0C: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1515DC10: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x1515DC14: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1515DC18: sh          $t6, 0x11C($sp)
    MEM_H(0X11C, ctx->r29) = ctx->r14;
    // 0x1515DC1C: lw          $t6, 0x148($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X148);
    // 0x1515DC20: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1515DC24: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1515DC28: nop

    // 0x1515DC2C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1515DC30: trunc.w.s   $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1515DC34: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1515DC38: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x1515DC3C: trunc.w.s   $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1515DC40: sh          $t7, 0x11E($sp)
    MEM_H(0X11E, ctx->r29) = ctx->r15;
    // 0x1515DC44: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x1515DC48: b           L_1515DC64
    // 0x1515DC4C: sh          $t8, 0x120($sp)
    MEM_H(0X120, ctx->r29) = ctx->r24;
        goto L_1515DC64;
    // 0x1515DC4C: sh          $t8, 0x120($sp)
    MEM_H(0X120, ctx->r29) = ctx->r24;
    // 0x1515DC50: lw          $t6, 0x144($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X144);
L_1515DC54:
    // 0x1515DC54: lw          $t9, 0x148($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X148);
    // 0x1515DC58: sh          $t7, 0x11C($sp)
    MEM_H(0X11C, ctx->r29) = ctx->r15;
    // 0x1515DC5C: sh          $t6, 0x11E($sp)
    MEM_H(0X11E, ctx->r29) = ctx->r14;
    // 0x1515DC60: sh          $t9, 0x120($sp)
    MEM_H(0X120, ctx->r29) = ctx->r25;
L_1515DC64:
    // 0x1515DC64: lw          $s0, -0x3288($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3288);
    // 0x1515DC68: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x1515DC6C: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x1515DC70: beq         $s0, $zero, L_1515DEF8
    if (ctx->r16 == 0) {
        // 0x1515DC74: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_1515DEF8;
    }
    // 0x1515DC74: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1515DC78: sllv        $t6, $t7, $t8
    ctx->r14 = S32(ctx->r15 << (ctx->r24 & 31));
    // 0x1515DC7C: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x1515DC80: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x1515DC84: lbu         $t9, 0xC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC);
L_1515DC88:
    // 0x1515DC88: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x1515DC8C: andi        $t6, $s2, 0x20
    ctx->r14 = ctx->r18 & 0X20;
    // 0x1515DC90: and         $t8, $t9, $t7
    ctx->r24 = ctx->r25 & ctx->r15;
    // 0x1515DC94: bnel        $t8, $zero, L_1515DCB8
    if (ctx->r24 != 0) {
        // 0x1515DC98: lbu         $t8, 0x8($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X8);
            goto L_1515DCB8;
    }
    goto skip_1;
    // 0x1515DC98: lbu         $t8, 0x8($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X8);
    skip_1:
    // 0x1515DC9C: bnel        $t6, $zero, L_1515DCB8
    if (ctx->r14 != 0) {
        // 0x1515DCA0: lbu         $t8, 0x8($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X8);
            goto L_1515DCB8;
    }
    goto skip_2;
    // 0x1515DCA0: lbu         $t8, 0x8($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X8);
    skip_2:
    // 0x1515DCA4: lbu         $t9, 0x8($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X8);
    // 0x1515DCA8: andi        $t7, $t9, 0x1
    ctx->r15 = ctx->r25 & 0X1;
    // 0x1515DCAC: bnel        $t7, $zero, L_1515DEEC
    if (ctx->r15 != 0) {
        // 0x1515DCB0: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_1515DEEC;
    }
    goto skip_3;
    // 0x1515DCB0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x1515DCB4: lbu         $t8, 0x8($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X8);
L_1515DCB8:
    // 0x1515DCB8: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x1515DCBC: and         $t9, $t8, $t6
    ctx->r25 = ctx->r24 & ctx->r14;
    // 0x1515DCC0: beql        $t9, $zero, L_1515DEEC
    if (ctx->r25 == 0) {
        // 0x1515DCC4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_1515DEEC;
    }
    goto skip_4;
    // 0x1515DCC4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_4:
    // 0x1515DCC8: lbu         $t7, 0x9($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9);
    // 0x1515DCCC: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x1515DCD0: bnel        $t7, $zero, L_1515DEEC
    if (ctx->r15 != 0) {
        // 0x1515DCD4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_1515DEEC;
    }
    goto skip_5;
    // 0x1515DCD4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_5:
    // 0x1515DCD8: lbu         $t8, 0xA($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XA);
    // 0x1515DCDC: and         $t9, $t8, $t6
    ctx->r25 = ctx->r24 & ctx->r14;
    // 0x1515DCE0: bnel        $t9, $zero, L_1515DEEC
    if (ctx->r25 != 0) {
        // 0x1515DCE4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_1515DEEC;
    }
    goto skip_6;
    // 0x1515DCE4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_6:
    // 0x1515DCE8: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x1515DCEC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1515DCF0: addiu       $a2, $s1, -0x1
    ctx->r6 = ADD32(ctx->r17, -0X1);
    // 0x1515DCF4: bne         $t7, $zero, L_1515DDE0
    if (ctx->r15 != 0) {
        // 0x1515DCF8: andi        $a1, $s2, 0x4
        ctx->r5 = ctx->r18 & 0X4;
            goto L_1515DDE0;
    }
    // 0x1515DCF8: andi        $a1, $s2, 0x4
    ctx->r5 = ctx->r18 & 0X4;
    // 0x1515DCFC: lh          $t8, 0xE($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XE);
    // 0x1515DD00: addiu       $at, $zero, -0x8000
    ctx->r1 = ADD32(0, -0X8000);
    // 0x1515DD04: beq         $t8, $at, L_1515DD20
    if (ctx->r24 == ctx->r1) {
        // 0x1515DD08: sw          $t8, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r24;
            goto L_1515DD20;
    }
    // 0x1515DD08: sw          $t8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r24;
    // 0x1515DD0C: lh          $t9, 0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X10);
    // 0x1515DD10: sw          $t9, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r25;
    // 0x1515DD14: lh          $t7, 0x12($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X12);
    // 0x1515DD18: b           L_1515DD70
    // 0x1515DD1C: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
        goto L_1515DD70;
    // 0x1515DD1C: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
L_1515DD20:
    // 0x1515DD20: lh          $t8, 0x12($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X12);
    // 0x1515DD24: lh          $t9, 0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X10);
    // 0x1515DD28: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x1515DD2C: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x1515DD30: or          $v0, $t6, $t7
    ctx->r2 = ctx->r14 | ctx->r15;
    // 0x1515DD34: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515DD38: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1515DD3C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x1515DD40: nop

    // 0x1515DD44: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x1515DD48: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1515DD4C: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1515DD50: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x1515DD54: nop

    // 0x1515DD58: sw          $t7, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r15;
    // 0x1515DD5C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1515DD60: trunc.w.s   $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1515DD64: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x1515DD68: nop

    // 0x1515DD6C: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
L_1515DD70:
    // 0x1515DD70: lh          $t6, 0x120($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X120);
    // 0x1515DD74: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x1515DD78: lh          $t8, 0x11C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X11C);
    // 0x1515DD7C: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x1515DD80: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x1515DD84: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515DD88: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x1515DD8C: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x1515DD90: lh          $t6, 0x11E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X11E);
    // 0x1515DD94: subu        $a0, $t6, $t7
    ctx->r4 = SUB32(ctx->r14, ctx->r15);
    // 0x1515DD98: mflo        $t8
    ctx->r24 = lo;
    // 0x1515DD9C: nop

    // 0x1515DDA0: nop

    // 0x1515DDA4: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515DDA8: mflo        $t9
    ctx->r25 = lo;
    // 0x1515DDAC: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x1515DDB0: nop

    // 0x1515DDB4: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515DDB8: mflo        $t7
    ctx->r15 = lo;
    // 0x1515DDBC: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x1515DDC0: bne         $a1, $zero, L_1515DDE0
    if (ctx->r5 != 0) {
        // 0x1515DDC4: nop
    
            goto L_1515DDE0;
    }
    // 0x1515DDC4: nop

    // 0x1515DDC8: lbu         $t8, 0x2F($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2F);
    // 0x1515DDCC: sll         $t9, $t8, 17
    ctx->r25 = S32(ctx->r24 << 17);
    // 0x1515DDD0: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x1515DDD4: beq         $at, $zero, L_1515DDE0
    if (ctx->r1 == 0) {
        // 0x1515DDD8: nop
    
            goto L_1515DDE0;
    }
    // 0x1515DDD8: nop

    // 0x1515DDDC: or          $t3, $t5, $zero
    ctx->r11 = ctx->r13 | 0;
L_1515DDE0:
    // 0x1515DDE0: blez        $a2, L_1515DEE8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x1515DDE4: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_1515DEE8;
    }
    // 0x1515DDE4: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x1515DDE8: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
L_1515DDEC:
    // 0x1515DDEC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x1515DDF0: slt         $at, $t3, $t6
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1515DDF4: beq         $at, $zero, L_1515DED8
    if (ctx->r1 == 0) {
        // 0x1515DDF8: addiu       $v0, $s1, -0x2
        ctx->r2 = ADD32(ctx->r17, -0X2);
            goto L_1515DED8;
    }
    // 0x1515DDF8: addiu       $v0, $s1, -0x2
    ctx->r2 = ADD32(ctx->r17, -0X2);
    // 0x1515DDFC: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1515DE00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1515DE04: beq         $at, $zero, L_1515DEC0
    if (ctx->r1 == 0) {
        // 0x1515DE08: addiu       $t4, $ra, 0x1
        ctx->r12 = ADD32(ctx->r31, 0X1);
            goto L_1515DEC0;
    }
    // 0x1515DE08: addiu       $t4, $ra, 0x1
    ctx->r12 = ADD32(ctx->r31, 0X1);
    // 0x1515DE0C: subu        $t2, $v0, $t0
    ctx->r10 = SUB32(ctx->r2, ctx->r8);
    // 0x1515DE10: andi        $t7, $t2, 0x3
    ctx->r15 = ctx->r10 & 0X3;
    // 0x1515DE14: negu        $t2, $t7
    ctx->r10 = SUB32(0, ctx->r15);
    // 0x1515DE18: beq         $t2, $zero, L_1515DE58
    if (ctx->r10 == 0) {
        // 0x1515DE1C: addu        $a2, $t2, $v0
        ctx->r6 = ADD32(ctx->r10, ctx->r2);
            goto L_1515DE58;
    }
    // 0x1515DE1C: addu        $a2, $t2, $v0
    ctx->r6 = ADD32(ctx->r10, ctx->r2);
    // 0x1515DE20: sll         $a3, $v0, 2
    ctx->r7 = S32(ctx->r2 << 2);
    // 0x1515DE24: addiu       $t8, $sp, 0xB8
    ctx->r24 = ADD32(ctx->r29, 0XB8);
    // 0x1515DE28: addiu       $t9, $sp, 0xE4
    ctx->r25 = ADD32(ctx->r29, 0XE4);
    // 0x1515DE2C: addu        $v0, $a3, $t9
    ctx->r2 = ADD32(ctx->r7, ctx->r25);
    // 0x1515DE30: addu        $v1, $a3, $t8
    ctx->r3 = ADD32(ctx->r7, ctx->r24);
L_1515DE34:
    // 0x1515DE34: lw          $t6, -0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X4);
    // 0x1515DE38: lw          $t7, -0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, -0X4);
    // 0x1515DE3C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x1515DE40: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x1515DE44: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x1515DE48: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x1515DE4C: bne         $a2, $a0, L_1515DE34
    if (ctx->r6 != ctx->r4) {
        // 0x1515DE50: sw          $t7, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r15;
            goto L_1515DE34;
    }
    // 0x1515DE50: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x1515DE54: beq         $t0, $a0, L_1515DEC0
    if (ctx->r8 == ctx->r4) {
        // 0x1515DE58: sll         $a3, $a0, 2
        ctx->r7 = S32(ctx->r4 << 2);
            goto L_1515DEC0;
    }
L_1515DE58:
    // 0x1515DE58: sll         $a3, $a0, 2
    ctx->r7 = S32(ctx->r4 << 2);
    // 0x1515DE5C: addiu       $t9, $sp, 0xE4
    ctx->r25 = ADD32(ctx->r29, 0XE4);
    // 0x1515DE60: addiu       $t8, $sp, 0xB8
    ctx->r24 = ADD32(ctx->r29, 0XB8);
    // 0x1515DE64: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x1515DE68: addu        $a2, $t6, $t9
    ctx->r6 = ADD32(ctx->r14, ctx->r25);
    // 0x1515DE6C: addu        $v1, $a3, $t8
    ctx->r3 = ADD32(ctx->r7, ctx->r24);
    // 0x1515DE70: addu        $v0, $a3, $t9
    ctx->r2 = ADD32(ctx->r7, ctx->r25);
L_1515DE74:
    // 0x1515DE74: lw          $t6, -0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X8);
    // 0x1515DE78: lw          $t9, -0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, -0X8);
    // 0x1515DE7C: lw          $t7, -0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X4);
    // 0x1515DE80: lw          $t8, -0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, -0X4);
    // 0x1515DE84: sw          $t6, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r14;
    // 0x1515DE88: sw          $t9, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r25;
    // 0x1515DE8C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x1515DE90: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1515DE94: lw          $t8, -0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, -0XC);
    // 0x1515DE98: lw          $t7, -0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, -0XC);
    // 0x1515DE9C: lw          $t9, -0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, -0X10);
    // 0x1515DEA0: lw          $t6, -0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X10);
    // 0x1515DEA4: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x1515DEA8: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x1515DEAC: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x1515DEB0: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
    // 0x1515DEB4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x1515DEB8: bne         $a2, $v0, L_1515DE74
    if (ctx->r6 != ctx->r2) {
        // 0x1515DEBC: sw          $t6, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r14;
            goto L_1515DE74;
    }
    // 0x1515DEBC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_1515DEC0:
    // 0x1515DEC0: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x1515DEC4: addu        $t7, $sp, $t1
    ctx->r15 = ADD32(ctx->r29, ctx->r9);
    // 0x1515DEC8: beq         $s1, $t4, L_1515DEE8
    if (ctx->r17 == ctx->r12) {
        // 0x1515DECC: sw          $s0, 0xE4($t7)
        MEM_W(0XE4, ctx->r15) = ctx->r16;
            goto L_1515DEE8;
    }
    // 0x1515DECC: sw          $s0, 0xE4($t7)
    MEM_W(0XE4, ctx->r15) = ctx->r16;
    // 0x1515DED0: b           L_1515DEE8
    // 0x1515DED4: or          $ra, $t4, $zero
    ctx->r31 = ctx->r12 | 0;
        goto L_1515DEE8;
    // 0x1515DED4: or          $ra, $t4, $zero
    ctx->r31 = ctx->r12 | 0;
L_1515DED8:
    // 0x1515DED8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1515DEDC: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x1515DEE0: bne         $t0, $a2, L_1515DDEC
    if (ctx->r8 != ctx->r6) {
        // 0x1515DEE4: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_1515DDEC;
    }
    // 0x1515DEE4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_1515DEE8:
    // 0x1515DEE8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_1515DEEC:
    // 0x1515DEEC: bnel        $s0, $zero, L_1515DC88
    if (ctx->r16 != 0) {
        // 0x1515DEF0: lbu         $t9, 0xC($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0XC);
            goto L_1515DC88;
    }
    goto skip_7;
    // 0x1515DEF0: lbu         $t9, 0xC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC);
    skip_7:
    // 0x1515DEF4: sw          $t3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r11;
L_1515DEF8:
    // 0x1515DEF8: beq         $s1, $zero, L_1515DF9C
    if (ctx->r17 == 0) {
        // 0x1515DEFC: lw          $v0, 0x15C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X15C);
            goto L_1515DF9C;
    }
    // 0x1515DEFC: lw          $v0, 0x15C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X15C);
    // 0x1515DF00: andi        $t8, $ra, 0x1
    ctx->r24 = ctx->r31 & 0X1;
    // 0x1515DF04: beq         $t8, $zero, L_1515DF28
    if (ctx->r24 == 0) {
        // 0x1515DF08: lw          $t5, 0x16C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X16C);
            goto L_1515DF28;
    }
    // 0x1515DF08: lw          $t5, 0x16C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X16C);
    // 0x1515DF0C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1515DF10: beq         $t5, $zero, L_1515DF30
    if (ctx->r13 == 0) {
        // 0x1515DF14: sw          $t6, 0x128($sp)
        MEM_W(0X128, ctx->r29) = ctx->r14;
            goto L_1515DF30;
    }
    // 0x1515DF14: sw          $t6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r14;
    // 0x1515DF18: sll         $t9, $ra, 2
    ctx->r25 = S32(ctx->r31 << 2);
    // 0x1515DF1C: addu        $t7, $t5, $t9
    ctx->r15 = ADD32(ctx->r13, ctx->r25);
    // 0x1515DF20: b           L_1515DF30
    // 0x1515DF24: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
        goto L_1515DF30;
    // 0x1515DF24: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
L_1515DF28:
    // 0x1515DF28: sw          $zero, 0x128($sp)
    MEM_W(0X128, ctx->r29) = 0;
    // 0x1515DF2C: lw          $t5, 0x16C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X16C);
L_1515DF30:
    // 0x1515DF30: lw          $v0, 0x15C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X15C);
    // 0x1515DF34: lw          $t8, 0x128($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X128);
    // 0x1515DF38: beql        $v0, $zero, L_1515DF6C
    if (ctx->r2 == 0) {
        // 0x1515DF3C: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_1515DF6C;
    }
    goto skip_8;
    // 0x1515DF3C: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    skip_8:
    // 0x1515DF40: beq         $t8, $zero, L_1515DF58
    if (ctx->r24 == 0) {
        // 0x1515DF44: addu        $t6, $ra, $t8
        ctx->r14 = ADD32(ctx->r31, ctx->r24);
            goto L_1515DF58;
    }
    // 0x1515DF44: addu        $t6, $ra, $t8
    ctx->r14 = ADD32(ctx->r31, ctx->r24);
    // 0x1515DF48: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x1515DF4C: ori         $t7, $t9, 0x80
    ctx->r15 = ctx->r25 | 0X80;
    // 0x1515DF50: b           L_1515DF68
    // 0x1515DF54: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
        goto L_1515DF68;
    // 0x1515DF54: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_1515DF58:
    // 0x1515DF58: lw          $t8, 0x128($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X128);
    // 0x1515DF5C: addu        $t6, $ra, $t8
    ctx->r14 = ADD32(ctx->r31, ctx->r24);
    // 0x1515DF60: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x1515DF64: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_1515DF68:
    // 0x1515DF68: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_1515DF6C:
    // 0x1515DF6C: lui         $t7, 0xDB02
    ctx->r15 = S32(0XDB02 << 16);
    // 0x1515DF70: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1515DF74: lw          $t8, 0x128($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X128);
    // 0x1515DF78: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x1515DF7C: addu        $t6, $ra, $t8
    ctx->r14 = ADD32(ctx->r31, ctx->r24);
    // 0x1515DF80: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x1515DF84: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x1515DF88: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x1515DF8C: addiu       $t7, $t9, 0x30
    ctx->r15 = ADD32(ctx->r25, 0X30);
    // 0x1515DF90: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x1515DF94: b           L_1515DFC8
    // 0x1515DF98: nop

        goto L_1515DFC8;
    // 0x1515DF98: nop

L_1515DF9C:
    // 0x1515DF9C: beq         $v0, $zero, L_1515DFA8
    if (ctx->r2 == 0) {
        // 0x1515DFA0: lui         $t8, 0xDB02
        ctx->r24 = S32(0XDB02 << 16);
            goto L_1515DFA8;
    }
    // 0x1515DFA0: lui         $t8, 0xDB02
    ctx->r24 = S32(0XDB02 << 16);
    // 0x1515DFA4: sb          $ra, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r31;
L_1515DFA8:
    // 0x1515DFA8: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x1515DFAC: sll         $t6, $ra, 2
    ctx->r14 = S32(ctx->r31 << 2);
    // 0x1515DFB0: subu        $t6, $t6, $ra
    ctx->r14 = SUB32(ctx->r14, ctx->r31);
    // 0x1515DFB4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x1515DFB8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1515DFBC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1515DFC0: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x1515DFC4: lw          $t5, 0x16C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X16C);
L_1515DFC8:
    // 0x1515DFC8: beq         $s1, $zero, L_1515E258
    if (ctx->r17 == 0) {
        // 0x1515DFCC: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_1515E258;
    }
    // 0x1515DFCC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1515DFD0: lbu         $t9, -0x1640($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1640);
    // 0x1515DFD4: sll         $v1, $ra, 2
    ctx->r3 = S32(ctx->r31 << 2);
    // 0x1515DFD8: subu        $v1, $v1, $ra
    ctx->r3 = SUB32(ctx->r3, ctx->r31);
    // 0x1515DFDC: multu       $t9, $s1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515DFE0: lw          $t9, 0x150($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X150);
    // 0x1515DFE4: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x1515DFE8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1515DFEC: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x1515DFF0: andi        $t4, $s2, 0x20
    ctx->r12 = ctx->r18 & 0X20;
    // 0x1515DFF4: addiu       $t2, $zero, 0x60
    ctx->r10 = ADD32(0, 0X60);
    // 0x1515DFF8: lui         $t3, 0xDC28
    ctx->r11 = S32(0XDC28 << 16);
    // 0x1515DFFC: mflo        $t7
    ctx->r15 = lo;
    // 0x1515E000: addu        $t8, $t7, $ra
    ctx->r24 = ADD32(ctx->r15, ctx->r31);
    // 0x1515E004: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x1515E008: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515E00C: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x1515E010: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x1515E014: addu        $a2, $t6, $t9
    ctx->r6 = ADD32(ctx->r14, ctx->r25);
    // 0x1515E018: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1515E01C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1515E020: addiu       $t6, $t6, -0x32D0
    ctx->r14 = ADD32(ctx->r14, -0X32D0);
    // 0x1515E024: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1515E028: addu        $v0, $t8, $t6
    ctx->r2 = ADD32(ctx->r24, ctx->r14);
    // 0x1515E02C: lb          $t9, 0x0($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X0);
    // 0x1515E030: sb          $t9, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r25;
    // 0x1515E034: lb          $t7, 0x1($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X1);
    // 0x1515E038: sb          $t7, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r15;
    // 0x1515E03C: lb          $t8, 0x2($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2);
    // 0x1515E040: sb          $t8, 0xA($a2)
    MEM_B(0XA, ctx->r6) = ctx->r24;
    // 0x1515E044: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x1515E048: lbu         $v0, 0x114($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X114);
    // 0x1515E04C: beql        $t6, $zero, L_1515E07C
    if (ctx->r14 == 0) {
        // 0x1515E050: sb          $zero, 0x4($a2)
        MEM_B(0X4, ctx->r6) = 0;
            goto L_1515E07C;
    }
    goto skip_9;
    // 0x1515E050: sb          $zero, 0x4($a2)
    MEM_B(0X4, ctx->r6) = 0;
    skip_9:
    // 0x1515E054: sb          $v0, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r2;
    // 0x1515E058: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x1515E05C: lbu         $v0, 0x115($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X115);
    // 0x1515E060: sb          $v0, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r2;
    // 0x1515E064: sb          $v0, 0x1($a2)
    MEM_B(0X1, ctx->r6) = ctx->r2;
    // 0x1515E068: lbu         $v0, 0x116($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X116);
    // 0x1515E06C: sb          $v0, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r2;
    // 0x1515E070: b           L_1515E090
    // 0x1515E074: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
        goto L_1515E090;
    // 0x1515E074: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x1515E078: sb          $zero, 0x4($a2)
    MEM_B(0X4, ctx->r6) = 0;
L_1515E07C:
    // 0x1515E07C: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x1515E080: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
    // 0x1515E084: sb          $zero, 0x1($a2)
    MEM_B(0X1, ctx->r6) = 0;
    // 0x1515E088: sb          $zero, 0x6($a2)
    MEM_B(0X6, ctx->r6) = 0;
    // 0x1515E08C: sb          $zero, 0x2($a2)
    MEM_B(0X2, ctx->r6) = 0;
L_1515E090:
    // 0x1515E090: blez        $ra, L_1515E170
    if (SIGNED(ctx->r31) <= 0) {
        // 0x1515E094: subu        $a2, $a2, $v1
        ctx->r6 = SUB32(ctx->r6, ctx->r3);
            goto L_1515E170;
    }
    // 0x1515E094: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x1515E098: addiu       $v1, $sp, 0xE4
    ctx->r3 = ADD32(ctx->r29, 0XE4);
L_1515E09C:
    // 0x1515E09C: beq         $t5, $zero, L_1515E0AC
    if (ctx->r13 == 0) {
        // 0x1515E0A0: lw          $s0, 0x0($v1)
        ctx->r16 = MEM_W(ctx->r3, 0X0);
            goto L_1515E0AC;
    }
    // 0x1515E0A0: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
    // 0x1515E0A4: addu        $t6, $t5, $t1
    ctx->r14 = ADD32(ctx->r13, ctx->r9);
    // 0x1515E0A8: sw          $s0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r16;
L_1515E0AC:
    // 0x1515E0AC: beq         $t4, $zero, L_1515E0C8
    if (ctx->r12 == 0) {
        // 0x1515E0B0: lw          $t7, 0x13C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X13C);
            goto L_1515E0C8;
    }
    // 0x1515E0B0: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515E0B4: lbu         $t9, 0xC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC);
    // 0x1515E0B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1515E0BC: sllv        $t6, $t8, $t7
    ctx->r14 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x1515E0C0: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x1515E0C4: sb          $t8, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r24;
L_1515E0C8:
    // 0x1515E0C8: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x1515E0CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1515E0D0: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x1515E0D4: bne         $t7, $zero, L_1515E134
    if (ctx->r15 != 0) {
        // 0x1515E0D8: lw          $a3, 0x140($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X140);
            goto L_1515E134;
    }
    // 0x1515E0D8: lw          $a3, 0x140($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X140);
    // 0x1515E0DC: lw          $t9, 0x144($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X144);
    // 0x1515E0E0: lw          $t6, 0x148($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X148);
    // 0x1515E0E4: sw          $ra, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r31;
    // 0x1515E0E8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x1515E0EC: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x1515E0F0: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x1515E0F4: sw          $t0, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r8;
    // 0x1515E0F8: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x1515E0FC: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x1515E100: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x1515E104: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1515E108: jal         0x1515EC78
    // 0x1515E10C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_1515EC78(rdram, ctx);
        goto after_2;
    // 0x1515E10C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_2:
    // 0x1515E110: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x1515E114: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x1515E118: lw          $t0, 0x134($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X134);
    // 0x1515E11C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1515E120: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x1515E124: lui         $t3, 0xDC28
    ctx->r11 = S32(0XDC28 << 16);
    // 0x1515E128: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x1515E12C: lw          $t5, 0x16C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X16C);
    // 0x1515E130: lw          $ra, 0x12C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X12C);
L_1515E134:
    // 0x1515E134: srl         $t8, $t2, 3
    ctx->r24 = S32(U32(ctx->r10) >> 3);
    // 0x1515E138: andi        $t7, $t8, 0xFF
    ctx->r15 = ctx->r24 & 0XFF;
    // 0x1515E13C: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x1515E140: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x1515E144: or          $t6, $t9, $t3
    ctx->r14 = ctx->r25 | ctx->r11;
    // 0x1515E148: ori         $t8, $t6, 0xA
    ctx->r24 = ctx->r14 | 0XA;
    // 0x1515E14C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1515E150: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x1515E154: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x1515E158: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1515E15C: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x1515E160: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1515E164: addiu       $t2, $t2, 0x30
    ctx->r10 = ADD32(ctx->r10, 0X30);
    // 0x1515E168: bne         $t0, $ra, L_1515E09C
    if (ctx->r8 != ctx->r31) {
        // 0x1515E16C: addiu       $a2, $a2, 0x30
        ctx->r6 = ADD32(ctx->r6, 0X30);
            goto L_1515E09C;
    }
    // 0x1515E16C: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
L_1515E170:
    // 0x1515E170: lw          $t7, 0x128($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X128);
    // 0x1515E174: lui         $t3, 0xDC28
    ctx->r11 = S32(0XDC28 << 16);
    // 0x1515E178: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x1515E17C: beq         $t7, $zero, L_1515E1BC
    if (ctx->r15 == 0) {
        // 0x1515E180: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_1515E1BC;
    }
    // 0x1515E180: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x1515E184: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x1515E188: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x1515E18C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x1515E190: addiu       $t6, $t9, 0x60
    ctx->r14 = ADD32(ctx->r25, 0X60);
    // 0x1515E194: srl         $t8, $t6, 3
    ctx->r24 = S32(U32(ctx->r14) >> 3);
    // 0x1515E198: andi        $t7, $t8, 0xFF
    ctx->r15 = ctx->r24 & 0XFF;
    // 0x1515E19C: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x1515E1A0: or          $t6, $t9, $t3
    ctx->r14 = ctx->r25 | ctx->r11;
    // 0x1515E1A4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1515E1A8: addiu       $t7, $t7, -0x32C0
    ctx->r15 = ADD32(ctx->r15, -0X32C0);
    // 0x1515E1AC: ori         $t8, $t6, 0xA
    ctx->r24 = ctx->r14 | 0XA;
    // 0x1515E1B0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1515E1B4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x1515E1B8: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
L_1515E1BC:
    // 0x1515E1BC: lw          $t9, 0x128($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X128);
    // 0x1515E1C0: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x1515E1C4: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x1515E1C8: addu        $v1, $t0, $t9
    ctx->r3 = ADD32(ctx->r8, ctx->r25);
    // 0x1515E1CC: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x1515E1D0: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E1D4: mflo        $t8
    ctx->r24 = lo;
    // 0x1515E1D8: addiu       $t7, $t8, 0x30
    ctx->r15 = ADD32(ctx->r24, 0X30);
    // 0x1515E1DC: srl         $t9, $t7, 3
    ctx->r25 = S32(U32(ctx->r15) >> 3);
    // 0x1515E1E0: andi        $t6, $t9, 0xFF
    ctx->r14 = ctx->r25 & 0XFF;
    // 0x1515E1E4: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x1515E1E8: or          $t7, $t8, $t3
    ctx->r15 = ctx->r24 | ctx->r11;
    // 0x1515E1EC: ori         $t9, $t7, 0xA
    ctx->r25 = ctx->r15 | 0XA;
    // 0x1515E1F0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1515E1F4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1515E1F8: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x1515E1FC: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E200: lw          $t6, 0x150($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X150);
    // 0x1515E204: mflo        $t8
    ctx->r24 = lo;
    // 0x1515E208: addu        $t7, $t8, $t0
    ctx->r15 = ADD32(ctx->r24, ctx->r8);
    // 0x1515E20C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x1515E210: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x1515E214: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x1515E218: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x1515E21C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1515E220: addiu       $t7, $v1, 0x2
    ctx->r15 = ADD32(ctx->r3, 0X2);
    // 0x1515E224: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E228: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1515E22C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x1515E230: mflo        $t9
    ctx->r25 = lo;
    // 0x1515E234: addiu       $t6, $t9, 0x30
    ctx->r14 = ADD32(ctx->r25, 0X30);
    // 0x1515E238: srl         $t8, $t6, 3
    ctx->r24 = S32(U32(ctx->r14) >> 3);
    // 0x1515E23C: andi        $t7, $t8, 0xFF
    ctx->r15 = ctx->r24 & 0XFF;
    // 0x1515E240: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x1515E244: or          $t6, $t9, $t3
    ctx->r14 = ctx->r25 | ctx->r11;
    // 0x1515E248: ori         $t8, $t6, 0xA
    ctx->r24 = ctx->r14 | 0XA;
    // 0x1515E24C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x1515E250: lw          $t7, 0x158($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X158);
    // 0x1515E254: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
L_1515E258:
    // 0x1515E258: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x1515E25C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1515E260: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x1515E264: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x1515E268: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x1515E26C: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x1515E270: jr          $ra
    // 0x1515E274: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    return;
    // 0x1515E274: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_1512D980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512D980: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1512D984: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1512D988: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1512D98C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1512D990: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1512D994: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1512D998: addiu       $t9, $t9, -0x3D40
    ctx->r25 = ADD32(ctx->r25, -0X3D40);
    // 0x1512D99C: lbu         $t7, 0x23D($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X23D);
    // 0x1512D9A0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1512D9A4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1512D9A8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1512D9AC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1512D9B0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1512D9B4: jal         0x150ADA20
    // 0x1512D9B8: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1512D9B8: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    after_0:
    // 0x1512D9BC: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x1512D9C0: beq         $t0, $zero, L_1512D9D8
    if (ctx->r8 == 0) {
        // 0x1512D9C4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_1512D9D8;
    }
    // 0x1512D9C4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x1512D9C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1512D9CC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1512D9D0: b           L_1512D9E4
    // 0x1512D9D4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
        goto L_1512D9E4;
    // 0x1512D9D4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_1512D9D8:
    // 0x1512D9D8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1512D9DC: nop

    // 0x1512D9E0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_1512D9E4:
    // 0x1512D9E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1512D9E8: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1512D9EC: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x1512D9F0: nop

    // 0x1512D9F4: bc1tl       L_1512DD38
    if (c1cs) {
        // 0x1512D9F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1512DD38;
    }
    goto skip_0;
    // 0x1512D9F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1512D9FC: lw          $t1, 0x50($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X50);
    // 0x1512DA00: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1512DA04: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1512DA08: beql        $t1, $at, L_1512DD38
    if (ctx->r9 == ctx->r1) {
        // 0x1512DA0C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1512DD38;
    }
    goto skip_1;
    // 0x1512DA0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x1512DA10: lw          $t3, 0x84($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X84);
    // 0x1512DA14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512DA18: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x1512DA1C: bltzl       $t4, L_1512DD38
    if (SIGNED(ctx->r12) < 0) {
        // 0x1512DA20: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1512DD38;
    }
    goto skip_2;
    // 0x1512DA20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x1512DA24: lwc1        $f6, 0x36F0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X36F0);
    // 0x1512DA28: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1512DA2C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1512DA30: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x1512DA34: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1512DA38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512DA3C: lwc1        $f6, 0x36F4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X36F4);
    // 0x1512DA40: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x1512DA44: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1512DA48: nop

    // 0x1512DA4C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1512DA50: nop

    // 0x1512DA54: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1512DA58: jal         0x15047D60
    // 0x1512DA5C: nop

    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x1512DA5C: nop

    after_1:
    // 0x1512DA60: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1512DA64: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1512DA68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512DA6C: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1512DA70: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x1512DA74: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1512DA78: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1512DA7C: swc1        $f16, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f16.u32l;
    // 0x1512DA80: lwc1        $f4, 0x36F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X36F8);
    // 0x1512DA84: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1512DA88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1512DA8C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1512DA90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512DA94: lwc1        $f4, 0x36FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X36FC);
    // 0x1512DA98: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1512DA9C: nop

    // 0x1512DAA0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1512DAA4: nop

    // 0x1512DAA8: mul.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1512DAAC: jal         0x15047D60
    // 0x1512DAB0: nop

    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x1512DAB0: nop

    after_2:
    // 0x1512DAB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1512DAB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512DABC: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1512DAC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512DAC4: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1512DAC8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1512DACC: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1512DAD0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1512DAD4: swc1        $f16, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f16.u32l;
    // 0x1512DAD8: lwc1        $f4, 0x3700($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3700);
    // 0x1512DADC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1512DAE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1512DAE4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1512DAE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512DAEC: lwc1        $f4, 0x3704($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3704);
    // 0x1512DAF0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1512DAF4: nop

    // 0x1512DAF8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1512DAFC: nop

    // 0x1512DB00: mul.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1512DB04: jal         0x15047D60
    // 0x1512DB08: nop

    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x1512DB08: nop

    after_3:
    // 0x1512DB0C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x1512DB10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512DB14: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1512DB18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512DB1C: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1512DB20: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1512DB24: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1512DB28: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1512DB2C: swc1        $f16, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f16.u32l;
    // 0x1512DB30: lwc1        $f4, 0x3708($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3708);
    // 0x1512DB34: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1512DB38: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1512DB3C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1512DB40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512DB44: lwc1        $f4, 0x370C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X370C);
    // 0x1512DB48: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1512DB4C: nop

    // 0x1512DB50: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1512DB54: nop

    // 0x1512DB58: mul.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1512DB5C: jal         0x15047D60
    // 0x1512DB60: nop

    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x1512DB60: nop

    after_4:
    // 0x1512DB64: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x1512DB68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512DB6C: lwc1        $f12, 0x2C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1512DB70: lwc1        $f14, 0x3C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1512DB74: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1512DB78: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1512DB7C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x1512DB80: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x1512DB84: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1512DB88: bc1f        L_1512DD30
    if (!c1cs) {
        // 0x1512DB8C: swc1        $f10, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->f10.u32l;
            goto L_1512DD30;
    }
    // 0x1512DB8C: swc1        $f10, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f10.u32l;
    // 0x1512DB90: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1512DB94: nop

    // 0x1512DB98: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x1512DB9C: nop

    // 0x1512DBA0: bc1fl       L_1512DD34
    if (!c1cs) {
        // 0x1512DBA4: sw          $t8, 0x50($s0)
        MEM_W(0X50, ctx->r16) = ctx->r24;
            goto L_1512DD34;
    }
    goto skip_3;
    // 0x1512DBA4: sw          $t8, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r24;
    skip_3:
    // 0x1512DBA8: lwc1        $f18, 0x30($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X30);
    // 0x1512DBAC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1512DBB0: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x1512DBB4: nop

    // 0x1512DBB8: bc1fl       L_1512DC04
    if (!c1cs) {
        // 0x1512DBBC: lwc1        $f16, 0x34($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
            goto L_1512DC04;
    }
    goto skip_4;
    // 0x1512DBBC: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    skip_4:
    // 0x1512DBC0: lw          $t5, 0x50($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X50);
    // 0x1512DBC4: bnel        $t5, $zero, L_1512DBE8
    if (ctx->r13 != 0) {
        // 0x1512DBC8: lwc1        $f4, 0x40($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
            goto L_1512DBE8;
    }
    goto skip_5;
    // 0x1512DBC8: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    skip_5:
    // 0x1512DBCC: lw          $t6, 0x64($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X64);
    // 0x1512DBD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1512DBD4: beql        $t6, $zero, L_1512DBE8
    if (ctx->r14 == 0) {
        // 0x1512DBD8: lwc1        $f4, 0x40($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
            goto L_1512DBE8;
    }
    goto skip_6;
    // 0x1512DBD8: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    skip_6:
    // 0x1512DBDC: sw          $t7, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r15;
    // 0x1512DBE0: lwc1        $f12, 0x2C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1512DBE4: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
L_1512DBE8:
    // 0x1512DBE8: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1512DBEC: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1512DBF0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1512DBF4: add.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x1512DBF8: b           L_1512DD00
    // 0x1512DBFC: swc1        $f10, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f10.u32l;
        goto L_1512DD00;
    // 0x1512DBFC: swc1        $f10, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f10.u32l;
    // 0x1512DC00: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
L_1512DC04:
    // 0x1512DC04: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x1512DC08: nop

    // 0x1512DC0C: bc1fl       L_1512DC60
    if (!c1cs) {
        // 0x1512DC10: lwc1        $f10, 0x38($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
            goto L_1512DC60;
    }
    goto skip_7;
    // 0x1512DC10: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    skip_7:
    // 0x1512DC14: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x1512DC18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1512DC1C: bne         $t8, $at, L_1512DC3C
    if (ctx->r24 != ctx->r1) {
        // 0x1512DC20: nop
    
            goto L_1512DC3C;
    }
    // 0x1512DC20: nop

    // 0x1512DC24: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x1512DC28: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1512DC2C: beq         $t9, $zero, L_1512DC3C
    if (ctx->r25 == 0) {
        // 0x1512DC30: nop
    
            goto L_1512DC3C;
    }
    // 0x1512DC30: nop

    // 0x1512DC34: sw          $t0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r8;
    // 0x1512DC38: lwc1        $f12, 0x2C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2C);
L_1512DC3C:
    // 0x1512DC3C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1512DC40: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1512DC44: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    // 0x1512DC48: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1512DC4C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1512DC50: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x1512DC54: b           L_1512DD00
    // 0x1512DC58: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
        goto L_1512DD00;
    // 0x1512DC58: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    // 0x1512DC5C: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
L_1512DC60:
    // 0x1512DC60: c.le.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
    // 0x1512DC64: nop

    // 0x1512DC68: bc1fl       L_1512DCA0
    if (!c1cs) {
        // 0x1512DC6C: c.lt.s      $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
            goto L_1512DCA0;
    }
    goto skip_8;
    // 0x1512DC6C: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    skip_8:
    // 0x1512DC70: lw          $t1, 0x50($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X50);
    // 0x1512DC74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1512DC78: bne         $t1, $at, L_1512DD00
    if (ctx->r9 != ctx->r1) {
        // 0x1512DC7C: nop
    
            goto L_1512DD00;
    }
    // 0x1512DC7C: nop

    // 0x1512DC80: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x1512DC84: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x1512DC88: beq         $t2, $zero, L_1512DD00
    if (ctx->r10 == 0) {
        // 0x1512DC8C: nop
    
            goto L_1512DD00;
    }
    // 0x1512DC8C: nop

    // 0x1512DC90: sw          $t3, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r11;
    // 0x1512DC94: b           L_1512DD00
    // 0x1512DC98: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
        goto L_1512DD00;
    // 0x1512DC98: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1512DC9C: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
L_1512DCA0:
    // 0x1512DCA0: nop

    // 0x1512DCA4: bc1f        L_1512DCF4
    if (!c1cs) {
        // 0x1512DCA8: nop
    
            goto L_1512DCF4;
    }
    // 0x1512DCA8: nop

    // 0x1512DCAC: lw          $t4, 0x50($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X50);
    // 0x1512DCB0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1512DCB4: bne         $t4, $at, L_1512DCD4
    if (ctx->r12 != ctx->r1) {
        // 0x1512DCB8: nop
    
            goto L_1512DCD4;
    }
    // 0x1512DCB8: nop

    // 0x1512DCBC: lw          $t5, 0x64($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X64);
    // 0x1512DCC0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x1512DCC4: beq         $t5, $zero, L_1512DCD4
    if (ctx->r13 == 0) {
        // 0x1512DCC8: nop
    
            goto L_1512DCD4;
    }
    // 0x1512DCC8: nop

    // 0x1512DCCC: sw          $t6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r14;
    // 0x1512DCD0: lwc1        $f12, 0x2C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2C);
L_1512DCD4:
    // 0x1512DCD4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1512DCD8: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1512DCDC: lwc1        $f16, 0x4C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x1512DCE0: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1512DCE4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1512DCE8: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x1512DCEC: b           L_1512DD00
    // 0x1512DCF0: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
        goto L_1512DD00;
    // 0x1512DCF0: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
L_1512DCF4:
    // 0x1512DCF4: jal         0x1512D6F0
    // 0x1512DCF8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_1512D6F0(rdram, ctx);
        goto after_5;
    // 0x1512DCF8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x1512DCFC: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
L_1512DD00:
    // 0x1512DD00: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1512DD04: lbu         $t7, -0x1660($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1660);
    // 0x1512DD08: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512DD0C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1512DD10: bgez        $t7, L_1512DD24
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1512DD14: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1512DD24;
    }
    // 0x1512DD14: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1512DD18: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1512DD1C: nop

    // 0x1512DD20: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_1512DD24:
    // 0x1512DD24: add.s       $f18, $f2, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x1512DD28: b           L_1512DD34
    // 0x1512DD2C: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
        goto L_1512DD34;
    // 0x1512DD2C: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
L_1512DD30:
    // 0x1512DD30: sw          $t8, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r24;
L_1512DD34:
    // 0x1512DD34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1512DD38:
    // 0x1512DD38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1512DD3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1512DD40: jr          $ra
    // 0x1512DD44: nop

    return;
    return;
    // 0x1512DD44: nop

;}
RECOMP_FUNC void func_1507F4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507F4C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1507F4C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507F4C8: bne         $a0, $zero, L_1507F4DC
    if (ctx->r4 != 0) {
        // 0x1507F4CC: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_1507F4DC;
    }
    // 0x1507F4CC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1507F4D0: addiu       $v1, $zero, 0xB4
    ctx->r3 = ADD32(0, 0XB4);
    // 0x1507F4D4: b           L_1507F510
    // 0x1507F4D8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
        goto L_1507F510;
    // 0x1507F4D8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_1507F4DC:
    // 0x1507F4DC: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x1507F4E0: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x1507F4E4: bnel        $t6, $at, L_1507F4F8
    if (ctx->r14 != ctx->r1) {
        // 0x1507F4E8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1507F4F8;
    }
    goto skip_0;
    // 0x1507F4E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x1507F4EC: b           L_1507F53C
    // 0x1507F4F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507F53C;
    // 0x1507F4F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1507F4F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_1507F4F8:
    // 0x1507F4F8: bne         $a0, $at, L_1507F50C
    if (ctx->r4 != ctx->r1) {
        // 0x1507F4FC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1507F50C;
    }
    // 0x1507F4FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1507F500: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x1507F504: b           L_1507F510
    // 0x1507F508: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
        goto L_1507F510;
    // 0x1507F508: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_1507F50C:
    // 0x1507F50C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
L_1507F510:
    // 0x1507F510: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x1507F514: jal         0x150ADA20
    // 0x1507F518: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1507F518: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x1507F51C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x1507F520: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x1507F524: divu        $zero, $v0, $a0
    lo = S32(U32(ctx->r2) / U32(ctx->r4)); hi = S32(U32(ctx->r2) % U32(ctx->r4));
    // 0x1507F528: mfhi        $t7
    ctx->r15 = hi;
    // 0x1507F52C: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
    // 0x1507F530: bne         $a0, $zero, L_1507F53C
    if (ctx->r4 != 0) {
        // 0x1507F534: nop
    
            goto L_1507F53C;
    }
    // 0x1507F534: nop

    // 0x1507F538: break       7
    do_break(352843064);
L_1507F53C:
    // 0x1507F53C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507F540: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1507F544: jr          $ra
    // 0x1507F548: nop

    return;
    return;
    // 0x1507F548: nop

;}
RECOMP_FUNC void func_100131D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100131D8: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x100131DC: lw          $t6, 0x2800($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2800);
    // 0x100131E0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x100131E4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x100131E8: sw          $a0, 0x2800($at)
    MEM_W(0X2800, ctx->r1) = ctx->r4;
    // 0x100131EC: jr          $ra
    // 0x100131F0: nop

    return;
    return;
    // 0x100131F0: nop

    // 0x100131F4: jr          $ra
    // 0x100131F8: nop

    return;
    return;
    // 0x100131F8: nop

;}
RECOMP_FUNC void func_150B4294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B4294: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x150B4298: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x150B429C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150B42A0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x150B42A4: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x150B42A8: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    // 0x150B42AC: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x150B42B0: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x150B42B4: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x150B42B8: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x150B42BC: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x150B42C0: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x150B42C4: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x150B42C8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x150B42CC: lw          $s2, 0x98($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X98);
    // 0x150B42D0: jal         0x150ADA20
    // 0x150B42D4: lw          $s3, 0x94($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X94);
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150B42D4: lw          $s3, 0x94($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X94);
    after_0:
    // 0x150B42D8: lbu         $t6, 0x10($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X10);
    // 0x150B42DC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150B42E0: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x150B42E4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x150B42E8: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x150B42EC: mfhi        $t8
    ctx->r24 = hi;
    // 0x150B42F0: lbu         $t1, 0x50($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X50);
    // 0x150B42F4: bne         $t7, $zero, L_150B4300
    if (ctx->r15 != 0) {
        // 0x150B42F8: nop
    
            goto L_150B4300;
    }
    // 0x150B42F8: nop

    // 0x150B42FC: break       7
    do_break(353059580);
L_150B4300:
    // 0x150B4300: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B4304: mflo        $t0
    ctx->r8 = lo;
    // 0x150B4308: addu        $a0, $t1, $t0
    ctx->r4 = ADD32(ctx->r9, ctx->r8);
    // 0x150B430C: sb          $a0, 0x50($s2)
    MEM_B(0X50, ctx->r18) = ctx->r4;
    // 0x150B4310: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150B4314: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x150B4318: jal         0x151423D8
    // 0x150B431C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x150B431C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_1:
    // 0x150B4320: lwc1        $f4, 0x18($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X18);
    // 0x150B4324: lwc1        $f8, 0x14($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X14);
    // 0x150B4328: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150B432C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150B4330: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x150B4334: lwc1        $f18, 0x20($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X20);
    // 0x150B4338: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150B433C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150B4340: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150B4344: lwc1        $f8, 0x44($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X44);
    // 0x150B4348: swc1        $f10, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f10.u32l;
    // 0x150B434C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150B4350: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150B4354: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x150B4358: swc1        $f10, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->f10.u32l;
    // 0x150B435C: lwc1        $f16, 0x44($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X44);
    // 0x150B4360: c.lt.s      $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f24.fl < ctx->f16.fl;
    // 0x150B4364: nop

    // 0x150B4368: bc1fl       L_150B46D8
    if (!c1cs) {
        // 0x150B436C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150B46D8;
    }
    goto skip_0;
    // 0x150B436C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x150B4370: div.s       $f2, $f24, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f24.fl, ctx->f16.fl);
    // 0x150B4374: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    // 0x150B4378: lwc1        $f20, 0x0($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150B437C: addiu       $t4, $sp, 0x80
    ctx->r12 = ADD32(ctx->r29, 0X80);
    // 0x150B4380: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150B4384: lw          $t6, 0x4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X4);
    // 0x150B4388: addiu       $s5, $s0, 0x10
    ctx->r21 = ADD32(ctx->r16, 0X10);
    // 0x150B438C: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
    // 0x150B4390: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x150B4394: lw          $at, 0x8($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X8);
    // 0x150B4398: addiu       $s1, $zero, 0x24
    ctx->r17 = ADD32(0, 0X24);
    // 0x150B439C: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x150B43A0: lwc1        $f22, 0x40($s2)
    ctx->f22.u32l = MEM_W(ctx->r18, 0X40);
    // 0x150B43A4: lwc1        $f18, 0x4C($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x150B43A8: sub.s       $f14, $f18, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f22.fl;
    // 0x150B43AC: mul.s       $f26, $f20, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x150B43B0: nop

    // 0x150B43B4: mul.s       $f28, $f14, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f28.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x150B43B8: nop

    // 0x150B43BC: lwc1        $f4, 0x54($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X54);
L_150B43C0:
    // 0x150B43C0: lwc1        $f8, 0x3C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X3C);
    // 0x150B43C4: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150B43C8: swc1        $f6, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->f6.u32l;
    // 0x150B43CC: lwc1        $f10, 0x54($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X54);
    // 0x150B43D0: c.lt.s      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.fl < ctx->f10.fl;
    // 0x150B43D4: nop

    // 0x150B43D8: bc1fl       L_150B43EC
    if (!c1cs) {
        // 0x150B43DC: lb          $t7, 0x2E($s0)
        ctx->r15 = MEM_B(ctx->r16, 0X2E);
            goto L_150B43EC;
    }
    goto skip_1;
    // 0x150B43DC: lb          $t7, 0x2E($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X2E);
    skip_1:
    // 0x150B43E0: jal         0x150B5088
    // 0x150B43E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150B5088(rdram, ctx);
        goto after_2;
    // 0x150B43E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x150B43E8: lb          $t7, 0x2E($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X2E);
L_150B43EC:
    // 0x150B43EC: lw          $at, 0x0($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X0);
    // 0x150B43F0: multu       $t7, $s1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B43F4: mflo        $t8
    ctx->r24 = lo;
    // 0x150B43F8: addu        $t9, $s3, $t8
    ctx->r25 = ADD32(ctx->r19, ctx->r24);
    // 0x150B43FC: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x150B4400: lw          $t0, 0x4($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X4);
    // 0x150B4404: sw          $t0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r8;
    // 0x150B4408: lw          $at, 0x8($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X8);
    // 0x150B440C: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x150B4410: lb          $t2, 0x2E($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2E);
    // 0x150B4414: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150B4418: multu       $t2, $s1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B441C: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x150B4420: mflo        $t3
    ctx->r11 = lo;
    // 0x150B4424: addu        $t5, $s3, $t3
    ctx->r13 = ADD32(ctx->r19, ctx->r11);
    // 0x150B4428: swc1        $f4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f4.u32l;
    // 0x150B442C: lb          $t4, 0x2E($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X2E);
    // 0x150B4430: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x150B4434: multu       $t4, $s1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B4438: mul.s       $f6, $f8, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x150B443C: mflo        $t6
    ctx->r14 = lo;
    // 0x150B4440: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x150B4444: swc1        $f6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f6.u32l;
    // 0x150B4448: lb          $t8, 0x2E($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X2E);
    // 0x150B444C: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x150B4450: multu       $t8, $s1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B4454: mul.s       $f18, $f10, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x150B4458: mflo        $t1
    ctx->r9 = lo;
    // 0x150B445C: addu        $t9, $s3, $t1
    ctx->r25 = ADD32(ctx->r19, ctx->r9);
    // 0x150B4460: swc1        $f18, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f18.u32l;
    // 0x150B4464: lb          $t0, 0x2E($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X2E);
    // 0x150B4468: lwc1        $f4, 0x2C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X2C);
    // 0x150B446C: multu       $t0, $s1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B4470: mflo        $t2
    ctx->r10 = lo;
    // 0x150B4474: addu        $t3, $s3, $t2
    ctx->r11 = ADD32(ctx->r19, ctx->r10);
    // 0x150B4478: swc1        $f4, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f4.u32l;
    // 0x150B447C: lb          $t5, 0x2E($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2E);
    // 0x150B4480: multu       $t5, $s1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B4484: mflo        $t4
    ctx->r12 = lo;
    // 0x150B4488: addu        $t6, $s3, $t4
    ctx->r14 = ADD32(ctx->r19, ctx->r12);
    // 0x150B448C: sh          $s4, 0x1C($t6)
    MEM_H(0X1C, ctx->r14) = ctx->r20;
    // 0x150B4490: lb          $t8, 0x2E($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X2E);
    // 0x150B4494: lh          $t7, 0x36($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X36);
    // 0x150B4498: multu       $t8, $s1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B449C: mflo        $t1
    ctx->r9 = lo;
    // 0x150B44A0: addu        $t9, $s3, $t1
    ctx->r25 = ADD32(ctx->r19, ctx->r9);
    // 0x150B44A4: sh          $t7, 0x1E($t9)
    MEM_H(0X1E, ctx->r25) = ctx->r15;
    // 0x150B44A8: lb          $t2, 0x2E($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2E);
    // 0x150B44AC: lbu         $t0, 0x48($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X48);
    // 0x150B44B0: multu       $t2, $s1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B44B4: mflo        $t3
    ctx->r11 = lo;
    // 0x150B44B8: addu        $t5, $s3, $t3
    ctx->r13 = ADD32(ctx->r19, ctx->r11);
    // 0x150B44BC: jal         0x150ADA68
    // 0x150B44C0: sb          $t0, 0x20($t5)
    MEM_B(0X20, ctx->r13) = ctx->r8;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150B44C0: sb          $t0, 0x20($t5)
    MEM_B(0X20, ctx->r13) = ctx->r8;
    after_3:
    // 0x150B44C4: lbu         $t4, 0x30($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X30);
    // 0x150B44C8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150B44CC: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x150B44D0: bgez        $t4, L_150B44E4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x150B44D4: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_150B44E4;
    }
    // 0x150B44D4: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B44D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B44DC: nop

    // 0x150B44E0: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_150B44E4:
    // 0x150B44E4: lbu         $t6, 0x31($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X31);
    // 0x150B44E8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150B44EC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x150B44F0: bgez        $t6, L_150B4504
    if (SIGNED(ctx->r14) >= 0) {
        // 0x150B44F4: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_150B4504;
    }
    // 0x150B44F4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150B44F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B44FC: nop

    // 0x150B4500: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_150B4504:
    // 0x150B4504: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150B4508: lbu         $t8, 0x48($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X48);
    // 0x150B450C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150B4510: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x150B4514: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150B4518: bgez        $t8, L_150B452C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x150B451C: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_150B452C;
    }
    // 0x150B451C: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B4520: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B4524: nop

    // 0x150B4528: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_150B452C:
    // 0x150B452C: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x150B4530: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150B4534: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150B4538: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x150B453C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x150B4540: nop

    // 0x150B4544: cvt.w.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150B4548: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x150B454C: nop

    // 0x150B4550: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x150B4554: beql        $t7, $zero, L_150B45A4
    if (ctx->r15 == 0) {
        // 0x150B4558: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_150B45A4;
    }
    goto skip_2;
    // 0x150B4558: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x150B455C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B4560: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150B4564: sub.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x150B4568: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x150B456C: nop

    // 0x150B4570: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x150B4574: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x150B4578: nop

    // 0x150B457C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x150B4580: bne         $t7, $zero, L_150B4598
    if (ctx->r15 != 0) {
        // 0x150B4584: nop
    
            goto L_150B4598;
    }
    // 0x150B4584: nop

    // 0x150B4588: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x150B458C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150B4590: b           L_150B45B0
    // 0x150B4594: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_150B45B0;
    // 0x150B4594: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_150B4598:
    // 0x150B4598: b           L_150B45B0
    // 0x150B459C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_150B45B0;
    // 0x150B459C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150B45A0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_150B45A4:
    // 0x150B45A4: nop

    // 0x150B45A8: bltz        $t7, L_150B4598
    if (SIGNED(ctx->r15) < 0) {
        // 0x150B45AC: nop
    
            goto L_150B4598;
    }
    // 0x150B45AC: nop

L_150B45B0:
    // 0x150B45B0: sb          $t7, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r15;
    // 0x150B45B4: lb          $t9, 0x2E($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X2E);
    // 0x150B45B8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x150B45BC: lwc1        $f4, 0xC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC);
    // 0x150B45C0: multu       $t9, $s1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B45C4: mul.s       $f18, $f4, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x150B45C8: mflo        $t2
    ctx->r10 = lo;
    // 0x150B45CC: addu        $v0, $s3, $t2
    ctx->r2 = ADD32(ctx->r19, ctx->r10);
    // 0x150B45D0: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x150B45D4: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150B45D8: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x150B45DC: lb          $t3, 0x2E($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X2E);
    // 0x150B45E0: multu       $t3, $s1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B45E4: mflo        $t0
    ctx->r8 = lo;
    // 0x150B45E8: addu        $v0, $s3, $t0
    ctx->r2 = ADD32(ctx->r19, ctx->r8);
    // 0x150B45EC: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x150B45F0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150B45F4: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x150B45F8: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x150B45FC: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x150B4600: lb          $t5, 0x2E($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2E);
    // 0x150B4604: multu       $t5, $s1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B4608: mflo        $t4
    ctx->r12 = lo;
    // 0x150B460C: addu        $v0, $s3, $t4
    ctx->r2 = ADD32(ctx->r19, ctx->r12);
    // 0x150B4610: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x150B4614: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150B4618: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x150B461C: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150B4620: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x150B4624: lb          $t6, 0x2E($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2E);
    // 0x150B4628: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B462C: mflo        $t8
    ctx->r24 = lo;
    // 0x150B4630: addu        $v0, $s3, $t8
    ctx->r2 = ADD32(ctx->r19, ctx->r24);
    // 0x150B4634: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150B4638: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150B463C: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x150B4640: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x150B4644: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x150B4648: lb          $t1, 0x2E($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X2E);
    // 0x150B464C: lbu         $t9, 0x25($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X25);
    // 0x150B4650: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x150B4654: sb          $t7, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r15;
    // 0x150B4658: lb          $v1, 0x2E($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2E);
    // 0x150B465C: bnel        $t9, $v1, L_150B4670
    if (ctx->r25 != ctx->r3) {
        // 0x150B4660: lb          $t2, 0x2C($s0)
        ctx->r10 = MEM_B(ctx->r16, 0X2C);
            goto L_150B4670;
    }
    goto skip_3;
    // 0x150B4660: lb          $t2, 0x2C($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2C);
    skip_3:
    // 0x150B4664: sb          $zero, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = 0;
    // 0x150B4668: lb          $v1, 0x2E($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2E);
    // 0x150B466C: lb          $t2, 0x2C($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2C);
L_150B4670:
    // 0x150B4670: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x150B4674: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x150B4678: bne         $v0, $v1, L_150B46A8
    if (ctx->r2 != ctx->r3) {
        // 0x150B467C: sb          $t3, 0x2C($s0)
        MEM_B(0X2C, ctx->r16) = ctx->r11;
            goto L_150B46A8;
    }
    // 0x150B467C: sb          $t3, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r11;
    // 0x150B4680: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x150B4684: sb          $t0, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r8;
    // 0x150B4688: lb          $t4, 0x2D($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X2D);
    // 0x150B468C: lbu         $t5, 0x25($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X25);
    // 0x150B4690: bnel        $t5, $t4, L_150B46A0
    if (ctx->r13 != ctx->r12) {
        // 0x150B4694: lb          $t6, 0x2C($s0)
        ctx->r14 = MEM_B(ctx->r16, 0X2C);
            goto L_150B46A0;
    }
    goto skip_4;
    // 0x150B4694: lb          $t6, 0x2C($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2C);
    skip_4:
    // 0x150B4698: sb          $zero, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = 0;
    // 0x150B469C: lb          $t6, 0x2C($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2C);
L_150B46A0:
    // 0x150B46A0: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x150B46A4: sb          $t8, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r24;
L_150B46A8:
    // 0x150B46A8: lwc1        $f6, 0x44($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X44);
    // 0x150B46AC: add.s       $f22, $f22, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f28.fl;
    // 0x150B46B0: sub.s       $f4, $f6, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x150B46B4: sub.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f26.fl;
    // 0x150B46B8: swc1        $f4, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->f4.u32l;
    // 0x150B46BC: lwc1        $f18, 0x44($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X44);
    // 0x150B46C0: c.lt.s      $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f24.fl < ctx->f18.fl;
    // 0x150B46C4: nop

    // 0x150B46C8: bc1tl       L_150B43C0
    if (c1cs) {
        // 0x150B46CC: lwc1        $f4, 0x54($s2)
        ctx->f4.u32l = MEM_W(ctx->r18, 0X54);
            goto L_150B43C0;
    }
    goto skip_5;
    // 0x150B46CC: lwc1        $f4, 0x54($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X54);
    skip_5:
    // 0x150B46D0: swc1        $f22, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->f22.u32l;
    // 0x150B46D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150B46D8:
    // 0x150B46D8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x150B46DC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x150B46E0: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x150B46E4: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x150B46E8: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x150B46EC: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x150B46F0: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x150B46F4: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x150B46F8: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x150B46FC: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x150B4700: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x150B4704: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x150B4708: jr          $ra
    // 0x150B470C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    return;
    // 0x150B470C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_150CCCB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CCCB4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150CCCB8: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x150CCCBC: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x150CCCC0: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCCC4: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x150CCCC8: lwc1        $f12, 0x5C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x150CCCCC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CCCD0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150CCCD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150CCCD8: lwc1        $f2, 0x48($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X48);
    // 0x150CCCDC: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150CCCE0: swc1        $f16, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f16.u32l;
    // 0x150CCCE4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCCE8: mul.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x150CCCEC: nop

    // 0x150CCCF0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150CCCF4: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x150CCCF8: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CCCFC: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x150CCD00: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150CCD04: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150CCD08: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x150CCD0C: lwc1        $f18, 0x40($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X40);
    // 0x150CCD10: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x150CCD14: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCD18: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150CCD1C: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x150CCD20: lwc1        $f18, 0x50($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X50);
    // 0x150CCD24: swc1        $f16, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f16.u32l;
    // 0x150CCD28: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCD2C: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x150CCD30: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x150CCD34: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x150CCD38: swc1        $f8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f8.u32l;
    // 0x150CCD3C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCD40: lwc1        $f8, 0x54($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X54);
    // 0x150CCD44: mul.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x150CCD48: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x150CCD4C: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x150CCD50: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
    // 0x150CCD54: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCD58: lwc1        $f6, 0x58($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CCD5C: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x150CCD60: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150CCD64: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x150CCD68: swc1        $f16, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f16.u32l;
    // 0x150CCD6C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCD70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CCD74: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150CCD78: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x150CCD7C: swc1        $f10, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f10.u32l;
    // 0x150CCD80: jr          $ra
    // 0x150CCD84: nop

    return;
    return;
    // 0x150CCD84: nop

;}
RECOMP_FUNC void func_150407E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150407E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150407E8: jr          $ra
    // 0x150407EC: nop

    return;
    return;
    // 0x150407EC: nop

;}
RECOMP_FUNC void func_151D10E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D10E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D10E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D10EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151D10F0: andi        $a3, $a2, 0xFF
    ctx->r7 = ctx->r6 & 0XFF;
    // 0x151D10F4: lw          $v0, 0x1D4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1D4);
    // 0x151D10F8: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x151D10FC: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x151D1100: bne         $v0, $zero, L_151D1110
    if (ctx->r2 != 0) {
        // 0x151D1104: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_151D1110;
    }
    // 0x151D1104: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151D1108: b           L_151D1128
    // 0x151D110C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D1128;
    // 0x151D110C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D1110:
    // 0x151D1110: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151D1114: addiu       $t7, $t7, -0x5064
    ctx->r15 = ADD32(ctx->r15, -0X5064);
    // 0x151D1118: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x151D111C: jal         0x15143134
    // 0x151D1120: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x151D1120: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_0:
    // 0x151D1124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151D1128:
    // 0x151D1128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D112C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D1130: jr          $ra
    // 0x151D1134: nop

    return;
    return;
    // 0x151D1134: nop

;}
RECOMP_FUNC void func_15009844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009844: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15009848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1500984C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15009850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15009854: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15009858: jal         0x151B8DB0
    // 0x1500985C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151B8DB0(rdram, ctx);
        goto after_0;
    // 0x1500985C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x15009860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15009864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15009868: jr          $ra
    // 0x1500986C: nop

    return;
    return;
    // 0x1500986C: nop

;}
RECOMP_FUNC void func_15167AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15167AD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15167ADC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15167AE0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15167AE4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15167AE8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15167AEC: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x15167AF0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15167AF4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15167AF8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x15167AFC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x15167B00: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x15167B04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15167B08: jal         0x15167A68
    // 0x15167B0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15167B0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x15167B10: beq         $v0, $zero, L_15167B34
    if (ctx->r2 == 0) {
        // 0x15167B14: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_15167B34;
    }
    // 0x15167B14: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x15167B18: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x15167B1C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x15167B20: jal         0x10023A10
    // 0x15167B24: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    bcopy_recomp(rdram, ctx);
        goto after_1;
    // 0x15167B24: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x15167B28: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x15167B2C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15167B30: sb          $t8, 0x23($v1)
    MEM_B(0X23, ctx->r3) = ctx->r24;
L_15167B34:
    // 0x15167B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15167B38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15167B3C: jr          $ra
    // 0x15167B40: nop

    return;
    return;
    // 0x15167B40: nop

;}
RECOMP_FUNC void func_1507A71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A71C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507A720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507A724: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507A728: jal         0x1507A6FC
    // 0x1507A72C: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_1507A6FC(rdram, ctx);
        goto after_0;
    // 0x1507A72C: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x1507A730: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507A734: lbu         $t6, 0x1891($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1891);
    // 0x1507A738: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507A73C: lbu         $t8, 0x1892($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1892);
    // 0x1507A740: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x1507A744: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x1507A748: or          $a0, $t7, $t8
    ctx->r4 = ctx->r15 | ctx->r24;
    // 0x1507A74C: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x1507A750: and         $t1, $t0, $t9
    ctx->r9 = ctx->r8 & ctx->r25;
    // 0x1507A754: bne         $t9, $t1, L_1507A764
    if (ctx->r25 != ctx->r9) {
        // 0x1507A758: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_1507A764;
    }
    // 0x1507A758: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507A75C: jal         0x15075400
    // 0x1507A760: lbu         $a0, 0x1893($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1893);
    func_15075400(rdram, ctx);
        goto after_1;
    // 0x1507A760: lbu         $a0, 0x1893($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1893);
    after_1:
L_1507A764:
    // 0x1507A764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507A768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507A76C: jr          $ra
    // 0x1507A770: nop

    return;
    return;
    // 0x1507A770: nop

;}
RECOMP_FUNC void func_1514E830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514E830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514E834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514E838: jal         0x1516972C
    // 0x1514E83C: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x1514E83C: nop

    after_0:
    // 0x1514E840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514E844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514E848: jr          $ra
    // 0x1514E84C: nop

    return;
    return;
    // 0x1514E84C: nop

;}
RECOMP_FUNC void func_1000EF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000EF40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1000EF44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1000EF48: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1000EF4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000EF50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1000EF54: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1000EF58: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x1000EF5C: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x1000EF60: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x1000EF64: beq         $t6, $zero, L_1000EF70
    if (ctx->r14 == 0) {
        // 0x1000EF68: and         $t7, $v0, $at
        ctx->r15 = ctx->r2 & ctx->r1;
            goto L_1000EF70;
    }
    // 0x1000EF68: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x1000EF6C: sw          $t7, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r15;
L_1000EF70:
    // 0x1000EF70: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x1000EF74: bnel        $t8, $zero, L_1000EFA4
    if (ctx->r24 != 0) {
        // 0x1000EF78: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1000EFA4;
    }
    goto skip_0;
    // 0x1000EF78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x1000EF7C: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x1000EF80: beql        $a0, $zero, L_1000EF9C
    if (ctx->r4 == 0) {
        // 0x1000EF84: lw          $t9, 0x30($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X30);
            goto L_1000EF9C;
    }
    goto skip_1;
    // 0x1000EF84: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x1000EF88: jal         0x100111C8
    // 0x1000EF8C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x1000EF8C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x1000EF90: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x1000EF94: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
    // 0x1000EF98: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
L_1000EF9C:
    // 0x1000EF9C: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x1000EFA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1000EFA4:
    // 0x1000EFA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000EFA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1000EFAC: jr          $ra
    // 0x1000EFB0: nop

    return;
    return;
    // 0x1000EFB0: nop

;}
RECOMP_FUNC void func_150049A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150049A4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x150049A8: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x150049AC: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x150049B0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x150049B4: addiu       $t0, $zero, -0x21
    ctx->r8 = ADD32(0, -0X21);
    // 0x150049B8: lb          $t6, 0x0($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X0);
    // 0x150049BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150049C0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150049C4: beq         $t0, $t6, L_15004A40
    if (ctx->r8 == ctx->r14) {
        // 0x150049C8: addiu       $t4, $zero, 0xE
        ctx->r12 = ADD32(0, 0XE);
            goto L_15004A40;
    }
    // 0x150049C8: addiu       $t4, $zero, 0xE
    ctx->r12 = ADD32(0, 0XE);
    // 0x150049CC: lb          $a2, 0x0($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X0);
    // 0x150049D0: addiu       $t3, $zero, 0xDE
    ctx->r11 = ADD32(0, 0XDE);
    // 0x150049D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150049D8: addiu       $t1, $zero, -0x24
    ctx->r9 = ADD32(0, -0X24);
L_150049DC:
    // 0x150049DC: beq         $a2, $t1, L_15004A14
    if (ctx->r6 == ctx->r9) {
        // 0x150049E0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_15004A14;
    }
    // 0x150049E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150049E4: beql        $a2, $t2, L_15004A08
    if (ctx->r6 == ctx->r10) {
        // 0x150049E8: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_15004A08;
    }
    goto skip_0;
    // 0x150049E8: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x150049EC: bnel        $a2, $t3, L_15004A30
    if (ctx->r6 != ctx->r11) {
        // 0x150049F0: sll         $t9, $v0, 3
        ctx->r25 = S32(ctx->r2 << 3);
            goto L_15004A30;
    }
    goto skip_1;
    // 0x150049F0: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    skip_1:
    // 0x150049F4: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x150049F8: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x150049FC: b           L_15004A2C
    // 0x15004A00: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
        goto L_15004A2C;
    // 0x15004A00: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x15004A04: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_15004A08:
    // 0x15004A08: addu        $t5, $t9, $a3
    ctx->r13 = ADD32(ctx->r25, ctx->r7);
    // 0x15004A0C: b           L_15004A2C
    // 0x15004A10: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
        goto L_15004A2C;
    // 0x15004A10: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
L_15004A14:
    // 0x15004A14: lbu         $t6, 0x3($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X3);
    // 0x15004A18: bnel        $t4, $t6, L_15004A30
    if (ctx->r12 != ctx->r14) {
        // 0x15004A1C: sll         $t9, $v0, 3
        ctx->r25 = S32(ctx->r2 << 3);
            goto L_15004A30;
    }
    goto skip_2;
    // 0x15004A1C: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    skip_2:
    // 0x15004A20: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x15004A24: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x15004A28: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
L_15004A2C:
    // 0x15004A2C: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
L_15004A30:
    // 0x15004A30: addu        $a1, $t9, $a0
    ctx->r5 = ADD32(ctx->r25, ctx->r4);
    // 0x15004A34: lb          $a2, 0x0($a1)
    ctx->r6 = MEM_B(ctx->r5, 0X0);
    // 0x15004A38: bne         $t0, $a2, L_150049DC
    if (ctx->r8 != ctx->r6) {
        // 0x15004A3C: nop
    
            goto L_150049DC;
    }
    // 0x15004A3C: nop

L_15004A40:
    // 0x15004A40: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x15004A44: jr          $ra
    // 0x15004A48: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x15004A48: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_15110544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15110544: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15110548: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1511054C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15110550: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15110554: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x15110558: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1511055C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x15110560: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x15110564: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15110568: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1511056C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15110570: lui         $t7, 0xEF30
    ctx->r15 = S32(0XEF30 << 16);
    // 0x15110574: ori         $t7, $t7, 0x2C0F
    ctx->r15 = ctx->r15 | 0X2C0F;
    // 0x15110578: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x1511057C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x15110580: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x15110584: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15110588: jal         0x1501A680
    // 0x1511058C: nop

    func_1501A680(rdram, ctx);
        goto after_0;
    // 0x1511058C: nop

    after_0:
    // 0x15110590: lui         $t9, 0xF700
    ctx->r25 = S32(0XF700 << 16);
    // 0x15110594: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15110598: lbu         $t3, 0x3B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X3B);
    // 0x1511059C: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x151105A0: lbu         $t7, 0x3F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3F);
    // 0x151105A4: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x151105A8: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x151105AC: andi        $t2, $t1, 0xF800
    ctx->r10 = ctx->r9 & 0XF800;
    // 0x151105B0: andi        $t5, $t4, 0x7C0
    ctx->r13 = ctx->r12 & 0X7C0;
    // 0x151105B4: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x151105B8: andi        $t9, $t8, 0x3E
    ctx->r25 = ctx->r24 & 0X3E;
    // 0x151105BC: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x151105C0: or          $v1, $t6, $t9
    ctx->r3 = ctx->r14 | ctx->r25;
    // 0x151105C4: ori         $t0, $v1, 0x1
    ctx->r8 = ctx->r3 | 0X1;
    // 0x151105C8: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x151105CC: or          $t3, $t1, $t0
    ctx->r11 = ctx->r9 | ctx->r8;
    // 0x151105D0: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x151105D4: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x151105D8: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x151105DC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x151105E0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x151105E4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x151105E8: jal         0x1501A6CC
    // 0x151105EC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_1501A6CC(rdram, ctx);
        goto after_1;
    // 0x151105EC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_1:
    // 0x151105F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151105F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151105F8: jr          $ra
    // 0x151105FC: nop

    return;
    return;
    // 0x151105FC: nop

;}
RECOMP_FUNC void func_15109120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15109120: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x15109124: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x15109128: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x1510912C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x15109130: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x15109134: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x15109138: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x1510913C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15109140: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x15109144: addiu       $fp, $sp, 0xC8
    ctx->r30 = ADD32(ctx->r29, 0XC8);
    // 0x15109148: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x1510914C: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x15109150: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x15109154: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x15109158: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x1510915C: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x15109160: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x15109164: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x15109168: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x1510916C: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x15109170: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x15109174: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x15109178: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x1510917C: sw          $a1, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r5;
    // 0x15109180: lw          $t7, 0x50($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X50);
    // 0x15109184: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x15109188: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x1510918C: addu        $s0, $s7, $t7
    ctx->r16 = ADD32(ctx->r23, ctx->r15);
    // 0x15109190: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x15109194: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x15109198: jal         0x150A8050
    // 0x1510919C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x1510919C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x151091A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151091A4: lwc1        $f0, 0x2498($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2498);
    // 0x151091A8: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x151091AC: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151091B0: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151091B4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151091B8: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151091BC: swc1        $f4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f4.u32l;
    // 0x151091C0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151091C4: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151091C8: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151091CC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151091D0: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    // 0x151091D4: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151091D8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151091DC: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    // 0x151091E0: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x151091E4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151091E8: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x151091EC: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x151091F0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151091F4: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    // 0x151091F8: lwc1        $f18, 0xF0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x151091FC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15109200: swc1        $f16, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f16.u32l;
    // 0x15109204: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15109208: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1510920C: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x15109210: lbu         $t8, -0x1640($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1640);
    // 0x15109214: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15109218: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x1510921C: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x15109220: addu        $a1, $s7, $t9
    ctx->r5 = ADD32(ctx->r23, ctx->r25);
    // 0x15109224: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    // 0x15109228: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    // 0x1510922C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x15109230: jal         0x150A7790
    // 0x15109234: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x15109234: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x15109238: jal         0x15144B34
    // 0x1510923C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_15144B34(rdram, ctx);
        goto after_2;
    // 0x1510923C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x15109240: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15109244: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15109248: lwc1        $f2, 0x249C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X249C);
    // 0x1510924C: abs.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = fabsf(ctx->f14.fl);
    // 0x15109250: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15109254: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x15109258: sll         $s2, $s3, 2
    ctx->r18 = S32(ctx->r19 << 2);
    // 0x1510925C: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
    // 0x15109260: addiu       $s5, $sp, 0x9C
    ctx->r21 = ADD32(ctx->r29, 0X9C);
    // 0x15109264: bc1t        L_15109288
    if (c1cs) {
        // 0x15109268: addiu       $s4, $sp, 0x98
        ctx->r20 = ADD32(ctx->r29, 0X98);
            goto L_15109288;
    }
    // 0x15109268: addiu       $s4, $sp, 0x98
    ctx->r20 = ADD32(ctx->r29, 0X98);
    // 0x1510926C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15109270: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15109274: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x15109278: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1510927C: nop

    // 0x15109280: bc1fl       L_151092C8
    if (!c1cs) {
        // 0x15109284: mtc1        $at, $f22
        ctx->f22.u32l = ctx->r1;
            goto L_151092C8;
    }
    goto skip_0;
    // 0x15109284: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    skip_0:
L_15109288:
    // 0x15109288: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1510928C: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15109290: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15109294: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15109298: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1510929C: neg.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = -ctx->f14.fl;
    // 0x151092A0: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151092A4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151092A8: div.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151092AC: mul.s       $f22, $f2, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x151092B0: nop

    // 0x151092B4: mul.s       $f24, $f16, $f12
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f24.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x151092B8: nop

    // 0x151092BC: b           L_151092CC
    // 0x151092C0: nop

        goto L_151092CC;
    // 0x151092C0: nop

    // 0x151092C4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
L_151092C8:
    // 0x151092C8: mov.s       $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    ctx->f24.fl = ctx->f20.fl;
L_151092CC:
    // 0x151092CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151092D0: lwc1        $f30, 0x24A0($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X24A0);
    // 0x151092D4: lui         $at, 0x42A2
    ctx->r1 = S32(0X42A2 << 16);
    // 0x151092D8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x151092DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151092E0: lwc1        $f26, 0x24A4($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X24A4);
    // 0x151092E4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x151092E8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151092EC: addiu       $s3, $sp, 0x94
    ctx->r19 = ADD32(ctx->r29, 0X94);
L_151092F0:
    // 0x151092F0: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151092F4: lbu         $t0, -0x1640($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1640);
    // 0x151092F8: sll         $t5, $s1, 4
    ctx->r13 = S32(ctx->r17 << 4);
    // 0x151092FC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x15109300: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x15109304: addu        $t2, $s7, $t1
    ctx->r10 = ADD32(ctx->r23, ctx->r9);
    // 0x15109308: addu        $t3, $t2, $s2
    ctx->r11 = ADD32(ctx->r10, ctx->r18);
    // 0x1510930C: lw          $t4, 0x58($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X58);
    // 0x15109310: addu        $s0, $t4, $t5
    ctx->r16 = ADD32(ctx->r12, ctx->r13);
    // 0x15109314: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x15109318: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x1510931C: lh          $t8, 0x4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4);
    // 0x15109320: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x15109324: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15109328: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x1510932C: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15109330: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x15109334: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x15109338: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x1510933C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15109340: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15109344: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15109348: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x1510934C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x15109350: jal         0x150A7960
    // 0x15109354: nop

    func_150A7960(rdram, ctx);
        goto after_3;
    // 0x15109354: nop

    after_3:
    // 0x15109358: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x1510935C: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x15109360: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x15109364: mul.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x15109368: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x1510936C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15109370: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x15109374: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15109378: mul.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x1510937C: add.s       $f0, $f10, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f28.fl;
    // 0x15109380: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x15109384: mul.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x15109388: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1510938C: mul.s       $f18, $f4, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x15109390: nop

    // 0x15109394: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x15109398: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1510939C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151093A0: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x151093A4: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x151093A8: sh          $t0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r8;
    // 0x151093AC: sh          $t2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r10;
    // 0x151093B0: bne         $s1, $s6, L_151092F0
    if (ctx->r17 != ctx->r22) {
        // 0x151093B4: nop
    
            goto L_151092F0;
    }
    // 0x151093B4: nop

    // 0x151093B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151093BC: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x151093C0: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x151093C4: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x151093C8: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x151093CC: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x151093D0: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x151093D4: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x151093D8: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x151093DC: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x151093E0: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x151093E4: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x151093E8: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x151093EC: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x151093F0: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x151093F4: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x151093F8: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x151093FC: jr          $ra
    // 0x15109400: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    return;
    // 0x15109400: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_1503E5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503E5F8: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x1503E5FC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x1503E600: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x1503E604: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x1503E608: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x1503E60C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x1503E610: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x1503E614: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1503E618: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x1503E61C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x1503E620: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x1503E624: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x1503E628: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x1503E62C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x1503E630: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1503E634: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x1503E638: jal         0x10023A10
    // 0x1503E63C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    bcopy_recomp(rdram, ctx);
        goto after_0;
    // 0x1503E63C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x1503E640: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1503E644: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1503E648: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1503E64C: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    // 0x1503E650: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1503E654: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503E658: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x1503E65C: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    // 0x1503E660: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x1503E664: addiu       $s2, $sp, 0xB0
    ctx->r18 = ADD32(ctx->r29, 0XB0);
    // 0x1503E668: addiu       $s1, $sp, 0x80
    ctx->r17 = ADD32(ctx->r29, 0X80);
    // 0x1503E66C: swc1        $f8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f8.u32l;
    // 0x1503E670: lw          $s4, 0xDC($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XDC);
    // 0x1503E674: lw          $s5, 0xE0($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XE0);
    // 0x1503E678: lw          $s6, 0xE4($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XE4);
    // 0x1503E67C: lwc1        $f20, -0x76E8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X76E8);
    // 0x1503E680: addiu       $s3, $sp, 0x90
    ctx->r19 = ADD32(ctx->r29, 0X90);
    // 0x1503E684: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
L_1503E688:
    // 0x1503E688: jal         0x150AD930
    // 0x1503E68C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150AD930(rdram, ctx);
        goto after_1;
    // 0x1503E68C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x1503E690: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x1503E694: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1503E698: bc1f        L_1503E6A4
    if (!c1cs) {
        // 0x1503E69C: nop
    
            goto L_1503E6A4;
    }
    // 0x1503E69C: nop

    // 0x1503E6A0: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
L_1503E6A4:
    // 0x1503E6A4: bne         $s0, $s1, L_1503E6B4
    if (ctx->r16 != ctx->r17) {
        // 0x1503E6A8: div.s       $f10, $f22, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f22.fl, ctx->f2.fl);
            goto L_1503E6B4;
    }
    // 0x1503E6A8: div.s       $f10, $f22, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f22.fl, ctx->f2.fl);
    // 0x1503E6AC: b           L_1503E6C8
    // 0x1503E6B0: swc1        $f2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f2.u32l;
        goto L_1503E6C8;
    // 0x1503E6B0: swc1        $f2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f2.u32l;
L_1503E6B4:
    // 0x1503E6B4: bnel        $s0, $s3, L_1503E6C8
    if (ctx->r16 != ctx->r19) {
        // 0x1503E6B8: swc1        $f2, 0x0($s6)
        MEM_W(0X0, ctx->r22) = ctx->f2.u32l;
            goto L_1503E6C8;
    }
    goto skip_0;
    // 0x1503E6B8: swc1        $f2, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->f2.u32l;
    skip_0:
    // 0x1503E6BC: b           L_1503E6C8
    // 0x1503E6C0: swc1        $f2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f2.u32l;
        goto L_1503E6C8;
    // 0x1503E6C0: swc1        $f2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f2.u32l;
    // 0x1503E6C4: swc1        $f2, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->f2.u32l;
L_1503E6C8:
    // 0x1503E6C8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x1503E6CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1503E6D0: jal         0x15049148
    // 0x1503E6D4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_15049148(rdram, ctx);
        goto after_2;
    // 0x1503E6D4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x1503E6D8: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x1503E6DC: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x1503E6E0: bne         $at, $zero, L_1503E688
    if (ctx->r1 != 0) {
        // 0x1503E6E4: nop
    
            goto L_1503E688;
    }
    // 0x1503E6E4: nop

    // 0x1503E6E8: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x1503E6EC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x1503E6F0: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x1503E6F4: jal         0x150AD8B0
    // 0x1503E6F8: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    func_150AD8B0(rdram, ctx);
        goto after_3;
    // 0x1503E6F8: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    after_3:
    // 0x1503E6FC: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x1503E700: jal         0x150AD900
    // 0x1503E704: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_150AD900(rdram, ctx);
        goto after_4;
    // 0x1503E704: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x1503E708: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x1503E70C: nop

    // 0x1503E710: bc1fl       L_1503E774
    if (!c1cs) {
        // 0x1503E714: lwc1        $f12, 0x88($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
            goto L_1503E774;
    }
    goto skip_1;
    // 0x1503E714: lwc1        $f12, 0x88($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
    skip_1:
    // 0x1503E718: lwc1        $f16, 0x0($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X0);
    // 0x1503E71C: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x1503E720: addiu       $v0, $sp, 0xB0
    ctx->r2 = ADD32(ctx->r29, 0XB0);
    // 0x1503E724: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x1503E728: swc1        $f18, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f18.u32l;
    // 0x1503E72C: lwc1        $f4, 0x0($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X0);
    // 0x1503E730: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x1503E734: swc1        $f6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f6.u32l;
    // 0x1503E738: lwc1        $f8, 0x0($s6)
    ctx->f8.u32l = MEM_W(ctx->r22, 0X0);
    // 0x1503E73C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x1503E740: swc1        $f10, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->f10.u32l;
L_1503E744:
    // 0x1503E744: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1503E748: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1503E74C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1503E750: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x1503E754: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x1503E758: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x1503E75C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x1503E760: swc1        $f18, -0x10($s0)
    MEM_W(-0X10, ctx->r16) = ctx->f18.u32l;
    // 0x1503E764: swc1        $f6, -0xC($s0)
    MEM_W(-0XC, ctx->r16) = ctx->f6.u32l;
    // 0x1503E768: bne         $s0, $v0, L_1503E744
    if (ctx->r16 != ctx->r2) {
        // 0x1503E76C: swc1        $f10, -0x8($s0)
        MEM_W(-0X8, ctx->r16) = ctx->f10.u32l;
            goto L_1503E744;
    }
    // 0x1503E76C: swc1        $f10, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->f10.u32l;
    // 0x1503E770: lwc1        $f12, 0x88($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
L_1503E774:
    // 0x1503E774: jal         0x150487E0
    // 0x1503E778: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_150487E0(rdram, ctx);
        goto after_5;
    // 0x1503E778: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_5:
    // 0x1503E77C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x1503E780: jal         0x150AD780
    // 0x1503E784: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_150AD780(rdram, ctx);
        goto after_6;
    // 0x1503E784: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_6:
    // 0x1503E788: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x1503E78C: lwc1        $f14, 0xA8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x1503E790: lwc1        $f12, 0x90($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X90);
    // 0x1503E794: bc1t        L_1503E7BC
    if (c1cs) {
        // 0x1503E798: nop
    
            goto L_1503E7BC;
    }
    // 0x1503E798: nop

    // 0x1503E79C: jal         0x150484A0
    // 0x1503E7A0: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    func_150484A0(rdram, ctx);
        goto after_7;
    // 0x1503E7A0: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    after_7:
    // 0x1503E7A4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1503E7A8: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1503E7AC: jal         0x150484A0
    // 0x1503E7B0: lwc1        $f14, 0x80($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X80);
    func_150484A0(rdram, ctx);
        goto after_8;
    // 0x1503E7B0: lwc1        $f14, 0x80($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X80);
    after_8:
    // 0x1503E7B4: b           L_1503E7CC
    // 0x1503E7B8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_1503E7CC;
    // 0x1503E7B8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_1503E7BC:
    // 0x1503E7BC: jal         0x150484A0
    // 0x1503E7C0: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    func_150484A0(rdram, ctx);
        goto after_9;
    // 0x1503E7C0: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    after_9:
    // 0x1503E7C4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1503E7C8: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
L_1503E7CC:
    // 0x1503E7CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503E7D0: lwc1        $f0, -0x76E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X76E4);
    // 0x1503E7D4: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    // 0x1503E7D8: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x1503E7DC: swc1        $f16, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f16.u32l;
    // 0x1503E7E0: mul.s       $f18, $f22, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x1503E7E4: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x1503E7E8: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x1503E7EC: swc1        $f18, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f18.u32l;
    // 0x1503E7F0: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x1503E7F4: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x1503E7F8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1503E7FC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1503E800: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x1503E804: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x1503E808: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x1503E80C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x1503E810: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x1503E814: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x1503E818: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x1503E81C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x1503E820: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x1503E824: jr          $ra
    // 0x1503E828: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    return;
    // 0x1503E828: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_1502F948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502F948: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1502F94C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1502F950: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1502F954: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1502F958: lw          $t6, 0xF8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XF8);
    // 0x1502F95C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x1502F960: beql        $t7, $zero, L_1502F9EC
    if (ctx->r15 == 0) {
        // 0x1502F964: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1502F9EC;
    }
    goto skip_0;
    // 0x1502F964: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1502F968: lw          $t8, 0x264($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X264);
    // 0x1502F96C: beql        $t8, $zero, L_1502F9EC
    if (ctx->r24 == 0) {
        // 0x1502F970: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1502F9EC;
    }
    goto skip_1;
    // 0x1502F970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x1502F974: lw          $t9, 0x1D4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1D4);
    // 0x1502F978: beql        $t9, $zero, L_1502F9EC
    if (ctx->r25 == 0) {
        // 0x1502F97C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1502F9EC;
    }
    goto skip_2;
    // 0x1502F97C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x1502F980: lw          $t0, 0x1D8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1D8);
    // 0x1502F984: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x1502F988: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1502F98C: bne         $t0, $zero, L_1502F9C4
    if (ctx->r8 != 0) {
        // 0x1502F990: sll         $t1, $v1, 1
        ctx->r9 = S32(ctx->r3 << 1);
            goto L_1502F9C4;
    }
    // 0x1502F990: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x1502F994: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x1502F998: lhu         $a0, 0x4ED0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X4ED0);
    // 0x1502F99C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1502F9A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1502F9A4: sll         $t2, $a0, 6
    ctx->r10 = S32(ctx->r4 << 6);
    // 0x1502F9A8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x1502F9AC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1502F9B0: jal         0x10003C40
    // 0x1502F9B4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1502F9B4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x1502F9B8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x1502F9BC: beq         $v0, $zero, L_1502F9E8
    if (ctx->r2 == 0) {
        // 0x1502F9C0: sw          $v0, 0x1D8($s0)
        MEM_W(0X1D8, ctx->r16) = ctx->r2;
            goto L_1502F9E8;
    }
    // 0x1502F9C0: sw          $v0, 0x1D8($s0)
    MEM_W(0X1D8, ctx->r16) = ctx->r2;
L_1502F9C4:
    // 0x1502F9C4: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x1502F9C8: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1502F9CC: addu        $a2, $a2, $t3
    ctx->r6 = ADD32(ctx->r6, ctx->r11);
    // 0x1502F9D0: lhu         $a2, 0x4ED0($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X4ED0);
    // 0x1502F9D4: lw          $a0, 0x1D4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1D4);
    // 0x1502F9D8: lw          $a1, 0x1D8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1D8);
    // 0x1502F9DC: sll         $t4, $a2, 6
    ctx->r12 = S32(ctx->r6 << 6);
    // 0x1502F9E0: jal         0x10023A10
    // 0x1502F9E4: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    bcopy_recomp(rdram, ctx);
        goto after_1;
    // 0x1502F9E4: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_1:
L_1502F9E8:
    // 0x1502F9E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1502F9EC:
    // 0x1502F9EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1502F9F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1502F9F4: jr          $ra
    // 0x1502F9F8: nop

    return;
    return;
    // 0x1502F9F8: nop

;}
RECOMP_FUNC void func_1515D6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515D6D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515D6D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515D6D8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1515D6DC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1515D6E0: lui         $t6, 0xDB02
    ctx->r14 = S32(0XDB02 << 16);
    // 0x1515D6E4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1515D6E8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1515D6EC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D6F0: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x1515D6F4: lui         $t7, 0xD9FF
    ctx->r15 = S32(0XD9FF << 16);
    // 0x1515D6F8: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x1515D6FC: lui         $t8, 0x2
    ctx->r24 = S32(0X2 << 16);
    // 0x1515D700: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x1515D704: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x1515D708: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D70C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1515D710: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1515D714: lbu         $t3, -0x1640($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1640);
    // 0x1515D718: lw          $t9, -0x19D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X19D8);
    // 0x1515D71C: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x1515D720: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x1515D724: sll         $t1, $t1, 7
    ctx->r9 = S32(ctx->r9 << 7);
    // 0x1515D728: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x1515D72C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x1515D730: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    // 0x1515D734: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x1515D738: jal         0x1515EF74
    // 0x1515D73C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_1515EF74(rdram, ctx);
        goto after_0;
    // 0x1515D73C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x1515D740: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1515D744: addiu       $v1, $v1, -0x32F0
    ctx->r3 = ADD32(ctx->r3, -0X32F0);
    // 0x1515D748: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x1515D74C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1515D750: lui         $t5, 0xDB10
    ctx->r13 = S32(0XDB10 << 16);
    // 0x1515D754: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x1515D758: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1515D75C: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x1515D760: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D764: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1515D768: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1515D76C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x1515D770: sll         $t3, $t1, 16
    ctx->r11 = S32(ctx->r9 << 16);
    // 0x1515D774: or          $t2, $t8, $t3
    ctx->r10 = ctx->r24 | ctx->r11;
    // 0x1515D778: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x1515D77C: lui         $t4, 0xDB10
    ctx->r12 = S32(0XDB10 << 16);
    // 0x1515D780: ori         $t4, $t4, 0x8
    ctx->r12 = ctx->r12 | 0X8;
    // 0x1515D784: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1515D788: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x1515D78C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1515D790: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
    // 0x1515D794: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D798: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1515D79C: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x1515D7A0: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x1515D7A4: sll         $t8, $t1, 16
    ctx->r24 = S32(ctx->r9 << 16);
    // 0x1515D7A8: or          $t3, $t7, $t8
    ctx->r11 = ctx->r15 | ctx->r24;
    // 0x1515D7AC: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x1515D7B0: lui         $t2, 0xDB10
    ctx->r10 = S32(0XDB10 << 16);
    // 0x1515D7B4: ori         $t2, $t2, 0x4
    ctx->r10 = ctx->r10 | 0X4;
    // 0x1515D7B8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x1515D7BC: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x1515D7C0: lw          $t4, 0x8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X8);
    // 0x1515D7C4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D7C8: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x1515D7CC: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x1515D7D0: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x1515D7D4: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x1515D7D8: lui         $t9, 0xDB10
    ctx->r25 = S32(0XDB10 << 16);
    // 0x1515D7DC: ori         $t9, $t9, 0xC
    ctx->r25 = ctx->r25 | 0XC;
    // 0x1515D7E0: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x1515D7E4: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x1515D7E8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D7EC: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x1515D7F0: sra         $t7, $t1, 16
    ctx->r15 = S32(SIGNED(ctx->r9) >> 16);
    // 0x1515D7F4: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x1515D7F8: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x1515D7FC: lui         $t3, 0xDB10
    ctx->r11 = S32(0XDB10 << 16);
    // 0x1515D800: ori         $t3, $t3, 0x10
    ctx->r11 = ctx->r11 | 0X10;
    // 0x1515D804: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x1515D808: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1515D80C: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x1515D810: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D814: sll         $t1, $t9, 16
    ctx->r9 = S32(ctx->r25 << 16);
    // 0x1515D818: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x1515D81C: or          $t7, $t5, $t1
    ctx->r15 = ctx->r13 | ctx->r9;
    // 0x1515D820: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x1515D824: lui         $t8, 0xDB10
    ctx->r24 = S32(0XDB10 << 16);
    // 0x1515D828: ori         $t8, $t8, 0x18
    ctx->r24 = ctx->r24 | 0X18;
    // 0x1515D82C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1515D830: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1515D834: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1515D838: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x1515D83C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D840: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x1515D844: andi        $t4, $t2, 0xFFFF
    ctx->r12 = ctx->r10 & 0XFFFF;
    // 0x1515D848: or          $t1, $t4, $t5
    ctx->r9 = ctx->r12 | ctx->r13;
    // 0x1515D84C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x1515D850: lui         $t7, 0xDB10
    ctx->r15 = S32(0XDB10 << 16);
    // 0x1515D854: ori         $t7, $t7, 0x14
    ctx->r15 = ctx->r15 | 0X14;
    // 0x1515D858: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1515D85C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x1515D860: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x1515D864: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D868: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x1515D86C: sll         $t2, $t3, 16
    ctx->r10 = S32(ctx->r11 << 16);
    // 0x1515D870: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x1515D874: lui         $t6, 0xDB10
    ctx->r14 = S32(0XDB10 << 16);
    // 0x1515D878: ori         $t6, $t6, 0x1C
    ctx->r14 = ctx->r14 | 0X1C;
    // 0x1515D87C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x1515D880: lw          $t4, 0x8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X8);
    // 0x1515D884: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D888: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x1515D88C: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x1515D890: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x1515D894: lui         $t1, 0xDB10
    ctx->r9 = S32(0XDB10 << 16);
    // 0x1515D898: ori         $t1, $t1, 0x20
    ctx->r9 = ctx->r9 | 0X20;
    // 0x1515D89C: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x1515D8A0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D8A4: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x1515D8A8: lui         $t7, 0xDB10
    ctx->r15 = S32(0XDB10 << 16);
    // 0x1515D8AC: ori         $t7, $t7, 0x24
    ctx->r15 = ctx->r15 | 0X24;
    // 0x1515D8B0: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x1515D8B4: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x1515D8B8: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x1515D8BC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D8C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1515D8C4: sll         $t3, $t8, 16
    ctx->r11 = S32(ctx->r24 << 16);
    // 0x1515D8C8: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x1515D8CC: lui         $t2, 0xDB10
    ctx->r10 = S32(0XDB10 << 16);
    // 0x1515D8D0: ori         $t2, $t2, 0x28
    ctx->r10 = ctx->r10 | 0X28;
    // 0x1515D8D4: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x1515D8D8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D8DC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x1515D8E0: lui         $t6, 0xDB10
    ctx->r14 = S32(0XDB10 << 16);
    // 0x1515D8E4: ori         $t6, $t6, 0x2C
    ctx->r14 = ctx->r14 | 0X2C;
    // 0x1515D8E8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x1515D8EC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x1515D8F0: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x1515D8F4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1515D8F8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1515D8FC: sll         $t4, $t9, 16
    ctx->r12 = S32(ctx->r25 << 16);
    // 0x1515D900: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x1515D904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515D908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1515D90C: jr          $ra
    // 0x1515D910: nop

    return;
    return;
    // 0x1515D910: nop

;}
RECOMP_FUNC void func_150A81D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A81A0:
    // 0x150A81D0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A81D4: sw          $a0, -0x7ABC($at)
    MEM_W(-0X7ABC, ctx->r1) = ctx->r4;
    // 0x150A81D8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x150A81DC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A81E0: sw          $a0, -0x7AC0($at)
    MEM_W(-0X7AC0, ctx->r1) = ctx->r4;
    // 0x150A81E4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A81E8: sw          $zero, -0x7AA8($at)
    MEM_W(-0X7AA8, ctx->r1) = 0;
    // 0x150A81EC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A81F0: sw          $zero, -0x7A9C($at)
    MEM_W(-0X7A9C, ctx->r1) = 0;
    // 0x150A81F4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A81F8: sw          $zero, -0x7AA0($at)
    MEM_W(-0X7AA0, ctx->r1) = 0;
    // 0x150A81FC: beq         $a2, $zero, L_150A81A0
    if (ctx->r6 == 0) {
        // 0x150A8200: nop
    
        // 0x150A8200: nop

    func_150A81A0(rdram, ctx);
        return;
    }
    // 0x150A8200: nop

    // 0x150A8204: lh          $t3, 0x3C($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X3C);
    // 0x150A8208: bgtz        $t3, L_150A8220
    if (SIGNED(ctx->r11) > 0) {
        // 0x150A820C: nop
    
            goto L_150A8220;
    }
    // 0x150A820C: nop

    // 0x150A8210: lbu         $t3, 0x47($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X47);
    // 0x150A8214: andi        $t3, $t3, 0x10
    ctx->r11 = ctx->r11 & 0X10;
    // 0x150A8218: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A821C: sw          $t3, -0x7A9C($at)
    MEM_W(-0X7A9C, ctx->r1) = ctx->r11;
L_150A8220:
    // 0x150A8220: lbu         $t1, 0x41($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X41);
    // 0x150A8224: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150A8228: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x150A822C: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x150A8230: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x150A8234: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x150A8238: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x150A823C: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x150A8240: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x150A8244: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x150A8248: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    // 0x150A824C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150A8250: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x150A8254: swc1        $f20, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f20.u32l;
    // 0x150A8258: swc1        $f21, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x150A825C: swc1        $f22, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f22.u32l;
    // 0x150A8260: swc1        $f23, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x150A8264: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x150A8268: swc1        $f25, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x150A826C: swc1        $f26, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f26.u32l;
    // 0x150A8270: swc1        $f27, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x150A8274: swc1        $f28, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f28.u32l;
    // 0x150A8278: swc1        $f29, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x150A827C: swc1        $f30, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f30.u32l;
    // 0x150A8280: swc1        $f31, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x150A8284: lbu         $t3, 0x41($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X41);
    // 0x150A8288: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150A828C: sll         $t1, $t3, 1
    ctx->r9 = S32(ctx->r11 << 1);
    // 0x150A8290: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x150A8294: addiu       $t1, $sp, -0x100
    ctx->r9 = ADD32(ctx->r29, -0X100);
    // 0x150A8298: subu        $t1, $t1, $t3
    ctx->r9 = SUB32(ctx->r9, ctx->r11);
    // 0x150A829C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A82A0: sw          $t1, -0x7A90($at)
    MEM_W(-0X7A90, ctx->r1) = ctx->r9;
    // 0x150A82A4: subu        $t1, $t1, $t3
    ctx->r9 = SUB32(ctx->r9, ctx->r11);
    // 0x150A82A8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A82AC: sw          $t1, -0x7A8C($at)
    MEM_W(-0X7A8C, ctx->r1) = ctx->r9;
    // 0x150A82B0: subu        $t1, $t1, $t3
    ctx->r9 = SUB32(ctx->r9, ctx->r11);
    // 0x150A82B4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A82B8: sw          $t1, -0x7A88($at)
    MEM_W(-0X7A88, ctx->r1) = ctx->r9;
    // 0x150A82BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A82C0: sw          $t1, -0x7A98($at)
    MEM_W(-0X7A98, ctx->r1) = ctx->r9;
    // 0x150A82C4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A82C8: sw          $a3, -0x7AB8($at)
    MEM_W(-0X7AB8, ctx->r1) = ctx->r7;
    // 0x150A82CC: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x150A82D0: nop

    // 0x150A82D4: addiu       $a3, $a2, 0x40
    ctx->r7 = ADD32(ctx->r6, 0X40);
    // 0x150A82D8: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x150A82DC: lw          $t1, -0x7A8C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X7A8C);
    // 0x150A82E0: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x150A82E4: lw          $t5, -0x7A90($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7A90);
    // 0x150A82E8: lw          $t4, 0x30($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X30);
    // 0x150A82EC: lbu         $s4, 0x38($a2)
    ctx->r20 = MEM_BU(ctx->r6, 0X38);
    // 0x150A82F0: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x150A82F4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x150A82F8: jal         0x150A8A18
    // 0x150A82FC: nop

    func_150A8A18(rdram, ctx);
        goto after_0;
    // 0x150A82FC: nop

    after_0:
    // 0x150A8300: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x150A8304: lw          $t3, -0x7A9C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X7A9C);
    // 0x150A8308: beq         $t3, $zero, L_150A83CC
    if (ctx->r11 == 0) {
        // 0x150A830C: nop
    
            goto L_150A83CC;
    }
    // 0x150A830C: nop

    // 0x150A8310: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x150A8314: lw          $t4, -0x7AAC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X7AAC);
    // 0x150A8318: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A831C: sw          $t4, -0x7AA4($at)
    MEM_W(-0X7AA4, ctx->r1) = ctx->r12;
    // 0x150A8320: mov.s       $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    ctx->f10.fl = ctx->f22.fl;
    // 0x150A8324: mov.s       $f11, $f23
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 23);
    ctx->f11.fl = ctx->f23.fl;
    // 0x150A8328: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x150A832C: mtc1        $t5, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r13;
    // 0x150A8330: nop

    // 0x150A8334: mtc1        $t1, $f14
    ctx->f14.u32l = ctx->r9;
    // 0x150A8338: nop

    // 0x150A833C: addiu       $a3, $a2, 0x40
    ctx->r7 = ADD32(ctx->r6, 0X40);
    // 0x150A8340: lw          $t4, 0x30($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X30);
    // 0x150A8344: lbu         $s4, 0x38($a2)
    ctx->r20 = MEM_BU(ctx->r6, 0X38);
    // 0x150A8348: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x150A834C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x150A8350: addu        $t4, $s4, $t4
    ctx->r12 = ADD32(ctx->r20, ctx->r12);
    // 0x150A8354: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x150A8358: jal         0x150A8A18
    // 0x150A835C: nop

    func_150A8A18(rdram, ctx);
        goto after_1;
    // 0x150A835C: nop

    after_1:
    // 0x150A8360: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150A8364: lw          $t6, -0x7A80($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7A80);
    // 0x150A8368: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x150A836C: lw          $s5, -0x7AA8($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X7AA8);
    // 0x150A8370: beq         $s5, $zero, L_150A8414
    if (ctx->r21 == 0) {
        // 0x150A8374: nop
    
            goto L_150A8414;
    }
    // 0x150A8374: nop

    // 0x150A8378: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x150A837C: lw          $s5, -0x7AA4($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X7AA4);
    // 0x150A8380: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x150A8384: lw          $t0, -0x7AA0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7AA0);
    // 0x150A8388: bne         $t0, $zero, L_150A83BC
    if (ctx->r8 != 0) {
        // 0x150A838C: nop
    
            goto L_150A83BC;
    }
    // 0x150A838C: nop

    // 0x150A8390: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x150A8394: lw          $s5, -0x7AAC($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X7AAC);
    // 0x150A8398: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x150A839C: lw          $t0, -0x7AA4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7AA4);
    // 0x150A83A0: subu        $s5, $s5, $t0
    ctx->r21 = SUB32(ctx->r21, ctx->r8);
    // 0x150A83A4: mult        $s5, $t6
    result = S64(S32(ctx->r21)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A83A8: mflo        $s5
    ctx->r21 = lo;
    // 0x150A83AC: nop

    // 0x150A83B0: nop

    // 0x150A83B4: sra         $s5, $s5, 10
    ctx->r21 = S32(SIGNED(ctx->r21) >> 10);
    // 0x150A83B8: addu        $s5, $s5, $t0
    ctx->r21 = ADD32(ctx->r21, ctx->r8);
L_150A83BC:
    // 0x150A83BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A83C0: sw          $s5, -0x7AAC($at)
    MEM_W(-0X7AAC, ctx->r1) = ctx->r21;
    // 0x150A83C4: j           L_150A8414
    // 0x150A83C8: nop

        goto L_150A8414;
    // 0x150A83C8: nop

L_150A83CC:
    // 0x150A83CC: lh          $t3, 0x3C($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X3C);
    // 0x150A83D0: blez        $t3, L_150A9000
    if (SIGNED(ctx->r11) <= 0) {
        // 0x150A83D4: nop
    
        // 0x150A83D4: nop

    static_5_150A9000(rdram, ctx);
        return;
    }
    // 0x150A83D4: nop

    // 0x150A83D8: mov.s       $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    ctx->f10.fl = ctx->f22.fl;
    // 0x150A83DC: mov.s       $f11, $f23
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 23);
    ctx->f11.fl = ctx->f23.fl;
    // 0x150A83E0: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x150A83E4: mtc1        $t5, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r13;
    // 0x150A83E8: nop

    // 0x150A83EC: mtc1        $t1, $f14
    ctx->f14.u32l = ctx->r9;
    // 0x150A83F0: nop

    // 0x150A83F4: addiu       $a3, $a2, 0x210
    ctx->r7 = ADD32(ctx->r6, 0X210);
    // 0x150A83F8: lw          $t4, 0x34($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X34);
    // 0x150A83FC: lbu         $s4, 0x39($a2)
    ctx->r20 = MEM_BU(ctx->r6, 0X39);
    // 0x150A8400: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x150A8404: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x150A8408: jal         0x150A8A18
    // 0x150A840C: nop

    func_150A8A18(rdram, ctx);
        goto after_2;
    // 0x150A840C: nop

    after_2:
    // 0x150A8410: lh          $t6, 0x3C($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X3C);
L_150A8414:
    // 0x150A8414: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x150A8418: lw          $s5, -0x7A8C($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X7A8C);
    // 0x150A841C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x150A8420: lw          $t0, -0x7AB8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7AB8);
    // 0x150A8424: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x150A8428: lw          $t5, -0x7A90($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7A90);
    // 0x150A842C: mfc1        $s7, $f14
    ctx->r23 = (int32_t)ctx->f14.u32l;
    // 0x150A8430: nop

    // 0x150A8434: mfc1        $t4, $f13
    ctx->r12 = (int32_t)ctx->f_odd[(13 - 1) * 2];
    // 0x150A8438: nop

    // 0x150A843C: lbu         $t1, 0x7($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0X7);
    // 0x150A8440: andi        $t1, $t1, 0x20
    ctx->r9 = ctx->r9 & 0X20;
    // 0x150A8444: beq         $t1, $zero, L_150A8450
    if (ctx->r9 == 0) {
        // 0x150A8448: nop
    
            goto L_150A8450;
    }
    // 0x150A8448: nop

    // 0x150A844C: lh          $t1, 0x2($t4)
    ctx->r9 = MEM_H(ctx->r12, 0X2);
L_150A8450:
    // 0x150A8450: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A8454: sw          $t1, -0x7A84($at)
    MEM_W(-0X7A84, ctx->r1) = ctx->r9;
    // 0x150A8458: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x150A845C: mtc1        $t6, $f20
    ctx->f20.u32l = ctx->r14;
    // 0x150A8460: nop

    // 0x150A8464: lui         $s2, 0x150B
    ctx->r18 = S32(0X150B << 16);
    // 0x150A8468: addiu       $s2, $s2, -0x63C4
    ctx->r18 = ADD32(ctx->r18, -0X63C4);
    // 0x150A846C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x150A8470: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x150A8474: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x150A8478: nop

    // 0x150A847C: addiu       $t3, $zero, 0x7FC
    ctx->r11 = ADD32(0, 0X7FC);
    // 0x150A8480: div.s       $f28, $f20, $f21
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f28.fl = DIV_S(ctx->f20.fl, ctx->f21.fl);
    // 0x150A8484: addiu       $s6, $zero, 0x800
    ctx->r22 = ADD32(0, 0X800);
    // 0x150A8488: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150A848C: mtc1        $at, $f31
    ctx->f_odd[(31 - 1) * 2] = ctx->r1;
    // 0x150A8490: nop

    // 0x150A8494: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150A8498: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x150A849C: nop

    // 0x150A84A0: sub.s       $f27, $f31, $f28
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f27.fl = ctx->f31.fl - ctx->f28.fl;
    // 0x150A84A4: sub.s       $f13, $f10, $f22
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f13.fl = ctx->f10.fl - ctx->f22.fl;
    // 0x150A84A8: sub.s       $f14, $f11, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f14.fl = ctx->f11.fl - ctx->f23.fl;
    // 0x150A84AC: sub.s       $f15, $f12, $f24
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f15.fl = ctx->f12.fl - ctx->f24.fl;
    // 0x150A84B0: mul.s       $f13, $f13, $f27
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f13.fl = MUL_S(ctx->f13.fl, ctx->f27.fl);
    // 0x150A84B4: nop

    // 0x150A84B8: mul.s       $f14, $f14, $f27
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f27.fl);
    // 0x150A84BC: nop

    // 0x150A84C0: mul.s       $f15, $f15, $f27
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f15.fl = MUL_S(ctx->f15.fl, ctx->f27.fl);
    // 0x150A84C4: nop

    // 0x150A84C8: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x150A84CC: addu        $t9, $t2, $t1
    ctx->r25 = ADD32(ctx->r10, ctx->r9);
    // 0x150A84D0: sll         $s4, $t9, 1
    ctx->r20 = S32(ctx->r25 << 1);
    // 0x150A84D4: addu        $s4, $s4, $s7
    ctx->r20 = ADD32(ctx->r20, ctx->r23);
    // 0x150A84D8: addiu       $s1, $zero, 0x4000
    ctx->r17 = ADD32(0, 0X4000);
L_150A84DC:
    // 0x150A84DC: lhu         $t2, 0x0($s7)
    ctx->r10 = MEM_HU(ctx->r23, 0X0);
    // 0x150A84E0: bne         $t2, $zero, L_150A850C
    if (ctx->r10 != 0) {
        // 0x150A84E4: addiu       $s7, $s7, 0x2
        ctx->r23 = ADD32(ctx->r23, 0X2);
            goto L_150A850C;
    }
    // 0x150A84E4: addiu       $s7, $s7, 0x2
    ctx->r23 = ADD32(ctx->r23, 0X2);
    // 0x150A84E8: lhu         $t7, 0x0($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X0);
    // 0x150A84EC: bne         $t7, $zero, L_150A8504
    if (ctx->r15 != 0) {
        // 0x150A84F0: addiu       $s5, $s5, 0x2
        ctx->r21 = ADD32(ctx->r21, 0X2);
            goto L_150A8504;
    }
    // 0x150A84F0: addiu       $s5, $s5, 0x2
    ctx->r21 = ADD32(ctx->r21, 0X2);
    // 0x150A84F4: bne         $s4, $s7, L_150A84DC
    if (ctx->r20 != ctx->r23) {
        // 0x150A84F8: nop
    
            goto L_150A84DC;
    }
    // 0x150A84F8: nop

    // 0x150A84FC: j           L_150A8538
    // 0x150A8500: nop

        goto L_150A8538;
    // 0x150A8500: nop

L_150A8504:
    // 0x150A8504: j           L_150A851C
    // 0x150A8508: or          $t2, $s1, $zero
    ctx->r10 = ctx->r17 | 0;
        goto L_150A851C;
    // 0x150A8508: or          $t2, $s1, $zero
    ctx->r10 = ctx->r17 | 0;
L_150A850C:
    // 0x150A850C: lhu         $t7, 0x0($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X0);
    // 0x150A8510: bne         $t7, $zero, L_150A851C
    if (ctx->r15 != 0) {
        // 0x150A8514: addiu       $s5, $s5, 0x2
        ctx->r21 = ADD32(ctx->r21, 0X2);
            goto L_150A851C;
    }
    // 0x150A8514: addiu       $s5, $s5, 0x2
    ctx->r21 = ADD32(ctx->r21, 0X2);
    // 0x150A8518: or          $t7, $s1, $zero
    ctx->r15 = ctx->r17 | 0;
L_150A851C:
    // 0x150A851C: subu        $t2, $t2, $t7
    ctx->r10 = SUB32(ctx->r10, ctx->r15);
    // 0x150A8520: mult        $t2, $t6
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A8524: mflo        $t2
    ctx->r10 = lo;
    // 0x150A8528: sra         $t2, $t2, 10
    ctx->r10 = S32(SIGNED(ctx->r10) >> 10);
    // 0x150A852C: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x150A8530: bne         $s4, $s7, L_150A84DC
    if (ctx->r20 != ctx->r23) {
        // 0x150A8534: sh          $t2, -0x2($s5)
        MEM_H(-0X2, ctx->r21) = ctx->r10;
            goto L_150A84DC;
    }
    // 0x150A8534: sh          $t2, -0x2($s5)
    MEM_H(-0X2, ctx->r21) = ctx->r10;
L_150A8538:
    // 0x150A8538: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x150A853C: lw          $s5, -0x7A88($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X7A88);
    // 0x150A8540: or          $t8, $s5, $zero
    ctx->r24 = ctx->r21 | 0;
    // 0x150A8544: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x150A8548: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x150A854C: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x150A8550: lw          $s7, -0x7A98($s7)
    ctx->r23 = MEM_W(ctx->r23, -0X7A98);
    // 0x150A8554: bne         $s5, $s7, L_150A859C
    if (ctx->r21 != ctx->r23) {
        // 0x150A8558: nop
    
            goto L_150A859C;
    }
    // 0x150A8558: nop

    // 0x150A855C: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x150A8560: lw          $s7, -0x7AB4($s7)
    ctx->r23 = MEM_W(ctx->r23, -0X7AB4);
    // 0x150A8564: beq         $s7, $zero, L_150A8628
    if (ctx->r23 == 0) {
        // 0x150A8568: nop
    
            goto L_150A8628;
    }
    // 0x150A8568: nop

L_150A856C:
    // 0x150A856C: lh          $t2, 0x0($t8)
    ctx->r10 = MEM_H(ctx->r24, 0X0);
    // 0x150A8570: mult        $t2, $t6
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A8574: mflo        $t2
    ctx->r10 = lo;
    // 0x150A8578: nop

    // 0x150A857C: nop

    // 0x150A8580: sra         $t2, $t2, 10
    ctx->r10 = S32(SIGNED(ctx->r10) >> 10);
    // 0x150A8584: sh          $t2, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r10;
    // 0x150A8588: addiu       $t8, $t8, 0x2
    ctx->r24 = ADD32(ctx->r24, 0X2);
    // 0x150A858C: bne         $t9, $t8, L_150A856C
    if (ctx->r25 != ctx->r24) {
        // 0x150A8590: nop
    
            goto L_150A856C;
    }
    // 0x150A8590: nop

    // 0x150A8594: j           L_150A8620
    // 0x150A8598: nop

        goto L_150A8620;
    // 0x150A8598: nop

L_150A859C:
    // 0x150A859C: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x150A85A0: lw          $s7, -0x7AB4($s7)
    ctx->r23 = MEM_W(ctx->r23, -0X7AB4);
    // 0x150A85A4: bne         $s7, $zero, L_150A85E4
    if (ctx->r23 != 0) {
        // 0x150A85A8: nop
    
            goto L_150A85E4;
    }
    // 0x150A85A8: nop

L_150A85AC:
    // 0x150A85AC: lh          $t7, 0x0($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X0);
    // 0x150A85B0: negu        $t2, $t7
    ctx->r10 = SUB32(0, ctx->r15);
    // 0x150A85B4: mult        $t2, $t6
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A85B8: mflo        $t2
    ctx->r10 = lo;
    // 0x150A85BC: nop

    // 0x150A85C0: nop

    // 0x150A85C4: sra         $t2, $t2, 10
    ctx->r10 = S32(SIGNED(ctx->r10) >> 10);
    // 0x150A85C8: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x150A85CC: sh          $t2, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r10;
    // 0x150A85D0: addiu       $t8, $t8, 0x2
    ctx->r24 = ADD32(ctx->r24, 0X2);
    // 0x150A85D4: bne         $t9, $t8, L_150A85AC
    if (ctx->r25 != ctx->r24) {
        // 0x150A85D8: nop
    
            goto L_150A85AC;
    }
    // 0x150A85D8: nop

    // 0x150A85DC: j           L_150A8620
    // 0x150A85E0: nop

        goto L_150A8620;
    // 0x150A85E0: nop

L_150A85E4:
    // 0x150A85E4: lh          $t2, 0x0($s7)
    ctx->r10 = MEM_H(ctx->r23, 0X0);
    // 0x150A85E8: lh          $t7, 0x0($s5)
    ctx->r15 = MEM_H(ctx->r21, 0X0);
    // 0x150A85EC: subu        $t2, $t2, $t7
    ctx->r10 = SUB32(ctx->r10, ctx->r15);
    // 0x150A85F0: mult        $t2, $t6
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A85F4: mflo        $t2
    ctx->r10 = lo;
    // 0x150A85F8: nop

    // 0x150A85FC: nop

    // 0x150A8600: sra         $t2, $t2, 10
    ctx->r10 = S32(SIGNED(ctx->r10) >> 10);
    // 0x150A8604: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x150A8608: sh          $t2, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r10;
    // 0x150A860C: addiu       $s5, $s5, 0x2
    ctx->r21 = ADD32(ctx->r21, 0X2);
    // 0x150A8610: addiu       $s7, $s7, 0x2
    ctx->r23 = ADD32(ctx->r23, 0X2);
    // 0x150A8614: addiu       $t8, $t8, 0x2
    ctx->r24 = ADD32(ctx->r24, 0X2);
    // 0x150A8618: bne         $t9, $t8, L_150A85E4
    if (ctx->r25 != ctx->r24) {
        // 0x150A861C: nop
    
            goto L_150A85E4;
    }
    // 0x150A861C: nop

L_150A8620:
    // 0x150A8620: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x150A8624: lw          $s7, -0x7A88($s7)
    ctx->r23 = MEM_W(ctx->r23, -0X7A88);
L_150A8628:
    // 0x150A8628: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x150A862C: lw          $s5, -0x7A8C($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X7A8C);
    // 0x150A8630: add.s       $f22, $f13, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = ctx->f13.fl + ctx->f22.fl;
    // 0x150A8634: add.s       $f23, $f14, $f23
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f23.fl = ctx->f14.fl + ctx->f23.fl;
    // 0x150A8638: add.s       $f24, $f15, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = ctx->f15.fl + ctx->f24.fl;
L_150A863C:
    // 0x150A863C: lbu         $s0, 0x2($t0)
    ctx->r16 = MEM_BU(ctx->r8, 0X2);
    // 0x150A8640: sll         $s1, $s0, 1
    ctx->r17 = S32(ctx->r16 << 1);
    // 0x150A8644: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x150A8648: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x150A864C: addu        $t9, $s5, $s1
    ctx->r25 = ADD32(ctx->r21, ctx->r17);
    // 0x150A8650: addu        $t8, $s7, $s1
    ctx->r24 = ADD32(ctx->r23, ctx->r17);
    // 0x150A8654: jal         0x150A8918
    // 0x150A8658: addu        $s0, $s1, $t5
    ctx->r16 = ADD32(ctx->r17, ctx->r13);
    func_150A8918(rdram, ctx);
        goto after_3;
    // 0x150A8658: addu        $s0, $s1, $t5
    ctx->r16 = ADD32(ctx->r17, ctx->r13);
    after_3:
    // 0x150A865C: mul.s       $f14, $f7, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f7.fl, ctx->f18.fl);
    // 0x150A8660: add.s       $f20, $f10, $f11
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f11.fl;
    // 0x150A8664: mul.s       $f15, $f8, $f19
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f15.fl = MUL_S(ctx->f8.fl, ctx->f19.fl);
    // 0x150A8668: sub.s       $f21, $f12, $f13
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f21.fl = ctx->f12.fl - ctx->f13.fl;
    // 0x150A866C: mul.s       $f16, $f6, $f19
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f19.fl);
    // 0x150A8670: add.s       $f25, $f14, $f15
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f25.fl = ctx->f14.fl + ctx->f15.fl;
    // 0x150A8674: mul.s       $f17, $f9, $f18
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f17.fl = MUL_S(ctx->f9.fl, ctx->f18.fl);
    // 0x150A8678: jal         0x150A8918
    // 0x150A867C: sub.s       $f26, $f16, $f17
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f26.fl = ctx->f16.fl - ctx->f17.fl;
    func_150A8918(rdram, ctx);
        goto after_4;
    // 0x150A867C: sub.s       $f26, $f16, $f17
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f26.fl = ctx->f16.fl - ctx->f17.fl;
    after_4:
    // 0x150A8680: mul.s       $f14, $f7, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f7.fl, ctx->f18.fl);
    // 0x150A8684: add.s       $f4, $f10, $f11
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f11.fl;
    // 0x150A8688: mul.s       $f15, $f8, $f19
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f15.fl = MUL_S(ctx->f8.fl, ctx->f19.fl);
    // 0x150A868C: sub.s       $f5, $f12, $f13
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f5.fl = ctx->f12.fl - ctx->f13.fl;
    // 0x150A8690: mul.s       $f16, $f6, $f19
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f19.fl);
    // 0x150A8694: add.s       $f6, $f14, $f15
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f15.fl;
    // 0x150A8698: mul.s       $f17, $f9, $f18
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f17.fl = MUL_S(ctx->f9.fl, ctx->f18.fl);
    // 0x150A869C: sub.s       $f7, $f16, $f17
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f7.fl = ctx->f16.fl - ctx->f17.fl;
    // 0x150A86A0: mul.s       $f10, $f20, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x150A86A4: nop

    // 0x150A86A8: mul.s       $f11, $f21, $f5
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f11.fl = MUL_S(ctx->f21.fl, ctx->f5.fl);
    // 0x150A86AC: nop

    // 0x150A86B0: mul.s       $f12, $f25, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f25.fl, ctx->f6.fl);
    // 0x150A86B4: add.s       $f10, $f10, $f11
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f11.fl;
    // 0x150A86B8: mul.s       $f13, $f26, $f7
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f13.fl = MUL_S(ctx->f26.fl, ctx->f7.fl);
    // 0x150A86BC: add.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x150A86C0: mul.s       $f20, $f20, $f27
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f27.fl);
    // 0x150A86C4: add.s       $f10, $f10, $f13
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f13.fl;
    // 0x150A86C8: mul.s       $f21, $f21, $f27
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f27.fl);
    // 0x150A86CC: c.olt.s     $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f10.fl < ctx->f30.fl;
    // 0x150A86D0: mul.s       $f25, $f25, $f27
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f25.fl = MUL_S(ctx->f25.fl, ctx->f27.fl);
    // 0x150A86D4: bc1f        L_150A86EC
    if (!c1cs) {
        // 0x150A86D8: nop
    
            goto L_150A86EC;
    }
    // 0x150A86D8: nop

    // 0x150A86DC: sub.s       $f4, $f30, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f30.fl - ctx->f4.fl;
    // 0x150A86E0: sub.s       $f5, $f30, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = ctx->f30.fl - ctx->f5.fl;
    // 0x150A86E4: sub.s       $f6, $f30, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f30.fl - ctx->f6.fl;
    // 0x150A86E8: sub.s       $f7, $f30, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f7.fl = ctx->f30.fl - ctx->f7.fl;
L_150A86EC:
    // 0x150A86EC: mul.s       $f26, $f26, $f27
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f27.fl);
    // 0x150A86F0: nop

    // 0x150A86F4: mul.s       $f4, $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x150A86F8: lbu         $s4, 0x1($t0)
    ctx->r20 = MEM_BU(ctx->r8, 0X1);
    // 0x150A86FC: mul.s       $f5, $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f28.fl);
    // 0x150A8700: add.s       $f10, $f20, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x150A8704: mul.s       $f6, $f6, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x150A8708: add.s       $f11, $f21, $f5
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f11.fl = ctx->f21.fl + ctx->f5.fl;
    // 0x150A870C: mul.s       $f7, $f7, $f28
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f7.fl = MUL_S(ctx->f7.fl, ctx->f28.fl);
    // 0x150A8710: add.s       $f12, $f25, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f25.fl + ctx->f6.fl;
    // 0x150A8714: mul.s       $f0, $f10, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x150A8718: add.s       $f13, $f26, $f7
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f13.fl = ctx->f26.fl + ctx->f7.fl;
    // 0x150A871C: mul.s       $f1, $f11, $f11
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f1.fl = MUL_S(ctx->f11.fl, ctx->f11.fl);
    // 0x150A8720: nop

    // 0x150A8724: mul.s       $f2, $f12, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150A8728: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x150A872C: mul.s       $f1, $f13, $f13
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f1.fl = MUL_S(ctx->f13.fl, ctx->f13.fl);
    // 0x150A8730: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x150A8734: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x150A8738: div.s       $f4, $f29, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f29.fl, ctx->f0.fl);
    // 0x150A873C: mul.s       $f0, $f11, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f11.fl, ctx->f4.fl);
    // 0x150A8740: nop

    // 0x150A8744: mul.s       $f1, $f12, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x150A8748: sll         $s4, $s4, 6
    ctx->r20 = S32(ctx->r20 << 6);
    // 0x150A874C: mul.s       $f2, $f13, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f13.fl, ctx->f4.fl);
    // 0x150A8750: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x150A8754: lw          $t7, -0x7AC0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7AC0);
    // 0x150A8758: mul.s       $f3, $f10, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150A875C: addu        $t7, $t7, $s4
    ctx->r15 = ADD32(ctx->r15, ctx->r20);
    // 0x150A8760: mul.s       $f4, $f10, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f1.fl);
    // 0x150A8764: nop

    // 0x150A8768: mul.s       $f5, $f10, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f5.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x150A876C: nop

    // 0x150A8770: mul.s       $f6, $f11, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f11.fl, ctx->f0.fl);
    // 0x150A8774: nop

    // 0x150A8778: mul.s       $f7, $f11, $f1
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f7.fl = MUL_S(ctx->f11.fl, ctx->f1.fl);
    // 0x150A877C: nop

    // 0x150A8780: mul.s       $f8, $f11, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f11.fl, ctx->f2.fl);
    // 0x150A8784: add.s       $f20, $f7, $f5
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f20.fl = ctx->f7.fl + ctx->f5.fl;
    // 0x150A8788: mul.s       $f17, $f13, $f2
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f17.fl = MUL_S(ctx->f13.fl, ctx->f2.fl);
    // 0x150A878C: sub.s       $f21, $f8, $f4
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f21.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x150A8790: mul.s       $f15, $f12, $f1
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f15.fl = MUL_S(ctx->f12.fl, ctx->f1.fl);
    // 0x150A8794: add.s       $f25, $f8, $f4
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f25.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150A8798: mul.s       $f16, $f12, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x150A879C: add.s       $f19, $f15, $f17
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f19.fl = ctx->f15.fl + ctx->f17.fl;
    // 0x150A87A0: sub.s       $f19, $f31, $f19
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f19.fl = ctx->f31.fl - ctx->f19.fl;
    // 0x150A87A4: sub.s       $f26, $f16, $f3
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f26.fl = ctx->f16.fl - ctx->f3.fl;
    // 0x150A87A8: add.s       $f10, $f6, $f15
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f15.fl;
    // 0x150A87AC: sub.s       $f10, $f31, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f31.fl - ctx->f10.fl;
    // 0x150A87B0: add.s       $f4, $f16, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f3.fl;
    // 0x150A87B4: sub.s       $f2, $f7, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = ctx->f7.fl - ctx->f5.fl;
    // 0x150A87B8: add.s       $f3, $f6, $f17
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f3.fl = ctx->f6.fl + ctx->f17.fl;
    // 0x150A87BC: sub.s       $f3, $f31, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f31.fl - ctx->f3.fl;
    // 0x150A87C0: lui         $at, 0x3880
    ctx->r1 = S32(0X3880 << 16);
    // 0x150A87C4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x150A87C8: lhu         $t2, 0x0($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X0);
    // 0x150A87CC: bne         $t2, $zero, L_150A887C
    if (ctx->r10 != 0) {
        // 0x150A87D0: nop
    
            goto L_150A887C;
    }
    // 0x150A87D0: nop

    // 0x150A87D4: swc1        $f19, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f_odd[(19 - 1) * 2];
    // 0x150A87D8: lhu         $t2, 0x2($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X2);
    // 0x150A87DC: swc1        $f20, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f20.u32l;
    // 0x150A87E0: bne         $t2, $zero, L_150A88B0
    if (ctx->r10 != 0) {
        // 0x150A87E4: swc1        $f21, 0x8($t7)
        MEM_W(0X8, ctx->r15) = ctx->f_odd[(21 - 1) * 2];
            goto L_150A88B0;
    }
    // 0x150A87E4: swc1        $f21, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f_odd[(21 - 1) * 2];
L_150A87E8:
    // 0x150A87E8: swc1        $f2, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f2.u32l;
    // 0x150A87EC: lhu         $t2, 0x4($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X4);
    // 0x150A87F0: swc1        $f3, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f_odd[(3 - 1) * 2];
    // 0x150A87F4: bne         $t2, $zero, L_150A88E4
    if (ctx->r10 != 0) {
        // 0x150A87F8: swc1        $f4, 0x18($t7)
        MEM_W(0X18, ctx->r15) = ctx->f4.u32l;
            goto L_150A88E4;
    }
    // 0x150A87F8: swc1        $f4, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f4.u32l;
L_150A87FC:
    // 0x150A87FC: swc1        $f25, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f_odd[(25 - 1) * 2];
    // 0x150A8800: swc1        $f26, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f26.u32l;
    // 0x150A8804: swc1        $f10, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f10.u32l;
L_150A8808:
    // 0x150A8808: lwc1        $f2, 0x4($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X4);
    // 0x150A880C: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x150A8810: lwc1        $f3, -0x8($t0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r8, -0X8);
    // 0x150A8814: beq         $s7, $zero, L_150A8860
    if (ctx->r23 == 0) {
        // 0x150A8818: lwc1        $f4, -0x4($t0)
        ctx->f4.u32l = MEM_W(ctx->r8, -0X4);
            goto L_150A8860;
    }
    // 0x150A8818: lwc1        $f4, -0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, -0X4);
    // 0x150A881C: lui         $at, 0x3D80
    ctx->r1 = S32(0X3D80 << 16);
    // 0x150A8820: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x150A8824: lh          $t6, 0x0($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X0);
    // 0x150A8828: mtc1        $t6, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r14;
    // 0x150A882C: cvt.s.w     $f25, $f25
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    ctx->f25.fl = CVT_S_W(ctx->f_odd[(25 - 1) * 2]);
    // 0x150A8830: mul.s       $f25, $f25, $f1
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f25.fl = MUL_S(ctx->f25.fl, ctx->f1.fl);
    // 0x150A8834: add.s       $f2, $f2, $f25
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f25.fl;
    // 0x150A8838: lh          $t6, 0x2($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X2);
    // 0x150A883C: mtc1        $t6, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r14;
    // 0x150A8840: cvt.s.w     $f25, $f25
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    ctx->f25.fl = CVT_S_W(ctx->f_odd[(25 - 1) * 2]);
    // 0x150A8844: mul.s       $f25, $f25, $f1
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f25.fl = MUL_S(ctx->f25.fl, ctx->f1.fl);
    // 0x150A8848: add.s       $f3, $f3, $f25
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f25.fl;
    // 0x150A884C: lh          $t6, 0x4($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X4);
    // 0x150A8850: mtc1        $t6, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r14;
    // 0x150A8854: cvt.s.w     $f25, $f25
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    ctx->f25.fl = CVT_S_W(ctx->f_odd[(25 - 1) * 2]);
    // 0x150A8858: mul.s       $f25, $f25, $f1
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f25.fl = MUL_S(ctx->f25.fl, ctx->f1.fl);
    // 0x150A885C: add.s       $f4, $f4, $f25
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f25.fl;
L_150A8860:
    // 0x150A8860: swc1        $f2, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f2.u32l;
    // 0x150A8864: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x150A8868: swc1        $f3, 0x34($t7)
    MEM_W(0X34, ctx->r15) = ctx->f_odd[(3 - 1) * 2];
    // 0x150A886C: bne         $t1, $zero, L_150A863C
    if (ctx->r9 != 0) {
        // 0x150A8870: swc1        $f4, 0x38($t7)
        MEM_W(0X38, ctx->r15) = ctx->f4.u32l;
            goto L_150A863C;
    }
    // 0x150A8870: swc1        $f4, 0x38($t7)
    MEM_W(0X38, ctx->r15) = ctx->f4.u32l;
    // 0x150A8874: j           L_150A9400
    // 0x150A8878: nop

    static_5_150A9400(rdram, ctx);
    return;
    // 0x150A8878: nop

L_150A887C:
    // 0x150A887C: mtc1        $t2, $f0
    ctx->f0.u32l = ctx->r10;
    // 0x150A8880: nop

    // 0x150A8884: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x150A8888: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x150A888C: lhu         $t2, 0x2($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X2);
    // 0x150A8890: mul.s       $f19, $f19, $f0
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f19.fl = MUL_S(ctx->f19.fl, ctx->f0.fl);
    // 0x150A8894: nop

    // 0x150A8898: swc1        $f19, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f_odd[(19 - 1) * 2];
    // 0x150A889C: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x150A88A0: swc1        $f20, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f20.u32l;
    // 0x150A88A4: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x150A88A8: beq         $t2, $zero, L_150A87E8
    if (ctx->r10 == 0) {
        // 0x150A88AC: swc1        $f21, 0x8($t7)
        MEM_W(0X8, ctx->r15) = ctx->f_odd[(21 - 1) * 2];
            goto L_150A87E8;
    }
    // 0x150A88AC: swc1        $f21, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f_odd[(21 - 1) * 2];
L_150A88B0:
    // 0x150A88B0: mtc1        $t2, $f0
    ctx->f0.u32l = ctx->r10;
    // 0x150A88B4: nop

    // 0x150A88B8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x150A88BC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x150A88C0: lhu         $t2, 0x4($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X4);
    // 0x150A88C4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150A88C8: nop

    // 0x150A88CC: swc1        $f2, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f2.u32l;
    // 0x150A88D0: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x150A88D4: swc1        $f3, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f_odd[(3 - 1) * 2];
    // 0x150A88D8: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x150A88DC: beq         $t2, $zero, L_150A87FC
    if (ctx->r10 == 0) {
        // 0x150A88E0: swc1        $f4, 0x18($t7)
        MEM_W(0X18, ctx->r15) = ctx->f4.u32l;
            goto L_150A87FC;
    }
    // 0x150A88E0: swc1        $f4, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f4.u32l;
L_150A88E4:
    // 0x150A88E4: mtc1        $t2, $f0
    ctx->f0.u32l = ctx->r10;
    // 0x150A88E8: nop

    // 0x150A88EC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x150A88F0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x150A88F4: nop

    // 0x150A88F8: mul.s       $f25, $f25, $f0
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f25.fl = MUL_S(ctx->f25.fl, ctx->f0.fl);
    // 0x150A88FC: nop

    // 0x150A8900: swc1        $f25, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f_odd[(25 - 1) * 2];
    // 0x150A8904: mul.s       $f26, $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x150A8908: swc1        $f26, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f26.u32l;
    // 0x150A890C: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150A8910: j           L_150A8808
    // 0x150A8914: swc1        $f10, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f10.u32l;
        goto L_150A8808;
    // 0x150A8914: swc1        $f10, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_15016370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15016370: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x15016374: addiu       $a0, $a0, -0x274
    ctx->r4 = ADD32(ctx->r4, -0X274);
    // 0x15016378: lb          $t6, 0x0($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X0);
    // 0x1501637C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15016380: addiu       $v1, $v1, -0x3D30
    ctx->r3 = ADD32(ctx->r3, -0X3D30);
    // 0x15016384: blez        $t6, L_150163C4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15016388: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150163C4;
    }
    // 0x15016388: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1501638C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x15016390: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x15016394: lw          $t7, 0x31C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X31C);
L_15016398:
    // 0x15016398: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1501639C: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x150163A0: sh          $a1, 0x114($t7)
    MEM_H(0X114, ctx->r15) = ctx->r5;
    // 0x150163A4: lw          $t8, -0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X10);
    // 0x150163A8: sh          $a2, 0x116($t8)
    MEM_H(0X116, ctx->r24) = ctx->r6;
    // 0x150163AC: lw          $t9, -0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X10);
    // 0x150163B0: sh          $a2, 0x118($t9)
    MEM_H(0X118, ctx->r25) = ctx->r6;
    // 0x150163B4: lb          $t0, 0x0($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X0);
    // 0x150163B8: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x150163BC: bnel        $at, $zero, L_15016398
    if (ctx->r1 != 0) {
        // 0x150163C0: lw          $t7, 0x31C($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X31C);
            goto L_15016398;
    }
    goto skip_0;
    // 0x150163C0: lw          $t7, 0x31C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X31C);
    skip_0:
L_150163C4:
    // 0x150163C4: jr          $ra
    // 0x150163C8: nop

    return;
    return;
    // 0x150163C8: nop

;}
RECOMP_FUNC void func_151F8CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F8CF0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x151F8CF4: or          $t0, $sp, $zero
    ctx->r8 = ctx->r29 | 0;
    // 0x151F8CF8: addiu       $t1, $t0, 0x48
    ctx->r9 = ADD32(ctx->r8, 0X48);
    // 0x151F8CFC: lwc1        $f4, 0x3C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151F8D00: lwc1        $f6, 0x40($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X40);
    // 0x151F8D04: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8D08: lwc1        $f8, 0x44($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
    // 0x151F8D0C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151F8D10: swc1        $f4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f4.u32l;
    // 0x151F8D14: swc1        $f6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f6.u32l;
    // 0x151F8D18: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x151F8D1C: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151F8D20: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8D24: lwc1        $f8, 0x3C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151F8D28: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151F8D2C: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x151F8D30: swc1        $f6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f6.u32l;
    // 0x151F8D34: lwc1        $f4, 0x2C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x151F8D38: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x151F8D3C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8D40: lwc1        $f8, 0x34($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X34);
    // 0x151F8D44: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151F8D48: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x151F8D4C: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x151F8D50: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x151F8D54: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x151F8D58: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8D5C: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x151F8D60: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151F8D64: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x151F8D68: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    // 0x151F8D6C: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x151F8D70: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x151F8D74: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8D78: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x151F8D7C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151F8D80: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    // 0x151F8D84: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
    // 0x151F8D88: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151F8D8C: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x151F8D90: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8D94: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x151F8D98: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151F8D9C: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    // 0x151F8DA0: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    // 0x151F8DA4: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x151F8DA8: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x151F8DAC: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8DB0: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151F8DB4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151F8DB8: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
    // 0x151F8DBC: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x151F8DC0: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151F8DC4: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151F8DC8: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8DCC: lwc1        $f8, 0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
    // 0x151F8DD0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151F8DD4: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x151F8DD8: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    // 0x151F8DDC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151F8DE0: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151F8DE4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8DE8: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x151F8DEC: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x151F8DF0: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151F8DF4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8DF8: lwc1        $f8, 0x44($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
    // 0x151F8DFC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151F8E00: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x151F8E04: swc1        $f6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f6.u32l;
    // 0x151F8E08: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x151F8E0C: lwc1        $f6, 0x2C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x151F8E10: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8E14: lwc1        $f8, 0x34($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X34);
    // 0x151F8E18: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151F8E1C: swc1        $f4, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f4.u32l;
    // 0x151F8E20: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x151F8E24: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151F8E28: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x151F8E2C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8E30: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x151F8E34: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151F8E38: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x151F8E3C: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
    // 0x151F8E40: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151F8E44: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x151F8E48: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F8E4C: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151F8E50: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151F8E54: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x151F8E58: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x151F8E5C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151F8E60: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x151F8E64: add.s       $f2, $f4, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f4.fl;
    // 0x151F8E68: add.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x151F8E6C: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x151F8E70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8E74: lwc1        $f6, 0xC50($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC50);
    // 0x151F8E78: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F8E7C: nop

    // 0x151F8E80: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x151F8E84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8E88: lwc1        $f10, 0xC54($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XC54);
    // 0x151F8E8C: lwc1        $f16, 0x40($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X40);
    // 0x151F8E90: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F8E94: nop

    // 0x151F8E98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8E9C: lwc1        $f6, 0xC58($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC58);
    // 0x151F8EA0: mul.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F8EA4: nop

    // 0x151F8EA8: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F8EAC: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151F8EB0: add.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151F8EB4: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    // 0x151F8EB8: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x151F8EBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8EC0: lwc1        $f6, 0xC5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC5C);
    // 0x151F8EC4: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F8EC8: nop

    // 0x151F8ECC: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x151F8ED0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8ED4: lwc1        $f10, 0xC60($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XC60);
    // 0x151F8ED8: lwc1        $f16, 0x40($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X40);
    // 0x151F8EDC: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F8EE0: nop

    // 0x151F8EE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8EE8: lwc1        $f6, 0xC64($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC64);
    // 0x151F8EEC: mul.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F8EF0: nop

    // 0x151F8EF4: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F8EF8: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151F8EFC: add.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151F8F00: swc1        $f4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f4.u32l;
    // 0x151F8F04: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x151F8F08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8F0C: lwc1        $f6, 0xC68($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC68);
    // 0x151F8F10: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F8F14: nop

    // 0x151F8F18: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x151F8F1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8F20: lwc1        $f10, 0xC6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XC6C);
    // 0x151F8F24: lwc1        $f16, 0x40($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X40);
    // 0x151F8F28: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F8F2C: nop

    // 0x151F8F30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8F34: lwc1        $f6, 0xC70($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC70);
    // 0x151F8F38: mul.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F8F3C: nop

    // 0x151F8F40: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F8F44: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151F8F48: add.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151F8F4C: swc1        $f4, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f4.u32l;
    // 0x151F8F50: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x151F8F54: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x151F8F58: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x151F8F5C: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
    // 0x151F8F60: lwc1        $f10, 0x40($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X40);
    // 0x151F8F64: sub.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x151F8F68: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151F8F6C: sub.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x151F8F70: sub.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x151F8F74: sub.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x151F8F78: swc1        $f2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f2.u32l;
    // 0x151F8F7C: sub.s       $f2, $f16, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x151F8F80: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x151F8F84: sub.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x151F8F88: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x151F8F8C: swc1        $f2, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f2.u32l;
    // 0x151F8F90: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x151F8F94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8F98: lwc1        $f4, 0xC74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XC74);
    // 0x151F8F9C: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151F8FA0: nop

    // 0x151F8FA4: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151F8FA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8FAC: lwc1        $f6, 0xC78($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC78);
    // 0x151F8FB0: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F8FB4: nop

    // 0x151F8FB8: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x151F8FBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8FC0: lwc1        $f10, 0xC7C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XC7C);
    // 0x151F8FC4: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151F8FC8: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F8FCC: nop

    // 0x151F8FD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8FD4: lwc1        $f6, 0xC80($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC80);
    // 0x151F8FD8: mul.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F8FDC: nop

    // 0x151F8FE0: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F8FE4: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151F8FE8: add.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151F8FEC: swc1        $f4, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f4.u32l;
    // 0x151F8FF0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x151F8FF4: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151F8FF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F8FFC: lwc1        $f6, 0xC84($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC84);
    // 0x151F9000: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9004: nop

    // 0x151F9008: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x151F900C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9010: lwc1        $f10, 0xC88($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XC88);
    // 0x151F9014: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151F9018: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F901C: nop

    // 0x151F9020: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9024: lwc1        $f6, 0xC8C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC8C);
    // 0x151F9028: mul.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F902C: nop

    // 0x151F9030: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9034: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151F9038: add.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151F903C: swc1        $f4, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f4.u32l;
    // 0x151F9040: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151F9044: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9048: lwc1        $f6, 0xC90($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC90);
    // 0x151F904C: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9050: nop

    // 0x151F9054: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x151F9058: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F905C: lwc1        $f10, 0xC94($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XC94);
    // 0x151F9060: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151F9064: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9068: nop

    // 0x151F906C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9070: lwc1        $f6, 0xC98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC98);
    // 0x151F9074: mul.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F9078: nop

    // 0x151F907C: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9080: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151F9084: add.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151F9088: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x151F908C: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151F9090: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x151F9094: sub.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151F9098: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151F909C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F90A0: lwc1        $f10, 0xC9C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XC9C);
    // 0x151F90A4: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151F90A8: mul.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x151F90AC: nop

    // 0x151F90B0: swc1        $f4, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f4.u32l;
    // 0x151F90B4: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151F90B8: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x151F90BC: add.s       $f2, $f4, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f4.fl;
    // 0x151F90C0: add.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x151F90C4: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151F90C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F90CC: lwc1        $f6, 0xCA0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCA0);
    // 0x151F90D0: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F90D4: nop

    // 0x151F90D8: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x151F90DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F90E0: lwc1        $f10, 0xCA4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XCA4);
    // 0x151F90E4: lwc1        $f16, 0x44($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X44);
    // 0x151F90E8: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F90EC: nop

    // 0x151F90F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F90F4: lwc1        $f6, 0xCA8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCA8);
    // 0x151F90F8: mul.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F90FC: nop

    // 0x151F9100: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9104: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151F9108: add.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151F910C: swc1        $f4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f4.u32l;
    // 0x151F9110: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151F9114: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9118: lwc1        $f6, 0xCAC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCAC);
    // 0x151F911C: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9120: nop

    // 0x151F9124: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x151F9128: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F912C: lwc1        $f10, 0xCB0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XCB0);
    // 0x151F9130: lwc1        $f16, 0x44($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X44);
    // 0x151F9134: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9138: nop

    // 0x151F913C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9140: lwc1        $f6, 0xCB4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCB4);
    // 0x151F9144: mul.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F9148: nop

    // 0x151F914C: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9150: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151F9154: add.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151F9158: swc1        $f4, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f4.u32l;
    // 0x151F915C: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151F9160: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9164: lwc1        $f6, 0xCB8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCB8);
    // 0x151F9168: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F916C: nop

    // 0x151F9170: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x151F9174: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9178: lwc1        $f10, 0xCBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XCBC);
    // 0x151F917C: lwc1        $f16, 0x44($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X44);
    // 0x151F9180: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9184: nop

    // 0x151F9188: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F918C: lwc1        $f6, 0xCC0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCC0);
    // 0x151F9190: mul.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F9194: nop

    // 0x151F9198: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F919C: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151F91A0: add.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151F91A4: swc1        $f4, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->f4.u32l;
    // 0x151F91A8: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151F91AC: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x151F91B0: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x151F91B4: lwc1        $f8, 0x34($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X34);
    // 0x151F91B8: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x151F91BC: sub.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x151F91C0: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151F91C4: sub.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x151F91C8: sub.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x151F91CC: sub.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x151F91D0: swc1        $f2, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f2.u32l;
    // 0x151F91D4: sub.s       $f2, $f16, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x151F91D8: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x151F91DC: sub.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x151F91E0: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x151F91E4: swc1        $f2, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->f2.u32l;
    // 0x151F91E8: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x151F91EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F91F0: lwc1        $f4, 0xCC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XCC4);
    // 0x151F91F4: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151F91F8: nop

    // 0x151F91FC: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x151F9200: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9204: lwc1        $f6, 0xCC8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCC8);
    // 0x151F9208: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F920C: nop

    // 0x151F9210: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x151F9214: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9218: lwc1        $f10, 0xCCC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XCCC);
    // 0x151F921C: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151F9220: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9224: nop

    // 0x151F9228: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F922C: lwc1        $f6, 0xCD0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCD0);
    // 0x151F9230: mul.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F9234: nop

    // 0x151F9238: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F923C: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151F9240: add.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151F9244: swc1        $f4, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->f4.u32l;
    // 0x151F9248: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x151F924C: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x151F9250: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9254: lwc1        $f6, 0xCD4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCD4);
    // 0x151F9258: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F925C: nop

    // 0x151F9260: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x151F9264: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9268: lwc1        $f10, 0xCD8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XCD8);
    // 0x151F926C: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151F9270: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9274: nop

    // 0x151F9278: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F927C: lwc1        $f6, 0xCDC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCDC);
    // 0x151F9280: mul.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F9284: nop

    // 0x151F9288: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F928C: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151F9290: add.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151F9294: swc1        $f4, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f4.u32l;
    // 0x151F9298: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x151F929C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F92A0: lwc1        $f6, 0xCE0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCE0);
    // 0x151F92A4: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F92A8: nop

    // 0x151F92AC: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x151F92B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F92B4: lwc1        $f10, 0xCE4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XCE4);
    // 0x151F92B8: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151F92BC: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F92C0: nop

    // 0x151F92C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F92C8: lwc1        $f6, 0xCE8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCE8);
    // 0x151F92CC: mul.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F92D0: nop

    // 0x151F92D4: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F92D8: add.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151F92DC: add.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151F92E0: swc1        $f4, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f4.u32l;
    // 0x151F92E4: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x151F92E8: lwc1        $f6, 0x2C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x151F92EC: sub.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151F92F0: lwc1        $f8, 0x3C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151F92F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F92F8: lwc1        $f10, 0xCEC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XCEC);
    // 0x151F92FC: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151F9300: mul.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x151F9304: nop

    // 0x151F9308: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x151F930C: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151F9310: lwc1        $f6, 0x14($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X14);
    // 0x151F9314: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F9318: lwc1        $f8, 0x24($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X24);
    // 0x151F931C: lwc1        $f10, 0x38($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X38);
    // 0x151F9320: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9324: lwc1        $f16, 0xCF0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XCF0);
    // 0x151F9328: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F932C: mul.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151F9330: nop

    // 0x151F9334: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9338: lwc1        $f6, 0xCF4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCF4);
    // 0x151F933C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9340: mul.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x151F9344: nop

    // 0x151F9348: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F934C: lwc1        $f16, 0xCF8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XCF8);
    // 0x151F9350: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151F9354: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x151F9358: nop

    // 0x151F935C: swc1        $f10, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f10.u32l;
    // 0x151F9360: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x151F9364: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x151F9368: lwc1        $f6, 0x20($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X20);
    // 0x151F936C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F9370: lwc1        $f8, 0x28($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X28);
    // 0x151F9374: lwc1        $f10, 0x44($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X44);
    // 0x151F9378: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F937C: lwc1        $f16, 0xCFC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XCFC);
    // 0x151F9380: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F9384: mul.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151F9388: nop

    // 0x151F938C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9390: lwc1        $f6, 0xD00($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XD00);
    // 0x151F9394: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9398: mul.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x151F939C: nop

    // 0x151F93A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F93A4: lwc1        $f16, 0xD04($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD04);
    // 0x151F93A8: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151F93AC: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x151F93B0: nop

    // 0x151F93B4: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
    // 0x151F93B8: swc1        $f4, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f4.u32l;
    // 0x151F93BC: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x151F93C0: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x151F93C4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F93C8: lwc1        $f8, 0x2C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x151F93CC: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x151F93D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F93D4: lwc1        $f16, 0xD08($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD08);
    // 0x151F93D8: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F93DC: mul.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151F93E0: nop

    // 0x151F93E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F93E8: lwc1        $f6, 0xD0C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XD0C);
    // 0x151F93EC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F93F0: mul.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x151F93F4: nop

    // 0x151F93F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F93FC: lwc1        $f16, 0xD10($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD10);
    // 0x151F9400: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151F9404: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x151F9408: nop

    // 0x151F940C: swc1        $f10, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f10.u32l;
    // 0x151F9410: swc1        $f4, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f4.u32l;
    // 0x151F9414: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x151F9418: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x151F941C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F9420: lwc1        $f8, 0x30($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X30);
    // 0x151F9424: lwc1        $f10, 0x40($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X40);
    // 0x151F9428: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F942C: lwc1        $f16, 0xD14($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD14);
    // 0x151F9430: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F9434: mul.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151F9438: nop

    // 0x151F943C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9440: lwc1        $f6, 0xD18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XD18);
    // 0x151F9444: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9448: mul.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x151F944C: nop

    // 0x151F9450: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9454: lwc1        $f16, 0xD1C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD1C);
    // 0x151F9458: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151F945C: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x151F9460: nop

    // 0x151F9464: swc1        $f10, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f10.u32l;
    // 0x151F9468: swc1        $f4, 0x38($t1)
    MEM_W(0X38, ctx->r9) = ctx->f4.u32l;
    // 0x151F946C: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x151F9470: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x151F9474: sub.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151F9478: lwc1        $f8, 0x30($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X30);
    // 0x151F947C: lwc1        $f10, 0x40($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X40);
    // 0x151F9480: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9484: lwc1        $f16, 0xD20($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD20);
    // 0x151F9488: sub.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F948C: mul.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151F9490: nop

    // 0x151F9494: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9498: lwc1        $f6, 0xD24($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XD24);
    // 0x151F949C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F94A0: mul.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x151F94A4: nop

    // 0x151F94A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F94AC: lwc1        $f16, 0xD28($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD28);
    // 0x151F94B0: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151F94B4: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x151F94B8: nop

    // 0x151F94BC: swc1        $f10, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f10.u32l;
    // 0x151F94C0: swc1        $f4, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f4.u32l;
    // 0x151F94C4: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x151F94C8: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x151F94CC: sub.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151F94D0: lwc1        $f8, 0x2C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x151F94D4: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x151F94D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F94DC: lwc1        $f16, 0xD2C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD2C);
    // 0x151F94E0: sub.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F94E4: mul.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151F94E8: nop

    // 0x151F94EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F94F0: lwc1        $f6, 0xD30($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XD30);
    // 0x151F94F4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F94F8: mul.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x151F94FC: nop

    // 0x151F9500: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9504: lwc1        $f16, 0xD34($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD34);
    // 0x151F9508: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151F950C: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x151F9510: nop

    // 0x151F9514: swc1        $f10, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f10.u32l;
    // 0x151F9518: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x151F951C: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x151F9520: lwc1        $f6, 0x20($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X20);
    // 0x151F9524: sub.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151F9528: lwc1        $f8, 0x28($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X28);
    // 0x151F952C: lwc1        $f10, 0x44($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X44);
    // 0x151F9530: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9534: lwc1        $f16, 0xD38($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD38);
    // 0x151F9538: sub.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F953C: mul.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151F9540: nop

    // 0x151F9544: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F9548: lwc1        $f6, 0xD3C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XD3C);
    // 0x151F954C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9550: mul.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x151F9554: nop

    // 0x151F9558: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F955C: lwc1        $f16, 0xD40($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD40);
    // 0x151F9560: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151F9564: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x151F9568: nop

    // 0x151F956C: swc1        $f10, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f10.u32l;
    // 0x151F9570: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x151F9574: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151F9578: lwc1        $f6, 0x14($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X14);
    // 0x151F957C: sub.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151F9580: lwc1        $f8, 0x24($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X24);
    // 0x151F9584: lwc1        $f10, 0x38($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X38);
    // 0x151F9588: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F958C: lwc1        $f16, 0xD44($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD44);
    // 0x151F9590: sub.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F9594: mul.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151F9598: nop

    // 0x151F959C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F95A0: lwc1        $f6, 0xD48($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XD48);
    // 0x151F95A4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F95A8: mul.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x151F95AC: nop

    // 0x151F95B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F95B4: lwc1        $f16, 0xD4C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD4C);
    // 0x151F95B8: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151F95BC: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x151F95C0: nop

    // 0x151F95C4: swc1        $f10, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f10.u32l;
    // 0x151F95C8: swc1        $f4, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f4.u32l;
    // 0x151F95CC: lwc1        $f4, 0x34($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X34);
    // 0x151F95D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F95D4: lwc1        $f6, 0xD50($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XD50);
    // 0x151F95D8: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F95DC: nop

    // 0x151F95E0: lwc1        $f8, 0x10($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X10);
    // 0x151F95E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F95E8: lwc1        $f10, 0xD54($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XD54);
    // 0x151F95EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151F95F0: lwc1        $f16, 0xD58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD58);
    // 0x151F95F4: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151F95F8: mul.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x151F95FC: nop

    // 0x151F9600: sub.s       $f4, $f8, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x151F9604: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x151F9608: nop

    // 0x151F960C: swc1        $f6, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f6.u32l;
    // 0x151F9610: swc1        $f4, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f4.u32l;
    // 0x151F9614: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x151F9618: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x151F961C: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x151F9620: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x151F9624: andi        $a1, $a1, 0x1
    ctx->r5 = ctx->r5 & 0X1;
    // 0x151F9628: beq         $a1, $zero, L_151F9858
    if (ctx->r5 == 0) {
        // 0x151F962C: nop
    
            goto L_151F9858;
    }
    // 0x151F962C: nop

    // 0x151F9630: lwc1        $f4, 0x24($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X24);
    // 0x151F9634: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x151F9638: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x151F963C: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9640: nop

    // 0x151F9644: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x151F9648: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F964C: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x151F9650: lwc1        $f6, 0x28($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X28);
    // 0x151F9654: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x151F9658: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F965C: nop

    // 0x151F9660: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x151F9664: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F9668: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
    // 0x151F966C: lwc1        $f4, 0x2C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x151F9670: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x151F9674: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x151F9678: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F967C: nop

    // 0x151F9680: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x151F9684: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9688: swc1        $f4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f4.u32l;
    // 0x151F968C: lwc1        $f6, 0x30($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X30);
    // 0x151F9690: lwc1        $f8, 0xC($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0XC);
    // 0x151F9694: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F9698: nop

    // 0x151F969C: lwc1        $f10, 0xC($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XC);
    // 0x151F96A0: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F96A4: swc1        $f10, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f10.u32l;
    // 0x151F96A8: lwc1        $f4, 0x34($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X34);
    // 0x151F96AC: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x151F96B0: lwc1        $f6, 0x10($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X10);
    // 0x151F96B4: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F96B8: nop

    // 0x151F96BC: lwc1        $f8, 0x10($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X10);
    // 0x151F96C0: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F96C4: swc1        $f4, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f4.u32l;
    // 0x151F96C8: lwc1        $f6, 0x38($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X38);
    // 0x151F96CC: lwc1        $f8, 0x14($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X14);
    // 0x151F96D0: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F96D4: nop

    // 0x151F96D8: lwc1        $f10, 0x14($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X14);
    // 0x151F96DC: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F96E0: swc1        $f10, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f10.u32l;
    // 0x151F96E4: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x151F96E8: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x151F96EC: lwc1        $f6, 0x18($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X18);
    // 0x151F96F0: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F96F4: nop

    // 0x151F96F8: lwc1        $f8, 0x18($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X18);
    // 0x151F96FC: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9700: swc1        $f4, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f4.u32l;
    // 0x151F9704: lwc1        $f6, 0x40($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X40);
    // 0x151F9708: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x151F970C: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F9710: nop

    // 0x151F9714: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x151F9718: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F971C: swc1        $f10, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f10.u32l;
    // 0x151F9720: lwc1        $f4, 0x44($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X44);
    // 0x151F9724: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x151F9728: lwc1        $f6, 0x20($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X20);
    // 0x151F972C: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9730: nop

    // 0x151F9734: lwc1        $f8, 0x20($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X20);
    // 0x151F9738: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F973C: swc1        $f4, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f4.u32l;
    // 0x151F9740: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x151F9744: neg.s       $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = -ctx->f6.fl;
    // 0x151F9748: lwc1        $f8, 0x24($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X24);
    // 0x151F974C: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F9750: nop

    // 0x151F9754: lwc1        $f10, 0x24($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X24);
    // 0x151F9758: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F975C: swc1        $f10, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f10.u32l;
    // 0x151F9760: lwc1        $f4, 0x40($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X40);
    // 0x151F9764: lwc1        $f6, 0x28($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X28);
    // 0x151F9768: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F976C: nop

    // 0x151F9770: lwc1        $f8, 0x28($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X28);
    // 0x151F9774: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9778: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x151F977C: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x151F9780: neg.s       $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = -ctx->f6.fl;
    // 0x151F9784: lwc1        $f8, 0x2C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x151F9788: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F978C: nop

    // 0x151F9790: lwc1        $f10, 0x2C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x151F9794: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F9798: swc1        $f10, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f10.u32l;
    // 0x151F979C: lwc1        $f4, 0x38($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X38);
    // 0x151F97A0: lwc1        $f6, 0x30($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X30);
    // 0x151F97A4: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F97A8: nop

    // 0x151F97AC: lwc1        $f8, 0x30($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X30);
    // 0x151F97B0: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F97B4: swc1        $f4, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f4.u32l;
    // 0x151F97B8: lwc1        $f6, 0x34($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X34);
    // 0x151F97BC: neg.s       $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = -ctx->f6.fl;
    // 0x151F97C0: lwc1        $f8, 0x34($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X34);
    // 0x151F97C4: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F97C8: nop

    // 0x151F97CC: lwc1        $f10, 0x34($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X34);
    // 0x151F97D0: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F97D4: swc1        $f10, 0x34($t2)
    MEM_W(0X34, ctx->r10) = ctx->f10.u32l;
    // 0x151F97D8: lwc1        $f4, 0x30($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X30);
    // 0x151F97DC: lwc1        $f6, 0x38($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X38);
    // 0x151F97E0: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F97E4: nop

    // 0x151F97E8: lwc1        $f8, 0x38($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X38);
    // 0x151F97EC: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F97F0: swc1        $f4, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->f4.u32l;
    // 0x151F97F4: lwc1        $f6, 0x2C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x151F97F8: neg.s       $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = -ctx->f6.fl;
    // 0x151F97FC: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x151F9800: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F9804: nop

    // 0x151F9808: lwc1        $f10, 0x3C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x151F980C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F9810: swc1        $f10, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f10.u32l;
    // 0x151F9814: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x151F9818: lwc1        $f6, 0x40($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X40);
    // 0x151F981C: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9820: nop

    // 0x151F9824: lwc1        $f8, 0x40($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X40);
    // 0x151F9828: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F982C: swc1        $f4, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f4.u32l;
    // 0x151F9830: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x151F9834: neg.s       $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = -ctx->f6.fl;
    // 0x151F9838: lwc1        $f8, 0x44($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X44);
    // 0x151F983C: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F9840: nop

    // 0x151F9844: lwc1        $f10, 0x44($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X44);
    // 0x151F9848: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151F984C: swc1        $f10, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f10.u32l;
    // 0x151F9850: b           L_151F9A74
    // 0x151F9854: nop

        goto L_151F9A74;
    // 0x151F9854: nop

L_151F9858:
    // 0x151F9858: lwc1        $f4, 0x24($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X24);
    // 0x151F985C: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x151F9860: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x151F9864: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9868: nop

    // 0x151F986C: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x151F9870: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9874: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x151F9878: lwc1        $f6, 0x28($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X28);
    // 0x151F987C: neg.s       $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = -ctx->f6.fl;
    // 0x151F9880: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x151F9884: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F9888: nop

    // 0x151F988C: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x151F9890: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F9894: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
    // 0x151F9898: lwc1        $f4, 0x2C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x151F989C: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x151F98A0: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x151F98A4: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F98A8: nop

    // 0x151F98AC: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x151F98B0: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F98B4: swc1        $f4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f4.u32l;
    // 0x151F98B8: lwc1        $f6, 0x30($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X30);
    // 0x151F98BC: neg.s       $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = -ctx->f6.fl;
    // 0x151F98C0: lwc1        $f8, 0xC($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0XC);
    // 0x151F98C4: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F98C8: nop

    // 0x151F98CC: lwc1        $f10, 0xC($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XC);
    // 0x151F98D0: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F98D4: swc1        $f10, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f10.u32l;
    // 0x151F98D8: lwc1        $f4, 0x34($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X34);
    // 0x151F98DC: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x151F98E0: lwc1        $f6, 0x10($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X10);
    // 0x151F98E4: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F98E8: nop

    // 0x151F98EC: lwc1        $f8, 0x10($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X10);
    // 0x151F98F0: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F98F4: swc1        $f4, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f4.u32l;
    // 0x151F98F8: lwc1        $f6, 0x38($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X38);
    // 0x151F98FC: neg.s       $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = -ctx->f6.fl;
    // 0x151F9900: lwc1        $f8, 0x14($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X14);
    // 0x151F9904: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F9908: nop

    // 0x151F990C: lwc1        $f10, 0x14($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X14);
    // 0x151F9910: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F9914: swc1        $f10, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f10.u32l;
    // 0x151F9918: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x151F991C: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x151F9920: lwc1        $f6, 0x18($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X18);
    // 0x151F9924: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9928: nop

    // 0x151F992C: lwc1        $f8, 0x18($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X18);
    // 0x151F9930: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9934: swc1        $f4, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f4.u32l;
    // 0x151F9938: lwc1        $f6, 0x40($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X40);
    // 0x151F993C: neg.s       $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = -ctx->f6.fl;
    // 0x151F9940: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x151F9944: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F9948: nop

    // 0x151F994C: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x151F9950: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F9954: swc1        $f10, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f10.u32l;
    // 0x151F9958: lwc1        $f4, 0x44($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X44);
    // 0x151F995C: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x151F9960: lwc1        $f6, 0x20($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X20);
    // 0x151F9964: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9968: nop

    // 0x151F996C: lwc1        $f8, 0x20($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X20);
    // 0x151F9970: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9974: swc1        $f4, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f4.u32l;
    // 0x151F9978: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x151F997C: lwc1        $f8, 0x24($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X24);
    // 0x151F9980: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F9984: nop

    // 0x151F9988: lwc1        $f10, 0x24($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X24);
    // 0x151F998C: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F9990: swc1        $f10, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f10.u32l;
    // 0x151F9994: lwc1        $f4, 0x40($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X40);
    // 0x151F9998: lwc1        $f6, 0x28($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X28);
    // 0x151F999C: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F99A0: nop

    // 0x151F99A4: lwc1        $f8, 0x28($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X28);
    // 0x151F99A8: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F99AC: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x151F99B0: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x151F99B4: lwc1        $f8, 0x2C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x151F99B8: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F99BC: nop

    // 0x151F99C0: lwc1        $f10, 0x2C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x151F99C4: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F99C8: swc1        $f10, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f10.u32l;
    // 0x151F99CC: lwc1        $f4, 0x38($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X38);
    // 0x151F99D0: lwc1        $f6, 0x30($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X30);
    // 0x151F99D4: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F99D8: nop

    // 0x151F99DC: lwc1        $f8, 0x30($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X30);
    // 0x151F99E0: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F99E4: swc1        $f4, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f4.u32l;
    // 0x151F99E8: lwc1        $f6, 0x34($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X34);
    // 0x151F99EC: lwc1        $f8, 0x34($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X34);
    // 0x151F99F0: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F99F4: nop

    // 0x151F99F8: lwc1        $f10, 0x34($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X34);
    // 0x151F99FC: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F9A00: swc1        $f10, 0x34($t2)
    MEM_W(0X34, ctx->r10) = ctx->f10.u32l;
    // 0x151F9A04: lwc1        $f4, 0x30($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X30);
    // 0x151F9A08: lwc1        $f6, 0x38($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X38);
    // 0x151F9A0C: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9A10: nop

    // 0x151F9A14: lwc1        $f8, 0x38($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X38);
    // 0x151F9A18: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9A1C: swc1        $f4, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->f4.u32l;
    // 0x151F9A20: lwc1        $f6, 0x2C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x151F9A24: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x151F9A28: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F9A2C: nop

    // 0x151F9A30: lwc1        $f10, 0x3C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x151F9A34: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F9A38: swc1        $f10, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f10.u32l;
    // 0x151F9A3C: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x151F9A40: lwc1        $f6, 0x40($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X40);
    // 0x151F9A44: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9A48: nop

    // 0x151F9A4C: lwc1        $f8, 0x40($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X40);
    // 0x151F9A50: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F9A54: swc1        $f4, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f4.u32l;
    // 0x151F9A58: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x151F9A5C: lwc1        $f8, 0x44($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X44);
    // 0x151F9A60: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F9A64: nop

    // 0x151F9A68: lwc1        $f10, 0x44($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X44);
    // 0x151F9A6C: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151F9A70: swc1        $f10, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f10.u32l;
L_151F9A74:
    // 0x151F9A74: lwc1        $f4, 0x20($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X20);
    // 0x151F9A78: lwc1        $f6, 0x48($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X48);
    // 0x151F9A7C: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9A80: nop

    // 0x151F9A84: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x151F9A88: lwc1        $f10, 0x4C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4C);
    // 0x151F9A8C: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9A90: nop

    // 0x151F9A94: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x151F9A98: swc1        $f8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f8.u32l;
    // 0x151F9A9C: lwc1        $f4, 0x18($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X18);
    // 0x151F9AA0: lwc1        $f6, 0x50($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X50);
    // 0x151F9AA4: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9AA8: nop

    // 0x151F9AAC: lwc1        $f8, 0x14($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X14);
    // 0x151F9AB0: lwc1        $f10, 0x54($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X54);
    // 0x151F9AB4: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9AB8: nop

    // 0x151F9ABC: swc1        $f4, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f4.u32l;
    // 0x151F9AC0: swc1        $f8, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f8.u32l;
    // 0x151F9AC4: lwc1        $f4, 0x10($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X10);
    // 0x151F9AC8: lwc1        $f6, 0x58($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X58);
    // 0x151F9ACC: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9AD0: nop

    // 0x151F9AD4: lwc1        $f8, 0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XC);
    // 0x151F9AD8: lwc1        $f10, 0x5C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X5C);
    // 0x151F9ADC: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9AE0: nop

    // 0x151F9AE4: swc1        $f4, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f4.u32l;
    // 0x151F9AE8: swc1        $f8, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f8.u32l;
    // 0x151F9AEC: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x151F9AF0: lwc1        $f6, 0x60($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X60);
    // 0x151F9AF4: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9AF8: nop

    // 0x151F9AFC: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x151F9B00: lwc1        $f10, 0x64($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X64);
    // 0x151F9B04: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9B08: nop

    // 0x151F9B0C: swc1        $f4, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f4.u32l;
    // 0x151F9B10: swc1        $f8, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f8.u32l;
    // 0x151F9B14: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151F9B18: lwc1        $f6, 0x68($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X68);
    // 0x151F9B1C: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9B20: nop

    // 0x151F9B24: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151F9B28: lwc1        $f10, 0x6C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X6C);
    // 0x151F9B2C: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9B30: nop

    // 0x151F9B34: swc1        $f4, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f4.u32l;
    // 0x151F9B38: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
    // 0x151F9B3C: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x151F9B40: lwc1        $f6, 0x70($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X70);
    // 0x151F9B44: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9B48: nop

    // 0x151F9B4C: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x151F9B50: lwc1        $f10, 0x74($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X74);
    // 0x151F9B54: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9B58: nop

    // 0x151F9B5C: swc1        $f4, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f4.u32l;
    // 0x151F9B60: swc1        $f8, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f8.u32l;
    // 0x151F9B64: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x151F9B68: lwc1        $f6, 0x78($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X78);
    // 0x151F9B6C: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9B70: nop

    // 0x151F9B74: lwc1        $f8, 0x10($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X10);
    // 0x151F9B78: lwc1        $f10, 0x7C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X7C);
    // 0x151F9B7C: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9B80: nop

    // 0x151F9B84: swc1        $f4, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->f4.u32l;
    // 0x151F9B88: swc1        $f8, 0x34($t3)
    MEM_W(0X34, ctx->r11) = ctx->f8.u32l;
    // 0x151F9B8C: lwc1        $f4, 0x14($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X14);
    // 0x151F9B90: lwc1        $f6, 0x80($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X80);
    // 0x151F9B94: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9B98: nop

    // 0x151F9B9C: lwc1        $f8, 0x18($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X18);
    // 0x151F9BA0: lwc1        $f10, 0x84($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X84);
    // 0x151F9BA4: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9BA8: nop

    // 0x151F9BAC: swc1        $f4, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->f4.u32l;
    // 0x151F9BB0: swc1        $f8, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f8.u32l;
    // 0x151F9BB4: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x151F9BB8: lwc1        $f6, 0x88($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X88);
    // 0x151F9BBC: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151F9BC0: nop

    // 0x151F9BC4: lwc1        $f8, 0x20($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X20);
    // 0x151F9BC8: lwc1        $f10, 0x8C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8C);
    // 0x151F9BCC: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F9BD0: nop

    // 0x151F9BD4: swc1        $f4, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f4.u32l;
    // 0x151F9BD8: swc1        $f8, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f8.u32l;
    // 0x151F9BDC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x151F9BE0: jr          $ra
    // 0x151F9BE4: nop

    return;
    return;
    // 0x151F9BE4: nop

;}
RECOMP_FUNC void func_151F8870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F8870: andi        $t4, $t0, 0x7
    ctx->r12 = ctx->r8 & 0X7;
    // 0x151F8874: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x151F8878: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    // 0x151F887C: lbu         $t2, 0x1($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X1);
    // 0x151F8880: sll         $t1, $t5, 8
    ctx->r9 = S32(ctx->r13 << 8);
    // 0x151F8884: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x151F8888: sub         $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x151F888C: srlv        $t1, $t1, $t3
    ctx->r9 = S32(U32(ctx->r9) >> (ctx->r11 & 31));
    // 0x151F8890: andi        $t1, $t1, 0xFF
    ctx->r9 = ctx->r9 & 0XFF;
    // 0x151F8894: sll         $t3, $a2, 8
    ctx->r11 = S32(ctx->r6 << 8);
    // 0x151F8898: add         $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x151F889C: addi        $t2, $s5, 0x2200
    ctx->r10 = ADD32(ctx->r21, 0X2200);
    // 0x151F88A0: add         $t2, $t3, $t2
    ctx->r10 = ADD32(ctx->r11, ctx->r10);
    // 0x151F88A4: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x151F88A8: beq         $t2, $zero, L_151F88D4
    if (ctx->r10 == 0) {
        // 0x151F88AC: nop
    
            goto L_151F88D4;
    }
    // 0x151F88AC: nop

    // 0x151F88B0: add         $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x151F88B4: add         $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x151F88B8: srl         $t4, $t4, 3
    ctx->r12 = S32(U32(ctx->r12) >> 3);
    // 0x151F88BC: add         $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x151F88C0: add         $t2, $t3, $s5
    ctx->r10 = ADD32(ctx->r11, ctx->r21);
    // 0x151F88C4: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x151F88C8: srl         $t1, $t2, 4
    ctx->r9 = S32(U32(ctx->r10) >> 4);
    // 0x151F88CC: jr          $ra
    // 0x151F88D0: andi        $v0, $t2, 0xF
    ctx->r2 = ctx->r10 & 0XF;
    return;
    return;
    // 0x151F88D0: andi        $v0, $t2, 0xF
    ctx->r2 = ctx->r10 & 0XF;
L_151F88D4:
    // 0x151F88D4: add         $t7, $zero, $s0
    ctx->r15 = ADD32(0, ctx->r16);
    // 0x151F88D8: andi        $t1, $t0, 0x7
    ctx->r9 = ctx->r8 & 0X7;
    // 0x151F88DC: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x151F88E0: srlv        $t2, $t2, $t1
    ctx->r10 = S32(U32(ctx->r10) >> (ctx->r9 & 31));
    // 0x151F88E4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
L_151F88E8:
    // 0x151F88E8: and         $t4, $t5, $t2
    ctx->r12 = ctx->r13 & ctx->r10;
    // 0x151F88EC: beql        $t4, $zero, L_151F88F8
    if (ctx->r12 == 0) {
        // 0x151F88F0: lbu         $t4, 0x0($t7)
        ctx->r12 = MEM_BU(ctx->r15, 0X0);
            goto L_151F88F8;
    }
    goto skip_0;
    // 0x151F88F0: lbu         $t4, 0x0($t7)
    ctx->r12 = MEM_BU(ctx->r15, 0X0);
    skip_0:
    // 0x151F88F4: lbu         $t4, 0x1($t7)
    ctx->r12 = MEM_BU(ctx->r15, 0X1);
L_151F88F8:
    // 0x151F88F8: srl         $t2, $t2, 1
    ctx->r10 = S32(U32(ctx->r10) >> 1);
    // 0x151F88FC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x151F8900: bne         $t2, $zero, L_151F8914
    if (ctx->r10 != 0) {
        // 0x151F8904: add         $t7, $t7, $t4
        ctx->r15 = ADD32(ctx->r15, ctx->r12);
            goto L_151F8914;
    }
    // 0x151F8904: add         $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x151F8908: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x151F890C: addi        $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x151F8910: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
L_151F8914:
    // 0x151F8914: lb          $t1, 0x2($t7)
    ctx->r9 = MEM_B(ctx->r15, 0X2);
    // 0x151F8918: beq         $t1, $t6, L_151F88E8
    if (ctx->r9 == ctx->r14) {
        // 0x151F891C: addi        $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_151F88E8;
    }
    // 0x151F891C: addi        $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x151F8920: add         $v0, $zero, $t1
    ctx->r2 = ADD32(0, ctx->r9);
    // 0x151F8924: jr          $ra
    // 0x151F8928: lb          $t1, 0x3($t7)
    ctx->r9 = MEM_B(ctx->r15, 0X3);
    return;
    return;
    // 0x151F8928: lb          $t1, 0x3($t7)
    ctx->r9 = MEM_B(ctx->r15, 0X3);
;}
RECOMP_FUNC void func_15074C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15074C80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15074C84: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15074C88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15074C8C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15074C90: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x15074C94: lhu         $v0, 0x278($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X278);
    // 0x15074C98: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x15074C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15074CA0: bnel        $v0, $at, L_15074CB8
    if (ctx->r2 != ctx->r1) {
        // 0x15074CA4: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_15074CB8;
    }
    goto skip_0;
    // 0x15074CA4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    skip_0:
    // 0x15074CA8: jal         0x151942E8
    // 0x15074CAC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_151942E8(rdram, ctx);
        goto after_0;
    // 0x15074CAC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_0:
    // 0x15074CB0: lhu         $v0, 0x278($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X278);
    // 0x15074CB4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_15074CB8:
    // 0x15074CB8: beq         $v1, $v0, L_15074CD8
    if (ctx->r3 == ctx->r2) {
        // 0x15074CBC: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_15074CD8;
    }
    // 0x15074CBC: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x15074CC0: beq         $v0, $at, L_15074CD8
    if (ctx->r2 == ctx->r1) {
        // 0x15074CC4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15074CD8;
    }
    // 0x15074CC4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15074CC8: beq         $v0, $at, L_15074CD8
    if (ctx->r2 == ctx->r1) {
        // 0x15074CCC: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_15074CD8;
    }
    // 0x15074CCC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15074CD0: bnel        $v0, $at, L_15074D40
    if (ctx->r2 != ctx->r1) {
        // 0x15074CD4: lw          $t9, 0x3C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X3C);
            goto L_15074D40;
    }
    goto skip_1;
    // 0x15074CD4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    skip_1:
L_15074CD8:
    // 0x15074CD8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x15074CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15074CE0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x15074CE4: lbu         $t7, 0x1CA($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1CA);
    // 0x15074CE8: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x15074CEC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15074CF0: bnel        $t7, $zero, L_15074D3C
    if (ctx->r15 != 0) {
        // 0x15074CF4: sb          $zero, 0x1CA($s0)
        MEM_B(0X1CA, ctx->r16) = 0;
            goto L_15074D3C;
    }
    goto skip_2;
    // 0x15074CF4: sb          $zero, 0x1CA($s0)
    MEM_B(0X1CA, ctx->r16) = 0;
    skip_2:
    // 0x15074CF8: bne         $v1, $v0, L_15074D08
    if (ctx->r3 != ctx->r2) {
        // 0x15074CFC: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_15074D08;
    }
    // 0x15074CFC: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x15074D00: b           L_15074D2C
    // 0x15074D04: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
        goto L_15074D2C;
    // 0x15074D04: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
L_15074D08:
    // 0x15074D08: bnel        $v0, $at, L_15074D1C
    if (ctx->r2 != ctx->r1) {
        // 0x15074D0C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15074D1C;
    }
    goto skip_3;
    // 0x15074D0C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_3:
    // 0x15074D10: b           L_15074D2C
    // 0x15074D14: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
        goto L_15074D2C;
    // 0x15074D14: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    // 0x15074D18: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_15074D1C:
    // 0x15074D1C: bne         $v0, $at, L_15074D2C
    if (ctx->r2 != ctx->r1) {
        // 0x15074D20: addiu       $a2, $zero, 0x51
        ctx->r6 = ADD32(0, 0X51);
            goto L_15074D2C;
    }
    // 0x15074D20: addiu       $a2, $zero, 0x51
    ctx->r6 = ADD32(0, 0X51);
    // 0x15074D24: b           L_15074D2C
    // 0x15074D28: addiu       $a2, $zero, 0x39
    ctx->r6 = ADD32(0, 0X39);
        goto L_15074D2C;
    // 0x15074D28: addiu       $a2, $zero, 0x39
    ctx->r6 = ADD32(0, 0X39);
L_15074D2C:
    // 0x15074D2C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15074D30: jal         0x150335C8
    // 0x15074D34: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_150335C8(rdram, ctx);
        goto after_1;
    // 0x15074D34: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x15074D38: sb          $zero, 0x1CA($s0)
    MEM_B(0X1CA, ctx->r16) = 0;
L_15074D3C:
    // 0x15074D3C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_15074D40:
    // 0x15074D40: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x15074D44: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x15074D48: bnel        $t0, $at, L_15074DDC
    if (ctx->r8 != ctx->r1) {
        // 0x15074D4C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_15074DDC;
    }
    goto skip_4;
    // 0x15074D4C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_4:
    // 0x15074D50: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15074D54: jal         0x150484A0
    // 0x15074D58: lwc1        $f14, 0x3C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X3C);
    func_150484A0(rdram, ctx);
        goto after_2;
    // 0x15074D58: lwc1        $f14, 0x3C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X3C);
    after_2:
    // 0x15074D5C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x15074D60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15074D64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15074D68: lwc1        $f6, -0x5EFC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5EFC);
    // 0x15074D6C: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15074D70: lhu         $t2, 0x76($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X76);
    // 0x15074D74: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15074D78: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15074D7C: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x15074D80: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x15074D84: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x15074D88: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15074D8C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15074D90: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15074D94: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15074D98: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x15074D9C: subu        $a1, $t4, $t3
    ctx->r5 = SUB32(ctx->r12, ctx->r11);
    // 0x15074DA0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15074DA4: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15074DA8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15074DAC: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15074DB0: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x15074DB4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x15074DB8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15074DBC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x15074DC0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15074DC4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15074DC8: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x15074DCC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15074DD0: jal         0x15166118
    // 0x15074DD4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15166118(rdram, ctx);
        goto after_3;
    // 0x15074DD4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x15074DD8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15074DDC:
    // 0x15074DDC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15074DE0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15074DE4: jr          $ra
    // 0x15074DE8: nop

    return;
    return;
    // 0x15074DE8: nop

;}
RECOMP_FUNC void func_15100330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15100330: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15100334: jr          $ra
    // 0x15100338: nop

    return;
    return;
    // 0x15100338: nop

;}
RECOMP_FUNC void func_1513CF9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513CF9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513CFA0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1513CFA4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1513CFA8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1513CFAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513CFB0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513CFB4: lw          $t9, -0x60A0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X60A0);
    // 0x1513CFB8: jalr        $t9
    // 0x1513CFBC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1513CFBC: nop

    after_0:
    // 0x1513CFC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513CFC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513CFC8: jr          $ra
    // 0x1513CFCC: nop

    return;
    return;
    // 0x1513CFCC: nop

;}
RECOMP_FUNC void func_15195650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15195650: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15195654: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15195658: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1519565C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15195660: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15195664: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15195668: jal         0x151B01B8
    // 0x1519566C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_151B01B8(rdram, ctx);
        goto after_0;
    // 0x1519566C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x15195670: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15195674: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x15195678: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    // 0x1519567C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x15195680: jal         0x151B09BC
    // 0x15195684: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_151B09BC(rdram, ctx);
        goto after_1;
    // 0x15195684: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x15195688: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1519568C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15195690: jr          $ra
    // 0x15195694: nop

    return;
    return;
    // 0x15195694: nop

;}
RECOMP_FUNC void func_100173C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100173C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x100173C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100173CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x100173D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x100173D4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x100173D8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x100173DC: beq         $t7, $zero, L_10017418
    if (ctx->r15 == 0) {
        // 0x100173E0: nop
    
            goto L_10017418;
    }
    // 0x100173E0: nop

    // 0x100173E4: jal         0x10022DC0
    // 0x100173E8: nop

    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x100173E8: nop

    after_0:
    // 0x100173EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x100173F0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x100173F4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x100173F8: beq         $t9, $zero, L_10017410
    if (ctx->r25 == 0) {
        // 0x100173FC: nop
    
            goto L_10017410;
    }
    // 0x100173FC: nop

    // 0x10017400: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x10017404: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x10017408: lbu         $t2, 0x54($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X54);
    // 0x1001740C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_10017410:
    // 0x10017410: jal         0x10022DE0
    // 0x10017414: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    __osRestoreInt_recomp(rdram, ctx);
        goto after_1;
    // 0x10017414: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_10017418:
    // 0x10017418: b           L_10017428
    // 0x1001741C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_10017428;
    // 0x1001741C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x10017420: b           L_10017428
    // 0x10017424: nop

        goto L_10017428;
    // 0x10017424: nop

L_10017428:
    // 0x10017428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001742C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x10017430: jr          $ra
    // 0x10017434: nop

    return;
    return;
    // 0x10017434: nop

;}
RECOMP_FUNC void func_15007644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15007644: jr          $ra
    // 0x15007648: nop

    return;
    return;
    // 0x15007648: nop

;}
RECOMP_FUNC void func_151155C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151155C0: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x151155C4: lbu         $t9, 0x4F($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X4F);
    // 0x151155C8: lh          $t2, 0x12($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X12);
    // 0x151155CC: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x151155D0: sra         $a1, $v1, 24
    ctx->r5 = S32(SIGNED(ctx->r3) >> 24);
    // 0x151155D4: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x151155D8: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x151155DC: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x151155E0: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x151155E4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151155E8: andi        $t5, $t9, 0x4
    ctx->r13 = ctx->r25 & 0X4;
    // 0x151155EC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x151155F0: addiu       $a1, $t7, 0x1
    ctx->r5 = ADD32(ctx->r15, 0X1);
    // 0x151155F4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x151155F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151155FC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15115600: bne         $t5, $at, L_1511560C
    if (ctx->r13 != ctx->r1) {
        // 0x15115604: or          $t1, $t2, $zero
        ctx->r9 = ctx->r10 | 0;
            goto L_1511560C;
    }
    // 0x15115604: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
    // 0x15115608: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_1511560C:
    // 0x1511560C: lw          $v1, 0x7C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7C);
    // 0x15115610: bnel        $v1, $zero, L_15115624
    if (ctx->r3 != 0) {
        // 0x15115614: subu        $t6, $a2, $v1
        ctx->r14 = SUB32(ctx->r6, ctx->r3);
            goto L_15115624;
    }
    goto skip_0;
    // 0x15115614: subu        $t6, $a2, $v1
    ctx->r14 = SUB32(ctx->r6, ctx->r3);
    skip_0:
    // 0x15115618: sw          $t2, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r10;
    // 0x1511561C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x15115620: subu        $t6, $a2, $v1
    ctx->r14 = SUB32(ctx->r6, ctx->r3);
L_15115624:
    // 0x15115624: div         $zero, $t6, $v0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r2)));
    // 0x15115628: lw          $t4, 0x80($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X80);
    // 0x1511562C: mflo        $t3
    ctx->r11 = lo;
    // 0x15115630: bne         $v0, $zero, L_1511563C
    if (ctx->r2 != 0) {
        // 0x15115634: nop
    
            goto L_1511563C;
    }
    // 0x15115634: nop

    // 0x15115638: break       7
    do_break(353457720);
L_1511563C:
    // 0x1511563C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15115640: bne         $v0, $at, L_15115654
    if (ctx->r2 != ctx->r1) {
        // 0x15115644: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15115654;
    }
    // 0x15115644: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15115648: bne         $t6, $at, L_15115654
    if (ctx->r14 != ctx->r1) {
        // 0x1511564C: nop
    
            goto L_15115654;
    }
    // 0x1511564C: nop

    // 0x15115650: break       6
    do_break(353457744);
L_15115654:
    // 0x15115654: bne         $t4, $zero, L_151156CC
    if (ctx->r12 != 0) {
        // 0x15115658: nop
    
            goto L_151156CC;
    }
    // 0x15115658: nop

    // 0x1511565C: bne         $v1, $t2, L_15115678
    if (ctx->r3 != ctx->r10) {
        // 0x15115660: subu        $v0, $t2, $t3
        ctx->r2 = SUB32(ctx->r10, ctx->r11);
            goto L_15115678;
    }
    // 0x15115660: subu        $v0, $t2, $t3
    ctx->r2 = SUB32(ctx->r10, ctx->r11);
    // 0x15115664: beq         $a3, $zero, L_151156CC
    if (ctx->r7 == 0) {
        // 0x15115668: nop
    
            goto L_151156CC;
    }
    // 0x15115668: nop

    // 0x1511566C: sw          $a1, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r5;
    // 0x15115670: b           L_151156CC
    // 0x15115674: or          $t4, $a1, $zero
    ctx->r12 = ctx->r5 | 0;
        goto L_151156CC;
    // 0x15115674: or          $t4, $a1, $zero
    ctx->r12 = ctx->r5 | 0;
L_15115678:
    // 0x15115678: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x1511567C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15115680: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x15115684: beq         $at, $zero, L_151156A0
    if (ctx->r1 == 0) {
        // 0x15115688: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_151156A0;
    }
    // 0x15115688: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x1511568C: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x15115690: beq         $at, $zero, L_151156B0
    if (ctx->r1 == 0) {
        // 0x15115694: nop
    
            goto L_151156B0;
    }
    // 0x15115694: nop

    // 0x15115698: b           L_151156B0
    // 0x1511569C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_151156B0;
    // 0x1511569C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_151156A0:
    // 0x151156A0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151156A4: beq         $at, $zero, L_151156B0
    if (ctx->r1 == 0) {
        // 0x151156A8: nop
    
            goto L_151156B0;
    }
    // 0x151156A8: nop

    // 0x151156AC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_151156B0:
    // 0x151156B0: beq         $t0, $zero, L_151156C4
    if (ctx->r8 == 0) {
        // 0x151156B4: negu        $t4, $a1
        ctx->r12 = SUB32(0, ctx->r5);
            goto L_151156C4;
    }
    // 0x151156B4: negu        $t4, $a1
    ctx->r12 = SUB32(0, ctx->r5);
    // 0x151156B8: sh          $v0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r2;
    // 0x151156BC: b           L_151156CC
    // 0x151156C0: lw          $t4, 0x80($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X80);
        goto L_151156CC;
    // 0x151156C0: lw          $t4, 0x80($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X80);
L_151156C4:
    // 0x151156C4: sh          $v1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r3;
    // 0x151156C8: sw          $t4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r12;
L_151156CC:
    // 0x151156CC: blez        $t4, L_1511573C
    if (SIGNED(ctx->r12) <= 0) {
        // 0x151156D0: nop
    
            goto L_1511573C;
    }
    // 0x151156D0: nop

    // 0x151156D4: lh          $t5, 0x12($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X12);
    // 0x151156D8: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
    // 0x151156DC: addiu       $t9, $t4, -0x1
    ctx->r25 = ADD32(ctx->r12, -0X1);
    // 0x151156E0: addu        $v0, $t5, $t3
    ctx->r2 = ADD32(ctx->r13, ctx->r11);
    // 0x151156E4: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x151156E8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151156EC: slt         $at, $t8, $a2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x151156F0: beq         $at, $zero, L_1511570C
    if (ctx->r1 == 0) {
        // 0x151156F4: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_1511570C;
    }
    // 0x151156F4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x151156F8: slt         $at, $t7, $a2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x151156FC: beq         $at, $zero, L_1511571C
    if (ctx->r1 == 0) {
        // 0x15115700: nop
    
            goto L_1511571C;
    }
    // 0x15115700: nop

    // 0x15115704: b           L_1511571C
    // 0x15115708: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_1511571C;
    // 0x15115708: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_1511570C:
    // 0x1511570C: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15115710: beq         $at, $zero, L_1511571C
    if (ctx->r1 == 0) {
        // 0x15115714: nop
    
            goto L_1511571C;
    }
    // 0x15115714: nop

    // 0x15115718: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_1511571C:
    // 0x1511571C: beq         $t0, $zero, L_15115734
    if (ctx->r8 == 0) {
        // 0x15115720: or          $t4, $t9, $zero
        ctx->r12 = ctx->r25 | 0;
            goto L_15115734;
    }
    // 0x15115720: or          $t4, $t9, $zero
    ctx->r12 = ctx->r25 | 0;
    // 0x15115724: sh          $v0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r2;
    // 0x15115728: sw          $a1, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r5;
    // 0x1511572C: b           L_1511573C
    // 0x15115730: or          $t4, $a1, $zero
    ctx->r12 = ctx->r5 | 0;
        goto L_1511573C;
    // 0x15115730: or          $t4, $a1, $zero
    ctx->r12 = ctx->r5 | 0;
L_15115734:
    // 0x15115734: sh          $a2, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r6;
    // 0x15115738: sw          $t9, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r25;
L_1511573C:
    // 0x1511573C: bgez        $t4, L_15115748
    if (SIGNED(ctx->r12) >= 0) {
        // 0x15115740: addiu       $t5, $t4, 0x1
        ctx->r13 = ADD32(ctx->r12, 0X1);
            goto L_15115748;
    }
    // 0x15115740: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x15115744: sw          $t5, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r13;
L_15115748:
    // 0x15115748: lh          $t6, 0x12($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X12);
    // 0x1511574C: subu        $t7, $t6, $t1
    ctx->r15 = SUB32(ctx->r14, ctx->r9);
    // 0x15115750: sh          $t7, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r15;
    // 0x15115754: jr          $ra
    // 0x15115758: nop

    return;
    return;
    // 0x15115758: nop

;}
RECOMP_FUNC void func_150C4120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C4120: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x150C4124: sw          $a1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r5;
    // 0x150C4128: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x150C412C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150C4130: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150C4134: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150C4138: sw          $a2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r6;
    // 0x150C413C: sw          $a3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r7;
    // 0x150C4140: sw          $a0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r4;
    // 0x150C4144: lbu         $t8, 0x3B($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X3B);
    // 0x150C4148: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150C414C: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x150C4150: sw          $zero, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = 0;
    // 0x150C4154: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x150C4158: sh          $t9, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r25;
    // 0x150C415C: sb          $zero, 0xEA($sp)
    MEM_B(0XEA, ctx->r29) = 0;
    // 0x150C4160: sw          $zero, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = 0;
    // 0x150C4164: sb          $t8, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r24;
    // 0x150C4168: lbu         $t0, 0x4($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X4);
    // 0x150C416C: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x150C4170: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x150C4174: bne         $t0, $at, L_150C418C
    if (ctx->r8 != ctx->r1) {
        // 0x150C4178: addiu       $a2, $zero, 0x53
        ctx->r6 = ADD32(0, 0X53);
            goto L_150C418C;
    }
    // 0x150C4178: addiu       $a2, $zero, 0x53
    ctx->r6 = ADD32(0, 0X53);
    // 0x150C417C: addiu       $t1, $zero, 0x54
    ctx->r9 = ADD32(0, 0X54);
    // 0x150C4180: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150C4184: sh          $t1, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r9;
    // 0x150C4188: sb          $t2, 0xEA($sp)
    MEM_B(0XEA, ctx->r29) = ctx->r10;
L_150C418C:
    // 0x150C418C: bne         $a1, $v0, L_150C419C
    if (ctx->r5 != ctx->r2) {
        // 0x150C4190: addiu       $a3, $zero, -0x1
        ctx->r7 = ADD32(0, -0X1);
            goto L_150C419C;
    }
    // 0x150C4190: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150C4194: b           L_150C41A0
    // 0x150C4198: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
        goto L_150C41A0;
    // 0x150C4198: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
L_150C419C:
    // 0x150C419C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_150C41A0:
    // 0x150C41A0: bne         $a1, $v0, L_150C41B0
    if (ctx->r5 != ctx->r2) {
        // 0x150C41A4: sll         $a0, $v1, 16
        ctx->r4 = S32(ctx->r3 << 16);
            goto L_150C41B0;
    }
    // 0x150C41A4: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x150C41A8: b           L_150C41B4
    // 0x150C41AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150C41B4;
    // 0x150C41AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C41B0:
    // 0x150C41B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150C41B4:
    // 0x150C41B4: lbu         $t6, 0xFB($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XFB);
    // 0x150C41B8: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x150C41BC: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x150C41C0: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x150C41C4: addiu       $t5, $zero, 0x1C
    ctx->r13 = ADD32(0, 0X1C);
    // 0x150C41C8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150C41CC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150C41D0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x150C41D4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150C41D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x150C41DC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150C41E0: jal         0x15149130
    // 0x150C41E4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x150C41E4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_0:
    // 0x150C41E8: beq         $v0, $zero, L_150C4494
    if (ctx->r2 == 0) {
        // 0x150C41EC: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150C4494;
    }
    // 0x150C41EC: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150C41F0: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x150C41F4: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x150C41F8: jal         0x10022EC0
    // 0x150C41FC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150C41FC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_1:
    // 0x150C4200: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x150C4204: addiu       $t9, $t9, 0x340
    ctx->r25 = ADD32(ctx->r25, 0X340);
    // 0x150C4208: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x150C420C: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x150C4210: addiu       $t8, $sp, 0x3C
    ctx->r24 = ADD32(ctx->r29, 0X3C);
    // 0x150C4214: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x150C4218: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x150C421C: lw          $t2, 0xC($t9)
    ctx->r10 = MEM_W(ctx->r25, 0XC);
    // 0x150C4220: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x150C4224: sw          $t2, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r10;
    // 0x150C4228: jal         0x150ADA20
    // 0x150C422C: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150C422C: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    after_2:
    // 0x150C4230: jal         0x150ADA20
    // 0x150C4234: sb          $v0, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150C4234: sb          $v0, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r2;
    after_3:
    // 0x150C4238: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x150C423C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150C4240: sb          $v0, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r2;
    // 0x150C4244: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x150C4248: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x150C424C: jal         0x150ADA20
    // 0x150C4250: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150C4250: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x150C4254: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150C4258: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150C425C: mfhi        $t5
    ctx->r13 = hi;
    // 0x150C4260: addiu       $t6, $t5, 0x5
    ctx->r14 = ADD32(ctx->r13, 0X5);
    // 0x150C4264: jal         0x150ADA20
    // 0x150C4268: sb          $t6, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150C4268: sb          $t6, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r14;
    after_5:
    // 0x150C426C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150C4270: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150C4274: mfhi        $t7
    ctx->r15 = hi;
    // 0x150C4278: addiu       $t1, $t7, 0x5
    ctx->r9 = ADD32(ctx->r15, 0X5);
    // 0x150C427C: jal         0x150ADA68
    // 0x150C4280: sb          $t1, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r9;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150C4280: sb          $t1, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r9;
    after_6:
    // 0x150C4284: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150C4288: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C428C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C4290: lwc1        $f8, 0x3AC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3AC);
    // 0x150C4294: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150C4298: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150C429C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150C42A0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150C42A4: jal         0x150ADA68
    // 0x150C42A8: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150C42A8: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x150C42AC: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150C42B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C42B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C42B8: lwc1        $f8, 0x3B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3B0);
    // 0x150C42BC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150C42C0: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150C42C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150C42C8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150C42CC: jal         0x150ADA20
    // 0x150C42D0: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150C42D0: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x150C42D4: andi        $t0, $v0, 0x3
    ctx->r8 = ctx->r2 & 0X3;
    // 0x150C42D8: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x150C42DC: addu        $t9, $sp, $t8
    ctx->r25 = ADD32(ctx->r29, ctx->r24);
    // 0x150C42E0: lw          $t9, 0x3C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3C);
    // 0x150C42E4: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x150C42E8: addiu       $v1, $v1, 0x5480
    ctx->r3 = ADD32(ctx->r3, 0X5480);
    // 0x150C42EC: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150C42F0: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x150C42F4: addiu       $t2, $zero, 0x2203
    ctx->r10 = ADD32(0, 0X2203);
    // 0x150C42F8: ori         $t3, $t3, 0x5
    ctx->r11 = ctx->r11 | 0X5;
    // 0x150C42FC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150C4300: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150C4304: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150C4308: sh          $t2, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r10;
    // 0x150C430C: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x150C4310: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x150C4314: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x150C4318: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x150C431C: sb          $zero, 0x70($sp)
    MEM_B(0X70, ctx->r29) = 0;
    // 0x150C4320: sb          $zero, 0x71($sp)
    MEM_B(0X71, ctx->r29) = 0;
    // 0x150C4324: sb          $zero, 0x72($sp)
    MEM_B(0X72, ctx->r29) = 0;
    // 0x150C4328: sb          $t4, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r12;
    // 0x150C432C: sb          $zero, 0x74($sp)
    MEM_B(0X74, ctx->r29) = 0;
    // 0x150C4330: sb          $zero, 0x75($sp)
    MEM_B(0X75, ctx->r29) = 0;
    // 0x150C4334: sb          $zero, 0x76($sp)
    MEM_B(0X76, ctx->r29) = 0;
    // 0x150C4338: sb          $t5, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r13;
    // 0x150C433C: sb          $t6, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r14;
    // 0x150C4340: addiu       $t7, $sp, 0x8C
    ctx->r15 = ADD32(ctx->r29, 0X8C);
    // 0x150C4344: sb          $t9, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r25;
    // 0x150C4348: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150C434C: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x150C4350: addiu       $t9, $sp, 0x98
    ctx->r25 = ADD32(ctx->r29, 0X98);
    // 0x150C4354: addiu       $t5, $sp, 0xA4
    ctx->r13 = ADD32(ctx->r29, 0XA4);
    // 0x150C4358: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x150C435C: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150C4360: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150C4364: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150C4368: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150C436C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150C4370: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x150C4374: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x150C4378: sw          $t4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r12;
    // 0x150C437C: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150C4380: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x150C4384: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150C4388: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x150C438C: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x150C4390: sw          $t1, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r9;
    // 0x150C4394: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150C4398: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x150C439C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C43A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C43A4: sh          $t7, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r15;
    // 0x150C43A8: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
    // 0x150C43AC: jal         0x150ADA20
    // 0x150C43B0: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150C43B0: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x150C43B4: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x150C43B8: beq         $t8, $zero, L_150C43C8
    if (ctx->r24 == 0) {
        // 0x150C43BC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_150C43C8;
    }
    // 0x150C43BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150C43C0: b           L_150C43C8
    // 0x150C43C4: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_150C43C8;
    // 0x150C43C4: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_150C43C8:
    // 0x150C43C8: jal         0x150ADA20
    // 0x150C43CC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150C43CC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_10:
    // 0x150C43D0: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x150C43D4: beq         $t3, $zero, L_150C43E4
    if (ctx->r11 == 0) {
        // 0x150C43D8: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_150C43E4;
    }
    // 0x150C43D8: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x150C43DC: b           L_150C43E8
    // 0x150C43E0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_150C43E8;
    // 0x150C43E0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_150C43E4:
    // 0x150C43E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C43E8:
    // 0x150C43E8: or          $t9, $v0, $v1
    ctx->r25 = ctx->r2 | ctx->r3;
    // 0x150C43EC: ori         $t4, $t9, 0xC000
    ctx->r12 = ctx->r25 | 0XC000;
    // 0x150C43F0: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x150C43F4: sw          $t4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r12;
    // 0x150C43F8: sh          $t0, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r8;
    // 0x150C43FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C4400: lwc1        $f8, 0x3B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3B4);
    // 0x150C4404: lw          $t0, 0xFC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XFC);
    // 0x150C4408: lbu         $t4, 0xFB($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XFB);
    // 0x150C440C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150C4410: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150C4414: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x150C4418: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x150C441C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150C4420: addiu       $t3, $zero, 0x26
    ctx->r11 = ADD32(0, 0X26);
    // 0x150C4424: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150C4428: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150C442C: sh          $t6, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r14;
    // 0x150C4430: sh          $t5, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r13;
    // 0x150C4434: sb          $t1, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r9;
    // 0x150C4438: sb          $t7, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r15;
    // 0x150C443C: sb          $t8, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r24;
    // 0x150C4440: sb          $t3, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r11;
    // 0x150C4444: sb          $t2, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = ctx->r10;
    // 0x150C4448: sb          $zero, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = 0;
    // 0x150C444C: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x150C4450: sb          $t9, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r25;
    // 0x150C4454: sh          $zero, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = 0;
    // 0x150C4458: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x150C445C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150C4460: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150C4464: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x150C4468: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    // 0x150C446C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150C4470: jal         0x15130280
    // 0x150C4474: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_15130280(rdram, ctx);
        goto after_11;
    // 0x150C4474: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_11:
    // 0x150C4478: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x150C447C: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x150C4480: beq         $v0, $zero, L_150C4494
    if (ctx->r2 == 0) {
        // 0x150C4484: sw          $v0, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r2;
            goto L_150C4494;
    }
    // 0x150C4484: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x150C4488: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x150C448C: jal         0x10022EC0
    // 0x150C4490: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x150C4490: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_12:
L_150C4494:
    // 0x150C4494: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150C4498: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    // 0x150C449C: jr          $ra
    // 0x150C44A0: nop

    return;
    return;
    // 0x150C44A0: nop

;}
RECOMP_FUNC void func_1507A838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507A83C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507A840: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507A844: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507A848: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507A84C: lbu         $t6, 0x1891($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1891);
    // 0x1507A850: lbu         $t8, 0x1CA($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1CA);
    // 0x1507A854: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507A858: bnel        $t6, $t8, L_1507A86C
    if (ctx->r14 != ctx->r24) {
        // 0x1507A85C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507A86C;
    }
    goto skip_0;
    // 0x1507A85C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1507A860: jal         0x15075400
    // 0x1507A864: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x1507A864: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x1507A868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507A86C:
    // 0x1507A86C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507A870: jr          $ra
    // 0x1507A874: nop

    return;
    return;
    // 0x1507A874: nop

;}
RECOMP_FUNC void func_15002248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15002248: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x1500224C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x15002250: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x15002254: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x15002258: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x1500225C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x15002260: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x15002264: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x15002268: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x1500226C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x15002270: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x15002274: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x15002278: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x1500227C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x15002280: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15002284: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x15002288: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x1500228C: lw          $t6, 0x2FA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA0);
    // 0x15002290: subu        $t9, $s2, $s3
    ctx->r25 = SUB32(ctx->r18, ctx->r19);
    // 0x15002294: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15002298: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x1500229C: subu        $t6, $s4, $s5
    ctx->r14 = SUB32(ctx->r20, ctx->r21);
    // 0x150022A0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x150022A4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150022A8: lui         $at, 0x46FA
    ctx->r1 = S32(0X46FA << 16);
    // 0x150022AC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150022B0: sllv        $v0, $t8, $t7
    ctx->r2 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x150022B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150022B8: addiu       $s7, $v0, -0x1
    ctx->r23 = ADD32(ctx->r2, -0X1);
    // 0x150022BC: negu        $fp, $v0
    ctx->r30 = SUB32(0, ctx->r2);
    // 0x150022C0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150022C4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150022C8: jal         0x150492CC
    // 0x150022CC: nop

    func_150492CC(rdram, ctx);
        goto after_0;
    // 0x150022CC: nop

    after_0:
    // 0x150022D0: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x150022D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150022D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150022DC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x150022E0: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x150022E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150022E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150022EC: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x150022F0: jal         0x10003C40
    // 0x150022F4: sw          $v0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r2;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x150022F4: sw          $v0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r2;
    after_1:
    // 0x150022F8: lw          $t8, 0xE4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE4);
    // 0x150022FC: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x15002300: lw          $t5, 0xDC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XDC);
    // 0x15002304: lw          $t2, 0xBC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XBC);
    // 0x15002308: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    // 0x1500230C: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x15002310: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    // 0x15002314: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x15002318: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x1500231C: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x15002320: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15002324: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x15002328: bne         $at, $zero, L_15002520
    if (ctx->r1 != 0) {
        // 0x1500232C: addiu       $t0, $s0, 0x2
        ctx->r8 = ADD32(ctx->r16, 0X2);
            goto L_15002520;
    }
    // 0x1500232C: addiu       $t0, $s0, 0x2
    ctx->r8 = ADD32(ctx->r16, 0X2);
    // 0x15002330: lui         $s0, 0x8000
    ctx->r16 = S32(0X8000 << 16);
    // 0x15002334: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15002338: ori         $s0, $s0, 0x1
    ctx->r16 = ctx->r16 | 0X1;
    // 0x1500233C: addiu       $s1, $sp, 0x98
    ctx->r17 = ADD32(ctx->r29, 0X98);
    // 0x15002340: lhu         $s6, 0x0($t0)
    ctx->r22 = MEM_HU(ctx->r8, 0X0);
L_15002344:
    // 0x15002344: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15002348: lw          $t9, -0x41C4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X41C4);
    // 0x1500234C: sll         $t6, $s6, 2
    ctx->r14 = S32(ctx->r22 << 2);
    // 0x15002350: subu        $t6, $t6, $s6
    ctx->r14 = SUB32(ctx->r14, ctx->r22);
    // 0x15002354: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15002358: addiu       $v0, $sp, 0x74
    ctx->r2 = ADD32(ctx->r29, 0X74);
    // 0x1500235C: addu        $v1, $t9, $t6
    ctx->r3 = ADD32(ctx->r25, ctx->r14);
L_15002360:
    // 0x15002360: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x15002364: sltu        $at, $a0, $s0
    ctx->r1 = ctx->r4 < ctx->r16 ? 1 : 0;
    // 0x15002368: bnel        $at, $zero, L_150023D0
    if (ctx->r1 != 0) {
        // 0x1500236C: swc1        $f20, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
            goto L_150023D0;
    }
    goto skip_0;
    // 0x1500236C: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
    skip_0:
    // 0x15002370: lh          $t8, 0x0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X0);
    // 0x15002374: addu        $t7, $s3, $s2
    ctx->r15 = ADD32(ctx->r19, ctx->r18);
    // 0x15002378: sra         $t9, $t7, 1
    ctx->r25 = S32(SIGNED(ctx->r15) >> 1);
    // 0x1500237C: subu        $t6, $t8, $t9
    ctx->r14 = SUB32(ctx->r24, ctx->r25);
    // 0x15002380: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x15002384: nop

    // 0x15002388: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1500238C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x15002390: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15002394: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x15002398: addu        $t7, $s5, $s4
    ctx->r15 = ADD32(ctx->r21, ctx->r20);
    // 0x1500239C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x150023A0: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x150023A4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150023A8: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x150023AC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x150023B0: lh          $t6, 0x4($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X4);
    // 0x150023B4: subu        $t9, $t6, $t8
    ctx->r25 = SUB32(ctx->r14, ctx->r24);
    // 0x150023B8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x150023BC: nop

    // 0x150023C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150023C4: b           L_150023D8
    // 0x150023C8: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
        goto L_150023D8;
    // 0x150023C8: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x150023CC: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
L_150023D0:
    // 0x150023D0: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x150023D4: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
L_150023D8:
    // 0x150023D8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x150023DC: bne         $v0, $s1, L_15002360
    if (ctx->r2 != ctx->r17) {
        // 0x150023E0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_15002360;
    }
    // 0x150023E0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x150023E4: addiu       $t7, $sp, 0x74
    ctx->r15 = ADD32(ctx->r29, 0X74);
    // 0x150023E8: addiu       $t8, $t7, 0x24
    ctx->r24 = ADD32(ctx->r15, 0X24);
    // 0x150023EC: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
L_150023F0:
    // 0x150023F0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150023F4: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x150023F8: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x150023FC: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x15002400: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x15002404: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x15002408: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x1500240C: bne         $t7, $t8, L_150023F0
    if (ctx->r15 != ctx->r24) {
        // 0x15002410: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_150023F0;
    }
    // 0x15002410: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x15002414: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x15002418: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x1500241C: sw          $t2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r10;
    // 0x15002420: sw          $t3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r11;
    // 0x15002424: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x15002428: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x1500242C: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x15002430: jal         0x15049260
    // 0x15002434: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    func_15049260(rdram, ctx);
        goto after_2;
    // 0x15002434: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    after_2:
    // 0x15002438: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x1500243C: addiu       $t1, $t1, -0x41BC
    ctx->r9 = ADD32(ctx->r9, -0X41BC);
    // 0x15002440: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x15002444: lw          $t2, 0xBC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XBC);
    // 0x15002448: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
    // 0x1500244C: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x15002450: lw          $t5, 0xDC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XDC);
    // 0x15002454: bne         $v0, $zero, L_1500250C
    if (ctx->r2 != 0) {
        // 0x15002458: lw          $ra, 0xA4($sp)
        ctx->r31 = MEM_W(ctx->r29, 0XA4);
            goto L_1500250C;
    }
    // 0x15002458: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x1500245C: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x15002460: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x15002464: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x15002468: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x1500246C: beq         $ra, $zero, L_150024D0
    if (ctx->r31 == 0) {
        // 0x15002470: sh          $s6, 0x0($t7)
        MEM_H(0X0, ctx->r15) = ctx->r22;
            goto L_150024D0;
    }
    // 0x15002470: sh          $s6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r22;
    // 0x15002474: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x15002478: sll         $v1, $s6, 2
    ctx->r3 = S32(ctx->r22 << 2);
    // 0x1500247C: lw          $t7, 0x0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X0);
    // 0x15002480: addu        $a0, $t9, $v1
    ctx->r4 = ADD32(ctx->r25, ctx->r3);
    // 0x15002484: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x15002488: subu        $t8, $t6, $s7
    ctx->r24 = SUB32(ctx->r14, ctx->r23);
    // 0x1500248C: and         $v0, $t8, $fp
    ctx->r2 = ctx->r24 & ctx->r30;
    // 0x15002490: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x15002494: beql        $at, $zero, L_150024AC
    if (ctx->r1 == 0) {
        // 0x15002498: lh          $t6, 0x2($a0)
        ctx->r14 = MEM_H(ctx->r4, 0X2);
            goto L_150024AC;
    }
    goto skip_1;
    // 0x15002498: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    skip_1:
    // 0x1500249C: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    // 0x150024A0: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x150024A4: addu        $a0, $t9, $v1
    ctx->r4 = ADD32(ctx->r25, ctx->r3);
    // 0x150024A8: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
L_150024AC:
    // 0x150024AC: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x150024B0: addu        $t8, $t6, $s7
    ctx->r24 = ADD32(ctx->r14, ctx->r23);
    // 0x150024B4: and         $t7, $t8, $fp
    ctx->r15 = ctx->r24 & ctx->r30;
    // 0x150024B8: addu        $v0, $t7, $s7
    ctx->r2 = ADD32(ctx->r15, ctx->r23);
    // 0x150024BC: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x150024C0: beql        $at, $zero, L_15002510
    if (ctx->r1 == 0) {
        // 0x150024C4: lw          $t9, 0xB8($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XB8);
            goto L_15002510;
    }
    goto skip_2;
    // 0x150024C4: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    skip_2:
    // 0x150024C8: b           L_1500250C
    // 0x150024CC: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
        goto L_1500250C;
    // 0x150024CC: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
L_150024D0:
    // 0x150024D0: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x150024D4: sll         $v1, $s6, 2
    ctx->r3 = S32(ctx->r22 << 2);
    // 0x150024D8: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
    // 0x150024DC: addu        $t8, $t6, $v1
    ctx->r24 = ADD32(ctx->r14, ctx->r3);
    // 0x150024E0: lh          $t7, 0x0($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X0);
    // 0x150024E4: subu        $t9, $t7, $s7
    ctx->r25 = SUB32(ctx->r15, ctx->r23);
    // 0x150024E8: and         $t6, $t9, $fp
    ctx->r14 = ctx->r25 & ctx->r30;
    // 0x150024EC: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x150024F0: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x150024F4: addu        $t7, $t8, $v1
    ctx->r15 = ADD32(ctx->r24, ctx->r3);
    // 0x150024F8: lh          $t9, 0x2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X2);
    // 0x150024FC: addu        $t6, $t9, $s7
    ctx->r14 = ADD32(ctx->r25, ctx->r23);
    // 0x15002500: and         $t8, $t6, $fp
    ctx->r24 = ctx->r14 & ctx->r30;
    // 0x15002504: addu        $t7, $t8, $s7
    ctx->r15 = ADD32(ctx->r24, ctx->r23);
    // 0x15002508: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
L_1500250C:
    // 0x1500250C: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
L_15002510:
    // 0x15002510: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x15002514: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x15002518: bnel        $t3, $t9, L_15002344
    if (ctx->r11 != ctx->r25) {
        // 0x1500251C: lhu         $s6, 0x0($t0)
        ctx->r22 = MEM_HU(ctx->r8, 0X0);
            goto L_15002344;
    }
    goto skip_3;
    // 0x1500251C: lhu         $s6, 0x0($t0)
    ctx->r22 = MEM_HU(ctx->r8, 0X0);
    skip_3:
L_15002520:
    // 0x15002520: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x15002524: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x15002528: sh          $t2, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r10;
    // 0x1500252C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x15002530: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x15002534: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x15002538: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x1500253C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x15002540: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x15002544: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x15002548: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x1500254C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x15002550: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x15002554: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x15002558: jr          $ra
    // 0x1500255C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x1500255C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_15033838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15033838: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1503383C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15033840: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15033844: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15033848: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1503384C: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x15033850: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15033854: lbu         $v0, 0x6($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X6);
    // 0x15033858: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1503385C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x15033860: bnel        $v0, $at, L_15033888
    if (ctx->r2 != ctx->r1) {
        // 0x15033864: addiu       $at, $zero, 0x89
        ctx->r1 = ADD32(0, 0X89);
            goto L_15033888;
    }
    goto skip_0;
    // 0x15033864: addiu       $at, $zero, 0x89
    ctx->r1 = ADD32(0, 0X89);
    skip_0:
    // 0x15033868: lhu         $t8, 0x84($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X84);
    // 0x1503386C: addiu       $at, $zero, 0x165
    ctx->r1 = ADD32(0, 0X165);
    // 0x15033870: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x15033874: bnel        $t8, $at, L_150338F4
    if (ctx->r24 != ctx->r1) {
        // 0x15033878: lw          $t6, 0x38($t5)
        ctx->r14 = MEM_W(ctx->r13, 0X38);
            goto L_150338F4;
    }
    goto skip_1;
    // 0x15033878: lw          $t6, 0x38($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X38);
    skip_1:
    // 0x1503387C: b           L_150338F0
    // 0x15033880: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_150338F0;
    // 0x15033880: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15033884: addiu       $at, $zero, 0x89
    ctx->r1 = ADD32(0, 0X89);
L_15033888:
    // 0x15033888: bne         $v0, $at, L_150338D8
    if (ctx->r2 != ctx->r1) {
        // 0x1503388C: lw          $t3, 0x24($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X24);
            goto L_150338D8;
    }
    // 0x1503388C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x15033890: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x15033894: addiu       $at, $zero, 0x221
    ctx->r1 = ADD32(0, 0X221);
    // 0x15033898: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x1503389C: lhu         $v0, 0x84($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X84);
    // 0x150338A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x150338A4: beq         $v0, $at, L_150338BC
    if (ctx->r2 == ctx->r1) {
        // 0x150338A8: addiu       $at, $zero, 0x223
        ctx->r1 = ADD32(0, 0X223);
            goto L_150338BC;
    }
    // 0x150338A8: addiu       $at, $zero, 0x223
    ctx->r1 = ADD32(0, 0X223);
    // 0x150338AC: beq         $v0, $at, L_150338BC
    if (ctx->r2 == ctx->r1) {
        // 0x150338B0: addiu       $at, $zero, 0x31B
        ctx->r1 = ADD32(0, 0X31B);
            goto L_150338BC;
    }
    // 0x150338B0: addiu       $at, $zero, 0x31B
    ctx->r1 = ADD32(0, 0X31B);
    // 0x150338B4: bnel        $v0, $at, L_150338F4
    if (ctx->r2 != ctx->r1) {
        // 0x150338B8: lw          $t6, 0x38($t5)
        ctx->r14 = MEM_W(ctx->r13, 0X38);
            goto L_150338F4;
    }
    goto skip_2;
    // 0x150338B8: lw          $t6, 0x38($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X38);
    skip_2:
L_150338BC:
    // 0x150338BC: lw          $t1, 0x31C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X31C);
    // 0x150338C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150338C4: lbu         $t2, 0x198($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X198);
    // 0x150338C8: bnel        $t2, $at, L_150338F4
    if (ctx->r10 != ctx->r1) {
        // 0x150338CC: lw          $t6, 0x38($t5)
        ctx->r14 = MEM_W(ctx->r13, 0X38);
            goto L_150338F4;
    }
    goto skip_3;
    // 0x150338CC: lw          $t6, 0x38($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X38);
    skip_3:
    // 0x150338D0: b           L_150338F0
    // 0x150338D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_150338F0;
    // 0x150338D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_150338D8:
    // 0x150338D8: lhu         $t4, 0x84($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X84);
    // 0x150338DC: addiu       $at, $zero, 0x157
    ctx->r1 = ADD32(0, 0X157);
    // 0x150338E0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x150338E4: bnel        $t4, $at, L_150338F4
    if (ctx->r12 != ctx->r1) {
        // 0x150338E8: lw          $t6, 0x38($t5)
        ctx->r14 = MEM_W(ctx->r13, 0X38);
            goto L_150338F4;
    }
    goto skip_4;
    // 0x150338E8: lw          $t6, 0x38($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X38);
    skip_4:
    // 0x150338EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_150338F0:
    // 0x150338F0: lw          $t6, 0x38($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X38);
L_150338F4:
    // 0x150338F4: bne         $t6, $zero, L_15033970
    if (ctx->r14 != 0) {
        // 0x150338F8: nop
    
            goto L_15033970;
    }
    // 0x150338F8: nop

    // 0x150338FC: beq         $v1, $zero, L_150339B4
    if (ctx->r3 == 0) {
        // 0x15033900: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_150339B4;
    }
    // 0x15033900: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x15033904: lw          $v0, 0x31C($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X31C);
    // 0x15033908: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1503390C: lbu         $t8, 0x197($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X197);
    // 0x15033910: bnel        $t8, $zero, L_15033924
    if (ctx->r24 != 0) {
        // 0x15033914: lhu         $t9, 0x8A($v0)
        ctx->r25 = MEM_HU(ctx->r2, 0X8A);
            goto L_15033924;
    }
    goto skip_5;
    // 0x15033914: lhu         $t9, 0x8A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X8A);
    skip_5:
    // 0x15033918: bnel        $a2, $at, L_150339B8
    if (ctx->r6 != ctx->r1) {
        // 0x1503391C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150339B8;
    }
    goto skip_6;
    // 0x1503391C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x15033920: lhu         $t9, 0x8A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X8A);
L_15033924:
    // 0x15033924: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x15033928: andi        $t0, $t9, 0x2000
    ctx->r8 = ctx->r25 & 0X2000;
    // 0x1503392C: bnel        $t0, $at, L_150339B8
    if (ctx->r8 != ctx->r1) {
        // 0x15033930: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150339B8;
    }
    goto skip_7;
    // 0x15033930: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_7:
    // 0x15033934: lhu         $t1, 0x19E($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X19E);
    // 0x15033938: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1503393C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x15033940: bne         $t1, $zero, L_150339B4
    if (ctx->r9 != 0) {
        // 0x15033944: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_150339B4;
    }
    // 0x15033944: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15033948: sw          $t2, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r10;
    // 0x1503394C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15033950: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15033954: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x15033958: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1503395C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x15033960: jal         0x151026BC
    // 0x15033964: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151026BC(rdram, ctx);
        goto after_0;
    // 0x15033964: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x15033968: b           L_150339B8
    // 0x1503396C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150339B8;
    // 0x1503396C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15033970:
    // 0x15033970: beq         $v1, $zero, L_150339A4
    if (ctx->r3 == 0) {
        // 0x15033974: lw          $t6, 0x24($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X24);
            goto L_150339A4;
    }
    // 0x15033974: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x15033978: lw          $v0, 0x31C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X31C);
    // 0x1503397C: lhu         $t7, 0x8A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8A);
    // 0x15033980: andi        $t8, $t7, 0x2000
    ctx->r24 = ctx->r15 & 0X2000;
    // 0x15033984: beql        $t8, $zero, L_150339A8
    if (ctx->r24 == 0) {
        // 0x15033988: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_150339A8;
    }
    goto skip_8;
    // 0x15033988: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    skip_8:
    // 0x1503398C: lbu         $t9, 0x197($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X197);
    // 0x15033990: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15033994: bnel        $t9, $zero, L_150339B8
    if (ctx->r25 != 0) {
        // 0x15033998: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150339B8;
    }
    goto skip_9;
    // 0x15033998: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_9:
    // 0x1503399C: beql        $a2, $at, L_150339B8
    if (ctx->r6 == ctx->r1) {
        // 0x150339A0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150339B8;
    }
    goto skip_10;
    // 0x150339A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_10:
L_150339A4:
    // 0x150339A4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
L_150339A8:
    // 0x150339A8: sw          $zero, 0x38($t0)
    MEM_W(0X38, ctx->r8) = 0;
    // 0x150339AC: jal         0x151027E8
    // 0x150339B0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_151027E8(rdram, ctx);
        goto after_1;
    // 0x150339B0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
L_150339B4:
    // 0x150339B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150339B8:
    // 0x150339B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150339BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150339C0: jr          $ra
    // 0x150339C4: nop

    return;
    return;
    // 0x150339C4: nop

;}
RECOMP_FUNC void func_150D032C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D032C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x150D0330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D0334: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x150D0338: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x150D033C: addiu       $t6, $t6, 0x880
    ctx->r14 = ADD32(ctx->r14, 0X880);
    // 0x150D0340: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x150D0344: addiu       $a3, $a0, 0x28
    ctx->r7 = ADD32(ctx->r4, 0X28);
    // 0x150D0348: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x150D034C: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x150D0350: lbu         $at, 0x4($t6)
    ctx->r1 = MEM_BU(ctx->r14, 0X4);
    // 0x150D0354: sb          $at, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r1;
    // 0x150D0358: lbu         $t0, 0x30($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X30);
    // 0x150D035C: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x150D0360: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150D0364: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x150D0368: beq         $t1, $zero, L_150D037C
    if (ctx->r9 == 0) {
        // 0x150D036C: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_150D037C;
    }
    // 0x150D036C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x150D0370: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150D0374: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x150D0378: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_150D037C:
    // 0x150D037C: lbu         $t2, 0x14($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X14);
    // 0x150D0380: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150D0384: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x150D0388: bgez        $t2, L_150D039C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x150D038C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_150D039C;
    }
    // 0x150D038C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150D0390: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D0394: nop

    // 0x150D0398: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_150D039C:
    // 0x150D039C: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x150D03A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150D03A4: bc1fl       L_150D0428
    if (!c1cs) {
        // 0x150D03A8: sw          $v0, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r2;
            goto L_150D0428;
    }
    goto skip_0;
    // 0x150D03A8: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    skip_0:
    // 0x150D03AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150D03B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D03B4: lwc1        $f16, 0x888($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X888);
    // 0x150D03B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150D03BC: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150D03C0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150D03C4: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x150D03C8: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x150D03CC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150D03D0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x150D03D4: nop

    // 0x150D03D8: bc1fl       L_150D0428
    if (!c1cs) {
        // 0x150D03DC: sw          $v0, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r2;
            goto L_150D0428;
    }
    goto skip_1;
    // 0x150D03DC: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    skip_1:
    // 0x150D03E0: lh          $t3, 0x4($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X4);
L_150D03E4:
    // 0x150D03E4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x150D03E8: sh          $t4, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r12;
    // 0x150D03EC: lh          $t5, 0x4($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X4);
    // 0x150D03F0: lbu         $v1, 0x14($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X14);
    // 0x150D03F4: slt         $at, $v1, $t5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x150D03F8: beql        $at, $zero, L_150D0408
    if (ctx->r1 == 0) {
        // 0x150D03FC: lwc1        $f8, 0x0($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
            goto L_150D0408;
    }
    goto skip_2;
    // 0x150D03FC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    skip_2:
    // 0x150D0400: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x150D0404: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
L_150D0408:
    // 0x150D0408: sub.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x150D040C: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x150D0410: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150D0414: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x150D0418: nop

    // 0x150D041C: bc1tl       L_150D03E4
    if (c1cs) {
        // 0x150D0420: lh          $t3, 0x4($v0)
        ctx->r11 = MEM_H(ctx->r2, 0X4);
            goto L_150D03E4;
    }
    goto skip_3;
    // 0x150D0420: lh          $t3, 0x4($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X4);
    skip_3:
    // 0x150D0424: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
L_150D0428:
    // 0x150D0428: jal         0x10022EC0
    // 0x150D042C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x150D042C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x150D0430: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x150D0434: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x150D0438: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x150D043C: lbu         $t8, 0x15($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X15);
    // 0x150D0440: lh          $a2, 0x4($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X4);
    // 0x150D0444: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x150D0448: addu        $t6, $a3, $t7
    ctx->r14 = ADD32(ctx->r7, ctx->r15);
    // 0x150D044C: jal         0x10022EC0
    // 0x150D0450: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150D0450: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    after_1:
    // 0x150D0454: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x150D0458: addiu       $v1, $sp, 0x28
    ctx->r3 = ADD32(ctx->r29, 0X28);
    // 0x150D045C: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x150D0460: lh          $t0, 0x4($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X4);
    // 0x150D0464: addiu       $t2, $zero, 0xBB
    ctx->r10 = ADD32(0, 0XBB);
    // 0x150D0468: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150D046C: addu        $t1, $v1, $t0
    ctx->r9 = ADD32(ctx->r3, ctx->r8);
    // 0x150D0470: sb          $t9, 0x4($t1)
    MEM_B(0X4, ctx->r9) = ctx->r25;
    // 0x150D0474: lh          $t3, 0x4($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X4);
    // 0x150D0478: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150D047C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150D0480: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x150D0484: sb          $t2, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r10;
    // 0x150D0488: lh          $t5, 0x4($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X4);
    // 0x150D048C: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    // 0x150D0490: addu        $t8, $v1, $t5
    ctx->r24 = ADD32(ctx->r3, ctx->r13);
    // 0x150D0494: jal         0x1504332C
    // 0x150D0498: sb          $zero, 0x6($t8)
    MEM_B(0X6, ctx->r24) = 0;
    func_1504332C(rdram, ctx);
        goto after_2;
    // 0x150D0498: sb          $zero, 0x6($t8)
    MEM_B(0X6, ctx->r24) = 0;
    after_2:
    // 0x150D049C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x150D04A0: addiu       $a1, $zero, 0xBE
    ctx->r5 = ADD32(0, 0XBE);
    // 0x150D04A4: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x150D04A8: jal         0x15042D94
    // 0x150D04AC: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_15042D94(rdram, ctx);
        goto after_3;
    // 0x150D04AC: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x150D04B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150D04B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D04B8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x150D04BC: jr          $ra
    // 0x150D04C0: nop

    return;
    return;
    // 0x150D04C0: nop

;}
RECOMP_FUNC void func_15014004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15014004: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x15014008: bgez        $v1, L_15014018
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1501400C: slti        $at, $v1, 0x6
        ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_15014018;
    }
    // 0x1501400C: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x15014010: jr          $ra
    // 0x15014014: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15014014: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15014018:
    // 0x15014018: bne         $at, $zero, L_15014028
    if (ctx->r1 != 0) {
        // 0x1501401C: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_15014028;
    }
    // 0x1501401C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x15014020: jr          $ra
    // 0x15014024: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15014024: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15014028:
    // 0x15014028: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1501402C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15014030: sw          $a0, 0x900($at)
    MEM_W(0X900, ctx->r1) = ctx->r4;
    // 0x15014034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15014038: jr          $ra
    // 0x1501403C: nop

    return;
    return;
    // 0x1501403C: nop

;}
RECOMP_FUNC void func_1600030C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1600030C: jr          $ra
    // 0x16000310: nop

    return;
    return;
    // 0x16000310: nop

;}
RECOMP_FUNC void func_15161334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15161334: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15161338: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1516133C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x15161340: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x15161344: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15161348: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1516134C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15161350: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x15161354: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x15161358: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1516135C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15161360: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15161364: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15161368: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1516136C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15161370: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15161374: lwc1        $f16, 0x6AE0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6AE0);
    // 0x15161378: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x1516137C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15161380: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15161384: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x15161388: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1516138C: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x15161390: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x15161394: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x15161398: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x1516139C: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
    // 0x151613A0: sb          $t6, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r14;
    // 0x151613A4: sh          $t7, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r15;
    // 0x151613A8: sb          $t8, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r24;
    // 0x151613AC: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x151613B0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x151613B4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x151613B8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x151613BC: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x151613C0: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x151613C4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x151613C8: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x151613CC: jal         0x1516037C
    // 0x151613D0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_1516037C(rdram, ctx);
        goto after_0;
    // 0x151613D0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x151613D4: beq         $v0, $zero, L_151613F4
    if (ctx->r2 == 0) {
        // 0x151613D8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151613F4;
    }
    // 0x151613D8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151613DC: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x151613E0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x151613E4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x151613E8: jal         0x10022EC0
    // 0x151613EC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151613EC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x151613F0: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
L_151613F4:
    // 0x151613F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151613F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151613FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15161400: jr          $ra
    // 0x15161404: nop

    return;
    return;
    // 0x15161404: nop

;}
RECOMP_FUNC void func_15002F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15002F40: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x15002F44: beq         $a0, $at, L_15002F54
    if (ctx->r4 == ctx->r1) {
        // 0x15002F48: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_15002F54;
    }
    // 0x15002F48: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x15002F4C: bne         $a0, $at, L_15002F68
    if (ctx->r4 != ctx->r1) {
        // 0x15002F50: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_15002F68;
    }
    // 0x15002F50: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
L_15002F54:
    // 0x15002F54: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x15002F58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15002F5C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15002F60: jr          $ra
    // 0x15002F64: swc1        $f4, -0x419C($at)
    MEM_W(-0X419C, ctx->r1) = ctx->f4.u32l;
    return;
    return;
    // 0x15002F64: swc1        $f4, -0x419C($at)
    MEM_W(-0X419C, ctx->r1) = ctx->f4.u32l;
L_15002F68:
    // 0x15002F68: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x15002F6C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15002F70: beql        $t6, $zero, L_15002F90
    if (ctx->r14 == 0) {
        // 0x15002F74: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_15002F90;
    }
    goto skip_0;
    // 0x15002F74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_0:
    // 0x15002F78: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x15002F7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15002F80: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15002F84: jr          $ra
    // 0x15002F88: swc1        $f6, -0x419C($at)
    MEM_W(-0X419C, ctx->r1) = ctx->f6.u32l;
    return;
    return;
    // 0x15002F88: swc1        $f6, -0x419C($at)
    MEM_W(-0X419C, ctx->r1) = ctx->f6.u32l;
    // 0x15002F8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_15002F90:
    // 0x15002F90: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15002F94: swc1        $f8, -0x419C($at)
    MEM_W(-0X419C, ctx->r1) = ctx->f8.u32l;
    // 0x15002F98: jr          $ra
    // 0x15002F9C: nop

    return;
    return;
    // 0x15002F9C: nop

;}
RECOMP_FUNC void func_10009CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10009CBC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x10009CC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x10009CC4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x10009CC8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x10009CCC: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x10009CD0: lui         $a3, 0x8004
    ctx->r7 = S32(0X8004 << 16);
    // 0x10009CD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10009CD8: lw          $t0, 0x0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X0);
    // 0x10009CDC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x10009CE0: addiu       $a3, $a3, 0x6A0
    ctx->r7 = ADD32(ctx->r7, 0X6A0);
    // 0x10009CE4: andi        $t7, $t0, 0x1
    ctx->r15 = ctx->r8 & 0X1;
    // 0x10009CE8: beq         $t7, $zero, L_10009FA8
    if (ctx->r15 == 0) {
        // 0x10009CEC: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_10009FA8;
    }
    // 0x10009CEC: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x10009CF0: bne         $t8, $zero, L_10009D04
    if (ctx->r24 != 0) {
        // 0x10009CF4: andi        $t1, $t0, 0xFF
        ctx->r9 = ctx->r8 & 0XFF;
            goto L_10009D04;
    }
    // 0x10009CF4: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x10009CF8: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x10009CFC: b           L_10009D10
    // 0x10009D00: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
        goto L_10009D10;
    // 0x10009D00: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_10009D04:
    // 0x10009D04: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x10009D08: and         $t9, $t1, $at
    ctx->r25 = ctx->r9 & ctx->r1;
    // 0x10009D0C: sll         $t1, $t9, 6
    ctx->r9 = S32(ctx->r25 << 6);
L_10009D10:
    // 0x10009D10: lw          $v1, 0x8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X8);
    // 0x10009D14: bnel        $v1, $zero, L_10009DFC
    if (ctx->r3 != 0) {
        // 0x10009D18: lw          $t3, 0x0($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X0);
            goto L_10009DFC;
    }
    goto skip_0;
    // 0x10009D18: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x10009D1C: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x10009D20: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x10009D24: beq         $v1, $zero, L_10009D60
    if (ctx->r3 == 0) {
        // 0x10009D28: nop
    
            goto L_10009D60;
    }
    // 0x10009D28: nop

    // 0x10009D2C: lb          $t3, 0x14($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X14);
L_10009D30:
    // 0x10009D30: bnel        $t3, $zero, L_10009D58
    if (ctx->r11 != 0) {
        // 0x10009D34: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_10009D58;
    }
    goto skip_1;
    // 0x10009D34: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x10009D38: lbu         $t4, 0x16($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X16);
    // 0x10009D3C: bnel        $t4, $zero, L_10009D58
    if (ctx->r12 != 0) {
        // 0x10009D40: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_10009D58;
    }
    goto skip_2;
    // 0x10009D40: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x10009D44: lbu         $t5, 0x15($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X15);
    // 0x10009D48: bnel        $v0, $t5, L_10009D58
    if (ctx->r2 != ctx->r13) {
        // 0x10009D4C: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_10009D58;
    }
    goto skip_3;
    // 0x10009D4C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x10009D50: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x10009D54: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_10009D58:
    // 0x10009D58: bnel        $v1, $zero, L_10009D30
    if (ctx->r3 != 0) {
        // 0x10009D5C: lb          $t3, 0x14($v1)
        ctx->r11 = MEM_B(ctx->r3, 0X14);
            goto L_10009D30;
    }
    goto skip_4;
    // 0x10009D5C: lb          $t3, 0x14($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X14);
    skip_4:
L_10009D60:
    // 0x10009D60: beq         $a2, $zero, L_10009E28
    if (ctx->r6 == 0) {
        // 0x10009D64: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_10009E28;
    }
    // 0x10009D64: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x10009D68: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x10009D6C: lw          $t6, 0x8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X8);
    // 0x10009D70: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x10009D74: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x10009D78: lw          $a0, 0x10($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X10);
    // 0x10009D7C: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x10009D80: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x10009D84: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x10009D88: jal         0x100043B4
    // 0x10009D8C: sw          $a2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r6;
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x10009D8C: sw          $a2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r6;
    after_0:
    // 0x10009D90: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x10009D94: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x10009D98: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x10009D9C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x10009DA0: lui         $a3, 0x8004
    ctx->r7 = S32(0X8004 << 16);
    // 0x10009DA4: addiu       $a3, $a3, 0x6A0
    ctx->r7 = ADD32(ctx->r7, 0X6A0);
    // 0x10009DA8: sw          $zero, 0x10($a2)
    MEM_W(0X10, ctx->r6) = 0;
    // 0x10009DAC: sw          $zero, 0xC($a2)
    MEM_W(0XC, ctx->r6) = 0;
    // 0x10009DB0: lw          $t7, 0x4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X4);
    // 0x10009DB4: bnel        $a2, $t7, L_10009DCC
    if (ctx->r6 != ctx->r15) {
        // 0x10009DB8: lw          $v0, 0x0($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X0);
            goto L_10009DCC;
    }
    goto skip_5;
    // 0x10009DB8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    skip_5:
    // 0x10009DBC: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x10009DC0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10009DC4: sw          $t8, 0x6A4($at)
    MEM_W(0X6A4, ctx->r1) = ctx->r24;
    // 0x10009DC8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
L_10009DCC:
    // 0x10009DCC: beql        $v0, $zero, L_10009DE0
    if (ctx->r2 == 0) {
        // 0x10009DD0: lw          $v0, 0x4($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X4);
            goto L_10009DE0;
    }
    goto skip_6;
    // 0x10009DD0: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    skip_6:
    // 0x10009DD4: lw          $t9, 0x4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X4);
    // 0x10009DD8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x10009DDC: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
L_10009DE0:
    // 0x10009DE0: beq         $v0, $zero, L_10009E28
    if (ctx->r2 == 0) {
        // 0x10009DE4: nop
    
            goto L_10009E28;
    }
    // 0x10009DE4: nop

    // 0x10009DE8: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x10009DEC: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x10009DF0: b           L_10009E28
    // 0x10009DF4: nop

        goto L_10009E28;
    // 0x10009DF4: nop

    // 0x10009DF8: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
L_10009DFC:
    // 0x10009DFC: sw          $t3, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r11;
    // 0x10009E00: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x10009E04: beql        $v0, $zero, L_10009E18
    if (ctx->r2 == 0) {
        // 0x10009E08: lw          $v0, 0x4($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X4);
            goto L_10009E18;
    }
    goto skip_7;
    // 0x10009E08: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    skip_7:
    // 0x10009E0C: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x10009E10: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x10009E14: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
L_10009E18:
    // 0x10009E18: beq         $v0, $zero, L_10009E28
    if (ctx->r2 == 0) {
        // 0x10009E1C: nop
    
            goto L_10009E28;
    }
    // 0x10009E1C: nop

    // 0x10009E20: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x10009E24: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_10009E28:
    // 0x10009E28: beq         $v1, $zero, L_10009FA0
    if (ctx->r3 == 0) {
        // 0x10009E2C: nop
    
            goto L_10009FA0;
    }
    // 0x10009E2C: nop

    // 0x10009E30: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x10009E34: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x10009E38: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x10009E3C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x10009E40: beql        $a0, $zero, L_10009E78
    if (ctx->r4 == 0) {
        // 0x10009E44: sw          $v1, 0xC($a3)
        MEM_W(0XC, ctx->r7) = ctx->r3;
            goto L_10009E78;
    }
    goto skip_8;
    // 0x10009E44: sw          $v1, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r3;
    skip_8:
    // 0x10009E48: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x10009E4C: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x10009E50: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x10009E54: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x10009E58: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x10009E5C: beql        $a1, $zero, L_10009E6C
    if (ctx->r5 == 0) {
        // 0x10009E60: sw          $v1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r3;
            goto L_10009E6C;
    }
    goto skip_9;
    // 0x10009E60: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    skip_9:
    // 0x10009E64: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x10009E68: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_10009E6C:
    // 0x10009E6C: b           L_10009E84
    // 0x10009E70: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
        goto L_10009E84;
    // 0x10009E70: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x10009E74: sw          $v1, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r3;
L_10009E78:
    // 0x10009E78: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x10009E7C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x10009E80: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
L_10009E84:
    // 0x10009E84: sb          $zero, 0x14($v1)
    MEM_B(0X14, ctx->r3) = 0;
    // 0x10009E88: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x10009E8C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x10009E90: addiu       $a0, $t1, 0xF
    ctx->r4 = ADD32(ctx->r9, 0XF);
    // 0x10009E94: sb          $t7, 0x16($v1)
    MEM_B(0X16, ctx->r3) = ctx->r15;
    // 0x10009E98: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x10009E9C: sb          $zero, 0x15($v1)
    MEM_B(0X15, ctx->r3) = 0;
    // 0x10009EA0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x10009EA4: sw          $t8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r24;
    // 0x10009EA8: lw          $t9, -0x51B0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X51B0);
    // 0x10009EAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10009EB0: sltiu       $at, $t9, 0x28
    ctx->r1 = ctx->r25 < 0X28 ? 1 : 0;
    // 0x10009EB4: beq         $at, $zero, L_10009EF8
    if (ctx->r1 == 0) {
        // 0x10009EB8: addiu       $at, $zero, -0x10
        ctx->r1 = ADD32(0, -0X10);
            goto L_10009EF8;
    }
    // 0x10009EB8: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x10009EBC: and         $t2, $a0, $at
    ctx->r10 = ctx->r4 & ctx->r1;
    // 0x10009EC0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x10009EC4: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x10009EC8: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x10009ECC: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x10009ED0: jal         0x10003C40
    // 0x10009ED4: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x10009ED4: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_1:
    // 0x10009ED8: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x10009EDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x10009EE0: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x10009EE4: jal         0x100226F0
    // 0x10009EE8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x10009EE8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x10009EEC: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x10009EF0: b           L_10009EFC
    // 0x10009EF4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
        goto L_10009EFC;
    // 0x10009EF4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
L_10009EF8:
    // 0x10009EF8: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
L_10009EFC:
    // 0x10009EFC: lw          $a0, 0x10($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X10);
    // 0x10009F00: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x10009F04: beq         $a0, $zero, L_10009FA0
    if (ctx->r4 == 0) {
        // 0x10009F08: nop
    
            goto L_10009FA0;
    }
    // 0x10009F08: nop

    // 0x10009F0C: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x10009F10: jal         0x10023D20
    // 0x10009F14: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x10009F14: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_3:
    // 0x10009F18: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x10009F1C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x10009F20: jal         0x10022D10
    // 0x10009F24: lw          $a0, 0x10($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X10);
    osInvalDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x10009F24: lw          $a0, 0x10($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X10);
    after_4:
    // 0x10009F28: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x10009F2C: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x10009F30: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x10009F34: lw          $v0, -0x51B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X51B0);
    // 0x10009F38: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x10009F3C: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x10009F40: srl         $a3, $t0, 5
    ctx->r7 = S32(U32(ctx->r8) >> 5);
    // 0x10009F44: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x10009F48: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x10009F4C: and         $t5, $a3, $at
    ctx->r13 = ctx->r7 & ctx->r1;
    // 0x10009F50: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x10009F54: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x10009F58: subu        $t3, $t3, $v0
    ctx->r11 = SUB32(ctx->r11, ctx->r2);
    // 0x10009F5C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x10009F60: addiu       $t8, $t8, 0x16F0
    ctx->r24 = ADD32(ctx->r24, 0X16F0);
    // 0x10009F64: addiu       $t4, $t4, 0x1330
    ctx->r12 = ADD32(ctx->r12, 0X1330);
    // 0x10009F68: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10009F6C: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x10009F70: sw          $t9, -0x51B0($at)
    MEM_W(-0X51B0, ctx->r1) = ctx->r25;
    // 0x10009F74: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x10009F78: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x10009F7C: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x10009F80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x10009F84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10009F88: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x10009F8C: jal         0x10024920
    // 0x10009F90: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    osPiStartDma_recomp(rdram, ctx);
        goto after_5;
    // 0x10009F90: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_5:
    // 0x10009F94: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x10009F98: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x10009F9C: sw          $v1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r3;
L_10009FA0:
    // 0x10009FA0: b           L_10009FEC
    // 0x10009FA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10009FEC;
    // 0x10009FA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_10009FA8:
    // 0x10009FA8: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x10009FAC: lbu         $v0, 0x15($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X15);
    // 0x10009FB0: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x10009FB4: beq         $v0, $zero, L_10009FE8
    if (ctx->r2 == 0) {
        // 0x10009FB8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_10009FE8;
    }
    // 0x10009FB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x10009FBC: bne         $t4, $v1, L_10009FE0
    if (ctx->r12 != ctx->r3) {
        // 0x10009FC0: nop
    
            goto L_10009FE0;
    }
    // 0x10009FC0: nop

    // 0x10009FC4: bne         $v1, $v0, L_10009FD4
    if (ctx->r3 != ctx->r2) {
        // 0x10009FC8: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_10009FD4;
    }
    // 0x10009FC8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x10009FCC: b           L_10009FE0
    // 0x10009FD0: sb          $t5, 0x15($t0)
    MEM_B(0X15, ctx->r8) = ctx->r13;
        goto L_10009FE0;
    // 0x10009FD0: sb          $t5, 0x15($t0)
    MEM_B(0X15, ctx->r8) = ctx->r13;
L_10009FD4:
    // 0x10009FD4: lb          $t6, 0x14($t0)
    ctx->r14 = MEM_B(ctx->r8, 0X14);
    // 0x10009FD8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x10009FDC: sb          $t7, 0x14($t0)
    MEM_B(0X14, ctx->r8) = ctx->r15;
L_10009FE0:
    // 0x10009FE0: b           L_10009FEC
    // 0x10009FE4: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
        goto L_10009FEC;
    // 0x10009FE4: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
L_10009FE8:
    // 0x10009FE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_10009FEC:
    // 0x10009FEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x10009FF0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x10009FF4: jr          $ra
    // 0x10009FF8: nop

    return;
    return;
    // 0x10009FF8: nop

;}
RECOMP_FUNC void func_150EEDA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EEDA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150EEDAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150EEDB0: lbu         $t6, 0x5($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5);
    // 0x150EEDB4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150EEDB8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x150EEDBC: beq         $t6, $at, L_150EEDE4
    if (ctx->r14 == ctx->r1) {
        // 0x150EEDC0: lui         $a2, 0x437A
        ctx->r6 = S32(0X437A << 16);
            goto L_150EEDE4;
    }
    // 0x150EEDC0: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x150EEDC4: jal         0x151045E0
    // 0x150EEDC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_151045E0(rdram, ctx);
        goto after_0;
    // 0x150EEDC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150EEDCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150EEDD0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x150EEDD4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150EEDD8: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x150EEDDC: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
    // 0x150EEDE0: sb          $t8, 0x125($a0)
    MEM_B(0X125, ctx->r4) = ctx->r24;
L_150EEDE4:
    // 0x150EEDE4: jal         0x15052590
    // 0x150EEDE8: nop

    func_15052590(rdram, ctx);
        goto after_1;
    // 0x150EEDE8: nop

    after_1:
    // 0x150EEDEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150EEDF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150EEDF4: jr          $ra
    // 0x150EEDF8: nop

    return;
    return;
    // 0x150EEDF8: nop

;}
RECOMP_FUNC void func_1509F5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509F5A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1509F5AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1509F5B0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1509F5B4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x1509F5B8: subu        $a1, $a3, $a0
    ctx->r5 = SUB32(ctx->r7, ctx->r4);
    // 0x1509F5BC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1509F5C0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x1509F5C4: jal         0x1000F568
    // 0x1509F5C8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_1000F568(rdram, ctx);
        goto after_0;
    // 0x1509F5C8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x1509F5CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1509F5D0: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
    // 0x1509F5D4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1509F5D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1509F5DC: jal         0x10010F30
    // 0x1509F5E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_1;
    // 0x1509F5E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x1509F5E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1509F5E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1509F5EC: jr          $ra
    // 0x1509F5F0: nop

    return;
    return;
    // 0x1509F5F0: nop

;}
RECOMP_FUNC void func_1506E2CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E2CC: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x1506E2D0: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x1506E2D4: lui         $fp, 0x800D
    ctx->r30 = S32(0X800D << 16);
    // 0x1506E2D8: addiu       $fp, $fp, 0x154C
    ctx->r30 = ADD32(ctx->r30, 0X154C);
    // 0x1506E2DC: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x1506E2E0: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x1506E2E4: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x1506E2E8: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x1506E2EC: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x1506E2F0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x1506E2F4: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x1506E2F8: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x1506E2FC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x1506E300: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x1506E304: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x1506E308: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x1506E30C: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x1506E310: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1506E314: addiu       $s0, $sp, 0x84
    ctx->r16 = ADD32(ctx->r29, 0X84);
    // 0x1506E318: lw          $t6, 0x1D4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1D4);
    // 0x1506E31C: addiu       $s7, $sp, 0x9C
    ctx->r23 = ADD32(ctx->r29, 0X9C);
    // 0x1506E320: addiu       $s6, $sp, 0x90
    ctx->r22 = ADD32(ctx->r29, 0X90);
    // 0x1506E324: beq         $t6, $zero, L_1506E430
    if (ctx->r14 == 0) {
        // 0x1506E328: addiu       $s5, $sp, 0xB4
        ctx->r21 = ADD32(ctx->r29, 0XB4);
            goto L_1506E430;
    }
    // 0x1506E328: addiu       $s5, $sp, 0xB4
    ctx->r21 = ADD32(ctx->r29, 0XB4);
    // 0x1506E32C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1506E330: lwc1        $f24, 0x180($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X180);
    // 0x1506E334: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x1506E338: addiu       $s4, $sp, 0x84
    ctx->r20 = ADD32(ctx->r29, 0X84);
    // 0x1506E33C: addiu       $s3, $sp, 0xC4
    ctx->r19 = ADD32(ctx->r29, 0XC4);
    // 0x1506E340: addiu       $s2, $sp, 0xC8
    ctx->r18 = ADD32(ctx->r29, 0XC8);
    // 0x1506E344: addiu       $s1, $sp, 0xCC
    ctx->r17 = ADD32(ctx->r29, 0XCC);
    // 0x1506E348: swc1        $f20, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f20.u32l;
    // 0x1506E34C: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x1506E350: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
L_1506E354:
    // 0x1506E354: swc1        $f22, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f22.u32l;
    // 0x1506E358: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x1506E35C: lw          $a0, 0x1D4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D4);
    // 0x1506E360: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x1506E364: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x1506E368: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x1506E36C: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    // 0x1506E370: jal         0x150A7960
    // 0x1506E374: lw          $a3, 0xC4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC4);
    func_150A7960(rdram, ctx);
        goto after_0;
    // 0x1506E374: lw          $a3, 0xC4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC4);
    after_0:
    // 0x1506E378: lwc1        $f4, 0xCC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x1506E37C: swc1        $f24, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f24.u32l;
    // 0x1506E380: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x1506E384: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x1506E388: bne         $s0, $s4, L_1506E3A0
    if (ctx->r16 != ctx->r20) {
        // 0x1506E38C: swc1        $f6, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
            goto L_1506E3A0;
    }
    // 0x1506E38C: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x1506E390: neg.s       $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = -ctx->f20.fl;
    // 0x1506E394: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x1506E398: b           L_1506E3D0
    // 0x1506E39C: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
        goto L_1506E3D0;
    // 0x1506E39C: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
L_1506E3A0:
    // 0x1506E3A0: bne         $s0, $s6, L_1506E3BC
    if (ctx->r16 != ctx->r22) {
        // 0x1506E3A4: nop
    
            goto L_1506E3BC;
    }
    // 0x1506E3A4: nop

    // 0x1506E3A8: neg.s       $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = -ctx->f20.fl;
    // 0x1506E3AC: neg.s       $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = -ctx->f20.fl;
    // 0x1506E3B0: swc1        $f10, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f10.u32l;
    // 0x1506E3B4: b           L_1506E3D0
    // 0x1506E3B8: swc1        $f16, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f16.u32l;
        goto L_1506E3D0;
    // 0x1506E3B8: swc1        $f16, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f16.u32l;
L_1506E3BC:
    // 0x1506E3BC: bnel        $s0, $s7, L_1506E3D4
    if (ctx->r16 != ctx->r23) {
        // 0x1506E3C0: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_1506E3D4;
    }
    goto skip_0;
    // 0x1506E3C0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x1506E3C4: neg.s       $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = -ctx->f20.fl;
    // 0x1506E3C8: swc1        $f20, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f20.u32l;
    // 0x1506E3CC: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
L_1506E3D0:
    // 0x1506E3D0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_1506E3D4:
    // 0x1506E3D4: bnel        $s0, $s5, L_1506E354
    if (ctx->r16 != ctx->r21) {
        // 0x1506E3D8: lw          $t7, 0x0($fp)
        ctx->r15 = MEM_W(ctx->r30, 0X0);
            goto L_1506E354;
    }
    goto skip_1;
    // 0x1506E3D8: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    skip_1:
    // 0x1506E3DC: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x1506E3E0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1506E3E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506E3E8: lwc1        $f4, 0x14C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14C);
    // 0x1506E3EC: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1506E3F0: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1506E3F4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1506E3F8: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x1506E3FC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x1506E400: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1506E404: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x1506E408: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x1506E40C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1506E410: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1506E414: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1506E418: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x1506E41C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1506E420: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1506E424: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x1506E428: jal         0x151700D8
    // 0x1506E42C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_151700D8(rdram, ctx);
        goto after_1;
    // 0x1506E42C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_1:
L_1506E430:
    // 0x1506E430: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x1506E434: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x1506E438: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x1506E43C: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x1506E440: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x1506E444: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x1506E448: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x1506E44C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x1506E450: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x1506E454: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x1506E458: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x1506E45C: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x1506E460: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x1506E464: jr          $ra
    // 0x1506E468: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    return;
    // 0x1506E468: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_1507E908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507E908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507E90C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507E910: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1507E914: jal         0x150849A0
    // 0x1507E918: nop

    func_150849A0(rdram, ctx);
        goto after_0;
    // 0x1507E918: nop

    after_0:
    // 0x1507E91C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1507E920: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507E924: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x1507E928: lw          $v1, 0x1C90($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1C90);
    // 0x1507E92C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1507E930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507E934: beq         $v1, $zero, L_1507E960
    if (ctx->r3 == 0) {
        // 0x1507E938: nop
    
            goto L_1507E960;
    }
    // 0x1507E938: nop

    // 0x1507E93C: lw          $a0, -0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, -0X8);
    // 0x1507E940: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x1507E944: addiu       $v1, $v1, -0x8
    ctx->r3 = ADD32(ctx->r3, -0X8);
    // 0x1507E948: beq         $a0, $zero, L_1507E960
    if (ctx->r4 == 0) {
        // 0x1507E94C: sll         $t8, $t7, 2
        ctx->r24 = S32(ctx->r15 << 2);
            goto L_1507E960;
    }
    // 0x1507E94C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1507E950: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1507E954: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x1507E958: b           L_1507E960
    // 0x1507E95C: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
        goto L_1507E960;
    // 0x1507E95C: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
L_1507E960:
    // 0x1507E960: jr          $ra
    // 0x1507E964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1507E964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151177C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151177C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151177C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151177C8: lbu         $v0, 0x73($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X73);
    // 0x151177CC: lhu         $v1, 0x54($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X54);
    // 0x151177D0: ori         $at, $zero, 0x800B
    ctx->r1 = 0 | 0X800B;
    // 0x151177D4: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x151177D8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151177DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151177E0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151177E4: andi        $a3, $v0, 0x3
    ctx->r7 = ctx->r2 & 0X3;
    // 0x151177E8: bne         $v1, $at, L_1511780C
    if (ctx->r3 != ctx->r1) {
        // 0x151177EC: andi        $t2, $v0, 0x4
        ctx->r10 = ctx->r2 & 0X4;
            goto L_1511780C;
    }
    // 0x151177EC: andi        $t2, $v0, 0x4
    ctx->r10 = ctx->r2 & 0X4;
    // 0x151177F0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151177F4: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x151177F8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x151177FC: bne         $t6, $at, L_1511780C
    if (ctx->r14 != ctx->r1) {
        // 0x15117800: nop
    
            goto L_1511780C;
    }
    // 0x15117800: nop

    // 0x15117804: b           L_15117878
    // 0x15117808: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
        goto L_15117878;
    // 0x15117808: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
L_1511780C:
    // 0x1511780C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15117810: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x15117814: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x15117818: bnel        $v0, $at, L_15117830
    if (ctx->r2 != ctx->r1) {
        // 0x1511781C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_15117830;
    }
    goto skip_0;
    // 0x1511781C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    skip_0:
    // 0x15117820: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x15117824: b           L_15117878
    // 0x15117828: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_15117878;
    // 0x15117828: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1511782C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_15117830:
    // 0x15117830: bnel        $v0, $at, L_15117848
    if (ctx->r2 != ctx->r1) {
        // 0x15117834: addiu       $at, $zero, 0x34
        ctx->r1 = ADD32(0, 0X34);
            goto L_15117848;
    }
    goto skip_1;
    // 0x15117834: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    skip_1:
    // 0x15117838: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x1511783C: b           L_15117878
    // 0x15117840: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_15117878;
    // 0x15117840: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15117844: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
L_15117848:
    // 0x15117848: bnel        $v0, $at, L_1511786C
    if (ctx->r2 != ctx->r1) {
        // 0x1511784C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_1511786C;
    }
    goto skip_2;
    // 0x1511784C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_2:
    // 0x15117850: lui         $t0, 0x1510
    ctx->r8 = S32(0X1510 << 16);
    // 0x15117854: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x15117858: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1511785C: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x15117860: b           L_15117878
    // 0x15117864: addiu       $t0, $t0, 0x4A80
    ctx->r8 = ADD32(ctx->r8, 0X4A80);
        goto L_15117878;
    // 0x15117864: addiu       $t0, $t0, 0x4A80
    ctx->r8 = ADD32(ctx->r8, 0X4A80);
    // 0x15117868: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_1511786C:
    // 0x1511786C: bnel        $v1, $at, L_1511787C
    if (ctx->r3 != ctx->r1) {
        // 0x15117870: lw          $v0, 0x7C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X7C);
            goto L_1511787C;
    }
    goto skip_3;
    // 0x15117870: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    skip_3:
    // 0x15117874: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
L_15117878:
    // 0x15117878: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
L_1511787C:
    // 0x1511787C: bnel        $v0, $zero, L_15117898
    if (ctx->r2 != 0) {
        // 0x15117880: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15117898;
    }
    goto skip_4;
    // 0x15117880: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    skip_4:
    // 0x15117884: lh          $t7, 0x12($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X12);
    // 0x15117888: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1511788C: or          $v0, $t7, $at
    ctx->r2 = ctx->r15 | ctx->r1;
    // 0x15117890: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x15117894: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_15117898:
    // 0x15117898: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x1511789C: sra         $t3, $t9, 16
    ctx->r11 = S32(SIGNED(ctx->r25) >> 16);
    // 0x151178A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151178A4: bne         $a3, $at, L_151178F0
    if (ctx->r7 != ctx->r1) {
        // 0x151178A8: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_151178F0;
    }
    // 0x151178A8: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x151178AC: lh          $t6, 0x12($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X12);
    // 0x151178B0: subu        $v0, $t3, $a1
    ctx->r2 = SUB32(ctx->r11, ctx->r5);
    // 0x151178B4: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x151178B8: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x151178BC: beq         $t5, $t6, L_151178C8
    if (ctx->r13 == ctx->r14) {
        // 0x151178C0: nop
    
            goto L_151178C8;
    }
    // 0x151178C0: nop

    // 0x151178C4: sh          $t5, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r13;
L_151178C8:
    // 0x151178C8: beql        $a2, $zero, L_151179A0
    if (ctx->r6 == 0) {
        // 0x151178CC: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_151179A0;
    }
    goto skip_5;
    // 0x151178CC: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_5:
    // 0x151178D0: lbu         $t7, 0x4F($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4F);
    // 0x151178D4: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x151178D8: bnel        $t8, $zero, L_151179A0
    if (ctx->r24 != 0) {
        // 0x151178DC: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_151179A0;
    }
    goto skip_6;
    // 0x151178DC: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_6:
    // 0x151178E0: bnel        $t2, $zero, L_151179A0
    if (ctx->r10 != 0) {
        // 0x151178E4: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_151179A0;
    }
    goto skip_7;
    // 0x151178E4: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_7:
    // 0x151178E8: b           L_1511799C
    // 0x151178EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_1511799C;
    // 0x151178EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_151178F0:
    // 0x151178F0: bne         $a3, $zero, L_15117918
    if (ctx->r7 != 0) {
        // 0x151178F4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15117918;
    }
    // 0x151178F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151178F8: lh          $t5, 0x12($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X12);
    // 0x151178FC: subu        $t9, $v1, $a1
    ctx->r25 = SUB32(ctx->r3, ctx->r5);
    // 0x15117900: sll         $t3, $t9, 16
    ctx->r11 = S32(ctx->r25 << 16);
    // 0x15117904: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x15117908: beql        $t4, $t5, L_151179A0
    if (ctx->r12 == ctx->r13) {
        // 0x1511790C: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_151179A0;
    }
    goto skip_8;
    // 0x1511790C: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_8:
    // 0x15117910: b           L_1511799C
    // 0x15117914: sh          $v1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r3;
        goto L_1511799C;
    // 0x15117914: sh          $v1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r3;
L_15117918:
    // 0x15117918: bnel        $a3, $at, L_15117970
    if (ctx->r7 != ctx->r1) {
        // 0x1511791C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_15117970;
    }
    goto skip_9;
    // 0x1511791C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_9:
    // 0x15117920: lh          $t6, 0x12($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X12);
    // 0x15117924: subu        $v0, $v1, $a1
    ctx->r2 = SUB32(ctx->r3, ctx->r5);
    // 0x15117928: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x1511792C: subu        $t7, $t6, $t1
    ctx->r15 = SUB32(ctx->r14, ctx->r9);
    // 0x15117930: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    // 0x15117934: lh          $t3, 0x12($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X12);
    // 0x15117938: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x1511793C: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15117940: bnel        $at, $zero, L_151179A0
    if (ctx->r1 != 0) {
        // 0x15117944: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_151179A0;
    }
    goto skip_10;
    // 0x15117944: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_10:
    // 0x15117948: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    // 0x1511794C: beq         $t0, $zero, L_1511799C
    if (ctx->r8 == 0) {
        // 0x15117950: addiu       $a3, $zero, 0x3
        ctx->r7 = ADD32(0, 0X3);
            goto L_1511799C;
    }
    // 0x15117950: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x15117954: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15117958: jalr        $t0
    // 0x1511795C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r8)(rdram, ctx);
        goto after_0;
    // 0x1511795C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x15117960: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x15117964: b           L_1511799C
    // 0x15117968: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
        goto L_1511799C;
    // 0x15117968: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x1511796C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_15117970:
    // 0x15117970: bnel        $a3, $at, L_151179A0
    if (ctx->r7 != ctx->r1) {
        // 0x15117974: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_151179A0;
    }
    goto skip_11;
    // 0x15117974: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_11:
    // 0x15117978: lh          $t4, 0x12($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X12);
    // 0x1511797C: addiu       $t5, $t4, 0x3
    ctx->r13 = ADD32(ctx->r12, 0X3);
    // 0x15117980: sh          $t5, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r13;
    // 0x15117984: lh          $t6, 0x12($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X12);
    // 0x15117988: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1511798C: bnel        $at, $zero, L_151179A0
    if (ctx->r1 != 0) {
        // 0x15117990: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_151179A0;
    }
    goto skip_12;
    // 0x15117990: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_12:
    // 0x15117994: sh          $v1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r3;
    // 0x15117998: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_1511799C:
    // 0x1511799C: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
L_151179A0:
    // 0x151179A0: andi        $t9, $t7, 0xFFFC
    ctx->r25 = ctx->r15 & 0XFFFC;
    // 0x151179A4: sb          $t9, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r25;
    // 0x151179A8: or          $t3, $t9, $a3
    ctx->r11 = ctx->r25 | ctx->r7;
    // 0x151179AC: sb          $t3, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r11;
    // 0x151179B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151179B4: jr          $ra
    // 0x151179B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151179B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1513C9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513C9B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513C9B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513C9B8: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x1513C9BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1513C9C0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513C9C4: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x1513C9C8: beq         $t7, $zero, L_1513C9D8
    if (ctx->r15 == 0) {
        // 0x1513C9CC: nop
    
            goto L_1513C9D8;
    }
    // 0x1513C9CC: nop

    // 0x1513C9D0: b           L_1513C9D8
    // 0x1513C9D4: lbu         $v0, 0x1F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1F);
        goto L_1513C9D8;
    // 0x1513C9D4: lbu         $v0, 0x1F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1F);
L_1513C9D8:
    // 0x1513C9D8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x1513C9DC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1513C9E0: lw          $t9, -0x6118($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6118);
    // 0x1513C9E4: jalr        $t9
    // 0x1513C9E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1513C9E8: nop

    after_0:
    // 0x1513C9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513C9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513C9F4: jr          $ra
    // 0x1513C9F8: nop

    return;
    return;
    // 0x1513C9F8: nop

;}
RECOMP_FUNC void func_1516F91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516F91C: lb          $v0, 0x28($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X28);
    // 0x1516F920: lbu         $t7, 0x29($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X29);
    // 0x1516F924: sll         $t6, $v0, 8
    ctx->r14 = S32(ctx->r2 << 8);
    // 0x1516F928: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1516F92C: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516F930: mflo        $v0
    ctx->r2 = lo;
    // 0x1516F934: sra         $t0, $v0, 8
    ctx->r8 = S32(SIGNED(ctx->r2) >> 8);
    // 0x1516F938: sra         $t9, $t0, 8
    ctx->r25 = S32(SIGNED(ctx->r8) >> 8);
    // 0x1516F93C: sb          $t9, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r25;
    // 0x1516F940: sb          $t0, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r8;
    // 0x1516F944: jr          $ra
    // 0x1516F948: nop

    return;
    return;
    // 0x1516F948: nop

;}
RECOMP_FUNC void func_1516D400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516D400: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1516D404: lbu         $v1, -0x2D60($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2D60);
    // 0x1516D408: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1516D40C: addiu       $a1, $a1, -0x1660
    ctx->r5 = ADD32(ctx->r5, -0X1660);
    // 0x1516D410: slti        $at, $v1, 0xFF
    ctx->r1 = SIGNED(ctx->r3) < 0XFF ? 1 : 0;
    // 0x1516D414: beq         $at, $zero, L_1516D43C
    if (ctx->r1 == 0) {
        // 0x1516D418: nop
    
            goto L_1516D43C;
    }
    // 0x1516D418: nop

    // 0x1516D41C: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x1516D420: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x1516D424: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x1516D428: bne         $at, $zero, L_1516D434
    if (ctx->r1 != 0) {
        // 0x1516D42C: nop
    
            goto L_1516D434;
    }
    // 0x1516D42C: nop

    // 0x1516D430: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_1516D434:
    // 0x1516D434: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1516D438: sb          $v0, -0x2D60($at)
    MEM_B(-0X2D60, ctx->r1) = ctx->r2;
L_1516D43C:
    // 0x1516D43C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1516D440: lbu         $v1, -0x2D5F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2D5F);
    // 0x1516D444: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1516D448: addiu       $a1, $a1, -0x1660
    ctx->r5 = ADD32(ctx->r5, -0X1660);
    // 0x1516D44C: slti        $at, $v1, 0xFF
    ctx->r1 = SIGNED(ctx->r3) < 0XFF ? 1 : 0;
    // 0x1516D450: beq         $at, $zero, L_1516D478
    if (ctx->r1 == 0) {
        // 0x1516D454: nop
    
            goto L_1516D478;
    }
    // 0x1516D454: nop

    // 0x1516D458: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x1516D45C: addu        $v0, $v1, $t7
    ctx->r2 = ADD32(ctx->r3, ctx->r15);
    // 0x1516D460: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x1516D464: bne         $at, $zero, L_1516D470
    if (ctx->r1 != 0) {
        // 0x1516D468: nop
    
            goto L_1516D470;
    }
    // 0x1516D468: nop

    // 0x1516D46C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_1516D470:
    // 0x1516D470: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1516D474: sb          $v0, -0x2D5F($at)
    MEM_B(-0X2D5F, ctx->r1) = ctx->r2;
L_1516D478:
    // 0x1516D478: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1516D47C: lbu         $v1, -0x2D5E($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2D5E);
    // 0x1516D480: slti        $at, $v1, 0xFF
    ctx->r1 = SIGNED(ctx->r3) < 0XFF ? 1 : 0;
    // 0x1516D484: beq         $at, $zero, L_1516D4AC
    if (ctx->r1 == 0) {
        // 0x1516D488: nop
    
            goto L_1516D4AC;
    }
    // 0x1516D488: nop

    // 0x1516D48C: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x1516D490: addu        $v0, $v1, $t8
    ctx->r2 = ADD32(ctx->r3, ctx->r24);
    // 0x1516D494: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x1516D498: bne         $at, $zero, L_1516D4A4
    if (ctx->r1 != 0) {
        // 0x1516D49C: nop
    
            goto L_1516D4A4;
    }
    // 0x1516D49C: nop

    // 0x1516D4A0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_1516D4A4:
    // 0x1516D4A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1516D4A8: sb          $v0, -0x2D5E($at)
    MEM_B(-0X2D5E, ctx->r1) = ctx->r2;
L_1516D4AC:
    // 0x1516D4AC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1516D4B0: lbu         $v1, -0x2D5D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2D5D);
    // 0x1516D4B4: slti        $at, $v1, 0xFF
    ctx->r1 = SIGNED(ctx->r3) < 0XFF ? 1 : 0;
    // 0x1516D4B8: beq         $at, $zero, L_1516D4E0
    if (ctx->r1 == 0) {
        // 0x1516D4BC: nop
    
            goto L_1516D4E0;
    }
    // 0x1516D4BC: nop

    // 0x1516D4C0: lbu         $t9, 0x0($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X0);
    // 0x1516D4C4: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x1516D4C8: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x1516D4CC: bne         $at, $zero, L_1516D4D8
    if (ctx->r1 != 0) {
        // 0x1516D4D0: nop
    
            goto L_1516D4D8;
    }
    // 0x1516D4D0: nop

    // 0x1516D4D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_1516D4D8:
    // 0x1516D4D8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1516D4DC: sb          $v0, -0x2D5D($at)
    MEM_B(-0X2D5D, ctx->r1) = ctx->r2;
L_1516D4E0:
    // 0x1516D4E0: jr          $ra
    // 0x1516D4E4: nop

    return;
    return;
    // 0x1516D4E4: nop

;}
RECOMP_FUNC void func_1507B734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B734: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507B738: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507B73C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507B740: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x1507B744: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1507B748: lbu         $t0, 0x1893($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1893);
    // 0x1507B74C: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x1507B750: or          $v0, $t7, $t8
    ctx->r2 = ctx->r15 | ctx->r24;
    // 0x1507B754: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x1507B758: beq         $t0, $zero, L_1507B78C
    if (ctx->r8 == 0) {
        // 0x1507B75C: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_1507B78C;
    }
    // 0x1507B75C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x1507B760: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507B764: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x1507B768: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x1507B76C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1507B770: lw          $t2, 0x31C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X31C);
    // 0x1507B774: sh          $t9, 0x8C($t2)
    MEM_H(0X8C, ctx->r10) = ctx->r25;
    // 0x1507B778: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x1507B77C: lbu         $t3, 0x1892($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X1892);
    // 0x1507B780: lw          $t5, 0x31C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X31C);
    // 0x1507B784: jr          $ra
    // 0x1507B788: sb          $t3, 0x8F($t5)
    MEM_B(0X8F, ctx->r13) = ctx->r11;
    return;
    return;
    // 0x1507B788: sb          $t3, 0x8F($t5)
    MEM_B(0X8F, ctx->r13) = ctx->r11;
L_1507B78C:
    // 0x1507B78C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507B790: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x1507B794: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1507B798: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507B79C: lw          $t7, 0x31C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X31C);
    // 0x1507B7A0: sh          $v0, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r2;
    // 0x1507B7A4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1507B7A8: lbu         $t8, 0x1892($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1892);
    // 0x1507B7AC: lw          $t0, 0x31C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X31C);
    // 0x1507B7B0: sb          $t8, 0x8E($t0)
    MEM_B(0X8E, ctx->r8) = ctx->r24;
    // 0x1507B7B4: jr          $ra
    // 0x1507B7B8: nop

    return;
    return;
    // 0x1507B7B8: nop

;}
RECOMP_FUNC void func_1511AF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511AF30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1511AF34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1511AF38: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x1511AF3C: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x1511AF40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1511AF44: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1511AF48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511AF4C: lwc1        $f10, 0x3188($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3188);
    // 0x1511AF50: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511AF54: lwc1        $f14, 0x7C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x1511AF58: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1511AF5C: nop

    // 0x1511AF60: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1511AF64: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
    // 0x1511AF68: nop

    // 0x1511AF6C: bc1t        L_1511AFDC
    if (c1cs) {
        // 0x1511AF70: nop
    
            goto L_1511AFDC;
    }
    // 0x1511AF70: nop

    // 0x1511AF74: sub.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x1511AF78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1511AF7C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1511AF80: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1511AF84: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x1511AF88: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x1511AF8C: nop

    // 0x1511AF90: bc1fl       L_1511AFA4
    if (!c1cs) {
        // 0x1511AF94: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_1511AFA4;
    }
    goto skip_0;
    // 0x1511AF94: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_0:
    // 0x1511AF98: b           L_1511AFD4
    // 0x1511AF9C: swc1        $f12, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f12.u32l;
        goto L_1511AFD4;
    // 0x1511AF9C: swc1        $f12, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f12.u32l;
    // 0x1511AFA0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_1511AFA4:
    // 0x1511AFA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1511AFA8: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x1511AFAC: nop

    // 0x1511AFB0: bc1f        L_1511AFC0
    if (!c1cs) {
        // 0x1511AFB4: nop
    
            goto L_1511AFC0;
    }
    // 0x1511AFB4: nop

    // 0x1511AFB8: b           L_1511AFC0
    // 0x1511AFBC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1511AFC0;
    // 0x1511AFBC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1511AFC0:
    // 0x1511AFC0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x1511AFC4: nop

    // 0x1511AFC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511AFCC: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x1511AFD0: swc1        $f8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f8.u32l;
L_1511AFD4:
    // 0x1511AFD4: b           L_1511B060
    // 0x1511AFD8: swc1        $f10, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f10.u32l;
        goto L_1511B060;
    // 0x1511AFD8: swc1        $f10, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f10.u32l;
L_1511AFDC:
    // 0x1511AFDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1511AFE0: jal         0x150ADA20
    // 0x1511AFE4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1511AFE4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x1511AFE8: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x1511AFEC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1511AFF0: mfhi        $v1
    ctx->r3 = hi;
    // 0x1511AFF4: slti        $at, $v1, 0x1F4
    ctx->r1 = SIGNED(ctx->r3) < 0X1F4 ? 1 : 0;
    // 0x1511AFF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1511AFFC: beq         $at, $zero, L_1511B040
    if (ctx->r1 == 0) {
        // 0x1511B000: lwc1        $f0, 0x1C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_1511B040;
    }
    // 0x1511B000: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1511B004: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x1511B008: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1511B00C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1511B010: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1511B014: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511B018: lwc1        $f10, 0x318C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X318C);
    // 0x1511B01C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511B020: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1511B024: lwc1        $f18, 0x3190($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3190);
    // 0x1511B028: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1511B02C: nop

    // 0x1511B030: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1511B034: nop

    // 0x1511B038: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1511B03C: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
L_1511B040:
    // 0x1511B040: lwc1        $f0, 0x80($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X80);
    // 0x1511B044: lwc1        $f6, 0x84($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511B048: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511B04C: lwc1        $f8, 0x3194($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3194);
    // 0x1511B050: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x1511B054: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x1511B058: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x1511B05C: swc1        $f16, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f16.u32l;
L_1511B060:
    // 0x1511B060: lwc1        $f18, 0x7C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x1511B064: lwc1        $f4, 0x80($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X80);
    // 0x1511B068: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1511B06C: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x1511B070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1511B074: jr          $ra
    // 0x1511B078: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1511B078: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_15060B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15060B70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15060B74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15060B78: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15060B7C: addiu       $t6, $zero, 0x9C4
    ctx->r14 = ADD32(0, 0X9C4);
    // 0x15060B80: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15060B84: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    // 0x15060B88: addiu       $a2, $zero, 0x6D60
    ctx->r6 = ADD32(0, 0X6D60);
    // 0x15060B8C: jal         0x10010154
    // 0x15060B90: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_10010154(rdram, ctx);
        goto after_0;
    // 0x15060B90: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_0:
    // 0x15060B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15060B98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15060B9C: jr          $ra
    // 0x15060BA0: nop

    return;
    return;
    // 0x15060BA0: nop

;}
RECOMP_FUNC void func_151AE890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AE890: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151AE894: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151AE898: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x151AE89C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x151AE8A0: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151AE8A4: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x151AE8A8: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x151AE8AC: jal         0x150ADA68
    // 0x151AE8B0: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151AE8B0: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151AE8B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AE8B8: lwc1        $f6, -0x627C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X627C);
    // 0x151AE8BC: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x151AE8C0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x151AE8C4: nop

    // 0x151AE8C8: bc1tl       L_151AE978
    if (c1cs) {
        // 0x151AE8CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151AE978;
    }
    goto skip_0;
    // 0x151AE8CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x151AE8D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AE8D4: nop

    // 0x151AE8D8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x151AE8DC: nop

    // 0x151AE8E0: bc1f        L_151AE928
    if (!c1cs) {
        // 0x151AE8E4: nop
    
            goto L_151AE928;
    }
    // 0x151AE8E4: nop

    // 0x151AE8E8: jal         0x150ADA68
    // 0x151AE8EC: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151AE8EC: nop

    after_1:
    // 0x151AE8F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x151AE8F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151AE8F8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x151AE8FC: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x151AE900: nop

    // 0x151AE904: bc1f        L_151AE914
    if (!c1cs) {
        // 0x151AE908: nop
    
            goto L_151AE914;
    }
    // 0x151AE908: nop

    // 0x151AE90C: b           L_151AE914
    // 0x151AE910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_151AE914;
    // 0x151AE910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_151AE914:
    // 0x151AE914: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x151AE918: jal         0x151AEAB4
    // 0x151AE91C: lbu         $a2, 0xC($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0XC);
    func_151AEAB4(rdram, ctx);
        goto after_2;
    // 0x151AE91C: lbu         $a2, 0xC($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0XC);
    after_2:
    // 0x151AE920: b           L_151AE978
    // 0x151AE924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151AE978;
    // 0x151AE924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151AE928:
    // 0x151AE928: jal         0x150ADA68
    // 0x151AE92C: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151AE92C: nop

    after_3:
    // 0x151AE930: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AE934: lwc1        $f16, -0x6278($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6278);
    // 0x151AE938: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151AE93C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x151AE940: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x151AE944: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x151AE948: bc1f        L_151AE958
    if (!c1cs) {
        // 0x151AE94C: nop
    
            goto L_151AE958;
    }
    // 0x151AE94C: nop

    // 0x151AE950: b           L_151AE958
    // 0x151AE954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151AE958;
    // 0x151AE954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151AE958:
    // 0x151AE958: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x151AE95C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x151AE960: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x151AE964: lbu         $t8, 0xC($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XC);
    // 0x151AE968: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x151AE96C: jal         0x151AE984
    // 0x151AE970: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_151AE984(rdram, ctx);
        goto after_4;
    // 0x151AE970: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_4:
    // 0x151AE974: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151AE978:
    // 0x151AE978: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151AE97C: jr          $ra
    // 0x151AE980: nop

    return;
    return;
    // 0x151AE980: nop

;}
RECOMP_FUNC void func_15008BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15008BE0: jr          $ra
    // 0x15008BE4: nop

    return;
    return;
    // 0x15008BE4: nop

;}
RECOMP_FUNC void func_15133E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15133E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15133E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15133E8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15133E90: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15133E94: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x15133E98: lhu         $a1, 0x170($t6)
    ctx->r5 = MEM_HU(ctx->r14, 0X170);
    // 0x15133E9C: lbu         $a2, 0x172($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0X172);
    // 0x15133EA0: jal         0x15133EEC
    // 0x15133EA4: lw          $a3, 0x174($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X174);
    func_15133EEC(rdram, ctx);
        goto after_0;
    // 0x15133EA4: lw          $a3, 0x174($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X174);
    after_0:
    // 0x15133EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15133EAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15133EB0: jr          $ra
    // 0x15133EB4: nop

    return;
    return;
    // 0x15133EB4: nop

;}
RECOMP_FUNC void func_10010720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10010720: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x10010724: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x10010728: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1001072C: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x10010730: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x10010734: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x10010738: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1001073C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x10010740: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x10010744: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x10010748: lui         $t1, 0x1001
    ctx->r9 = S32(0X1001 << 16);
    // 0x1001074C: addiu       $t1, $t1, -0x1260
    ctx->r9 = ADD32(ctx->r9, -0X1260);
    // 0x10010750: bgtz        $t7, L_10010778
    if (SIGNED(ctx->r15) > 0) {
        // 0x10010754: lw          $t8, 0x48($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X48);
            goto L_10010778;
    }
    // 0x10010754: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x10010758: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x1001075C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x10010760: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x10010764: lh          $a3, 0x4E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X4E);
    // 0x10010768: jal         0x10010630
    // 0x1001076C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_10010630(rdram, ctx);
        goto after_0;
    // 0x1001076C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x10010770: b           L_100107E8
    // 0x10010774: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_100107E8;
    // 0x10010774: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_10010778:
    // 0x10010778: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1001077C: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x10010780: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x10010784: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x10010788: lhu         $t9, 0x52($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X52);
    // 0x1001078C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x10010790: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x10010794: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x10010798: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1001079C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x100107A0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x100107A4: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x100107A8: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    // 0x100107AC: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x100107B0: lh          $t0, 0x4E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4E);
    // 0x100107B4: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x100107B8: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x100107BC: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x100107C0: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    // 0x100107C4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x100107C8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x100107CC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x100107D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x100107D4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x100107D8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x100107DC: jal         0x1000FA64
    // 0x100107E0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_1000FA64(rdram, ctx);
        goto after_1;
    // 0x100107E0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_1:
    // 0x100107E4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_100107E8:
    // 0x100107E8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x100107EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x100107F0: jr          $ra
    // 0x100107F4: nop

    return;
    return;
    // 0x100107F4: nop

;}
RECOMP_FUNC void func_1508E780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508E780: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1508E784: lw          $t6, 0x23B0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X23B0);
    // 0x1508E788: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x1508E78C: addiu       $t8, $a0, -0x9
    ctx->r24 = ADD32(ctx->r4, -0X9);
    // 0x1508E790: lh          $t7, 0x16BC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X16BC);
    // 0x1508E794: beq         $t7, $at, L_1508E848
    if (ctx->r15 == ctx->r1) {
        // 0x1508E798: sltiu       $at, $t8, 0x39
        ctx->r1 = ctx->r24 < 0X39 ? 1 : 0;
            goto L_1508E848;
    }
    // 0x1508E798: sltiu       $at, $t8, 0x39
    ctx->r1 = ctx->r24 < 0X39 ? 1 : 0;
    // 0x1508E79C: beq         $at, $zero, L_1508E840
    if (ctx->r1 == 0) {
        // 0x1508E7A0: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_1508E840;
    }
    // 0x1508E7A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1508E7A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508E7A8: addu        $at, $at, $t8
    gpr jr_addend_1508E7B0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x1508E7AC: lw          $t8, -0x2470($at)
    ctx->r24 = ADD32(ctx->r1, -0X2470);
    // 0x1508E7B0: jr          $t8
    // 0x1508E7B4: nop

    switch (jr_addend_1508E7B0 >> 2) {
        case 0: goto L_1508E808; break;
        case 1: goto L_1508E840; break;
        case 2: goto L_1508E840; break;
        case 3: goto L_1508E840; break;
        case 4: goto L_1508E840; break;
        case 5: goto L_1508E840; break;
        case 6: goto L_1508E840; break;
        case 7: goto L_1508E840; break;
        case 8: goto L_1508E840; break;
        case 9: goto L_1508E840; break;
        case 10: goto L_1508E840; break;
        case 11: goto L_1508E7B8; break;
        case 12: goto L_1508E7E0; break;
        case 13: goto L_1508E7D8; break;
        case 14: goto L_1508E840; break;
        case 15: goto L_1508E828; break;
        case 16: goto L_1508E7F8; break;
        case 17: goto L_1508E840; break;
        case 18: goto L_1508E840; break;
        case 19: goto L_1508E840; break;
        case 20: goto L_1508E840; break;
        case 21: goto L_1508E840; break;
        case 22: goto L_1508E840; break;
        case 23: goto L_1508E840; break;
        case 24: goto L_1508E7E8; break;
        case 25: goto L_1508E7C8; break;
        case 26: goto L_1508E7D0; break;
        case 27: goto L_1508E7F0; break;
        case 28: goto L_1508E838; break;
        case 29: goto L_1508E840; break;
        case 30: goto L_1508E840; break;
        case 31: goto L_1508E840; break;
        case 32: goto L_1508E840; break;
        case 33: goto L_1508E840; break;
        case 34: goto L_1508E840; break;
        case 35: goto L_1508E840; break;
        case 36: goto L_1508E840; break;
        case 37: goto L_1508E840; break;
        case 38: goto L_1508E840; break;
        case 39: goto L_1508E840; break;
        case 40: goto L_1508E840; break;
        case 41: goto L_1508E840; break;
        case 42: goto L_1508E840; break;
        case 43: goto L_1508E840; break;
        case 44: goto L_1508E840; break;
        case 45: goto L_1508E840; break;
        case 46: goto L_1508E820; break;
        case 47: goto L_1508E810; break;
        case 48: goto L_1508E818; break;
        case 49: goto L_1508E840; break;
        case 50: goto L_1508E840; break;
        case 51: goto L_1508E840; break;
        case 52: goto L_1508E840; break;
        case 53: goto L_1508E840; break;
        case 54: goto L_1508E7C0; break;
        case 55: goto L_1508E800; break;
        case 56: goto L_1508E830; break;
        default: switch_error(__func__, 0x1508E7B0, 0x8009DB90);
    }
    // 0x1508E7B4: nop

L_1508E7B8:
    // 0x1508E7B8: jr          $ra
    // 0x1508E7BC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    return;
    return;
    // 0x1508E7BC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_1508E7C0:
    // 0x1508E7C0: jr          $ra
    // 0x1508E7C4: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    return;
    return;
    // 0x1508E7C4: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
L_1508E7C8:
    // 0x1508E7C8: jr          $ra
    // 0x1508E7CC: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    return;
    return;
    // 0x1508E7CC: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
L_1508E7D0:
    // 0x1508E7D0: jr          $ra
    // 0x1508E7D4: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    return;
    return;
    // 0x1508E7D4: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
L_1508E7D8:
    // 0x1508E7D8: jr          $ra
    // 0x1508E7DC: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    return;
    return;
    // 0x1508E7DC: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
L_1508E7E0:
    // 0x1508E7E0: jr          $ra
    // 0x1508E7E4: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    return;
    return;
    // 0x1508E7E4: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
L_1508E7E8:
    // 0x1508E7E8: jr          $ra
    // 0x1508E7EC: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
    return;
    return;
    // 0x1508E7EC: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
L_1508E7F0:
    // 0x1508E7F0: jr          $ra
    // 0x1508E7F4: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
    return;
    return;
    // 0x1508E7F4: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
L_1508E7F8:
    // 0x1508E7F8: jr          $ra
    // 0x1508E7FC: addiu       $v0, $zero, 0x57
    ctx->r2 = ADD32(0, 0X57);
    return;
    return;
    // 0x1508E7FC: addiu       $v0, $zero, 0x57
    ctx->r2 = ADD32(0, 0X57);
L_1508E800:
    // 0x1508E800: jr          $ra
    // 0x1508E804: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    return;
    return;
    // 0x1508E804: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
L_1508E808:
    // 0x1508E808: jr          $ra
    // 0x1508E80C: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    return;
    return;
    // 0x1508E80C: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
L_1508E810:
    // 0x1508E810: jr          $ra
    // 0x1508E814: addiu       $v0, $zero, 0x7B
    ctx->r2 = ADD32(0, 0X7B);
    return;
    return;
    // 0x1508E814: addiu       $v0, $zero, 0x7B
    ctx->r2 = ADD32(0, 0X7B);
L_1508E818:
    // 0x1508E818: jr          $ra
    // 0x1508E81C: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    return;
    return;
    // 0x1508E81C: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
L_1508E820:
    // 0x1508E820: jr          $ra
    // 0x1508E824: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    return;
    return;
    // 0x1508E824: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
L_1508E828:
    // 0x1508E828: jr          $ra
    // 0x1508E82C: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    return;
    return;
    // 0x1508E82C: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
L_1508E830:
    // 0x1508E830: jr          $ra
    // 0x1508E834: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    return;
    return;
    // 0x1508E834: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
L_1508E838:
    // 0x1508E838: jr          $ra
    // 0x1508E83C: addiu       $v0, $zero, 0x1060
    ctx->r2 = ADD32(0, 0X1060);
    return;
    return;
    // 0x1508E83C: addiu       $v0, $zero, 0x1060
    ctx->r2 = ADD32(0, 0X1060);
L_1508E840:
    // 0x1508E840: jr          $ra
    // 0x1508E844: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    return;
    // 0x1508E844: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1508E848:
    // 0x1508E848: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1508E84C: beq         $a0, $at, L_1508E87C
    if (ctx->r4 == ctx->r1) {
        // 0x1508E850: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1508E87C;
    }
    // 0x1508E850: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1508E854: beq         $a0, $at, L_1508E88C
    if (ctx->r4 == ctx->r1) {
        // 0x1508E858: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_1508E88C;
    }
    // 0x1508E858: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x1508E85C: beq         $a0, $at, L_1508E874
    if (ctx->r4 == ctx->r1) {
        // 0x1508E860: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_1508E874;
    }
    // 0x1508E860: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x1508E864: beq         $a0, $at, L_1508E884
    if (ctx->r4 == ctx->r1) {
        // 0x1508E868: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_1508E884;
    }
    // 0x1508E868: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x1508E86C: b           L_1508E894
    // 0x1508E870: nop

        goto L_1508E894;
    // 0x1508E870: nop

L_1508E874:
    // 0x1508E874: jr          $ra
    // 0x1508E878: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    return;
    // 0x1508E878: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1508E87C:
    // 0x1508E87C: jr          $ra
    // 0x1508E880: addiu       $v0, $zero, 0x105C
    ctx->r2 = ADD32(0, 0X105C);
    return;
    return;
    // 0x1508E880: addiu       $v0, $zero, 0x105C
    ctx->r2 = ADD32(0, 0X105C);
L_1508E884:
    // 0x1508E884: jr          $ra
    // 0x1508E888: addiu       $v0, $zero, 0x1019
    ctx->r2 = ADD32(0, 0X1019);
    return;
    return;
    // 0x1508E888: addiu       $v0, $zero, 0x1019
    ctx->r2 = ADD32(0, 0X1019);
L_1508E88C:
    // 0x1508E88C: jr          $ra
    // 0x1508E890: addiu       $v0, $zero, 0x1059
    ctx->r2 = ADD32(0, 0X1059);
    return;
    return;
    // 0x1508E890: addiu       $v0, $zero, 0x1059
    ctx->r2 = ADD32(0, 0X1059);
L_1508E894:
    // 0x1508E894: jr          $ra
    // 0x1508E898: nop

    return;
    return;
    // 0x1508E898: nop

;}
RECOMP_FUNC void __n_vsPan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001B450: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1001B454: lbu         $t7, 0x35($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X35);
    // 0x1001B458: lw          $t6, 0x60($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X60);
    // 0x1001B45C: lw          $t1, 0x24($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X24);
    // 0x1001B460: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x1001B464: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1001B468: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1001B46C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x1001B470: lbu         $t0, 0x6($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X6);
    // 0x1001B474: lbu         $t2, 0xC($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XC);
    // 0x1001B478: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x1001B47C: addiu       $t4, $t3, -0x40
    ctx->r12 = ADD32(ctx->r11, -0X40);
    // 0x1001B480: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x1001B484: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x1001B488: blez        $t5, L_1001B498
    if (SIGNED(ctx->r13) <= 0) {
        // 0x1001B48C: nop
    
            goto L_1001B498;
    }
    // 0x1001B48C: nop

    // 0x1001B490: b           L_1001B49C
    // 0x1001B494: nop

        goto L_1001B49C;
    // 0x1001B494: nop

L_1001B498:
    // 0x1001B498: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_1001B49C:
    // 0x1001B49C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x1001B4A0: slti        $at, $t7, 0x7F
    ctx->r1 = SIGNED(ctx->r15) < 0X7F ? 1 : 0;
    // 0x1001B4A4: beq         $at, $zero, L_1001B4B4
    if (ctx->r1 == 0) {
        // 0x1001B4A8: nop
    
            goto L_1001B4B4;
    }
    // 0x1001B4A8: nop

    // 0x1001B4AC: b           L_1001B4BC
    // 0x1001B4B0: nop

        goto L_1001B4BC;
    // 0x1001B4B0: nop

L_1001B4B4:
    // 0x1001B4B4: addiu       $t6, $zero, 0x7F
    ctx->r14 = ADD32(0, 0X7F);
    // 0x1001B4B8: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
L_1001B4BC:
    // 0x1001B4BC: b           L_1001B4CC
    // 0x1001B4C0: lbu         $v0, 0x7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7);
        goto L_1001B4CC;
    // 0x1001B4C0: lbu         $v0, 0x7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7);
    // 0x1001B4C4: b           L_1001B4CC
    // 0x1001B4C8: nop

        goto L_1001B4CC;
    // 0x1001B4C8: nop

L_1001B4CC:
    // 0x1001B4CC: jr          $ra
    // 0x1001B4D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x1001B4D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_150CF0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CF0A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150CF0A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150CF0A8: lbu         $t6, 0x73($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X73);
    // 0x150CF0AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150CF0B0: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x150CF0B4: beq         $t7, $at, L_150CF11C
    if (ctx->r15 == ctx->r1) {
        // 0x150CF0B8: nop
    
            goto L_150CF11C;
    }
    // 0x150CF0B8: nop

    // 0x150CF0BC: lbu         $t8, 0x4F($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X4F);
    // 0x150CF0C0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150CF0C4: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x150CF0C8: beql        $t9, $zero, L_150CF128
    if (ctx->r25 == 0) {
        // 0x150CF0CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150CF128;
    }
    goto skip_0;
    // 0x150CF0CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150CF0D0: lw          $t0, -0x3A14($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A14);
    // 0x150CF0D4: lbu         $t1, 0x57($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X57);
    // 0x150CF0D8: beql        $t1, $zero, L_150CF128
    if (ctx->r9 == 0) {
        // 0x150CF0DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150CF128;
    }
    goto skip_1;
    // 0x150CF0DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150CF0E0: jal         0x151149AC
    // 0x150CF0E4: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x150CF0E4: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_0:
    // 0x150CF0E8: lbu         $t2, 0x73($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X73);
    // 0x150CF0EC: addiu       $a0, $zero, 0xFD
    ctx->r4 = ADD32(0, 0XFD);
    // 0x150CF0F0: andi        $t4, $t2, 0xFFFC
    ctx->r12 = ctx->r10 & 0XFFFC;
    // 0x150CF0F4: sb          $t4, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r12;
    // 0x150CF0F8: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x150CF0FC: jal         0x151149AC
    // 0x150CF100: sb          $t5, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r13;
    func_151149AC(rdram, ctx);
        goto after_1;
    // 0x150CF100: sb          $t5, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r13;
    after_1:
    // 0x150CF104: lbu         $t6, 0x73($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X73);
    // 0x150CF108: andi        $t8, $t6, 0xFFFC
    ctx->r24 = ctx->r14 & 0XFFFC;
    // 0x150CF10C: sb          $t8, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r24;
    // 0x150CF110: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x150CF114: b           L_150CF124
    // 0x150CF118: sb          $t9, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r25;
        goto L_150CF124;
    // 0x150CF118: sb          $t9, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r25;
L_150CF11C:
    // 0x150CF11C: jal         0x15117798
    // 0x150CF120: nop

    func_15117798(rdram, ctx);
        goto after_2;
    // 0x150CF120: nop

    after_2:
L_150CF124:
    // 0x150CF124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150CF128:
    // 0x150CF128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150CF12C: jr          $ra
    // 0x150CF130: nop

    return;
    return;
    // 0x150CF130: nop

;}

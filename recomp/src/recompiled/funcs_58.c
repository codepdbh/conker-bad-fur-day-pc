#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void static_5_150A59B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A579C:
    // 0x150A59B8: lbu         $t0, -0x4($a0)
    ctx->r8 = MEM_BU(ctx->r4, -0X4);
    // 0x150A59BC: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x150A59C0: addu        $t0, $t0, $sp
    ctx->r8 = ADD32(ctx->r8, ctx->r29);
    // 0x150A59C4: ld          $t2, 0x98($t0)
    ctx->r10 = LD(ctx->r8, 0X98);
    // 0x150A59C8: ld          $t3, -0x8($a0)
    ctx->r11 = LD(ctx->r4, -0X8);
    // 0x150A59CC: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x150A59D0: addiu       $t4, $zero, 0x200
    ctx->r12 = ADD32(0, 0X200);
    // 0x150A59D4: bne         $t3, $t2, L_150A59E0
    if (ctx->r11 != ctx->r10) {
        // 0x150A59D8: nop
    
            goto L_150A59E0;
    }
    // 0x150A59D8: nop

    // 0x150A59DC: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
L_150A59E0:
    // 0x150A59E0: sd          $t3, 0x58($t0)
    SD(ctx->r11, 0X58, ctx->r8);
    // 0x150A59E4: j           L_150A579C
    // 0x150A59E8: nop

    static_5_150A579C(rdram, ctx);
    return;
    // 0x150A59E8: nop

;}
RECOMP_FUNC void static_5_150A59EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A579C:
    // 0x150A59EC: lbu         $t0, -0x4($a0)
    ctx->r8 = MEM_BU(ctx->r4, -0X4);
    // 0x150A59F0: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x150A59F4: addu        $t0, $t0, $sp
    ctx->r8 = ADD32(ctx->r8, ctx->r29);
    // 0x150A59F8: ld          $t2, 0x118($t0)
    ctx->r10 = LD(ctx->r8, 0X118);
    // 0x150A59FC: ld          $t3, -0x8($a0)
    ctx->r11 = LD(ctx->r4, -0X8);
    // 0x150A5A00: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x150A5A04: addiu       $t4, $zero, 0x200
    ctx->r12 = ADD32(0, 0X200);
    // 0x150A5A08: bne         $t3, $t2, L_150A5A14
    if (ctx->r11 != ctx->r10) {
        // 0x150A5A0C: nop
    
            goto L_150A5A14;
    }
    // 0x150A5A0C: nop

    // 0x150A5A10: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
L_150A5A14:
    // 0x150A5A14: sd          $t3, 0xD8($t0)
    SD(ctx->r11, 0XD8, ctx->r8);
    // 0x150A5A18: j           L_150A579C
    // 0x150A5A1C: nop

    static_5_150A579C(rdram, ctx);
    return;
    // 0x150A5A1C: nop

;}
RECOMP_FUNC void static_5_150A5A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A579C:
    // 0x150A5A20: ldc1        $f7, -0x8($a0)
    CHECK_FR(ctx, 7);
    ctx->f7.u64 = LD(ctx->r4, -0X8);
    // 0x150A5A24: ori         $t4, $t4, 0x80
    ctx->r12 = ctx->r12 | 0X80;
    // 0x150A5A28: c.eq.d      $f7, $f8
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f7.d == ctx->f8.d;
    // 0x150A5A2C: bc1f        L_150A579C
    if (!c1cs) {
        // 0x150A5A30: nop
    
        // 0x150A5A30: nop

    static_5_150A579C(rdram, ctx);
        return;
    }
    // 0x150A5A30: nop

    // 0x150A5A34: mov.d       $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f7.d = ctx->f0.d;
    // 0x150A5A38: j           L_150A579C
    // 0x150A5A3C: xori        $t4, $t4, 0x80
    ctx->r12 = ctx->r12 ^ 0X80;
    static_5_150A579C(rdram, ctx);
    return;
    // 0x150A5A3C: xori        $t4, $t4, 0x80
    ctx->r12 = ctx->r12 ^ 0X80;
;}
RECOMP_FUNC void static_5_150A5A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A579C:
    // 0x150A5A40: j           L_150A579C
    // 0x150A5A44: ld          $s7, -0x8($a0)
    ctx->r23 = LD(ctx->r4, -0X8);
    static_5_150A579C(rdram, ctx);
    return;
    // 0x150A5A44: ld          $s7, -0x8($a0)
    ctx->r23 = LD(ctx->r4, -0X8);
;}
RECOMP_FUNC void static_5_150A5A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A5A48: lui         $t0, 0x2000
    ctx->r8 = S32(0X2000 << 16);
    // 0x150A5A4C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x150A5A50: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x150A5A54: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x150A5A58: lw          $s2, 0x8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X8);
    // 0x150A5A5C: lw          $s3, 0xC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC);
    // 0x150A5A60: lw          $s4, 0x10($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X10);
    // 0x150A5A64: lw          $s5, 0x14($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X14);
    // 0x150A5A68: lw          $s6, 0x18($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X18);
    // 0x150A5A6C: lw          $s7, 0x1C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1C);
    // 0x150A5A70: lw          $fp, 0x20($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X20);
    // 0x150A5A74: lw          $gp, 0x24($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X24);
    // 0x150A5A78: lwc1        $f20, 0x28($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150A5A7C: lwc1        $f21, 0x2C($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x150A5A80: lwc1        $f22, 0x30($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150A5A84: lwc1        $f23, 0x34($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X34);
    // 0x150A5A88: lwc1        $f24, 0x38($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150A5A8C: lwc1        $f25, 0x3C($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x150A5A90: lwc1        $f26, 0x40($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150A5A94: lwc1        $f27, 0x44($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X44);
    // 0x150A5A98: lwc1        $f28, 0x48($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150A5A9C: lwc1        $f29, 0x4C($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x150A5AA0: lwc1        $f30, 0x50($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150A5AA4: lwc1        $f31, 0x54($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X54);
    // 0x150A5AA8: lw          $ra, 0x158($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X158);
    // 0x150A5AAC: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
    // 0x150A5AB0: jr          $ra
    // 0x150A5AB4: nop

    return;
    return;
    // 0x150A5AB4: nop

;}
RECOMP_FUNC void static_5_150A64C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A64C0: jr          $ra
    // 0x150A64C4: nop

    return;
    return;
    // 0x150A64C4: nop

;}
RECOMP_FUNC void static_5_150A64C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A64C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150A64CC: addiu       $t0, $zero, -0x2710
    ctx->r8 = ADD32(0, -0X2710);
    // 0x150A64D0: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x150A64D4: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x150A64D8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x150A64DC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150A64E0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x150A64E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150A64E8: jal         0x150A6568
    // 0x150A64EC: nop

    func_150A6568(rdram, ctx);
        goto after_0;
    // 0x150A64EC: nop

    after_0:
    // 0x150A64F0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x150A64F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150A64F8: jr          $ra
    // 0x150A64FC: nop

    return;
    return;
    // 0x150A64FC: nop

;}
RECOMP_FUNC void static_5_150A8A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A8A00: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A8A04: sw          $t9, -0x7A80($at)
    MEM_W(-0X7A80, ctx->r1) = ctx->r25;
    // 0x150A8A08: or          $s4, $t4, $zero
    ctx->r20 = ctx->r12 | 0;
    // 0x150A8A0C: or          $t9, $zero, $zero
    ctx->r25 = 0 | 0;
    // 0x150A8A10: j           L_150A8B00
    // 0x150A8A14: nop

    static_5_150A8B00(rdram, ctx);
    return;
    // 0x150A8A14: nop

;}
RECOMP_FUNC void static_5_150A8B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A8B00: lbu         $s1, 0x7($a3)
    ctx->r17 = MEM_BU(ctx->r7, 0X7);
    // 0x150A8B04: andi        $t7, $s1, 0x40
    ctx->r15 = ctx->r17 & 0X40;
    // 0x150A8B08: srl         $t7, $t7, 5
    ctx->r15 = S32(U32(ctx->r15) >> 5);
    // 0x150A8B0C: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x150A8B10: andi        $t7, $s1, 0x20
    ctx->r15 = ctx->r17 & 0X20;
    // 0x150A8B14: srl         $t7, $t7, 4
    ctx->r15 = S32(U32(ctx->r15) >> 4);
    // 0x150A8B18: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x150A8B1C: andi        $s1, $s1, 0x80
    ctx->r17 = ctx->r17 & 0X80;
    // 0x150A8B20: beq         $s1, $zero, L_150A8C04
    if (ctx->r17 == 0) {
        // 0x150A8B24: nop
    
            goto L_150A8C04;
    }
    // 0x150A8B24: nop

    // 0x150A8B28: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x150A8B2C: lw          $t7, -0x7A98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7A98);
    // 0x150A8B30: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x150A8B34: addiu       $s6, $t6, -0x1
    ctx->r22 = ADD32(ctx->r14, -0X1);
    // 0x150A8B38: sll         $s3, $s6, 2
    ctx->r19 = S32(ctx->r22 << 2);
    // 0x150A8B3C: addu        $s0, $s3, $t7
    ctx->r16 = ADD32(ctx->r19, ctx->r15);
    // 0x150A8B40: srl         $s3, $s3, 1
    ctx->r19 = S32(U32(ctx->r19) >> 1);
    // 0x150A8B44: addu        $s0, $s0, $s3
    ctx->r16 = ADD32(ctx->r16, ctx->r19);
    // 0x150A8B48: ldl         $t2, 0x0($t3)
    ctx->r10 = do_ldl(rdram, ctx->r10, ctx->r11, 0X0);
    // 0x150A8B4C: ldr         $t2, 0x7($t3)
    ctx->r10 = do_ldr(rdram, ctx->r10, ctx->r11, 0X7);
    // 0x150A8B50: addiu       $s6, $s6, 0xF
    ctx->r22 = ADD32(ctx->r22, 0XF);
    // 0x150A8B54: srl         $s6, $s6, 4
    ctx->r22 = S32(U32(ctx->r22) >> 4);
    // 0x150A8B58: sll         $s6, $s6, 1
    ctx->r22 = S32(ctx->r22 << 1);
    // 0x150A8B5C: addu        $t3, $t3, $s6
    ctx->r11 = ADD32(ctx->r11, ctx->r22);
L_150A8B60:
    // 0x150A8B60: bgez        $t2, L_150A8BD4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x150A8B64: nop
    
            goto L_150A8BD4;
    }
    // 0x150A8B64: nop

    // 0x150A8B68: addiu       $s2, $t7, 0x6
    ctx->r18 = ADD32(ctx->r15, 0X6);
    // 0x150A8B6C: ldl         $s6, 0x0($t4)
    ctx->r22 = do_ldl(rdram, ctx->r22, ctx->r12, 0X0);
    // 0x150A8B70: ldr         $s6, 0x7($t4)
    ctx->r22 = do_ldr(rdram, ctx->r22, ctx->r12, 0X7);
    // 0x150A8B74: ldl         $s7, 0x0($s4)
    ctx->r23 = do_ldl(rdram, ctx->r23, ctx->r20, 0X0);
    // 0x150A8B78: ldr         $s7, 0x7($s4)
    ctx->r23 = do_ldr(rdram, ctx->r23, ctx->r20, 0X7);
    // 0x150A8B7C: addiu       $t4, $t4, 0x6
    ctx->r12 = ADD32(ctx->r12, 0X6);
    // 0x150A8B80: addiu       $s4, $s4, 0x6
    ctx->r20 = ADD32(ctx->r20, 0X6);
L_150A8B84:
    // 0x150A8B84: dsra32      $t8, $s6, 16
    ctx->r24 = SIGNED(ctx->r22) >> (16 + 32);
    // 0x150A8B88: dsra32      $s3, $s7, 16
    ctx->r19 = SIGNED(ctx->r23) >> (16 + 32);
    // 0x150A8B8C: subu        $s3, $s3, $t8
    ctx->r19 = SUB32(ctx->r19, ctx->r24);
    // 0x150A8B90: mult        $s3, $t9
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A8B94: mflo        $s3
    ctx->r19 = lo;
    // 0x150A8B98: nop

    // 0x150A8B9C: nop

    // 0x150A8BA0: sra         $s3, $s3, 10
    ctx->r19 = S32(SIGNED(ctx->r19) >> 10);
    // 0x150A8BA4: addu        $s3, $s3, $t8
    ctx->r19 = ADD32(ctx->r19, ctx->r24);
    // 0x150A8BA8: sh          $s3, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r19;
    // 0x150A8BAC: dsll        $s6, $s6, 16
    ctx->r22 = ctx->r22 << 16;
    // 0x150A8BB0: dsll        $s7, $s7, 16
    ctx->r23 = ctx->r23 << 16;
    // 0x150A8BB4: addiu       $t7, $t7, 0x2
    ctx->r15 = ADD32(ctx->r15, 0X2);
    // 0x150A8BB8: bne         $s2, $t7, L_150A8B84
    if (ctx->r18 != ctx->r15) {
        // 0x150A8BBC: nop
    
            goto L_150A8B84;
    }
    // 0x150A8BBC: nop

    // 0x150A8BC0: dsll        $t2, $t2, 1
    ctx->r10 = ctx->r10 << 1;
    // 0x150A8BC4: bne         $s0, $t7, L_150A8B60
    if (ctx->r16 != ctx->r15) {
        // 0x150A8BC8: nop
    
            goto L_150A8B60;
    }
    // 0x150A8BC8: nop

    // 0x150A8BCC: j           L_150A8BEC
    // 0x150A8BD0: nop

        goto L_150A8BEC;
    // 0x150A8BD0: nop

L_150A8BD4:
    // 0x150A8BD4: sdl         $zero, 0x0($t7)
    do_sdl(rdram, 0X0, ctx->r15, 0);
    // 0x150A8BD8: sdr         $zero, 0x7($t7)
    do_sdr(rdram, 0X7, ctx->r15, 0);
    // 0x150A8BDC: addiu       $t7, $t7, 0x6
    ctx->r15 = ADD32(ctx->r15, 0X6);
    // 0x150A8BE0: dsll        $t2, $t2, 1
    ctx->r10 = ctx->r10 << 1;
    // 0x150A8BE4: bne         $s0, $t7, L_150A8B60
    if (ctx->r16 != ctx->r15) {
        // 0x150A8BE8: nop
    
            goto L_150A8B60;
    }
    // 0x150A8BE8: nop

L_150A8BEC:
    // 0x150A8BEC: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x150A8BF0: lw          $s0, -0x7AB0($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7AB0);
    // 0x150A8BF4: bne         $s0, $zero, L_150A8C04
    if (ctx->r16 != 0) {
        // 0x150A8BF8: nop
    
            goto L_150A8C04;
    }
    // 0x150A8BF8: nop

    // 0x150A8BFC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A8C00: sw          $t7, -0x7A98($at)
    MEM_W(-0X7A98, ctx->r1) = ctx->r15;
L_150A8C04:
    // 0x150A8C04: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A8C08: sw          $s1, -0x7AB4($at)
    MEM_W(-0X7AB4, ctx->r1) = ctx->r17;
    // 0x150A8C0C: addiu       $t6, $t6, -0x1
    ctx->r14 = ADD32(ctx->r14, -0X1);
    // 0x150A8C10: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x150A8C14: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x150A8C18: addiu       $s6, $zero, 0x40
    ctx->r22 = ADD32(0, 0X40);
    // 0x150A8C1C: ldl         $s3, 0x0($t4)
    ctx->r19 = do_ldl(rdram, ctx->r19, ctx->r12, 0X0);
    // 0x150A8C20: ldr         $s3, 0x7($t4)
    ctx->r19 = do_ldr(rdram, ctx->r19, ctx->r12, 0X7);
    // 0x150A8C24: ldl         $s7, 0x0($s4)
    ctx->r23 = do_ldl(rdram, ctx->r23, ctx->r20, 0X0);
    // 0x150A8C28: ldr         $s7, 0x7($s4)
    ctx->r23 = do_ldr(rdram, ctx->r23, ctx->r20, 0X7);
    // 0x150A8C2C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x150A8C30: lbu         $s1, 0x6($a3)
    ctx->r17 = MEM_BU(ctx->r7, 0X6);
    // 0x150A8C34: srl         $s0, $s1, 4
    ctx->r16 = S32(U32(ctx->r17) >> 4);
    // 0x150A8C38: lb          $t7, 0x0($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X0);
    // 0x150A8C3C: sll         $t7, $t7, 12
    ctx->r15 = S32(ctx->r15 << 12);
    // 0x150A8C40: beq         $s0, $zero, L_150A8C84
    if (ctx->r16 == 0) {
        // 0x150A8C44: nop
    
            goto L_150A8C84;
    }
    // 0x150A8C44: nop

    // 0x150A8C48: subu        $t2, $s6, $s0
    ctx->r10 = SUB32(ctx->r22, ctx->r16);
    // 0x150A8C4C: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x150A8C50: dsrlv       $s5, $s3, $t2
    ctx->r21 = ctx->r19 >> (ctx->r10 & 63);
    // 0x150A8C54: dsrlv       $t8, $s7, $t2
    ctx->r24 = ctx->r23 >> (ctx->r10 & 63);
    // 0x150A8C58: sub         $t8, $t8, $s5
    ctx->r24 = SUB32(ctx->r24, ctx->r21);
    // 0x150A8C5C: mult        $t8, $t9
    result = S64(S32(ctx->r24)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A8C60: sll         $s5, $s5, 10
    ctx->r21 = S32(ctx->r21 << 10);
    // 0x150A8C64: mflo        $t8
    ctx->r24 = lo;
    // 0x150A8C68: nop

    // 0x150A8C6C: nop

    // 0x150A8C70: addu        $s5, $s5, $t8
    ctx->r21 = ADD32(ctx->r21, ctx->r24);
    // 0x150A8C74: sra         $s5, $s5, 5
    ctx->r21 = S32(SIGNED(ctx->r21) >> 5);
    // 0x150A8C78: addu        $t7, $t7, $s5
    ctx->r15 = ADD32(ctx->r15, ctx->r21);
    // 0x150A8C7C: dsllv       $s3, $s3, $s0
    ctx->r19 = ctx->r19 << (ctx->r16 & 63);
    // 0x150A8C80: dsllv       $s7, $s7, $s0
    ctx->r23 = ctx->r23 << (ctx->r16 & 63);
L_150A8C84:
    // 0x150A8C84: mtc1        $t7, $f22
    ctx->f22.u32l = ctx->r15;
    // 0x150A8C88: nop

    // 0x150A8C8C: andi        $s0, $s1, 0xF
    ctx->r16 = ctx->r17 & 0XF;
    // 0x150A8C90: lb          $t7, 0x2($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X2);
    // 0x150A8C94: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x150A8C98: sll         $t7, $t7, 12
    ctx->r15 = S32(ctx->r15 << 12);
    // 0x150A8C9C: beq         $s0, $zero, L_150A8CE0
    if (ctx->r16 == 0) {
        // 0x150A8CA0: nop
    
            goto L_150A8CE0;
    }
    // 0x150A8CA0: nop

    // 0x150A8CA4: subu        $t2, $s6, $s0
    ctx->r10 = SUB32(ctx->r22, ctx->r16);
    // 0x150A8CA8: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x150A8CAC: dsrlv       $s5, $s3, $t2
    ctx->r21 = ctx->r19 >> (ctx->r10 & 63);
    // 0x150A8CB0: dsrlv       $t8, $s7, $t2
    ctx->r24 = ctx->r23 >> (ctx->r10 & 63);
    // 0x150A8CB4: sub         $t8, $t8, $s5
    ctx->r24 = SUB32(ctx->r24, ctx->r21);
    // 0x150A8CB8: mult        $t8, $t9
    result = S64(S32(ctx->r24)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A8CBC: sll         $s5, $s5, 10
    ctx->r21 = S32(ctx->r21 << 10);
    // 0x150A8CC0: mflo        $t8
    ctx->r24 = lo;
    // 0x150A8CC4: nop

    // 0x150A8CC8: nop

    // 0x150A8CCC: addu        $s5, $s5, $t8
    ctx->r21 = ADD32(ctx->r21, ctx->r24);
    // 0x150A8CD0: sra         $s5, $s5, 5
    ctx->r21 = S32(SIGNED(ctx->r21) >> 5);
    // 0x150A8CD4: addu        $t7, $t7, $s5
    ctx->r15 = ADD32(ctx->r15, ctx->r21);
    // 0x150A8CD8: dsllv       $s3, $s3, $s0
    ctx->r19 = ctx->r19 << (ctx->r16 & 63);
    // 0x150A8CDC: dsllv       $s7, $s7, $s0
    ctx->r23 = ctx->r23 << (ctx->r16 & 63);
L_150A8CE0:
    // 0x150A8CE0: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x150A8CE4: sll         $s1, $s1, 12
    ctx->r17 = S32(ctx->r17 << 12);
    // 0x150A8CE8: addu        $t7, $t7, $s1
    ctx->r15 = ADD32(ctx->r15, ctx->r17);
    // 0x150A8CEC: mtc1        $t7, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r15;
    // 0x150A8CF0: nop

    // 0x150A8CF4: lbu         $s1, 0x7($a3)
    ctx->r17 = MEM_BU(ctx->r7, 0X7);
    // 0x150A8CF8: cvt.s.w     $f23, $f23
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    ctx->f23.fl = CVT_S_W(ctx->f_odd[(23 - 1) * 2]);
    // 0x150A8CFC: andi        $s0, $s1, 0xF
    ctx->r16 = ctx->r17 & 0XF;
    // 0x150A8D00: lb          $t7, 0x4($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X4);
    // 0x150A8D04: sll         $t7, $t7, 12
    ctx->r15 = S32(ctx->r15 << 12);
    // 0x150A8D08: beq         $s0, $zero, L_150A8DEC
    if (ctx->r16 == 0) {
        // 0x150A8D0C: nop
    
            goto L_150A8DEC;
    }
    // 0x150A8D0C: nop

    // 0x150A8D10: subu        $t2, $s6, $s0
    ctx->r10 = SUB32(ctx->r22, ctx->r16);
    // 0x150A8D14: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x150A8D18: dsrlv       $s5, $s3, $t2
    ctx->r21 = ctx->r19 >> (ctx->r10 & 63);
    // 0x150A8D1C: dsrlv       $t8, $s7, $t2
    ctx->r24 = ctx->r23 >> (ctx->r10 & 63);
    // 0x150A8D20: sub         $t8, $t8, $s5
    ctx->r24 = SUB32(ctx->r24, ctx->r21);
    // 0x150A8D24: lbu         $s1, 0x7($a3)
    ctx->r17 = MEM_BU(ctx->r7, 0X7);
    // 0x150A8D28: andi        $s1, $s1, 0x40
    ctx->r17 = ctx->r17 & 0X40;
    // 0x150A8D2C: bne         $s1, $zero, L_150A8D74
    if (ctx->r17 != 0) {
        // 0x150A8D30: nop
    
            goto L_150A8D74;
    }
    // 0x150A8D30: nop

    // 0x150A8D34: mult        $t8, $t9
    result = S64(S32(ctx->r24)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A8D38: sll         $s5, $s5, 10
    ctx->r21 = S32(ctx->r21 << 10);
    // 0x150A8D3C: mflo        $t8
    ctx->r24 = lo;
    // 0x150A8D40: nop

    // 0x150A8D44: nop

    // 0x150A8D48: addu        $s5, $s5, $t8
    ctx->r21 = ADD32(ctx->r21, ctx->r24);
    // 0x150A8D4C: sra         $s5, $s5, 5
    ctx->r21 = S32(SIGNED(ctx->r21) >> 5);
    // 0x150A8D50: addu        $t7, $t7, $s5
    ctx->r15 = ADD32(ctx->r15, ctx->r21);
    // 0x150A8D54: j           L_150A8DE4
    // 0x150A8D58: nop

        goto L_150A8DE4;
    // 0x150A8D58: nop

L_150A8D5C:
    // 0x150A8D5C: lh          $s1, 0xA($a3)
    ctx->r17 = MEM_H(ctx->r7, 0XA);
    // 0x150A8D60: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A8D64: sw          $s1, -0x7AA0($at)
    MEM_W(-0X7AA0, ctx->r1) = ctx->r17;
    // 0x150A8D68: subu        $t8, $s1, $s5
    ctx->r24 = SUB32(ctx->r17, ctx->r21);
    // 0x150A8D6C: j           L_150A8DC4
    // 0x150A8D70: nop

        goto L_150A8DC4;
    // 0x150A8D70: nop

L_150A8D74:
    // 0x150A8D74: or          $t7, $zero, $zero
    ctx->r15 = 0 | 0;
    // 0x150A8D78: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x150A8D7C: lw          $s1, -0x7AB0($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X7AB0);
    // 0x150A8D80: bne         $s1, $zero, L_150A8DE4
    if (ctx->r17 != 0) {
        // 0x150A8D84: nop
    
            goto L_150A8DE4;
    }
    // 0x150A8D84: nop

    // 0x150A8D88: lh          $s1, 0xA($a3)
    ctx->r17 = MEM_H(ctx->r7, 0XA);
    // 0x150A8D8C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A8D90: sw          $s1, -0x7AA8($at)
    MEM_W(-0X7AA8, ctx->r1) = ctx->r17;
    // 0x150A8D94: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x150A8D98: lw          $s1, -0x7AB0($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X7AB0);
    // 0x150A8D9C: addu        $s1, $s1, $a2
    ctx->r17 = ADD32(ctx->r17, ctx->r6);
    // 0x150A8DA0: lwc1        $f24, 0x18($s1)
    ctx->f24.u32l = MEM_W(ctx->r17, 0X18);
    // 0x150A8DA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150A8DA8: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x150A8DAC: nop

    // 0x150A8DB0: sub.s       $f24, $f24, $f25
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f24.fl = ctx->f24.fl - ctx->f25.fl;
    // 0x150A8DB4: lwc1        $f25, 0x8($s1)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x150A8DB8: c.olt.s     $f24, $f25
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f24.fl < ctx->f25.fl;
    // 0x150A8DBC: bc1t        L_150A8D5C
    if (c1cs) {
        // 0x150A8DC0: nop
    
            goto L_150A8D5C;
    }
    // 0x150A8DC0: nop

L_150A8DC4:
    // 0x150A8DC4: mult        $t8, $t9
    result = S64(S32(ctx->r24)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A8DC8: sll         $s5, $s5, 10
    ctx->r21 = S32(ctx->r21 << 10);
    // 0x150A8DCC: mflo        $t8
    ctx->r24 = lo;
    // 0x150A8DD0: nop

    // 0x150A8DD4: nop

    // 0x150A8DD8: addu        $s5, $s5, $t8
    ctx->r21 = ADD32(ctx->r21, ctx->r24);
    // 0x150A8DDC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A8DE0: sw          $s5, -0x7AAC($at)
    MEM_W(-0X7AAC, ctx->r1) = ctx->r21;
L_150A8DE4:
    // 0x150A8DE4: dsllv       $s3, $s3, $s0
    ctx->r19 = ctx->r19 << (ctx->r16 & 63);
    // 0x150A8DE8: dsllv       $s7, $s7, $s0
    ctx->r23 = ctx->r23 << (ctx->r16 & 63);
L_150A8DEC:
    // 0x150A8DEC: mtc1        $t7, $f24
    ctx->f24.u32l = ctx->r15;
    // 0x150A8DF0: nop

    // 0x150A8DF4: cvt.s.w     $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.fl = CVT_S_W(ctx->f24.u32l);
    // 0x150A8DF8: ori         $t7, $zero, 0xFFF0
    ctx->r15 = 0 | 0XFFF0;
L_150A8DFC:
    // 0x150A8DFC: lhu         $s0, 0x0($t3)
    ctx->r16 = MEM_HU(ctx->r11, 0X0);
    // 0x150A8E00: andi        $s1, $s0, 0xF
    ctx->r17 = ctx->r16 & 0XF;
    // 0x150A8E04: and         $s0, $s0, $t7
    ctx->r16 = ctx->r16 & ctx->r15;
    // 0x150A8E08: beq         $s1, $zero, L_150A8E90
    if (ctx->r17 == 0) {
        // 0x150A8E0C: nop
    
            goto L_150A8E90;
    }
    // 0x150A8E0C: nop

    // 0x150A8E10: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x150A8E14: slti        $at, $s2, 0x41
    ctx->r1 = SIGNED(ctx->r18) < 0X41 ? 1 : 0;
    // 0x150A8E18: bne         $at, $zero, L_150A8E50
    if (ctx->r1 != 0) {
        // 0x150A8E1C: nop
    
            goto L_150A8E50;
    }
    // 0x150A8E1C: nop

    // 0x150A8E20: subu        $s2, $s2, $s1
    ctx->r18 = SUB32(ctx->r18, ctx->r17);
    // 0x150A8E24: srl         $s3, $s2, 3
    ctx->r19 = S32(U32(ctx->r18) >> 3);
    // 0x150A8E28: addu        $t4, $t4, $s3
    ctx->r12 = ADD32(ctx->r12, ctx->r19);
    // 0x150A8E2C: addu        $s4, $s4, $s3
    ctx->r20 = ADD32(ctx->r20, ctx->r19);
    // 0x150A8E30: andi        $s2, $s2, 0x7
    ctx->r18 = ctx->r18 & 0X7;
    // 0x150A8E34: ldl         $s3, 0x0($t4)
    ctx->r19 = do_ldl(rdram, ctx->r19, ctx->r12, 0X0);
    // 0x150A8E38: ldr         $s3, 0x7($t4)
    ctx->r19 = do_ldr(rdram, ctx->r19, ctx->r12, 0X7);
    // 0x150A8E3C: ldl         $s7, 0x0($s4)
    ctx->r23 = do_ldl(rdram, ctx->r23, ctx->r20, 0X0);
    // 0x150A8E40: ldr         $s7, 0x7($s4)
    ctx->r23 = do_ldr(rdram, ctx->r23, ctx->r20, 0X7);
    // 0x150A8E44: dsllv       $s3, $s3, $s2
    ctx->r19 = ctx->r19 << (ctx->r18 & 63);
    // 0x150A8E48: dsllv       $s7, $s7, $s2
    ctx->r23 = ctx->r23 << (ctx->r18 & 63);
    // 0x150A8E4C: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
L_150A8E50:
    // 0x150A8E50: subu        $t2, $s6, $s1
    ctx->r10 = SUB32(ctx->r22, ctx->r17);
    // 0x150A8E54: dsrlv       $s5, $s3, $t2
    ctx->r21 = ctx->r19 >> (ctx->r10 & 63);
    // 0x150A8E58: dsrlv       $t8, $s7, $t2
    ctx->r24 = ctx->r23 >> (ctx->r10 & 63);
    // 0x150A8E5C: subu        $t8, $t8, $s5
    ctx->r24 = SUB32(ctx->r24, ctx->r21);
    // 0x150A8E60: sll         $t8, $t8, 21
    ctx->r24 = S32(ctx->r24 << 21);
    // 0x150A8E64: sra         $t8, $t8, 21
    ctx->r24 = S32(SIGNED(ctx->r24) >> 21);
    // 0x150A8E68: mult        $t8, $t9
    result = S64(S32(ctx->r24)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A8E6C: mflo        $t8
    ctx->r24 = lo;
    // 0x150A8E70: nop

    // 0x150A8E74: nop

    // 0x150A8E78: sra         $t8, $t8, 10
    ctx->r24 = S32(SIGNED(ctx->r24) >> 10);
    // 0x150A8E7C: addu        $s5, $s5, $t8
    ctx->r21 = ADD32(ctx->r21, ctx->r24);
    // 0x150A8E80: sll         $s5, $s5, 5
    ctx->r21 = S32(ctx->r21 << 5);
    // 0x150A8E84: addu        $s0, $s0, $s5
    ctx->r16 = ADD32(ctx->r16, ctx->r21);
    // 0x150A8E88: dsllv       $s3, $s3, $s1
    ctx->r19 = ctx->r19 << (ctx->r17 & 63);
    // 0x150A8E8C: dsllv       $s7, $s7, $s1
    ctx->r23 = ctx->r23 << (ctx->r17 & 63);
L_150A8E90:
    // 0x150A8E90: sh          $s0, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r16;
    // 0x150A8E94: andi        $s0, $s0, 0x10
    ctx->r16 = ctx->r16 & 0X10;
    // 0x150A8E98: bne         $s0, $zero, L_150A8F4C
    if (ctx->r16 != 0) {
        // 0x150A8E9C: nop
    
            goto L_150A8F4C;
    }
    // 0x150A8E9C: nop

    // 0x150A8EA0: sh          $s0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r16;
    // 0x150A8EA4: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x150A8EA8: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x150A8EAC: addiu       $t3, $t3, 0x2
    ctx->r11 = ADD32(ctx->r11, 0X2);
    // 0x150A8EB0: addiu       $t6, $t6, -0x1
    ctx->r14 = ADD32(ctx->r14, -0X1);
    // 0x150A8EB4: bne         $t6, $zero, L_150A8DFC
    if (ctx->r14 != 0) {
        // 0x150A8EB8: nop
    
            goto L_150A8DFC;
    }
    // 0x150A8EB8: nop

L_150A8EBC:
    // 0x150A8EBC: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
L_150A8EC0:
    // 0x150A8EC0: lhu         $s0, 0x0($s3)
    ctx->r16 = MEM_HU(ctx->r19, 0X0);
    // 0x150A8EC4: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x150A8EC8: bne         $s0, $at, L_150A8ED8
    if (ctx->r16 != ctx->r1) {
        // 0x150A8ECC: nop
    
            goto L_150A8ED8;
    }
    // 0x150A8ECC: nop

    // 0x150A8ED0: jr          $ra
    // 0x150A8ED4: nop

    return;
    return;
    // 0x150A8ED4: nop

L_150A8ED8:
    // 0x150A8ED8: slti        $at, $s0, 0x800
    ctx->r1 = SIGNED(ctx->r16) < 0X800 ? 1 : 0;
    // 0x150A8EDC: beq         $at, $zero, L_150A8F04
    if (ctx->r1 == 0) {
        // 0x150A8EE0: nop
    
            goto L_150A8F04;
    }
    // 0x150A8EE0: nop

    // 0x150A8EE4: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x150A8EE8: lh          $s5, 0x0($s0)
    ctx->r21 = MEM_H(ctx->r16, 0X0);
    // 0x150A8EEC: lh          $t8, 0x2($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2);
    // 0x150A8EF0: addu        $s5, $s5, $t8
    ctx->r21 = ADD32(ctx->r21, ctx->r24);
    // 0x150A8EF4: sh          $s5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r21;
    // 0x150A8EF8: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x150A8EFC: j           L_150A8EC0
    // 0x150A8F00: nop

        goto L_150A8EC0;
    // 0x150A8F00: nop

L_150A8F04:
    // 0x150A8F04: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150A8F08: lw          $t6, -0x7A94($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7A94);
    // 0x150A8F0C: andi        $s0, $s0, 0x7FF
    ctx->r16 = ctx->r16 & 0X7FF;
    // 0x150A8F10: addu        $s0, $s0, $t6
    ctx->r16 = ADD32(ctx->r16, ctx->r14);
    // 0x150A8F14: lh          $s5, 0x0($s0)
    ctx->r21 = MEM_H(ctx->r16, 0X0);
    // 0x150A8F18: bne         $s5, $zero, L_150A8F24
    if (ctx->r21 != 0) {
        // 0x150A8F1C: nop
    
            goto L_150A8F24;
    }
    // 0x150A8F1C: nop

    // 0x150A8F20: addiu       $s5, $zero, 0x4000
    ctx->r21 = ADD32(0, 0X4000);
L_150A8F24:
    // 0x150A8F24: lh          $t8, 0x2($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2);
    // 0x150A8F28: mult        $s5, $t8
    result = S64(S32(ctx->r21)) * S64(S32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A8F2C: mflo        $s5
    ctx->r21 = lo;
    // 0x150A8F30: nop

    // 0x150A8F34: nop

    // 0x150A8F38: srl         $s5, $s5, 14
    ctx->r21 = S32(U32(ctx->r21) >> 14);
    // 0x150A8F3C: sh          $s5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r21;
    // 0x150A8F40: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x150A8F44: j           L_150A8EC0
    // 0x150A8F48: nop

        goto L_150A8EC0;
    // 0x150A8F48: nop

L_150A8F4C:
    // 0x150A8F4C: lhu         $s0, 0x2($t3)
    ctx->r16 = MEM_HU(ctx->r11, 0X2);
    // 0x150A8F50: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x150A8F54: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x150A8F58: andi        $s1, $s0, 0xF
    ctx->r17 = ctx->r16 & 0XF;
    // 0x150A8F5C: and         $s0, $s0, $t7
    ctx->r16 = ctx->r16 & ctx->r15;
    // 0x150A8F60: beq         $s1, $zero, L_150A8FE4
    if (ctx->r17 == 0) {
        // 0x150A8F64: nop
    
            goto L_150A8FE4;
    }
    // 0x150A8F64: nop

    // 0x150A8F68: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x150A8F6C: slti        $at, $s2, 0x41
    ctx->r1 = SIGNED(ctx->r18) < 0X41 ? 1 : 0;
    // 0x150A8F70: bne         $at, $zero, L_150A8FA8
    if (ctx->r1 != 0) {
        // 0x150A8F74: nop
    
            goto L_150A8FA8;
    }
    // 0x150A8F74: nop

    // 0x150A8F78: subu        $s2, $s2, $s1
    ctx->r18 = SUB32(ctx->r18, ctx->r17);
    // 0x150A8F7C: srl         $s3, $s2, 3
    ctx->r19 = S32(U32(ctx->r18) >> 3);
    // 0x150A8F80: addu        $t4, $t4, $s3
    ctx->r12 = ADD32(ctx->r12, ctx->r19);
    // 0x150A8F84: addu        $s4, $s4, $s3
    ctx->r20 = ADD32(ctx->r20, ctx->r19);
    // 0x150A8F88: andi        $s2, $s2, 0x7
    ctx->r18 = ctx->r18 & 0X7;
    // 0x150A8F8C: ldl         $s3, 0x0($t4)
    ctx->r19 = do_ldl(rdram, ctx->r19, ctx->r12, 0X0);
    // 0x150A8F90: ldr         $s3, 0x7($t4)
    ctx->r19 = do_ldr(rdram, ctx->r19, ctx->r12, 0X7);
    // 0x150A8F94: ldl         $s7, 0x0($s4)
    ctx->r23 = do_ldl(rdram, ctx->r23, ctx->r20, 0X0);
    // 0x150A8F98: ldr         $s7, 0x7($s4)
    ctx->r23 = do_ldr(rdram, ctx->r23, ctx->r20, 0X7);
    // 0x150A8F9C: dsllv       $s3, $s3, $s2
    ctx->r19 = ctx->r19 << (ctx->r18 & 63);
    // 0x150A8FA0: dsllv       $s7, $s7, $s2
    ctx->r23 = ctx->r23 << (ctx->r18 & 63);
    // 0x150A8FA4: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
L_150A8FA8:
    // 0x150A8FA8: subu        $t2, $s6, $s1
    ctx->r10 = SUB32(ctx->r22, ctx->r17);
    // 0x150A8FAC: dsrlv       $s5, $s3, $t2
    ctx->r21 = ctx->r19 >> (ctx->r10 & 63);
    // 0x150A8FB0: dsrlv       $t8, $s7, $t2
    ctx->r24 = ctx->r23 >> (ctx->r10 & 63);
    // 0x150A8FB4: sub         $t8, $t8, $s5
    ctx->r24 = SUB32(ctx->r24, ctx->r21);
    // 0x150A8FB8: mult        $t8, $t9
    result = S64(S32(ctx->r24)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A8FBC: sll         $s5, $s5, 7
    ctx->r21 = S32(ctx->r21 << 7);
    // 0x150A8FC0: mflo        $t8
    ctx->r24 = lo;
    // 0x150A8FC4: nop

    // 0x150A8FC8: nop

    // 0x150A8FCC: sra         $t8, $t8, 3
    ctx->r24 = S32(SIGNED(ctx->r24) >> 3);
    // 0x150A8FD0: addu        $s5, $s5, $t8
    ctx->r21 = ADD32(ctx->r21, ctx->r24);
    // 0x150A8FD4: sra         $s5, $s5, 2
    ctx->r21 = S32(SIGNED(ctx->r21) >> 2);
    // 0x150A8FD8: addu        $s0, $s0, $s5
    ctx->r16 = ADD32(ctx->r16, ctx->r21);
    // 0x150A8FDC: dsllv       $s3, $s3, $s1
    ctx->r19 = ctx->r19 << (ctx->r17 & 63);
    // 0x150A8FE0: dsllv       $s7, $s7, $s1
    ctx->r23 = ctx->r23 << (ctx->r17 & 63);
L_150A8FE4:
    // 0x150A8FE4: sh          $s0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r16;
    // 0x150A8FE8: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x150A8FEC: addiu       $t6, $t6, -0x1
    ctx->r14 = ADD32(ctx->r14, -0X1);
    // 0x150A8FF0: bne         $t6, $zero, L_150A8DFC
    if (ctx->r14 != 0) {
        // 0x150A8FF4: nop
    
            goto L_150A8DFC;
    }
    // 0x150A8FF4: nop

    // 0x150A8FF8: j           L_150A8EBC
    // 0x150A8FFC: nop

        goto L_150A8EBC;
    // 0x150A8FFC: nop

;}
RECOMP_FUNC void static_5_150A9000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A9000: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x150A9004: lw          $t0, -0x7AB8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7AB8);
    // 0x150A9008: lbu         $t1, 0x47($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X47);
    // 0x150A900C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x150A9010: lw          $a2, -0x7A90($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X7A90);
    // 0x150A9014: andi        $t1, $t1, 0x20
    ctx->r9 = ctx->r9 & 0X20;
    // 0x150A9018: beq         $t1, $zero, L_150A9024
    if (ctx->r9 == 0) {
        // 0x150A901C: nop
    
            goto L_150A9024;
    }
    // 0x150A901C: nop

    // 0x150A9020: lh          $t1, 0x2($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X2);
L_150A9024:
    // 0x150A9024: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A9028: sw          $t1, -0x7A84($at)
    MEM_W(-0X7A84, ctx->r1) = ctx->r9;
    // 0x150A902C: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x150A9030: lw          $a3, -0x7AC0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X7AC0);
    // 0x150A9034: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x150A9038: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x150A903C: addu        $s5, $s0, $t0
    ctx->r21 = ADD32(ctx->r16, ctx->r8);
    // 0x150A9040: addiu       $s2, $zero, 0x200
    ctx->r18 = ADD32(0, 0X200);
    // 0x150A9044: sll         $s3, $s2, 1
    ctx->r19 = S32(ctx->r18 << 1);
    // 0x150A9048: addu        $s4, $s2, $s3
    ctx->r20 = ADD32(ctx->r18, ctx->r19);
    // 0x150A904C: lui         $at, 0x3880
    ctx->r1 = S32(0X3880 << 16);
    // 0x150A9050: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x150A9054: addiu       $t3, $zero, 0x7FC
    ctx->r11 = ADD32(0, 0X7FC);
    // 0x150A9058: addiu       $s6, $zero, 0x800
    ctx->r22 = ADD32(0, 0X800);
    // 0x150A905C: lui         $t5, 0x150B
    ctx->r13 = S32(0X150B << 16);
    // 0x150A9060: addiu       $t5, $t5, -0x63C4
    ctx->r13 = ADD32(ctx->r13, -0X63C4);
    // 0x150A9064: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x150A9068: lw          $t8, -0x7A8C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7A8C);
    // 0x150A906C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x150A9070: lw          $s0, -0x7AB4($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7AB4);
L_150A9074:
    // 0x150A9074: lbu         $t7, 0x1($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X1);
    // 0x150A9078: sll         $t2, $t7, 6
    ctx->r10 = S32(ctx->r15 << 6);
    // 0x150A907C: lbu         $t7, 0x2($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X2);
    // 0x150A9080: addu        $a0, $t2, $a3
    ctx->r4 = ADD32(ctx->r10, ctx->r7);
    // 0x150A9084: sll         $t1, $t7, 1
    ctx->r9 = S32(ctx->r15 << 1);
    // 0x150A9088: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x150A908C: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x150A9090: beq         $s0, $zero, L_150A90FC
    if (ctx->r16 == 0) {
        // 0x150A9094: addu        $s7, $t8, $t1
        ctx->r23 = ADD32(ctx->r24, ctx->r9);
            goto L_150A90FC;
    }
    // 0x150A9094: addu        $s7, $t8, $t1
    ctx->r23 = ADD32(ctx->r24, ctx->r9);
    // 0x150A9098: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x150A909C: lui         $at, 0x3D80
    ctx->r1 = S32(0X3D80 << 16);
    // 0x150A90A0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x150A90A4: lh          $t7, 0x0($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X0);
    // 0x150A90A8: lwc1        $f0, 0x4($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
    // 0x150A90AC: mtc1        $t7, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r15;
    // 0x150A90B0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x150A90B4: mul.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f5.fl);
    // 0x150A90B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x150A90BC: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x150A90C0: lh          $t7, 0x2($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X2);
    // 0x150A90C4: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x150A90C8: mtc1        $t7, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r15;
    // 0x150A90CC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x150A90D0: mul.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f5.fl);
    // 0x150A90D4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x150A90D8: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x150A90DC: lh          $t7, 0x4($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X4);
    // 0x150A90E0: lwc1        $f0, 0xC($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0XC);
    // 0x150A90E4: mtc1        $t7, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r15;
    // 0x150A90E8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x150A90EC: mul.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f5.fl);
    // 0x150A90F0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x150A90F4: j           L_150A9114
    // 0x150A90F8: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
        goto L_150A9114;
    // 0x150A90F8: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
L_150A90FC:
    // 0x150A90FC: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x150A9100: sw          $t2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r10;
    // 0x150A9104: lw          $t2, 0x8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X8);
    // 0x150A9108: sw          $t2, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r10;
    // 0x150A910C: lw          $t2, 0xC($t0)
    ctx->r10 = MEM_W(ctx->r8, 0XC);
    // 0x150A9110: sw          $t2, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r10;
L_150A9114:
    // 0x150A9114: addu        $t1, $a2, $t1
    ctx->r9 = ADD32(ctx->r6, ctx->r9);
    // 0x150A9118: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x150A911C: srl         $t2, $t2, 5
    ctx->r10 = S32(U32(ctx->r10) >> 5);
    // 0x150A9120: and         $t7, $t2, $s4
    ctx->r15 = ctx->r10 & ctx->r20;
    // 0x150A9124: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x150A9128: beq         $t7, $s4, L_150A9164
    if (ctx->r15 == ctx->r20) {
        // 0x150A912C: and         $t4, $t2, $t3
        ctx->r12 = ctx->r10 & ctx->r11;
            goto L_150A9164;
    }
    // 0x150A912C: and         $t4, $t2, $t3
    ctx->r12 = ctx->r10 & ctx->r11;
    // 0x150A9130: beq         $t7, $s3, L_150A9180
    if (ctx->r15 == ctx->r19) {
        // 0x150A9134: addu        $t6, $t4, $t5
        ctx->r14 = ADD32(ctx->r12, ctx->r13);
            goto L_150A9180;
    }
    // 0x150A9134: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A9138: beq         $t7, $s2, L_150A9150
    if (ctx->r15 == ctx->r18) {
        // 0x150A913C: subu        $t4, $s6, $t4
        ctx->r12 = SUB32(ctx->r22, ctx->r12);
            goto L_150A9150;
    }
    // 0x150A913C: subu        $t4, $s6, $t4
    ctx->r12 = SUB32(ctx->r22, ctx->r12);
    // 0x150A9140: lwc1        $f1, 0x0($t6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A9144: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A9148: j           L_150A9198
    // 0x150A914C: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
        goto L_150A9198;
    // 0x150A914C: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
L_150A9150:
    // 0x150A9150: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A9154: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A9158: lwc1        $f1, 0x0($t6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A915C: j           L_150A9198
    // 0x150A9160: sub.s       $f0, $f30, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f0.fl;
        goto L_150A9198;
    // 0x150A9160: sub.s       $f0, $f30, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f0.fl;
L_150A9164:
    // 0x150A9164: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A9168: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A916C: subu        $t4, $s6, $t4
    ctx->r12 = SUB32(ctx->r22, ctx->r12);
    // 0x150A9170: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A9174: lwc1        $f1, 0x0($t6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A9178: j           L_150A9198
    // 0x150A917C: sub.s       $f1, $f30, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f30.fl - ctx->f1.fl;
        goto L_150A9198;
    // 0x150A917C: sub.s       $f1, $f30, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f30.fl - ctx->f1.fl;
L_150A9180:
    // 0x150A9180: lwc1        $f1, 0x0($t6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A9184: subu        $t4, $s6, $t4
    ctx->r12 = SUB32(ctx->r22, ctx->r12);
    // 0x150A9188: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A918C: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A9190: sub.s       $f1, $f30, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f30.fl - ctx->f1.fl;
    // 0x150A9194: sub.s       $f0, $f30, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f0.fl;
L_150A9198:
    // 0x150A9198: lhu         $t2, 0x4($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X4);
    // 0x150A919C: srl         $t2, $t2, 5
    ctx->r10 = S32(U32(ctx->r10) >> 5);
    // 0x150A91A0: and         $t7, $t2, $s4
    ctx->r15 = ctx->r10 & ctx->r20;
    // 0x150A91A4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x150A91A8: beq         $t7, $s4, L_150A91E4
    if (ctx->r15 == ctx->r20) {
        // 0x150A91AC: and         $t4, $t2, $t3
        ctx->r12 = ctx->r10 & ctx->r11;
            goto L_150A91E4;
    }
    // 0x150A91AC: and         $t4, $t2, $t3
    ctx->r12 = ctx->r10 & ctx->r11;
    // 0x150A91B0: beq         $t7, $s3, L_150A9200
    if (ctx->r15 == ctx->r19) {
        // 0x150A91B4: addu        $t6, $t4, $t5
        ctx->r14 = ADD32(ctx->r12, ctx->r13);
            goto L_150A9200;
    }
    // 0x150A91B4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A91B8: beq         $t7, $s2, L_150A91D0
    if (ctx->r15 == ctx->r18) {
        // 0x150A91BC: subu        $t4, $s6, $t4
        ctx->r12 = SUB32(ctx->r22, ctx->r12);
            goto L_150A91D0;
    }
    // 0x150A91BC: subu        $t4, $s6, $t4
    ctx->r12 = SUB32(ctx->r22, ctx->r12);
    // 0x150A91C0: lwc1        $f5, 0x0($t6)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A91C4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A91C8: j           L_150A9218
    // 0x150A91CC: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
        goto L_150A9218;
    // 0x150A91CC: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
L_150A91D0:
    // 0x150A91D0: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A91D4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A91D8: lwc1        $f5, 0x0($t6)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A91DC: j           L_150A9218
    // 0x150A91E0: sub.s       $f4, $f30, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f30.fl - ctx->f4.fl;
        goto L_150A9218;
    // 0x150A91E0: sub.s       $f4, $f30, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f30.fl - ctx->f4.fl;
L_150A91E4:
    // 0x150A91E4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A91E8: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A91EC: subu        $t4, $s6, $t4
    ctx->r12 = SUB32(ctx->r22, ctx->r12);
    // 0x150A91F0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A91F4: lwc1        $f5, 0x0($t6)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A91F8: j           L_150A9218
    // 0x150A91FC: sub.s       $f5, $f30, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = ctx->f30.fl - ctx->f5.fl;
        goto L_150A9218;
    // 0x150A91FC: sub.s       $f5, $f30, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = ctx->f30.fl - ctx->f5.fl;
L_150A9200:
    // 0x150A9200: lwc1        $f5, 0x0($t6)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A9204: subu        $t4, $s6, $t4
    ctx->r12 = SUB32(ctx->r22, ctx->r12);
    // 0x150A9208: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A920C: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A9210: sub.s       $f5, $f30, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = ctx->f30.fl - ctx->f5.fl;
    // 0x150A9214: sub.s       $f4, $f30, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f30.fl - ctx->f4.fl;
L_150A9218:
    // 0x150A9218: mul.s       $f6, $f1, $f5
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f6.fl = MUL_S(ctx->f1.fl, ctx->f5.fl);
    // 0x150A921C: lhu         $t2, 0x2($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X2);
    // 0x150A9220: mul.s       $f7, $f0, $f5
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f7.fl = MUL_S(ctx->f0.fl, ctx->f5.fl);
    // 0x150A9224: srl         $t2, $t2, 5
    ctx->r10 = S32(U32(ctx->r10) >> 5);
    // 0x150A9228: mul.s       $f8, $f1, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f1.fl, ctx->f4.fl);
    // 0x150A922C: and         $t7, $t2, $s4
    ctx->r15 = ctx->r10 & ctx->r20;
    // 0x150A9230: mul.s       $f9, $f0, $f4
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f9.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150A9234: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x150A9238: beq         $t7, $s4, L_150A9274
    if (ctx->r15 == ctx->r20) {
        // 0x150A923C: and         $t4, $t2, $t3
        ctx->r12 = ctx->r10 & ctx->r11;
            goto L_150A9274;
    }
    // 0x150A923C: and         $t4, $t2, $t3
    ctx->r12 = ctx->r10 & ctx->r11;
    // 0x150A9240: beq         $t7, $s3, L_150A9290
    if (ctx->r15 == ctx->r19) {
        // 0x150A9244: addu        $t6, $t4, $t5
        ctx->r14 = ADD32(ctx->r12, ctx->r13);
            goto L_150A9290;
    }
    // 0x150A9244: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A9248: beq         $t7, $s2, L_150A9260
    if (ctx->r15 == ctx->r18) {
        // 0x150A924C: subu        $t4, $s6, $t4
        ctx->r12 = SUB32(ctx->r22, ctx->r12);
            goto L_150A9260;
    }
    // 0x150A924C: subu        $t4, $s6, $t4
    ctx->r12 = SUB32(ctx->r22, ctx->r12);
    // 0x150A9250: lwc1        $f3, 0x0($t6)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A9254: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A9258: j           L_150A92A8
    // 0x150A925C: lwc1        $f2, 0x0($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X0);
        goto L_150A92A8;
    // 0x150A925C: lwc1        $f2, 0x0($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X0);
L_150A9260:
    // 0x150A9260: lwc1        $f2, 0x0($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A9264: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A9268: lwc1        $f3, 0x0($t6)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A926C: j           L_150A92A8
    // 0x150A9270: sub.s       $f2, $f30, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f30.fl - ctx->f2.fl;
        goto L_150A92A8;
    // 0x150A9270: sub.s       $f2, $f30, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f30.fl - ctx->f2.fl;
L_150A9274:
    // 0x150A9274: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A9278: lwc1        $f2, 0x0($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A927C: subu        $t4, $s6, $t4
    ctx->r12 = SUB32(ctx->r22, ctx->r12);
    // 0x150A9280: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A9284: lwc1        $f3, 0x0($t6)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A9288: j           L_150A92A8
    // 0x150A928C: sub.s       $f3, $f30, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f30.fl - ctx->f3.fl;
        goto L_150A92A8;
    // 0x150A928C: sub.s       $f3, $f30, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f30.fl - ctx->f3.fl;
L_150A9290:
    // 0x150A9290: lwc1        $f3, 0x0($t6)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A9294: subu        $t4, $s6, $t4
    ctx->r12 = SUB32(ctx->r22, ctx->r12);
    // 0x150A9298: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150A929C: lwc1        $f2, 0x0($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A92A0: sub.s       $f3, $f30, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f30.fl - ctx->f3.fl;
    // 0x150A92A4: sub.s       $f2, $f30, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f30.fl - ctx->f2.fl;
L_150A92A8:
    // 0x150A92A8: mul.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x150A92AC: addiu       $t1, $t1, 0x6
    ctx->r9 = ADD32(ctx->r9, 0X6);
    // 0x150A92B0: lhu         $t7, 0x0($s7)
    ctx->r15 = MEM_HU(ctx->r23, 0X0);
    // 0x150A92B4: mul.s       $f13, $f2, $f5
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f13.fl = MUL_S(ctx->f2.fl, ctx->f5.fl);
    // 0x150A92B8: bne         $t7, $zero, L_150A9338
    if (ctx->r15 != 0) {
        // 0x150A92BC: nop
    
            goto L_150A9338;
    }
    // 0x150A92BC: nop

    // 0x150A92C0: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x150A92C4: sub.s       $f14, $f30, $f3
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f14.fl = ctx->f30.fl - ctx->f3.fl;
    // 0x150A92C8: swc1        $f13, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f_odd[(13 - 1) * 2];
L_150A92CC:
    // 0x150A92CC: mul.s       $f15, $f8, $f3
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f15.fl = MUL_S(ctx->f8.fl, ctx->f3.fl);
    // 0x150A92D0: swc1        $f14, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f14.u32l;
    // 0x150A92D4: sub.s       $f15, $f15, $f7
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f15.fl = ctx->f15.fl - ctx->f7.fl;
    // 0x150A92D8: lhu         $t7, 0x2($s7)
    ctx->r15 = MEM_HU(ctx->r23, 0X2);
    // 0x150A92DC: mul.s       $f16, $f6, $f3
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f3.fl);
    // 0x150A92E0: bne         $t7, $zero, L_150A937C
    if (ctx->r15 != 0) {
        // 0x150A92E4: nop
    
            goto L_150A937C;
    }
    // 0x150A92E4: nop

    // 0x150A92E8: swc1        $f15, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f_odd[(15 - 1) * 2];
    // 0x150A92EC: add.s       $f16, $f16, $f9
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f9.fl;
    // 0x150A92F0: mul.s       $f17, $f1, $f2
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f17.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x150A92F4: swc1        $f16, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f16.u32l;
L_150A92F8:
    // 0x150A92F8: mul.s       $f18, $f9, $f3
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f18.fl = MUL_S(ctx->f9.fl, ctx->f3.fl);
    // 0x150A92FC: swc1        $f17, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f_odd[(17 - 1) * 2];
    // 0x150A9300: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x150A9304: lhu         $t7, 0x4($s7)
    ctx->r15 = MEM_HU(ctx->r23, 0X4);
    // 0x150A9308: mul.s       $f19, $f7, $f3
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f19.fl = MUL_S(ctx->f7.fl, ctx->f3.fl);
    // 0x150A930C: bne         $t7, $zero, L_150A93C4
    if (ctx->r15 != 0) {
        // 0x150A9310: nop
    
            goto L_150A93C4;
    }
    // 0x150A9310: nop

    // 0x150A9314: swc1        $f18, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f18.u32l;
    // 0x150A9318: sub.s       $f19, $f19, $f8
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f19.fl = ctx->f19.fl - ctx->f8.fl;
    // 0x150A931C: mul.s       $f20, $f0, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150A9320: swc1        $f19, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f_odd[(19 - 1) * 2];
    // 0x150A9324: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x150A9328: bne         $t0, $s5, L_150A9074
    if (ctx->r8 != ctx->r21) {
        // 0x150A932C: swc1        $f20, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->f20.u32l;
            goto L_150A9074;
    }
    // 0x150A932C: swc1        $f20, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f20.u32l;
    // 0x150A9330: j           L_150A9400
    // 0x150A9334: nop

    static_5_150A9400(rdram, ctx);
    return;
    // 0x150A9334: nop

L_150A9338:
    // 0x150A9338: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x150A933C: nop

    // 0x150A9340: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150A9344: mul.s       $f10, $f10, $f21
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f21.fl);
    // 0x150A9348: sub.s       $f14, $f30, $f3
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f14.fl = ctx->f30.fl - ctx->f3.fl;
    // 0x150A934C: mul.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x150A9350: nop

    // 0x150A9354: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x150A9358: mul.s       $f13, $f13, $f10
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f13.fl = MUL_S(ctx->f13.fl, ctx->f10.fl);
    // 0x150A935C: lhu         $t7, 0x2($s7)
    ctx->r15 = MEM_HU(ctx->r23, 0X2);
    // 0x150A9360: mul.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x150A9364: beq         $t7, $zero, L_150A92CC
    if (ctx->r15 == 0) {
        // 0x150A9368: swc1        $f13, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->f_odd[(13 - 1) * 2];
            goto L_150A92CC;
    }
    // 0x150A9368: swc1        $f13, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f_odd[(13 - 1) * 2];
    // 0x150A936C: mul.s       $f15, $f8, $f3
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f15.fl = MUL_S(ctx->f8.fl, ctx->f3.fl);
    // 0x150A9370: swc1        $f14, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f14.u32l;
    // 0x150A9374: sub.s       $f15, $f15, $f7
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f15.fl = ctx->f15.fl - ctx->f7.fl;
    // 0x150A9378: mul.s       $f16, $f6, $f3
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f3.fl);
L_150A937C:
    // 0x150A937C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x150A9380: nop

    // 0x150A9384: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150A9388: mul.s       $f10, $f10, $f21
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f21.fl);
    // 0x150A938C: add.s       $f16, $f16, $f9
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f9.fl;
    // 0x150A9390: mul.s       $f15, $f15, $f10
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f15.fl = MUL_S(ctx->f15.fl, ctx->f10.fl);
    // 0x150A9394: nop

    // 0x150A9398: mul.s       $f17, $f1, $f2
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f17.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x150A939C: swc1        $f15, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f_odd[(15 - 1) * 2];
    // 0x150A93A0: mul.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x150A93A4: lhu         $t7, 0x4($s7)
    ctx->r15 = MEM_HU(ctx->r23, 0X4);
    // 0x150A93A8: mul.s       $f17, $f17, $f10
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f17.fl = MUL_S(ctx->f17.fl, ctx->f10.fl);
    // 0x150A93AC: beq         $t7, $zero, L_150A92F8
    if (ctx->r15 == 0) {
        // 0x150A93B0: swc1        $f16, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->f16.u32l;
            goto L_150A92F8;
    }
    // 0x150A93B0: swc1        $f16, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f16.u32l;
    // 0x150A93B4: mul.s       $f18, $f9, $f3
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f18.fl = MUL_S(ctx->f9.fl, ctx->f3.fl);
    // 0x150A93B8: swc1        $f17, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f_odd[(17 - 1) * 2];
    // 0x150A93BC: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x150A93C0: mul.s       $f19, $f7, $f3
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f19.fl = MUL_S(ctx->f7.fl, ctx->f3.fl);
L_150A93C4:
    // 0x150A93C4: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x150A93C8: nop

    // 0x150A93CC: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150A93D0: mul.s       $f10, $f10, $f21
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f21.fl);
    // 0x150A93D4: sub.s       $f19, $f19, $f8
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f19.fl = ctx->f19.fl - ctx->f8.fl;
    // 0x150A93D8: mul.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x150A93DC: nop

    // 0x150A93E0: mul.s       $f20, $f0, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150A93E4: swc1        $f18, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f18.u32l;
    // 0x150A93E8: mul.s       $f19, $f19, $f10
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f19.fl = MUL_S(ctx->f19.fl, ctx->f10.fl);
    // 0x150A93EC: swc1        $f19, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f_odd[(19 - 1) * 2];
    // 0x150A93F0: mul.s       $f20, $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x150A93F4: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x150A93F8: bne         $t0, $s5, L_150A9074
    if (ctx->r8 != ctx->r21) {
        // 0x150A93FC: swc1        $f20, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->f20.u32l;
            goto L_150A9074;
    }
    // 0x150A93FC: swc1        $f20, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f20.u32l;
;}
RECOMP_FUNC void static_5_150A9400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A9400: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x150A9404: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x150A9408: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x150A940C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150A9410: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x150A9414: lw          $s5, -0x7AC0($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X7AC0);
    // 0x150A9418: lwc1        $f1, 0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x150A941C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x150A9420: lw          $s0, -0x7AB8($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7AB8);
    // 0x150A9424: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150A9428: lwc1        $f3, 0x10($v1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x150A942C: lui         $at, 0x3A80
    ctx->r1 = S32(0X3A80 << 16);
    // 0x150A9430: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150A9434: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x150A9438: mul.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x150A943C: lwc1        $f5, 0x18($v1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r3, 0X18);
    // 0x150A9440: lwc1        $f6, 0x20($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X20);
    // 0x150A9444: mul.s       $f23, $f23, $f12
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f23.fl = MUL_S(ctx->f23.fl, ctx->f12.fl);
    // 0x150A9448: lwc1        $f7, 0x24($v1)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r3, 0X24);
    // 0x150A944C: lwc1        $f8, 0x28($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X28);
    // 0x150A9450: mul.s       $f24, $f24, $f12
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f12.fl);
    // 0x150A9454: lwc1        $f9, 0x30($v1)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r3, 0X30);
    // 0x150A9458: mul.s       $f12, $f22, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x150A945C: lwc1        $f10, 0x34($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X34);
    // 0x150A9460: mul.s       $f15, $f23, $f3
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f15.fl = MUL_S(ctx->f23.fl, ctx->f3.fl);
    // 0x150A9464: lwc1        $f11, 0x38($v1)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r3, 0X38);
    // 0x150A9468: add.s       $f12, $f12, $f15
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f15.fl;
    // 0x150A946C: lbu         $s6, 0x1($s0)
    ctx->r22 = MEM_BU(ctx->r16, 0X1);
    // 0x150A9470: mul.s       $f15, $f24, $f6
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f15.fl = MUL_S(ctx->f24.fl, ctx->f6.fl);
    // 0x150A9474: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x150A9478: sll         $s4, $s2, 6
    ctx->r20 = S32(ctx->r18 << 6);
    // 0x150A947C: addu        $s4, $s4, $s5
    ctx->r20 = ADD32(ctx->r20, ctx->r21);
    // 0x150A9480: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x150A9484: lw          $s7, -0x7ABC($s7)
    ctx->r23 = MEM_W(ctx->r23, -0X7ABC);
    // 0x150A9488: sw          $s4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r20;
    // 0x150A948C: sll         $s4, $s6, 6
    ctx->r20 = S32(ctx->r22 << 6);
    // 0x150A9490: addu        $s7, $s4, $s5
    ctx->r23 = ADD32(ctx->r20, ctx->r21);
    // 0x150A9494: mul.s       $f13, $f22, $f1
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f13.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x150A9498: add.s       $f12, $f12, $f15
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f15.fl;
    // 0x150A949C: mul.s       $f15, $f23, $f4
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f15.fl = MUL_S(ctx->f23.fl, ctx->f4.fl);
    // 0x150A94A0: add.s       $f9, $f9, $f12
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f12.fl;
    // 0x150A94A4: add.s       $f13, $f13, $f15
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f13.fl = ctx->f13.fl + ctx->f15.fl;
    // 0x150A94A8: mul.s       $f15, $f24, $f7
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f15.fl = MUL_S(ctx->f24.fl, ctx->f7.fl);
    // 0x150A94AC: lwc1        $f21, 0x0($s7)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r23, 0X0);
    // 0x150A94B0: mul.s       $f14, $f22, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x150A94B4: add.s       $f13, $f13, $f15
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f13.fl = ctx->f13.fl + ctx->f15.fl;
    // 0x150A94B8: mul.s       $f15, $f23, $f5
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f15.fl = MUL_S(ctx->f23.fl, ctx->f5.fl);
    // 0x150A94BC: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x150A94C0: lw          $t1, -0x7A8C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X7A8C);
    // 0x150A94C4: add.s       $f14, $f14, $f15
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f15.fl;
    // 0x150A94C8: mul.s       $f15, $f24, $f8
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f15.fl = MUL_S(ctx->f24.fl, ctx->f8.fl);
    // 0x150A94CC: add.s       $f10, $f10, $f13
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f13.fl;
    // 0x150A94D0: add.s       $f14, $f14, $f15
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f15.fl;
    // 0x150A94D4: j           L_150A956C
    // 0x150A94D8: add.s       $f11, $f11, $f14
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f14.fl;
    static_5_150A956C(rdram, ctx);
    return;
    // 0x150A94D8: add.s       $f11, $f11, $f14
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f14.fl;
;}
RECOMP_FUNC void static_5_150A956C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A94DC:
    // 0x150A956C: lwc1        $f22, 0x4($s7)
    ctx->f22.u32l = MEM_W(ctx->r23, 0X4);
    // 0x150A9570: mul.s       $f24, $f21, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x150A9574: lwc1        $f30, 0x8($s7)
    ctx->f30.u32l = MEM_W(ctx->r23, 0X8);
    // 0x150A9578: mul.s       $f26, $f21, $f1
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f26.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x150A957C: lwc1        $f28, 0x10($s7)
    ctx->f28.u32l = MEM_W(ctx->r23, 0X10);
    // 0x150A9580: mul.s       $f25, $f22, $f3
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f25.fl = MUL_S(ctx->f22.fl, ctx->f3.fl);
    // 0x150A9584: lwc1        $f29, 0x14($s7)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r23, 0X14);
    // 0x150A9588: mul.s       $f27, $f22, $f4
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f27.fl = MUL_S(ctx->f22.fl, ctx->f4.fl);
    // 0x150A958C: add.s       $f12, $f24, $f25
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f12.fl = ctx->f24.fl + ctx->f25.fl;
    // 0x150A9590: mul.s       $f24, $f30, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = MUL_S(ctx->f30.fl, ctx->f6.fl);
    // 0x150A9594: nop

    // 0x150A9598: mul.s       $f25, $f30, $f7
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f25.fl = MUL_S(ctx->f30.fl, ctx->f7.fl);
    // 0x150A959C: add.s       $f12, $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f24.fl;
    // 0x150A95A0: mul.s       $f24, $f21, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f21.fl, ctx->f2.fl);
    // 0x150A95A4: swc1        $f12, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->f12.u32l;
    // 0x150A95A8: add.s       $f13, $f25, $f26
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f13.fl = ctx->f25.fl + ctx->f26.fl;
    // 0x150A95AC: mul.s       $f25, $f22, $f5
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f25.fl = MUL_S(ctx->f22.fl, ctx->f5.fl);
    // 0x150A95B0: add.s       $f13, $f13, $f27
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f13.fl = ctx->f13.fl + ctx->f27.fl;
    // 0x150A95B4: add.s       $f14, $f24, $f25
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f14.fl = ctx->f24.fl + ctx->f25.fl;
    // 0x150A95B8: mul.s       $f25, $f30, $f8
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f25.fl = MUL_S(ctx->f30.fl, ctx->f8.fl);
    // 0x150A95BC: add.s       $f14, $f14, $f25
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f25.fl;
    // 0x150A95C0: swc1        $f13, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->f_odd[(13 - 1) * 2];
    // 0x150A95C4: mul.s       $f24, $f28, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f28.fl, ctx->f0.fl);
    // 0x150A95C8: lwc1        $f30, 0x18($s7)
    ctx->f30.u32l = MEM_W(ctx->r23, 0X18);
    // 0x150A95CC: mul.s       $f26, $f28, $f1
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f26.fl = MUL_S(ctx->f28.fl, ctx->f1.fl);
    // 0x150A95D0: lwc1        $f21, 0x20($s7)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r23, 0X20);
    // 0x150A95D4: mul.s       $f25, $f29, $f3
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f25.fl = MUL_S(ctx->f29.fl, ctx->f3.fl);
    // 0x150A95D8: lwc1        $f22, 0x24($s7)
    ctx->f22.u32l = MEM_W(ctx->r23, 0X24);
    // 0x150A95DC: mul.s       $f27, $f29, $f4
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f27.fl = MUL_S(ctx->f29.fl, ctx->f4.fl);
    // 0x150A95E0: add.s       $f15, $f24, $f25
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f15.fl = ctx->f24.fl + ctx->f25.fl;
    // 0x150A95E4: mul.s       $f24, $f30, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = MUL_S(ctx->f30.fl, ctx->f6.fl);
    // 0x150A95E8: swc1        $f14, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->f14.u32l;
    // 0x150A95EC: mul.s       $f25, $f30, $f7
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f25.fl = MUL_S(ctx->f30.fl, ctx->f7.fl);
    // 0x150A95F0: add.s       $f15, $f15, $f24
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f15.fl = ctx->f15.fl + ctx->f24.fl;
    // 0x150A95F4: mul.s       $f24, $f28, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x150A95F8: swc1        $f15, 0x10($s7)
    MEM_W(0X10, ctx->r23) = ctx->f_odd[(15 - 1) * 2];
    // 0x150A95FC: add.s       $f16, $f25, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f25.fl + ctx->f26.fl;
    // 0x150A9600: mul.s       $f25, $f29, $f5
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f25.fl = MUL_S(ctx->f29.fl, ctx->f5.fl);
    // 0x150A9604: add.s       $f16, $f16, $f27
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f27.fl;
    // 0x150A9608: add.s       $f17, $f24, $f25
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f17.fl = ctx->f24.fl + ctx->f25.fl;
    // 0x150A960C: mul.s       $f25, $f30, $f8
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f25.fl = MUL_S(ctx->f30.fl, ctx->f8.fl);
    // 0x150A9610: add.s       $f17, $f17, $f25
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f17.fl = ctx->f17.fl + ctx->f25.fl;
    // 0x150A9614: swc1        $f16, 0x14($s7)
    MEM_W(0X14, ctx->r23) = ctx->f16.u32l;
    // 0x150A9618: mul.s       $f24, $f21, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x150A961C: lwc1        $f30, 0x28($s7)
    ctx->f30.u32l = MEM_W(ctx->r23, 0X28);
    // 0x150A9620: mul.s       $f26, $f21, $f1
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f26.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x150A9624: lwc1        $f28, 0x30($s7)
    ctx->f28.u32l = MEM_W(ctx->r23, 0X30);
    // 0x150A9628: mul.s       $f25, $f22, $f3
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f25.fl = MUL_S(ctx->f22.fl, ctx->f3.fl);
    // 0x150A962C: lwc1        $f29, 0x34($s7)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r23, 0X34);
    // 0x150A9630: mul.s       $f27, $f22, $f4
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f27.fl = MUL_S(ctx->f22.fl, ctx->f4.fl);
    // 0x150A9634: add.s       $f18, $f24, $f25
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f18.fl = ctx->f24.fl + ctx->f25.fl;
    // 0x150A9638: mul.s       $f24, $f30, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = MUL_S(ctx->f30.fl, ctx->f6.fl);
    // 0x150A963C: swc1        $f17, 0x18($s7)
    MEM_W(0X18, ctx->r23) = ctx->f_odd[(17 - 1) * 2];
    // 0x150A9640: mul.s       $f25, $f30, $f7
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f25.fl = MUL_S(ctx->f30.fl, ctx->f7.fl);
    // 0x150A9644: add.s       $f18, $f18, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f24.fl;
    // 0x150A9648: mul.s       $f24, $f21, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f21.fl, ctx->f2.fl);
    // 0x150A964C: add.s       $f19, $f25, $f26
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f19.fl = ctx->f25.fl + ctx->f26.fl;
    // 0x150A9650: mul.s       $f25, $f22, $f5
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f25.fl = MUL_S(ctx->f22.fl, ctx->f5.fl);
    // 0x150A9654: add.s       $f19, $f19, $f27
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f19.fl = ctx->f19.fl + ctx->f27.fl;
    // 0x150A9658: swc1        $f18, 0x20($s7)
    MEM_W(0X20, ctx->r23) = ctx->f18.u32l;
    // 0x150A965C: add.s       $f20, $f24, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f20.fl = ctx->f24.fl + ctx->f25.fl;
    // 0x150A9660: mul.s       $f25, $f30, $f8
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f25.fl = MUL_S(ctx->f30.fl, ctx->f8.fl);
    // 0x150A9664: add.s       $f20, $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f25.fl;
    // 0x150A9668: swc1        $f19, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->f_odd[(19 - 1) * 2];
    // 0x150A966C: mul.s       $f24, $f28, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f28.fl, ctx->f0.fl);
    // 0x150A9670: lwc1        $f30, 0x38($s7)
    ctx->f30.u32l = MEM_W(ctx->r23, 0X38);
    // 0x150A9674: mul.s       $f26, $f28, $f1
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f26.fl = MUL_S(ctx->f28.fl, ctx->f1.fl);
    // 0x150A9678: add.s       $f24, $f24, $f9
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f9.fl;
    // 0x150A967C: mul.s       $f25, $f29, $f3
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f25.fl = MUL_S(ctx->f29.fl, ctx->f3.fl);
    // 0x150A9680: add.s       $f26, $f26, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f10.fl;
    // 0x150A9684: mul.s       $f27, $f29, $f4
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f27.fl = MUL_S(ctx->f29.fl, ctx->f4.fl);
    // 0x150A9688: add.s       $f21, $f24, $f25
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f21.fl = ctx->f24.fl + ctx->f25.fl;
    // 0x150A968C: add.s       $f22, $f26, $f27
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f22.fl = ctx->f26.fl + ctx->f27.fl;
    // 0x150A9690: mul.s       $f24, $f30, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = MUL_S(ctx->f30.fl, ctx->f6.fl);
    // 0x150A9694: swc1        $f20, 0x28($s7)
    MEM_W(0X28, ctx->r23) = ctx->f20.u32l;
    // 0x150A9698: mul.s       $f25, $f30, $f7
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f25.fl = MUL_S(ctx->f30.fl, ctx->f7.fl);
    // 0x150A969C: add.s       $f21, $f21, $f24
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f24.fl;
    // 0x150A96A0: mul.s       $f24, $f28, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x150A96A4: swc1        $f21, 0x30($s7)
    MEM_W(0X30, ctx->r23) = ctx->f_odd[(21 - 1) * 2];
    // 0x150A96A8: add.s       $f22, $f22, $f25
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f25.fl;
    // 0x150A96AC: add.s       $f24, $f24, $f11
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f11.fl;
    // 0x150A96B0: mul.s       $f25, $f29, $f5
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f25.fl = MUL_S(ctx->f29.fl, ctx->f5.fl);
    // 0x150A96B4: swc1        $f22, 0x34($s7)
    MEM_W(0X34, ctx->r23) = ctx->f22.u32l;
    // 0x150A96B8: add.s       $f23, $f24, $f25
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f23.fl = ctx->f24.fl + ctx->f25.fl;
    // 0x150A96BC: mul.s       $f25, $f30, $f8
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f25.fl = MUL_S(ctx->f30.fl, ctx->f8.fl);
    // 0x150A96C0: add.s       $f23, $f23, $f25
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f25.fl;
    // 0x150A96C4: swc1        $f23, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->f_odd[(23 - 1) * 2];
    // 0x150A96C8: beq         $v0, $zero, L_150A96DC
    if (ctx->r2 == 0) {
        // 0x150A96CC: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_150A96DC;
    }
    // 0x150A96CC: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x150A96D0: lbu         $s3, 0x0($s1)
    ctx->r19 = MEM_BU(ctx->r17, 0X0);
    // 0x150A96D4: bne         $s3, $zero, L_150A9750
    if (ctx->r19 != 0) {
        // 0x150A96D8: sll         $s3, $s3, 3
        ctx->r19 = S32(ctx->r19 << 3);
            goto L_150A9750;
    }
    // 0x150A96D8: sll         $s3, $s3, 3
    ctx->r19 = S32(ctx->r19 << 3);
L_150A96DC:
    // 0x150A96DC: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x150A96E0: bne         $s2, $zero, L_150A94DC
    if (ctx->r18 != 0) {
        // 0x150A96E4: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
        // 0x150A96E4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_150A94DC(rdram, ctx);
        return;
    }
    // 0x150A96E4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x150A96E8: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x150A96EC: lwc1        $f20, 0x4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X4);
    // 0x150A96F0: lwc1        $f21, 0x8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x150A96F4: lwc1        $f22, 0xC($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XC);
    // 0x150A96F8: lwc1        $f23, 0x10($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x150A96FC: lwc1        $f24, 0x14($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X14);
    // 0x150A9700: lwc1        $f25, 0x18($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x150A9704: lwc1        $f26, 0x1C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x150A9708: lwc1        $f27, 0x20($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x150A970C: lwc1        $f28, 0x24($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X24);
    // 0x150A9710: lwc1        $f29, 0x28($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x150A9714: lwc1        $f30, 0x2C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150A9718: lwc1        $f31, 0x30($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x150A971C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150A9720: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x150A9724: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x150A9728: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x150A972C: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x150A9730: lw          $s3, 0x10($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X10);
    // 0x150A9734: lw          $s4, 0x14($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X14);
    // 0x150A9738: lw          $s5, 0x18($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X18);
    // 0x150A973C: lw          $s6, 0x1C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X1C);
    // 0x150A9740: lw          $s7, 0x20($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X20);
    // 0x150A9744: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150A9748: jr          $ra
    // 0x150A974C: nop

    return;
    return;
    // 0x150A974C: nop

L_150A9750:
    // 0x150A9750: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x150A9754: addiu       $s1, $s1, -0x7A84
    ctx->r17 = ADD32(ctx->r17, -0X7A84);
    // 0x150A9758: addu        $s1, $s1, $s3
    ctx->r17 = ADD32(ctx->r17, ctx->r19);
    // 0x150A975C: lw          $s3, 0x4($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X4);
    // 0x150A9760: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x150A9764: beq         $s3, $zero, L_150A997C
    if (ctx->r19 == 0) {
        // 0x150A9768: nop
    
            goto L_150A997C;
    }
    // 0x150A9768: nop

    // 0x150A976C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x150A9770: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x150A9774: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x150A9778: sw          $v0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r2;
    // 0x150A977C: sw          $v1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r3;
    // 0x150A9780: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x150A9784: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x150A9788: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x150A978C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x150A9790: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x150A9794: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x150A9798: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x150A979C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x150A97A0: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x150A97A4: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x150A97A8: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x150A97AC: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x150A97B0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150A97B4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x150A97B8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x150A97BC: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x150A97C0: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x150A97C4: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x150A97C8: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x150A97CC: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x150A97D0: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x150A97D4: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x150A97D8: sw          $gp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r28;
    // 0x150A97DC: sw          $sp, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r29;
    // 0x150A97E0: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x150A97E4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x150A97E8: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x150A97EC: swc1        $f0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f0.u32l;
    // 0x150A97F0: swc1        $f1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x150A97F4: swc1        $f2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f2.u32l;
    // 0x150A97F8: swc1        $f3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x150A97FC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x150A9800: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x150A9804: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x150A9808: swc1        $f7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x150A980C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x150A9810: swc1        $f9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x150A9814: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x150A9818: swc1        $f11, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x150A981C: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x150A9820: swc1        $f13, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(13 - 1) * 2];
    // 0x150A9824: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x150A9828: swc1        $f15, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(15 - 1) * 2];
    // 0x150A982C: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x150A9830: swc1        $f17, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(17 - 1) * 2];
    // 0x150A9834: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x150A9838: swc1        $f19, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x150A983C: swc1        $f20, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f20.u32l;
    // 0x150A9840: swc1        $f21, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x150A9844: swc1        $f22, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f22.u32l;
    // 0x150A9848: swc1        $f23, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x150A984C: swc1        $f24, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f24.u32l;
    // 0x150A9850: swc1        $f25, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x150A9854: swc1        $f26, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f26.u32l;
    // 0x150A9858: swc1        $f27, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x150A985C: swc1        $f28, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f28.u32l;
    // 0x150A9860: swc1        $f29, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x150A9864: swc1        $f30, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f30.u32l;
    // 0x150A9868: swc1        $f31, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x150A986C: jalr        $s1
    // 0x150A9870: nop

    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_0;
    // 0x150A9870: nop

    after_0:
    // 0x150A9874: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x150A9878: lwc1        $f0, 0x4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4);
    // 0x150A987C: lwc1        $f1, 0x8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x150A9880: lwc1        $f2, 0xC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC);
    // 0x150A9884: lwc1        $f3, 0x10($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x150A9888: lwc1        $f4, 0x14($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14);
    // 0x150A988C: lwc1        $f5, 0x18($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x150A9890: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x150A9894: lwc1        $f7, 0x20($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x150A9898: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x150A989C: lwc1        $f9, 0x28($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x150A98A0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150A98A4: lwc1        $f11, 0x30($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x150A98A8: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150A98AC: lwc1        $f13, 0x38($sp)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x150A98B0: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150A98B4: lwc1        $f15, 0x40($sp)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x150A98B8: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x150A98BC: lwc1        $f17, 0x48($sp)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x150A98C0: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150A98C4: lwc1        $f19, 0x50($sp)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x150A98C8: lwc1        $f20, 0x54($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150A98CC: lwc1        $f21, 0x58($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x150A98D0: lwc1        $f22, 0x5C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150A98D4: lwc1        $f23, 0x60($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X60);
    // 0x150A98D8: lwc1        $f24, 0x64($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X64);
    // 0x150A98DC: lwc1        $f25, 0x68($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X68);
    // 0x150A98E0: lwc1        $f26, 0x6C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150A98E4: lwc1        $f27, 0x70($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X70);
    // 0x150A98E8: lwc1        $f28, 0x74($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X74);
    // 0x150A98EC: lwc1        $f29, 0x78($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X78);
    // 0x150A98F0: lwc1        $f30, 0x7C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150A98F4: lwc1        $f31, 0x80($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X80);
    // 0x150A98F8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x150A98FC: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x150A9900: lw          $at, 0x4($sp)
    ctx->r1 = MEM_W(ctx->r29, 0X4);
    // 0x150A9904: lw          $v0, 0x8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8);
    // 0x150A9908: lw          $v1, 0xC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC);
    // 0x150A990C: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x150A9910: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x150A9914: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x150A9918: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x150A991C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x150A9920: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x150A9924: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x150A9928: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x150A992C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x150A9930: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x150A9934: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x150A9938: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x150A993C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x150A9940: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x150A9944: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x150A9948: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x150A994C: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x150A9950: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x150A9954: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x150A9958: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x150A995C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x150A9960: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x150A9964: lw          $gp, 0x70($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X70);
    // 0x150A9968: lw          $sp, 0x74($sp)
    ctx->r29 = MEM_W(ctx->r29, 0X74);
    // 0x150A996C: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x150A9970: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x150A9974: j           L_150A96DC
    // 0x150A9978: nop

        goto L_150A96DC;
    // 0x150A9978: nop

L_150A997C:
    // 0x150A997C: jr          $s1
    // 0x150A9980: nop

    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
    return;
    // 0x150A9980: nop

;}
RECOMP_FUNC void static_5_150AA470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_5_150AA814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_5_150AB228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AB228: sw          $a3, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r7;
    // 0x150AB22C: sw          $s0, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r16;
    // 0x150AB230: sw          $s1, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r17;
    // 0x150AB234: sw          $s2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r18;
    // 0x150AB238: sw          $s3, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r19;
    // 0x150AB23C: sw          $s4, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->r20;
    // 0x150AB240: sw          $s5, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r21;
    // 0x150AB244: sw          $s6, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r22;
    // 0x150AB248: sw          $s7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r23;
    // 0x150AB24C: sw          $fp, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r30;
    // 0x150AB250: sw          $gp, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r28;
    // 0x150AB254: swc1        $f20, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f20.u32l;
    // 0x150AB258: swc1        $f21, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x150AB25C: swc1        $f22, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f22.u32l;
    // 0x150AB260: swc1        $f23, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x150AB264: swc1        $f24, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f24.u32l;
    // 0x150AB268: swc1        $f25, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x150AB26C: swc1        $f26, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f26.u32l;
    // 0x150AB270: swc1        $f27, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x150AB274: swc1        $f28, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f28.u32l;
    // 0x150AB278: swc1        $f29, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x150AB27C: swc1        $f30, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f30.u32l;
    // 0x150AB280: swc1        $f31, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x150AB284: sw          $ra, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r31;
    // 0x150AB288: sw          $zero, 0x150($sp)
    MEM_W(0X150, ctx->r29) = 0;
    // 0x150AB28C: sw          $zero, 0x164($sp)
    MEM_W(0X164, ctx->r29) = 0;
    // 0x150AB290: sw          $a2, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->r6;
    // 0x150AB294: lw          $t0, 0x278($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X278);
    // 0x150AB298: sw          $t0, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r8;
    // 0x150AB29C: sw          $zero, 0x148($sp)
    MEM_W(0X148, ctx->r29) = 0;
    // 0x150AB2A0: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x150AB2A4: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x150AB2A8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x150AB2AC: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
    // 0x150AB2B0: addiu       $a1, $sp, 0x1CC
    ctx->r5 = ADD32(ctx->r29, 0X1CC);
    // 0x150AB2B4: addiu       $a2, $sp, 0x158
    ctx->r6 = ADD32(ctx->r29, 0X158);
    // 0x150AB2B8: addiu       $a3, $sp, 0x15C
    ctx->r7 = ADD32(ctx->r29, 0X15C);
    // 0x150AB2BC: jal         0x1507C3E0
    // 0x150AB2C0: nop

    func_1507C3E0(rdram, ctx);
        goto after_0;
    // 0x150AB2C0: nop

    after_0:
    // 0x150AB2C4: addiu       $s1, $zero, 0x0
    ctx->r17 = ADD32(0, 0X0);
    // 0x150AB2C8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150AB2CC: lw          $t0, -0x41B0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X41B0);
    // 0x150AB2D0: lw          $a2, 0x1C8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C8);
    // 0x150AB2D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150AB2D8: bne         $t0, $at, L_150AB3B8
    if (ctx->r8 != ctx->r1) {
        // 0x150AB2DC: nop
    
            goto L_150AB3B8;
    }
    // 0x150AB2DC: nop

    // 0x150AB2E0: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x150AB2E4: nop

    // 0x150AB2E8: cvt.w.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.u32l = CVT_W_S(ctx->f12.fl);
    // 0x150AB2EC: cvt.w.s     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(1 - 1) * 2] = CVT_W_S(ctx->f1.fl);
    // 0x150AB2F0: mfc1        $a0, $f0
    ctx->r4 = (int32_t)ctx->f0.u32l;
    // 0x150AB2F4: nop

    // 0x150AB2F8: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x150AB2FC: nop

    // 0x150AB300: addiu       $a2, $sp, 0x1CC
    ctx->r6 = ADD32(ctx->r29, 0X1CC);
    // 0x150AB304: cvt.w.s     $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.u32l = CVT_W_S(ctx->f14.fl);
    // 0x150AB308: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150AB30C: nop

    // 0x150AB310: lh          $t0, 0x1CC($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1CC);
    // 0x150AB314: add         $a3, $a3, $t0
    ctx->r7 = ADD32(ctx->r7, ctx->r8);
    // 0x150AB318: jal         0x150A64C8
    // 0x150AB31C: nop

    static_5_150A64C8(rdram, ctx);
        goto after_1;
    // 0x150AB31C: nop

    after_1:
    // 0x150AB320: beq         $v0, $zero, L_150AC2D8
    if (ctx->r2 == 0) {
        // 0x150AB324: nop
    
        // 0x150AB324: nop

    static_5_150AC2D8(rdram, ctx);
        return;
    }
    // 0x150AB324: nop

    // 0x150AB328: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x150AB32C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150AB330: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150AB334: addiu       $a1, $a1, 0x37E0
    ctx->r5 = ADD32(ctx->r5, 0X37E0);
    // 0x150AB338: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x150AB33C: jal         0x150A44F0
    // 0x150AB340: nop

    func_150A44F0(rdram, ctx);
        goto after_2;
    // 0x150AB340: nop

    after_2:
    // 0x150AB344: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150AB348: lhu         $t0, 0x37E0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X37E0);
    // 0x150AB34C: sw          $t0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r8;
    // 0x150AB350: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150AB354: lw          $t1, -0x410C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X410C);
    // 0x150AB358: addiu       $t2, $zero, 0xA0
    ctx->r10 = ADD32(0, 0XA0);
    // 0x150AB35C: mult        $t2, $t0
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150AB360: mflo        $t2
    ctx->r10 = lo;
    // 0x150AB364: nop

    // 0x150AB368: nop

    // 0x150AB36C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x150AB370: lhu         $t2, 0x58($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X58);
    // 0x150AB374: sw          $t2, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r10;
    // 0x150AB378: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x150AB37C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150AB380: lw          $t1, -0x4108($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4108);
    // 0x150AB384: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x150AB388: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x150AB38C: sw          $t3, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r11;
    // 0x150AB390: bne         $t3, $zero, L_150AB3A4
    if (ctx->r11 != 0) {
        // 0x150AB394: nop
    
            goto L_150AB3A4;
    }
    // 0x150AB394: nop

    // 0x150AB398: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x150AB39C: j           L_150AC2D8
    // 0x150AB3A0: nop

    static_5_150AC2D8(rdram, ctx);
    return;
    // 0x150AB3A0: nop

L_150AB3A4:
    // 0x150AB3A4: sw          $zero, 0x154($sp)
    MEM_W(0X154, ctx->r29) = 0;
    // 0x150AB3A8: lw          $a2, 0x1C8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C8);
    // 0x150AB3AC: lw          $a3, 0x140($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X140);
    // 0x150AB3B0: j           L_150AB3E8
    // 0x150AB3B4: nop

        goto L_150AB3E8;
    // 0x150AB3B4: nop

L_150AB3B8:
    // 0x150AB3B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150AB3BC: bne         $t0, $at, L_150AB3E8
    if (ctx->r8 != ctx->r1) {
        // 0x150AB3C0: nop
    
            goto L_150AB3E8;
    }
    // 0x150AB3C0: nop

    // 0x150AB3C4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150AB3C8: addiu       $t0, $t0, -0x3D30
    ctx->r8 = ADD32(ctx->r8, -0X3D30);
    // 0x150AB3CC: addiu       $t1, $t0, 0x4F4C
    ctx->r9 = ADD32(ctx->r8, 0X4F4C);
    // 0x150AB3D0: sw          $t1, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r9;
    // 0x150AB3D4: addiu       $t0, $t0, -0x32C
    ctx->r8 = ADD32(ctx->r8, -0X32C);
    // 0x150AB3D8: sw          $t0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r8;
    // 0x150AB3DC: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x150AB3E0: sw          $zero, 0x154($sp)
    MEM_W(0X154, ctx->r29) = 0;
    // 0x150AB3E4: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
L_150AB3E8:
    // 0x150AB3E8: lh          $t0, 0x15C($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X15C);
    // 0x150AB3EC: mtc1        $t0, $f0
    ctx->f0.u32l = ctx->r8;
    // 0x150AB3F0: nop

    // 0x150AB3F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x150AB3F8: lh          $t2, 0x158($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X158);
    // 0x150AB3FC: lw          $t1, 0x1D0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1D0);
    // 0x150AB400: sw          $zero, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = 0;
    // 0x150AB404: jr          $t1
    // 0x150AB408: nop

    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x150AB408: nop

    // 0x150AB40C: lw          $t1, 0x140($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X140);
    // 0x150AB410: lw          $t1, 0x28($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X28);
    // 0x150AB414: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x150AB418: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x150AB41C: nop

    // 0x150AB420: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x150AB424: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150AB428: nop

    // 0x150AB42C: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x150AB430: nop

    // 0x150AB434: addiu       $t0, $t0, 0xA
    ctx->r8 = ADD32(ctx->r8, 0XA);
    // 0x150AB438: addiu       $t2, $t2, 0xA
    ctx->r10 = ADD32(ctx->r10, 0XA);
    // 0x150AB43C: sw          $t0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r8;
    // 0x150AB440: sw          $t2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r10;
    // 0x150AB444: swc1        $f1, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x150AB448: swc1        $f2, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f2.u32l;
    // 0x150AB44C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AB450: lwc1        $f0, -0x4224($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4224);
    // 0x150AB454: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x150AB458: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150AB45C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150AB460: nop

    // 0x150AB464: lwc1        $f12, 0x15C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x150AB468: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x150AB46C: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x150AB470: nop

    // 0x150AB474: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x150AB478: nop

    // 0x150AB47C: lwc1        $f12, 0x158($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
    // 0x150AB480: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x150AB484: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x150AB488: nop

    // 0x150AB48C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AB490: lwc1        $f14, -0x4228($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X4228);
    // 0x150AB494: add.s       $f14, $f14, $f3
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f3.fl;
    // 0x150AB498: jal         0x150492CC
    // 0x150AB49C: nop

    func_150492CC(rdram, ctx);
        goto after_3;
    // 0x150AB49C: nop

    after_3:
    // 0x150AB4A0: j           L_150AB540
    // 0x150AB4A4: nop

        goto L_150AB540;
    // 0x150AB4A4: nop

    // 0x150AB4A8: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x150AB4AC: swc1        $f1, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x150AB4B0: sw          $t0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r8;
    // 0x150AB4B4: sw          $t2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r10;
    // 0x150AB4B8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AB4BC: lwc1        $f0, -0x4224($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4224);
    // 0x150AB4C0: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x150AB4C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150AB4C8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150AB4CC: nop

    // 0x150AB4D0: lwc1        $f12, 0x15C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x150AB4D4: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x150AB4D8: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x150AB4DC: nop

    // 0x150AB4E0: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150AB4E4: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x150AB4E8: lw          $t0, 0x140($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X140);
    // 0x150AB4EC: lwc1        $f4, 0x14($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X14);
    // 0x150AB4F0: lwc1        $f3, 0x1C($t0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r8, 0X1C);
    // 0x150AB4F4: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x150AB4F8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x150AB4FC: nop

    // 0x150AB500: sub.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f3.fl;
    // 0x150AB504: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x150AB508: nop

    // 0x150AB50C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x150AB510: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150AB514: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x150AB518: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x150AB51C: nop

    // 0x150AB520: lwc1        $f12, 0x158($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
    // 0x150AB524: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x150AB528: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x150AB52C: nop

    // 0x150AB530: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AB534: lwc1        $f14, -0x4228($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X4228);
    // 0x150AB538: jal         0x150492CC
    // 0x150AB53C: nop

    func_150492CC(rdram, ctx);
        goto after_4;
    // 0x150AB53C: nop

    after_4:
L_150AB540:
    // 0x150AB540: lw          $a2, 0x1C8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C8);
    // 0x150AB544: lw          $a3, 0x140($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X140);
    // 0x150AB548: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150AB54C: addiu       $t1, $sp, 0x6C
    ctx->r9 = ADD32(ctx->r29, 0X6C);
    // 0x150AB550: addiu       $t2, $t1, 0xC8
    ctx->r10 = ADD32(ctx->r9, 0XC8);
L_150AB554:
    // 0x150AB554: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
    // 0x150AB558: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x150AB55C: bne         $t1, $t2, L_150AB554
    if (ctx->r9 != ctx->r10) {
        // 0x150AB560: nop
    
            goto L_150AB554;
    }
    // 0x150AB560: nop

    // 0x150AB564: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x150AB568: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150AB56C: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x150AB570: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x150AB574: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150AB578: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x150AB57C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150AB580: nop

    // 0x150AB584: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x150AB588: mov.s       $f29, $f12
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 12);
    ctx->f29.fl = ctx->f12.fl;
    // 0x150AB58C: mov.s       $f30, $f14
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 14);
    ctx->f30.fl = ctx->f14.fl;
    // 0x150AB590: mtc1        $a2, $f31
    ctx->f_odd[(31 - 1) * 2] = ctx->r6;
    // 0x150AB594: nop

    // 0x150AB598: lwc1        $f6, 0x14($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X14);
    // 0x150AB59C: lwc1        $f7, 0x18($a3)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r7, 0X18);
    // 0x150AB5A0: lwc1        $f8, 0x1C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x150AB5A4: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x150AB5A8: swc1        $f7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x150AB5AC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x150AB5B0: lui         $t0, 0x150B
    ctx->r8 = S32(0X150B << 16);
    // 0x150AB5B4: addiu       $t0, $t0, -0x4A38
    ctx->r8 = ADD32(ctx->r8, -0X4A38);
    // 0x150AB5B8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150AB5BC: nop

    // 0x150AB5C0: jal         0x150AC1C4
    // 0x150AB5C4: nop

    func_150AC1C4(rdram, ctx);
        goto after_5;
    // 0x150AB5C4: nop

    after_5:
    // 0x150AB5C8: lw          $t0, 0x20($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X20);
    // 0x150AB5CC: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x150AB5D0: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x150AB5D4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150AB5D8: lw          $t0, -0x3DD4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3DD4);
    // 0x150AB5DC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150AB5E0: lw          $t1, -0x3DD0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3DD0);
    // 0x150AB5E4: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150AB5E8: lw          $t2, -0x3DCC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3DCC);
    // 0x150AB5EC: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x150AB5F0: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x150AB5F4: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x150AB5F8: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x150AB5FC: lw          $s0, -0x41B8($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X41B8);
    // 0x150AB600: lw          $t1, 0x1D4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1D4);
    // 0x150AB604: jr          $t1
    // 0x150AB608: nop

    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x150AB608: nop

    // 0x150AB60C: lwc1        $f20, 0x40($a3)
    ctx->f20.u32l = MEM_W(ctx->r7, 0X40);
    // 0x150AB610: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AB614: lwc1        $f21, -0x910($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X910);
    // 0x150AB618: mul.s       $f20, $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f21.fl);
    // 0x150AB61C: nop

    // 0x150AB620: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x150AB624: jal         0x15047D60
    // 0x150AB628: nop

    sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x150AB628: nop

    after_6:
    // 0x150AB62C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x150AB630: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x150AB634: jal         0x15047C00
    // 0x150AB638: nop

    cosf_recomp(rdram, ctx);
        goto after_7;
    // 0x150AB638: nop

    after_7:
    // 0x150AB63C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x150AB640: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
;}
RECOMP_FUNC void static_5_150AB644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150AB644:
    // 0x150AB644: bne         $s1, $zero, L_150AB654
    if (ctx->r17 != 0) {
        // 0x150AB648: lw          $t0, 0x148($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X148);
            goto L_150AB654;
    }
    // 0x150AB648: lw          $t0, 0x148($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X148);
    // 0x150AB64C: bne         $t0, $zero, L_150AB6F0
    if (ctx->r8 != 0) {
        // 0x150AB650: nop
    
        // 0x150AB650: nop

    static_5_150AB6F0(rdram, ctx);
        return;
    }
    // 0x150AB650: nop

L_150AB654:
    // 0x150AB654: lh          $t0, 0x8($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X8);
    // 0x150AB658: lh          $t1, 0xA($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA);
    // 0x150AB65C: lhu         $t2, 0x6($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X6);
    // 0x150AB660: subu        $t3, $t0, $t2
    ctx->r11 = SUB32(ctx->r8, ctx->r10);
    // 0x150AB664: slt         $at, $s3, $t3
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x150AB668: bne         $at, $zero, L_150AB69C
    if (ctx->r1 != 0) {
        // 0x150AB66C: addu        $t3, $t0, $t2
        ctx->r11 = ADD32(ctx->r8, ctx->r10);
            goto L_150AB69C;
    }
    // 0x150AB66C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x150AB670: slt         $at, $t3, $s2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x150AB674: bne         $at, $zero, L_150AB69C
    if (ctx->r1 != 0) {
        // 0x150AB678: subu        $t3, $t1, $t2
        ctx->r11 = SUB32(ctx->r9, ctx->r10);
            goto L_150AB69C;
    }
    // 0x150AB678: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x150AB67C: slt         $at, $s5, $t3
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x150AB680: bne         $at, $zero, L_150AB69C
    if (ctx->r1 != 0) {
        // 0x150AB684: addu        $t3, $t1, $t2
        ctx->r11 = ADD32(ctx->r9, ctx->r10);
            goto L_150AB69C;
    }
    // 0x150AB684: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x150AB688: slt         $at, $t3, $s4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x150AB68C: bne         $at, $zero, L_150AB69C
    if (ctx->r1 != 0) {
        // 0x150AB690: nop
    
            goto L_150AB69C;
    }
    // 0x150AB690: nop

    // 0x150AB694: j           L_150AB6B0
    // 0x150AB698: nop

        goto L_150AB6B0;
    // 0x150AB698: nop

L_150AB69C:
    // 0x150AB69C: lh          $t0, 0x4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X4);
    // 0x150AB6A0: bne         $t0, $zero, L_150AB644
    if (ctx->r8 != 0) {
        // 0x150AB6A4: addu        $s0, $s0, $t0
        ctx->r16 = ADD32(ctx->r16, ctx->r8);
            goto L_150AB644;
    }
    // 0x150AB6A4: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x150AB6A8: j           L_150AC2A0
    // 0x150AB6AC: nop

    static_5_150AC2A0(rdram, ctx);
    return;
    // 0x150AB6AC: nop

L_150AB6B0:
    // 0x150AB6B0: lh          $t0, 0xC($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XC);
    // 0x150AB6B4: bne         $t0, $zero, L_150AB644
    if (ctx->r8 != 0) {
        // 0x150AB6B8: add         $s0, $s0, $t0
        ctx->r16 = ADD32(ctx->r16, ctx->r8);
            goto L_150AB644;
    }
    // 0x150AB6B8: add         $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x150AB6BC: addiu       $s7, $s0, 0xE
    ctx->r23 = ADD32(ctx->r16, 0XE);
    // 0x150AB6C0: lh          $t0, 0x4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X4);
    // 0x150AB6C4: bne         $t0, $zero, L_150AB6D0
    if (ctx->r8 != 0) {
        // 0x150AB6C8: nop
    
            goto L_150AB6D0;
    }
    // 0x150AB6C8: nop

    // 0x150AB6CC: addiu       $s0, $zero, 0x0
    ctx->r16 = ADD32(0, 0X0);
L_150AB6D0:
    // 0x150AB6D0: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x150AB6D4: beq         $s1, $zero, L_150AB6EC
    if (ctx->r17 == 0) {
        // 0x150AB6D8: nop
    
            goto L_150AB6EC;
    }
    // 0x150AB6D8: nop

    // 0x150AB6DC: lw          $t0, 0x14C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14C);
    // 0x150AB6E0: addu        $s7, $s7, $t0
    ctx->r23 = ADD32(ctx->r23, ctx->r8);
    // 0x150AB6E4: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x150AB6E8: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
L_150AB6EC:
    // 0x150AB6EC: lw          $gp, 0x68($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X68);
;}
RECOMP_FUNC void static_5_150AB6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150AB6F0:
    // 0x150AB6F0: bne         $s1, $zero, L_150AB7B4
    if (ctx->r17 != 0) {
        // 0x150AB6F4: lw          $t0, 0x148($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X148);
            goto L_150AB7B4;
    }
    // 0x150AB6F4: lw          $t0, 0x148($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X148);
    // 0x150AB6F8: beq         $t0, $zero, L_150AB7B4
    if (ctx->r8 == 0) {
        // 0x150AB6FC: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_150AB7B4;
    }
    // 0x150AB6FC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x150AB700: lw          $t1, 0x154($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X154);
    // 0x150AB704: bne         $s6, $t1, L_150AB790
    if (ctx->r22 != ctx->r9) {
        // 0x150AB708: lw          $t2, 0x148($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X148);
            goto L_150AB790;
    }
    // 0x150AB708: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x150AB70C: lw          $t3, 0x14C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14C);
    // 0x150AB710: lw          $t4, 0x140($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X140);
    // 0x150AB714: lw          $t5, 0x144($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X144);
L_150AB718:
    // 0x150AB718: addiu       $t2, $t2, 0x32C
    ctx->r10 = ADD32(ctx->r10, 0X32C);
    // 0x150AB71C: beq         $t2, $t3, L_150AC2A0
    if (ctx->r10 == ctx->r11) {
        // 0x150AB720: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
        // 0x150AB720: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    static_5_150AC2A0(rdram, ctx);
        return;
    }
    // 0x150AB720: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x150AB724: beq         $t2, $t4, L_150AB718
    if (ctx->r10 == ctx->r12) {
        // 0x150AB728: lw          $t0, 0x0($t2)
        ctx->r8 = MEM_W(ctx->r10, 0X0);
            goto L_150AB718;
    }
    // 0x150AB728: lw          $t0, 0x0($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X0);
    // 0x150AB72C: beq         $t0, $zero, L_150AB718
    if (ctx->r8 == 0) {
        // 0x150AB730: lw          $t0, 0xF8($t2)
        ctx->r8 = MEM_W(ctx->r10, 0XF8);
            goto L_150AB718;
    }
    // 0x150AB730: lw          $t0, 0xF8($t2)
    ctx->r8 = MEM_W(ctx->r10, 0XF8);
    // 0x150AB734: andi        $t0, $t0, 0x4000
    ctx->r8 = ctx->r8 & 0X4000;
    // 0x150AB738: beq         $t0, $zero, L_150AB718
    if (ctx->r8 == 0) {
        // 0x150AB73C: lw          $t0, 0x264($t2)
        ctx->r8 = MEM_W(ctx->r10, 0X264);
            goto L_150AB718;
    }
    // 0x150AB73C: lw          $t0, 0x264($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X264);
    // 0x150AB740: beq         $t0, $zero, L_150AB718
    if (ctx->r8 == 0) {
        // 0x150AB744: nop
    
            goto L_150AB718;
    }
    // 0x150AB744: nop

    // 0x150AB748: sw          $t2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r10;
    // 0x150AB74C: sw          $t5, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r13;
    // 0x150AB750: sw          $t0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r8;
    // 0x150AB754: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150AB758: addiu       $t0, $t0, 0x6070
    ctx->r8 = ADD32(ctx->r8, 0X6070);
    // 0x150AB75C: lbu         $t1, 0x4($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X4);
    // 0x150AB760: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150AB764: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x150AB768: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x150AB76C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150AB770: sw          $t0, -0x41C4($at)
    MEM_W(-0X41C4, ctx->r1) = ctx->r8;
    // 0x150AB774: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150AB778: addiu       $t0, $t0, 0x5918
    ctx->r8 = ADD32(ctx->r8, 0X5918);
    // 0x150AB77C: srl         $t1, $t1, 1
    ctx->r9 = S32(U32(ctx->r9) >> 1);
    // 0x150AB780: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x150AB784: lhu         $t0, 0x0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X0);
    // 0x150AB788: sw          $t0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r8;
    // 0x150AB78C: addiu       $s6, $zero, 0x0
    ctx->r22 = ADD32(0, 0X0);
L_150AB790:
    // 0x150AB790: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150AB794: addiu       $t0, $t0, -0x3D30
    ctx->r8 = ADD32(ctx->r8, -0X3D30);
    // 0x150AB798: subu        $t0, $t2, $t0
    ctx->r8 = SUB32(ctx->r10, ctx->r8);
    // 0x150AB79C: lw          $t4, 0x268($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X268);
    // 0x150AB7A0: sll         $t0, $s6, 3
    ctx->r8 = S32(ctx->r22 << 3);
    // 0x150AB7A4: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x150AB7A8: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x150AB7AC: j           L_150AB8DC
    // 0x150AB7B0: lw          $a3, 0x26C($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X26C);
        goto L_150AB8DC;
    // 0x150AB7B0: lw          $a3, 0x26C($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X26C);
L_150AB7B4:
    // 0x150AB7B4: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x150AB7B8: lw          $a2, -0x41C0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X41C0);
    // 0x150AB7BC: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x150AB7C0: lw          $a3, -0x41BC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X41BC);
    // 0x150AB7C4: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x150AB7C8: lbu         $t4, 0x0($s7)
    ctx->r12 = MEM_BU(ctx->r23, 0X0);
    // 0x150AB7CC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x150AB7D0: beq         $t4, $zero, L_150AC290
    if (ctx->r12 == 0) {
        // 0x150AB7D4: andi        $s6, $t4, 0x7F
        ctx->r22 = ctx->r12 & 0X7F;
        // 0x150AB7D4: andi        $s6, $t4, 0x7F
    ctx->r22 = ctx->r12 & 0X7F;
    static_5_150AC290(rdram, ctx);
        return;
    }
    // 0x150AB7D4: andi        $s6, $t4, 0x7F
    ctx->r22 = ctx->r12 & 0X7F;
    // 0x150AB7D8: beql        $s6, $t4, L_150AB7F0
    if (ctx->r22 == ctx->r12) {
        // 0x150AB7DC: addu        $s6, $s6, $t8
        ctx->r22 = ADD32(ctx->r22, ctx->r24);
            goto L_150AB7F0;
    }
    goto skip_0;
    // 0x150AB7DC: addu        $s6, $s6, $t8
    ctx->r22 = ADD32(ctx->r22, ctx->r24);
    skip_0:
    // 0x150AB7E0: lbu         $t4, 0x0($s7)
    ctx->r12 = MEM_BU(ctx->r23, 0X0);
    // 0x150AB7E4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x150AB7E8: sll         $s6, $s6, 8
    ctx->r22 = S32(ctx->r22 << 8);
    // 0x150AB7EC: or          $s6, $s6, $t4
    ctx->r22 = ctx->r22 | ctx->r12;
L_150AB7F0:
    // 0x150AB7F0: beq         $s1, $zero, L_150AB89C
    if (ctx->r17 == 0) {
        // 0x150AB7F4: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_150AB89C;
    }
    // 0x150AB7F4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x150AB7F8: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x150AB7FC: addiu       $t3, $zero, 0xA0
    ctx->r11 = ADD32(0, 0XA0);
    // 0x150AB800: mult        $t2, $t3
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150AB804: lw          $t0, 0x14C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14C);
    // 0x150AB808: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150AB80C: lw          $t1, -0x410C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X410C);
    // 0x150AB810: mflo        $t5
    ctx->r13 = lo;
    // 0x150AB814: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x150AB818: lhu         $t5, 0x56($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X56);
    // 0x150AB81C: addu        $t6, $t5, $t0
    ctx->r14 = ADD32(ctx->r13, ctx->r8);
    // 0x150AB820: slt         $at, $s6, $t6
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x150AB824: bne         $at, $zero, L_150AB89C
    if (ctx->r1 != 0) {
        // 0x150AB828: nop
    
            goto L_150AB89C;
    }
    // 0x150AB828: nop

    // 0x150AB82C: lw          $t7, 0x154($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X154);
    // 0x150AB830: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x150AB834: beq         $t7, $s1, L_150AC2A0
    if (ctx->r15 == ctx->r17) {
        // 0x150AB838: sw          $t7, 0x154($sp)
        MEM_W(0X154, ctx->r29) = ctx->r15;
        // 0x150AB838: sw          $t7, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r15;
    static_5_150AC2A0(rdram, ctx);
        return;
    }
    // 0x150AB838: sw          $t7, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r15;
    // 0x150AB83C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150AB840: addiu       $t6, $t6, 0x37E0
    ctx->r14 = ADD32(ctx->r14, 0X37E0);
    // 0x150AB844: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x150AB848: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150AB84C: lhu         $t2, 0x0($t7)
    ctx->r10 = MEM_HU(ctx->r15, 0X0);
    // 0x150AB850: mult        $t2, $t3
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150AB854: sw          $t2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r10;
    // 0x150AB858: nop

    // 0x150AB85C: mflo        $t7
    ctx->r15 = lo;
    // 0x150AB860: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x150AB864: lhu         $t3, 0x58($t7)
    ctx->r11 = MEM_HU(ctx->r15, 0X58);
    // 0x150AB868: or          $s6, $t3, $zero
    ctx->r22 = ctx->r11 | 0;
    // 0x150AB86C: sw          $t3, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r11;
    // 0x150AB870: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150AB874: lw          $t1, -0x4108($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4108);
    // 0x150AB878: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x150AB87C: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x150AB880: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x150AB884: sw          $t1, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r9;
    // 0x150AB888: addu        $s7, $s7, $t3
    ctx->r23 = ADD32(ctx->r23, ctx->r11);
    // 0x150AB88C: subu        $s7, $s7, $t0
    ctx->r23 = SUB32(ctx->r23, ctx->r8);
    // 0x150AB890: subu        $s7, $s7, $t5
    ctx->r23 = SUB32(ctx->r23, ctx->r13);
    // 0x150AB894: j           L_150AB8B8
    // 0x150AB898: lw          $t7, 0x40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X40);
        goto L_150AB8B8;
    // 0x150AB898: lw          $t7, 0x40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X40);
L_150AB89C:
    // 0x150AB89C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x150AB8A0: lw          $t8, -0x41A4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X41A4);
    // 0x150AB8A4: beq         $t8, $zero, L_150AB8B8
    if (ctx->r24 == 0) {
        // 0x150AB8A8: or          $t7, $zero, $zero
        ctx->r15 = 0 | 0;
            goto L_150AB8B8;
    }
    // 0x150AB8A8: or          $t7, $zero, $zero
    ctx->r15 = 0 | 0;
    // 0x150AB8AC: sll         $t7, $s6, 2
    ctx->r15 = S32(ctx->r22 << 2);
    // 0x150AB8B0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x150AB8B4: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
L_150AB8B8:
    // 0x150AB8B8: or          $t8, $s6, $zero
    ctx->r24 = ctx->r22 | 0;
    // 0x150AB8BC: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x150AB8C0: sll         $t4, $s6, 3
    ctx->r12 = S32(ctx->r22 << 3);
    // 0x150AB8C4: addu        $t4, $t4, $a2
    ctx->r12 = ADD32(ctx->r12, ctx->r6);
    // 0x150AB8C8: and         $t8, $t7, $t9
    ctx->r24 = ctx->r15 & ctx->r25;
    // 0x150AB8CC: bne         $t8, $t9, L_150AB6F0
    if (ctx->r24 != ctx->r25) {
        // 0x150AB8D0: lui         $t8, 0x100
        ctx->r24 = S32(0X100 << 16);
            goto L_150AB6F0;
    }
    // 0x150AB8D0: lui         $t8, 0x100
    ctx->r24 = S32(0X100 << 16);
    // 0x150AB8D4: and         $t7, $t7, $t8
    ctx->r15 = ctx->r15 & ctx->r24;
    // 0x150AB8D8: sw          $t7, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r15;
L_150AB8DC:
    // 0x150AB8DC: lh          $t8, 0x0($t4)
    ctx->r24 = MEM_H(ctx->r12, 0X0);
    // 0x150AB8E0: lh          $t9, 0x4($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X4);
    // 0x150AB8E4: slt         $at, $t8, $s3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x150AB8E8: beq         $at, $zero, L_150AB6F0
    if (ctx->r1 == 0) {
        // 0x150AB8EC: slt         $at, $s2, $t9
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r25) ? 1 : 0;
            goto L_150AB6F0;
    }
    // 0x150AB8EC: slt         $at, $s2, $t9
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x150AB8F0: beq         $at, $zero, L_150AB6F0
    if (ctx->r1 == 0) {
        // 0x150AB8F4: lh          $t8, 0x2($t4)
        ctx->r24 = MEM_H(ctx->r12, 0X2);
            goto L_150AB6F0;
    }
    // 0x150AB8F4: lh          $t8, 0x2($t4)
    ctx->r24 = MEM_H(ctx->r12, 0X2);
    // 0x150AB8F8: lh          $t9, 0x6($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X6);
    // 0x150AB8FC: slt         $at, $t8, $s5
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x150AB900: beq         $at, $zero, L_150AB6F0
    if (ctx->r1 == 0) {
        // 0x150AB904: slt         $at, $s4, $t9
        ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r25) ? 1 : 0;
            goto L_150AB6F0;
    }
    // 0x150AB904: slt         $at, $s4, $t9
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x150AB908: beq         $at, $zero, L_150AB6F0
    if (ctx->r1 == 0) {
        // 0x150AB90C: sll         $t4, $s6, 2
        ctx->r12 = S32(ctx->r22 << 2);
            goto L_150AB6F0;
    }
    // 0x150AB90C: sll         $t4, $s6, 2
    ctx->r12 = S32(ctx->r22 << 2);
    // 0x150AB910: addu        $t4, $t4, $a3
    ctx->r12 = ADD32(ctx->r12, ctx->r7);
    // 0x150AB914: lh          $t8, 0x0($t4)
    ctx->r24 = MEM_H(ctx->r12, 0X0);
    // 0x150AB918: addiu       $t5, $fp, 0xC8
    ctx->r13 = ADD32(ctx->r30, 0XC8);
    // 0x150AB91C: slt         $at, $t8, $t5
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x150AB920: beq         $at, $zero, L_150AB6F0
    if (ctx->r1 == 0) {
        // 0x150AB924: lh          $t8, 0x2($t4)
        ctx->r24 = MEM_H(ctx->r12, 0X2);
            goto L_150AB6F0;
    }
    // 0x150AB924: lh          $t8, 0x2($t4)
    ctx->r24 = MEM_H(ctx->r12, 0X2);
    // 0x150AB928: addiu       $t5, $fp, -0xC8
    ctx->r13 = ADD32(ctx->r30, -0XC8);
    // 0x150AB92C: slt         $at, $t5, $t8
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x150AB930: beq         $at, $zero, L_150AB6F0
    if (ctx->r1 == 0) {
        // 0x150AB934: nop
    
            goto L_150AB6F0;
    }
    // 0x150AB934: nop

    // 0x150AB938: lw          $t1, 0x148($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X148);
    // 0x150AB93C: addiu       $t2, $sp, 0x6C
    ctx->r10 = ADD32(ctx->r29, 0X6C);
    // 0x150AB940: bne         $t1, $zero, L_150AB980
    if (ctx->r9 != 0) {
        // 0x150AB944: addu        $t1, $t2, $gp
        ctx->r9 = ADD32(ctx->r10, ctx->r28);
            goto L_150AB980;
    }
    // 0x150AB944: addu        $t1, $t2, $gp
    ctx->r9 = ADD32(ctx->r10, ctx->r28);
    // 0x150AB948: bne         $s1, $zero, L_150AB980
    if (ctx->r17 != 0) {
        // 0x150AB94C: addu        $t1, $t1, $gp
        ctx->r9 = ADD32(ctx->r9, ctx->r28);
            goto L_150AB980;
    }
    // 0x150AB94C: addu        $t1, $t1, $gp
    ctx->r9 = ADD32(ctx->r9, ctx->r28);
L_150AB950:
    // 0x150AB950: beq         $t2, $t1, L_150AB968
    if (ctx->r10 == ctx->r9) {
        // 0x150AB954: lhu         $t3, 0x0($t2)
        ctx->r11 = MEM_HU(ctx->r10, 0X0);
            goto L_150AB968;
    }
    // 0x150AB954: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x150AB958: bne         $t3, $s6, L_150AB950
    if (ctx->r11 != ctx->r22) {
        // 0x150AB95C: addiu       $t2, $t2, 0x2
        ctx->r10 = ADD32(ctx->r10, 0X2);
            goto L_150AB950;
    }
    // 0x150AB95C: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x150AB960: j           L_150AB6F0
    // 0x150AB964: nop

        goto L_150AB6F0;
    // 0x150AB964: nop

L_150AB968:
    // 0x150AB968: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x150AB96C: beq         $gp, $t0, L_150AB980
    if (ctx->r28 == ctx->r8) {
        // 0x150AB970: sll         $t0, $gp, 1
        ctx->r8 = S32(ctx->r28 << 1);
            goto L_150AB980;
    }
    // 0x150AB970: sll         $t0, $gp, 1
    ctx->r8 = S32(ctx->r28 << 1);
    // 0x150AB974: addu        $t0, $t0, $sp
    ctx->r8 = ADD32(ctx->r8, ctx->r29);
    // 0x150AB978: sh          $s6, 0x6C($t0)
    MEM_H(0X6C, ctx->r8) = ctx->r22;
    // 0x150AB97C: addiu       $gp, $gp, 0x1
    ctx->r28 = ADD32(ctx->r28, 0X1);
L_150AB980:
    // 0x150AB980: lw          $t0, 0x1D8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1D8);
    // 0x150AB984: jr          $t0
    // 0x150AB988: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    LOOKUP_FUNC(ctx->r8)(rdram, ctx);
    return;
    // 0x150AB988: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150AB98C: lw          $t0, -0x41C4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X41C4);
    // 0x150AB990: sll         $t2, $s6, 3
    ctx->r10 = S32(ctx->r22 << 3);
    // 0x150AB994: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x150AB998: sll         $t2, $s6, 2
    ctx->r10 = S32(ctx->r22 << 2);
    // 0x150AB99C: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x150AB9A0: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150AB9A4: lwc1        $f19, 0x2C($sp)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x150AB9A8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150AB9AC: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x150AB9B0: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150AB9B4: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x150AB9B8: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150AB9BC: lwc1        $f20, 0x40($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150AB9C0: lwc1        $f21, 0x44($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X44);
    // 0x150AB9C4: lwc1        $f22, 0x48($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150AB9C8: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x150AB9CC: add.s       $f21, $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f1.fl;
    // 0x150AB9D0: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x150AB9D4: mul.s       $f20, $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f3.fl);
    // 0x150AB9D8: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150AB9DC: mul.s       $f21, $f21, $f3
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f3.fl);
    // 0x150AB9E0: swc1        $f20, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f20.u32l;
    // 0x150AB9E4: swc1        $f21, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x150AB9E8: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
    // 0x150AB9EC: mul.s       $f22, $f22, $f3
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f3.fl);
    // 0x150AB9F0: jal         0x150AC344
    // 0x150AB9F4: swc1        $f22, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f22.u32l;
    func_150AC344(rdram, ctx);
        goto after_0;
    // 0x150AB9F4: swc1        $f22, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f22.u32l;
    after_0:
    // 0x150AB9F8: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150AB9FC: lwc1        $f1, 0x5C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X5C);
    // 0x150ABA00: jal         0x150AAA20
    // 0x150ABA04: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    func_150AAA20(rdram, ctx);
        goto after_1;
    // 0x150ABA04: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    after_1:
    // 0x150ABA08: bne         $v0, $zero, L_150AB6F0
    if (ctx->r2 != 0) {
        // 0x150ABA0C: nop
    
            goto L_150AB6F0;
    }
    // 0x150ABA0C: nop

    // 0x150ABA10: beq         $s1, $zero, L_150ABA94
    if (ctx->r17 == 0) {
        // 0x150ABA14: nop
    
            goto L_150ABA94;
    }
    // 0x150ABA14: nop

    // 0x150ABA18: lw          $t0, 0x168($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X168);
    // 0x150ABA1C: beq         $t0, $zero, L_150ABA94
    if (ctx->r8 == 0) {
        // 0x150ABA20: nop
    
            goto L_150ABA94;
    }
    // 0x150ABA20: nop

    // 0x150ABA24: lw          $t0, 0x148($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X148);
    // 0x150ABA28: addiu       $t1, $zero, 0xA0
    ctx->r9 = ADD32(0, 0XA0);
    // 0x150ABA2C: mult        $t0, $t1
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150ABA30: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x150ABA34: lw          $t2, -0x410C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X410C);
    // 0x150ABA38: mflo        $t1
    ctx->r9 = lo;
    // 0x150ABA3C: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x150ABA40: lbu         $t2, 0x4F($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4F);
    // 0x150ABA44: ori         $t2, $t2, 0x80
    ctx->r10 = ctx->r10 | 0X80;
    // 0x150ABA48: sb          $t2, 0x4F($t1)
    MEM_B(0X4F, ctx->r9) = ctx->r10;
    // 0x150ABA4C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x150ABA50: lw          $t3, -0x406C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X406C);
    // 0x150ABA54: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x150ABA58: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x150ABA5C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x150ABA60: lw          $t5, 0x140($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X140);
    // 0x150ABA64: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150ABA68: addiu       $t6, $t6, -0x3D30
    ctx->r14 = ADD32(ctx->r14, -0X3D30);
    // 0x150ABA6C: subu        $t5, $t5, $t6
    ctx->r13 = SUB32(ctx->r13, ctx->r14);
    // 0x150ABA70: addiu       $t6, $zero, 0x32C
    ctx->r14 = ADD32(0, 0X32C);
    // 0x150ABA74: div         $zero, $t5, $t6
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r14)));
    // 0x150ABA78: nop

    // 0x150ABA7C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150ABA80: mflo        $t5
    ctx->r13 = lo;
    // 0x150ABA84: sllv        $t6, $t6, $t5
    ctx->r14 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x150ABA88: or          $t4, $t4, $t6
    ctx->r12 = ctx->r12 | ctx->r14;
    // 0x150ABA8C: j           L_150ABAA8
    // 0x150ABA90: sw          $t4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r12;
        goto L_150ABAA8;
    // 0x150ABA90: sw          $t4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r12;
L_150ABA94:
    // 0x150ABA94: lw          $t0, 0x148($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X148);
    // 0x150ABA98: lw          $t1, 0x140($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X140);
    // 0x150ABA9C: beq         $t0, $zero, L_150ABAA8
    if (ctx->r8 == 0) {
        // 0x150ABAA0: lw          $t2, 0x144($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X144);
            goto L_150ABAA8;
    }
    // 0x150ABAA0: lw          $t2, 0x144($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X144);
    // 0x150ABAA4: sb          $t2, 0x275($t1)
    MEM_B(0X275, ctx->r9) = ctx->r10;
L_150ABAA8:
    // 0x150ABAA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150ABAAC: lwc1        $f19, -0x3DF0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X3DF0);
    // 0x150ABAB0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150ABAB4: lwc1        $f20, -0x3DEC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X3DEC);
    // 0x150ABAB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150ABABC: lwc1        $f21, -0x3DE8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X3DE8);
    // 0x150ABAC0: mul.s       $f3, $f19, $f19
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f3.fl = MUL_S(ctx->f19.fl, ctx->f19.fl);
    // 0x150ABAC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150ABAC8: lwc1        $f22, -0x3DE4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X3DE4);
    // 0x150ABACC: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x150ABAD0: add.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f4.fl;
    // 0x150ABAD4: mul.s       $f4, $f21, $f21
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f4.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x150ABAD8: add.s       $f14, $f3, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f3.fl + ctx->f4.fl;
    // 0x150ABADC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150ABAE0: c.eq.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl == ctx->f18.fl;
    // 0x150ABAE4: bc1f        L_150ABAF4
    if (!c1cs) {
        // 0x150ABAE8: nop
    
            goto L_150ABAF4;
    }
    // 0x150ABAE8: nop

    // 0x150ABAEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150ABAF0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
L_150ABAF4:
    // 0x150ABAF4: sqrt.s      $f15, $f14
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f15.fl = sqrtf(ctx->f14.fl);
    // 0x150ABAF8: swc1        $f23, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x150ABAFC: swc1        $f24, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->f24.u32l;
    // 0x150ABB00: swc1        $f25, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x150ABB04: swc1        $f26, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->f26.u32l;
    // 0x150ABB08: swc1        $f27, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x150ABB0C: swc1        $f28, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->f28.u32l;
    // 0x150ABB10: swc1        $f29, 0x224($sp)
    MEM_W(0X224, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x150ABB14: swc1        $f30, 0x228($sp)
    MEM_W(0X228, ctx->r29) = ctx->f30.u32l;
    // 0x150ABB18: swc1        $f31, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x150ABB1C: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x150ABB20: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x150ABB24: lwc1        $f31, 0x48($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x150ABB28: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x150ABB2C: lwc1        $f7, 0x138($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X138);
    // 0x150ABB30: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x150ABB34: sub.s       $f3, $f6, $f29
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f3.fl = ctx->f6.fl - ctx->f29.fl;
    // 0x150ABB38: sub.s       $f4, $f7, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f7.fl - ctx->f30.fl;
    // 0x150ABB3C: sub.s       $f5, $f8, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 31);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f31.fl); 
    ctx->f5.fl = ctx->f8.fl - ctx->f31.fl;
    // 0x150ABB40: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150ABB44: lwc1        $f13, 0x2C($sp)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x150ABB48: mul.s       $f9, $f3, $f13
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f9.fl = MUL_S(ctx->f3.fl, ctx->f13.fl);
    // 0x150ABB4C: add.s       $f9, $f9, $f23
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f23.fl;
    // 0x150ABB50: mul.s       $f10, $f5, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f5.fl, ctx->f12.fl);
    // 0x150ABB54: add.s       $f9, $f9, $f10
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f10.fl;
    // 0x150ABB58: mul.s       $f11, $f3, $f12
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f11.fl = MUL_S(ctx->f3.fl, ctx->f12.fl);
    // 0x150ABB5C: sub.s       $f11, $f25, $f11
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f11.fl = ctx->f25.fl - ctx->f11.fl;
    // 0x150ABB60: mul.s       $f10, $f5, $f13
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f10.fl = MUL_S(ctx->f5.fl, ctx->f13.fl);
    // 0x150ABB64: add.s       $f11, $f11, $f10
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f10.fl;
    // 0x150ABB68: add.s       $f10, $f24, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f24.fl + ctx->f4.fl;
    // 0x150ABB6C: mul.s       $f3, $f19, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = MUL_S(ctx->f19.fl, ctx->f9.fl);
    // 0x150ABB70: nop

    // 0x150ABB74: mul.s       $f4, $f20, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x150ABB78: add.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f4.fl;
    // 0x150ABB7C: mul.s       $f5, $f21, $f11
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f5.fl = MUL_S(ctx->f21.fl, ctx->f11.fl);
    // 0x150ABB80: add.s       $f3, $f3, $f5
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f5.fl;
    // 0x150ABB84: c.ult.s     $f3, $f18
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f3.fl < ctx->f18.fl;
    // 0x150ABB88: bc1f        L_150AB6F0
    if (!c1cs) {
        // 0x150ABB8C: lw          $t2, 0x16C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X16C);
            goto L_150AB6F0;
    }
    // 0x150ABB8C: lw          $t2, 0x16C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X16C);
    // 0x150ABB90: lui         $t0, 0x3F00
    ctx->r8 = S32(0X3F00 << 16);
    // 0x150ABB94: bne         $t2, $zero, L_150ABBB4
    if (ctx->r10 != 0) {
        // 0x150ABB98: lui         $t1, 0x800D
        ctx->r9 = S32(0X800D << 16);
            goto L_150ABBB4;
    }
    // 0x150ABB98: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150ABB9C: lbu         $t1, -0x422E($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X422E);
    // 0x150ABBA0: bne         $t1, $zero, L_150ABBB4
    if (ctx->r9 != 0) {
        // 0x150ABBA4: mtc1        $t0, $f10
        ctx->f10.u32l = ctx->r8;
            goto L_150ABBB4;
    }
    // 0x150ABBA4: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x150ABBA8: div.s       $f4, $f20, $f15
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f4.fl = DIV_S(ctx->f20.fl, ctx->f15.fl);
    // 0x150ABBAC: c.ult.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x150ABBB0: bc1f        L_150AB6F0
    if (!c1cs) {
        // 0x150ABBB4: lui         $t0, 0x800D
        ctx->r8 = S32(0X800D << 16);
            goto L_150AB6F0;
    }
L_150ABBB4:
    // 0x150ABBB4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150ABBB8: lbu         $t0, -0x422C($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X422C);
    // 0x150ABBBC: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150ABBC0: bne         $t0, $zero, L_150ABC64
    if (ctx->r8 != 0) {
        // 0x150ABBC4: lwc1        $f7, 0x38($sp)
        ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X38);
            goto L_150ABC64;
    }
    // 0x150ABBC4: lwc1        $f7, 0x38($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x150ABBC8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150ABBCC: sub.s       $f9, $f6, $f29
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f9.fl = ctx->f6.fl - ctx->f29.fl;
    // 0x150ABBD0: mul.s       $f3, $f9, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = MUL_S(ctx->f9.fl, ctx->f9.fl);
    // 0x150ABBD4: sub.s       $f10, $f7, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f7.fl - ctx->f30.fl;
    // 0x150ABBD8: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x150ABBDC: sub.s       $f11, $f8, $f31
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 31);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f31.fl); 
    ctx->f11.fl = ctx->f8.fl - ctx->f31.fl;
    // 0x150ABBE0: mul.s       $f5, $f11, $f11
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f5.fl = MUL_S(ctx->f11.fl, ctx->f11.fl);
    // 0x150ABBE4: add.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f4.fl;
    // 0x150ABBE8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150ABBEC: sb          $zero, -0x422C($at)
    MEM_B(-0X422C, ctx->r1) = 0;
    // 0x150ABBF0: add.s       $f3, $f3, $f5
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f5.fl;
    // 0x150ABBF4: sqrt.s      $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = sqrtf(ctx->f3.fl);
    // 0x150ABBF8: c.eq.s      $f3, $f18
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f3.fl == ctx->f18.fl;
    // 0x150ABBFC: bc1t        L_150ABC64
    if (c1cs) {
        // 0x150ABC00: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_150ABC64;
    }
    // 0x150ABC00: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x150ABC04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150ABC08: c.ole.s     $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f3.fl <= ctx->f4.fl;
    // 0x150ABC0C: bc1t        L_150ABC64
    if (c1cs) {
        // 0x150ABC10: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_150ABC64;
    }
    // 0x150ABC10: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150ABC14: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x150ABC18: div.s       $f3, $f4, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f4.fl, ctx->f3.fl);
    // 0x150ABC1C: mul.s       $f9, $f9, $f3
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f9.fl = MUL_S(ctx->f9.fl, ctx->f3.fl);
    // 0x150ABC20: add.s       $f9, $f9, $f29
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f29.fl;
    // 0x150ABC24: swc1        $f9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x150ABC28: add.s       $f9, $f9, $f29
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f29.fl;
    // 0x150ABC2C: mul.s       $f9, $f9, $f5
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f9.fl = MUL_S(ctx->f9.fl, ctx->f5.fl);
    // 0x150ABC30: swc1        $f9, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x150ABC34: mul.s       $f10, $f10, $f3
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f3.fl);
    // 0x150ABC38: add.s       $f10, $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x150ABC3C: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x150ABC40: add.s       $f10, $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x150ABC44: mul.s       $f10, $f10, $f5
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f5.fl);
    // 0x150ABC48: swc1        $f10, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f10.u32l;
    // 0x150ABC4C: mul.s       $f11, $f11, $f3
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f11.fl = MUL_S(ctx->f11.fl, ctx->f3.fl);
    // 0x150ABC50: add.s       $f11, $f11, $f31
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 31);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f31.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f31.fl;
    // 0x150ABC54: swc1        $f11, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x150ABC58: add.s       $f11, $f11, $f31
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 31);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f31.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f31.fl;
    // 0x150ABC5C: mul.s       $f11, $f11, $f5
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f11.fl = MUL_S(ctx->f11.fl, ctx->f5.fl);
    // 0x150ABC60: swc1        $f11, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
L_150ABC64:
    // 0x150ABC64: sub.s       $f3, $f29, $f6
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f3.fl = ctx->f29.fl - ctx->f6.fl;
    // 0x150ABC68: sub.s       $f27, $f30, $f7
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f27.fl = ctx->f30.fl - ctx->f7.fl;
    // 0x150ABC6C: sub.s       $f5, $f31, $f8
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f5.fl = ctx->f31.fl - ctx->f8.fl;
    // 0x150ABC70: mul.s       $f6, $f3, $f13
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f6.fl = MUL_S(ctx->f3.fl, ctx->f13.fl);
    // 0x150ABC74: nop

    // 0x150ABC78: mul.s       $f8, $f5, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f5.fl, ctx->f12.fl);
    // 0x150ABC7C: add.s       $f26, $f6, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150ABC80: mul.s       $f3, $f3, $f12
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f12.fl);
    // 0x150ABC84: nop

    // 0x150ABC88: mul.s       $f5, $f5, $f13
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f13.fl);
    // 0x150ABC8C: sub.s       $f28, $f5, $f3
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f28.fl = ctx->f5.fl - ctx->f3.fl;
    // 0x150ABC90: jal         0x150ABD20
    // 0x150ABC94: nop

    func_150ABD20(rdram, ctx);
        goto after_2;
    // 0x150ABC94: nop

    after_2:
    // 0x150ABC98: lwc1        $f9, 0x34($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X34);
    // 0x150ABC9C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150ABCA0: lwc1        $f11, 0x3C($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x150ABCA4: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x150ABCA8: lwc1        $f7, 0x138($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X138);
    // 0x150ABCAC: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x150ABCB0: sub.s       $f3, $f9, $f6
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f3.fl = ctx->f9.fl - ctx->f6.fl;
    // 0x150ABCB4: sub.s       $f27, $f10, $f7
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f27.fl = ctx->f10.fl - ctx->f7.fl;
    // 0x150ABCB8: sub.s       $f5, $f11, $f8
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f5.fl = ctx->f11.fl - ctx->f8.fl;
    // 0x150ABCBC: mul.s       $f6, $f3, $f13
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f6.fl = MUL_S(ctx->f3.fl, ctx->f13.fl);
    // 0x150ABCC0: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150ABCC4: lbu         $t1, -0x422D($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X422D);
    // 0x150ABCC8: mul.s       $f8, $f5, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f5.fl, ctx->f12.fl);
    // 0x150ABCCC: add.s       $f26, $f6, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150ABCD0: mul.s       $f3, $f3, $f12
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f12.fl);
    // 0x150ABCD4: nop

    // 0x150ABCD8: mul.s       $f5, $f5, $f13
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f13.fl);
    // 0x150ABCDC: beq         $t1, $zero, L_150ABCF4
    if (ctx->r9 == 0) {
        // 0x150ABCE0: lui         $t1, 0x3F4C
        ctx->r9 = S32(0X3F4C << 16);
            goto L_150ABCF4;
    }
    // 0x150ABCE0: lui         $t1, 0x3F4C
    ctx->r9 = S32(0X3F4C << 16);
    // 0x150ABCE4: ori         $t1, $t1, 0xCCCD
    ctx->r9 = ctx->r9 | 0XCCCD;
    // 0x150ABCE8: mtc1        $t1, $f28
    ctx->f28.u32l = ctx->r9;
    // 0x150ABCEC: c.ole.s     $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f4.fl <= ctx->f28.fl;
    // 0x150ABCF0: bc1t        L_150AC0F8
    if (c1cs) {
        // 0x150ABCF4: sub.s       $f28, $f5, $f3
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f28.fl = ctx->f5.fl - ctx->f3.fl;
        // 0x150ABCF4: sub.s       $f28, $f5, $f3
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f28.fl = ctx->f5.fl - ctx->f3.fl;
    static_5_150AC0F8(rdram, ctx);
        return;
    }
L_150ABCF4:
    // 0x150ABCF4: sub.s       $f28, $f5, $f3
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f28.fl = ctx->f5.fl - ctx->f3.fl;
    // 0x150ABCF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150ABCFC: beq         $t0, $at, L_150AC0F8
    if (ctx->r8 == ctx->r1) {
        // 0x150ABD00: nop
    
        // 0x150ABD00: nop

    static_5_150AC0F8(rdram, ctx);
        return;
    }
    // 0x150ABD00: nop

    // 0x150ABD04: jal         0x150ABD20
    // 0x150ABD08: nop

    func_150ABD20(rdram, ctx);
        goto after_3;
    // 0x150ABD08: nop

    after_3:
    // 0x150ABD0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150ABD10: beq         $t0, $at, L_150AC0F8
    if (ctx->r8 == ctx->r1) {
        // 0x150ABD14: nop
    
        // 0x150ABD14: nop

    static_5_150AC0F8(rdram, ctx);
        return;
    }
    // 0x150ABD14: nop

    // 0x150ABD18: j           L_150ABEEC
    // 0x150ABD1C: nop

    static_5_150ABEEC(rdram, ctx);
    return;
    // 0x150ABD1C: nop

;}
RECOMP_FUNC void static_5_150ABEEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150AB6F0:
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
    goto skip_0;
    // 0x150ABFC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_0:
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
    goto skip_1;
    // 0x150ABFD8: mov.s       $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    ctx->f16.fl = ctx->f17.fl;
    skip_1:
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

    static_5_150AC1B4(rdram, ctx);
    return;
    // 0x150AC0F4: nop

;}
RECOMP_FUNC void static_5_150AC0F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150AB6F0:
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
;}
RECOMP_FUNC void static_5_150AC290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150AB644:
    // 0x150AC290: beq         $s0, $zero, L_150AC2A0
    if (ctx->r16 == 0) {
        // 0x150AC294: sw          $gp, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r28;
        // 0x150AC294: sw          $gp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r28;
    static_5_150AC2A0(rdram, ctx);
        return;
    }
    // 0x150AC294: sw          $gp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r28;
    // 0x150AC298: j           L_150AB644
    // 0x150AC29C: nop

    static_5_150AB644(rdram, ctx);
    return;
    // 0x150AC29C: nop

;}
RECOMP_FUNC void static_5_150AC2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AC2A0: lw          $t0, 0x1DC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1DC);
    // 0x150AC2A4: jr          $t0
    // 0x150AC2A8: nop

    LOOKUP_FUNC(ctx->r8)(rdram, ctx);
    return;
    // 0x150AC2A8: nop

    // 0x150AC2AC: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150AC2B0: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x150AC2B4: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150AC2B8: lw          $t0, 0x140($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X140);
    // 0x150AC2BC: swc1        $f0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f0.u32l;
    // 0x150AC2C0: swc1        $f1, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f_odd[(1 - 1) * 2];
    // 0x150AC2C4: swc1        $f2, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f2.u32l;
    // 0x150AC2C8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x150AC2CC: bne         $t1, $zero, L_150AC2D8
    if (ctx->r9 != 0) {
        // 0x150AC2D0: nop
    
        // 0x150AC2D0: nop

    static_5_150AC2D8(rdram, ctx);
        return;
    }
    // 0x150AC2D0: nop

    // 0x150AC2D4: sw          $zero, 0x20($t0)
    MEM_W(0X20, ctx->r8) = 0;
;}
RECOMP_FUNC void static_5_150AC2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AC2D8: lw          $s0, 0x170($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X170);
    // 0x150AC2DC: lw          $s1, 0x174($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X174);
    // 0x150AC2E0: lw          $s2, 0x178($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X178);
    // 0x150AC2E4: lw          $s3, 0x17C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X17C);
    // 0x150AC2E8: lw          $s4, 0x180($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X180);
    // 0x150AC2EC: lw          $s5, 0x184($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X184);
    // 0x150AC2F0: lw          $s6, 0x188($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X188);
    // 0x150AC2F4: lw          $s7, 0x18C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X18C);
    // 0x150AC2F8: lw          $fp, 0x190($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X190);
    // 0x150AC2FC: lw          $gp, 0x194($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X194);
    // 0x150AC300: lwc1        $f20, 0x198($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X198);
    // 0x150AC304: lwc1        $f21, 0x19C($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X19C);
    // 0x150AC308: lwc1        $f22, 0x1A0($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x150AC30C: lwc1        $f23, 0x1A4($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X1A4);
    // 0x150AC310: lwc1        $f24, 0x1A8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x150AC314: lwc1        $f25, 0x1AC($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X1AC);
    // 0x150AC318: lwc1        $f26, 0x1B0($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x150AC31C: lwc1        $f27, 0x1B4($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X1B4);
    // 0x150AC320: lwc1        $f28, 0x1B8($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x150AC324: lwc1        $f29, 0x1BC($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X1BC);
    // 0x150AC328: lwc1        $f30, 0x1C0($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x150AC32C: lwc1        $f31, 0x1C4($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X1C4);
    // 0x150AC330: lw          $ra, 0x264($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X264);
    // 0x150AC334: lw          $v0, 0x164($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X164);
    // 0x150AC338: addiu       $sp, $sp, 0x268
    ctx->r29 = ADD32(ctx->r29, 0X268);
    // 0x150AC33C: jr          $ra
    // 0x150AC340: nop

    return;
    return;
    // 0x150AC340: nop

;}
RECOMP_FUNC void static_5_150A576C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A576C: lwr         $t2, 0x3($t1)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r9, 0X3);
    // 0x150A5770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150A5774: and         $t2, $t2, $fp
    ctx->r10 = ctx->r10 & ctx->r30;
    // 0x150A5778: beq         $t2, $zero, L_150A579C
    if (ctx->r10 == 0) {
        // 0x150A577C: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
        // 0x150A577C: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    static_5_150A579C(rdram, ctx);
        return;
    }
    // 0x150A577C: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x150A5780: beq         $t4, $zero, L_150A5790
    if (ctx->r12 == 0) {
        // 0x150A5784: nop
    
            goto L_150A5790;
    }
    // 0x150A5784: nop

    // 0x150A5788: jal         0x150A5828
    // 0x150A578C: nop

    func_150A5828(rdram, ctx);
        goto after_0;
    // 0x150A578C: nop

    after_0:
L_150A5790:
    // 0x150A5790: ld          $t0, -0x8($a0)
    ctx->r8 = LD(ctx->r4, -0X8);
    // 0x150A5794: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
;}
RECOMP_FUNC void static_5_150A5740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A5740: lb          $t2, 0x0($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X0);
    // 0x150A5744: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150A5748: and         $t2, $t2, $fp
    ctx->r10 = ctx->r10 & ctx->r30;
    // 0x150A574C: beq         $t2, $zero, L_150A579C
    if (ctx->r10 == 0) {
        // 0x150A5750: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
        // 0x150A5750: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    static_5_150A579C(rdram, ctx);
        return;
    }
    // 0x150A5750: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x150A5754: beq         $t4, $zero, L_150A5764
    if (ctx->r12 == 0) {
        // 0x150A5758: nop
    
            goto L_150A5764;
    }
    // 0x150A5758: nop

    // 0x150A575C: jal         0x150A5828
    // 0x150A5760: nop

    func_150A5828(rdram, ctx);
        goto after_0;
    // 0x150A5760: nop

    after_0:
L_150A5764:
    // 0x150A5764: j           L_150A5790
    // 0x150A5768: nop

    static_5_150A5790(rdram, ctx);
    return;
    // 0x150A5768: nop

;}
RECOMP_FUNC void static_5_150A5798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A5798: sd          $t0, -0x8($a1)
    SD(ctx->r8, -0X8, ctx->r5);
;}
RECOMP_FUNC void static_5_150AC1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AC1B4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150AC1B8: sw          $t1, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r9;
    // 0x150AC1BC: lui         $t0, 0x150B
    ctx->r8 = S32(0X150B << 16);
    // 0x150AC1C0: addiu       $t0, $t0, -0x4910
    ctx->r8 = ADD32(ctx->r8, -0X4910);
;}
RECOMP_FUNC void static_5_150A5790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A5790: ld          $t0, -0x8($a0)
    ctx->r8 = LD(ctx->r4, -0X8);
    // 0x150A5794: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
;}

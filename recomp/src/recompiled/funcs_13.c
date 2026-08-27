#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_15197A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15197A68: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15197A6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15197A70: lwc1        $f0, -0x7554($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7554);
    // 0x15197A74: jr          $ra
    // 0x15197A78: nop

    return;
    return;
    // 0x15197A78: nop

;}
RECOMP_FUNC void func_15022B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15022B08: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15022B0C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15022B10: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x15022B14: lbu         $v1, 0x363A($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X363A);
    // 0x15022B18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15022B1C: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x15022B20: blez        $v1, L_15022B98
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15022B24: lui         $a2, 0x800C
        ctx->r6 = S32(0X800C << 16);
            goto L_15022B98;
    }
    // 0x15022B24: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15022B28: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x15022B2C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15022B30: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15022B34: addiu       $a1, $a1, 0x35F0
    ctx->r5 = ADD32(ctx->r5, 0X35F0);
    // 0x15022B38: addiu       $t0, $t0, -0x410C
    ctx->r8 = ADD32(ctx->r8, -0X410C);
    // 0x15022B3C: lw          $a2, 0x35C8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X35C8);
    // 0x15022B40: addiu       $t1, $zero, 0xA0
    ctx->r9 = ADD32(0, 0XA0);
L_15022B44:
    // 0x15022B44: lhu         $t6, 0x0($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X0);
    // 0x15022B48: beql        $t6, $zero, L_15022B8C
    if (ctx->r14 == 0) {
        // 0x15022B4C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_15022B8C;
    }
    goto skip_0;
    // 0x15022B4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x15022B50: multu       $a3, $t1
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15022B54: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
    // 0x15022B58: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x15022B5C: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x15022B60: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x15022B64: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x15022B68: lbu         $t3, 0x2($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X2);
    // 0x15022B6C: mflo        $t5
    ctx->r13 = lo;
    // 0x15022B70: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x15022B74: lbu         $t7, 0x72($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X72);
    // 0x15022B78: bnel        $t3, $t7, L_15022B8C
    if (ctx->r11 != ctx->r15) {
        // 0x15022B7C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_15022B8C;
    }
    goto skip_1;
    // 0x15022B7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_1:
    // 0x15022B80: jr          $ra
    // 0x15022B84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15022B84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15022B88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_15022B8C:
    // 0x15022B8C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15022B90: bne         $at, $zero, L_15022B44
    if (ctx->r1 != 0) {
        // 0x15022B94: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_15022B44;
    }
    // 0x15022B94: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_15022B98:
    // 0x15022B98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15022B9C: jr          $ra
    // 0x15022BA0: nop

    return;
    return;
    // 0x15022BA0: nop

;}
RECOMP_FUNC void func_1509E6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509E6F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509E6F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509E6F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1509E6FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1509E700: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1509E704: bne         $a1, $at, L_1509E720
    if (ctx->r5 != ctx->r1) {
        // 0x1509E708: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509E720;
    }
    // 0x1509E708: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509E70C: jal         0x151F2CDC
    // 0x1509E710: nop

    func_151F2CDC(rdram, ctx);
        goto after_0;
    // 0x1509E710: nop

    after_0:
    // 0x1509E714: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x1509E718: b           L_1509E720
    // 0x1509E71C: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
        goto L_1509E720;
    // 0x1509E71C: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
L_1509E720:
    // 0x1509E720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1509E724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1509E728: jr          $ra
    // 0x1509E72C: nop

    return;
    return;
    // 0x1509E72C: nop

;}
RECOMP_FUNC void func_15031A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15031A50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15031A54: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15031A58: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15031A5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15031A60: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15031A64: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
    // 0x15031A68: slti        $at, $v0, 0x5F
    ctx->r1 = SIGNED(ctx->r2) < 0X5F ? 1 : 0;
    // 0x15031A6C: bne         $at, $zero, L_15031A94
    if (ctx->r1 != 0) {
        // 0x15031A70: addiu       $t6, $v0, -0x82
        ctx->r14 = ADD32(ctx->r2, -0X82);
            goto L_15031A94;
    }
    // 0x15031A70: addiu       $t6, $v0, -0x82
    ctx->r14 = ADD32(ctx->r2, -0X82);
    // 0x15031A74: sltiu       $at, $t6, 0xF
    ctx->r1 = ctx->r14 < 0XF ? 1 : 0;
    // 0x15031A78: beq         $at, $zero, L_15031C00
    if (ctx->r1 == 0) {
        // 0x15031A7C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15031C00;
    }
    // 0x15031A7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15031A80: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15031A84: addu        $at, $at, $t6
    gpr jr_addend_15031A8C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15031A88: lw          $t6, 0x6F40($at)
    ctx->r14 = ADD32(ctx->r1, 0X6F40);
    // 0x15031A8C: jr          $t6
    // 0x15031A90: nop

    switch (jr_addend_15031A8C >> 2) {
        case 0: goto L_15031BE4; break;
        case 1: goto L_15031C00; break;
        case 2: goto L_15031C00; break;
        case 3: goto L_15031B98; break;
        case 4: goto L_15031C00; break;
        case 5: goto L_15031C00; break;
        case 6: goto L_15031C00; break;
        case 7: goto L_15031C00; break;
        case 8: goto L_15031C00; break;
        case 9: goto L_15031C00; break;
        case 10: goto L_15031C00; break;
        case 11: goto L_15031BA8; break;
        case 12: goto L_15031C00; break;
        case 13: goto L_15031B10; break;
        case 14: goto L_15031B00; break;
        default: switch_error(__func__, 0x15031A8C, 0x80096F40);
    }
    // 0x15031A90: nop

L_15031A94:
    // 0x15031A94: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x15031A98: bne         $at, $zero, L_15031AC0
    if (ctx->r1 != 0) {
        // 0x15031A9C: addiu       $t7, $v0, -0x37
        ctx->r15 = ADD32(ctx->r2, -0X37);
            goto L_15031AC0;
    }
    // 0x15031A9C: addiu       $t7, $v0, -0x37
    ctx->r15 = ADD32(ctx->r2, -0X37);
    // 0x15031AA0: sltiu       $at, $t7, 0x28
    ctx->r1 = ctx->r15 < 0X28 ? 1 : 0;
    // 0x15031AA4: beq         $at, $zero, L_15031C00
    if (ctx->r1 == 0) {
        // 0x15031AA8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_15031C00;
    }
    // 0x15031AA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15031AAC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15031AB0: addu        $at, $at, $t7
    gpr jr_addend_15031AB8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15031AB4: lw          $t7, 0x6F7C($at)
    ctx->r15 = ADD32(ctx->r1, 0X6F7C);
    // 0x15031AB8: jr          $t7
    // 0x15031ABC: nop

    switch (jr_addend_15031AB8 >> 2) {
        case 0: goto L_15031AD4; break;
        case 1: goto L_15031C00; break;
        case 2: goto L_15031C00; break;
        case 3: goto L_15031C00; break;
        case 4: goto L_15031C00; break;
        case 5: goto L_15031C00; break;
        case 6: goto L_15031B60; break;
        case 7: goto L_15031C00; break;
        case 8: goto L_15031C00; break;
        case 9: goto L_15031C00; break;
        case 10: goto L_15031C00; break;
        case 11: goto L_15031C00; break;
        case 12: goto L_15031C00; break;
        case 13: goto L_15031C00; break;
        case 14: goto L_15031C00; break;
        case 15: goto L_15031C00; break;
        case 16: goto L_15031C00; break;
        case 17: goto L_15031C00; break;
        case 18: goto L_15031B20; break;
        case 19: goto L_15031C00; break;
        case 20: goto L_15031C00; break;
        case 21: goto L_15031C00; break;
        case 22: goto L_15031C00; break;
        case 23: goto L_15031C00; break;
        case 24: goto L_15031C00; break;
        case 25: goto L_15031C00; break;
        case 26: goto L_15031C00; break;
        case 27: goto L_15031C00; break;
        case 28: goto L_15031C00; break;
        case 29: goto L_15031C00; break;
        case 30: goto L_15031C00; break;
        case 31: goto L_15031C00; break;
        case 32: goto L_15031C00; break;
        case 33: goto L_15031C00; break;
        case 34: goto L_15031C00; break;
        case 35: goto L_15031AE4; break;
        case 36: goto L_15031C00; break;
        case 37: goto L_15031C00; break;
        case 38: goto L_15031B38; break;
        case 39: goto L_15031B98; break;
        default: switch_error(__func__, 0x15031AB8, 0x80096F7C);
    }
    // 0x15031ABC: nop

L_15031AC0:
    // 0x15031AC0: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x15031AC4: beq         $v0, $at, L_15031B78
    if (ctx->r2 == ctx->r1) {
        // 0x15031AC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15031B78;
    }
    // 0x15031AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15031ACC: b           L_15031C04
    // 0x15031AD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15031C04;
    // 0x15031AD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15031AD4:
    // 0x15031AD4: jal         0x151001B4
    // 0x15031AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151001B4(rdram, ctx);
        goto after_0;
    // 0x15031AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15031ADC: b           L_15031C04
    // 0x15031AE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15031C04;
    // 0x15031AE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15031AE4:
    // 0x15031AE4: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x15031AE8: beql        $v0, $zero, L_15031C04
    if (ctx->r2 == 0) {
        // 0x15031AEC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15031C04;
    }
    goto skip_0;
    // 0x15031AEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x15031AF0: lhu         $t8, 0x1A6($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X1A6);
    // 0x15031AF4: addiu       $t9, $t8, 0xAA
    ctx->r25 = ADD32(ctx->r24, 0XAA);
    // 0x15031AF8: b           L_15031C00
    // 0x15031AFC: sh          $t9, 0x1A6($v0)
    MEM_H(0X1A6, ctx->r2) = ctx->r25;
        goto L_15031C00;
    // 0x15031AFC: sh          $t9, 0x1A6($v0)
    MEM_H(0X1A6, ctx->r2) = ctx->r25;
L_15031B00:
    // 0x15031B00: lw          $t0, 0x9C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X9C);
    // 0x15031B04: ori         $t1, $t0, 0x70
    ctx->r9 = ctx->r8 | 0X70;
    // 0x15031B08: b           L_15031C00
    // 0x15031B0C: sw          $t1, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r9;
        goto L_15031C00;
    // 0x15031B0C: sw          $t1, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r9;
L_15031B10:
    // 0x15031B10: lw          $t2, 0x9C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X9C);
    // 0x15031B14: ori         $t3, $t2, 0xE00
    ctx->r11 = ctx->r10 | 0XE00;
    // 0x15031B18: b           L_15031C00
    // 0x15031B1C: sw          $t3, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r11;
        goto L_15031C00;
    // 0x15031B1C: sw          $t3, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r11;
L_15031B20:
    // 0x15031B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15031B24: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15031B28: jal         0x15163BE8
    // 0x15031B2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15163BE8(rdram, ctx);
        goto after_1;
    // 0x15031B2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x15031B30: b           L_15031C04
    // 0x15031B34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15031C04;
    // 0x15031B34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15031B38:
    // 0x15031B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15031B3C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15031B40: jal         0x150D3360
    // 0x15031B44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150D3360(rdram, ctx);
        goto after_2;
    // 0x15031B44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x15031B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15031B4C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15031B50: jal         0x150D5440
    // 0x15031B54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150D5440(rdram, ctx);
        goto after_3;
    // 0x15031B54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x15031B58: b           L_15031C04
    // 0x15031B5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15031C04;
    // 0x15031B5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15031B60:
    // 0x15031B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15031B64: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15031B68: jal         0x151BD828
    // 0x15031B6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151BD828(rdram, ctx);
        goto after_4;
    // 0x15031B6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x15031B70: b           L_15031C04
    // 0x15031B74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15031C04;
    // 0x15031B74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15031B78:
    // 0x15031B78: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15031B7C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x15031B80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15031B84: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15031B88: jal         0x151D74B0
    // 0x15031B8C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151D74B0(rdram, ctx);
        goto after_5;
    // 0x15031B8C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_5:
    // 0x15031B90: b           L_15031C04
    // 0x15031B94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15031C04;
    // 0x15031B94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15031B98:
    // 0x15031B98: lw          $t5, 0x9C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X9C);
    // 0x15031B9C: ori         $t6, $t5, 0x6000
    ctx->r14 = ctx->r13 | 0X6000;
    // 0x15031BA0: b           L_15031C00
    // 0x15031BA4: sw          $t6, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r14;
        goto L_15031C00;
    // 0x15031BA4: sw          $t6, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r14;
L_15031BA8:
    // 0x15031BA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15031BAC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x15031BB0: jal         0x150859AC
    // 0x15031BB4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_150859AC(rdram, ctx);
        goto after_6;
    // 0x15031BB4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_6:
    // 0x15031BB8: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x15031BBC: beq         $at, $zero, L_15031BD4
    if (ctx->r1 == 0) {
        // 0x15031BC0: lw          $a2, 0x28($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X28);
            goto L_15031BD4;
    }
    // 0x15031BC0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x15031BC4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15031BC8: lw          $t7, 0x228($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X228);
    // 0x15031BCC: b           L_15031C00
    // 0x15031BD0: sh          $t7, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r15;
        goto L_15031C00;
    // 0x15031BD0: sh          $t7, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r15;
L_15031BD4:
    // 0x15031BD4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x15031BD8: lw          $t8, 0x22C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X22C);
    // 0x15031BDC: b           L_15031C00
    // 0x15031BE0: sh          $t8, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r24;
        goto L_15031C00;
    // 0x15031BE0: sh          $t8, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r24;
L_15031BE4:
    // 0x15031BE4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15031BE8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15031BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15031BF0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x15031BF4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x15031BF8: jal         0x151D74B0
    // 0x15031BFC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151D74B0(rdram, ctx);
        goto after_7;
    // 0x15031BFC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_7:
L_15031C00:
    // 0x15031C00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15031C04:
    // 0x15031C04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15031C08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15031C0C: jr          $ra
    // 0x15031C10: nop

    return;
    return;
    // 0x15031C10: nop

;}
RECOMP_FUNC void func_150495B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150495B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x150495B4: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x150495B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150495BC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150495C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150495C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150495C8: sub.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x150495CC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x150495D0: mul.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x150495D4: bc1fl       L_150495F0
    if (!c1cs) {
        // 0x150495D8: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_150495F0;
    }
    goto skip_0;
    // 0x150495D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x150495DC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x150495E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150495E4: b           L_150495F8
    // 0x150495E8: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
        goto L_150495F8;
    // 0x150495E8: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x150495EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_150495F0:
    // 0x150495F0: nop

    // 0x150495F4: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
L_150495F8:
    // 0x150495F8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150495FC: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15049600: sub.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x15049604: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15049608: mul.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x1504960C: nop

    // 0x15049610: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x15049614: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15049618: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x1504961C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15049620: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x15049624: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15049628: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1504962C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15049630: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x15049634: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x15049638: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x1504963C: bc1f        L_15049654
    if (!c1cs) {
        // 0x15049640: nop
    
            goto L_15049654;
    }
    // 0x15049640: nop

    // 0x15049644: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x15049648: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1504964C: b           L_15049660
    // 0x15049650: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
        goto L_15049660;
    // 0x15049650: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
L_15049654:
    // 0x15049654: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15049658: nop

    // 0x1504965C: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
L_15049660:
    // 0x15049660: nop

    // 0x15049664: bc1fl       L_15049678
    if (!c1cs) {
        // 0x15049668: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_15049678;
    }
    goto skip_1;
    // 0x15049668: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_1:
    // 0x1504966C: b           L_15049680
    // 0x15049670: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
        goto L_15049680;
    // 0x15049670: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x15049674: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_15049678:
    // 0x15049678: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x1504967C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_15049680:
    // 0x15049680: jr          $ra
    // 0x15049684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15049684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_150221E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150221E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150221EC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x150221F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150221F4: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x150221F8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x150221FC: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x15022200: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15022204: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x15022208: addiu       $v0, $v0, 0x3598
    ctx->r2 = ADD32(ctx->r2, 0X3598);
    // 0x1502220C: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x15022210: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15022214: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15022218: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1502221C: swc1        $f12, 0x35A0($at)
    MEM_W(0X35A0, ctx->r1) = ctx->f12.u32l;
    // 0x15022220: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x15022224: sh          $a1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r5;
    // 0x15022228: sh          $a2, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r6;
    // 0x1502222C: jr          $ra
    // 0x15022230: nop

    return;
    return;
    // 0x15022230: nop

;}
RECOMP_FUNC void func_151DB5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DB5D0: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x151DB5D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DB5D8: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x151DB5DC: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x151DB5E0: sw          $a2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r6;
    // 0x151DB5E4: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    // 0x151DB5E8: lbu         $t6, 0xEF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XEF);
    // 0x151DB5EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151DB5F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151DB5F4: beq         $t6, $zero, L_151DB604
    if (ctx->r14 == 0) {
        // 0x151DB5F8: lwc1        $f0, 0xD4($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XD4);
            goto L_151DB604;
    }
    // 0x151DB5F8: lwc1        $f0, 0xD4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151DB5FC: b           L_151DB608
    // 0x151DB600: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_151DB608;
    // 0x151DB600: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151DB604:
    // 0x151DB604: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151DB608:
    // 0x151DB608: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x151DB60C: nop

    // 0x151DB610: bc1fl       L_151DB624
    if (!c1cs) {
        // 0x151DB614: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_151DB624;
    }
    goto skip_0;
    // 0x151DB614: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x151DB618: b           L_151DB624
    // 0x151DB61C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151DB624;
    // 0x151DB61C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151DB620: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151DB624:
    // 0x151DB624: lbu         $t8, 0xEF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XEF);
    // 0x151DB628: or          $t7, $v0, $v1
    ctx->r15 = ctx->r2 | ctx->r3;
    // 0x151DB62C: sb          $t7, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r15;
    // 0x151DB630: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x151DB634: sb          $zero, 0x38($sp)
    MEM_B(0X38, ctx->r29) = 0;
    // 0x151DB638: sb          $zero, 0x39($sp)
    MEM_B(0X39, ctx->r29) = 0;
    // 0x151DB63C: beq         $t8, $zero, L_151DB6F4
    if (ctx->r24 == 0) {
        // 0x151DB640: sb          $zero, 0x3A($sp)
        MEM_B(0X3A, ctx->r29) = 0;
            goto L_151DB6F4;
    }
    // 0x151DB640: sb          $zero, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = 0;
    // 0x151DB644: jal         0x150ADA20
    // 0x151DB648: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151DB648: nop

    after_0:
    // 0x151DB64C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151DB650: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB654: mfhi        $t9
    ctx->r25 = hi;
    // 0x151DB658: addiu       $t2, $t9, -0x3
    ctx->r10 = ADD32(ctx->r25, -0X3);
    // 0x151DB65C: jal         0x150ADA20
    // 0x151DB660: sb          $t2, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DB660: sb          $t2, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r10;
    after_1:
    // 0x151DB664: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151DB668: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB66C: mfhi        $t3
    ctx->r11 = hi;
    // 0x151DB670: addiu       $t4, $t3, -0x3
    ctx->r12 = ADD32(ctx->r11, -0X3);
    // 0x151DB674: jal         0x150ADA20
    // 0x151DB678: sb          $t4, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151DB678: sb          $t4, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r12;
    after_2:
    // 0x151DB67C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151DB680: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB684: mfhi        $t5
    ctx->r13 = hi;
    // 0x151DB688: addiu       $t6, $t5, -0x3
    ctx->r14 = ADD32(ctx->r13, -0X3);
    // 0x151DB68C: jal         0x150ADA68
    // 0x151DB690: sb          $t6, 0x3D($sp)
    MEM_B(0X3D, ctx->r29) = ctx->r14;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151DB690: sb          $t6, 0x3D($sp)
    MEM_B(0X3D, ctx->r29) = ctx->r14;
    after_3:
    // 0x151DB694: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DB698: lwc1        $f2, -0x4B4C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4B4C);
    // 0x151DB69C: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151DB6A0: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x151DB6A4: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x151DB6A8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151DB6AC: jal         0x150ADA68
    // 0x151DB6B0: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151DB6B0: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x151DB6B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DB6B8: lwc1        $f2, -0x4B48($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4B48);
    // 0x151DB6BC: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151DB6C0: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x151DB6C4: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x151DB6C8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151DB6CC: jal         0x150ADA68
    // 0x151DB6D0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x151DB6D0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x151DB6D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DB6D8: lwc1        $f2, -0x4B44($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4B44);
    // 0x151DB6DC: lwc1        $f18, 0xCC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151DB6E0: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x151DB6E4: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x151DB6E8: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151DB6EC: b           L_151DB724
    // 0x151DB6F0: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
        goto L_151DB724;
    // 0x151DB6F0: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
L_151DB6F4:
    // 0x151DB6F4: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x151DB6F8: sb          $zero, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = 0;
    // 0x151DB6FC: sb          $zero, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = 0;
    // 0x151DB700: sb          $zero, 0x3D($sp)
    MEM_B(0X3D, ctx->r29) = 0;
    // 0x151DB704: addiu       $t8, $t8, 0x5480
    ctx->r24 = ADD32(ctx->r24, 0X5480);
    // 0x151DB708: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151DB70C: addiu       $t7, $sp, 0x40
    ctx->r15 = ADD32(ctx->r29, 0X40);
    // 0x151DB710: lw          $t3, 0x4($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X4);
    // 0x151DB714: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151DB718: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x151DB71C: sw          $t3, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r11;
    // 0x151DB720: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
L_151DB724:
    // 0x151DB724: lbu         $t4, 0xC3($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XC3);
    // 0x151DB728: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151DB72C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x151DB730: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x151DB734: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x151DB738: lw          $t9, -0x2C8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2C8);
    // 0x151DB73C: jalr        $t9
    // 0x151DB740: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x151DB740: nop

    after_6:
    // 0x151DB744: lh          $v1, 0xDE($sp)
    ctx->r3 = MEM_H(ctx->r29, 0XDE);
    // 0x151DB748: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x151DB74C: lui         $t8, 0x9F
    ctx->r24 = S32(0X9F << 16);
    // 0x151DB750: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x151DB754: addiu       $t6, $zero, 0x6C
    ctx->r14 = ADD32(0, 0X6C);
    // 0x151DB758: addiu       $t2, $zero, 0x5103
    ctx->r10 = ADD32(0, 0X5103);
    // 0x151DB75C: ori         $t7, $t7, 0x5
    ctx->r15 = ctx->r15 | 0X5;
    // 0x151DB760: ori         $t8, $t8, 0x600
    ctx->r24 = ctx->r24 | 0X600;
    // 0x151DB764: sb          $t6, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r14;
    // 0x151DB768: sh          $t2, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r10;
    // 0x151DB76C: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x151DB770: bne         $v1, $v0, L_151DB784
    if (ctx->r3 != ctx->r2) {
        // 0x151DB774: sw          $t8, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r24;
            goto L_151DB784;
    }
    // 0x151DB774: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x151DB778: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x151DB77C: b           L_151DB788
    // 0x151DB780: sh          $t3, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r11;
        goto L_151DB788;
    // 0x151DB780: sh          $t3, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r11;
L_151DB784:
    // 0x151DB784: sh          $v1, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r3;
L_151DB788:
    // 0x151DB788: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151DB78C: lbu         $t5, 0xE3($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XE3);
    // 0x151DB790: lw          $t2, 0xC4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC4);
    // 0x151DB794: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151DB798: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151DB79C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x151DB7A0: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x151DB7A4: sb          $t4, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r12;
    // 0x151DB7A8: sb          $t9, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r25;
    // 0x151DB7AC: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x151DB7B0: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x151DB7B4: sb          $t5, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r13;
    // 0x151DB7B8: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x151DB7BC: addiu       $t6, $sp, 0x80
    ctx->r14 = ADD32(ctx->r29, 0X80);
    // 0x151DB7C0: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x151DB7C4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151DB7C8: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x151DB7CC: addiu       $t5, $t5, 0x5480
    ctx->r13 = ADD32(ctx->r13, 0X5480);
    // 0x151DB7D0: addiu       $t4, $sp, 0x8C
    ctx->r12 = ADD32(ctx->r29, 0X8C);
    // 0x151DB7D4: sw          $t3, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r11;
    // 0x151DB7D8: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x151DB7DC: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151DB7E0: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x151DB7E4: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x151DB7E8: addiu       $t6, $sp, 0x98
    ctx->r14 = ADD32(ctx->r29, 0X98);
    // 0x151DB7EC: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x151DB7F0: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x151DB7F4: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x151DB7F8: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x151DB7FC: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x151DB800: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x151DB804: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151DB808: lw          $t9, 0x4($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X4);
    // 0x151DB80C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151DB810: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x151DB814: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151DB818: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151DB81C: lh          $t4, 0xE6($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XE6);
    // 0x151DB820: lh          $t5, 0xEA($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XEA);
    // 0x151DB824: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x151DB828: sh          $t4, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r12;
    // 0x151DB82C: bne         $v1, $v0, L_151DB840
    if (ctx->r3 != ctx->r2) {
        // 0x151DB830: sh          $t5, 0x70($sp)
        MEM_H(0X70, ctx->r29) = ctx->r13;
            goto L_151DB840;
    }
    // 0x151DB830: sh          $t5, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r13;
    // 0x151DB834: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151DB838: b           L_151DB844
    // 0x151DB83C: sh          $t7, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r15;
        goto L_151DB844;
    // 0x151DB83C: sh          $t7, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r15;
L_151DB840:
    // 0x151DB840: sh          $v1, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r3;
L_151DB844:
    // 0x151DB844: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151DB848: jal         0x150ADA20
    // 0x151DB84C: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151DB84C: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x151DB850: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x151DB854: beq         $t8, $zero, L_151DB864
    if (ctx->r24 == 0) {
        // 0x151DB858: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_151DB864;
    }
    // 0x151DB858: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x151DB85C: b           L_151DB864
    // 0x151DB860: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
        goto L_151DB864;
    // 0x151DB860: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
L_151DB864:
    // 0x151DB864: jal         0x150ADA20
    // 0x151DB868: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151DB868: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_8:
    // 0x151DB86C: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x151DB870: lh          $v1, 0xDE($sp)
    ctx->r3 = MEM_H(ctx->r29, 0XDE);
    // 0x151DB874: beq         $t3, $zero, L_151DB884
    if (ctx->r11 == 0) {
        // 0x151DB878: lw          $t1, 0x20($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X20);
            goto L_151DB884;
    }
    // 0x151DB878: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x151DB87C: b           L_151DB888
    // 0x151DB880: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
        goto L_151DB888;
    // 0x151DB880: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
L_151DB884:
    // 0x151DB884: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_151DB888:
    // 0x151DB888: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151DB88C: bne         $v1, $at, L_151DB89C
    if (ctx->r3 != ctx->r1) {
        // 0x151DB890: lbu         $t6, 0xEF($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0XEF);
            goto L_151DB89C;
    }
    // 0x151DB890: lbu         $t6, 0xEF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XEF);
    // 0x151DB894: b           L_151DB8A0
    // 0x151DB898: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151DB8A0;
    // 0x151DB898: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151DB89C:
    // 0x151DB89C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151DB8A0:
    // 0x151DB8A0: beq         $t6, $zero, L_151DB8B0
    if (ctx->r14 == 0) {
        // 0x151DB8A4: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_151DB8B0;
    }
    // 0x151DB8A4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x151DB8A8: b           L_151DB8B4
    // 0x151DB8AC: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
        goto L_151DB8B4;
    // 0x151DB8AC: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
L_151DB8B0:
    // 0x151DB8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151DB8B4:
    // 0x151DB8B4: or          $t9, $v0, $v1
    ctx->r25 = ctx->r2 | ctx->r3;
    // 0x151DB8B8: ori         $t4, $t9, 0x6
    ctx->r12 = ctx->r25 | 0X6;
    // 0x151DB8BC: or          $t5, $t4, $t0
    ctx->r13 = ctx->r12 | ctx->r8;
    // 0x151DB8C0: or          $t2, $t5, $t1
    ctx->r10 = ctx->r13 | ctx->r9;
    // 0x151DB8C4: ori         $t9, $t2, 0xCE00
    ctx->r25 = ctx->r10 | 0XCE00;
    // 0x151DB8C8: or          $t4, $t9, $at
    ctx->r12 = ctx->r25 | ctx->r1;
    // 0x151DB8CC: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x151DB8D0: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x151DB8D4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x151DB8D8: sw          $t5, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r13;
    // 0x151DB8DC: sb          $t7, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r15;
    // 0x151DB8E0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x151DB8E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151DB8E8: lw          $t7, 0xF4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF4);
    // 0x151DB8EC: lbu         $t5, 0xF3($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XF3);
    // 0x151DB8F0: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x151DB8F4: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x151DB8F8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x151DB8FC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151DB900: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151DB904: addiu       $t4, $zero, 0x3E8
    ctx->r12 = ADD32(0, 0X3E8);
    // 0x151DB908: sb          $t8, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r24;
    // 0x151DB90C: sb          $t3, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r11;
    // 0x151DB910: sb          $t6, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r14;
    // 0x151DB914: sb          $t2, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r10;
    // 0x151DB918: sb          $zero, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = 0;
    // 0x151DB91C: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x151DB920: sb          $t9, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = ctx->r25;
    // 0x151DB924: sh          $t4, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r12;
    // 0x151DB928: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x151DB92C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151DB930: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DB934: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    // 0x151DB938: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    // 0x151DB93C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151DB940: jal         0x15130280
    // 0x151DB944: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_15130280(rdram, ctx);
        goto after_9;
    // 0x151DB944: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_9:
    // 0x151DB948: beq         $v0, $zero, L_151DB968
    if (ctx->r2 == 0) {
        // 0x151DB94C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151DB968;
    }
    // 0x151DB94C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151DB950: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x151DB954: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x151DB958: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x151DB95C: jal         0x10022EC0
    // 0x151DB960: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x151DB960: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_10:
    // 0x151DB964: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
L_151DB968:
    // 0x151DB968: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151DB96C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151DB970: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x151DB974: jr          $ra
    // 0x151DB978: nop

    return;
    return;
    // 0x151DB978: nop

;}
RECOMP_FUNC void func_15006170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15006170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15006174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15006178: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x1500617C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x15006180: sh          $t6, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r14;
    // 0x15006184: sh          $t7, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r15;
    // 0x15006188: jal         0x15124B18
    // 0x1500618C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15124B18(rdram, ctx);
        goto after_0;
    // 0x1500618C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15006190: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15006194: lw          $t8, 0x84($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X84);
    // 0x15006198: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x1500619C: sw          $t9, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r25;
    // 0x150061A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150061A4: jr          $ra
    // 0x150061A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x150061A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151A499C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A499C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151A49A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151A49A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151A49A8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x151A49AC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x151A49B0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x151A49B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A49B8: lwc1        $f4, -0x729C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X729C);
    // 0x151A49BC: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x151A49C0: lbu         $t7, 0x3B($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3B);
    // 0x151A49C4: lbu         $t1, 0x57($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X57);
    // 0x151A49C8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151A49CC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151A49D0: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x151A49D4: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x151A49D8: sb          $t8, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r24;
    // 0x151A49DC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x151A49E0: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x151A49E4: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x151A49E8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x151A49EC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151A49F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151A49F4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x151A49F8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151A49FC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x151A4A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151A4A04: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x151A4A08: sb          $t7, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r15;
    // 0x151A4A0C: jal         0x151491F4
    // 0x151A4A10: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_151491F4(rdram, ctx);
        goto after_0;
    // 0x151A4A10: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_0:
    // 0x151A4A14: beq         $v0, $zero, L_151A4A28
    if (ctx->r2 == 0) {
        // 0x151A4A18: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_151A4A28;
    }
    // 0x151A4A18: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151A4A1C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151A4A20: jal         0x10022EC0
    // 0x151A4A24: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151A4A24: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
L_151A4A28:
    // 0x151A4A28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151A4A2C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151A4A30: jr          $ra
    // 0x151A4A34: nop

    return;
    return;
    // 0x151A4A34: nop

;}
RECOMP_FUNC void func_15161740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15161740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15161744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15161748: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x1516174C: jal         0x1514EDF0
    // 0x15161750: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1514EDF0(rdram, ctx);
        goto after_0;
    // 0x15161750: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15161754: jal         0x151617E4
    // 0x15161758: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151617E4(rdram, ctx);
        goto after_1;
    // 0x15161758: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1516175C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15161760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15161764: jr          $ra
    // 0x15161768: nop

    return;
    return;
    // 0x15161768: nop

;}
RECOMP_FUNC void func_15079F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15079F50: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15079F54: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15079F58: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15079F5C: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15079F60: sb          $t6, 0x23B($t7)
    MEM_B(0X23B, ctx->r15) = ctx->r14;
    // 0x15079F64: jr          $ra
    // 0x15079F68: nop

    return;
    return;
    // 0x15079F68: nop

;}
RECOMP_FUNC void func_1512FE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512FE00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1512FE04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1512FE08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1512FE0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1512FE10: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x1512FE14: sltiu       $at, $t6, 0x1E
    ctx->r1 = ctx->r14 < 0X1E ? 1 : 0;
    // 0x1512FE18: beq         $at, $zero, L_15130214
    if (ctx->r1 == 0) {
        // 0x1512FE1C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15130214;
    }
    // 0x1512FE1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1512FE20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512FE24: addu        $at, $at, $t6
    gpr jr_addend_1512FE2C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1512FE28: lw          $t6, 0x376C($at)
    ctx->r14 = ADD32(ctx->r1, 0X376C);
    // 0x1512FE2C: jr          $t6
    // 0x1512FE30: nop

    switch (jr_addend_1512FE2C >> 2) {
        case 0: goto L_1512FE34; break;
        case 1: goto L_1512FE58; break;
        case 2: goto L_1512FE88; break;
        case 3: goto L_15130214; break;
        case 4: goto L_15130214; break;
        case 5: goto L_15130214; break;
        case 6: goto L_15130214; break;
        case 7: goto L_1512FEB8; break;
        case 8: goto L_1512FEE4; break;
        case 9: goto L_15130214; break;
        case 10: goto L_1512FF1C; break;
        case 11: goto L_1512FF48; break;
        case 12: goto L_1512FF74; break;
        case 13: goto L_1512FFC8; break;
        case 14: goto L_15130214; break;
        case 15: goto L_1512FFA4; break;
        case 16: goto L_15130214; break;
        case 17: goto L_1512FFEC; break;
        case 18: goto L_1513001C; break;
        case 19: goto L_15130214; break;
        case 20: goto L_1513004C; break;
        case 21: goto L_15130074; break;
        case 22: goto L_151300D8; break;
        case 23: goto L_15130108; break;
        case 24: goto L_151300AC; break;
        case 25: goto L_15130138; break;
        case 26: goto L_15130164; break;
        case 27: goto L_15130190; break;
        case 28: goto L_151301C8; break;
        case 29: goto L_15130208; break;
        default: switch_error(__func__, 0x1512FE2C, 0x800A376C);
    }
    // 0x1512FE30: nop

L_1512FE34:
    // 0x1512FE34: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1512FE38: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x1512FE3C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1512FE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FE44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1512FE48: jal         0x15123934
    // 0x1512FE4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_0;
    // 0x1512FE4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1512FE50: b           L_15130218
    // 0x1512FE54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15130218;
    // 0x1512FE54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1512FE58:
    // 0x1512FE58: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1512FE5C: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512FE60: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x1512FE64: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1512FE68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FE6C: jal         0x15123934
    // 0x1512FE70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_1;
    // 0x1512FE70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x1512FE74: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x1512FE78: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x1512FE7C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x1512FE80: b           L_15130214
    // 0x1512FE84: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
        goto L_15130214;
    // 0x1512FE84: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
L_1512FE88:
    // 0x1512FE88: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1512FE8C: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512FE90: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x1512FE94: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x1512FE98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FE9C: jal         0x15123934
    // 0x1512FEA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_2;
    // 0x1512FEA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x1512FEA4: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    // 0x1512FEA8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x1512FEAC: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x1512FEB0: b           L_15130214
    // 0x1512FEB4: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
        goto L_15130214;
    // 0x1512FEB4: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
L_1512FEB8:
    // 0x1512FEB8: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1512FEBC: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512FEC0: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x1512FEC4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1512FEC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FECC: jal         0x15123934
    // 0x1512FED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_3;
    // 0x1512FED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x1512FED4: lw          $t5, 0x84($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X84);
    // 0x1512FED8: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x1512FEDC: b           L_15130214
    // 0x1512FEE0: sw          $t6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r14;
        goto L_15130214;
    // 0x1512FEE0: sw          $t6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r14;
L_1512FEE4:
    // 0x1512FEE4: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1512FEE8: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512FEEC: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x1512FEF0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1512FEF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FEF8: jal         0x15123934
    // 0x1512FEFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_4;
    // 0x1512FEFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x1512FF00: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x1512FF04: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x1512FF08: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x1512FF0C: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
    // 0x1512FF10: ori         $t1, $t9, 0x80
    ctx->r9 = ctx->r25 | 0X80;
    // 0x1512FF14: b           L_15130214
    // 0x1512FF18: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
        goto L_15130214;
    // 0x1512FF18: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
L_1512FF1C:
    // 0x1512FF1C: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1512FF20: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512FF24: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x1512FF28: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1512FF2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FF30: jal         0x15123934
    // 0x1512FF34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_5;
    // 0x1512FF34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x1512FF38: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x1512FF3C: ori         $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 | 0X4000;
    // 0x1512FF40: b           L_15130214
    // 0x1512FF44: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
        goto L_15130214;
    // 0x1512FF44: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
L_1512FF48:
    // 0x1512FF48: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1512FF4C: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512FF50: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x1512FF54: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1512FF58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FF5C: jal         0x15123934
    // 0x1512FF60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_6;
    // 0x1512FF60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x1512FF64: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x1512FF68: ori         $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 | 0X8000;
    // 0x1512FF6C: b           L_15130214
    // 0x1512FF70: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
        goto L_15130214;
    // 0x1512FF70: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
L_1512FF74:
    // 0x1512FF74: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1512FF78: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512FF7C: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x1512FF80: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1512FF84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FF88: jal         0x15123934
    // 0x1512FF8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_7;
    // 0x1512FF8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x1512FF90: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x1512FF94: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x1512FF98: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x1512FF9C: b           L_15130214
    // 0x1512FFA0: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
        goto L_15130214;
    // 0x1512FFA0: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
L_1512FFA4:
    // 0x1512FFA4: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512FFA8: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x1512FFAC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x1512FFB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FFB4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x1512FFB8: jal         0x15123934
    // 0x1512FFBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_8;
    // 0x1512FFBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x1512FFC0: b           L_15130218
    // 0x1512FFC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15130218;
    // 0x1512FFC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1512FFC8:
    // 0x1512FFC8: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512FFCC: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x1512FFD0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1512FFD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FFD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1512FFDC: jal         0x15123934
    // 0x1512FFE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_9;
    // 0x1512FFE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x1512FFE4: b           L_15130218
    // 0x1512FFE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15130218;
    // 0x1512FFE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1512FFEC:
    // 0x1512FFEC: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1512FFF0: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512FFF4: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x1512FFF8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1512FFFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15130000: jal         0x15123934
    // 0x15130004: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_10;
    // 0x15130004: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x15130008: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    // 0x1513000C: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x15130010: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x15130014: b           L_15130214
    // 0x15130018: sw          $t5, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r13;
        goto L_15130214;
    // 0x15130018: sw          $t5, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r13;
L_1513001C:
    // 0x1513001C: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x15130020: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x15130024: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x15130028: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1513002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15130030: jal         0x15123934
    // 0x15130034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_11;
    // 0x15130034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x15130038: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
    // 0x1513003C: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x15130040: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x15130044: b           L_15130214
    // 0x15130048: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
        goto L_15130214;
    // 0x15130048: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
L_1513004C:
    // 0x1513004C: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x15130050: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x15130054: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x15130058: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1513005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15130060: jal         0x15123934
    // 0x15130064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_12;
    // 0x15130064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x15130068: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1513006C: b           L_15130214
    // 0x15130070: swc1        $f4, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f4.u32l;
        goto L_15130214;
    // 0x15130070: swc1        $f4, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f4.u32l;
L_15130074:
    // 0x15130074: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x15130078: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1513007C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x15130080: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x15130084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15130088: jal         0x15123934
    // 0x1513008C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_13;
    // 0x1513008C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x15130090: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    // 0x15130094: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x15130098: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1513009C: ori         $t2, $t1, 0x800
    ctx->r10 = ctx->r9 | 0X800;
    // 0x151300A0: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
    // 0x151300A4: b           L_15130214
    // 0x151300A8: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
        goto L_15130214;
    // 0x151300A8: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
L_151300AC:
    // 0x151300AC: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x151300B0: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x151300B4: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x151300B8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151300BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151300C0: jal         0x15123934
    // 0x151300C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_14;
    // 0x151300C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x151300C8: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    // 0x151300CC: ori         $t5, $t4, 0x40
    ctx->r13 = ctx->r12 | 0X40;
    // 0x151300D0: b           L_15130214
    // 0x151300D4: sw          $t5, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r13;
        goto L_15130214;
    // 0x151300D4: sw          $t5, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r13;
L_151300D8:
    // 0x151300D8: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x151300DC: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x151300E0: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x151300E4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151300E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151300EC: jal         0x15123934
    // 0x151300F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_15;
    // 0x151300F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x151300F4: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
    // 0x151300F8: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x151300FC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x15130100: b           L_15130214
    // 0x15130104: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
        goto L_15130214;
    // 0x15130104: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
L_15130108:
    // 0x15130108: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1513010C: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x15130110: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x15130114: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15130118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1513011C: jal         0x15123934
    // 0x15130120: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_16;
    // 0x15130120: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x15130124: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    // 0x15130128: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1513012C: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x15130130: b           L_15130214
    // 0x15130134: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
        goto L_15130214;
    // 0x15130134: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
L_15130138:
    // 0x15130138: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1513013C: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x15130140: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x15130144: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15130148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1513014C: jal         0x15123934
    // 0x15130150: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_17;
    // 0x15130150: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x15130154: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x15130158: ori         $t4, $t3, 0x10
    ctx->r12 = ctx->r11 | 0X10;
    // 0x1513015C: b           L_15130214
    // 0x15130160: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
        goto L_15130214;
    // 0x15130160: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
L_15130164:
    // 0x15130164: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x15130168: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1513016C: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x15130170: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x15130174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15130178: jal         0x15123934
    // 0x1513017C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_18;
    // 0x1513017C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x15130180: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x15130184: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x15130188: b           L_15130214
    // 0x1513018C: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
        goto L_15130214;
    // 0x1513018C: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
L_15130190:
    // 0x15130190: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x15130194: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x15130198: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x1513019C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151301A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151301A4: jal         0x15123934
    // 0x151301A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_19;
    // 0x151301A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x151301AC: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x151301B0: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x151301B4: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x151301B8: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
    // 0x151301BC: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x151301C0: b           L_15130214
    // 0x151301C4: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
        goto L_15130214;
    // 0x151301C4: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
L_151301C8:
    // 0x151301C8: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x151301CC: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x151301D0: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x151301D4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151301D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151301DC: jal         0x15123934
    // 0x151301E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_20;
    // 0x151301E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_20:
    // 0x151301E4: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    // 0x151301E8: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x151301EC: ori         $at, $at, 0x10
    ctx->r1 = ctx->r1 | 0X10;
    // 0x151301F0: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x151301F4: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x151301F8: sw          $t5, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r13;
    // 0x151301FC: and         $t7, $t5, $at
    ctx->r15 = ctx->r13 & ctx->r1;
    // 0x15130200: b           L_15130214
    // 0x15130204: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
        goto L_15130214;
    // 0x15130204: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
L_15130208:
    // 0x15130208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1513020C: jal         0x15128774
    // 0x15130210: lw          $a1, 0x3D0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3D0);
    func_15128774(rdram, ctx);
        goto after_21;
    // 0x15130210: lw          $a1, 0x3D0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3D0);
    after_21:
L_15130214:
    // 0x15130214: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15130218:
    // 0x15130218: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1513021C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15130220: jr          $ra
    // 0x15130224: nop

    return;
    return;
    // 0x15130224: nop

;}
RECOMP_FUNC void func_15132A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15132A4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15132A50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15132A54: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15132A58: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x15132A5C: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x15132A60: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x15132A64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15132A68: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15132A6C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15132A70: jal         0x1513264C
    // 0x15132A74: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_1513264C(rdram, ctx);
        goto after_0;
    // 0x15132A74: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x15132A78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15132A7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15132A80: jr          $ra
    // 0x15132A84: nop

    return;
    return;
    // 0x15132A84: nop

;}
RECOMP_FUNC void func_1514F4D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F4D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1514F4DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1514F4E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1514F4E4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1514F4E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1514F4EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1514F4F0: jal         0x151D74B0
    // 0x1514F4F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151D74B0(rdram, ctx);
        goto after_0;
    // 0x1514F4F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x1514F4F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1514F4FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1514F500: jr          $ra
    // 0x1514F504: nop

    return;
    return;
    // 0x1514F504: nop

;}
RECOMP_FUNC void func_1507ADE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507ADE0: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x1507ADE4: addiu       $a3, $a3, 0x154C
    ctx->r7 = ADD32(ctx->r7, 0X154C);
    // 0x1507ADE8: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x1507ADEC: ori         $at, $zero, 0x8001
    ctx->r1 = 0 | 0X8001;
    // 0x1507ADF0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507ADF4: lhu         $v0, 0x7A($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X7A);
    // 0x1507ADF8: lhu         $a0, 0x78($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X78);
    // 0x1507ADFC: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x1507AE00: bgez        $a2, L_1507AE0C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x1507AE04: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_1507AE0C;
    }
    // 0x1507AE04: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x1507AE08: negu        $a1, $a2
    ctx->r5 = SUB32(0, ctx->r6);
L_1507AE0C:
    // 0x1507AE0C: slt         $at, $a1, $at
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x1507AE10: bne         $at, $zero, L_1507AE20
    if (ctx->r1 != 0) {
        // 0x1507AE14: nop
    
            goto L_1507AE20;
    }
    // 0x1507AE14: nop

    // 0x1507AE18: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x1507AE1C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_1507AE20:
    // 0x1507AE20: bgez        $a1, L_1507AE2C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x1507AE24: nop
    
            goto L_1507AE2C;
    }
    // 0x1507AE24: nop

    // 0x1507AE28: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
L_1507AE2C:
    // 0x1507AE2C: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507AE30: div         $zero, $a1, $t6
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r14)));
    // 0x1507AE34: mflo        $v0
    ctx->r2 = lo;
    // 0x1507AE38: sra         $t7, $v0, 8
    ctx->r15 = S32(SIGNED(ctx->r2) >> 8);
    // 0x1507AE3C: sb          $t7, 0x1E6($v1)
    MEM_B(0X1E6, ctx->r3) = ctx->r15;
    // 0x1507AE40: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x1507AE44: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x1507AE48: bne         $t6, $zero, L_1507AE54
    if (ctx->r14 != 0) {
        // 0x1507AE4C: nop
    
            goto L_1507AE54;
    }
    // 0x1507AE4C: nop

    // 0x1507AE50: break       7
    do_break(352824912);
L_1507AE54:
    // 0x1507AE54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1507AE58: bne         $t6, $at, L_1507AE6C
    if (ctx->r14 != ctx->r1) {
        // 0x1507AE5C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1507AE6C;
    }
    // 0x1507AE5C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1507AE60: bne         $a1, $at, L_1507AE6C
    if (ctx->r5 != ctx->r1) {
        // 0x1507AE64: nop
    
            goto L_1507AE6C;
    }
    // 0x1507AE64: nop

    // 0x1507AE68: break       6
    do_break(352824936);
L_1507AE6C:
    // 0x1507AE6C: sb          $t8, 0x1E8($t9)
    MEM_B(0X1E8, ctx->r25) = ctx->r24;
    // 0x1507AE70: jr          $ra
    // 0x1507AE74: nop

    return;
    return;
    // 0x1507AE74: nop

;}
RECOMP_FUNC void func_15009C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009C7C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15009C80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15009C84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15009C88: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x15009C8C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x15009C90: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15009C94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15009C98: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15009C9C: addiu       $t6, $zero, 0xDC
    ctx->r14 = ADD32(0, 0XDC);
    // 0x15009CA0: addiu       $t7, $zero, 0xDC
    ctx->r15 = ADD32(0, 0XDC);
    // 0x15009CA4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15009CA8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x15009CAC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x15009CB0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15009CB4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15009CB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15009CBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15009CC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15009CC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15009CC8: jal         0x15187EC0
    // 0x15009CCC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    func_15187EC0(rdram, ctx);
        goto after_0;
    // 0x15009CCC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x15009CD0: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x15009CD4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15009CD8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15009CDC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x15009CE0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x15009CE4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15009CE8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15009CEC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x15009CF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15009CF4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x15009CF8: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x15009CFC: jal         0x1516387C
    // 0x15009D00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1516387C(rdram, ctx);
        goto after_1;
    // 0x15009D00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x15009D04: beq         $v0, $zero, L_15009D18
    if (ctx->r2 == 0) {
        // 0x15009D08: addiu       $a0, $v0, 0x18
        ctx->r4 = ADD32(ctx->r2, 0X18);
            goto L_15009D18;
    }
    // 0x15009D08: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x15009D0C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x15009D10: jal         0x10022EC0
    // 0x15009D14: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15009D14: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_15009D18:
    // 0x15009D18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15009D1C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15009D20: jr          $ra
    // 0x15009D24: nop

    return;
    return;
    // 0x15009D24: nop

;}
RECOMP_FUNC void func_150B06B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B06B0: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x150B06B4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x150B06B8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x150B06BC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150B06C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150B06C4: andi        $s1, $a2, 0xFF
    ctx->r17 = ctx->r6 & 0XFF;
    // 0x150B06C8: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x150B06CC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150B06D0: sw          $a2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r6;
    // 0x150B06D4: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150B06D8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x150B06DC: swc1        $f4, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f4.u32l;
    // 0x150B06E0: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150B06E4: swc1        $f6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
    // 0x150B06E8: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150B06EC: jal         0x15143E24
    // 0x150B06F0: swc1        $f8, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f8.u32l;
    func_15143E24(rdram, ctx);
        goto after_0;
    // 0x150B06F0: swc1        $f8, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x150B06F4: addiu       $t6, $v0, 0x40
    ctx->r14 = ADD32(ctx->r2, 0X40);
    // 0x150B06F8: sb          $t6, 0x133($sp)
    MEM_B(0X133, ctx->r29) = ctx->r14;
    // 0x150B06FC: addiu       $a0, $sp, 0x10C
    ctx->r4 = ADD32(ctx->r29, 0X10C);
    // 0x150B0700: jal         0x1504715C
    // 0x150B0704: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x150B0704: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x150B0708: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x150B070C: addiu       $at, $zero, 0xA6
    ctx->r1 = ADD32(0, 0XA6);
    // 0x150B0710: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x150B0714: bne         $t7, $at, L_150B0840
    if (ctx->r15 != ctx->r1) {
        // 0x150B0718: addiu       $t1, $zero, 0xA
        ctx->r9 = ADD32(0, 0XA);
            goto L_150B0840;
    }
    // 0x150B0718: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x150B071C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150B0720: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150B0724: lwc1        $f16, 0x138($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X138);
    // 0x150B0728: lwc1        $f10, 0x134($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X134);
    // 0x150B072C: lwc1        $f6, 0x13C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x150B0730: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150B0734: addiu       $a0, $sp, 0x100
    ctx->r4 = ADD32(ctx->r29, 0X100);
    // 0x150B0738: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x150B073C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x150B0740: swc1        $f4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f4.u32l;
    // 0x150B0744: swc1        $f10, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f10.u32l;
    // 0x150B0748: jal         0x151C329C
    // 0x150B074C: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    func_151C329C(rdram, ctx);
        goto after_2;
    // 0x150B074C: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x150B0750: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x150B0754: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x150B0758: sw          $t8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r24;
    // 0x150B075C: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
    // 0x150B0760: addiu       $t1, $sp, 0x134
    ctx->r9 = ADD32(ctx->r29, 0X134);
    // 0x150B0764: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x150B0768: addiu       $t0, $sp, 0xCC
    ctx->r8 = ADD32(ctx->r29, 0XCC);
    // 0x150B076C: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x150B0770: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x150B0774: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x150B0778: addiu       $t8, $zero, -0x2D
    ctx->r24 = ADD32(0, -0X2D);
    // 0x150B077C: addiu       $t9, $zero, 0x1A
    ctx->r25 = ADD32(0, 0X1A);
    // 0x150B0780: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x150B0784: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x150B0788: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x150B078C: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x150B0790: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x150B0794: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x150B0798: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B079C: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    // 0x150B07A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B07A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B07A8: lwc1        $f16, -0x7E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X7E0);
    // 0x150B07AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B07B0: lwc1        $f18, -0x7DC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X7DC);
    // 0x150B07B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B07B8: lwc1        $f4, -0x7D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7D8);
    // 0x150B07BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B07C0: lb          $t5, 0x133($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X133);
    // 0x150B07C4: lwc1        $f6, -0x7D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7D4);
    // 0x150B07C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B07CC: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x150B07D0: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x150B07D4: lwc1        $f8, -0x7D0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7D0);
    // 0x150B07D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150B07DC: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B07E0: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150B07E4: addiu       $t6, $t5, -0x28
    ctx->r14 = ADD32(ctx->r13, -0X28);
    // 0x150B07E8: sh          $t6, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = ctx->r14;
    // 0x150B07EC: sh          $t7, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = ctx->r15;
    // 0x150B07F0: sh          $t8, 0xDC($sp)
    MEM_H(0XDC, ctx->r29) = ctx->r24;
    // 0x150B07F4: sh          $t9, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r25;
    // 0x150B07F8: sh          $t3, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r11;
    // 0x150B07FC: sh          $t2, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r10;
    // 0x150B0800: addiu       $a2, $a2, -0x7EC
    ctx->r6 = ADD32(ctx->r6, -0X7EC);
    // 0x150B0804: addiu       $a1, $a1, -0x7F0
    ctx->r5 = ADD32(ctx->r5, -0X7F0);
    // 0x150B0808: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150B080C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150B0810: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150B0814: addiu       $a0, $sp, 0xC4
    ctx->r4 = ADD32(ctx->r29, 0XC4);
    // 0x150B0818: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150B081C: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x150B0820: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x150B0824: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x150B0828: swc1        $f6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f6.u32l;
    // 0x150B082C: swc1        $f8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f8.u32l;
    // 0x150B0830: jal         0x15152190
    // 0x150B0834: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_15152190(rdram, ctx);
        goto after_3;
    // 0x150B0834: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x150B0838: b           L_150B0A4C
    // 0x150B083C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_150B0A4C;
    // 0x150B083C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_150B0840:
    // 0x150B0840: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
    // 0x150B0844: sw          $t1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r9;
    // 0x150B0848: addiu       $t5, $sp, 0x134
    ctx->r13 = ADD32(ctx->r29, 0X134);
    // 0x150B084C: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150B0850: addiu       $t4, $sp, 0x90
    ctx->r12 = ADD32(ctx->r29, 0X90);
    // 0x150B0854: addiu       $t2, $zero, 0x50
    ctx->r10 = ADD32(0, 0X50);
    // 0x150B0858: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150B085C: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x150B0860: addiu       $t0, $zero, -0x15
    ctx->r8 = ADD32(0, -0X15);
    // 0x150B0864: addiu       $t1, $zero, 0xD
    ctx->r9 = ADD32(0, 0XD);
    // 0x150B0868: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x150B086C: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150B0870: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x150B0874: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x150B0878: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x150B087C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x150B0880: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150B0884: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    // 0x150B0888: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150B088C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0890: lwc1        $f4, -0x7CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7CC);
    // 0x150B0894: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0898: lwc1        $f6, -0x7C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7C8);
    // 0x150B089C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B08A0: lwc1        $f8, -0x7C4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7C4);
    // 0x150B08A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B08A8: lb          $t9, 0x133($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X133);
    // 0x150B08AC: lwc1        $f10, -0x7C0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7C0);
    // 0x150B08B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B08B4: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    // 0x150B08B8: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    // 0x150B08BC: lwc1        $f16, -0x7BC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X7BC);
    // 0x150B08C0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150B08C4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B08C8: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150B08CC: addiu       $t3, $t9, -0x28
    ctx->r11 = ADD32(ctx->r25, -0X28);
    // 0x150B08D0: sh          $t3, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r11;
    // 0x150B08D4: sh          $t2, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r10;
    // 0x150B08D8: sh          $t0, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r8;
    // 0x150B08DC: sh          $t1, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r9;
    // 0x150B08E0: sh          $t7, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r15;
    // 0x150B08E4: sh          $t6, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r14;
    // 0x150B08E8: addiu       $a2, $a2, -0x7E4
    ctx->r6 = ADD32(ctx->r6, -0X7E4);
    // 0x150B08EC: addiu       $a1, $a1, -0x7E8
    ctx->r5 = ADD32(ctx->r5, -0X7E8);
    // 0x150B08F0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150B08F4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150B08F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150B08FC: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x150B0900: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150B0904: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x150B0908: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x150B090C: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x150B0910: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x150B0914: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    // 0x150B0918: jal         0x15152190
    // 0x150B091C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_15152190(rdram, ctx);
        goto after_4;
    // 0x150B091C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x150B0920: addiu       $s0, $sp, 0x44
    ctx->r16 = ADD32(ctx->r29, 0X44);
    // 0x150B0924: addiu       $t4, $sp, 0x134
    ctx->r12 = ADD32(ctx->r29, 0X134);
    // 0x150B0928: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x150B092C: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x150B0930: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150B0934: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150B0938: lw          $t9, 0x4($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X4);
    // 0x150B093C: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x150B0940: addiu       $t6, $zero, -0x1E
    ctx->r14 = ADD32(0, -0X1E);
    // 0x150B0944: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x150B0948: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x150B094C: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x150B0950: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x150B0954: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x150B0958: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B095C: lwc1        $f4, -0x7B8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7B8);
    // 0x150B0960: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0964: lwc1        $f6, -0x7B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7B4);
    // 0x150B0968: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B096C: lwc1        $f8, -0x7B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7B0);
    // 0x150B0970: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0974: lwc1        $f10, -0x7AC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7AC);
    // 0x150B0978: lb          $t0, 0x133($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X133);
    // 0x150B097C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0980: lwc1        $f16, -0x7A8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X7A8);
    // 0x150B0984: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0988: lwc1        $f18, -0x7A4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X7A4);
    // 0x150B098C: addiu       $t1, $t0, -0x3C
    ctx->r9 = ADD32(ctx->r8, -0X3C);
    // 0x150B0990: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150B0994: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x150B0998: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B099C: sh          $t3, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r11;
    // 0x150B09A0: sh          $t2, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r10;
    // 0x150B09A4: sh          $t1, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r9;
    // 0x150B09A8: sh          $t7, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r15;
    // 0x150B09AC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x150B09B0: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x150B09B4: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x150B09B8: addiu       $t2, $zero, 0x9B
    ctx->r10 = ADD32(0, 0X9B);
    // 0x150B09BC: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x150B09C0: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x150B09C4: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x150B09C8: sh          $t6, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r14;
    // 0x150B09CC: sh          $t8, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r24;
    // 0x150B09D0: sh          $t5, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r13;
    // 0x150B09D4: sh          $t4, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r12;
    // 0x150B09D8: sh          $t9, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r25;
    // 0x150B09DC: sh          $t3, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r11;
    // 0x150B09E0: sh          $t2, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r10;
    // 0x150B09E4: sh          $t0, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r8;
    // 0x150B09E8: sh          $t1, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r9;
    // 0x150B09EC: sh          $t7, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r15;
    // 0x150B09F0: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x150B09F4: sb          $zero, 0x78($sp)
    MEM_B(0X78, ctx->r29) = 0;
    // 0x150B09F8: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x150B09FC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x150B0A00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150B0A04: addiu       $a2, $sp, 0x10C
    ctx->r6 = ADD32(ctx->r29, 0X10C);
    // 0x150B0A08: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x150B0A0C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x150B0A10: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x150B0A14: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x150B0A18: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x150B0A1C: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x150B0A20: jal         0x15153F18
    // 0x150B0A24: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    func_15153F18(rdram, ctx);
        goto after_5;
    // 0x150B0A24: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x150B0A28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150B0A2C: sb          $t6, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r14;
    // 0x150B0A30: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x150B0A34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150B0A38: addiu       $a2, $sp, 0x10C
    ctx->r6 = ADD32(ctx->r29, 0X10C);
    // 0x150B0A3C: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x150B0A40: jal         0x15153F18
    // 0x150B0A44: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_15153F18(rdram, ctx);
        goto after_6;
    // 0x150B0A44: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_6:
    // 0x150B0A48: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_150B0A4C:
    // 0x150B0A4C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150B0A50: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x150B0A54: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x150B0A58: jr          $ra
    // 0x150B0A5C: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    return;
    // 0x150B0A5C: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void func_1508B194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508B194: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x1508B198: lb          $t6, -0x270($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X270);
    // 0x1508B19C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x1508B1A0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x1508B1A4: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1508B1A8: bne         $at, $zero, L_1508B1B8
    if (ctx->r1 != 0) {
        // 0x1508B1AC: nop
    
            goto L_1508B1B8;
    }
    // 0x1508B1AC: nop

    // 0x1508B1B0: jr          $ra
    // 0x1508B1B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1508B1B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1508B1B8:
    // 0x1508B1B8: lw          $t7, -0x22C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X22C);
    // 0x1508B1BC: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x1508B1C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1508B1C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1508B1C8: lh          $v0, 0x70($t9)
    ctx->r2 = MEM_H(ctx->r25, 0X70);
    // 0x1508B1CC: jr          $ra
    // 0x1508B1D0: nop

    return;
    return;
    // 0x1508B1D0: nop

;}
RECOMP_FUNC void func_1506FF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FF50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FF54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FF58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FF5C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FF60: jal         0x151AB930
    // 0x1506FF64: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_151AB930(rdram, ctx);
        goto after_0;
    // 0x1506FF64: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1506FF68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FF6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FF70: jr          $ra
    // 0x1506FF74: nop

    return;
    return;
    // 0x1506FF74: nop

;}
RECOMP_FUNC void func_151B22F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B22F4: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x151B22F8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x151B22FC: addiu       $t6, $t6, -0x3D30
    ctx->r14 = ADD32(ctx->r14, -0X3D30);
    // 0x151B2300: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x151B2304: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x151B2308: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x151B230C: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x151B2310: mflo        $t8
    ctx->r24 = lo;
    // 0x151B2314: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x151B2318: lbu         $t0, 0x65($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X65);
    // 0x151B231C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x151B2320: bne         $t9, $t0, L_151B2340
    if (ctx->r25 != ctx->r8) {
        // 0x151B2324: nop
    
            goto L_151B2340;
    }
    // 0x151B2324: nop

    // 0x151B2328: lw          $t1, 0x5C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X5C);
    // 0x151B232C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151B2330: bne         $t1, $at, L_151B2340
    if (ctx->r9 != ctx->r1) {
        // 0x151B2334: nop
    
            goto L_151B2340;
    }
    // 0x151B2334: nop

    // 0x151B2338: jr          $ra
    // 0x151B233C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x151B233C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151B2340:
    // 0x151B2340: jr          $ra
    // 0x151B2344: nop

    return;
    return;
    // 0x151B2344: nop

;}
RECOMP_FUNC void func_15030D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15030D54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15030D58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15030D5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15030D60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15030D64: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15030D68: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15030D6C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x15030D70: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x15030D74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15030D78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15030D7C: jal         0x10003C40
    // 0x15030D80: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15030D80: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x15030D84: beq         $v0, $zero, L_15030DF4
    if (ctx->r2 == 0) {
        // 0x15030D88: sw          $v0, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->r2;
            goto L_15030DF4;
    }
    // 0x15030D88: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x15030D8C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15030D90: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x15030D94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15030D98: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x15030D9C: lw          $t7, 0x44($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X44);
    // 0x15030DA0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15030DA4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15030DA8: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x15030DAC: lw          $t8, 0x44($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X44);
    // 0x15030DB0: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15030DB4: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x15030DB8: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x15030DBC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15030DC0: swc1        $f10, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f10.u32l;
    // 0x15030DC4: lw          $t0, 0x44($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X44);
    // 0x15030DC8: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15030DCC: swc1        $f16, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f16.u32l;
    // 0x15030DD0: lw          $t1, 0x44($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X44);
    // 0x15030DD4: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15030DD8: swc1        $f18, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f18.u32l;
    // 0x15030DDC: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x15030DE0: bnel        $t2, $zero, L_15030DF8
    if (ctx->r10 != 0) {
        // 0x15030DE4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15030DF8;
    }
    goto skip_0;
    // 0x15030DE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x15030DE8: jal         0x10003C40
    // 0x15030DEC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x15030DEC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
    // 0x15030DF0: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
L_15030DF4:
    // 0x15030DF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15030DF8:
    // 0x15030DF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15030DFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15030E00: jr          $ra
    // 0x15030E04: nop

    return;
    return;
    // 0x15030E04: nop

;}
RECOMP_FUNC void func_1503A678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503A678: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x1503A67C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1503A680: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1503A684: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1503A688: lbu         $t6, 0x3E78($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3E78);
    // 0x1503A68C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1503A690: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1503A694: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1503A698: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1503A69C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503A6A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1503A6A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503A6A8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1503A6AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503A6B0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1503A6B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503A6B8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x1503A6BC: lbu         $t9, 0x4($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X4);
    // 0x1503A6C0: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x1503A6C4: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x1503A6C8: bnel        $t9, $at, L_1503A7E0
    if (ctx->r25 != ctx->r1) {
        // 0x1503A6CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1503A7E0;
    }
    goto skip_0;
    // 0x1503A6CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1503A6D0: lbu         $t0, 0x20A($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X20A);
    // 0x1503A6D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1503A6D8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1503A6DC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x1503A6E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1503A6E4: bgez        $t0, L_1503A6F8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1503A6E8: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1503A6F8;
    }
    // 0x1503A6E8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1503A6EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1503A6F0: nop

    // 0x1503A6F4: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_1503A6F8:
    // 0x1503A6F8: lui         $at, 0x3C80
    ctx->r1 = S32(0X3C80 << 16);
    // 0x1503A6FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1503A700: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1503A704: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
    // 0x1503A708: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1503A70C: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x1503A710: bne         $v0, $zero, L_1503A728
    if (ctx->r2 != 0) {
        // 0x1503A714: add.s       $f0, $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_1503A728;
    }
    // 0x1503A714: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x1503A718: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x1503A71C: swc1        $f12, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f12.u32l;
    // 0x1503A720: b           L_1503A738
    // 0x1503A724: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
        goto L_1503A738;
    // 0x1503A724: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
L_1503A728:
    // 0x1503A728: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1503A72C: swc1        $f12, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f12.u32l;
    // 0x1503A730: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    // 0x1503A734: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
L_1503A738:
    // 0x1503A738: lbu         $t1, 0x4404($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X4404);
    // 0x1503A73C: lw          $t3, 0x1D4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X1D4);
    // 0x1503A740: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1503A744: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x1503A748: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
    // 0x1503A74C: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x1503A750: swc1        $f12, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f12.u32l;
    // 0x1503A754: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x1503A758: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x1503A75C: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x1503A760: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x1503A764: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1503A768: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x1503A76C: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x1503A770: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1503A774: jal         0x150A7BC0
    // 0x1503A778: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x1503A778: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x1503A77C: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x1503A780: lw          $a1, 0xC4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC4);
    // 0x1503A784: lw          $a2, 0xC8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC8);
    // 0x1503A788: jal         0x150A7CB0
    // 0x1503A78C: lw          $a3, 0xCC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XCC);
    func_150A7CB0(rdram, ctx);
        goto after_1;
    // 0x1503A78C: lw          $a3, 0xCC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XCC);
    after_1:
    // 0x1503A790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1503A794: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x1503A798: jal         0x150A7A48
    // 0x1503A79C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_150A7A48(rdram, ctx);
        goto after_2;
    // 0x1503A79C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x1503A7A0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1503A7A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1503A7A8: jal         0x10023A10
    // 0x1503A7AC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    bcopy_recomp(rdram, ctx);
        goto after_3;
    // 0x1503A7AC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_3:
    // 0x1503A7B0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1503A7B4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1503A7B8: addiu       $v0, $v0, 0x3FFA
    ctx->r2 = ADD32(ctx->r2, 0X3FFA);
    // 0x1503A7BC: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x1503A7C0: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1503A7C4: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x1503A7C8: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1503A7CC: swc1        $f8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f8.u32l;
    // 0x1503A7D0: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x1503A7D4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x1503A7D8: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x1503A7DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1503A7E0:
    // 0x1503A7E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1503A7E4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x1503A7E8: jr          $ra
    // 0x1503A7EC: nop

    return;
    return;
    // 0x1503A7EC: nop

;}
RECOMP_FUNC void func_151B9CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B9CB0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x151B9CB4: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x151B9CB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151B9CBC: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x151B9CC0: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x151B9CC4: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x151B9CC8: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x151B9CCC: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x151B9CD0: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x151B9CD4: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x151B9CD8: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x151B9CDC: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x151B9CE0: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x151B9CE4: bnel        $v0, $zero, L_151B9D00
    if (ctx->r2 != 0) {
        // 0x151B9CE8: lwc1        $f4, 0x0($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
            goto L_151B9D00;
    }
    goto skip_0;
    // 0x151B9CE8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x151B9CEC: lh          $s2, 0x16($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X16);
    // 0x151B9CF0: lh          $s3, 0x18($s0)
    ctx->r19 = MEM_H(ctx->r16, 0X18);
    // 0x151B9CF4: b           L_151B9D38
    // 0x151B9CF8: lh          $s4, 0x1A($s0)
    ctx->r20 = MEM_H(ctx->r16, 0X1A);
        goto L_151B9D38;
    // 0x151B9CF8: lh          $s4, 0x1A($s0)
    ctx->r20 = MEM_H(ctx->r16, 0X1A);
    // 0x151B9CFC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
L_151B9D00:
    // 0x151B9D00: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151B9D04: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151B9D08: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B9D0C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B9D10: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x151B9D14: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151B9D18: mfc1        $s3, $f10
    ctx->r19 = (int32_t)ctx->f10.u32l;
    // 0x151B9D1C: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x151B9D20: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151B9D24: mfc1        $s4, $f18
    ctx->r20 = (int32_t)ctx->f18.u32l;
    // 0x151B9D28: sll         $t0, $s3, 16
    ctx->r8 = S32(ctx->r19 << 16);
    // 0x151B9D2C: sra         $s3, $t0, 16
    ctx->r19 = S32(SIGNED(ctx->r8) >> 16);
    // 0x151B9D30: sll         $t3, $s4, 16
    ctx->r11 = S32(ctx->r20 << 16);
    // 0x151B9D34: sra         $s4, $t3, 16
    ctx->r20 = S32(SIGNED(ctx->r11) >> 16);
L_151B9D38:
    // 0x151B9D38: lh          $t5, 0x28($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X28);
    // 0x151B9D3C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151B9D40: blezl       $t5, L_151B9DF0
    if (SIGNED(ctx->r13) <= 0) {
        // 0x151B9D44: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_151B9DF0;
    }
    goto skip_1;
    // 0x151B9D44: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_1:
    // 0x151B9D48: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x151B9D4C: nop

    // 0x151B9D50: lbu         $a0, 0x14($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X14);
L_151B9D54:
    // 0x151B9D54: lbu         $a1, 0x15($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X15);
    // 0x151B9D58: addiu       $t8, $zero, -0x50
    ctx->r24 = ADD32(0, -0X50);
    // 0x151B9D5C: addiu       $t9, $zero, 0x168
    ctx->r25 = ADD32(0, 0X168);
    // 0x151B9D60: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x151B9D64: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151B9D68: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x151B9D6C: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x151B9D70: lh          $t0, 0x1C($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X1C);
    // 0x151B9D74: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x151B9D78: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x151B9D7C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x151B9D80: lh          $t1, 0x1E($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X1E);
    // 0x151B9D84: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x151B9D88: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151B9D8C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x151B9D90: lh          $t2, 0x20($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X20);
    // 0x151B9D94: sll         $a3, $s3, 16
    ctx->r7 = S32(ctx->r19 << 16);
    // 0x151B9D98: sra         $t7, $a3, 16
    ctx->r15 = S32(SIGNED(ctx->r7) >> 16);
    // 0x151B9D9C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x151B9DA0: lh          $t3, 0x22($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X22);
    // 0x151B9DA4: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x151B9DA8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x151B9DAC: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x151B9DB0: lh          $t5, 0x24($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X24);
    // 0x151B9DB4: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x151B9DB8: lh          $t6, 0x26($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X26);
    // 0x151B9DBC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x151B9DC0: lbu         $t7, 0xC($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC);
    // 0x151B9DC4: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x151B9DC8: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x151B9DCC: jal         0x151B9690
    // 0x151B9DD0: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    func_151B9690(rdram, ctx);
        goto after_0;
    // 0x151B9DD0: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    after_0:
    // 0x151B9DD4: lh          $t9, 0x28($s5)
    ctx->r25 = MEM_H(ctx->r21, 0X28);
    // 0x151B9DD8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151B9DDC: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151B9DE0: bnel        $at, $zero, L_151B9D54
    if (ctx->r1 != 0) {
        // 0x151B9DE4: lbu         $a0, 0x14($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X14);
            goto L_151B9D54;
    }
    goto skip_2;
    // 0x151B9DE4: lbu         $a0, 0x14($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X14);
    skip_2:
    // 0x151B9DE8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151B9DEC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_151B9DF0:
    // 0x151B9DF0: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x151B9DF4: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x151B9DF8: lbu         $a0, 0x14($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X14);
L_151B9DFC:
    // 0x151B9DFC: lbu         $a1, 0x15($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X15);
    // 0x151B9E00: addiu       $t2, $zero, -0x50
    ctx->r10 = ADD32(0, -0X50);
    // 0x151B9E04: addiu       $t3, $zero, 0x168
    ctx->r11 = ADD32(0, 0X168);
    // 0x151B9E08: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x151B9E0C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151B9E10: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x151B9E14: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x151B9E18: lh          $t4, 0x1C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X1C);
    // 0x151B9E1C: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x151B9E20: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x151B9E24: multu       $t4, $s5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B9E28: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x151B9E2C: sll         $a3, $s3, 16
    ctx->r7 = S32(ctx->r19 << 16);
    // 0x151B9E30: sra         $t1, $a3, 16
    ctx->r9 = S32(SIGNED(ctx->r7) >> 16);
    // 0x151B9E34: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x151B9E38: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x151B9E3C: mflo        $t5
    ctx->r13 = lo;
    // 0x151B9E40: bgez        $t5, L_151B9E50
    if (SIGNED(ctx->r13) >= 0) {
        // 0x151B9E44: sra         $t6, $t5, 1
        ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
            goto L_151B9E50;
    }
    // 0x151B9E44: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x151B9E48: addiu       $at, $t5, 0x1
    ctx->r1 = ADD32(ctx->r13, 0X1);
    // 0x151B9E4C: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_151B9E50:
    // 0x151B9E50: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x151B9E54: lh          $t7, 0x1E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1E);
    // 0x151B9E58: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x151B9E5C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x151B9E60: lh          $t9, 0x20($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X20);
    // 0x151B9E64: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x151B9E68: lh          $t0, 0x22($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X22);
    // 0x151B9E6C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x151B9E70: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x151B9E74: lh          $t2, 0x24($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X24);
    // 0x151B9E78: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x151B9E7C: lh          $t3, 0x26($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X26);
    // 0x151B9E80: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x151B9E84: lbu         $t4, 0xC($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XC);
    // 0x151B9E88: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x151B9E8C: lbu         $t5, 0x1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1);
    // 0x151B9E90: jal         0x151B9690
    // 0x151B9E94: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    func_151B9690(rdram, ctx);
        goto after_1;
    // 0x151B9E94: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    after_1:
    // 0x151B9E98: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151B9E9C: bnel        $s1, $s6, L_151B9DFC
    if (ctx->r17 != ctx->r22) {
        // 0x151B9EA0: lbu         $a0, 0x14($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X14);
            goto L_151B9DFC;
    }
    goto skip_3;
    // 0x151B9EA0: lbu         $a0, 0x14($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X14);
    skip_3:
    // 0x151B9EA4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151B9EA8: lh          $v0, 0x2A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2A);
    // 0x151B9EAC: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x151B9EB0: subu        $v0, $v0, $t6
    ctx->r2 = SUB32(ctx->r2, ctx->r14);
    // 0x151B9EB4: bgezl       $v0, L_151B9ED0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151B9EB8: sh          $v0, 0x2A($s0)
        MEM_H(0X2A, ctx->r16) = ctx->r2;
            goto L_151B9ED0;
    }
    goto skip_4;
    // 0x151B9EB8: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    skip_4:
    // 0x151B9EBC: jal         0x1516972C
    // 0x151B9EC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x151B9EC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x151B9EC4: b           L_151B9ED4
    // 0x151B9EC8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
        goto L_151B9ED4;
    // 0x151B9EC8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x151B9ECC: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
L_151B9ED0:
    // 0x151B9ED0: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_151B9ED4:
    // 0x151B9ED4: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x151B9ED8: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x151B9EDC: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x151B9EE0: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x151B9EE4: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x151B9EE8: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x151B9EEC: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x151B9EF0: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x151B9EF4: jr          $ra
    // 0x151B9EF8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x151B9EF8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_1514F6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F6E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1514F6EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1514F6F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1514F6F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1514F6F8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x1514F6FC: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x1514F700: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1514F704: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x1514F708: bne         $t6, $zero, L_1514F760
    if (ctx->r14 != 0) {
        // 0x1514F70C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_1514F760;
    }
    // 0x1514F70C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1514F710: jal         0x15145128
    // 0x1514F714: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15145128(rdram, ctx);
        goto after_0;
    // 0x1514F714: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1514F718: bne         $v0, $zero, L_1514F728
    if (ctx->r2 != 0) {
        // 0x1514F71C: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_1514F728;
    }
    // 0x1514F71C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x1514F720: b           L_1514F7F4
    // 0x1514F724: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1514F7F4;
    // 0x1514F724: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1514F728:
    // 0x1514F728: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1514F72C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1514F730: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1514F734: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1514F738: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1514F73C: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x1514F740: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1514F744: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x1514F748: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x1514F74C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1514F750: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x1514F754: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
    // 0x1514F758: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x1514F75C: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
L_1514F760:
    // 0x1514F760: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x1514F764: bne         $t9, $zero, L_1514F798
    if (ctx->r25 != 0) {
        // 0x1514F768: addiu       $a0, $s0, 0x4
        ctx->r4 = ADD32(ctx->r16, 0X4);
            goto L_1514F798;
    }
    // 0x1514F768: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x1514F76C: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x1514F770: jal         0x15146078
    // 0x1514F774: addiu       $a2, $s0, 0x1C
    ctx->r6 = ADD32(ctx->r16, 0X1C);
    func_15146078(rdram, ctx);
        goto after_1;
    // 0x1514F774: addiu       $a2, $s0, 0x1C
    ctx->r6 = ADD32(ctx->r16, 0X1C);
    after_1:
    // 0x1514F778: bnel        $v0, $zero, L_1514F78C
    if (ctx->r2 != 0) {
        // 0x1514F77C: lbu         $t0, 0x0($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X0);
            goto L_1514F78C;
    }
    goto skip_0;
    // 0x1514F77C: lbu         $t0, 0x0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X0);
    skip_0:
    // 0x1514F780: b           L_1514F7F4
    // 0x1514F784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1514F7F4;
    // 0x1514F784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1514F788: lbu         $t0, 0x0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X0);
L_1514F78C:
    // 0x1514F78C: ori         $t1, $t0, 0x6
    ctx->r9 = ctx->r8 | 0X6;
    // 0x1514F790: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
    // 0x1514F794: andi        $v0, $t1, 0xFF
    ctx->r2 = ctx->r9 & 0XFF;
L_1514F798:
    // 0x1514F798: andi        $t2, $v0, 0x4
    ctx->r10 = ctx->r2 & 0X4;
    // 0x1514F79C: bne         $t2, $zero, L_1514F7F0
    if (ctx->r10 != 0) {
        // 0x1514F7A0: addiu       $a0, $s0, 0x10
        ctx->r4 = ADD32(ctx->r16, 0X10);
            goto L_1514F7F0;
    }
    // 0x1514F7A0: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x1514F7A4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1514F7A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1514F7AC: jal         0x15145128
    // 0x1514F7B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15145128(rdram, ctx);
        goto after_2;
    // 0x1514F7B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x1514F7B4: bne         $v0, $zero, L_1514F7C4
    if (ctx->r2 != 0) {
        // 0x1514F7B8: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_1514F7C4;
    }
    // 0x1514F7B8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x1514F7BC: b           L_1514F7F4
    // 0x1514F7C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1514F7F4;
    // 0x1514F7C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1514F7C4:
    // 0x1514F7C4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1514F7C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1514F7CC: jal         0x15145128
    // 0x1514F7D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15145128(rdram, ctx);
        goto after_3;
    // 0x1514F7D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x1514F7D4: bnel        $v0, $zero, L_1514F7E8
    if (ctx->r2 != 0) {
        // 0x1514F7D8: lbu         $t3, 0x0($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X0);
            goto L_1514F7E8;
    }
    goto skip_1;
    // 0x1514F7D8: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    skip_1:
    // 0x1514F7DC: b           L_1514F7F4
    // 0x1514F7E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1514F7F4;
    // 0x1514F7E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1514F7E4: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
L_1514F7E8:
    // 0x1514F7E8: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x1514F7EC: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_1514F7F0:
    // 0x1514F7F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1514F7F4:
    // 0x1514F7F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1514F7F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1514F7FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1514F800: jr          $ra
    // 0x1514F804: nop

    return;
    return;
    // 0x1514F804: nop

;}
RECOMP_FUNC void func_1514DB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DB98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DB9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DBA0: jal         0x1514F194
    // 0x1514DBA4: nop

    func_1514F194(rdram, ctx);
        goto after_0;
    // 0x1514DBA4: nop

    after_0:
    // 0x1514DBA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DBAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DBB0: jr          $ra
    // 0x1514DBB4: nop

    return;
    return;
    // 0x1514DBB4: nop

;}
RECOMP_FUNC void func_1505D2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505D2B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1505D2BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1505D2C0: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x1505D2C4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1505D2C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1505D2CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1505D2D0: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x1505D2D4: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x1505D2D8: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x1505D2DC: addiu       $t7, $t7, -0x5928
    ctx->r15 = ADD32(ctx->r15, -0X5928);
    // 0x1505D2E0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x1505D2E4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1505D2E8: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1505D2EC: lbu         $a0, 0x10E($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X10E);
    // 0x1505D2F0: addiu       $t8, $zero, 0xFE
    ctx->r24 = ADD32(0, 0XFE);
    // 0x1505D2F4: swc1        $f4, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f4.u32l;
    // 0x1505D2F8: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1505D2FC: andi        $t9, $a0, 0x7F
    ctx->r25 = ctx->r4 & 0X7F;
    // 0x1505D300: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x1505D304: swc1        $f6, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f6.u32l;
    // 0x1505D308: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1505D30C: sb          $t8, 0x104($a1)
    MEM_B(0X104, ctx->r5) = ctx->r24;
    // 0x1505D310: sb          $zero, 0x105($a1)
    MEM_B(0X105, ctx->r5) = 0;
    // 0x1505D314: swc1        $f8, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f8.u32l;
    // 0x1505D318: jal         0x1505E7CC
    // 0x1505D31C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_1505E7CC(rdram, ctx);
        goto after_0;
    // 0x1505D31C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x1505D320: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x1505D324: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1505D328: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1505D32C: sb          $v0, 0x106($a1)
    MEM_B(0X106, ctx->r5) = ctx->r2;
    // 0x1505D330: sb          $t0, 0x10E($a1)
    MEM_B(0X10E, ctx->r5) = ctx->r8;
    // 0x1505D334: jal         0x1505E874
    // 0x1505D338: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    func_1505E874(rdram, ctx);
        goto after_1;
    // 0x1505D338: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    after_1:
    // 0x1505D33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1505D340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1505D344: jr          $ra
    // 0x1505D348: nop

    return;
    return;
    // 0x1505D348: nop

;}
RECOMP_FUNC void func_150782E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150782E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150782EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150782F0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150782F4: lbu         $v0, 0x1892($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1892);
    // 0x150782F8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150782FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15078300: bne         $v0, $zero, L_15078320
    if (ctx->r2 != 0) {
        // 0x15078304: nop
    
            goto L_15078320;
    }
    // 0x15078304: nop

    // 0x15078308: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507830C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15078310: lbu         $t6, 0x1891($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1891);
    // 0x15078314: lbu         $t8, 0x3B($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3B);
    // 0x15078318: beq         $t6, $t8, L_1507833C
    if (ctx->r14 == ctx->r24) {
        // 0x1507831C: nop
    
            goto L_1507833C;
    }
    // 0x1507831C: nop

L_15078320:
    // 0x15078320: bne         $v0, $at, L_15078348
    if (ctx->r2 != ctx->r1) {
        // 0x15078324: lui         $t0, 0x800D
        ctx->r8 = S32(0X800D << 16);
            goto L_15078348;
    }
    // 0x15078324: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15078328: lw          $t0, 0x154C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X154C);
    // 0x1507832C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15078330: lbu         $t9, 0x1891($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1891);
    // 0x15078334: lbu         $t1, 0x3B($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X3B);
    // 0x15078338: beq         $t9, $t1, L_15078348
    if (ctx->r25 == ctx->r9) {
        // 0x1507833C: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_15078348;
    }
L_1507833C:
    // 0x1507833C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15078340: jal         0x15075400
    // 0x15078344: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x15078344: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
L_15078348:
    // 0x15078348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507834C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15078350: jr          $ra
    // 0x15078354: nop

    return;
    return;
    // 0x15078354: nop

;}
RECOMP_FUNC void func_151A6B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A6B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A6B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A6B18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151A6B1C: jal         0x151A6AB8
    // 0x151A6B20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151A6AB8(rdram, ctx);
        goto after_0;
    // 0x151A6B20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151A6B24: jal         0x1513CA6C
    // 0x151A6B28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1513CA6C(rdram, ctx);
        goto after_1;
    // 0x151A6B28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151A6B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151A6B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A6B34: jr          $ra
    // 0x151A6B38: nop

    return;
    return;
    // 0x151A6B38: nop

;}
RECOMP_FUNC void func_15194810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15194810: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x15194814: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15194818: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x1519481C: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x15194820: lbu         $v0, 0x4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X4);
    // 0x15194824: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x15194828: bne         $at, $zero, L_15194840
    if (ctx->r1 != 0) {
        // 0x1519482C: addiu       $at, $zero, 0x53
        ctx->r1 = ADD32(0, 0X53);
            goto L_15194840;
    }
    // 0x1519482C: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x15194830: beql        $v0, $at, L_15194864
    if (ctx->r2 == ctx->r1) {
        // 0x15194834: lwc1        $f4, 0x14($a1)
        ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
            goto L_15194864;
    }
    goto skip_0;
    // 0x15194834: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    skip_0:
    // 0x15194838: b           L_151949D4
    // 0x1519483C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151949D4;
    // 0x1519483C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15194840:
    // 0x15194840: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x15194844: beq         $at, $zero, L_151949D0
    if (ctx->r1 == 0) {
        // 0x15194848: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_151949D0;
    }
    // 0x15194848: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1519484C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15194850: addu        $at, $at, $t6
    gpr jr_addend_15194858 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15194854: lw          $t6, -0x7D30($at)
    ctx->r14 = ADD32(ctx->r1, -0X7D30);
    // 0x15194858: jr          $t6
    // 0x1519485C: nop

    switch (jr_addend_15194858 >> 2) {
        case 0: goto L_15194860; break;
        case 1: goto L_15194860; break;
        case 2: goto L_15194860; break;
        case 3: goto L_15194860; break;
        case 4: goto L_15194860; break;
        default: switch_error(__func__, 0x15194858, 0x800A82D0);
    }
    // 0x1519485C: nop

L_15194860:
    // 0x15194860: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
L_15194864:
    // 0x15194864: lui         $at, 0x42BE
    ctx->r1 = S32(0X42BE << 16);
    // 0x15194868: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1519486C: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x15194870: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x15194874: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15194878: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x1519487C: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x15194880: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    // 0x15194884: jal         0x1504715C
    // 0x15194888: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_1504715C(rdram, ctx);
        goto after_0;
    // 0x15194888: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x1519488C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15194890: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15194894: addiu       $t7, $sp, 0x9C
    ctx->r15 = ADD32(ctx->r29, 0X9C);
    // 0x15194898: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x1519489C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x151948A0: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x151948A4: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x151948A8: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x151948AC: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x151948B0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151948B4: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x151948B8: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151948BC: addiu       $t4, $zero, -0x3F
    ctx->r12 = ADD32(0, -0X3F);
    // 0x151948C0: addiu       $t5, $zero, 0x39
    ctx->r13 = ADD32(0, 0X39);
    // 0x151948C4: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x151948C8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151948CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151948D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151948D4: lwc1        $f4, -0x7D1C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7D1C);
    // 0x151948D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151948DC: lwc1        $f6, -0x7D18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7D18);
    // 0x151948E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151948E4: lwc1        $f8, -0x7D14($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7D14);
    // 0x151948E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151948EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151948F0: sh          $t1, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r9;
    // 0x151948F4: sh          $t2, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r10;
    // 0x151948F8: sh          $t3, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r11;
    // 0x151948FC: sh          $t4, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r12;
    // 0x15194900: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x15194904: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x15194908: addiu       $t8, $zero, 0x46
    ctx->r24 = ADD32(0, 0X46);
    // 0x1519490C: addiu       $t7, $zero, 0x16
    ctx->r15 = ADD32(0, 0X16);
    // 0x15194910: addiu       $t0, $zero, 0x9B
    ctx->r8 = ADD32(0, 0X9B);
    // 0x15194914: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x15194918: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x1519491C: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x15194920: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15194924: sh          $zero, 0x50($sp)
    MEM_H(0X50, ctx->r29) = 0;
    // 0x15194928: sh          $t5, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r13;
    // 0x1519492C: sh          $t6, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r14;
    // 0x15194930: sh          $t9, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r25;
    // 0x15194934: sh          $t8, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r24;
    // 0x15194938: sh          $t7, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r15;
    // 0x1519493C: sh          $t0, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r8;
    // 0x15194940: sh          $t1, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r9;
    // 0x15194944: sh          $t2, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r10;
    // 0x15194948: sh          $t3, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r11;
    // 0x1519494C: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x15194950: sb          $zero, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = 0;
    // 0x15194954: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x15194958: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x1519495C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x15194960: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x15194964: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x15194968: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x1519496C: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x15194970: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x15194974: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x15194978: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x1519497C: jal         0x15153F18
    // 0x15194980: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    func_15153F18(rdram, ctx);
        goto after_1;
    // 0x15194980: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x15194984: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15194988: jal         0x150ADA20
    // 0x1519498C: sb          $t5, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1519498C: sb          $t5, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r13;
    after_2:
    // 0x15194990: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x15194994: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15194998: mfhi        $t6
    ctx->r14 = hi;
    // 0x1519499C: addiu       $t9, $t6, 0x14
    ctx->r25 = ADD32(ctx->r14, 0X14);
    // 0x151949A0: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x151949A4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151949A8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151949AC: sh          $t9, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r25;
    // 0x151949B0: sb          $t8, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r24;
    // 0x151949B4: sb          $t7, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = ctx->r15;
    // 0x151949B8: sb          $t0, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r8;
    // 0x151949BC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x151949C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151949C4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151949C8: jal         0x151D8868
    // 0x151949CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151D8868(rdram, ctx);
        goto after_3;
    // 0x151949CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
L_151949D0:
    // 0x151949D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151949D4:
    // 0x151949D4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x151949D8: jr          $ra
    // 0x151949DC: nop

    return;
    return;
    // 0x151949DC: nop

;}
RECOMP_FUNC void func_15198C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15198C60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15198C64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15198C68: addiu       $a0, $zero, 0x1AA
    ctx->r4 = ADD32(0, 0X1AA);
    // 0x15198C6C: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x15198C70: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x15198C74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15198C78: jal         0x10010F30
    // 0x15198C7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_0;
    // 0x15198C7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x15198C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15198C84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15198C88: jr          $ra
    // 0x15198C8C: nop

    return;
    return;
    // 0x15198C8C: nop

;}
RECOMP_FUNC void func_1514A4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514A4EC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1514A4F0: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x1514A4F4: lwc1        $f0, 0x140($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X140);
    // 0x1514A4F8: lwc1        $f4, 0x130($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X130);
    // 0x1514A4FC: lw          $at, 0x34($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X34);
    // 0x1514A500: lw          $t8, 0x38($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X38);
    // 0x1514A504: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1514A508: sw          $at, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r1;
    // 0x1514A50C: lw          $at, 0x3C($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X3C);
    // 0x1514A510: sw          $t8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r24;
    // 0x1514A514: lwc1        $f8, 0x13C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X13C);
    // 0x1514A518: sw          $at, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r1;
    // 0x1514A51C: lwc1        $f18, 0x134($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X134);
    // 0x1514A520: swc1        $f6, 0x130($a0)
    MEM_W(0X130, ctx->r4) = ctx->f6.u32l;
    // 0x1514A524: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1514A528: lwc1        $f6, 0x138($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X138);
    // 0x1514A52C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1514A530: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1514A534: lwc1        $f10, 0x130($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X130);
    // 0x1514A538: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1514A53C: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x1514A540: swc1        $f8, 0x138($a0)
    MEM_W(0X138, ctx->r4) = ctx->f8.u32l;
    // 0x1514A544: swc1        $f4, 0x134($a0)
    MEM_W(0X134, ctx->r4) = ctx->f4.u32l;
    // 0x1514A548: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1514A54C: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x1514A550: lwc1        $f8, 0x134($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X134);
    // 0x1514A554: mul.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1514A558: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x1514A55C: lwc1        $f4, 0x38($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1514A560: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x1514A564: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1514A568: lwc1        $f6, 0x138($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X138);
    // 0x1514A56C: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1514A570: add.s       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x1514A574: lwc1        $f4, 0x3C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1514A578: swc1        $f16, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f16.u32l;
    // 0x1514A57C: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1514A580: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1514A584: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1514A588: swc1        $f18, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f18.u32l;
    // 0x1514A58C: jr          $ra
    // 0x1514A590: nop

    return;
    return;
    // 0x1514A590: nop

;}
RECOMP_FUNC void func_151A9024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A9024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A9028: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151A902C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151A9030: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151A9034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A9038: lbu         $t7, 0x4C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4C);
    // 0x151A903C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151A9040: bnel        $t7, $at, L_151A9054
    if (ctx->r15 != ctx->r1) {
        // 0x151A9044: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A9054;
    }
    goto skip_0;
    // 0x151A9044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151A9048: jal         0x151A931C
    // 0x151A904C: nop

    func_151A931C(rdram, ctx);
        goto after_0;
    // 0x151A904C: nop

    after_0:
    // 0x151A9050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151A9054:
    // 0x151A9054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A9058: jr          $ra
    // 0x151A905C: nop

    return;
    return;
    // 0x151A905C: nop

;}
RECOMP_FUNC void func_1514E194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514E194: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x1514E198: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1514E19C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1514E1A0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1514E1A4: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x1514E1A8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1514E1AC: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x1514E1B0: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x1514E1B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1514E1B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1514E1BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1514E1C0: sw          $a0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r4;
    // 0x1514E1C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514E1C8: lwc1        $f4, 0x5E10($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5E10);
    // 0x1514E1CC: lw          $t4, 0x100($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X100);
    // 0x1514E1D0: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x1514E1D4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x1514E1D8: ori         $t7, $t7, 0x2002
    ctx->r15 = ctx->r15 | 0X2002;
    // 0x1514E1DC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514E1E0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514E1E4: addiu       $t0, $zero, 0x8E
    ctx->r8 = ADD32(0, 0X8E);
    // 0x1514E1E8: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x1514E1EC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1514E1F0: addiu       $t3, $zero, 0x401
    ctx->r11 = ADD32(0, 0X401);
    // 0x1514E1F4: sb          $t6, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r14;
    // 0x1514E1F8: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x1514E1FC: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x1514E200: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
    // 0x1514E204: sh          $zero, 0x50($sp)
    MEM_H(0X50, ctx->r29) = 0;
    // 0x1514E208: sb          $t8, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r24;
    // 0x1514E20C: sb          $t9, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r25;
    // 0x1514E210: sb          $t0, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r8;
    // 0x1514E214: sb          $t1, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r9;
    // 0x1514E218: sb          $t2, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r10;
    // 0x1514E21C: sh          $t3, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r11;
    // 0x1514E220: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x1514E224: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x1514E228: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x1514E22C: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x1514E230: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x1514E234: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x1514E238: swc1        $f2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f2.u32l;
    // 0x1514E23C: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    // 0x1514E240: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    // 0x1514E244: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x1514E248: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x1514E24C: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x1514E250: swc1        $f12, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f12.u32l;
    // 0x1514E254: swc1        $f12, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f12.u32l;
    // 0x1514E258: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x1514E25C: lbu         $t5, 0x3B($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X3B);
    // 0x1514E260: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x1514E264: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1514E268: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514E26C: lwc1        $f8, 0x5E14($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5E14);
    // 0x1514E270: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1514E274: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
    // 0x1514E278: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1514E27C: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x1514E280: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x1514E284: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x1514E288: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x1514E28C: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x1514E290: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x1514E294: sb          $t7, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r15;
    // 0x1514E298: sb          $zero, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = 0;
    // 0x1514E29C: sb          $zero, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = 0;
    // 0x1514E2A0: sb          $zero, 0xFA($sp)
    MEM_B(0XFA, ctx->r29) = 0;
    // 0x1514E2A4: sb          $zero, 0xFB($sp)
    MEM_B(0XFB, ctx->r29) = 0;
    // 0x1514E2A8: sb          $t8, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r24;
    // 0x1514E2AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1514E2B0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1514E2B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1514E2B8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x1514E2BC: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x1514E2C0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x1514E2C4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1514E2C8: sb          $t5, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r13;
    // 0x1514E2CC: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x1514E2D0: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x1514E2D4: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x1514E2D8: jal         0x15189FF0
    // 0x1514E2DC: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    func_15189FF0(rdram, ctx);
        goto after_0;
    // 0x1514E2DC: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x1514E2E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514E2E4: lw          $a1, 0x100($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X100);
    // 0x1514E2E8: jal         0x1514EC1C
    // 0x1514E2EC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_1514EC1C(rdram, ctx);
        goto after_1;
    // 0x1514E2EC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x1514E2F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1514E2F4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1514E2F8: lw          $a0, 0x100($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X100);
    // 0x1514E2FC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1514E300: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1514E304: jal         0x151D74B0
    // 0x1514E308: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151D74B0(rdram, ctx);
        goto after_2;
    // 0x1514E308: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x1514E30C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1514E310: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    // 0x1514E314: jr          $ra
    // 0x1514E318: nop

    return;
    return;
    // 0x1514E318: nop

;}
RECOMP_FUNC void func_1513FAB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513FAB4: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x1513FAB8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1513FABC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1513FAC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1513FAC4: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x1513FAC8: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x1513FACC: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x1513FAD0: addiu       $t4, $sp, 0x43
    ctx->r12 = ADD32(ctx->r29, 0X43);
    // 0x1513FAD4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1513FAD8: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x1513FADC: lh          $a1, 0xA6($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XA6);
    // 0x1513FAE0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1513FAE4: jal         0x151D5D60
    // 0x1513FAE8: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x1513FAE8: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    after_0:
    // 0x1513FAEC: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x1513FAF0: lbu         $t9, 0x43($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X43);
    // 0x1513FAF4: beq         $v0, $zero, L_1513FB44
    if (ctx->r2 == 0) {
        // 0x1513FAF8: sw          $v0, 0x90($sp)
        MEM_W(0X90, ctx->r29) = ctx->r2;
            goto L_1513FB44;
    }
    // 0x1513FAF8: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x1513FAFC: beq         $t9, $zero, L_1513FB4C
    if (ctx->r25 == 0) {
        // 0x1513FB00: lh          $t5, 0xA6($sp)
        ctx->r13 = MEM_H(ctx->r29, 0XA6);
            goto L_1513FB4C;
    }
    // 0x1513FB00: lh          $t5, 0xA6($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XA6);
    // 0x1513FB04: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x1513FB08: addu        $v1, $s0, $t8
    ctx->r3 = ADD32(ctx->r16, ctx->r24);
    // 0x1513FB0C: lw          $a0, 0x100($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X100);
    // 0x1513FB10: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x1513FB14: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1513FB18: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x1513FB1C: jal         0x10022EC0
    // 0x1513FB20: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1513FB20: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x1513FB24: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x1513FB28: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x1513FB2C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1513FB30: lw          $a0, 0x100($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X100);
    // 0x1513FB34: jal         0x10022EC0
    // 0x1513FB38: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1513FB38: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
    // 0x1513FB3C: b           L_1513FB4C
    // 0x1513FB40: nop

        goto L_1513FB4C;
    // 0x1513FB40: nop

L_1513FB44:
    // 0x1513FB44: b           L_1513FFE0
    // 0x1513FB48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513FFE0;
    // 0x1513FB48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513FB4C:
    // 0x1513FB4C: jal         0x15144B34
    // 0x1513FB50: lh          $a0, 0xA6($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XA6);
    func_15144B34(rdram, ctx);
        goto after_3;
    // 0x1513FB50: lh          $a0, 0xA6($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XA6);
    after_3:
    // 0x1513FB54: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x1513FB58: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1513FB5C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1513FB60: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1513FB64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1513FB68: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x1513FB6C: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x1513FB70: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x1513FB74: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x1513FB78: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x1513FB7C: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1513FB80: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1513FB84: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1513FB88: mul.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x1513FB8C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x1513FB90: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1513FB94: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x1513FB98: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1513FB9C: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x1513FBA0: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1513FBA4: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x1513FBA8: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1513FBAC: lwc1        $f10, 0x48($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X48);
    // 0x1513FBB0: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1513FBB4: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x1513FBB8: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1513FBBC: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1513FBC0: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x1513FBC4: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1513FBC8: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1513FBCC: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x1513FBD0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1513FBD4: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x1513FBD8: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x1513FBDC: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1513FBE0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x1513FBE4: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x1513FBE8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1513FBEC: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1513FBF0: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x1513FBF4: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1513FBF8: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x1513FBFC: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1513FC00: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x1513FC04: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1513FC08: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x1513FC0C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1513FC10: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x1513FC14: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1513FC18: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1513FC1C: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x1513FC20: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1513FC24: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x1513FC28: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1513FC2C: add.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x1513FC30: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x1513FC34: add.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1513FC38: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1513FC3C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1513FC40: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x1513FC44: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1513FC48: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1513FC4C: add.s       $f14, $f0, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1513FC50: sub.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x1513FC54: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x1513FC58: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1513FC5C: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x1513FC60: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x1513FC64: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1513FC68: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x1513FC6C: sub.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x1513FC70: jal         0x150AD8B0
    // 0x1513FC74: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    func_150AD8B0(rdram, ctx);
        goto after_4;
    // 0x1513FC74: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x1513FC78: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1513FC7C: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1513FC80: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1513FC84: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1513FC88: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1513FC8C: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1513FC90: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1513FC94: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x1513FC98: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1513FC9C: add.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1513FCA0: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x1513FCA4: nop

    // 0x1513FCA8: bc1tl       L_1513FCE4
    if (c1cs) {
        // 0x1513FCAC: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_1513FCE4;
    }
    goto skip_0;
    // 0x1513FCAC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_0:
    // 0x1513FCB0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1513FCB4: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1513FCB8: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1513FCBC: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1513FCC0: nop

    // 0x1513FCC4: mul.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1513FCC8: nop

    // 0x1513FCCC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1513FCD0: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x1513FCD4: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    // 0x1513FCD8: b           L_1513FCF4
    // 0x1513FCDC: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
        goto L_1513FCF4;
    // 0x1513FCDC: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x1513FCE0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_1513FCE4:
    // 0x1513FCE4: nop

    // 0x1513FCE8: swc1        $f14, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f14.u32l;
    // 0x1513FCEC: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    // 0x1513FCF0: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
L_1513FCF4:
    // 0x1513FCF4: lbu         $t2, 0x9F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X9F);
    // 0x1513FCF8: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1513FCFC: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1513FD00: beql        $t2, $zero, L_1513FE58
    if (ctx->r10 == 0) {
        // 0x1513FD04: lwc1        $f10, 0x34($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
            goto L_1513FE58;
    }
    goto skip_1;
    // 0x1513FD04: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    skip_1:
    // 0x1513FD08: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1513FD0C: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x1513FD10: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1513FD14: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513FD18: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x1513FD1C: nop

    // 0x1513FD20: sh          $t1, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r9;
    // 0x1513FD24: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1513FD28: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1513FD2C: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x1513FD30: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1513FD34: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513FD38: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x1513FD3C: nop

    // 0x1513FD40: sh          $t7, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r15;
    // 0x1513FD44: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1513FD48: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1513FD4C: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x1513FD50: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1513FD54: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513FD58: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x1513FD5C: nop

    // 0x1513FD60: sh          $t5, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r13;
    // 0x1513FD64: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x1513FD68: sh          $zero, 0x6($t2)
    MEM_H(0X6, ctx->r10) = 0;
    // 0x1513FD6C: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x1513FD70: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1513FD74: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x1513FD78: sw          $t1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r9;
    // 0x1513FD7C: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1513FD80: addiu       $t8, $t1, 0x10
    ctx->r24 = ADD32(ctx->r9, 0X10);
    // 0x1513FD84: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x1513FD88: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1513FD8C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513FD90: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x1513FD94: nop

    // 0x1513FD98: sh          $t6, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r14;
    // 0x1513FD9C: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1513FDA0: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1513FDA4: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1513FDA8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513FDAC: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x1513FDB0: nop

    // 0x1513FDB4: sh          $t4, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r12;
    // 0x1513FDB8: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1513FDBC: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1513FDC0: sub.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1513FDC4: trunc.w.s   $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513FDC8: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x1513FDCC: nop

    // 0x1513FDD0: sh          $t5, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r13;
    // 0x1513FDD4: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1513FDD8: lwc1        $f2, 0x78($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1513FDDC: sh          $zero, 0x6($t1)
    MEM_H(0X6, ctx->r9) = 0;
    // 0x1513FDE0: sub.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x1513FDE4: sw          $t8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r24;
    // 0x1513FDE8: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x1513FDEC: trunc.w.s   $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513FDF0: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x1513FDF4: sub.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x1513FDF8: sh          $t0, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r8;
    // 0x1513FDFC: trunc.w.s   $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513FE00: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x1513FE04: sub.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x1513FE08: sh          $t6, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r14;
    // 0x1513FE0C: trunc.w.s   $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513FE10: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x1513FE14: add.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x1513FE18: sh          $t4, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r12;
    // 0x1513FE1C: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
    // 0x1513FE20: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513FE24: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
    // 0x1513FE28: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1513FE2C: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1513FE30: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x1513FE34: sh          $t1, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r9;
    // 0x1513FE38: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513FE3C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513FE40: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x1513FE44: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x1513FE48: sh          $t0, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r8;
    // 0x1513FE4C: b           L_1513FFDC
    // 0x1513FE50: sh          $t6, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r14;
        goto L_1513FFDC;
    // 0x1513FE50: sh          $t6, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r14;
    // 0x1513FE54: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
L_1513FE58:
    // 0x1513FE58: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x1513FE5C: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1513FE60: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x1513FE64: lwc1        $f2, 0x78($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1513FE68: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513FE6C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x1513FE70: nop

    // 0x1513FE74: sh          $t4, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r12;
    // 0x1513FE78: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1513FE7C: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1513FE80: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x1513FE84: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x1513FE88: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513FE8C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x1513FE90: nop

    // 0x1513FE94: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
    // 0x1513FE98: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1513FE9C: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1513FEA0: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x1513FEA4: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x1513FEA8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513FEAC: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x1513FEB0: nop

    // 0x1513FEB4: sh          $t3, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r11;
    // 0x1513FEB8: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x1513FEBC: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
    // 0x1513FEC0: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1513FEC4: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x1513FEC8: sub.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x1513FECC: addiu       $t4, $t7, 0x10
    ctx->r12 = ADD32(ctx->r15, 0X10);
    // 0x1513FED0: sw          $t4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r12;
    // 0x1513FED4: addiu       $t6, $t4, 0x10
    ctx->r14 = ADD32(ctx->r12, 0X10);
    // 0x1513FED8: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513FEDC: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x1513FEE0: nop

    // 0x1513FEE4: sh          $t5, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r13;
    // 0x1513FEE8: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1513FEEC: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x1513FEF0: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513FEF4: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x1513FEF8: nop

    // 0x1513FEFC: sh          $t2, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r10;
    // 0x1513FF00: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1513FF04: sh          $zero, 0x6($t4)
    MEM_H(0X6, ctx->r12) = 0;
    // 0x1513FF08: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x1513FF0C: add.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x1513FF10: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513FF14: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513FF18: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x1513FF1C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x1513FF20: sh          $t3, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r11;
    // 0x1513FF24: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    // 0x1513FF28: sh          $t7, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r15;
    // 0x1513FF2C: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1513FF30: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x1513FF34: add.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1513FF38: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1513FF3C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x1513FF40: nop

    // 0x1513FF44: sh          $t5, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r13;
    // 0x1513FF48: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1513FF4C: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x1513FF50: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x1513FF54: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513FF58: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x1513FF5C: nop

    // 0x1513FF60: sh          $t0, 0x4($t3)
    MEM_H(0X4, ctx->r11) = ctx->r8;
    // 0x1513FF64: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x1513FF68: sh          $zero, 0x6($t4)
    MEM_H(0X6, ctx->r12) = 0;
    // 0x1513FF6C: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x1513FF70: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1513FF74: addiu       $t7, $t9, 0x10
    ctx->r15 = ADD32(ctx->r25, 0X10);
    // 0x1513FF78: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    // 0x1513FF7C: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1513FF80: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1513FF84: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513FF88: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x1513FF8C: nop

    // 0x1513FF90: sh          $t8, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r24;
    // 0x1513FF94: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1513FF98: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1513FF9C: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x1513FFA0: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1513FFA4: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513FFA8: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1513FFAC: nop

    // 0x1513FFB0: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
    // 0x1513FFB4: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1513FFB8: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1513FFBC: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x1513FFC0: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1513FFC4: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513FFC8: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x1513FFCC: nop

    // 0x1513FFD0: sh          $t3, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r11;
    // 0x1513FFD4: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x1513FFD8: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
L_1513FFDC:
    // 0x1513FFDC: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
L_1513FFE0:
    // 0x1513FFE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1513FFE4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1513FFE8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x1513FFEC: jr          $ra
    // 0x1513FFF0: nop

    return;
    return;
    // 0x1513FFF0: nop

;}
RECOMP_FUNC void func_1506ECF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506ECF0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506ECF4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506ECF8: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506ECFC: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506ED00: sb          $t6, 0x3A($t7)
    MEM_B(0X3A, ctx->r15) = ctx->r14;
    // 0x1506ED04: jr          $ra
    // 0x1506ED08: nop

    return;
    return;
    // 0x1506ED08: nop

;}
RECOMP_FUNC void func_1000440C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000440C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x10004410: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x10004414: lw          $v0, -0x7F48($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7F48);
    // 0x10004418: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1000441C: beql        $v0, $zero, L_1000444C
    if (ctx->r2 == 0) {
        // 0x10004420: lw          $t6, 0x0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X0);
            goto L_1000444C;
    }
    goto skip_0;
    // 0x10004420: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    skip_0:
    // 0x10004424: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
L_10004428:
    // 0x10004428: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1000442C: beql        $at, $zero, L_10004440
    if (ctx->r1 == 0) {
        // 0x10004430: lw          $v0, 0xC($v0)
        ctx->r2 = MEM_W(ctx->r2, 0XC);
            goto L_10004440;
    }
    goto skip_1;
    // 0x10004430: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x10004434: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x10004438: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x1000443C: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
L_10004440:
    // 0x10004440: bnel        $v0, $zero, L_10004428
    if (ctx->r2 != 0) {
        // 0x10004444: lw          $a0, 0x8($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X8);
            goto L_10004428;
    }
    goto skip_2;
    // 0x10004444: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    skip_2:
    // 0x10004448: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
L_1000444C:
    // 0x1000444C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10004450: sw          $t6, -0x7F50($at)
    MEM_W(-0X7F50, ctx->r1) = ctx->r14;
    // 0x10004454: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10004458: sw          $v1, -0x53D0($at)
    MEM_W(-0X53D0, ctx->r1) = ctx->r3;
    // 0x1000445C: jr          $ra
    // 0x10004460: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x10004460: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_1519CFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519CFD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1519CFD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519CFD8: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x1519CFDC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x1519CFE0: jal         0x1514EDF0
    // 0x1519CFE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1514EDF0(rdram, ctx);
        goto after_0;
    // 0x1519CFE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1519CFE8: jal         0x151478F4
    // 0x1519CFEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151478F4(rdram, ctx);
        goto after_1;
    // 0x1519CFEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1519CFF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519CFF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1519CFF8: jr          $ra
    // 0x1519CFFC: nop

    return;
    return;
    // 0x1519CFFC: nop

;}
RECOMP_FUNC void func_150636F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150636F0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x150636F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150636F8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x150636FC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x15063700: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x15063704: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x15063708: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506370C: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x15063710: sb          $zero, -0x3D50($at)
    MEM_B(-0X3D50, ctx->r1) = 0;
    // 0x15063714: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x15063718: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1506371C: addiu       $s3, $sp, 0x5C
    ctx->r19 = ADD32(ctx->r29, 0X5C);
    // 0x15063720: addiu       $s2, $sp, 0x68
    ctx->r18 = ADD32(ctx->r29, 0X68);
L_15063724:
    // 0x15063724: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15063728: beql        $t6, $zero, L_15063994
    if (ctx->r14 == 0) {
        // 0x1506372C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15063994;
    }
    goto skip_0;
    // 0x1506372C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x15063730: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x15063734: beql        $v0, $zero, L_15063994
    if (ctx->r2 == 0) {
        // 0x15063738: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15063994;
    }
    goto skip_1;
    // 0x15063738: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x1506373C: lbu         $t7, 0x1B4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1B4);
    // 0x15063740: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15063744: beql        $t7, $zero, L_15063994
    if (ctx->r15 == 0) {
        // 0x15063748: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15063994;
    }
    goto skip_2;
    // 0x15063748: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x1506374C: sb          $s1, 0x3E78($at)
    MEM_B(0X3E78, ctx->r1) = ctx->r17;
    // 0x15063750: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15063754: sw          $s0, 0x154C($at)
    MEM_W(0X154C, ctx->r1) = ctx->r16;
    // 0x15063758: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x1506375C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15063760: lbu         $v1, 0x1B4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1B4);
    // 0x15063764: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x15063768: beql        $t8, $zero, L_15063784
    if (ctx->r24 == 0) {
        // 0x1506376C: andi        $t9, $v1, 0x4
        ctx->r25 = ctx->r3 & 0X4;
            goto L_15063784;
    }
    goto skip_3;
    // 0x1506376C: andi        $t9, $v1, 0x4
    ctx->r25 = ctx->r3 & 0X4;
    skip_3:
    // 0x15063770: jal         0x15063628
    // 0x15063774: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_15063628(rdram, ctx);
        goto after_0;
    // 0x15063774: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x15063778: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x1506377C: lbu         $v1, 0x1B4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1B4);
    // 0x15063780: andi        $t9, $v1, 0x4
    ctx->r25 = ctx->r3 & 0X4;
L_15063784:
    // 0x15063784: beq         $t9, $zero, L_1506379C
    if (ctx->r25 == 0) {
        // 0x15063788: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1506379C;
    }
    // 0x15063788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506378C: jal         0x151D57F8
    // 0x15063790: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151D57F8(rdram, ctx);
        goto after_1;
    // 0x15063790: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x15063794: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x15063798: lbu         $v1, 0x1B4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1B4);
L_1506379C:
    // 0x1506379C: andi        $t0, $v1, 0x8
    ctx->r8 = ctx->r3 & 0X8;
    // 0x150637A0: beq         $t0, $zero, L_150637B8
    if (ctx->r8 == 0) {
        // 0x150637A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150637B8;
    }
    // 0x150637A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150637A8: jal         0x151D57F8
    // 0x150637AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_151D57F8(rdram, ctx);
        goto after_2;
    // 0x150637AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x150637B0: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150637B4: lbu         $v1, 0x1B4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1B4);
L_150637B8:
    // 0x150637B8: andi        $t1, $v1, 0x2
    ctx->r9 = ctx->r3 & 0X2;
    // 0x150637BC: beql        $t1, $zero, L_15063990
    if (ctx->r9 == 0) {
        // 0x150637C0: sb          $zero, 0x1B4($v0)
        MEM_B(0X1B4, ctx->r2) = 0;
            goto L_15063990;
    }
    goto skip_4;
    // 0x150637C0: sb          $zero, 0x1B4($v0)
    MEM_B(0X1B4, ctx->r2) = 0;
    skip_4:
    // 0x150637C4: lbu         $v1, 0x78($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X78);
    // 0x150637C8: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x150637CC: and         $a0, $v1, $at
    ctx->r4 = ctx->r3 & ctx->r1;
    // 0x150637D0: addiu       $t3, $a0, -0x14
    ctx->r11 = ADD32(ctx->r4, -0X14);
    // 0x150637D4: sltiu       $at, $t3, 0x2E
    ctx->r1 = ctx->r11 < 0X2E ? 1 : 0;
    // 0x150637D8: beq         $at, $zero, L_1506398C
    if (ctx->r1 == 0) {
        // 0x150637DC: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_1506398C;
    }
    // 0x150637DC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150637E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150637E4: addu        $at, $at, $t3
    gpr jr_addend_150637EC = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x150637E8: lw          $t3, -0x6928($at)
    ctx->r11 = ADD32(ctx->r1, -0X6928);
    // 0x150637EC: jr          $t3
    // 0x150637F0: nop

    switch (jr_addend_150637EC >> 2) {
        case 0: goto L_1506382C; break;
        case 1: goto L_1506398C; break;
        case 2: goto L_1506398C; break;
        case 3: goto L_1506398C; break;
        case 4: goto L_150637F4; break;
        case 5: goto L_1506398C; break;
        case 6: goto L_1506398C; break;
        case 7: goto L_1506398C; break;
        case 8: goto L_1506398C; break;
        case 9: goto L_1506398C; break;
        case 10: goto L_1506398C; break;
        case 11: goto L_1506398C; break;
        case 12: goto L_1506398C; break;
        case 13: goto L_1506398C; break;
        case 14: goto L_1506398C; break;
        case 15: goto L_15063964; break;
        case 16: goto L_15063880; break;
        case 17: goto L_1506398C; break;
        case 18: goto L_1506398C; break;
        case 19: goto L_1506398C; break;
        case 20: goto L_1506398C; break;
        case 21: goto L_1506398C; break;
        case 22: goto L_1506398C; break;
        case 23: goto L_1506398C; break;
        case 24: goto L_1506398C; break;
        case 25: goto L_1506398C; break;
        case 26: goto L_1506398C; break;
        case 27: goto L_1506398C; break;
        case 28: goto L_1506398C; break;
        case 29: goto L_1506398C; break;
        case 30: goto L_1506398C; break;
        case 31: goto L_1506398C; break;
        case 32: goto L_1506398C; break;
        case 33: goto L_1506398C; break;
        case 34: goto L_1506398C; break;
        case 35: goto L_1506398C; break;
        case 36: goto L_1506398C; break;
        case 37: goto L_1506398C; break;
        case 38: goto L_1506398C; break;
        case 39: goto L_1506391C; break;
        case 40: goto L_1506398C; break;
        case 41: goto L_1506398C; break;
        case 42: goto L_1506398C; break;
        case 43: goto L_1506382C; break;
        case 44: goto L_1506398C; break;
        case 45: goto L_150637F4; break;
        default: switch_error(__func__, 0x150637EC, 0x800996D8);
    }
    // 0x150637F0: nop

L_150637F4:
    // 0x150637F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150637F8: jal         0x15063FA0
    // 0x150637FC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_15063FA0(rdram, ctx);
        goto after_3;
    // 0x150637FC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x15063800: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x15063804: lh          $t4, 0x1AA($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X1AA);
    // 0x15063808: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x1506380C: sh          $t5, 0x1AA($v0)
    MEM_H(0X1AA, ctx->r2) = ctx->r13;
    // 0x15063810: lw          $a0, 0x318($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X318);
    // 0x15063814: beq         $a0, $zero, L_15063824
    if (ctx->r4 == 0) {
        // 0x15063818: nop
    
            goto L_15063824;
    }
    // 0x15063818: nop

    // 0x1506381C: jal         0x1512D2E4
    // 0x15063820: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1512D2E4(rdram, ctx);
        goto after_4;
    // 0x15063820: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_15063824:
    // 0x15063824: b           L_1506398C
    // 0x15063828: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_1506398C;
    // 0x15063828: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_1506382C:
    // 0x1506382C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x15063830: bne         $a0, $at, L_1506384C
    if (ctx->r4 != ctx->r1) {
        // 0x15063834: addiu       $a1, $zero, 0x12
        ctx->r5 = ADD32(0, 0X12);
            goto L_1506384C;
    }
    // 0x15063834: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x15063838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506383C: jal         0x15063FA0
    // 0x15063840: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_15063FA0(rdram, ctx);
        goto after_5;
    // 0x15063840: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x15063844: b           L_15063858
    // 0x15063848: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_15063858;
    // 0x15063848: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_1506384C:
    // 0x1506384C: jal         0x15063FA0
    // 0x15063850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15063FA0(rdram, ctx);
        goto after_6;
    // 0x15063850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x15063854: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_15063858:
    // 0x15063858: lh          $t6, 0x1AA($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X1AA);
    // 0x1506385C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x15063860: sh          $t7, 0x1AA($v0)
    MEM_H(0X1AA, ctx->r2) = ctx->r15;
    // 0x15063864: lw          $a0, 0x318($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X318);
    // 0x15063868: beq         $a0, $zero, L_15063878
    if (ctx->r4 == 0) {
        // 0x1506386C: nop
    
            goto L_15063878;
    }
    // 0x1506386C: nop

    // 0x15063870: jal         0x1512D2E4
    // 0x15063874: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1512D2E4(rdram, ctx);
        goto after_7;
    // 0x15063874: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_15063878:
    // 0x15063878: b           L_1506398C
    // 0x1506387C: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_1506398C;
    // 0x1506387C: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_15063880:
    // 0x15063880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15063884: addiu       $a1, $v0, 0xB0
    ctx->r5 = ADD32(ctx->r2, 0XB0);
    // 0x15063888: jal         0x15081E78
    // 0x1506388C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_15081E78(rdram, ctx);
        goto after_8;
    // 0x1506388C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_8:
    // 0x15063890: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15063894: beql        $v0, $at, L_15063904
    if (ctx->r2 == ctx->r1) {
        // 0x15063898: lw          $a0, 0x318($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X318);
            goto L_15063904;
    }
    goto skip_5;
    // 0x15063898: lw          $a0, 0x318($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X318);
    skip_5:
    // 0x1506389C: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150638A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150638A4: lbu         $t8, 0xAF($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XAF);
    // 0x150638A8: beql        $t8, $zero, L_15063904
    if (ctx->r24 == 0) {
        // 0x150638AC: lw          $a0, 0x318($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X318);
            goto L_15063904;
    }
    goto skip_6;
    // 0x150638AC: lw          $a0, 0x318($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X318);
    skip_6:
    // 0x150638B0: jal         0x10010894
    // 0x150638B4: sb          $zero, 0xAF($v0)
    MEM_B(0XAF, ctx->r2) = 0;
    func_10010894(rdram, ctx);
        goto after_9;
    // 0x150638B4: sb          $zero, 0xAF($v0)
    MEM_B(0XAF, ctx->r2) = 0;
    after_9:
    // 0x150638B8: bnel        $v0, $zero, L_15063904
    if (ctx->r2 != 0) {
        // 0x150638BC: lw          $a0, 0x318($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X318);
            goto L_15063904;
    }
    goto skip_7;
    // 0x150638BC: lw          $a0, 0x318($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X318);
    skip_7:
    // 0x150638C0: jal         0x150ADA20
    // 0x150638C4: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150638C4: nop

    after_10:
    // 0x150638C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150638CC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150638D0: mfhi        $a0
    ctx->r4 = hi;
    // 0x150638D4: addiu       $a0, $a0, 0x53B
    ctx->r4 = ADD32(ctx->r4, 0X53B);
    // 0x150638D8: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x150638DC: addiu       $t0, $zero, 0xBB8
    ctx->r8 = ADD32(0, 0XBB8);
    // 0x150638E0: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x150638E4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x150638E8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150638EC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x150638F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150638F4: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x150638F8: jal         0x10010558
    // 0x150638FC: addiu       $a3, $zero, 0x320
    ctx->r7 = ADD32(0, 0X320);
    func_10010558(rdram, ctx);
        goto after_11;
    // 0x150638FC: addiu       $a3, $zero, 0x320
    ctx->r7 = ADD32(0, 0X320);
    after_11:
    // 0x15063900: lw          $a0, 0x318($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X318);
L_15063904:
    // 0x15063904: beq         $a0, $zero, L_15063914
    if (ctx->r4 == 0) {
        // 0x15063908: nop
    
            goto L_15063914;
    }
    // 0x15063908: nop

    // 0x1506390C: jal         0x1512D2E4
    // 0x15063910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1512D2E4(rdram, ctx);
        goto after_12;
    // 0x15063910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
L_15063914:
    // 0x15063914: b           L_1506398C
    // 0x15063918: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_1506398C;
    // 0x15063918: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_1506391C:
    // 0x1506391C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15063920: addiu       $a1, $v0, 0xB0
    ctx->r5 = ADD32(ctx->r2, 0XB0);
    // 0x15063924: jal         0x15081E78
    // 0x15063928: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_15081E78(rdram, ctx);
        goto after_13;
    // 0x15063928: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_13:
    // 0x1506392C: addiu       $t2, $sp, 0x44
    ctx->r10 = ADD32(ctx->r29, 0X44);
    // 0x15063930: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15063934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15063938: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x1506393C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x15063940: jal         0x150FFCC8
    // 0x15063944: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    func_150FFCC8(rdram, ctx);
        goto after_14;
    // 0x15063944: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_14:
    // 0x15063948: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1506394C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15063950: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15063954: jal         0x150FFD84
    // 0x15063958: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_150FFD84(rdram, ctx);
        goto after_15;
    // 0x15063958: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_15:
    // 0x1506395C: b           L_1506398C
    // 0x15063960: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_1506398C;
    // 0x15063960: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_15063964:
    // 0x15063964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15063968: addiu       $a1, $v0, 0xB0
    ctx->r5 = ADD32(ctx->r2, 0XB0);
    // 0x1506396C: jal         0x15081E78
    // 0x15063970: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_15081E78(rdram, ctx);
        goto after_16;
    // 0x15063970: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_16:
    // 0x15063974: lw          $a0, 0x318($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X318);
    // 0x15063978: beql        $a0, $zero, L_1506398C
    if (ctx->r4 == 0) {
        // 0x1506397C: lw          $v0, 0x31C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X31C);
            goto L_1506398C;
    }
    goto skip_8;
    // 0x1506397C: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    skip_8:
    // 0x15063980: jal         0x1512D2E4
    // 0x15063984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1512D2E4(rdram, ctx);
        goto after_17;
    // 0x15063984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x15063988: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_1506398C:
    // 0x1506398C: sb          $zero, 0x1B4($v0)
    MEM_B(0X1B4, ctx->r2) = 0;
L_15063990:
    // 0x15063990: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_15063994:
    // 0x15063994: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x15063998: bne         $s1, $at, L_15063724
    if (ctx->r17 != ctx->r1) {
        // 0x1506399C: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_15063724;
    }
    // 0x1506399C: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    // 0x150639A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150639A4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x150639A8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x150639AC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x150639B0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x150639B4: jr          $ra
    // 0x150639B8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x150639B8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_151A7908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A7908: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151A790C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A7910: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151A7914: lw          $t6, 0x174($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X174);
    // 0x151A7918: addiu       $v0, $a1, 0x170
    ctx->r2 = ADD32(ctx->r5, 0X170);
    // 0x151A791C: beql        $t6, $zero, L_151A793C
    if (ctx->r14 == 0) {
        // 0x151A7920: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A793C;
    }
    goto skip_0;
    // 0x151A7920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151A7924: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x151A7928: jal         0x1516972C
    // 0x151A792C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151A792C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x151A7930: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151A7934: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151A7938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151A793C:
    // 0x151A793C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151A7940: jr          $ra
    // 0x151A7944: nop

    return;
    return;
    // 0x151A7944: nop

;}
RECOMP_FUNC void func_1001CF38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001CF38: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1001CF3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1001CF40: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1001CF44: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1001CF48: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x1001CF4C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x1001CF50: bne         $t7, $zero, L_1001CF60
    if (ctx->r15 != 0) {
        // 0x1001CF54: nop
    
            goto L_1001CF60;
    }
    // 0x1001CF54: nop

    // 0x1001CF58: b           L_1001D114
    // 0x1001CF5C: nop

        goto L_1001D114;
    // 0x1001CF5C: nop

L_1001CF60:
    // 0x1001CF60: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x1001CF64: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x1001CF68: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x1001CF6C: beq         $at, $zero, L_1001CF80
    if (ctx->r1 == 0) {
        // 0x1001CF70: nop
    
            goto L_1001CF80;
    }
    // 0x1001CF70: nop

    // 0x1001CF74: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x1001CF78: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x1001CF7C: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
L_1001CF80:
    // 0x1001CF80: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1001CF84: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1001CF88: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1001CF8C: lh          $t4, 0x2($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X2);
    // 0x1001CF90: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x1001CF94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1001CF98: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x1001CF9C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1001CFA0: addiu       $t5, $sp, 0x24
    ctx->r13 = ADD32(ctx->r29, 0X24);
    // 0x1001CFA4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1001CFA8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1001CFAC: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1001CFB0: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x1001CFB4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1001CFB8: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1001CFBC: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1001CFC0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x1001CFC4: jal         0x1001CBF0
    // 0x1001CFC8: nop

    func_1001CBF0(rdram, ctx);
        goto after_0;
    // 0x1001CFC8: nop

    after_0:
    // 0x1001CFCC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x1001CFD0: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
L_1001CFD4:
    // 0x1001CFD4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x1001CFD8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x1001CFDC: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x1001CFE0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x1001CFE4: sh          $zero, 0x8($t0)
    MEM_H(0X8, ctx->r8) = 0;
    // 0x1001CFE8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x1001CFEC: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x1001CFF0: slti        $at, $t3, 0x8
    ctx->r1 = SIGNED(ctx->r11) < 0X8 ? 1 : 0;
    // 0x1001CFF4: bne         $at, $zero, L_1001CFD4
    if (ctx->r1 != 0) {
        // 0x1001CFF8: sw          $t3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r11;
            goto L_1001CFD4;
    }
    // 0x1001CFF8: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x1001CFFC: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1001D000: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x1001D004: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1001D008: lh          $t4, 0x2($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X2);
    // 0x1001D00C: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1001D010: lwc1        $f18, -0x3880($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3880);
    // 0x1001D014: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x1001D018: addiu       $t5, $sp, 0x30
    ctx->r13 = ADD32(ctx->r29, 0X30);
    // 0x1001D01C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1001D020: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x1001D024: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1001D028: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x1001D02C: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1001D030: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1001D034: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x1001D038: nop

    // 0x1001D03C: sh          $t8, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r24;
    // 0x1001D040: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x1001D044: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x1001D048: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1001D04C: lh          $t9, 0x2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X2);
    // 0x1001D050: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1001D054: lwc1        $f8, -0x387C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X387C);
    // 0x1001D058: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x1001D05C: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x1001D060: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1001D064: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x1001D068: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x1001D06C: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1001D070: mul.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x1001D074: trunc.w.s   $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1001D078: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x1001D07C: nop

    // 0x1001D080: sh          $t3, 0xA($t7)
    MEM_H(0XA, ctx->r15) = ctx->r11;
    // 0x1001D084: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x1001D088: sh          $zero, 0xC($t4)
    MEM_H(0XC, ctx->r12) = 0;
    // 0x1001D08C: addiu       $t5, $sp, 0x24
    ctx->r13 = ADD32(ctx->r29, 0X24);
    // 0x1001D090: lui         $at, 0xC680
    ctx->r1 = S32(0XC680 << 16);
    // 0x1001D094: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1001D098: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x1001D09C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1001D0A0: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x1001D0A4: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1001D0A8: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x1001D0AC: nop

    // 0x1001D0B0: sh          $t8, 0x18($t2)
    MEM_H(0X18, ctx->r10) = ctx->r24;
    // 0x1001D0B4: addiu       $t9, $sp, 0x24
    ctx->r25 = ADD32(ctx->r29, 0X24);
    // 0x1001D0B8: lui         $at, 0xC680
    ctx->r1 = S32(0XC680 << 16);
    // 0x1001D0BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1001D0C0: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x1001D0C4: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x1001D0C8: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x1001D0CC: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1001D0D0: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x1001D0D4: nop

    // 0x1001D0D8: sh          $t1, 0x1A($t3)
    MEM_H(0X1A, ctx->r11) = ctx->r9;
    // 0x1001D0DC: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x1001D0E0: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
L_1001D0E4:
    // 0x1001D0E4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x1001D0E8: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x1001D0EC: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x1001D0F0: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x1001D0F4: sh          $zero, 0x8($t8)
    MEM_H(0X8, ctx->r24) = 0;
    // 0x1001D0F8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x1001D0FC: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x1001D100: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x1001D104: bne         $at, $zero, L_1001D0E4
    if (ctx->r1 != 0) {
        // 0x1001D108: sw          $t9, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r25;
            goto L_1001D0E4;
    }
    // 0x1001D108: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x1001D10C: b           L_1001D114
    // 0x1001D110: nop

        goto L_1001D114;
    // 0x1001D110: nop

L_1001D114:
    // 0x1001D114: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1001D118: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1001D11C: jr          $ra
    // 0x1001D120: nop

    return;
    return;
    // 0x1001D120: nop

;}
RECOMP_FUNC void func_15167A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15167A68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15167A6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15167A70: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15167A74: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15167A78: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15167A7C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15167A80: lbu         $t6, 0x3F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3F);
    // 0x15167A84: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x15167A88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15167A8C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x15167A90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15167A94: jal         0x10003C6C
    // 0x15167A98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_10003C6C(rdram, ctx);
        goto after_0;
    // 0x15167A98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x15167A9C: beq         $v0, $zero, L_15167AC4
    if (ctx->r2 == 0) {
        // 0x15167AA0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15167AC4;
    }
    // 0x15167AA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15167AA4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x15167AA8: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    // 0x15167AAC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x15167AB0: jal         0x15168A4C
    // 0x15167AB4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_15168A4C(rdram, ctx);
        goto after_1;
    // 0x15167AB4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x15167AB8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x15167ABC: lbu         $t8, 0x3B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3B);
    // 0x15167AC0: sb          $t8, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r24;
L_15167AC4:
    // 0x15167AC4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15167AC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15167ACC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15167AD0: jr          $ra
    // 0x15167AD4: nop

    return;
    return;
    // 0x15167AD4: nop

;}
RECOMP_FUNC void func_1500BE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500BE68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1500BE6C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1500BE70: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1500BE74: addiu       $v1, $v1, -0x2400
    ctx->r3 = ADD32(ctx->r3, -0X2400);
    // 0x1500BE78: addiu       $v0, $v0, -0x23F8
    ctx->r2 = ADD32(ctx->r2, -0X23F8);
    // 0x1500BE7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1500BE80: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500BE84: sb          $zero, -0x22E4($at)
    MEM_B(-0X22E4, ctx->r1) = 0;
    // 0x1500BE88: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500BE8C: sb          $zero, -0x3150($at)
    MEM_B(-0X3150, ctx->r1) = 0;
    // 0x1500BE90: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x1500BE94: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x1500BE98: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500BE9C: sw          $zero, -0x23FC($at)
    MEM_W(-0X23FC, ctx->r1) = 0;
    // 0x1500BEA0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500BEA4: sw          $zero, -0x22E0($at)
    MEM_W(-0X22E0, ctx->r1) = 0;
    // 0x1500BEA8: jal         0x1500BE40
    // 0x1500BEAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1500BE40(rdram, ctx);
        goto after_0;
    // 0x1500BEAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x1500BEB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1500BEB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1500BEB8: jr          $ra
    // 0x1500BEBC: nop

    return;
    return;
    // 0x1500BEBC: nop

;}
RECOMP_FUNC void func_1507EEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507EEF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1507EEF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507EEFC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507EF00: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1507EF04: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1507EF08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1507EF0C: lw          $v1, 0x31C($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X31C);
    // 0x1507EF10: lbu         $v0, 0x64($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X64);
    // 0x1507EF14: addiu       $v1, $v1, 0x58
    ctx->r3 = ADD32(ctx->r3, 0X58);
    // 0x1507EF18: bne         $v0, $zero, L_1507EF2C
    if (ctx->r2 != 0) {
        // 0x1507EF1C: nop
    
            goto L_1507EF2C;
    }
    // 0x1507EF1C: nop

    // 0x1507EF20: sb          $t7, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r15;
    // 0x1507EF24: b           L_1507EF90
    // 0x1507EF28: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
        goto L_1507EF90;
    // 0x1507EF28: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_1507EF2C:
    // 0x1507EF2C: bne         $v0, $at, L_1507EF60
    if (ctx->r2 != ctx->r1) {
        // 0x1507EF30: nop
    
            goto L_1507EF60;
    }
    // 0x1507EF30: nop

    // 0x1507EF34: jal         0x150ADA20
    // 0x1507EF38: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1507EF38: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x1507EF3C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x1507EF40: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x1507EF44: lbu         $t8, 0xD($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XD);
    // 0x1507EF48: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x1507EF4C: bnel        $at, $zero, L_1507EF94
    if (ctx->r1 != 0) {
        // 0x1507EF50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507EF94;
    }
    goto skip_0;
    // 0x1507EF50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1507EF54: sb          $t9, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r25;
    // 0x1507EF58: b           L_1507EF90
    // 0x1507EF5C: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
        goto L_1507EF90;
    // 0x1507EF5C: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_1507EF60:
    // 0x1507EF60: jal         0x150ADA20
    // 0x1507EF64: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1507EF64: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x1507EF68: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x1507EF6C: andi        $t1, $v0, 0x3
    ctx->r9 = ctx->r2 & 0X3;
    // 0x1507EF70: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x1507EF74: lbu         $t0, 0xD($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0XD);
    // 0x1507EF78: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1507EF7C: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1507EF80: bnel        $at, $zero, L_1507EF94
    if (ctx->r1 != 0) {
        // 0x1507EF84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507EF94;
    }
    goto skip_1;
    // 0x1507EF84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1507EF88: sb          $t3, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r11;
    // 0x1507EF8C: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_1507EF90:
    // 0x1507EF90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507EF94:
    // 0x1507EF94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1507EF98: jr          $ra
    // 0x1507EF9C: nop

    return;
    return;
    // 0x1507EF9C: nop

;}
RECOMP_FUNC void func_15074980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15074980: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15074984: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15074988: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x1507498C: addiu       $s4, $s4, -0x274
    ctx->r20 = ADD32(ctx->r20, -0X274);
    // 0x15074990: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15074994: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15074998: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1507499C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x150749A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150749A4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x150749A8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150749AC: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x150749B0: lb          $t8, 0x0($s4)
    ctx->r24 = MEM_B(ctx->r20, 0X0);
    // 0x150749B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150749B8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x150749BC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x150749C0: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x150749C4: blez        $t8, L_15074A20
    if (SIGNED(ctx->r24) <= 0) {
        // 0x150749C8: cvt.s.w     $f20, $f4
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15074A20;
    }
    // 0x150749C8: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150749CC: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x150749D0: addiu       $s2, $s2, 0x154C
    ctx->r18 = ADD32(ctx->r18, 0X154C);
    // 0x150749D4: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x150749D8: addiu       $s3, $zero, 0x14
    ctx->r19 = ADD32(0, 0X14);
    // 0x150749DC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_150749E0:
    // 0x150749E0: jal         0x1505A72C
    // 0x150749E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1505A72C(rdram, ctx);
        goto after_0;
    // 0x150749E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x150749E8: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x150749EC: nop

    // 0x150749F0: bc1fl       L_15074A0C
    if (!c1cs) {
        // 0x150749F4: lb          $t9, 0x0($s4)
        ctx->r25 = MEM_B(ctx->r20, 0X0);
            goto L_15074A0C;
    }
    goto skip_0;
    // 0x150749F4: lb          $t9, 0x0($s4)
    ctx->r25 = MEM_B(ctx->r20, 0X0);
    skip_0:
    // 0x150749F8: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150749FC: beql        $v0, $zero, L_15074A0C
    if (ctx->r2 == 0) {
        // 0x15074A00: lb          $t9, 0x0($s4)
        ctx->r25 = MEM_B(ctx->r20, 0X0);
            goto L_15074A0C;
    }
    goto skip_1;
    // 0x15074A00: lb          $t9, 0x0($s4)
    ctx->r25 = MEM_B(ctx->r20, 0X0);
    skip_1:
    // 0x15074A04: sb          $s3, 0x4B($v0)
    MEM_B(0X4B, ctx->r2) = ctx->r19;
    // 0x15074A08: lb          $t9, 0x0($s4)
    ctx->r25 = MEM_B(ctx->r20, 0X0);
L_15074A0C:
    // 0x15074A0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15074A10: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    // 0x15074A14: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x15074A18: bnel        $at, $zero, L_150749E0
    if (ctx->r1 != 0) {
        // 0x15074A1C: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_150749E0;
    }
    goto skip_2;
    // 0x15074A1C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_2:
L_15074A20:
    // 0x15074A20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15074A24: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15074A28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15074A2C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15074A30: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x15074A34: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15074A38: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x15074A3C: jr          $ra
    // 0x15074A40: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x15074A40: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_151EFE88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EFE88: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151EFE8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151EFE90: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x151EFE94: jal         0x151EFE00
    // 0x151EFE98: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_151EFE00(rdram, ctx);
        goto after_0;
    // 0x151EFE98: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x151EFE9C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x151EFEA0: jal         0x151EFD00
    // 0x151EFEA4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    guMtxF2L2(rdram, ctx);
        goto after_1;
    // 0x151EFEA4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x151EFEA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151EFEAC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151EFEB0: jr          $ra
    // 0x151EFEB4: nop

    return;
    return;
    // 0x151EFEB4: nop

;}
RECOMP_FUNC void func_15062B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15062B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15062B54: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15062B58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15062B5C: lwc1        $f4, 0x150($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X150);
    // 0x15062B60: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15062B64: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15062B68: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x15062B6C: jal         0x15062AC4
    // 0x15062B70: sh          $t7, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r15;
    func_15062AC4(rdram, ctx);
        goto after_0;
    // 0x15062B70: sh          $t7, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r15;
    after_0:
    // 0x15062B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15062B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15062B7C: jr          $ra
    // 0x15062B80: nop

    return;
    return;
    // 0x15062B80: nop

;}
RECOMP_FUNC void func_15107F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15107F98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15107F9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15107FA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15107FA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15107FA8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15107FAC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x15107FB0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x15107FB4: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x15107FB8: lw          $a2, 0x60($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X60);
    // 0x15107FBC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15107FC0: jal         0x15169850
    // 0x15107FC4: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x15107FC4: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    after_0:
    // 0x15107FC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15107FCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15107FD0: jr          $ra
    // 0x15107FD4: nop

    return;
    return;
    // 0x15107FD4: nop

;}
RECOMP_FUNC void func_1506D934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506D934: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506D938: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506D93C: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506D940: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506D944: sb          $t6, 0x103($t7)
    MEM_B(0X103, ctx->r15) = ctx->r14;
    // 0x1506D948: jr          $ra
    // 0x1506D94C: nop

    return;
    return;
    // 0x1506D94C: nop

;}
RECOMP_FUNC void func_150F9788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F9788: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150F978C: jr          $ra
    // 0x150F9790: nop

    return;
    return;
    // 0x150F9790: nop

;}
RECOMP_FUNC void func_1519E688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519E688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1519E68C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519E690: jal         0x1519CF70
    // 0x1519E694: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_1519CF70(rdram, ctx);
        goto after_0;
    // 0x1519E694: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x1519E698: jal         0x1519CF70
    // 0x1519E69C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_1519CF70(rdram, ctx);
        goto after_1;
    // 0x1519E69C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x1519E6A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1519E6A4: jal         0x15147D64
    // 0x1519E6A8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_15147D64(rdram, ctx);
        goto after_2;
    // 0x1519E6A8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x1519E6AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519E6B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1519E6B4: jr          $ra
    // 0x1519E6B8: nop

    return;
    return;
    // 0x1519E6B8: nop

;}
RECOMP_FUNC void func_151581D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151581D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151581DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151581E0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151581E4: lbu         $a3, 0x2F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2F);
    // 0x151581E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151581EC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151581F0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x151581F4: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x151581F8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x151581FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15158200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15158204: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15158208: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1515820C: jal         0x151580B0
    // 0x15158210: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_151580B0(rdram, ctx);
        goto after_0;
    // 0x15158210: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x15158214: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15158218: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1515821C: jr          $ra
    // 0x15158220: nop

    return;
    return;
    // 0x15158220: nop

;}
RECOMP_FUNC void func_150A8050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A8050: swc1        $f24, -0x14($sp)
    MEM_W(-0X14, ctx->r29) = ctx->f24.u32l;
    // 0x150A8054: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150A8058: swc1        $f26, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f26.u32l;
    // 0x150A805C: mtc1        $a1, $f24
    ctx->f24.u32l = ctx->r5;
    // 0x150A8060: swc1        $f28, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f28.u32l;
    // 0x150A8064: swc1        $f30, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f30.u32l;
    // 0x150A8068: mtc1        $a2, $f26
    ctx->f26.u32l = ctx->r6;
    // 0x150A806C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x150A8070: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150A8074: lwc1        $f30, -0x940($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X940);
    // 0x150A8078: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x150A807C: mtc1        $a3, $f28
    ctx->f28.u32l = ctx->r7;
    // 0x150A8080: swc1        $f22, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f22.u32l;
    // 0x150A8084: mul.s       $f24, $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f30.fl);
    // 0x150A8088: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x150A808C: jal         0x150AD780
    // 0x150A8090: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    func_150AD780(rdram, ctx);
        goto after_0;
    // 0x150A8090: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_0:
    // 0x150A8094: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150A8098: jal         0x150AD78C
    // 0x150A809C: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    func_150AD78C(rdram, ctx);
        goto after_1;
    // 0x150A809C: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_1:
    // 0x150A80A0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x150A80A4: mul.s       $f26, $f26, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f30.fl);
    // 0x150A80A8: jal         0x150AD780
    // 0x150A80AC: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    func_150AD780(rdram, ctx);
        goto after_2;
    // 0x150A80AC: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_2:
    // 0x150A80B0: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x150A80B4: jal         0x150AD78C
    // 0x150A80B8: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    func_150AD78C(rdram, ctx);
        goto after_3;
    // 0x150A80B8: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_3:
    // 0x150A80BC: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x150A80C0: mul.s       $f30, $f28, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f30.fl = MUL_S(ctx->f28.fl, ctx->f30.fl);
    // 0x150A80C4: jal         0x150AD780
    // 0x150A80C8: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    func_150AD780(rdram, ctx);
        goto after_4;
    // 0x150A80C8: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    after_4:
    // 0x150A80CC: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    // 0x150A80D0: jal         0x150AD78C
    // 0x150A80D4: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    func_150AD78C(rdram, ctx);
        goto after_5;
    // 0x150A80D4: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    after_5:
    // 0x150A80D8: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
    // 0x150A80DC: lw          $a0, 0x8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8);
    // 0x150A80E0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x150A80E4: mul.s       $f0, $f24, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x150A80E8: neg.s       $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = -ctx->f26.fl;
    // 0x150A80EC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x150A80F0: mul.s       $f2, $f24, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f2.fl = MUL_S(ctx->f24.fl, ctx->f30.fl);
    // 0x150A80F4: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x150A80F8: mul.s       $f18, $f22, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x150A80FC: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x150A8100: mul.s       $f6, $f18, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x150A8104: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x150A8108: mul.s       $f8, $f20, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f30.fl);
    // 0x150A810C: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x150A8110: sub.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150A8114: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x150A8118: mul.s       $f8, $f18, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f30.fl);
    // 0x150A811C: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x150A8120: mul.s       $f10, $f20, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x150A8124: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150A8128: mul.s       $f10, $f22, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x150A812C: swc1        $f8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f8.u32l;
    // 0x150A8130: mul.s       $f26, $f20, $f26
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f26.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x150A8134: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x150A8138: mul.s       $f12, $f26, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = MUL_S(ctx->f26.fl, ctx->f28.fl);
    // 0x150A813C: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x150A8140: mul.s       $f14, $f22, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = MUL_S(ctx->f22.fl, ctx->f30.fl);
    // 0x150A8144: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x150A8148: add.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x150A814C: swc1        $f10, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f10.u32l;
    // 0x150A8150: mul.s       $f14, $f26, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = MUL_S(ctx->f26.fl, ctx->f30.fl);
    // 0x150A8154: swc1        $f12, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f12.u32l;
    // 0x150A8158: mul.s       $f16, $f22, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f22.fl, ctx->f28.fl);
    // 0x150A815C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150A8160: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150A8164: sub.s       $f14, $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x150A8168: mul.s       $f16, $f20, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x150A816C: swc1        $f14, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f14.u32l;
    // 0x150A8170: swc1        $f16, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f16.u32l;
    // 0x150A8174: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x150A8178: lwc1        $f20, 0x4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X4);
    // 0x150A817C: lwc1        $f22, 0x8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X8);
    // 0x150A8180: lwc1        $f24, 0xC($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC);
    // 0x150A8184: lwc1        $f26, 0x10($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X10);
    // 0x150A8188: lwc1        $f28, 0x14($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X14);
    // 0x150A818C: lwc1        $f30, 0x18($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X18);
    // 0x150A8190: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150A8194: jr          $ra
    // 0x150A8198: swc1        $f18, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f18.u32l;
    return;
    return;
    // 0x150A8198: swc1        $f18, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f18.u32l;
    // 0x150A819C: nop

;}
RECOMP_FUNC void func_15144CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15144CEC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15144CF0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15144CF4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15144CF8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15144CFC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x15144D00: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x15144D04: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x15144D08: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x15144D0C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x15144D10: addiu       $t3, $t3, -0x62F0
    ctx->r11 = ADD32(ctx->r11, -0X62F0);
    // 0x15144D14: bne         $t6, $zero, L_15144D24
    if (ctx->r14 != 0) {
        // 0x15144D18: addiu       $t5, $s0, 0x4
        ctx->r13 = ADD32(ctx->r16, 0X4);
            goto L_15144D24;
    }
    // 0x15144D18: addiu       $t5, $s0, 0x4
    ctx->r13 = ADD32(ctx->r16, 0X4);
    // 0x15144D1C: addiu       $t7, $sp, 0x44
    ctx->r15 = ADD32(ctx->r29, 0X44);
    // 0x15144D20: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
L_15144D24:
    // 0x15144D24: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x15144D28: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x15144D2C: bnel        $t8, $zero, L_15144D3C
    if (ctx->r24 != 0) {
        // 0x15144D30: lw          $t0, 0x58($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X58);
            goto L_15144D3C;
    }
    goto skip_0;
    // 0x15144D30: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    skip_0:
    // 0x15144D34: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x15144D38: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
L_15144D3C:
    // 0x15144D3C: lbu         $t1, 0x5F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X5F);
    // 0x15144D40: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x15144D44: bne         $t0, $zero, L_15144D50
    if (ctx->r8 != 0) {
        // 0x15144D48: sll         $t2, $t1, 6
        ctx->r10 = S32(ctx->r9 << 6);
            goto L_15144D50;
    }
    // 0x15144D48: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x15144D4C: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
L_15144D50:
    // 0x15144D50: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x15144D54: lw          $a2, 0x4($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X4);
    // 0x15144D58: lw          $a3, 0x8($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X8);
    // 0x15144D5C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x15144D60: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x15144D64: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x15144D68: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x15144D6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x15144D70: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x15144D74: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x15144D78: jal         0x150A7A00
    // 0x15144D7C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_150A7A00(rdram, ctx);
        goto after_0;
    // 0x15144D7C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x15144D80: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x15144D84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15144D88: lwc1        $f4, 0x56B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X56B0);
    // 0x15144D8C: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x15144D90: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x15144D94: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15144D98: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x15144D9C: nop

    // 0x15144DA0: bc1t        L_15144DBC
    if (c1cs) {
        // 0x15144DA4: nop
    
            goto L_15144DBC;
    }
    // 0x15144DA4: nop

    // 0x15144DA8: lwc1        $f6, -0x64E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X64E0);
    // 0x15144DAC: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x15144DB0: nop

    // 0x15144DB4: bc1fl       L_15144DC8
    if (!c1cs) {
        // 0x15144DB8: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_15144DC8;
    }
    goto skip_1;
    // 0x15144DB8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_1:
L_15144DBC:
    // 0x15144DBC: b           L_15144E6C
    // 0x15144DC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15144E6C;
    // 0x15144DC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15144DC4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_15144DC8:
    // 0x15144DC8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15144DCC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15144DD0: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x15144DD4: addiu       $a1, $a1, -0x19D8
    ctx->r5 = ADD32(ctx->r5, -0X19D8);
    // 0x15144DD8: bc1t        L_15144DF4
    if (c1cs) {
        // 0x15144DDC: nop
    
            goto L_15144DF4;
    }
    // 0x15144DDC: nop

    // 0x15144DE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15144DE4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15144DE8: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15144DEC: b           L_15144DFC
    // 0x15144DF0: swc1        $f16, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f16.u32l;
        goto L_15144DFC;
    // 0x15144DF0: swc1        $f16, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f16.u32l;
L_15144DF4:
    // 0x15144DF4: b           L_15144E6C
    // 0x15144DF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15144E6C;
    // 0x15144DF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15144DFC:
    // 0x15144DFC: lbu         $a0, 0x5F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5F);
    // 0x15144E00: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x15144E04: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x15144E08: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x15144E0C: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x15144E10: sll         $t9, $t9, 7
    ctx->r25 = S32(ctx->r25 << 7);
    // 0x15144E14: addu        $v1, $t1, $t9
    ctx->r3 = ADD32(ctx->r9, ctx->r25);
    // 0x15144E18: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x15144E1C: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15144E20: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x15144E24: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x15144E28: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x15144E2C: lwc1        $f16, 0x34($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X34);
    // 0x15144E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15144E34: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15144E38: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15144E3C: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x15144E40: add.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x15144E44: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15144E48: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15144E4C: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x15144E50: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x15144E54: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x15144E58: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x15144E5C: addu        $t3, $t2, $t9
    ctx->r11 = ADD32(ctx->r10, ctx->r25);
    // 0x15144E60: lwc1        $f18, 0x38($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X38);
    // 0x15144E64: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x15144E68: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
L_15144E6C:
    // 0x15144E6C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15144E70: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15144E74: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15144E78: jr          $ra
    // 0x15144E7C: nop

    return;
    return;
    // 0x15144E7C: nop

;}
RECOMP_FUNC void func_1501C1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501C1B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1501C1B4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1501C1B8: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x1501C1BC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x1501C1C0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x1501C1C4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x1501C1C8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x1501C1CC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x1501C1D0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1501C1D4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x1501C1D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1501C1DC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1501C1E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1501C1E4: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x1501C1E8: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x1501C1EC: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x1501C1F0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1501C1F4: addiu       $s5, $s5, -0x18A0
    ctx->r21 = ADD32(ctx->r21, -0X18A0);
    // 0x1501C1F8: addiu       $fp, $fp, -0x1700
    ctx->r30 = ADD32(ctx->r30, -0X1700);
    // 0x1501C1FC: addiu       $s3, $s3, -0x16BC
    ctx->r19 = ADD32(ctx->r19, -0X16BC);
    // 0x1501C200: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1501C204: addiu       $s6, $zero, 0x68
    ctx->r22 = ADD32(0, 0X68);
L_1501C208:
    // 0x1501C208: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501C20C: lbu         $t6, -0x16C8($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X16C8);
    // 0x1501C210: beql        $t6, $zero, L_1501C2C8
    if (ctx->r14 == 0) {
        // 0x1501C214: lbu         $t0, 0x0($s3)
        ctx->r8 = MEM_BU(ctx->r19, 0X0);
            goto L_1501C2C8;
    }
    goto skip_0;
    // 0x1501C214: lbu         $t0, 0x0($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X0);
    skip_0:
    // 0x1501C218: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501C21C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x1501C220: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x1501C224: mflo        $t7
    ctx->r15 = lo;
    // 0x1501C228: addu        $s0, $s5, $t7
    ctx->r16 = ADD32(ctx->r21, ctx->r15);
    // 0x1501C22C: jal         0x100057E0
    // 0x1501C230: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    _MakeMotorData_recomp(rdram, ctx);
        goto after_0;
    // 0x1501C230: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x1501C234: bnel        $v0, $zero, L_1501C2C4
    if (ctx->r2 != 0) {
        // 0x1501C238: sb          $zero, 0x0($s3)
        MEM_B(0X0, ctx->r19) = 0;
            goto L_1501C2C4;
    }
    goto skip_1;
    // 0x1501C238: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
    skip_1:
    // 0x1501C23C: lbu         $t8, 0x0($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X0);
    // 0x1501C240: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C244: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1501C248: bne         $t8, $zero, L_1501C2C4
    if (ctx->r24 != 0) {
        // 0x1501C24C: addu        $at, $at, $s1
        ctx->r1 = ADD32(ctx->r1, ctx->r17);
            goto L_1501C2C4;
    }
    // 0x1501C24C: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x1501C250: sb          $t9, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r25;
    // 0x1501C254: sb          $zero, -0x16C4($at)
    MEM_B(-0X16C4, ctx->r1) = 0;
    // 0x1501C258: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C25C: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x1501C260: sb          $zero, -0x16C0($at)
    MEM_B(-0X16C0, ctx->r1) = 0;
    // 0x1501C264: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C268: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x1501C26C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1501C270: sb          $zero, -0x16B8($at)
    MEM_B(-0X16B8, ctx->r1) = 0;
    // 0x1501C274: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C278: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x1501C27C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x1501C280: swc1        $f4, -0x16B0($at)
    MEM_W(-0X16B0, ctx->r1) = ctx->f4.u32l;
    // 0x1501C284: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C288: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x1501C28C: swc1        $f20, -0x16A0($at)
    MEM_W(-0X16A0, ctx->r1) = ctx->f20.u32l;
    // 0x1501C290: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C294: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x1501C298: swc1        $f20, -0x1690($at)
    MEM_W(-0X1690, ctx->r1) = ctx->f20.u32l;
    // 0x1501C29C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1501C2A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1501C2A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C2A8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x1501C2AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1501C2B0: jal         0x10005570
    // 0x1501C2B4: swc1        $f6, -0x1680($at)
    MEM_W(-0X1680, ctx->r1) = ctx->f6.u32l;
    osMotorStop_recomp(rdram, ctx);
        goto after_1;
    // 0x1501C2B4: swc1        $f6, -0x1680($at)
    MEM_W(-0X1680, ctx->r1) = ctx->f6.u32l;
    after_1:
    // 0x1501C2B8: b           L_1501C2C8
    // 0x1501C2BC: lbu         $t0, 0x0($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X0);
        goto L_1501C2C8;
    // 0x1501C2BC: lbu         $t0, 0x0($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X0);
    // 0x1501C2C0: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
L_1501C2C4:
    // 0x1501C2C4: lbu         $t0, 0x0($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X0);
L_1501C2C8:
    // 0x1501C2C8: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1501C2CC: addiu       $t1, $t1, -0x16C4
    ctx->r9 = ADD32(ctx->r9, -0X16C4);
    // 0x1501C2D0: beq         $t0, $zero, L_1501C4E0
    if (ctx->r8 == 0) {
        // 0x1501C2D4: addu        $s4, $s1, $t1
        ctx->r20 = ADD32(ctx->r17, ctx->r9);
            goto L_1501C4E0;
    }
    // 0x1501C2D4: addu        $s4, $s1, $t1
    ctx->r20 = ADD32(ctx->r17, ctx->r9);
    // 0x1501C2D8: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1501C2DC: lbu         $t3, -0x153D($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X153D);
    // 0x1501C2E0: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1501C2E4: addiu       $t2, $t2, -0x16C0
    ctx->r10 = ADD32(ctx->r10, -0X16C0);
    // 0x1501C2E8: bne         $t3, $zero, L_1501C300
    if (ctx->r11 != 0) {
        // 0x1501C2EC: addu        $s7, $s1, $t2
        ctx->r23 = ADD32(ctx->r17, ctx->r10);
            goto L_1501C300;
    }
    // 0x1501C2EC: addu        $s7, $s1, $t2
    ctx->r23 = ADD32(ctx->r17, ctx->r10);
    // 0x1501C2F0: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x1501C2F4: lbu         $t4, 0xA00($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0XA00);
    // 0x1501C2F8: beq         $t4, $zero, L_1501C338
    if (ctx->r12 == 0) {
        // 0x1501C2FC: nop
    
            goto L_1501C338;
    }
    // 0x1501C2FC: nop

L_1501C300:
    // 0x1501C300: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501C304: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501C308: addiu       $t6, $t6, -0x16B8
    ctx->r14 = ADD32(ctx->r14, -0X16B8);
    // 0x1501C30C: addu        $s2, $s1, $t6
    ctx->r18 = ADD32(ctx->r17, ctx->r14);
    // 0x1501C310: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x1501C314: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x1501C318: mflo        $t5
    ctx->r13 = lo;
    // 0x1501C31C: addu        $s0, $s5, $t5
    ctx->r16 = ADD32(ctx->r21, ctx->r13);
    // 0x1501C320: jal         0x100057E0
    // 0x1501C324: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    _MakeMotorData_recomp(rdram, ctx);
        goto after_2;
    // 0x1501C324: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x1501C328: jal         0x10005570
    // 0x1501C32C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osMotorStop_recomp(rdram, ctx);
        goto after_3;
    // 0x1501C32C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x1501C330: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x1501C334: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
L_1501C338:
    // 0x1501C338: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501C33C: lbu         $t7, -0x153F($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X153F);
    // 0x1501C340: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501C344: bnel        $t7, $zero, L_1501C4DC
    if (ctx->r15 != 0) {
        // 0x1501C348: lbu         $t2, 0x0($s4)
        ctx->r10 = MEM_BU(ctx->r20, 0X0);
            goto L_1501C4DC;
    }
    goto skip_2;
    // 0x1501C348: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
    skip_2:
    // 0x1501C34C: lbu         $t8, -0x1540($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1540);
    // 0x1501C350: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1501C354: bnel        $t8, $zero, L_1501C4DC
    if (ctx->r24 != 0) {
        // 0x1501C358: lbu         $t2, 0x0($s4)
        ctx->r10 = MEM_BU(ctx->r20, 0X0);
            goto L_1501C4DC;
    }
    goto skip_3;
    // 0x1501C358: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
    skip_3:
    // 0x1501C35C: lbu         $t9, -0x153E($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X153E);
    // 0x1501C360: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1501C364: bnel        $t9, $zero, L_1501C4DC
    if (ctx->r25 != 0) {
        // 0x1501C368: lbu         $t2, 0x0($s4)
        ctx->r10 = MEM_BU(ctx->r20, 0X0);
            goto L_1501C4DC;
    }
    goto skip_4;
    // 0x1501C368: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
    skip_4:
    // 0x1501C36C: lbu         $t0, -0x153D($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X153D);
    // 0x1501C370: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x1501C374: bnel        $t0, $zero, L_1501C4DC
    if (ctx->r8 != 0) {
        // 0x1501C378: lbu         $t2, 0x0($s4)
        ctx->r10 = MEM_BU(ctx->r20, 0X0);
            goto L_1501C4DC;
    }
    goto skip_5;
    // 0x1501C378: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
    skip_5:
    // 0x1501C37C: lbu         $t1, 0xA00($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0XA00);
    // 0x1501C380: bnel        $t1, $zero, L_1501C4DC
    if (ctx->r9 != 0) {
        // 0x1501C384: lbu         $t2, 0x0($s4)
        ctx->r10 = MEM_BU(ctx->r20, 0X0);
            goto L_1501C4DC;
    }
    goto skip_6;
    // 0x1501C384: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
    skip_6:
    // 0x1501C388: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x1501C38C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1501C390: beql        $v0, $zero, L_1501C3AC
    if (ctx->r2 == 0) {
        // 0x1501C394: lbu         $t2, 0x0($s7)
        ctx->r10 = MEM_BU(ctx->r23, 0X0);
            goto L_1501C3AC;
    }
    goto skip_7;
    // 0x1501C394: lbu         $t2, 0x0($s7)
    ctx->r10 = MEM_BU(ctx->r23, 0X0);
    skip_7:
    // 0x1501C398: beq         $v0, $at, L_1501C3F0
    if (ctx->r2 == ctx->r1) {
        // 0x1501C39C: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_1501C3F0;
    }
    // 0x1501C39C: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x1501C3A0: b           L_1501C4DC
    // 0x1501C3A4: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
        goto L_1501C4DC;
    // 0x1501C3A4: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
    // 0x1501C3A8: lbu         $t2, 0x0($s7)
    ctx->r10 = MEM_BU(ctx->r23, 0X0);
L_1501C3AC:
    // 0x1501C3AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1501C3B0: bnel        $t2, $at, L_1501C4DC
    if (ctx->r10 != ctx->r1) {
        // 0x1501C3B4: lbu         $t2, 0x0($s4)
        ctx->r10 = MEM_BU(ctx->r20, 0X0);
            goto L_1501C4DC;
    }
    goto skip_8;
    // 0x1501C3B4: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
    skip_8:
    // 0x1501C3B8: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501C3BC: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1501C3C0: addiu       $t4, $t4, -0x16B8
    ctx->r12 = ADD32(ctx->r12, -0X16B8);
    // 0x1501C3C4: addu        $s2, $s1, $t4
    ctx->r18 = ADD32(ctx->r17, ctx->r12);
    // 0x1501C3C8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x1501C3CC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x1501C3D0: mflo        $t3
    ctx->r11 = lo;
    // 0x1501C3D4: addu        $s0, $s5, $t3
    ctx->r16 = ADD32(ctx->r21, ctx->r11);
    // 0x1501C3D8: jal         0x100057E0
    // 0x1501C3DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    _MakeMotorData_recomp(rdram, ctx);
        goto after_4;
    // 0x1501C3DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x1501C3E0: jal         0x10005570
    // 0x1501C3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osMotorStop_recomp(rdram, ctx);
        goto after_5;
    // 0x1501C3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x1501C3E8: b           L_1501C4D8
    // 0x1501C3EC: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
        goto L_1501C4D8;
    // 0x1501C3EC: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
L_1501C3F0:
    // 0x1501C3F0: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1501C3F4: addiu       $t5, $t5, -0x16B0
    ctx->r13 = ADD32(ctx->r13, -0X16B0);
    // 0x1501C3F8: addu        $v0, $v1, $t5
    ctx->r2 = ADD32(ctx->r3, ctx->r13);
    // 0x1501C3FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C400: lwc1        $f10, -0x165C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1501C404: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1501C408: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C40C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x1501C410: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1501C414: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501C418: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501C41C: addiu       $t7, $t7, -0x16A0
    ctx->r15 = ADD32(ctx->r15, -0X16A0);
    // 0x1501C420: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x1501C424: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1501C428: lwc1        $f2, -0x1680($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1680);
    // 0x1501C42C: addiu       $t6, $t6, -0x16B8
    ctx->r14 = ADD32(ctx->r14, -0X16B8);
    // 0x1501C430: addu        $s2, $s1, $t6
    ctx->r18 = ADD32(ctx->r17, ctx->r14);
    // 0x1501C434: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1501C438: addu        $a0, $v1, $t7
    ctx->r4 = ADD32(ctx->r3, ctx->r15);
    // 0x1501C43C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x1501C440: bc1fl       L_1501C468
    if (!c1cs) {
        // 0x1501C444: lwc1        $f4, 0x0($a0)
        ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
            goto L_1501C468;
    }
    goto skip_9;
    // 0x1501C444: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    skip_9:
    // 0x1501C448: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
L_1501C44C:
    // 0x1501C44C: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x1501C450: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1501C454: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1501C458: nop

    // 0x1501C45C: bc1tl       L_1501C44C
    if (c1cs) {
        // 0x1501C460: sub.s       $f18, $f0, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_1501C44C;
    }
    goto skip_10;
    // 0x1501C460: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    skip_10:
    // 0x1501C464: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
L_1501C468:
    // 0x1501C468: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x1501C46C: nop

    // 0x1501C470: bc1f        L_1501C480
    if (!c1cs) {
        // 0x1501C474: nop
    
            goto L_1501C480;
    }
    // 0x1501C474: nop

    // 0x1501C478: b           L_1501C480
    // 0x1501C47C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_1501C480;
    // 0x1501C47C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1501C480:
    // 0x1501C480: beql        $s0, $zero, L_1501C4B4
    if (ctx->r16 == 0) {
        // 0x1501C484: lbu         $t0, 0x0($s2)
        ctx->r8 = MEM_BU(ctx->r18, 0X0);
            goto L_1501C4B4;
    }
    goto skip_11;
    // 0x1501C484: lbu         $t0, 0x0($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X0);
    skip_11:
    // 0x1501C488: lbu         $t8, 0x0($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X0);
    // 0x1501C48C: bnel        $t8, $zero, L_1501C4D8
    if (ctx->r24 != 0) {
        // 0x1501C490: sb          $s0, 0x0($s2)
        MEM_B(0X0, ctx->r18) = ctx->r16;
            goto L_1501C4D8;
    }
    goto skip_12;
    // 0x1501C490: sb          $s0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r16;
    skip_12:
    // 0x1501C494: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501C498: mflo        $t9
    ctx->r25 = lo;
    // 0x1501C49C: addu        $a0, $s5, $t9
    ctx->r4 = ADD32(ctx->r21, ctx->r25);
    // 0x1501C4A0: jal         0x100056A0
    // 0x1501C4A4: nop

    osMotorStart_recomp(rdram, ctx);
        goto after_6;
    // 0x1501C4A4: nop

    after_6:
    // 0x1501C4A8: b           L_1501C4D8
    // 0x1501C4AC: sb          $s0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r16;
        goto L_1501C4D8;
    // 0x1501C4AC: sb          $s0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r16;
    // 0x1501C4B0: lbu         $t0, 0x0($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X0);
L_1501C4B4:
    // 0x1501C4B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1501C4B8: bnel        $t0, $at, L_1501C4D8
    if (ctx->r8 != ctx->r1) {
        // 0x1501C4BC: sb          $s0, 0x0($s2)
        MEM_B(0X0, ctx->r18) = ctx->r16;
            goto L_1501C4D8;
    }
    goto skip_13;
    // 0x1501C4BC: sb          $s0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r16;
    skip_13:
    // 0x1501C4C0: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501C4C4: mflo        $t1
    ctx->r9 = lo;
    // 0x1501C4C8: addu        $a0, $s5, $t1
    ctx->r4 = ADD32(ctx->r21, ctx->r9);
    // 0x1501C4CC: jal         0x10005570
    // 0x1501C4D0: nop

    osMotorStop_recomp(rdram, ctx);
        goto after_7;
    // 0x1501C4D0: nop

    after_7:
    // 0x1501C4D4: sb          $s0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r16;
L_1501C4D8:
    // 0x1501C4D8: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
L_1501C4DC:
    // 0x1501C4DC: sb          $t2, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r10;
L_1501C4E0:
    // 0x1501C4E0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1501C4E4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1501C4E8: bne         $s1, $at, L_1501C208
    if (ctx->r17 != ctx->r1) {
        // 0x1501C4EC: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_1501C208;
    }
    // 0x1501C4EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1501C4F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C4F4: sb          $zero, -0x16C8($at)
    MEM_B(-0X16C8, ctx->r1) = 0;
    // 0x1501C4F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C4FC: sb          $zero, -0x153D($at)
    MEM_B(-0X153D, ctx->r1) = 0;
    // 0x1501C500: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1501C504: sb          $zero, 0xA00($at)
    MEM_B(0XA00, ctx->r1) = 0;
    // 0x1501C508: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1501C50C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1501C510: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1501C514: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x1501C518: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x1501C51C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x1501C520: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x1501C524: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x1501C528: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x1501C52C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x1501C530: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x1501C534: jr          $ra
    // 0x1501C538: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x1501C538: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_15007778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15007778: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1500777C: addiu       $v1, $v1, -0x1C08
    ctx->r3 = ADD32(ctx->r3, -0X1C08);
    // 0x15007780: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x15007784: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x15007788: sw          $a0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r4;
    // 0x1500778C: sw          $a0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r4;
    // 0x15007790: sb          $a0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r4;
    // 0x15007794: sb          $a0, 0x1E($v1)
    MEM_B(0X1E, ctx->r3) = ctx->r4;
    // 0x15007798: sb          $a0, 0x2E($v1)
    MEM_B(0X2E, ctx->r3) = ctx->r4;
    // 0x1500779C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150077A0: sh          $a0, -0x1C24($at)
    MEM_H(-0X1C24, ctx->r1) = ctx->r4;
    // 0x150077A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150077A8: sb          $zero, -0x1C22($at)
    MEM_B(-0X1C22, ctx->r1) = 0;
    // 0x150077AC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x150077B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150077B4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150077B8: sb          $t6, 0x2BC0($at)
    MEM_B(0X2BC0, ctx->r1) = ctx->r14;
    // 0x150077BC: addiu       $v1, $v1, 0x2E4C
    ctx->r3 = ADD32(ctx->r3, 0X2E4C);
    // 0x150077C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150077C4:
    // 0x150077C4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x150077C8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x150077CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150077D0: slti        $at, $v0, 0x1B
    ctx->r1 = SIGNED(ctx->r2) < 0X1B ? 1 : 0;
    // 0x150077D4: bne         $at, $zero, L_150077C4
    if (ctx->r1 != 0) {
        // 0x150077D8: sb          $zero, 0x0($t8)
        MEM_B(0X0, ctx->r24) = 0;
            goto L_150077C4;
    }
    // 0x150077D8: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x150077DC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150077E0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150077E4: addiu       $v0, $v0, 0x2E69
    ctx->r2 = ADD32(ctx->r2, 0X2E69);
    // 0x150077E8: addiu       $v1, $v1, 0x2E60
    ctx->r3 = ADD32(ctx->r3, 0X2E60);
L_150077EC:
    // 0x150077EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150077F0: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x150077F4: bne         $at, $zero, L_150077EC
    if (ctx->r1 != 0) {
        // 0x150077F8: sb          $zero, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = 0;
            goto L_150077EC;
    }
    // 0x150077F8: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    // 0x150077FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007800: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x15007804: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x15007808: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1500780C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x15007810: sb          $t2, -0x1C25($at)
    MEM_B(-0X1C25, ctx->r1) = ctx->r10;
    // 0x15007814: sb          $t1, -0x1C26($at)
    MEM_B(-0X1C26, ctx->r1) = ctx->r9;
    // 0x15007818: sb          $t0, -0x1C27($at)
    MEM_B(-0X1C27, ctx->r1) = ctx->r8;
    // 0x1500781C: sb          $t9, -0x1C28($at)
    MEM_B(-0X1C28, ctx->r1) = ctx->r25;
    // 0x15007820: jr          $ra
    // 0x15007824: nop

    return;
    return;
    // 0x15007824: nop

    // 0x15007828: nop

    // 0x1500782C: nop

;}
RECOMP_FUNC void func_150E81A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E81A8: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x150E81AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150E81B0: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x150E81B4: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x150E81B8: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x150E81BC: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x150E81C0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150E81C4: beq         $a3, $at, L_150E81E4
    if (ctx->r7 == ctx->r1) {
        // 0x150E81C8: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_150E81E4;
    }
    // 0x150E81C8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x150E81CC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150E81D0: beq         $v0, $at, L_150E81E4
    if (ctx->r2 == ctx->r1) {
        // 0x150E81D4: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_150E81E4;
    }
    // 0x150E81D4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150E81D8: beq         $v0, $at, L_150E81E4
    if (ctx->r2 == ctx->r1) {
        // 0x150E81DC: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_150E81E4;
    }
    // 0x150E81DC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x150E81E0: bne         $v0, $at, L_150E839C
    if (ctx->r2 != ctx->r1) {
        // 0x150E81E4: sll         $t6, $a3, 2
        ctx->r14 = S32(ctx->r7 << 2);
            goto L_150E839C;
    }
L_150E81E4:
    // 0x150E81E4: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x150E81E8: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x150E81EC: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150E81F0: addiu       $t7, $t7, 0x1290
    ctx->r15 = ADD32(ctx->r15, 0X1290);
    // 0x150E81F4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150E81F8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x150E81FC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x150E8200: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x150E8204: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x150E8208: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x150E820C: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x150E8210: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x150E8214: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x150E8218: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150E821C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E8220: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x150E8224: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    // 0x150E8228: lbu         $a1, 0x97($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X97);
    // 0x150E822C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150E8230: jal         0x151D3FF4
    // 0x150E8234: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    func_151D3FF4(rdram, ctx);
        goto after_0;
    // 0x150E8234: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x150E8238: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150E823C: addiu       $t2, $zero, -0x40
    ctx->r10 = ADD32(0, -0X40);
    // 0x150E8240: addiu       $t3, $zero, 0x4D
    ctx->r11 = ADD32(0, 0X4D);
    // 0x150E8244: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x150E8248: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x150E824C: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x150E8250: sh          $t1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r9;
    // 0x150E8254: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
    // 0x150E8258: sh          $t3, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r11;
    // 0x150E825C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x150E8260: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x150E8264: addiu       $t7, $sp, 0x84
    ctx->r15 = ADD32(ctx->r29, 0X84);
    // 0x150E8268: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150E826C: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x150E8270: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x150E8274: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150E8278: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x150E827C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x150E8280: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x150E8284: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x150E8288: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x150E828C: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x150E8290: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x150E8294: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x150E8298: lui         $at, 0x437C
    ctx->r1 = S32(0X437C << 16);
    // 0x150E829C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E82A0: lui         $at, 0x42EA
    ctx->r1 = S32(0X42EA << 16);
    // 0x150E82A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150E82A8: lui         $at, 0x439A
    ctx->r1 = S32(0X439A << 16);
    // 0x150E82AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150E82B0: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x150E82B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E82B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E82BC: lwc1        $f6, 0x1354($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1354);
    // 0x150E82C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E82C4: lwc1        $f8, 0x1358($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1358);
    // 0x150E82C8: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x150E82CC: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x150E82D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E82D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E82D8: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x150E82DC: lwc1        $f16, 0x135C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X135C);
    // 0x150E82E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E82E4: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x150E82E8: lwc1        $f18, 0x1360($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1360);
    // 0x150E82EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E82F0: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x150E82F4: lwc1        $f4, 0x1364($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1364);
    // 0x150E82F8: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x150E82FC: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x150E8300: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x150E8304: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x150E8308: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x150E830C: sh          $t3, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r11;
    // 0x150E8310: sh          $t4, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r12;
    // 0x150E8314: sh          $t5, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r13;
    // 0x150E8318: sh          $t8, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r24;
    // 0x150E831C: sh          $t9, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r25;
    // 0x150E8320: sh          $t6, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r14;
    // 0x150E8324: sb          $zero, 0x80($sp)
    MEM_B(0X80, ctx->r29) = 0;
    // 0x150E8328: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    // 0x150E832C: lbu         $a1, 0x97($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X97);
    // 0x150E8330: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x150E8334: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x150E8338: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x150E833C: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x150E8340: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x150E8344: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x150E8348: jal         0x1514FCE8
    // 0x150E834C: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    func_1514FCE8(rdram, ctx);
        goto after_1;
    // 0x150E834C: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x150E8350: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150E8354: jal         0x150ADA20
    // 0x150E8358: sb          $t7, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150E8358: sb          $t7, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r15;
    after_2:
    // 0x150E835C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x150E8360: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E8364: mfhi        $t0
    ctx->r8 = hi;
    // 0x150E8368: addiu       $t1, $t0, 0x1E
    ctx->r9 = ADD32(ctx->r8, 0X1E);
    // 0x150E836C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x150E8370: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150E8374: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150E8378: sh          $t1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r9;
    // 0x150E837C: sb          $t2, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r10;
    // 0x150E8380: sb          $t3, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r11;
    // 0x150E8384: sb          $t4, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r12;
    // 0x150E8388: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x150E838C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E8390: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150E8394: jal         0x151D8868
    // 0x150E8398: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151D8868(rdram, ctx);
        goto after_3;
    // 0x150E8398: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
L_150E839C:
    // 0x150E839C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150E83A0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x150E83A4: jr          $ra
    // 0x150E83A8: nop

    return;
    return;
    // 0x150E83A8: nop

;}
RECOMP_FUNC void func_1000A420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000A420: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1000A424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000A428: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1000A42C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1000A430: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1000A434: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x1000A438: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x1000A43C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x1000A440: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1000A444: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x1000A448: beq         $t8, $zero, L_1000A474
    if (ctx->r24 == 0) {
        // 0x1000A44C: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_1000A474;
    }
    // 0x1000A44C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1000A450: andi        $t9, $t7, 0x7FFF
    ctx->r25 = ctx->r15 & 0X7FFF;
    // 0x1000A454: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x1000A458: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1000A45C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x1000A460: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1000A464: jal         0x150AD960
    // 0x1000A468: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_150AD960(rdram, ctx);
        goto after_0;
    // 0x1000A468: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1000A46C: b           L_1000A484
    // 0x1000A470: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
        goto L_1000A484;
    // 0x1000A470: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
L_1000A474:
    // 0x1000A474: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x1000A478: jal         0x150AD9A0
    // 0x1000A47C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    func_150AD9A0(rdram, ctx);
        goto after_1;
    // 0x1000A47C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_1:
    // 0x1000A480: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
L_1000A484:
    // 0x1000A484: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x1000A488: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x1000A48C: addiu       $t7, $zero, 0x7FFF
    ctx->r15 = ADD32(0, 0X7FFF);
    // 0x1000A490: subu        $t5, $t3, $v0
    ctx->r13 = SUB32(ctx->r11, ctx->r2);
    // 0x1000A494: sll         $t6, $t5, 15
    ctx->r14 = S32(ctx->r13 << 15);
    // 0x1000A498: subu        $t1, $t3, $t4
    ctx->r9 = SUB32(ctx->r11, ctx->r12);
    // 0x1000A49C: div         $zero, $t6, $t1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r9)));
    // 0x1000A4A0: bne         $t1, $zero, L_1000A4AC
    if (ctx->r9 != 0) {
        // 0x1000A4A4: nop
    
            goto L_1000A4AC;
    }
    // 0x1000A4A4: nop

    // 0x1000A4A8: break       7
    do_break(268477608);
L_1000A4AC:
    // 0x1000A4AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1000A4B0: bne         $t1, $at, L_1000A4C4
    if (ctx->r9 != ctx->r1) {
        // 0x1000A4B4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1000A4C4;
    }
    // 0x1000A4B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1000A4B8: bne         $t6, $at, L_1000A4C4
    if (ctx->r14 != ctx->r1) {
        // 0x1000A4BC: nop
    
            goto L_1000A4C4;
    }
    // 0x1000A4BC: nop

    // 0x1000A4C0: break       6
    do_break(268477632);
L_1000A4C4:
    // 0x1000A4C4: mflo        $t8
    ctx->r24 = lo;
    // 0x1000A4C8: subu        $v1, $t7, $t8
    ctx->r3 = SUB32(ctx->r15, ctx->r24);
    // 0x1000A4CC: slti        $at, $v1, 0x191
    ctx->r1 = SIGNED(ctx->r3) < 0X191 ? 1 : 0;
    // 0x1000A4D0: bne         $at, $zero, L_1000A724
    if (ctx->r1 != 0) {
        // 0x1000A4D4: or          $t0, $v1, $zero
        ctx->r8 = ctx->r3 | 0;
            goto L_1000A724;
    }
    // 0x1000A4D4: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x1000A4D8: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x1000A4DC: beql        $t9, $zero, L_1000A6C8
    if (ctx->r25 == 0) {
        // 0x1000A4E0: subu        $t4, $t3, $t2
        ctx->r12 = SUB32(ctx->r11, ctx->r10);
            goto L_1000A6C8;
    }
    goto skip_0;
    // 0x1000A4E0: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    skip_0:
    // 0x1000A4E4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x1000A4E8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x1000A4EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1000A4F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1000A4F4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1000A4F8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1000A4FC: jal         0x150AD960
    // 0x1000A500: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    func_150AD960(rdram, ctx);
        goto after_2;
    // 0x1000A500: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    after_2:
    // 0x1000A504: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x1000A508: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1000A50C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1000A510: bne         $at, $zero, L_1000A6B4
    if (ctx->r1 != 0) {
        // 0x1000A514: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_1000A6B4;
    }
    // 0x1000A514: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1000A518: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x1000A51C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x1000A520: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1000A524: multu       $t4, $t4
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000A528: lwc1        $f6, -0x3E00($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3E00);
    // 0x1000A52C: mflo        $t5
    ctx->r13 = lo;
    // 0x1000A530: nop

    // 0x1000A534: nop

    // 0x1000A538: multu       $t6, $t6
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000A53C: mflo        $t7
    ctx->r15 = lo;
    // 0x1000A540: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x1000A544: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1000A548: nop

    // 0x1000A54C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1000A550: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1000A554: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x1000A558: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x1000A55C: bc1fl       L_1000A578
    if (!c1cs) {
        // 0x1000A560: sw          $t0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r8;
            goto L_1000A578;
    }
    goto skip_1;
    // 0x1000A560: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    skip_1:
    // 0x1000A564: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x1000A568: nop

    // 0x1000A56C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1000A570: div.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1000A574: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_1000A578:
    // 0x1000A578: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1000A57C: jal         0x150487E0
    // 0x1000A580: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    func_150487E0(rdram, ctx);
        goto after_3;
    // 0x1000A580: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    after_3:
    // 0x1000A584: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1000A588: ldc1        $f18, -0x3DF8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3DF8);
    // 0x1000A58C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x1000A590: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x1000A594: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x1000A598: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1000A59C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1000A5A0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1000A5A4: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1000A5A8: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1000A5AC: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x1000A5B0: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x1000A5B4: nop

    // 0x1000A5B8: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x1000A5BC: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x1000A5C0: blez        $t5, L_1000A600
    if (SIGNED(ctx->r13) <= 0) {
        // 0x1000A5C4: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_1000A600;
    }
    // 0x1000A5C4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x1000A5C8: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x1000A5CC: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x1000A5D0: bgez        $t7, L_1000A5EC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1000A5D4: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_1000A5EC;
    }
    // 0x1000A5D4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x1000A5D8: addiu       $t8, $zero, -0x80
    ctx->r24 = ADD32(0, -0X80);
    // 0x1000A5DC: subu        $v0, $t8, $t7
    ctx->r2 = SUB32(ctx->r24, ctx->r15);
    // 0x1000A5E0: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x1000A5E4: b           L_1000A600
    // 0x1000A5E8: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
        goto L_1000A600;
    // 0x1000A5E8: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
L_1000A5EC:
    // 0x1000A5EC: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x1000A5F0: subu        $v0, $t6, $v1
    ctx->r2 = SUB32(ctx->r14, ctx->r3);
    // 0x1000A5F4: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x1000A5F8: sra         $t7, $t5, 16
    ctx->r15 = S32(SIGNED(ctx->r13) >> 16);
    // 0x1000A5FC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_1000A600:
    // 0x1000A600: lwc1        $f10, -0x3DF0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3DF0);
    // 0x1000A604: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x1000A608: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1000A60C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1000A610: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x1000A614: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1000A618: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x1000A61C: nop

    // 0x1000A620: sll         $t6, $t9, 24
    ctx->r14 = S32(ctx->r25 << 24);
    // 0x1000A624: sra         $t5, $t6, 24
    ctx->r13 = S32(SIGNED(ctx->r14) >> 24);
    // 0x1000A628: slti        $at, $t5, 0x60
    ctx->r1 = SIGNED(ctx->r13) < 0X60 ? 1 : 0;
    // 0x1000A62C: beq         $at, $zero, L_1000A640
    if (ctx->r1 == 0) {
        // 0x1000A630: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_1000A640;
    }
    // 0x1000A630: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x1000A634: slti        $at, $t5, -0x60
    ctx->r1 = SIGNED(ctx->r13) < -0X60 ? 1 : 0;
    // 0x1000A638: beql        $at, $zero, L_1000A64C
    if (ctx->r1 == 0) {
        // 0x1000A63C: slti        $at, $v0, 0x20
        ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
            goto L_1000A64C;
    }
    goto skip_2;
    // 0x1000A63C: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    skip_2:
L_1000A640:
    // 0x1000A640: b           L_1000A698
    // 0x1000A644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1000A698;
    // 0x1000A644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1000A648: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
L_1000A64C:
    // 0x1000A64C: bnel        $at, $zero, L_1000A66C
    if (ctx->r1 != 0) {
        // 0x1000A650: slti        $at, $v0, -0x20
        ctx->r1 = SIGNED(ctx->r2) < -0X20 ? 1 : 0;
            goto L_1000A66C;
    }
    goto skip_3;
    // 0x1000A650: slti        $at, $v0, -0x20
    ctx->r1 = SIGNED(ctx->r2) < -0X20 ? 1 : 0;
    skip_3:
    // 0x1000A654: addiu       $t7, $zero, 0x5F
    ctx->r15 = ADD32(0, 0X5F);
    // 0x1000A658: subu        $v0, $t7, $v0
    ctx->r2 = SUB32(ctx->r15, ctx->r2);
    // 0x1000A65C: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x1000A660: b           L_1000A698
    // 0x1000A664: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
        goto L_1000A698;
    // 0x1000A664: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x1000A668: slti        $at, $v0, -0x20
    ctx->r1 = SIGNED(ctx->r2) < -0X20 ? 1 : 0;
L_1000A66C:
    // 0x1000A66C: beq         $at, $zero, L_1000A684
    if (ctx->r1 == 0) {
        // 0x1000A670: addiu       $t9, $zero, -0x5F
        ctx->r25 = ADD32(0, -0X5F);
            goto L_1000A684;
    }
    // 0x1000A670: addiu       $t9, $zero, -0x5F
    ctx->r25 = ADD32(0, -0X5F);
    // 0x1000A674: subu        $v0, $t9, $v0
    ctx->r2 = SUB32(ctx->r25, ctx->r2);
    // 0x1000A678: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x1000A67C: b           L_1000A698
    // 0x1000A680: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
        goto L_1000A698;
    // 0x1000A680: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
L_1000A684:
    // 0x1000A684: addu        $v0, $v0, $v0
    ctx->r2 = ADD32(ctx->r2, ctx->r2);
    // 0x1000A688: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x1000A68C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1000A690: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1000A694: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_1000A698:
    // 0x1000A698: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x1000A69C: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x1000A6A0: addiu       $t4, $v0, 0x40
    ctx->r12 = ADD32(ctx->r2, 0X40);
    // 0x1000A6A4: or          $t6, $t4, $t9
    ctx->r14 = ctx->r12 | ctx->r25;
    // 0x1000A6A8: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x1000A6AC: b           L_1000A6C4
    // 0x1000A6B0: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
        goto L_1000A6C4;
    // 0x1000A6B0: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
L_1000A6B4:
    // 0x1000A6B4: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x1000A6B8: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x1000A6BC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x1000A6C0: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
L_1000A6C4:
    // 0x1000A6C4: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
L_1000A6C8:
    // 0x1000A6C8: sll         $t9, $t4, 15
    ctx->r25 = S32(ctx->r12 << 15);
    // 0x1000A6CC: div         $zero, $t9, $t1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r9)));
    // 0x1000A6D0: bne         $t1, $zero, L_1000A6DC
    if (ctx->r9 != 0) {
        // 0x1000A6D4: nop
    
            goto L_1000A6DC;
    }
    // 0x1000A6D4: nop

    // 0x1000A6D8: break       7
    do_break(268478168);
L_1000A6DC:
    // 0x1000A6DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1000A6E0: bne         $t1, $at, L_1000A6F4
    if (ctx->r9 != ctx->r1) {
        // 0x1000A6E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1000A6F4;
    }
    // 0x1000A6E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1000A6E8: bne         $t9, $at, L_1000A6F4
    if (ctx->r25 != ctx->r1) {
        // 0x1000A6EC: nop
    
            goto L_1000A6F4;
    }
    // 0x1000A6EC: nop

    // 0x1000A6F0: break       6
    do_break(268478192);
L_1000A6F4:
    // 0x1000A6F4: mflo        $t6
    ctx->r14 = lo;
    // 0x1000A6F8: addiu       $t5, $zero, 0x7FFF
    ctx->r13 = ADD32(0, 0X7FFF);
    // 0x1000A6FC: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x1000A700: bgez        $t7, L_1000A70C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1000A704: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_1000A70C;
    }
    // 0x1000A704: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x1000A708: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_1000A70C:
    // 0x1000A70C: slt         $at, $t0, $at
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x1000A710: bne         $at, $zero, L_1000A71C
    if (ctx->r1 != 0) {
        // 0x1000A714: lw          $t8, 0x60($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X60);
            goto L_1000A71C;
    }
    // 0x1000A714: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x1000A718: addiu       $t0, $zero, 0x7FFF
    ctx->r8 = ADD32(0, 0X7FFF);
L_1000A71C:
    // 0x1000A71C: b           L_1000A72C
    // 0x1000A720: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
        goto L_1000A72C;
    // 0x1000A720: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
L_1000A724:
    // 0x1000A724: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x1000A728: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
L_1000A72C:
    // 0x1000A72C: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x1000A730: beql        $v0, $zero, L_1000A740
    if (ctx->r2 == 0) {
        // 0x1000A734: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_1000A740;
    }
    goto skip_4;
    // 0x1000A734: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    skip_4:
    // 0x1000A738: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x1000A73C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_1000A740:
    // 0x1000A740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000A744: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1000A748: jr          $ra
    // 0x1000A74C: nop

    return;
    return;
    // 0x1000A74C: nop

;}
RECOMP_FUNC void func_1510D7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510D7AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1510D7B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1510D7B4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1510D7B8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1510D7BC: addiu       $t6, $t6, -0x3BB8
    ctx->r14 = ADD32(ctx->r14, -0X3BB8);
    // 0x1510D7C0: addu        $a2, $a1, $t6
    ctx->r6 = ADD32(ctx->r5, ctx->r14);
    // 0x1510D7C4: lb          $v1, 0x0($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X0);
    // 0x1510D7C8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1510D7CC: addiu       $t7, $t7, -0x6098
    ctx->r15 = ADD32(ctx->r15, -0X6098);
    // 0x1510D7D0: beq         $v1, $zero, L_1510D854
    if (ctx->r3 == 0) {
        // 0x1510D7D4: addu        $v0, $a1, $t7
        ctx->r2 = ADD32(ctx->r5, ctx->r15);
            goto L_1510D854;
    }
    // 0x1510D7D4: addu        $v0, $a1, $t7
    ctx->r2 = ADD32(ctx->r5, ctx->r15);
    // 0x1510D7D8: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x1510D7DC: beq         $a0, $zero, L_1510D854
    if (ctx->r4 == 0) {
        // 0x1510D7E0: addiu       $t8, $a0, -0x1
        ctx->r24 = ADD32(ctx->r4, -0X1);
            goto L_1510D854;
    }
    // 0x1510D7E0: addiu       $t8, $a0, -0x1
    ctx->r24 = ADD32(ctx->r4, -0X1);
    // 0x1510D7E4: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x1510D7E8: bne         $t9, $zero, L_1510D854
    if (ctx->r25 != 0) {
        // 0x1510D7EC: sb          $t8, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r24;
            goto L_1510D854;
    }
    // 0x1510D7EC: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x1510D7F0: andi        $t0, $v1, 0x40
    ctx->r8 = ctx->r3 & 0X40;
    // 0x1510D7F4: beq         $t0, $zero, L_1510D820
    if (ctx->r8 == 0) {
        // 0x1510D7F8: sll         $t1, $a1, 2
        ctx->r9 = S32(ctx->r5 << 2);
            goto L_1510D820;
    }
    // 0x1510D7F8: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x1510D7FC: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x1510D800: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x1510D804: lw          $t2, 0xE58($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XE58);
    // 0x1510D808: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x1510D80C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1510D810: jal         0x10004074
    // 0x1510D814: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    func_10004074(rdram, ctx);
        goto after_0;
    // 0x1510D814: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_0:
    // 0x1510D818: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x1510D81C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_1510D820:
    // 0x1510D820: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x1510D824: addiu       $t4, $t4, 0xE58
    ctx->r12 = ADD32(ctx->r12, 0XE58);
    // 0x1510D828: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x1510D82C: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x1510D830: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x1510D834: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1510D838: jal         0x10004074
    // 0x1510D83C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_10004074(rdram, ctx);
        goto after_1;
    // 0x1510D83C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x1510D840: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x1510D844: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x1510D848: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x1510D84C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x1510D850: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
L_1510D854:
    // 0x1510D854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1510D858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1510D85C: jr          $ra
    // 0x1510D860: nop

    return;
    return;
    // 0x1510D860: nop

;}
RECOMP_FUNC void func_151C7038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C7038: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151C703C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151C7040: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151C7044: lw          $a2, 0x7C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X7C);
    // 0x151C7048: addiu       $at, $zero, 0xE9
    ctx->r1 = ADD32(0, 0XE9);
    // 0x151C704C: lhu         $t6, 0x84($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X84);
    // 0x151C7050: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x151C7054: beql        $t6, $at, L_151C7068
    if (ctx->r14 == ctx->r1) {
        // 0x151C7058: sw          $a1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r5;
            goto L_151C7068;
    }
    goto skip_0;
    // 0x151C7058: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    skip_0:
    // 0x151C705C: b           L_151C7184
    // 0x151C7060: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151C7184;
    // 0x151C7060: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C7064: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
L_151C7068:
    // 0x151C7068: jal         0x15142A5C
    // 0x151C706C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_15142A5C(rdram, ctx);
        goto after_0;
    // 0x151C706C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x151C7070: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x151C7074: beq         $v0, $zero, L_151C7090
    if (ctx->r2 == 0) {
        // 0x151C7078: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_151C7090;
    }
    // 0x151C7078: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x151C707C: lw          $t7, 0x60($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X60);
    // 0x151C7080: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x151C7084: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x151C7088: b           L_151C70A4
    // 0x151C708C: sw          $t8, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r24;
        goto L_151C70A4;
    // 0x151C708C: sw          $t8, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r24;
L_151C7090:
    // 0x151C7090: lw          $t9, 0x60($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X60);
    // 0x151C7094: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x151C7098: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x151C709C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x151C70A0: sw          $t0, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r8;
L_151C70A4:
    // 0x151C70A4: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x151C70A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C70AC: lwc1        $f4, 0x4C($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4C);
    // 0x151C70B0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x151C70B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C70B8: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151C70BC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x151C70C0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151C70C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151C70C8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x151C70CC: nop

    // 0x151C70D0: bc1fl       L_151C70E8
    if (!c1cs) {
        // 0x151C70D4: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_151C70E8;
    }
    goto skip_1;
    // 0x151C70D4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_1:
    // 0x151C70D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151C70DC: b           L_151C7104
    // 0x151C70E0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
        goto L_151C7104;
    // 0x151C70E0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x151C70E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_151C70E8:
    // 0x151C70E8: nop

    // 0x151C70EC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x151C70F0: nop

    // 0x151C70F4: bc1fl       L_151C7104
    if (!c1cs) {
        // 0x151C70F8: cfc1        $t1, $FpcCsr
        ctx->r9 = get_cop1_cs();
            goto L_151C7104;
    }
    goto skip_2;
    // 0x151C70F8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    skip_2:
    // 0x151C70FC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x151C7100: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_151C7104:
    // 0x151C7104: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x151C7108: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151C710C: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x151C7110: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x151C7114: nop

    // 0x151C7118: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x151C711C: beql        $t2, $zero, L_151C716C
    if (ctx->r10 == 0) {
        // 0x151C7120: mfc1        $t2, $f10
        ctx->r10 = (int32_t)ctx->f10.u32l;
            goto L_151C716C;
    }
    goto skip_3;
    // 0x151C7120: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x151C7124: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151C7128: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151C712C: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x151C7130: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x151C7134: nop

    // 0x151C7138: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x151C713C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x151C7140: nop

    // 0x151C7144: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x151C7148: bne         $t2, $zero, L_151C7160
    if (ctx->r10 != 0) {
        // 0x151C714C: nop
    
            goto L_151C7160;
    }
    // 0x151C714C: nop

    // 0x151C7150: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x151C7154: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151C7158: b           L_151C7178
    // 0x151C715C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_151C7178;
    // 0x151C715C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_151C7160:
    // 0x151C7160: b           L_151C7178
    // 0x151C7164: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_151C7178;
    // 0x151C7164: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151C7168: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
L_151C716C:
    // 0x151C716C: nop

    // 0x151C7170: bltz        $t2, L_151C7160
    if (SIGNED(ctx->r10) < 0) {
        // 0x151C7174: nop
    
            goto L_151C7160;
    }
    // 0x151C7174: nop

L_151C7178:
    // 0x151C7178: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x151C717C: sb          $t2, 0x70($a1)
    MEM_B(0X70, ctx->r5) = ctx->r10;
    // 0x151C7180: nop

L_151C7184:
    // 0x151C7184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151C7188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151C718C: jr          $ra
    // 0x151C7190: nop

    return;
    return;
    // 0x151C7190: nop

;}
RECOMP_FUNC void func_150228E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150228E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150228E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150228EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150228F0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150228F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150228F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150228FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15022900: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15022904: addiu       $t6, $t6, 0x3510
    ctx->r14 = ADD32(ctx->r14, 0X3510);
    // 0x15022908: addu        $s4, $a0, $t6
    ctx->r20 = ADD32(ctx->r4, ctx->r14);
    // 0x1502290C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x15022910: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x15022914: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x15022918: blez        $v0, L_15022978
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1502291C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_15022978;
    }
    // 0x1502291C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15022920: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x15022924: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15022928: addiu       $t8, $t8, 0x3518
    ctx->r24 = ADD32(ctx->r24, 0X3518);
    // 0x1502292C: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x15022930: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x15022934: addiu       $s2, $s2, -0x3D30
    ctx->r18 = ADD32(ctx->r18, -0X3D30);
    // 0x15022938: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x1502293C: addiu       $s3, $zero, 0x32C
    ctx->r19 = ADD32(0, 0X32C);
L_15022940:
    // 0x15022940: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x15022944: multu       $t9, $s3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15022948: mflo        $t0
    ctx->r8 = lo;
    // 0x1502294C: addu        $a0, $s2, $t0
    ctx->r4 = ADD32(ctx->r18, ctx->r8);
    // 0x15022950: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x15022954: beql        $t1, $zero, L_1502296C
    if (ctx->r9 == 0) {
        // 0x15022958: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1502296C;
    }
    goto skip_0;
    // 0x15022958: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x1502295C: jal         0x15060F28
    // 0x15022960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_0;
    // 0x15022960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x15022964: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x15022968: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1502296C:
    // 0x1502296C: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15022970: bne         $at, $zero, L_15022940
    if (ctx->r1 != 0) {
        // 0x15022974: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15022940;
    }
    // 0x15022974: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_15022978:
    // 0x15022978: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1502297C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15022980: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15022984: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15022988: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1502298C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15022990: jr          $ra
    // 0x15022994: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15022994: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1506C460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506C460: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x1506C464: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1506C468: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1506C46C: swc1        $f12, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f12.u32l;
    // 0x1506C470: swc1        $f14, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f14.u32l;
    // 0x1506C474: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x1506C478: sw          $a3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r7;
    // 0x1506C47C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506C480: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506C484: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1506C488: addiu       $a0, $a0, 0x121C
    ctx->r4 = ADD32(ctx->r4, 0X121C);
    // 0x1506C48C: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x1506C490: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x1506C494: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
L_1506C498:
    // 0x1506C498: addiu       $v0, $v0, 0x32C
    ctx->r2 = ADD32(ctx->r2, 0X32C);
    // 0x1506C49C: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x1506C4A0: bne         $a2, $t6, L_1506C4AC
    if (ctx->r6 != ctx->r14) {
        // 0x1506C4A4: nop
    
            goto L_1506C4AC;
    }
    // 0x1506C4A4: nop

    // 0x1506C4A8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_1506C4AC:
    // 0x1506C4AC: bnel        $at, $zero, L_1506C498
    if (ctx->r1 != 0) {
        // 0x1506C4B0: lw          $t6, 0x0($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X0);
            goto L_1506C498;
    }
    goto skip_0;
    // 0x1506C4B0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x1506C4B4: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x1506C4B8: bne         $at, $zero, L_1506C4E0
    if (ctx->r1 != 0) {
        // 0x1506C4BC: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_1506C4E0;
    }
    // 0x1506C4BC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1506C4C0: jal         0x1505EEB0
    // 0x1506C4C4: addiu       $a1, $sp, 0xF4
    ctx->r5 = ADD32(ctx->r29, 0XF4);
    func_1505EEB0(rdram, ctx);
        goto after_0;
    // 0x1506C4C4: addiu       $a1, $sp, 0xF4
    ctx->r5 = ADD32(ctx->r29, 0XF4);
    after_0:
    // 0x1506C4C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1506C4CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1506C4D0: jal         0x15060F28
    // 0x1506C4D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_1;
    // 0x1506C4D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x1506C4D8: b           L_1506C534
    // 0x1506C4DC: lw          $v0, 0x120($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X120);
        goto L_1506C534;
    // 0x1506C4DC: lw          $v0, 0x120($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X120);
L_1506C4E0:
    // 0x1506C4E0: jal         0x1505ED34
    // 0x1506C4E4: sw          $v1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r3;
    func_1505ED34(rdram, ctx);
        goto after_2;
    // 0x1506C4E4: sw          $v1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r3;
    after_2:
    // 0x1506C4E8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506C4EC: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1506C4F0: subu        $t8, $v0, $t7
    ctx->r24 = SUB32(ctx->r2, ctx->r15);
    // 0x1506C4F4: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1506C4F8: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x1506C4FC: mflo        $t9
    ctx->r25 = lo;
    // 0x1506C500: sltiu       $at, $t9, 0x19
    ctx->r1 = ctx->r25 < 0X19 ? 1 : 0;
    // 0x1506C504: lw          $v1, 0xEC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XEC);
    // 0x1506C508: bne         $at, $zero, L_1506C530
    if (ctx->r1 != 0) {
        // 0x1506C50C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_1506C530;
    }
    // 0x1506C50C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1506C510: blez        $v1, L_1506C530
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1506C514: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_1506C530;
    }
    // 0x1506C514: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x1506C518: jal         0x1505EEB0
    // 0x1506C51C: addiu       $a1, $sp, 0xF4
    ctx->r5 = ADD32(ctx->r29, 0XF4);
    func_1505EEB0(rdram, ctx);
        goto after_3;
    // 0x1506C51C: addiu       $a1, $sp, 0xF4
    ctx->r5 = ADD32(ctx->r29, 0XF4);
    after_3:
    // 0x1506C520: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1506C524: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1506C528: jal         0x15060F28
    // 0x1506C52C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_4;
    // 0x1506C52C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_1506C530:
    // 0x1506C530: lw          $v0, 0x120($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X120);
L_1506C534:
    // 0x1506C534: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x1506C538: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x1506C53C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1506C540: sb          $t1, 0x136($s0)
    MEM_B(0X136, ctx->r16) = ctx->r9;
    // 0x1506C544: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x1506C548: sb          $t3, 0x1CA($s0)
    MEM_B(0X1CA, ctx->r16) = ctx->r11;
    // 0x1506C54C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1506C550: lw          $t4, 0x154C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X154C);
    // 0x1506C554: lhu         $t5, 0x7A($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X7A);
    // 0x1506C558: beq         $v0, $zero, L_1506C57C
    if (ctx->r2 == 0) {
        // 0x1506C55C: sh          $t5, 0x7A($s0)
        MEM_H(0X7A, ctx->r16) = ctx->r13;
            goto L_1506C57C;
    }
    // 0x1506C55C: sh          $t5, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r13;
    // 0x1506C560: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1506C564: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    // 0x1506C568: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1506C56C: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x1506C570: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1506C574: b           L_1506C6A8
    // 0x1506C578: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
        goto L_1506C6A8;
    // 0x1506C578: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
L_1506C57C:
    // 0x1506C57C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506C580: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506C584: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1506C588: lw          $v1, 0x1D4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1D4);
    // 0x1506C58C: bne         $v1, $zero, L_1506C5CC
    if (ctx->r3 != 0) {
        // 0x1506C590: nop
    
            goto L_1506C5CC;
    }
    // 0x1506C590: nop

    // 0x1506C594: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1506C598: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506C59C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1506C5A0: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x1506C5A4: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1506C5A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506C5AC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506C5B0: lwc1        $f4, 0x18($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X18);
    // 0x1506C5B4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1506C5B8: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
    // 0x1506C5BC: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506C5C0: lwc1        $f10, 0x1C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x1506C5C4: b           L_1506C6A8
    // 0x1506C5C8: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
        goto L_1506C6A8;
    // 0x1506C5C8: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
L_1506C5CC:
    // 0x1506C5CC: lbu         $t8, 0x3E90($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3E90);
    // 0x1506C5D0: sw          $v1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r3;
    // 0x1506C5D4: lw          $t7, 0x114($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X114);
    // 0x1506C5D8: beq         $t8, $zero, L_1506C61C
    if (ctx->r24 == 0) {
        // 0x1506C5DC: lui         $t9, 0x800A
        ctx->r25 = S32(0X800A << 16);
            goto L_1506C61C;
    }
    // 0x1506C5DC: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x1506C5E0: lw          $t9, 0x114($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X114);
    // 0x1506C5E4: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x1506C5E8: addiu       $t2, $t2, -0x6528
    ctx->r10 = ADD32(ctx->r10, -0X6528);
    // 0x1506C5EC: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x1506C5F0: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x1506C5F4: lh          $t3, 0x6($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X6);
    // 0x1506C5F8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x1506C5FC: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x1506C600: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x1506C604: jal         0x151EFEB8
    // 0x1506C608: addu        $a1, $t4, $v1
    ctx->r5 = ADD32(ctx->r12, ctx->r3);
    guMtxL2F(rdram, ctx);
        goto after_5;
    // 0x1506C608: addu        $a1, $t4, $v1
    ctx->r5 = ADD32(ctx->r12, ctx->r3);
    after_5:
    // 0x1506C60C: addiu       $t6, $sp, 0x98
    ctx->r14 = ADD32(ctx->r29, 0X98);
    // 0x1506C610: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x1506C614: b           L_1506C63C
    // 0x1506C618: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
        goto L_1506C63C;
    // 0x1506C618: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
L_1506C61C:
    // 0x1506C61C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x1506C620: addiu       $t9, $t9, -0x6528
    ctx->r25 = ADD32(ctx->r25, -0X6528);
    // 0x1506C624: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x1506C628: lh          $t1, 0x6($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X6);
    // 0x1506C62C: lw          $t3, 0xE4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE4);
    // 0x1506C630: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x1506C634: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x1506C638: sw          $t4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r12;
L_1506C63C:
    // 0x1506C63C: lh          $t5, 0x0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X0);
    // 0x1506C640: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x1506C644: lh          $t7, 0x4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X4);
    // 0x1506C648: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1506C64C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1506C650: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1506C654: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1506C658: addiu       $t8, $sp, 0xE0
    ctx->r24 = ADD32(ctx->r29, 0XE0);
    // 0x1506C65C: addiu       $t9, $sp, 0xDC
    ctx->r25 = ADD32(ctx->r29, 0XDC);
    // 0x1506C660: addiu       $t1, $sp, 0xD8
    ctx->r9 = ADD32(ctx->r29, 0XD8);
    // 0x1506C664: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1506C668: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1506C66C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x1506C670: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1506C674: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1506C678: lw          $a0, 0xE4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE4);
    // 0x1506C67C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1506C680: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x1506C684: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x1506C688: jal         0x150A7960
    // 0x1506C68C: nop

    func_150A7960(rdram, ctx);
        goto after_6;
    // 0x1506C68C: nop

    after_6:
    // 0x1506C690: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x1506C694: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x1506C698: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x1506C69C: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x1506C6A0: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x1506C6A4: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
L_1506C6A8:
    // 0x1506C6A8: lwc1        $f2, 0x118($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X118);
    // 0x1506C6AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1506C6B0: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1506C6B4: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x1506C6B8: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x1506C6BC: addiu       $t3, $zero, 0x6E
    ctx->r11 = ADD32(0, 0X6E);
    // 0x1506C6C0: subu        $t5, $s0, $t4
    ctx->r13 = SUB32(ctx->r16, ctx->r12);
    // 0x1506C6C4: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1506C6C8: bc1t        L_1506C6F8
    if (c1cs) {
        // 0x1506C6CC: addiu       $t7, $zero, 0xFF
        ctx->r15 = ADD32(0, 0XFF);
            goto L_1506C6F8;
    }
    // 0x1506C6CC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1506C6D0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1506C6D4: lw          $t2, 0x154C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X154C);
    // 0x1506C6D8: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1506C6DC: lwc1        $f10, 0x18($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X18);
    // 0x1506C6E0: add.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x1506C6E4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x1506C6E8: nop

    // 0x1506C6EC: bc1f        L_1506C6F8
    if (!c1cs) {
        // 0x1506C6F0: nop
    
            goto L_1506C6F8;
    }
    // 0x1506C6F0: nop

    // 0x1506C6F4: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
L_1506C6F8:
    // 0x1506C6F8: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x1506C6FC: mflo        $t6
    ctx->r14 = lo;
    // 0x1506C700: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x1506C704: sh          $t3, 0x160($s0)
    MEM_H(0X160, ctx->r16) = ctx->r11;
    // 0x1506C708: sb          $t8, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r24;
    // 0x1506C70C: lw          $t9, 0x114($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X114);
    // 0x1506C710: beq         $t9, $zero, L_1506C720
    if (ctx->r25 == 0) {
        // 0x1506C714: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1506C720;
    }
    // 0x1506C714: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1506C718: bne         $t9, $at, L_1506C73C
    if (ctx->r25 != ctx->r1) {
        // 0x1506C71C: addiu       $t4, $zero, 0x5
        ctx->r12 = ADD32(0, 0X5);
            goto L_1506C73C;
    }
    // 0x1506C71C: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
L_1506C720:
    // 0x1506C720: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x1506C724: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1506C728: sb          $t1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r9;
    // 0x1506C72C: sb          $t2, 0x103($s0)
    MEM_B(0X103, ctx->r16) = ctx->r10;
    // 0x1506C730: lw          $t3, 0x114($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X114);
    // 0x1506C734: b           L_1506C85C
    // 0x1506C738: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
        goto L_1506C85C;
    // 0x1506C738: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
L_1506C73C:
    // 0x1506C73C: sb          $t4, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r12;
    // 0x1506C740: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x1506C744: lw          $t5, 0x2FA0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2FA0);
    // 0x1506C748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1506C74C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1506C750: bltz        $t5, L_1506C78C
    if (SIGNED(ctx->r13) < 0) {
        // 0x1506C754: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_1506C78C;
    }
    // 0x1506C754: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_1506C758:
    // 0x1506C758: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x1506C75C: jal         0x1515D480
    // 0x1506C760: sw          $a1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r5;
    func_1515D480(rdram, ctx);
        goto after_7;
    // 0x1506C760: sw          $a1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r5;
    after_7:
    // 0x1506C764: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x1506C768: lw          $a1, 0xE8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE8);
    // 0x1506C76C: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1506C770: sw          $v0, 0x304($v1)
    MEM_W(0X304, ctx->r3) = ctx->r2;
    // 0x1506C774: lw          $t7, 0x2FA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA0);
    // 0x1506C778: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1506C77C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1506C780: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1506C784: beql        $at, $zero, L_1506C758
    if (ctx->r1 == 0) {
        // 0x1506C788: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_1506C758;
    }
    goto skip_1;
    // 0x1506C788: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
L_1506C78C:
    // 0x1506C78C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x1506C790: addu        $t8, $s0, $t6
    ctx->r24 = ADD32(ctx->r16, ctx->r14);
    // 0x1506C794: lw          $t9, 0x300($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X300);
    // 0x1506C798: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1506C79C: beq         $t9, $zero, L_1506C7A8
    if (ctx->r25 == 0) {
        // 0x1506C7A0: nop
    
            goto L_1506C7A8;
    }
    // 0x1506C7A0: nop

    // 0x1506C7A4: sb          $t1, 0x301($s0)
    MEM_B(0X301, ctx->r16) = ctx->r9;
L_1506C7A8:
    // 0x1506C7A8: jal         0x1515D440
    // 0x1506C7AC: nop

    func_1515D440(rdram, ctx);
        goto after_8;
    // 0x1506C7AC: nop

    after_8:
    // 0x1506C7B0: sw          $v0, 0x314($s0)
    MEM_W(0X314, ctx->r16) = ctx->r2;
    // 0x1506C7B4: lw          $t2, 0x114($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X114);
    // 0x1506C7B8: addiu       $t3, $t2, -0x2
    ctx->r11 = ADD32(ctx->r10, -0X2);
    // 0x1506C7BC: sltiu       $at, $t3, 0x11
    ctx->r1 = ctx->r11 < 0X11 ? 1 : 0;
    // 0x1506C7C0: beq         $at, $zero, L_1506C848
    if (ctx->r1 == 0) {
        // 0x1506C7C4: sw          $t2, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r10;
            goto L_1506C848;
    }
    // 0x1506C7C4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x1506C7C8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1506C7CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506C7D0: addu        $at, $at, $t3
    gpr jr_addend_1506C7D8 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x1506C7D4: lw          $t3, -0x63B4($at)
    ctx->r11 = ADD32(ctx->r1, -0X63B4);
    // 0x1506C7D8: jr          $t3
    // 0x1506C7DC: nop

    switch (jr_addend_1506C7D8 >> 2) {
        case 0: goto L_1506C7E0; break;
        case 1: goto L_1506C828; break;
        case 2: goto L_1506C848; break;
        case 3: goto L_1506C848; break;
        case 4: goto L_1506C830; break;
        case 5: goto L_1506C848; break;
        case 6: goto L_1506C848; break;
        case 7: goto L_1506C848; break;
        case 8: goto L_1506C848; break;
        case 9: goto L_1506C818; break;
        case 10: goto L_1506C820; break;
        case 11: goto L_1506C848; break;
        case 12: goto L_1506C848; break;
        case 13: goto L_1506C838; break;
        case 14: goto L_1506C848; break;
        case 15: goto L_1506C840; break;
        case 16: goto L_1506C7FC; break;
        default: switch_error(__func__, 0x1506C7D8, 0x80099C4C);
    }
    // 0x1506C7DC: nop

L_1506C7E0:
    // 0x1506C7E0: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x1506C7E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506C7E8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1506C7EC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x1506C7F0: sb          $t4, 0x103($s0)
    MEM_B(0X103, ctx->r16) = ctx->r12;
    // 0x1506C7F4: b           L_1506C84C
    // 0x1506C7F8: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
        goto L_1506C84C;
    // 0x1506C7F8: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_1506C7FC:
    // 0x1506C7FC: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x1506C800: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1506C804: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1506C808: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x1506C80C: sb          $t5, 0x103($s0)
    MEM_B(0X103, ctx->r16) = ctx->r13;
    // 0x1506C810: b           L_1506C84C
    // 0x1506C814: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
        goto L_1506C84C;
    // 0x1506C814: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
L_1506C818:
    // 0x1506C818: b           L_1506C84C
    // 0x1506C81C: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
        goto L_1506C84C;
    // 0x1506C81C: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
L_1506C820:
    // 0x1506C820: b           L_1506C84C
    // 0x1506C824: addiu       $a1, $zero, 0x6B
    ctx->r5 = ADD32(0, 0X6B);
        goto L_1506C84C;
    // 0x1506C824: addiu       $a1, $zero, 0x6B
    ctx->r5 = ADD32(0, 0X6B);
L_1506C828:
    // 0x1506C828: b           L_1506C84C
    // 0x1506C82C: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
        goto L_1506C84C;
    // 0x1506C82C: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
L_1506C830:
    // 0x1506C830: b           L_1506C84C
    // 0x1506C834: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
        goto L_1506C84C;
    // 0x1506C834: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
L_1506C838:
    // 0x1506C838: b           L_1506C84C
    // 0x1506C83C: addiu       $a1, $zero, 0x93
    ctx->r5 = ADD32(0, 0X93);
        goto L_1506C84C;
    // 0x1506C83C: addiu       $a1, $zero, 0x93
    ctx->r5 = ADD32(0, 0X93);
L_1506C840:
    // 0x1506C840: b           L_1506C84C
    // 0x1506C844: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
        goto L_1506C84C;
    // 0x1506C844: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
L_1506C848:
    // 0x1506C848: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
L_1506C84C:
    // 0x1506C84C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506C850: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1506C854: jal         0x15083568
    // 0x1506C858: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15083568(rdram, ctx);
        goto after_9;
    // 0x1506C858: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
L_1506C85C:
    // 0x1506C85C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506C860: lwc1        $f4, -0x6370($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6370);
    // 0x1506C864: lwc1        $f10, 0x100($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X100);
    // 0x1506C868: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1506C86C: lbu         $t2, -0x19EA($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X19EA);
    // 0x1506C870: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1506C874: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    // 0x1506C878: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x1506C87C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1506C880: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x1506C884: nop

    // 0x1506C888: addiu       $t0, $t8, -0x4000
    ctx->r8 = ADD32(ctx->r24, -0X4000);
    // 0x1506C88C: sll         $t9, $t0, 16
    ctx->r25 = S32(ctx->r8 << 16);
    // 0x1506C890: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1506C894: beq         $t2, $zero, L_1506C9A8
    if (ctx->r10 == 0) {
        // 0x1506C898: or          $t0, $t1, $zero
        ctx->r8 = ctx->r9 | 0;
            goto L_1506C9A8;
    }
    // 0x1506C898: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x1506C89C: bne         $t4, $zero, L_1506C9A8
    if (ctx->r12 != 0) {
        // 0x1506C8A0: lw          $t5, 0x114($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X114);
            goto L_1506C9A8;
    }
    // 0x1506C8A0: lw          $t5, 0x114($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X114);
    // 0x1506C8A4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1506C8A8: beq         $t5, $at, L_1506C9A8
    if (ctx->r13 == ctx->r1) {
        // 0x1506C8AC: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_1506C9A8;
    }
    // 0x1506C8AC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1506C8B0: beq         $t5, $at, L_1506C9A8
    if (ctx->r13 == ctx->r1) {
        // 0x1506C8B4: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_1506C9A8;
    }
    // 0x1506C8B4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x1506C8B8: beq         $t5, $at, L_1506C9A8
    if (ctx->r13 == ctx->r1) {
        // 0x1506C8BC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_1506C9A8;
    }
    // 0x1506C8BC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1506C8C0: beq         $t5, $at, L_1506C9A8
    if (ctx->r13 == ctx->r1) {
        // 0x1506C8C4: lwc1        $f12, 0x104($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X104);
            goto L_1506C9A8;
    }
    // 0x1506C8C4: lwc1        $f12, 0x104($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X104);
    // 0x1506C8C8: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x1506C8CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1506C8D0: jal         0x1505A630
    // 0x1506C8D4: sh          $t1, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r9;
    func_1505A630(rdram, ctx);
        goto after_10;
    // 0x1506C8D4: sh          $t1, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r9;
    after_10:
    // 0x1506C8D8: sra         $a2, $v0, 8
    ctx->r6 = S32(SIGNED(ctx->r2) >> 8);
    // 0x1506C8DC: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x1506C8E0: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x1506C8E4: sh          $v0, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r2;
    // 0x1506C8E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1506C8EC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x1506C8F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506C8F4: addiu       $a1, $sp, 0xFA
    ctx->r5 = ADD32(ctx->r29, 0XFA);
    // 0x1506C8F8: jal         0x1505DADC
    // 0x1506C8FC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_1505DADC(rdram, ctx);
        goto after_11;
    // 0x1506C8FC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_11:
    // 0x1506C900: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1506C904: lh          $t0, 0xF8($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XF8);
    // 0x1506C908: beq         $v0, $at, L_1506C9A8
    if (ctx->r2 == ctx->r1) {
        // 0x1506C90C: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_1506C9A8;
    }
    // 0x1506C90C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x1506C910: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x1506C914: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x1506C918: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1506C91C: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x1506C920: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1506C924: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x1506C928: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1506C92C: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x1506C930: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1506C934: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x1506C938: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1506C93C: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x1506C940: lwc1        $f2, 0x18($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X18);
    // 0x1506C944: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506C948: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506C94C: jal         0x1505A6F8
    // 0x1506C950: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    func_1505A6F8(rdram, ctx);
        goto after_12;
    // 0x1506C950: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    after_12:
    // 0x1506C954: lw          $t1, 0x114($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X114);
    // 0x1506C958: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1506C95C: lwc1        $f2, 0x88($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1506C960: beq         $t1, $at, L_1506C970
    if (ctx->r9 == ctx->r1) {
        // 0x1506C964: lh          $t0, 0xFA($sp)
        ctx->r8 = MEM_H(ctx->r29, 0XFA);
            goto L_1506C970;
    }
    // 0x1506C964: lh          $t0, 0xFA($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XFA);
    // 0x1506C968: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x1506C96C: bne         $t1, $at, L_1506C980
    if (ctx->r9 != ctx->r1) {
        // 0x1506C970: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_1506C980;
    }
L_1506C970:
    // 0x1506C970: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1506C974: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506C978: nop

    // 0x1506C97C: sub.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f10.fl;
L_1506C980:
    // 0x1506C980: lwc1        $f8, 0x104($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X104);
    // 0x1506C984: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1506C988: lw          $t2, 0x154C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X154C);
    // 0x1506C98C: div.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1506C990: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1506C994: lwc1        $f4, 0x18($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X18);
    // 0x1506C998: swc1        $f8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f8.u32l;
    // 0x1506C99C: sub.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x1506C9A0: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1506C9A4: swc1        $f4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f4.u32l;
L_1506C9A8:
    // 0x1506C9A8: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    // 0x1506C9AC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506C9B0: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x1506C9B4: beql        $t4, $zero, L_1506C9F0
    if (ctx->r12 == 0) {
        // 0x1506C9B8: lw          $t7, 0x124($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X124);
            goto L_1506C9F0;
    }
    goto skip_2;
    // 0x1506C9B8: lw          $t7, 0x124($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X124);
    skip_2:
    // 0x1506C9BC: lwc1        $f18, -0x3D1C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3D1C);
    // 0x1506C9C0: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1506C9C4: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1506C9C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506C9CC: lwc1        $f8, -0x3D14($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3D14);
    // 0x1506C9D0: sub.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x1506C9D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1506C9D8: jal         0x1505A630
    // 0x1506C9DC: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    func_1505A630(rdram, ctx);
        goto after_13;
    // 0x1506C9DC: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    after_13:
    // 0x1506C9E0: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x1506C9E4: sra         $t5, $t0, 16
    ctx->r13 = S32(SIGNED(ctx->r8) >> 16);
    // 0x1506C9E8: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x1506C9EC: lw          $t7, 0x124($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X124);
L_1506C9F0:
    // 0x1506C9F0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506C9F4: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x1506C9F8: andi        $t6, $t7, 0x4
    ctx->r14 = ctx->r15 & 0X4;
    // 0x1506C9FC: beq         $t6, $zero, L_1506CA3C
    if (ctx->r14 == 0) {
        // 0x1506CA00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1506CA3C;
    }
    // 0x1506CA00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506CA04: jal         0x1505A6F8
    // 0x1506CA08: sh          $t0, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r8;
    func_1505A6F8(rdram, ctx);
        goto after_14;
    // 0x1506CA08: sh          $t0, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r8;
    after_14:
    // 0x1506CA0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506CA10: lwc1        $f6, -0x3D18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3D18);
    // 0x1506CA14: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x1506CA18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506CA1C: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1506CA20: lh          $t0, 0xF8($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XF8);
    // 0x1506CA24: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1506CA28: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    // 0x1506CA2C: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1506CA30: div.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1506CA34: div.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1506CA38: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
L_1506CA3C:
    // 0x1506CA3C: lw          $t8, 0x124($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X124);
    // 0x1506CA40: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x1506CA44: beql        $t9, $zero, L_1506CA78
    if (ctx->r25 == 0) {
        // 0x1506CA48: lw          $t5, 0x124($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X124);
            goto L_1506CA78;
    }
    goto skip_3;
    // 0x1506CA48: lw          $t5, 0x124($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X124);
    skip_3:
    // 0x1506CA4C: jal         0x150ADA20
    // 0x1506CA50: sh          $t0, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x1506CA50: sh          $t0, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r8;
    after_15:
    // 0x1506CA54: addiu       $at, $zero, 0x1200
    ctx->r1 = ADD32(0, 0X1200);
    // 0x1506CA58: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1506CA5C: lh          $t0, 0xF8($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XF8);
    // 0x1506CA60: mfhi        $t2
    ctx->r10 = hi;
    // 0x1506CA64: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x1506CA68: addiu       $t0, $t0, -0x900
    ctx->r8 = ADD32(ctx->r8, -0X900);
    // 0x1506CA6C: sll         $t3, $t0, 16
    ctx->r11 = S32(ctx->r8 << 16);
    // 0x1506CA70: sra         $t0, $t3, 16
    ctx->r8 = S32(SIGNED(ctx->r11) >> 16);
    // 0x1506CA74: lw          $t5, 0x124($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X124);
L_1506CA78:
    // 0x1506CA78: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506CA7C: andi        $t7, $t5, 0x10
    ctx->r15 = ctx->r13 & 0X10;
    // 0x1506CA80: beql        $t7, $zero, L_1506CBE8
    if (ctx->r15 == 0) {
        // 0x1506CA84: addiu       $t3, $t0, 0x4000
        ctx->r11 = ADD32(ctx->r8, 0X4000);
            goto L_1506CBE8;
    }
    goto skip_4;
    // 0x1506CA84: addiu       $t3, $t0, 0x4000
    ctx->r11 = ADD32(ctx->r8, 0X4000);
    skip_4:
    // 0x1506CA88: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1506CA8C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1506CA90: addiu       $t1, $t1, -0x3D30
    ctx->r9 = ADD32(ctx->r9, -0X3D30);
    // 0x1506CA94: lbu         $t8, 0x222($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X222);
    // 0x1506CA98: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1506CA9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506CAA0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1506CAA4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1506CAA8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1506CAAC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1506CAB0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1506CAB4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1506CAB8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1506CABC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1506CAC0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1506CAC4: addu        $v0, $t9, $t1
    ctx->r2 = ADD32(ctx->r25, ctx->r9);
    // 0x1506CAC8: lwc1        $f10, 0x3C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x1506CACC: lhu         $a0, 0x76($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X76);
    // 0x1506CAD0: addiu       $t2, $sp, 0x5C
    ctx->r10 = ADD32(ctx->r29, 0X5C);
    // 0x1506CAD4: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1506CAD8: addiu       $t3, $sp, 0x58
    ctx->r11 = ADD32(ctx->r29, 0X58);
    // 0x1506CADC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1506CAE0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1506CAE4: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x1506CAE8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x1506CAEC: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x1506CAF0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x1506CAF4: jal         0x1505A184
    // 0x1506CAF8: nop

    func_1505A184(rdram, ctx);
        goto after_16;
    // 0x1506CAF8: nop

    after_16:
    // 0x1506CAFC: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x1506CB00: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1506CB04: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1506CB08: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1506CB0C: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1506CB10: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1506CB14: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1506CB18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506CB1C: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1506CB20: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1506CB24: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1506CB28: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x1506CB2C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1506CB30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1506CB34: nop

    // 0x1506CB38: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1506CB3C: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1506CB40: sub.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x1506CB44: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1506CB48: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x1506CB4C: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1506CB50: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1506CB54: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1506CB58: sub.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x1506CB5C: sub.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x1506CB60: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x1506CB64: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x1506CB68: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1506CB6C: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1506CB70: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1506CB74: jal         0x150484A0
    // 0x1506CB78: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    func_150484A0(rdram, ctx);
        goto after_17;
    // 0x1506CB78: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    after_17:
    // 0x1506CB7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506CB80: lwc1        $f8, -0x636C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X636C);
    // 0x1506CB84: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1506CB88: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1506CB8C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1506CB90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1506CB94: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x1506CB98: jal         0x1505A630
    // 0x1506CB9C: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    func_1505A630(rdram, ctx);
        goto after_18;
    // 0x1506CB9C: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    after_18:
    // 0x1506CBA0: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1506CBA4: addiu       $t9, $sp, 0x108
    ctx->r25 = ADD32(ctx->r29, 0X108);
    // 0x1506CBA8: addiu       $t1, $sp, 0x48
    ctx->r9 = ADD32(ctx->r29, 0X48);
    // 0x1506CBAC: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1506CBB0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x1506CBB4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1506CBB8: lw          $a1, 0x104($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X104);
    // 0x1506CBBC: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x1506CBC0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x1506CBC4: addiu       $a3, $sp, 0x104
    ctx->r7 = ADD32(ctx->r29, 0X104);
    // 0x1506CBC8: sh          $v0, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r2;
    // 0x1506CBCC: jal         0x1505A184
    // 0x1506CBD0: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    func_1505A184(rdram, ctx);
        goto after_19;
    // 0x1506CBD0: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    after_19:
    // 0x1506CBD4: lwc1        $f8, 0x108($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X108);
    // 0x1506CBD8: lh          $t0, 0xF8($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XF8);
    // 0x1506CBDC: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x1506CBE0: swc1        $f10, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f10.u32l;
    // 0x1506CBE4: addiu       $t3, $t0, 0x4000
    ctx->r11 = ADD32(ctx->r8, 0X4000);
L_1506CBE8:
    // 0x1506CBE8: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x1506CBEC: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x1506CBF0: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x1506CBF4: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x1506CBF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1506CBFC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1506CC00: sh          $t0, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r8;
    // 0x1506CC04: sh          $t0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r8;
    // 0x1506CC08: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1506CC0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1506CC10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1506CC14: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1506CC18: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1506CC1C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1506CC20: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    // 0x1506CC24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1506CC28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1506CC2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1506CC30: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    // 0x1506CC34: lwc1        $f6, 0x10C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x1506CC38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506CC3C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x1506CC40: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x1506CC44: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
    // 0x1506CC48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506CC4C: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x1506CC50: lwc1        $f8, 0x104($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X104);
    // 0x1506CC54: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
    // 0x1506CC58: lbu         $t7, 0x113($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X113);
    // 0x1506CC5C: sb          $zero, 0x81($s0)
    MEM_B(0X81, ctx->r16) = 0;
    // 0x1506CC60: sb          $zero, 0x7F($s0)
    MEM_B(0X7F, ctx->r16) = 0;
    // 0x1506CC64: sb          $t6, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r14;
    // 0x1506CC68: sb          $t7, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r15;
    // 0x1506CC6C: lw          $t8, 0x124($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X124);
    // 0x1506CC70: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x1506CC74: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x1506CC78: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x1506CC7C: beq         $t9, $zero, L_1506CC94
    if (ctx->r25 == 0) {
        // 0x1506CC80: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_1506CC94;
    }
    // 0x1506CC80: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1506CC84: lw          $t1, 0x154C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X154C);
    // 0x1506CC88: lbu         $v0, 0x222($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X222);
    // 0x1506CC8C: sb          $v0, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r2;
    // 0x1506CC90: sb          $v0, 0x126($s0)
    MEM_B(0X126, ctx->r16) = ctx->r2;
L_1506CC94:
    // 0x1506CC94: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    // 0x1506CC98: addiu       $t2, $zero, 0x26
    ctx->r10 = ADD32(0, 0X26);
    // 0x1506CC9C: sb          $t2, 0x82($s0)
    MEM_B(0X82, ctx->r16) = ctx->r10;
    // 0x1506CCA0: bne         $v0, $zero, L_1506CCC0
    if (ctx->r2 != 0) {
        // 0x1506CCA4: addiu       $t1, $zero, 0x11
        ctx->r9 = ADD32(0, 0X11);
            goto L_1506CCC0;
    }
    // 0x1506CCA4: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x1506CCA8: lw          $t3, 0x114($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X114);
    // 0x1506CCAC: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x1506CCB0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x1506CCB4: lbu         $t4, -0x653C($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X653C);
    // 0x1506CCB8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x1506CCBC: sb          $t5, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r13;
L_1506CCC0:
    // 0x1506CCC0: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x1506CCC4: swc1        $f6, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f6.u32l;
    // 0x1506CCC8: sh          $t7, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r15;
    // 0x1506CCCC: sh          $t6, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r14;
    // 0x1506CCD0: swc1        $f0, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f0.u32l;
    // 0x1506CCD4: swc1        $f0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f0.u32l;
    // 0x1506CCD8: swc1        $f0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f0.u32l;
    // 0x1506CCDC: swc1        $f0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f0.u32l;
    // 0x1506CCE0: lbu         $t8, 0x3E78($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3E78);
    // 0x1506CCE4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1506CCE8: addiu       $t3, $zero, 0x100E
    ctx->r11 = ADD32(0, 0X100E);
    // 0x1506CCEC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x1506CCF0: sb          $t9, 0x124($s0)
    MEM_B(0X124, ctx->r16) = ctx->r25;
    // 0x1506CCF4: sb          $t1, 0x122($s0)
    MEM_B(0X122, ctx->r16) = ctx->r9;
    // 0x1506CCF8: sb          $zero, 0x232($s0)
    MEM_B(0X232, ctx->r16) = 0;
    // 0x1506CCFC: sb          $t2, 0x125($s0)
    MEM_B(0X125, ctx->r16) = ctx->r10;
    // 0x1506CD00: beq         $v0, $zero, L_1506CD30
    if (ctx->r2 == 0) {
        // 0x1506CD04: sw          $t3, 0xF8($s0)
        MEM_W(0XF8, ctx->r16) = ctx->r11;
            goto L_1506CD30;
    }
    // 0x1506CD04: sw          $t3, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r11;
    // 0x1506CD08: ori         $t5, $t3, 0x8000
    ctx->r13 = ctx->r11 | 0X8000;
    // 0x1506CD0C: jal         0x10003C40
    // 0x1506CD10: sw          $t5, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r13;
    allocate_memory(rdram, ctx);
        goto after_20;
    // 0x1506CD10: sw          $t5, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r13;
    after_20:
    // 0x1506CD14: sw          $v0, 0x31C($s0)
    MEM_W(0X31C, ctx->r16) = ctx->r2;
    // 0x1506CD18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1506CD1C: jal         0x100226F0
    // 0x1506CD20: addiu       $a1, $zero, 0x1C0
    ctx->r5 = ADD32(0, 0X1C0);
    bzero_recomp(rdram, ctx);
        goto after_21;
    // 0x1506CD20: addiu       $a1, $zero, 0x1C0
    ctx->r5 = ADD32(0, 0X1C0);
    after_21:
    // 0x1506CD24: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1506CD28: sb          $t7, 0x103($s0)
    MEM_B(0X103, ctx->r16) = ctx->r15;
    // 0x1506CD2C: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
L_1506CD30:
    // 0x1506CD30: lwc1        $f0, 0x11C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1506CD34: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506CD38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1506CD3C: swc1        $f0, 0x14C($s0)
    MEM_W(0X14C, ctx->r16) = ctx->f0.u32l;
    // 0x1506CD40: swc1        $f0, 0x150($s0)
    MEM_W(0X150, ctx->r16) = ctx->f0.u32l;
    // 0x1506CD44: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1506CD48: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x1506CD4C: lbu         $t8, 0x66($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X66);
    // 0x1506CD50: andi        $t9, $t8, 0xC
    ctx->r25 = ctx->r24 & 0XC;
    // 0x1506CD54: sb          $t9, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r25;
    // 0x1506CD58: lw          $t1, 0x114($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X114);
    // 0x1506CD5C: sb          $v0, 0x284($s0)
    MEM_B(0X284, ctx->r16) = ctx->r2;
    // 0x1506CD60: sh          $t1, 0x278($s0)
    MEM_H(0X278, ctx->r16) = ctx->r9;
    // 0x1506CD64: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1506CD68: beq         $t2, $at, L_1506CD78
    if (ctx->r10 == ctx->r1) {
        // 0x1506CD6C: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_1506CD78;
    }
    // 0x1506CD6C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x1506CD70: bnel        $t2, $at, L_1506CD80
    if (ctx->r10 != ctx->r1) {
        // 0x1506CD74: lw          $t4, 0x38($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X38);
            goto L_1506CD80;
    }
    goto skip_5;
    // 0x1506CD74: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    skip_5:
L_1506CD78:
    // 0x1506CD78: sh          $t3, 0x282($s0)
    MEM_H(0X282, ctx->r16) = ctx->r11;
    // 0x1506CD7C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
L_1506CD80:
    // 0x1506CD80: sltiu       $at, $t4, 0x10
    ctx->r1 = ctx->r12 < 0X10 ? 1 : 0;
    // 0x1506CD84: beq         $at, $zero, L_1506CE54
    if (ctx->r1 == 0) {
        // 0x1506CD88: sll         $t4, $t4, 2
        ctx->r12 = S32(ctx->r12 << 2);
            goto L_1506CE54;
    }
    // 0x1506CD88: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1506CD8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506CD90: addu        $at, $at, $t4
    gpr jr_addend_1506CD98 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x1506CD94: lw          $t4, -0x6368($at)
    ctx->r12 = ADD32(ctx->r1, -0X6368);
    // 0x1506CD98: jr          $t4
    // 0x1506CD9C: nop

    switch (jr_addend_1506CD98 >> 2) {
        case 0: goto L_1506CE24; break;
        case 1: goto L_1506CDA0; break;
        case 2: goto L_1506CE54; break;
        case 3: goto L_1506CE54; break;
        case 4: goto L_1506CE54; break;
        case 5: goto L_1506CE0C; break;
        case 6: goto L_1506CE54; break;
        case 7: goto L_1506CE54; break;
        case 8: goto L_1506CE54; break;
        case 9: goto L_1506CE0C; break;
        case 10: goto L_1506CE0C; break;
        case 11: goto L_1506CE54; break;
        case 12: goto L_1506CE54; break;
        case 13: goto L_1506CDF0; break;
        case 14: goto L_1506CE54; break;
        case 15: goto L_1506CDD8; break;
        default: switch_error(__func__, 0x1506CD98, 0x80099C98);
    }
    // 0x1506CD9C: nop

L_1506CDA0:
    // 0x1506CDA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506CDA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1506CDA8: jal         0x1506AC8C
    // 0x1506CDAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506AC8C(rdram, ctx);
        goto after_22;
    // 0x1506CDAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
    // 0x1506CDB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506CDB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1506CDB8: jal         0x15158BD0
    // 0x1506CDBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15158BD0(rdram, ctx);
        goto after_23;
    // 0x1506CDBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
    // 0x1506CDC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1506CDC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1506CDC8: jal         0x1514EC1C
    // 0x1506CDCC: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_1514EC1C(rdram, ctx);
        goto after_24;
    // 0x1506CDCC: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_24:
    // 0x1506CDD0: b           L_1506CE58
    // 0x1506CDD4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1506CE58;
    // 0x1506CDD4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1506CDD8:
    // 0x1506CDD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506CDDC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x1506CDE0: jal         0x1506AC8C
    // 0x1506CDE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506AC8C(rdram, ctx);
        goto after_25;
    // 0x1506CDE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_25:
    // 0x1506CDE8: b           L_1506CE58
    // 0x1506CDEC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1506CE58;
    // 0x1506CDEC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1506CDF0:
    // 0x1506CDF0: addiu       $t5, $zero, 0x7D0
    ctx->r13 = ADD32(0, 0X7D0);
    // 0x1506CDF4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1506CDF8: addiu       $a0, $zero, 0x237
    ctx->r4 = ADD32(0, 0X237);
    // 0x1506CDFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1506CE00: addiu       $a2, $zero, 0x7530
    ctx->r6 = ADD32(0, 0X7530);
    // 0x1506CE04: jal         0x10010154
    // 0x1506CE08: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_10010154(rdram, ctx);
        goto after_26;
    // 0x1506CE08: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_26:
L_1506CE0C:
    // 0x1506CE0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506CE10: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x1506CE14: jal         0x1506AC8C
    // 0x1506CE18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506AC8C(rdram, ctx);
        goto after_27;
    // 0x1506CE18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_27:
    // 0x1506CE1C: b           L_1506CE58
    // 0x1506CE20: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1506CE58;
    // 0x1506CE20: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1506CE24:
    // 0x1506CE24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506CE28: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x1506CE2C: jal         0x1506AC8C
    // 0x1506CE30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506AC8C(rdram, ctx);
        goto after_28;
    // 0x1506CE30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_28:
    // 0x1506CE34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506CE38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1506CE3C: jal         0x15158BD0
    // 0x1506CE40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15158BD0(rdram, ctx);
        goto after_29;
    // 0x1506CE40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_29:
    // 0x1506CE44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1506CE48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1506CE4C: jal         0x1514EC1C
    // 0x1506CE50: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_1514EC1C(rdram, ctx);
        goto after_30;
    // 0x1506CE50: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_30:
L_1506CE54:
    // 0x1506CE54: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1506CE58:
    // 0x1506CE58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1506CE5C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1506CE60: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    // 0x1506CE64: jr          $ra
    // 0x1506CE68: nop

    return;
    return;
    // 0x1506CE68: nop

;}
RECOMP_FUNC void func_151CB5FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CB5FC: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x151CB600: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x151CB604: sw          $a1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r5;
    // 0x151CB608: sw          $a2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r6;
    // 0x151CB60C: sw          $a3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r7;
    // 0x151CB610: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x151CB614: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x151CB618: sll         $t8, $a3, 24
    ctx->r24 = S32(ctx->r7 << 24);
    // 0x151CB61C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151CB620: sra         $a3, $t8, 24
    ctx->r7 = S32(SIGNED(ctx->r24) >> 24);
    // 0x151CB624: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x151CB628: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x151CB62C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151CB630: sw          $a0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r4;
    // 0x151CB634: lw          $t0, 0xE8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE8);
    // 0x151CB638: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151CB63C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x151CB640: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x151CB644: sb          $a1, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r5;
    // 0x151CB648: bne         $a3, $at, L_151CB658
    if (ctx->r7 != ctx->r1) {
        // 0x151CB64C: sw          $t0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r8;
            goto L_151CB658;
    }
    // 0x151CB64C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x151CB650: b           L_151CB65C
    // 0x151CB654: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151CB65C;
    // 0x151CB654: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151CB658:
    // 0x151CB658: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_151CB65C:
    // 0x151CB65C: lui         $at, 0x4244
    ctx->r1 = S32(0X4244 << 16);
    // 0x151CB660: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151CB664: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x151CB668: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151CB66C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151CB670: addiu       $t1, $zero, 0x12C
    ctx->r9 = ADD32(0, 0X12C);
    // 0x151CB674: sb          $v1, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r3;
    // 0x151CB678: sb          $a3, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r7;
    // 0x151CB67C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x151CB680: sh          $t1, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r9;
    // 0x151CB684: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x151CB688: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x151CB68C: beq         $a2, $zero, L_151CB69C
    if (ctx->r6 == 0) {
        // 0x151CB690: swc1        $f6, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
            goto L_151CB69C;
    }
    // 0x151CB690: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x151CB694: b           L_151CB6A0
    // 0x151CB698: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_151CB6A0;
    // 0x151CB698: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_151CB69C:
    // 0x151CB69C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151CB6A0:
    // 0x151CB6A0: lw          $t3, 0xE8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE8);
    // 0x151CB6A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151CB6A8: ori         $t2, $v1, 0x32
    ctx->r10 = ctx->r3 | 0X32;
    // 0x151CB6AC: lbu         $t4, 0x23D($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X23D);
    // 0x151CB6B0: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x151CB6B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151CB6B8: addiu       $t5, $t4, 0xB
    ctx->r13 = ADD32(ctx->r12, 0XB);
    // 0x151CB6BC: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x151CB6C0: or          $t8, $t2, $t7
    ctx->r24 = ctx->r10 | ctx->r15;
    // 0x151CB6C4: sh          $t8, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r24;
    // 0x151CB6C8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151CB6CC: sb          $t1, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r9;
    // 0x151CB6D0: sb          $t4, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r12;
    // 0x151CB6D4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151CB6D8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151CB6DC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151CB6E0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151CB6E4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151CB6E8: sh          $t9, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r25;
    // 0x151CB6EC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151CB6F0: sb          $t6, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r14;
    // 0x151CB6F4: sb          $t5, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r13;
    // 0x151CB6F8: sb          $t2, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r10;
    // 0x151CB6FC: sb          $t7, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r15;
    // 0x151CB700: sb          $t8, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r24;
    // 0x151CB704: lui         $t1, 0x20
    ctx->r9 = S32(0X20 << 16);
    // 0x151CB708: lui         $t4, 0x1F
    ctx->r12 = S32(0X1F << 16);
    // 0x151CB70C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151CB710: ori         $t1, $t1, 0x4
    ctx->r9 = ctx->r9 | 0X4;
    // 0x151CB714: ori         $t4, $t4, 0x601
    ctx->r12 = ctx->r12 | 0X601;
    // 0x151CB718: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x151CB71C: addiu       $t5, $zero, 0x22
    ctx->r13 = ADD32(0, 0X22);
    // 0x151CB720: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x151CB724: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x151CB728: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x151CB72C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x151CB730: lw          $v0, 0x2FA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2FA0);
    // 0x151CB734: sh          $t0, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r8;
    // 0x151CB738: sb          $t9, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r25;
    // 0x151CB73C: sb          $t0, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r8;
    // 0x151CB740: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x151CB744: sw          $t1, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r9;
    // 0x151CB748: sw          $t4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r12;
    // 0x151CB74C: sw          $t6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r14;
    // 0x151CB750: sw          $t5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r13;
    // 0x151CB754: sw          $t2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r10;
    // 0x151CB758: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
    // 0x151CB75C: sb          $zero, 0xD0($sp)
    MEM_B(0XD0, ctx->r29) = 0;
    // 0x151CB760: sb          $t8, 0xD1($sp)
    MEM_B(0XD1, ctx->r29) = ctx->r24;
    // 0x151CB764: lbu         $t9, 0x23D($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0X23D);
    // 0x151CB768: lui         $at, 0x42B0
    ctx->r1 = S32(0X42B0 << 16);
    // 0x151CB76C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151CB770: lui         $at, 0x42B6
    ctx->r1 = S32(0X42B6 << 16);
    // 0x151CB774: xori        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 ^ 0X1;
    // 0x151CB778: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151CB77C: sltiu       $t4, $t4, 0x1
    ctx->r12 = ctx->r12 < 0X1 ? 1 : 0;
    // 0x151CB780: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x151CB784: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CB788: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x151CB78C: lwc1        $f16, -0x527C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X527C);
    // 0x151CB790: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CB794: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x151CB798: lwc1        $f18, -0x5254($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5254);
    // 0x151CB79C: lbu         $t2, 0xFB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XFB);
    // 0x151CB7A0: addiu       $t1, $zero, 0x7B
    ctx->r9 = ADD32(0, 0X7B);
    // 0x151CB7A4: addiu       $t5, $zero, 0x58
    ctx->r13 = ADD32(0, 0X58);
    // 0x151CB7A8: sb          $zero, 0x42($sp)
    MEM_B(0X42, ctx->r29) = 0;
    // 0x151CB7AC: sb          $t0, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r8;
    // 0x151CB7B0: sb          $t1, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r9;
    // 0x151CB7B4: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x151CB7B8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151CB7BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151CB7C0: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x151CB7C4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x151CB7C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CB7CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CB7D0: sb          $t9, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r25;
    // 0x151CB7D4: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x151CB7D8: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x151CB7DC: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x151CB7E0: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x151CB7E4: jal         0x1515548C
    // 0x151CB7E8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_1515548C(rdram, ctx);
        goto after_0;
    // 0x151CB7E8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_0:
    // 0x151CB7EC: beq         $v0, $zero, L_151CB800
    if (ctx->r2 == 0) {
        // 0x151CB7F0: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CB800;
    }
    // 0x151CB7F0: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CB7F4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151CB7F8: jal         0x10022EC0
    // 0x151CB7FC: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151CB7FC: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_1:
L_151CB800:
    // 0x151CB800: lbu         $t3, 0xFB($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XFB);
    // 0x151CB804: addiu       $t7, $zero, 0x7C
    ctx->r15 = ADD32(0, 0X7C);
    // 0x151CB808: addiu       $t8, $zero, 0x58
    ctx->r24 = ADD32(0, 0X58);
    // 0x151CB80C: sb          $zero, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = 0;
    // 0x151CB810: sb          $t7, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r15;
    // 0x151CB814: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151CB818: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x151CB81C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x151CB820: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CB824: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CB828: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151CB82C: jal         0x1515548C
    // 0x151CB830: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_1515548C(rdram, ctx);
        goto after_2;
    // 0x151CB830: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_2:
    // 0x151CB834: beq         $v0, $zero, L_151CB848
    if (ctx->r2 == 0) {
        // 0x151CB838: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CB848;
    }
    // 0x151CB838: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CB83C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151CB840: jal         0x10022EC0
    // 0x151CB844: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151CB844: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_3:
L_151CB848:
    // 0x151CB848: lui         $at, 0xC2B0
    ctx->r1 = S32(0XC2B0 << 16);
    // 0x151CB84C: lhu         $t9, 0xA4($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0XA4);
    // 0x151CB850: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151CB854: lui         $at, 0x42B6
    ctx->r1 = S32(0X42B6 << 16);
    // 0x151CB858: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151CB85C: lbu         $t2, 0xFB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XFB);
    // 0x151CB860: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151CB864: addiu       $t4, $zero, 0x7B
    ctx->r12 = ADD32(0, 0X7B);
    // 0x151CB868: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151CB86C: addiu       $t5, $zero, 0x58
    ctx->r13 = ADD32(0, 0X58);
    // 0x151CB870: andi        $t0, $t9, 0xFFFD
    ctx->r8 = ctx->r25 & 0XFFFD;
    // 0x151CB874: sh          $t0, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r8;
    // 0x151CB878: sb          $t1, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r9;
    // 0x151CB87C: sb          $t4, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r12;
    // 0x151CB880: sb          $t6, 0x42($sp)
    MEM_B(0X42, ctx->r29) = ctx->r14;
    // 0x151CB884: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151CB888: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x151CB88C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x151CB890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CB894: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CB898: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151CB89C: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x151CB8A0: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x151CB8A4: jal         0x1515548C
    // 0x151CB8A8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_1515548C(rdram, ctx);
        goto after_4;
    // 0x151CB8A8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_4:
    // 0x151CB8AC: beq         $v0, $zero, L_151CB8C0
    if (ctx->r2 == 0) {
        // 0x151CB8B0: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CB8C0;
    }
    // 0x151CB8B0: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CB8B4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151CB8B8: jal         0x10022EC0
    // 0x151CB8BC: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x151CB8BC: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_5:
L_151CB8C0:
    // 0x151CB8C0: lbu         $t3, 0xFB($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XFB);
    // 0x151CB8C4: addiu       $t7, $zero, 0x7C
    ctx->r15 = ADD32(0, 0X7C);
    // 0x151CB8C8: addiu       $t8, $zero, 0x58
    ctx->r24 = ADD32(0, 0X58);
    // 0x151CB8CC: sb          $zero, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = 0;
    // 0x151CB8D0: sb          $t7, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r15;
    // 0x151CB8D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151CB8D8: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x151CB8DC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x151CB8E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CB8E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CB8E8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151CB8EC: jal         0x1515548C
    // 0x151CB8F0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_1515548C(rdram, ctx);
        goto after_6;
    // 0x151CB8F0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_6:
    // 0x151CB8F4: beq         $v0, $zero, L_151CB908
    if (ctx->r2 == 0) {
        // 0x151CB8F8: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CB908;
    }
    // 0x151CB8F8: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CB8FC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151CB900: jal         0x10022EC0
    // 0x151CB904: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x151CB904: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_7:
L_151CB908:
    // 0x151CB908: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151CB90C: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x151CB910: jr          $ra
    // 0x151CB914: nop

    return;
    return;
    // 0x151CB914: nop

;}
RECOMP_FUNC void func_15077B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077B44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15077B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15077B4C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15077B50: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15077B54: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15077B58: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x15077B5C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15077B60: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x15077B64: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x15077B68: jal         0x15060A30
    // 0x15077B6C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_15060A30(rdram, ctx);
        goto after_0;
    // 0x15077B6C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x15077B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15077B74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15077B78: jr          $ra
    // 0x15077B7C: nop

    return;
    return;
    // 0x15077B7C: nop

;}
RECOMP_FUNC void func_151B7328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B7328: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x151B732C: sw          $a0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r4;
    // 0x151B7330: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    // 0x151B7334: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151B7338: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151B733C: sw          $a1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r5;
    // 0x151B7340: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x151B7344: sw          $a3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r7;
    // 0x151B7348: lbu         $t6, 0x107($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X107);
    // 0x151B734C: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x151B7350: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x151B7354: sw          $zero, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = 0;
    // 0x151B7358: sw          $zero, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = 0;
    // 0x151B735C: sb          $t7, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = ctx->r15;
    // 0x151B7360: addiu       $t8, $t8, 0x5480
    ctx->r24 = ADD32(ctx->r24, 0X5480);
    // 0x151B7364: sb          $t6, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r14;
    // 0x151B7368: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151B736C: addiu       $t2, $zero, 0x12C
    ctx->r10 = ADD32(0, 0X12C);
    // 0x151B7370: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x151B7374: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x151B7378: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x151B737C: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x151B7380: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x151B7384: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x151B7388: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x151B738C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x151B7390: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x151B7394: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x151B7398: lw          $t9, 0x110($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X110);
    // 0x151B739C: lbu         $t0, 0x10F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X10F);
    // 0x151B73A0: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
    // 0x151B73A4: sh          $t2, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r10;
    // 0x151B73A8: sh          $t3, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r11;
    // 0x151B73AC: sw          $t4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r12;
    // 0x151B73B0: sb          $t5, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = ctx->r13;
    // 0x151B73B4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151B73B8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151B73BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151B73C0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151B73C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151B73C8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x151B73CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B73D0: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x151B73D4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x151B73D8: jal         0x15147A80
    // 0x151B73DC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_15147A80(rdram, ctx);
        goto after_0;
    // 0x151B73DC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_0:
    // 0x151B73E0: beq         $v0, $zero, L_151B7660
    if (ctx->r2 == 0) {
        // 0x151B73E4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151B7660;
    }
    // 0x151B73E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151B73E8: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x151B73EC: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x151B73F0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x151B73F4: jal         0x10022EC0
    // 0x151B73F8: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151B73F8: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    after_1:
    // 0x151B73FC: lw          $a3, 0xD0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XD0);
    // 0x151B7400: addiu       $a0, $a3, 0x10
    ctx->r4 = ADD32(ctx->r7, 0X10);
    // 0x151B7404: sw          $a0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r4;
    // 0x151B7408: lw          $a2, 0x108($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X108);
    // 0x151B740C: jal         0x10022EC0
    // 0x151B7410: lw          $a1, 0x100($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X100);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151B7410: lw          $a1, 0x100($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X100);
    after_2:
    // 0x151B7414: lbu         $t8, 0x107($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X107);
    // 0x151B7418: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151B741C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151B7420: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x151B7424: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x151B7428: lw          $t9, -0x470($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X470);
    // 0x151B742C: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x151B7430: jalr        $t9
    // 0x151B7434: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x151B7434: nop

    after_3:
    // 0x151B7438: bne         $v0, $zero, L_151B7450
    if (ctx->r2 != 0) {
        // 0x151B743C: lui         $t3, 0x800B
        ctx->r11 = S32(0X800B << 16);
            goto L_151B7450;
    }
    // 0x151B743C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x151B7440: jal         0x1516972C
    // 0x151B7444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_4;
    // 0x151B7444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x151B7448: b           L_151B7664
    // 0x151B744C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151B7664;
    // 0x151B744C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151B7450:
    // 0x151B7450: addiu       $t3, $t3, -0x5BA0
    ctx->r11 = ADD32(ctx->r11, -0X5BA0);
    // 0x151B7454: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x151B7458: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x151B745C: addiu       $t2, $sp, 0x50
    ctx->r10 = ADD32(ctx->r29, 0X50);
    // 0x151B7460: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151B7464: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x151B7468: lw          $t5, 0xC($t3)
    ctx->r13 = MEM_W(ctx->r11, 0XC);
    // 0x151B746C: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x151B7470: sw          $t5, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r13;
    // 0x151B7474: jal         0x150ADA20
    // 0x151B7478: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151B7478: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    after_5:
    // 0x151B747C: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x151B7480: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151B7484: addu        $t0, $sp, $t7
    ctx->r8 = ADD32(ctx->r29, ctx->r15);
    // 0x151B7488: lw          $t0, 0x50($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X50);
    // 0x151B748C: lui         $t1, 0x20
    ctx->r9 = S32(0X20 << 16);
    // 0x151B7490: addiu       $t8, $zero, 0x1303
    ctx->r24 = ADD32(0, 0X1303);
    // 0x151B7494: ori         $t1, $t1, 0x5
    ctx->r9 = ctx->r9 | 0X5;
    // 0x151B7498: sh          $t8, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r24;
    // 0x151B749C: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x151B74A0: sb          $t0, 0x7D($sp)
    MEM_B(0X7D, ctx->r29) = ctx->r8;
    // 0x151B74A4: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x151B74A8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151B74AC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151B74B0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151B74B4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151B74B8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151B74BC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151B74C0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151B74C4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151B74C8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151B74CC: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x151B74D0: sh          $t9, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r25;
    // 0x151B74D4: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x151B74D8: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x151B74DC: sb          $t4, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r12;
    // 0x151B74E0: sb          $t2, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r10;
    // 0x151B74E4: sb          $t3, 0x76($sp)
    MEM_B(0X76, ctx->r29) = ctx->r11;
    // 0x151B74E8: sb          $t5, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r13;
    // 0x151B74EC: sb          $t6, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r14;
    // 0x151B74F0: sb          $t7, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r15;
    // 0x151B74F4: sb          $t0, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = ctx->r8;
    // 0x151B74F8: sb          $t8, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r24;
    // 0x151B74FC: jal         0x150ADA68
    // 0x151B7500: sb          $t1, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r9;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151B7500: sb          $t1, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r9;
    after_6:
    // 0x151B7504: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x151B7508: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B750C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B7510: lwc1        $f8, -0x5B80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5B80);
    // 0x151B7514: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151B7518: addiu       $t4, $sp, 0xE4
    ctx->r12 = ADD32(ctx->r29, 0XE4);
    // 0x151B751C: addiu       $t9, $sp, 0x90
    ctx->r25 = ADD32(ctx->r29, 0X90);
    // 0x151B7520: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x151B7524: addiu       $v0, $v0, 0x5480
    ctx->r2 = ADD32(ctx->r2, 0X5480);
    // 0x151B7528: addiu       $t6, $sp, 0x9C
    ctx->r14 = ADD32(ctx->r29, 0X9C);
    // 0x151B752C: addiu       $t1, $sp, 0xA8
    ctx->r9 = ADD32(ctx->r29, 0XA8);
    // 0x151B7530: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151B7534: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151B7538: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151B753C: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x151B7540: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x151B7544: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151B7548: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151B754C: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x151B7550: sw          $t5, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r13;
    // 0x151B7554: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151B7558: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151B755C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151B7560: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151B7564: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151B7568: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151B756C: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x151B7570: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x151B7574: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151B7578: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151B757C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151B7580: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x151B7584: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x151B7588: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x151B758C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151B7590: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x151B7594: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151B7598: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151B759C: sh          $t4, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r12;
    // 0x151B75A0: sh          $t5, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r13;
    // 0x151B75A4: sh          $t0, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r8;
    // 0x151B75A8: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
    // 0x151B75AC: jal         0x150ADA20
    // 0x151B75B0: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151B75B0: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x151B75B4: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x151B75B8: beq         $t7, $zero, L_151B75C8
    if (ctx->r15 == 0) {
        // 0x151B75BC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151B75C8;
    }
    // 0x151B75BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151B75C0: b           L_151B75C8
    // 0x151B75C4: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_151B75C8;
    // 0x151B75C4: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_151B75C8:
    // 0x151B75C8: jal         0x150ADA20
    // 0x151B75CC: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151B75CC: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_8:
    // 0x151B75D0: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x151B75D4: beq         $t6, $zero, L_151B75E4
    if (ctx->r14 == 0) {
        // 0x151B75D8: lw          $v1, 0x48($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X48);
            goto L_151B75E4;
    }
    // 0x151B75D8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x151B75DC: b           L_151B75E8
    // 0x151B75E0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_151B75E8;
    // 0x151B75E0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_151B75E4:
    // 0x151B75E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151B75E8:
    // 0x151B75E8: or          $t2, $v0, $v1
    ctx->r10 = ctx->r2 | ctx->r3;
    // 0x151B75EC: ori         $t3, $t2, 0xC000
    ctx->r11 = ctx->r10 | 0XC000;
    // 0x151B75F0: lw          $t2, 0x110($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X110);
    // 0x151B75F4: lbu         $t8, 0x10F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X10F);
    // 0x151B75F8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x151B75FC: or          $t1, $t3, $at
    ctx->r9 = ctx->r11 | ctx->r1;
    // 0x151B7600: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x151B7604: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x151B7608: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151B760C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x151B7610: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151B7614: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151B7618: sw          $t1, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r9;
    // 0x151B761C: sb          $t9, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r25;
    // 0x151B7620: sb          $t4, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r12;
    // 0x151B7624: sb          $t5, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r13;
    // 0x151B7628: sb          $t0, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r8;
    // 0x151B762C: sb          $t7, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r15;
    // 0x151B7630: sb          $zero, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = 0;
    // 0x151B7634: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x151B7638: sb          $t6, 0xC6($sp)
    MEM_B(0XC6, ctx->r29) = ctx->r14;
    // 0x151B763C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x151B7640: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151B7644: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151B7648: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B764C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151B7650: jal         0x15130280
    // 0x151B7654: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15130280(rdram, ctx);
        goto after_9;
    // 0x151B7654: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_9:
    // 0x151B7658: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x151B765C: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
L_151B7660:
    // 0x151B7660: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151B7664:
    // 0x151B7664: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151B7668: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151B766C: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    // 0x151B7670: jr          $ra
    // 0x151B7674: nop

    return;
    return;
    // 0x151B7674: nop

;}
RECOMP_FUNC void func_150716EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150716EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150716F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150716F4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x150716F8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150716FC: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15071700: lui         $a1, 0x44BB
    ctx->r5 = S32(0X44BB << 16);
    // 0x15071704: lui         $a2, 0x453B
    ctx->r6 = S32(0X453B << 16);
    // 0x15071708: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1507170C: lui         $a3, 0x39AE
    ctx->r7 = S32(0X39AE << 16);
    // 0x15071710: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x15071714: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x15071718: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1507171C: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x15071720: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15071724: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x15071728: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1507172C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15071730: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15071734: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15071738: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1507173C: ori         $a3, $a3, 0xC33E
    ctx->r7 = ctx->r7 | 0XC33E;
    // 0x15071740: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x15071744: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x15071748: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x1507174C: jal         0x151D5404
    // 0x15071750: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    func_151D5404(rdram, ctx);
        goto after_0;
    // 0x15071750: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x15071754: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15071758: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1507175C: jr          $ra
    // 0x15071760: nop

    return;
    return;
    // 0x15071760: nop

;}
RECOMP_FUNC void func_1511650C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511650C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15116510: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15116514: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15116518: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1511651C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x15116520: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x15116524: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x15116528: lbu         $t6, 0x4F($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4F);
    // 0x1511652C: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x15116530: addiu       $a3, $a3, -0x3D30
    ctx->r7 = ADD32(ctx->r7, -0X3D30);
    // 0x15116534: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x15116538: bne         $t7, $zero, L_15116548
    if (ctx->r15 != 0) {
        // 0x1511653C: addiu       $a2, $s0, 0x7C
        ctx->r6 = ADD32(ctx->r16, 0X7C);
            goto L_15116548;
    }
    // 0x1511653C: addiu       $a2, $s0, 0x7C
    ctx->r6 = ADD32(ctx->r16, 0X7C);
    // 0x15116540: b           L_15116558
    // 0x15116544: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_15116558;
    // 0x15116544: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_15116548:
    // 0x15116548: lh          $a0, 0x10($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X10);
    // 0x1511654C: jal         0x15116888
    // 0x15116550: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    func_15116888(rdram, ctx);
        goto after_0;
    // 0x15116550: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    after_0:
    // 0x15116554: sra         $a0, $v0, 3
    ctx->r4 = S32(SIGNED(ctx->r2) >> 3);
L_15116558:
    // 0x15116558: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x1511655C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x15116560: beql        $t9, $zero, L_15116578
    if (ctx->r25 == 0) {
        // 0x15116564: lh          $v0, 0x3C($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X3C);
            goto L_15116578;
    }
    goto skip_0;
    // 0x15116564: lh          $v0, 0x3C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C);
    skip_0:
    // 0x15116568: bgezl       $a0, L_15116578
    if (SIGNED(ctx->r4) >= 0) {
        // 0x1511656C: lh          $v0, 0x3C($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X3C);
            goto L_15116578;
    }
    goto skip_1;
    // 0x1511656C: lh          $v0, 0x3C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C);
    skip_1:
    // 0x15116570: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15116574: lh          $v0, 0x3C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C);
L_15116578:
    // 0x15116578: beq         $a0, $zero, L_15116584
    if (ctx->r4 == 0) {
        // 0x1511657C: addu        $v0, $v0, $a0
        ctx->r2 = ADD32(ctx->r2, ctx->r4);
            goto L_15116584;
    }
    // 0x1511657C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x15116580: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
L_15116584:
    // 0x15116584: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15116588: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511658C: ldc1        $f8, 0x2FB8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X2FB8);
    // 0x15116590: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x15116594: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x15116598: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x1511659C: trunc.w.d   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x151165A0: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x151165A4: bgtz        $v1, L_15116630
    if (SIGNED(ctx->r3) > 0) {
        // 0x151165A8: nop
    
            goto L_15116630;
    }
    // 0x151165A8: nop

    // 0x151165AC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x151165B0: blez        $v0, L_151165F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151165B4: nop
    
            goto L_151165F0;
    }
    // 0x151165B4: nop

    // 0x151165B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x151165BC: bgtzl       $v0, L_15116684
    if (SIGNED(ctx->r2) > 0) {
        // 0x151165C0: lw          $t2, 0x3C($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X3C);
            goto L_15116684;
    }
    goto skip_2;
    // 0x151165C0: lw          $t2, 0x3C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X3C);
    skip_2:
    // 0x151165C4: bne         $a0, $zero, L_151165E8
    if (ctx->r4 != 0) {
        // 0x151165C8: nop
    
            goto L_151165E8;
    }
    // 0x151165C8: nop

    // 0x151165CC: bne         $v1, $zero, L_151165DC
    if (ctx->r3 != 0) {
        // 0x151165D0: addiu       $t1, $zero, 0x14
        ctx->r9 = ADD32(0, 0X14);
            goto L_151165DC;
    }
    // 0x151165D0: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x151165D4: b           L_15116680
    // 0x151165D8: sw          $t1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r9;
        goto L_15116680;
    // 0x151165D8: sw          $t1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r9;
L_151165DC:
    // 0x151165DC: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x151165E0: b           L_15116680
    // 0x151165E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15116680;
    // 0x151165E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151165E8:
    // 0x151165E8: b           L_15116680
    // 0x151165EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15116680;
    // 0x151165EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151165F0:
    // 0x151165F0: bgezl       $v0, L_15116684
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151165F4: lw          $t2, 0x3C($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X3C);
            goto L_15116684;
    }
    goto skip_3;
    // 0x151165F4: lw          $t2, 0x3C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X3C);
    skip_3:
    // 0x151165F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151165FC: bltzl       $v0, L_15116684
    if (SIGNED(ctx->r2) < 0) {
        // 0x15116600: lw          $t2, 0x3C($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X3C);
            goto L_15116684;
    }
    goto skip_4;
    // 0x15116600: lw          $t2, 0x3C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X3C);
    skip_4:
    // 0x15116604: bne         $a0, $zero, L_15116628
    if (ctx->r4 != 0) {
        // 0x15116608: nop
    
            goto L_15116628;
    }
    // 0x15116608: nop

    // 0x1511660C: bne         $v1, $zero, L_1511661C
    if (ctx->r3 != 0) {
        // 0x15116610: addiu       $t2, $zero, 0x14
        ctx->r10 = ADD32(0, 0X14);
            goto L_1511661C;
    }
    // 0x15116610: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x15116614: b           L_15116680
    // 0x15116618: sw          $t2, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r10;
        goto L_15116680;
    // 0x15116618: sw          $t2, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r10;
L_1511661C:
    // 0x1511661C: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x15116620: b           L_15116680
    // 0x15116624: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15116680;
    // 0x15116624: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15116628:
    // 0x15116628: b           L_15116680
    // 0x1511662C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15116680;
    // 0x1511662C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15116630:
    // 0x15116630: blezl       $v1, L_15116684
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15116634: lw          $t2, 0x3C($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X3C);
            goto L_15116684;
    }
    goto skip_5;
    // 0x15116634: lw          $t2, 0x3C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X3C);
    skip_5:
    // 0x15116638: blez        $v0, L_15116664
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1511663C: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_15116664;
    }
    // 0x1511663C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15116640: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15116644: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x15116648: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1511664C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x15116650: subu        $t4, $v1, $t3
    ctx->r12 = SUB32(ctx->r3, ctx->r11);
    // 0x15116654: bgtz        $t4, L_15116680
    if (SIGNED(ctx->r12) > 0) {
        // 0x15116658: sw          $t4, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r12;
            goto L_15116680;
    }
    // 0x15116658: sw          $t4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r12;
    // 0x1511665C: b           L_15116680
    // 0x15116660: sw          $t6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r14;
        goto L_15116680;
    // 0x15116660: sw          $t6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r14;
L_15116664:
    // 0x15116664: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x15116668: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1511666C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x15116670: subu        $t8, $v1, $t7
    ctx->r24 = SUB32(ctx->r3, ctx->r15);
    // 0x15116674: bgtz        $t8, L_15116680
    if (SIGNED(ctx->r24) > 0) {
        // 0x15116678: sw          $t8, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r24;
            goto L_15116680;
    }
    // 0x15116678: sw          $t8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r24;
    // 0x1511667C: sw          $t0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r8;
L_15116680:
    // 0x15116680: lw          $t2, 0x3C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X3C);
L_15116684:
    // 0x15116684: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x15116688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1511668C: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x15116690: or          $t4, $t3, $t1
    ctx->r12 = ctx->r11 | ctx->r9;
    // 0x15116694: jal         0x1511515C
    // 0x15116698: sw          $t4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r12;
    func_1511515C(rdram, ctx);
        goto after_1;
    // 0x15116698: sw          $t4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r12;
    after_1:
    // 0x1511669C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x151166A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151166A4: beql        $t5, $zero, L_15116878
    if (ctx->r13 == 0) {
        // 0x151166A8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_15116878;
    }
    goto skip_6;
    // 0x151166A8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_6:
    // 0x151166AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151166B0: nop

    // 0x151166B4: lwc1        $f14, 0x64($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X64);
    // 0x151166B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151166BC: lwc1        $f4, 0x2FC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2FC0);
    // 0x151166C0: abs.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = fabsf(ctx->f14.fl);
    // 0x151166C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151166C8: mul.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151166CC: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x151166D0: nop

    // 0x151166D4: bc1f        L_151166E0
    if (!c1cs) {
        // 0x151166D8: nop
    
            goto L_151166E0;
    }
    // 0x151166D8: nop

    // 0x151166DC: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
L_151166E0:
    // 0x151166E0: lwc1        $f6, 0x2FC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2FC4);
    // 0x151166E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151166E8: lwc1        $f10, 0x2FC8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2FC8);
    // 0x151166EC: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151166F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151166F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151166F8: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151166FC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x15116700: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x15116704: nop

    // 0x15116708: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x1511670C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x15116710: nop

    // 0x15116714: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x15116718: beql        $v0, $zero, L_15116768
    if (ctx->r2 == 0) {
        // 0x1511671C: mfc1        $v0, $f4
        ctx->r2 = (int32_t)ctx->f4.u32l;
            goto L_15116768;
    }
    goto skip_7;
    // 0x1511671C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    skip_7:
    // 0x15116720: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15116724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15116728: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x1511672C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x15116730: nop

    // 0x15116734: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15116738: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x1511673C: nop

    // 0x15116740: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x15116744: bne         $v0, $zero, L_1511675C
    if (ctx->r2 != 0) {
        // 0x15116748: nop
    
            goto L_1511675C;
    }
    // 0x15116748: nop

    // 0x1511674C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x15116750: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15116754: b           L_15116774
    // 0x15116758: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_15116774;
    // 0x15116758: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_1511675C:
    // 0x1511675C: b           L_15116774
    // 0x15116760: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_15116774;
    // 0x15116760: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x15116764: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
L_15116768:
    // 0x15116768: nop

    // 0x1511676C: bltz        $v0, L_1511675C
    if (SIGNED(ctx->r2) < 0) {
        // 0x15116770: nop
    
            goto L_1511675C;
    }
    // 0x15116770: nop

L_15116774:
    // 0x15116774: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x15116778: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1511677C: lhu         $a0, 0x74($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X74);
    // 0x15116780: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x15116784: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x15116788: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1511678C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15116790: bne         $a0, $zero, L_15116804
    if (ctx->r4 != 0) {
        // 0x15116794: sub.s       $f12, $f8, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
            goto L_15116804;
    }
    // 0x15116794: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15116798: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511679C: lwc1        $f18, 0x2FCC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2FCC);
    // 0x151167A0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x151167A4: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x151167A8: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    // 0x151167AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151167B0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x151167B4: bc1fl       L_15116878
    if (!c1cs) {
        // 0x151167B8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_15116878;
    }
    goto skip_8;
    // 0x151167B8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_8:
    // 0x151167BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151167C0: lh          $t1, 0x10($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X10);
    // 0x151167C4: trunc.w.s   $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x151167C8: addiu       $t4, $zero, 0x3E8
    ctx->r12 = ADD32(0, 0X3E8);
    // 0x151167CC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151167D0: lh          $t2, 0x12($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X12);
    // 0x151167D4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x151167D8: addiu       $t5, $zero, 0x1770
    ctx->r13 = ADD32(0, 0X1770);
    // 0x151167DC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151167E0: lh          $t3, 0x14($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X14);
    // 0x151167E4: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x151167E8: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x151167EC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x151167F0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x151167F4: jal         0x10010F88
    // 0x151167F8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    func_10010F88(rdram, ctx);
        goto after_2;
    // 0x151167F8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_2:
    // 0x151167FC: b           L_15116874
    // 0x15116800: sh          $v0, 0x74($s0)
    MEM_H(0X74, ctx->r16) = ctx->r2;
        goto L_15116874;
    // 0x15116800: sh          $v0, 0x74($s0)
    MEM_H(0X74, ctx->r16) = ctx->r2;
L_15116804:
    // 0x15116804: lwc1        $f6, 0x2FD0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2FD0);
    // 0x15116808: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x1511680C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15116810: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x15116814: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x15116818: bc1f        L_15116868
    if (!c1cs) {
        // 0x1511681C: nop
    
            goto L_15116868;
    }
    // 0x1511681C: nop

    // 0x15116820: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15116824: lh          $t0, 0x10($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X10);
    // 0x15116828: trunc.w.s   $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1511682C: addiu       $t3, $zero, 0xC8
    ctx->r11 = ADD32(0, 0XC8);
    // 0x15116830: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x15116834: lh          $t1, 0x12($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X12);
    // 0x15116838: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x1511683C: addiu       $t4, $zero, 0x7D0
    ctx->r12 = ADD32(0, 0X7D0);
    // 0x15116840: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15116844: lh          $t2, 0x14($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X14);
    // 0x15116848: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x1511684C: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15116850: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x15116854: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x15116858: jal         0x1000F91C
    // 0x1511685C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    func_1000F91C(rdram, ctx);
        goto after_3;
    // 0x1511685C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_3:
    // 0x15116860: b           L_15116878
    // 0x15116864: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_15116878;
    // 0x15116864: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15116868:
    // 0x15116868: jal         0x100111C8
    // 0x1511686C: nop

    func_100111C8(rdram, ctx);
        goto after_4;
    // 0x1511686C: nop

    after_4:
    // 0x15116870: sh          $zero, 0x74($s0)
    MEM_H(0X74, ctx->r16) = 0;
L_15116874:
    // 0x15116874: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15116878:
    // 0x15116878: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x1511687C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15116880: jr          $ra
    // 0x15116884: nop

    return;
    return;
    // 0x15116884: nop

;}
RECOMP_FUNC void func_150D1B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D1B40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150D1B44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150D1B48: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150D1B4C: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x150D1B50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D1B54: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x150D1B58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D1B5C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x150D1B60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D1B64: lwc1        $f8, 0x8E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X8E0);
    // 0x150D1B68: addiu       $v0, $t6, 0x28
    ctx->r2 = ADD32(ctx->r14, 0X28);
    // 0x150D1B6C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x150D1B70: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x150D1B74: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x150D1B78: lui         $a3, 0x42AC
    ctx->r7 = S32(0X42AC << 16);
    // 0x150D1B7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150D1B80: addiu       $a0, $t6, 0x30
    ctx->r4 = ADD32(ctx->r14, 0X30);
    // 0x150D1B84: addiu       $a2, $t6, 0x2C
    ctx->r6 = ADD32(ctx->r14, 0X2C);
    // 0x150D1B88: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x150D1B8C: jal         0x151467A4
    // 0x150D1B90: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_151467A4(rdram, ctx);
        goto after_0;
    // 0x150D1B90: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x150D1B94: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x150D1B98: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150D1B9C: addiu       $v1, $v1, -0x32E0
    ctx->r3 = ADD32(ctx->r3, -0X32E0);
    // 0x150D1BA0: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150D1BA4: lbu         $a1, 0x1($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X1);
    // 0x150D1BA8: lbu         $a2, 0x2($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X2);
    // 0x150D1BAC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150D1BB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150D1BB4: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x150D1BB8: jal         0x1515D4D4
    // 0x150D1BBC: nop

    func_1515D4D4(rdram, ctx);
        goto after_1;
    // 0x150D1BBC: nop

    after_1:
    // 0x150D1BC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150D1BC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150D1BC8: jr          $ra
    // 0x150D1BCC: nop

    return;
    return;
    // 0x150D1BCC: nop

;}
RECOMP_FUNC void func_150779A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150779A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150779AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150779B0: jal         0x15075650
    // 0x150779B4: nop

    func_15075650(rdram, ctx);
        goto after_0;
    // 0x150779B4: nop

    after_0:
    // 0x150779B8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150779BC: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x150779C0: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x150779C4: sb          $t6, 0x223($t7)
    MEM_B(0X223, ctx->r15) = ctx->r14;
    // 0x150779C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150779CC: jr          $ra
    // 0x150779D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x150779D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_15102884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15102884: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15102888: lbu         $t6, 0xAC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XAC);
    // 0x1510288C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15102890: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x15102894: bne         $t7, $zero, L_151028A4
    if (ctx->r15 != 0) {
        // 0x15102898: nop
    
            goto L_151028A4;
    }
    // 0x15102898: nop

    // 0x1510289C: jr          $ra
    // 0x151028A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151028A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151028A4:
    // 0x151028A4: jr          $ra
    // 0x151028A8: nop

    return;
    return;
    // 0x151028A8: nop

;}
RECOMP_FUNC void func_15022640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15022640: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15022644: addiu       $t6, $t6, 0x354A
    ctx->r14 = ADD32(ctx->r14, 0X354A);
    // 0x15022648: addu        $v1, $a1, $t6
    ctx->r3 = ADD32(ctx->r5, ctx->r14);
    // 0x1502264C: lbu         $a2, 0x0($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X0);
    // 0x15022650: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15022654: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x15022658: blez        $a2, L_15022690
    if (SIGNED(ctx->r6) <= 0) {
        // 0x1502265C: or          $a3, $a2, $zero
        ctx->r7 = ctx->r6 | 0;
            goto L_15022690;
    }
    // 0x1502265C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x15022660: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x15022664: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15022668: addiu       $t8, $t8, 0x3550
    ctx->r24 = ADD32(ctx->r24, 0X3550);
    // 0x1502266C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x15022670: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
L_15022674:
    // 0x15022674: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x15022678: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1502267C: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x15022680: beq         $a0, $t9, L_150226B4
    if (ctx->r4 == ctx->r25) {
        // 0x15022684: nop
    
            goto L_150226B4;
    }
    // 0x15022684: nop

    // 0x15022688: bne         $at, $zero, L_15022674
    if (ctx->r1 != 0) {
        // 0x1502268C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_15022674;
    }
    // 0x1502268C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_15022690:
    // 0x15022690: sll         $t1, $a1, 4
    ctx->r9 = S32(ctx->r5 << 4);
    // 0x15022694: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x15022698: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x1502269C: addu        $t2, $t1, $a2
    ctx->r10 = ADD32(ctx->r9, ctx->r6);
    // 0x150226A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150226A4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x150226A8: sb          $a0, 0x3550($at)
    MEM_B(0X3550, ctx->r1) = ctx->r4;
    // 0x150226AC: addiu       $t3, $a2, 0x1
    ctx->r11 = ADD32(ctx->r6, 0X1);
    // 0x150226B0: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
L_150226B4:
    // 0x150226B4: jr          $ra
    // 0x150226B8: nop

    return;
    return;
    // 0x150226B8: nop

;}
RECOMP_FUNC void func_150CCA7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CCA7C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x150CCA80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150CCA84: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150CCA88: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x150CCA8C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x150CCA90: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150CCA94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150CCA98: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x150CCA9C: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x150CCAA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CCAA4: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150CCAA8: lwc1        $f6, 0x6DC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6DC);
    // 0x150CCAAC: addiu       $t6, $zero, 0x29E8
    ctx->r14 = ADD32(0, 0X29E8);
    // 0x150CCAB0: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x150CCAB4: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x150CCAB8: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x150CCABC: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x150CCAC0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x150CCAC4: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x150CCAC8: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    // 0x150CCACC: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x150CCAD0: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x150CCAD4: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x150CCAD8: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x150CCADC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x150CCAE0: sh          $t7, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r15;
    // 0x150CCAE4: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x150CCAE8: jal         0x150ADA20
    // 0x150CCAEC: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150CCAEC: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x150CCAF0: jal         0x150ADA68
    // 0x150CCAF4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150CCAF4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x150CCAF8: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x150CCAFC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x150CCB00: lh          $a0, 0xCA($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XCA);
    // 0x150CCB04: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    // 0x150CCB08: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x150CCB0C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150CCB10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CCB14: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150CCB18: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150CCB1C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150CCB20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CCB24: lwc1        $f4, 0x6E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6E0);
    // 0x150CCB28: mfhi        $t8
    ctx->r24 = hi;
    // 0x150CCB2C: addiu       $a1, $t8, -0x3F
    ctx->r5 = ADD32(ctx->r24, -0X3F);
    // 0x150CCB30: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x150CCB34: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x150CCB38: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150CCB3C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150CCB40: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150CCB44: jal         0x15143794
    // 0x150CCB48: nop

    func_15143794(rdram, ctx);
        goto after_2;
    // 0x150CCB48: nop

    after_2:
    // 0x150CCB4C: jal         0x150ADA68
    // 0x150CCB50: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150CCB50: nop

    after_3:
    // 0x150CCB54: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x150CCB58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CCB5C: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x150CCB60: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150CCB64: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150CCB68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CCB6C: lwc1        $f4, 0x6E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6E4);
    // 0x150CCB70: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150CCB74: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150CCB78: jal         0x150ADA68
    // 0x150CCB7C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150CCB7C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x150CCB80: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x150CCB84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CCB88: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x150CCB8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150CCB90: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150CCB94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CCB98: lwc1        $f4, 0x6E8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6E8);
    // 0x150CCB9C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150CCBA0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150CCBA4: jal         0x150ADA20
    // 0x150CCBA8: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150CCBA8: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x150CCBAC: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x150CCBB0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CCBB4: mfhi        $t1
    ctx->r9 = hi;
    // 0x150CCBB8: addiu       $t2, $t1, 0x32
    ctx->r10 = ADD32(ctx->r9, 0X32);
    // 0x150CCBBC: jal         0x150ADA68
    // 0x150CCBC0: sh          $t2, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r10;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150CCBC0: sh          $t2, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r10;
    after_6:
    // 0x150CCBC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CCBC8: lwc1        $f8, 0x6EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6EC);
    // 0x150CCBCC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CCBD0: lwc1        $f16, 0x6F0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6F0);
    // 0x150CCBD4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150CCBD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CCBDC: lwc1        $f4, 0x6F4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6F4);
    // 0x150CCBE0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150CCBE4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150CCBE8: jal         0x150ADA68
    // 0x150CCBEC: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150CCBEC: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x150CCBF0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150CCBF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CCBF8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150CCBFC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150CCC00: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150CCC04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CCC08: lwc1        $f4, 0x6F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6F8);
    // 0x150CCC0C: sb          $zero, 0x80($sp)
    MEM_B(0X80, ctx->r29) = 0;
    // 0x150CCC10: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x150CCC14: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150CCC18: mul.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150CCC1C: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x150CCC20: jal         0x150ADA20
    // 0x150CCC24: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150CCC24: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x150CCC28: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x150CCC2C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CCC30: lbu         $t9, 0xE3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XE3);
    // 0x150CCC34: mfhi        $t3
    ctx->r11 = hi;
    // 0x150CCC38: addiu       $t4, $t3, 0x9B
    ctx->r12 = ADD32(ctx->r11, 0X9B);
    // 0x150CCC3C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x150CCC40: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150CCC44: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x150CCC48: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x150CCC4C: sb          $t4, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r12;
    // 0x150CCC50: sb          $t5, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r13;
    // 0x150CCC54: sb          $zero, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = 0;
    // 0x150CCC58: sb          $zero, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = 0;
    // 0x150CCC5C: sb          $zero, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = 0;
    // 0x150CCC60: sb          $zero, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = 0;
    // 0x150CCC64: sb          $zero, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = 0;
    // 0x150CCC68: sb          $zero, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = 0;
    // 0x150CCC6C: sb          $zero, 0x90($sp)
    MEM_B(0X90, ctx->r29) = 0;
    // 0x150CCC70: sb          $t6, 0x92($sp)
    MEM_B(0X92, ctx->r29) = ctx->r14;
    // 0x150CCC74: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x150CCC78: sb          $zero, 0x98($sp)
    MEM_B(0X98, ctx->r29) = 0;
    // 0x150CCC7C: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x150CCC80: sh          $t8, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r24;
    // 0x150CCC84: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x150CCC88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150CCC8C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150CCC90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150CCC94: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150CCC98: jal         0x15132A4C
    // 0x150CCC9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15132A4C(rdram, ctx);
        goto after_9;
    // 0x150CCC9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_9:
    // 0x150CCCA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CCCA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150CCCA8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x150CCCAC: jr          $ra
    // 0x150CCCB0: nop

    return;
    return;
    // 0x150CCCB0: nop

;}
RECOMP_FUNC void func_150D02B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D02B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150D02B8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x150D02BC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x150D02C0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150D02C4: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x150D02C8: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150D02CC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x150D02D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150D02D4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x150D02D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150D02DC: lbu         $t0, 0x47($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X47);
    // 0x150D02E0: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x150D02E4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150D02E8: sh          $zero, 0x30($sp)
    MEM_H(0X30, ctx->r29) = 0;
    // 0x150D02EC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150D02F0: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x150D02F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150D02F8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x150D02FC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150D0300: jal         0x150CFF10
    // 0x150D0304: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_150CFF10(rdram, ctx);
        goto after_0;
    // 0x150D0304: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_0:
    // 0x150D0308: beq         $v0, $zero, L_150D031C
    if (ctx->r2 == 0) {
        // 0x150D030C: addiu       $a1, $sp, 0x2C
        ctx->r5 = ADD32(ctx->r29, 0X2C);
            goto L_150D031C;
    }
    // 0x150D030C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x150D0310: lw          $a0, 0x48($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X48);
    // 0x150D0314: jal         0x10022EC0
    // 0x150D0318: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150D0318: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_150D031C:
    // 0x150D031C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150D0320: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150D0324: jr          $ra
    // 0x150D0328: nop

    return;
    return;
    // 0x150D0328: nop

;}
RECOMP_FUNC void func_15033F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15033F0C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15033F10: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15033F14: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x15033F18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15033F1C: bnel        $t6, $at, L_15033F30
    if (ctx->r14 != ctx->r1) {
        // 0x15033F20: lw          $v1, 0x31C($a1)
        ctx->r3 = MEM_W(ctx->r5, 0X31C);
            goto L_15033F30;
    }
    goto skip_0;
    // 0x15033F20: lw          $v1, 0x31C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X31C);
    skip_0:
    // 0x15033F24: jr          $ra
    // 0x15033F28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15033F28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15033F2C: lw          $v1, 0x31C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X31C);
L_15033F30:
    // 0x15033F30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15033F34: beq         $v1, $zero, L_15033F68
    if (ctx->r3 == 0) {
        // 0x15033F38: nop
    
            goto L_15033F68;
    }
    // 0x15033F38: nop

    // 0x15033F3C: lbu         $t7, 0x78($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X78);
    // 0x15033F40: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x15033F44: beq         $t7, $at, L_15033F68
    if (ctx->r15 == ctx->r1) {
        // 0x15033F48: nop
    
            goto L_15033F68;
    }
    // 0x15033F48: nop

    // 0x15033F4C: lbu         $t8, 0x11A($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X11A);
    // 0x15033F50: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15033F54: beq         $t8, $at, L_15033F68
    if (ctx->r24 == ctx->r1) {
        // 0x15033F58: nop
    
            goto L_15033F68;
    }
    // 0x15033F58: nop

    // 0x15033F5C: sb          $zero, 0x11A($v1)
    MEM_B(0X11A, ctx->r3) = 0;
    // 0x15033F60: jr          $ra
    // 0x15033F64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15033F64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15033F68:
    // 0x15033F68: jr          $ra
    // 0x15033F6C: nop

    return;
    return;
    // 0x15033F6C: nop

;}
RECOMP_FUNC void func_15040D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040D90: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040D94: jr          $ra
    // 0x15040D98: nop

    return;
    return;
    // 0x15040D98: nop

;}
RECOMP_FUNC void func_151E4DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E4DC4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x151E4DC8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4DCC: sb          $t6, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r14;
    // 0x151E4DD0: jr          $ra
    // 0x151E4DD4: nop

    return;
    return;
    // 0x151E4DD4: nop

;}
RECOMP_FUNC void func_15084488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15084488: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1508448C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x15084490: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15084494: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15084498: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x1508449C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150844A0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150844A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150844A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x150844AC: lbu         $s0, 0x4($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X4);
    // 0x150844B0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150844B4: beq         $s0, $at, L_1508453C
    if (ctx->r16 == ctx->r1) {
        // 0x150844B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1508453C;
    }
    // 0x150844B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150844BC: jal         0x1503D774
    // 0x150844C0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_1503D774(rdram, ctx);
        goto after_0;
    // 0x150844C0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x150844C4: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x150844C8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150844CC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x150844D0: lw          $v0, 0x1C90($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C90);
    // 0x150844D4: addiu       $v1, $s1, 0x4
    ctx->r3 = ADD32(ctx->r17, 0X4);
    // 0x150844D8: lbu         $s2, 0x4($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X4);
    // 0x150844DC: bnel        $s2, $zero, L_150844F0
    if (ctx->r18 != 0) {
        // 0x150844E0: lbu         $t7, 0x5($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0X5);
            goto L_150844F0;
    }
    goto skip_0;
    // 0x150844E0: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
    skip_0:
    // 0x150844E4: b           L_15084500
    // 0x150844E8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_15084500;
    // 0x150844E8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x150844EC: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
L_150844F0:
    // 0x150844F0: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x150844F4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x150844F8: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x150844FC: lw          $v1, 0x6CAC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6CAC);
L_15084500:
    // 0x15084500: lbu         $t9, 0x38($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X38);
    // 0x15084504: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15084508: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x1508450C: addu        $s2, $s2, $t9
    ctx->r18 = ADD32(ctx->r18, ctx->r25);
    // 0x15084510: blezl       $s2, L_15084540
    if (SIGNED(ctx->r18) <= 0) {
        // 0x15084514: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15084540;
    }
    goto skip_1;
    // 0x15084514: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
L_15084518:
    // 0x15084518: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x1508451C: jal         0x1503D774
    // 0x15084520: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_1503D774(rdram, ctx);
        goto after_1;
    // 0x15084520: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x15084524: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x15084528: jal         0x1503D660
    // 0x1508452C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_1503D660(rdram, ctx);
        goto after_2;
    // 0x1508452C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x15084530: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15084534: bne         $s1, $s2, L_15084518
    if (ctx->r17 != ctx->r18) {
        // 0x15084538: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15084518;
    }
    // 0x15084538: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1508453C:
    // 0x1508453C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15084540:
    // 0x15084540: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15084544: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15084548: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1508454C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x15084550: jr          $ra
    // 0x15084554: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15084554: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1515B5F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515B5F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1515B5F8: sll         $a2, $a0, 16
    ctx->r6 = S32(ctx->r4 << 16);
    // 0x1515B5FC: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x1515B600: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1515B604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515B608: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1515B60C: sh          $a2, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r6;
    // 0x1515B610: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x1515B614: jal         0x1515572C
    // 0x1515B618: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_1515572C(rdram, ctx);
        goto after_0;
    // 0x1515B618: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x1515B61C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515B620: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1515B624: jr          $ra
    // 0x1515B628: nop

    return;
    return;
    // 0x1515B628: nop

;}
RECOMP_FUNC void func_1506A760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506A760: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1506A764: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1506A768: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1506A76C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506A770: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1506A774: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1506A778: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1506A77C: addiu       $a2, $a2, 0x1570
    ctx->r6 = ADD32(ctx->r6, 0X1570);
    // 0x1506A780: addiu       $a1, $a1, 0x1560
    ctx->r5 = ADD32(ctx->r5, 0X1560);
    // 0x1506A784: jal         0x151BBA9C
    // 0x1506A788: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151BBA9C(rdram, ctx);
        goto after_0;
    // 0x1506A788: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x1506A78C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1506A790: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1506A794: jr          $ra
    // 0x1506A798: nop

    return;
    return;
    // 0x1506A798: nop

;}
RECOMP_FUNC void func_151058B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151058B4: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x151058B8: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x151058BC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x151058C0: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x151058C4: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x151058C8: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x151058CC: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x151058D0: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x151058D4: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x151058D8: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x151058DC: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x151058E0: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x151058E4: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x151058E8: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x151058EC: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x151058F0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x151058F4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x151058F8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x151058FC: jal         0x151464B8
    // 0x15105900: lw          $a0, 0x30($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X30);
    func_151464B8(rdram, ctx);
        goto after_0;
    // 0x15105900: lw          $a0, 0x30($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X30);
    after_0:
    // 0x15105904: bnel        $v0, $zero, L_15105B84
    if (ctx->r2 != 0) {
        // 0x15105908: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_15105B84;
    }
    goto skip_0;
    // 0x15105908: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_0:
    // 0x1510590C: jal         0x150ADA68
    // 0x15105910: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x15105910: nop

    after_1:
    // 0x15105914: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15105918: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1510591C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15105920: lwc1        $f4, 0x23EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X23EC);
    // 0x15105924: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15105928: lwc1        $f8, 0x23F0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X23F0);
    // 0x1510592C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15105930: addiu       $s4, $s3, 0x28
    ctx->r20 = ADD32(ctx->r19, 0X28);
    // 0x15105934: lwc1        $f16, 0x4($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X4);
    // 0x15105938: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x1510593C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x15105940: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x15105944: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x15105948: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1510594C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x15105950: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x15105954: addiu       $t2, $zero, 0x61
    ctx->r10 = ADD32(0, 0X61);
    // 0x15105958: mul.s       $f20, $f10, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1510595C: addiu       $t3, $zero, 0xF2
    ctx->r11 = ADD32(0, 0XF2);
    // 0x15105960: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15105964: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15105968: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1510596C: addiu       $fp, $sp, 0x88
    ctx->r30 = ADD32(ctx->r29, 0X88);
    // 0x15105970: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x15105974: nop

    // 0x15105978: bc1fl       L_15105B84
    if (!c1cs) {
        // 0x1510597C: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_15105B84;
    }
    goto skip_1;
    // 0x1510597C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_1:
    // 0x15105980: sh          $t6, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = ctx->r14;
    // 0x15105984: sw          $t7, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r15;
    // 0x15105988: sb          $t2, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r10;
    // 0x1510598C: sb          $t3, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r11;
    // 0x15105990: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15105994: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15105998: sb          $t8, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r24;
    // 0x1510599C: sb          $t9, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r25;
    // 0x151059A0: sb          $t0, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r8;
    // 0x151059A4: sb          $t1, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = ctx->r9;
    // 0x151059A8: sb          $t4, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r12;
    // 0x151059AC: sb          $t5, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r13;
    // 0x151059B0: sb          $t6, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r14;
    // 0x151059B4: sb          $t7, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r15;
    // 0x151059B8: lui         $t2, 0x20
    ctx->r10 = S32(0X20 << 16);
    // 0x151059BC: lui         $t3, 0x6
    ctx->r11 = S32(0X6 << 16);
    // 0x151059C0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151059C4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151059C8: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x151059CC: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x151059D0: ori         $t2, $t2, 0x5
    ctx->r10 = ctx->r10 | 0X5;
    // 0x151059D4: ori         $t3, $t3, 0x600
    ctx->r11 = ctx->r11 | 0X600;
    // 0x151059D8: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x151059DC: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x151059E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151059E4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151059E8: sb          $t8, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r24;
    // 0x151059EC: sb          $t9, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r25;
    // 0x151059F0: sb          $t0, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r8;
    // 0x151059F4: sb          $t1, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r9;
    // 0x151059F8: sw          $t2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r10;
    // 0x151059FC: sw          $t3, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r11;
    // 0x15105A00: sh          $t4, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r12;
    // 0x15105A04: sh          $t5, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r13;
    // 0x15105A08: sh          $t6, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r14;
    // 0x15105A0C: sb          $zero, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = 0;
    // 0x15105A10: swc1        $f22, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f22.u32l;
    // 0x15105A14: sb          $t7, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = ctx->r15;
    // 0x15105A18: sb          $zero, 0xC9($sp)
    MEM_B(0XC9, ctx->r29) = 0;
    // 0x15105A1C: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x15105A20: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x15105A24: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x15105A28: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x15105A2C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x15105A30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15105A34: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x15105A38: lwc1        $f26, 0x23F4($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X23F4);
    // 0x15105A3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15105A40: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15105A44: lwc1        $f24, 0x23F8($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X23F8);
    // 0x15105A48: addiu       $s7, $sp, 0x8C
    ctx->r23 = ADD32(ctx->r29, 0X8C);
    // 0x15105A4C: addiu       $s6, $sp, 0xD4
    ctx->r22 = ADD32(ctx->r29, 0XD4);
    // 0x15105A50: addiu       $s5, $zero, 0x65
    ctx->r21 = ADD32(0, 0X65);
    // 0x15105A54: addiu       $s2, $sp, 0xCC
    ctx->r18 = ADD32(ctx->r29, 0XCC);
    // 0x15105A58: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
L_15105A5C:
    // 0x15105A5C: jal         0x150ADA20
    // 0x15105A60: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15105A60: nop

    after_2:
    // 0x15105A64: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x15105A68: mfhi        $t0
    ctx->r8 = hi;
    // 0x15105A6C: addiu       $t1, $t0, 0x9B
    ctx->r9 = ADD32(ctx->r8, 0X9B);
    // 0x15105A70: bne         $s5, $zero, L_15105A7C
    if (ctx->r21 != 0) {
        // 0x15105A74: nop
    
            goto L_15105A7C;
    }
    // 0x15105A74: nop

    // 0x15105A78: break       7
    do_break(353393272);
L_15105A7C:
    // 0x15105A7C: sb          $t1, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r9;
    // 0x15105A80: jal         0x150ADA20
    // 0x15105A84: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15105A84: nop

    after_3:
    // 0x15105A88: andi        $t2, $v0, 0x3
    ctx->r10 = ctx->r2 & 0X3;
    // 0x15105A8C: addiu       $t3, $t2, 0x3
    ctx->r11 = ADD32(ctx->r10, 0X3);
    // 0x15105A90: sb          $t3, 0xE1($sp)
    MEM_B(0XE1, ctx->r29) = ctx->r11;
    // 0x15105A94: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x15105A98: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x15105A9C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15105AA0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x15105AA4: jal         0x151432BC
    // 0x15105AA8: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    func_151432BC(rdram, ctx);
        goto after_4;
    // 0x15105AA8: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_4:
    // 0x15105AAC: jal         0x150ADA20
    // 0x15105AB0: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15105AB0: nop

    after_5:
    // 0x15105AB4: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x15105AB8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15105ABC: mfhi        $t4
    ctx->r12 = hi;
    // 0x15105AC0: addiu       $t5, $t4, 0x1E
    ctx->r13 = ADD32(ctx->r12, 0X1E);
    // 0x15105AC4: jal         0x150ADA68
    // 0x15105AC8: sh          $t5, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = ctx->r13;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x15105AC8: sh          $t5, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = ctx->r13;
    after_6:
    // 0x15105ACC: mul.s       $f6, $f0, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x15105AD0: add.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f26.fl;
    // 0x15105AD4: jal         0x150ADA20
    // 0x15105AD8: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15105AD8: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x15105ADC: jal         0x150ADA20
    // 0x15105AE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x15105AE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_8:
    // 0x15105AE4: jal         0x150ADA68
    // 0x15105AE8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x15105AE8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_9:
    // 0x15105AEC: mul.s       $f18, $f0, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x15105AF0: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x15105AF4: divu        $zero, $s1, $at
    lo = S32(U32(ctx->r17) / U32(ctx->r1)); hi = S32(U32(ctx->r17) % U32(ctx->r1));
    // 0x15105AF8: add.s       $f18, $f18, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f30.fl;
    // 0x15105AFC: mfhi        $a1
    ctx->r5 = hi;
    // 0x15105B00: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x15105B04: addiu       $a1, $a1, -0x36
    ctx->r5 = ADD32(ctx->r5, -0X36);
    // 0x15105B08: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x15105B0C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x15105B10: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x15105B14: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15105B18: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15105B1C: jal         0x15143794
    // 0x15105B20: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    func_15143794(rdram, ctx);
        goto after_10;
    // 0x15105B20: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    after_10:
    // 0x15105B24: jal         0x150ADA68
    // 0x15105B28: nop

    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x15105B28: nop

    after_11:
    // 0x15105B2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15105B30: lwc1        $f18, 0x23FC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X23FC);
    // 0x15105B34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15105B38: lwc1        $f6, 0x2400($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2400);
    // 0x15105B3C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15105B40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15105B44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15105B48: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    // 0x15105B4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15105B50: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15105B54: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x15105B58: lbu         $t0, 0xC($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0XC);
    // 0x15105B5C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x15105B60: lbu         $t1, 0x1($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X1);
    // 0x15105B64: jal         0x1515C2F0
    // 0x15105B68: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_1515C2F0(rdram, ctx);
        goto after_12;
    // 0x15105B68: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_12:
    // 0x15105B6C: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
    // 0x15105B70: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x15105B74: nop

    // 0x15105B78: bc1t        L_15105A5C
    if (c1cs) {
        // 0x15105B7C: nop
    
            goto L_15105A5C;
    }
    // 0x15105B7C: nop

    // 0x15105B80: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_15105B84:
    // 0x15105B84: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x15105B88: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x15105B8C: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x15105B90: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x15105B94: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x15105B98: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x15105B9C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x15105BA0: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x15105BA4: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x15105BA8: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x15105BAC: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x15105BB0: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x15105BB4: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x15105BB8: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x15105BBC: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x15105BC0: jr          $ra
    // 0x15105BC4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    return;
    // 0x15105BC4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_151011E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151011E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151011EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151011F0: lw          $v0, 0x124($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X124);
    // 0x151011F4: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x151011F8: jal         0x1513CA6C
    // 0x151011FC: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    func_1513CA6C(rdram, ctx);
        goto after_0;
    // 0x151011FC: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    after_0:
    // 0x15101200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15101204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15101208: jr          $ra
    // 0x1510120C: nop

    return;
    return;
    // 0x1510120C: nop

;}
RECOMP_FUNC void func_1507B2CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B2CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507B2D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B2D4: jal         0x1507A3E8
    // 0x1507B2D8: nop

    func_1507A3E8(rdram, ctx);
        goto after_0;
    // 0x1507B2D8: nop

    after_0:
    // 0x1507B2DC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507B2E0: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1507B2E4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x1507B2E8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B2EC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507B2F0: jal         0x1506E46C
    // 0x1507B2F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506E46C(rdram, ctx);
        goto after_1;
    // 0x1507B2F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x1507B2F8: beq         $v0, $zero, L_1507B308
    if (ctx->r2 == 0) {
        // 0x1507B2FC: addiu       $a0, $zero, 0x12C
        ctx->r4 = ADD32(0, 0X12C);
            goto L_1507B308;
    }
    // 0x1507B2FC: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1507B300: jal         0x1506BA4C
    // 0x1507B304: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    func_1506BA4C(rdram, ctx);
        goto after_2;
    // 0x1507B304: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    after_2:
L_1507B308:
    // 0x1507B308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507B30C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507B310: jr          $ra
    // 0x1507B314: nop

    return;
    return;
    // 0x1507B314: nop

;}
RECOMP_FUNC void func_15146A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15146A98: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15146A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15146AA0: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x15146AA4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x15146AA8: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x15146AAC: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x15146AB0: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x15146AB4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x15146AB8: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x15146ABC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15146AC0: beql        $t7, $zero, L_15146BAC
    if (ctx->r15 == 0) {
        // 0x15146AC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15146BAC;
    }
    goto skip_0;
    // 0x15146AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15146AC8: jal         0x15146890
    // 0x15146ACC: lbu         $a3, 0x6F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X6F);
    func_15146890(rdram, ctx);
        goto after_0;
    // 0x15146ACC: lbu         $a3, 0x6F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X6F);
    after_0:
    // 0x15146AD0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x15146AD4: addiu       $t9, $zero, 0x16
    ctx->r25 = ADD32(0, 0X16);
    // 0x15146AD8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15146ADC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15146AE0: addiu       $t1, $sp, 0x5C
    ctx->r9 = ADD32(ctx->r29, 0X5C);
    // 0x15146AE4: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x15146AE8: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x15146AEC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15146AF0: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x15146AF4: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x15146AF8: addiu       $t6, $zero, -0x14
    ctx->r14 = ADD32(0, -0X14);
    // 0x15146AFC: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x15146B00: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x15146B04: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x15146B08: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x15146B0C: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x15146B10: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x15146B14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15146B18: lwc1        $f4, 0x5708($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5708);
    // 0x15146B1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15146B20: lwc1        $f6, 0x570C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X570C);
    // 0x15146B24: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x15146B28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15146B2C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x15146B30: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15146B34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15146B38: lwc1        $f16, 0x5710($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5710);
    // 0x15146B3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15146B40: lwc1        $f18, 0x5714($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5714);
    // 0x15146B44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15146B48: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x15146B4C: lwc1        $f4, 0x5718($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5718);
    // 0x15146B50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15146B54: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x15146B58: lwc1        $f6, 0x571C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X571C);
    // 0x15146B5C: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x15146B60: sh          $zero, 0x34($sp)
    MEM_H(0X34, ctx->r29) = 0;
    // 0x15146B64: sh          $t5, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r13;
    // 0x15146B68: sh          $t6, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r14;
    // 0x15146B6C: sh          $t7, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r15;
    // 0x15146B70: sb          $t8, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r24;
    // 0x15146B74: sh          $t9, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r25;
    // 0x15146B78: sh          $t3, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r11;
    // 0x15146B7C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15146B80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15146B84: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15146B88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15146B8C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x15146B90: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x15146B94: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x15146B98: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x15146B9C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x15146BA0: jal         0x15150F90
    // 0x15146BA4: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    func_15150F90(rdram, ctx);
        goto after_1;
    // 0x15146BA4: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x15146BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15146BAC:
    // 0x15146BAC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x15146BB0: jr          $ra
    // 0x15146BB4: nop

    return;
    return;
    // 0x15146BB4: nop

;}
RECOMP_FUNC void func_15170034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15170034: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15170038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1517003C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15170040: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15170044: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15170048: andi        $t6, $a0, 0x40
    ctx->r14 = ctx->r4 & 0X40;
    // 0x1517004C: beq         $t6, $zero, L_1517005C
    if (ctx->r14 == 0) {
        // 0x15170050: addiu       $a1, $zero, 0x7F
        ctx->r5 = ADD32(0, 0X7F);
            goto L_1517005C;
    }
    // 0x15170050: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    // 0x15170054: b           L_1517005C
    // 0x15170058: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
        goto L_1517005C;
    // 0x15170058: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
L_1517005C:
    // 0x1517005C: jal         0x150ADA20
    // 0x15170060: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15170060: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x15170064: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x15170068: and         $v1, $v0, $a1
    ctx->r3 = ctx->r2 & ctx->r5;
    // 0x1517006C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x15170070: jal         0x150489B0
    // 0x15170074: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    func_150489B0(rdram, ctx);
        goto after_1;
    // 0x15170074: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    after_1:
    // 0x15170078: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x1517007C: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x15170080: jal         0x15048A40
    // 0x15170084: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    func_15048A40(rdram, ctx);
        goto after_2;
    // 0x15170084: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    after_2:
    // 0x15170088: jal         0x150ADA20
    // 0x1517008C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1517008C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x15170090: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x15170094: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x15170098: jal         0x150489B0
    // 0x1517009C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    func_150489B0(rdram, ctx);
        goto after_4;
    // 0x1517009C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    after_4:
    // 0x151700A0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x151700A4: jal         0x15048A40
    // 0x151700A8: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    func_15048A40(rdram, ctx);
        goto after_5;
    // 0x151700A8: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    after_5:
    // 0x151700AC: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x151700B0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x151700B4: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x151700B8: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x151700BC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151700C0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x151700C4: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x151700C8: swc1        $f8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f8.u32l;
    // 0x151700CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151700D0: jr          $ra
    // 0x151700D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151700D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15164134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15164134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15164138: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1516413C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15164140: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15164144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15164148: bne         $a2, $zero, L_15164184
    if (ctx->r6 != 0) {
        // 0x1516414C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_15164184;
    }
    // 0x1516414C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x15164150: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x15164154: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x15164158: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1516415C: beq         $v1, $t7, L_15164174
    if (ctx->r3 == ctx->r15) {
        // 0x15164160: nop
    
            goto L_15164174;
    }
    // 0x15164160: nop

    // 0x15164164: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x15164168: lbu         $t9, 0x4($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X4);
    // 0x1516416C: bnel        $t8, $t9, L_151641FC
    if (ctx->r24 != ctx->r25) {
        // 0x15164170: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151641FC;
    }
    goto skip_0;
    // 0x15164170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_15164174:
    // 0x15164174: jal         0x1516972C
    // 0x15164178: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15164178: nop

    after_0:
    // 0x1516417C: b           L_151641FC
    // 0x15164180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151641FC;
    // 0x15164180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15164184:
    // 0x15164184: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x15164188: bne         $v0, $at, L_151641D4
    if (ctx->r2 != ctx->r1) {
        // 0x1516418C: addiu       $v0, $a0, 0x18
        ctx->r2 = ADD32(ctx->r4, 0X18);
            goto L_151641D4;
    }
    // 0x1516418C: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x15164190: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x15164194: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x15164198: bnel        $v1, $a2, L_151641B8
    if (ctx->r3 != ctx->r6) {
        // 0x1516419C: lw          $t2, 0x4($a1)
        ctx->r10 = MEM_W(ctx->r5, 0X4);
            goto L_151641B8;
    }
    goto skip_1;
    // 0x1516419C: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
    skip_1:
    // 0x151641A0: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x151641A4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x151641A8: lbu         $t1, 0x9($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X9);
    // 0x151641AC: b           L_151641F8
    // 0x151641B0: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
        goto L_151641F8;
    // 0x151641B0: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x151641B4: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
L_151641B8:
    // 0x151641B8: bnel        $t2, $a2, L_151641FC
    if (ctx->r10 != ctx->r6) {
        // 0x151641BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151641FC;
    }
    goto skip_2;
    // 0x151641BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x151641C0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x151641C4: lbu         $t3, 0x8($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X8);
    // 0x151641C8: sb          $t3, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r11;
    // 0x151641CC: b           L_151641FC
    // 0x151641D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151641FC;
    // 0x151641D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151641D4:
    // 0x151641D4: lbu         $t4, 0x3D($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X3D);
    // 0x151641D8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151641DC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x151641E0: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x151641E4: lw          $v0, -0x4C84($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4C84);
    // 0x151641E8: beql        $v0, $zero, L_151641FC
    if (ctx->r2 == 0) {
        // 0x151641EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151641FC;
    }
    goto skip_3;
    // 0x151641EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x151641F0: jalr        $v0
    // 0x151641F4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x151641F4: nop

    after_1:
L_151641F8:
    // 0x151641F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151641FC:
    // 0x151641FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15164200: jr          $ra
    // 0x15164204: nop

    return;
    return;
    // 0x15164204: nop

;}
RECOMP_FUNC void func_150D22F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D22F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150D22F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150D22FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150D2300: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x150D2304: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x150D2308: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150D230C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150D2310: lbu         $t7, 0x28($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X28);
    // 0x150D2314: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x150D2318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150D231C: bne         $t7, $at, L_150D2348
    if (ctx->r15 != ctx->r1) {
        // 0x150D2320: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_150D2348;
    }
    // 0x150D2320: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150D2324: lh          $t9, 0x2A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2A);
    // 0x150D2328: lbu         $a1, 0x3C($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X3C);
    // 0x150D232C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150D2330: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150D2334: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150D2338: jal         0x1517F08C
    // 0x150D233C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_1517F08C(rdram, ctx);
        goto after_0;
    // 0x150D233C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_0:
    // 0x150D2340: b           L_150D2360
    // 0x150D2344: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_150D2360;
    // 0x150D2344: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_150D2348:
    // 0x150D2348: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x150D234C: lbu         $a1, 0x3D($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X3D);
    // 0x150D2350: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150D2354: jal         0x1517F08C
    // 0x150D2358: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_1517F08C(rdram, ctx);
        goto after_1;
    // 0x150D2358: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_1:
    // 0x150D235C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_150D2360:
    // 0x150D2360: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150D2364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150D2368: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150D236C: jr          $ra
    // 0x150D2370: nop

    return;
    return;
    // 0x150D2370: nop

;}
RECOMP_FUNC void func_151036B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151036B4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x151036B8: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x151036BC: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x151036C0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x151036C4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x151036C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151036CC: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x151036D0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x151036D4: addiu       $t6, $t6, 0x2350
    ctx->r14 = ADD32(ctx->r14, 0X2350);
    // 0x151036D8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x151036DC: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x151036E0: addiu       $t0, $t0, 0x2354
    ctx->r8 = ADD32(ctx->r8, 0X2354);
    // 0x151036E4: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x151036E8: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x151036EC: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x151036F0: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x151036F4: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x151036F8: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x151036FC: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x15103700: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x15103704: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x15103708: addiu       $t8, $sp, 0x3C
    ctx->r24 = ADD32(ctx->r29, 0X3C);
    // 0x1510370C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15103710: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x15103714: lw          $t2, 0x4($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X4);
    // 0x15103718: addiu       $t0, $zero, -0x40
    ctx->r8 = ADD32(0, -0X40);
    // 0x1510371C: addiu       $t3, $zero, 0x5D
    ctx->r11 = ADD32(0, 0X5D);
    // 0x15103720: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x15103724: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x15103728: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x1510372C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x15103730: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x15103734: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x15103738: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1510373C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15103740: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15103744: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15103748: lwc1        $f8, 0x2358($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2358);
    // 0x1510374C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15103750: lwc1        $f10, 0x235C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X235C);
    // 0x15103754: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15103758: lwc1        $f16, 0x2360($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2360);
    // 0x1510375C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15103760: lwc1        $f18, 0x2364($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2364);
    // 0x15103764: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15103768: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x1510376C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x15103770: lwc1        $f4, 0x2368($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2368);
    // 0x15103774: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15103778: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x1510377C: lbu         $t6, 0x77($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X77);
    // 0x15103780: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15103784: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x15103788: sh          $t1, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r9;
    // 0x1510378C: sh          $t0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r8;
    // 0x15103790: sh          $t3, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r11;
    // 0x15103794: sh          $t4, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r12;
    // 0x15103798: sh          $t5, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r13;
    // 0x1510379C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151037A0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x151037A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151037A8: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x151037AC: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x151037B0: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x151037B4: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x151037B8: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x151037BC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x151037C0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x151037C4: jal         0x15152190
    // 0x151037C8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_15152190(rdram, ctx);
        goto after_0;
    // 0x151037C8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_0:
    // 0x151037CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151037D0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x151037D4: jr          $ra
    // 0x151037D8: nop

    return;
    return;
    // 0x151037D8: nop

;}
RECOMP_FUNC void func_1518C540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518C540: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x1518C544: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x1518C548: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x1518C54C: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x1518C550: bne         $at, $zero, L_1518C55C
    if (ctx->r1 != 0) {
        // 0x1518C554: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_1518C55C;
    }
    // 0x1518C554: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x1518C558: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_1518C55C:
    // 0x1518C55C: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x1518C560: bgez        $t7, L_1518C570
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1518C564: sb          $v1, 0x1B($v0)
        MEM_B(0X1B, ctx->r2) = ctx->r3;
            goto L_1518C570;
    }
    // 0x1518C564: sb          $v1, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r3;
    // 0x1518C568: jr          $ra
    // 0x1518C56C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1518C56C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518C570:
    // 0x1518C570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518C574: jr          $ra
    // 0x1518C578: nop

    return;
    return;
    // 0x1518C578: nop

;}
RECOMP_FUNC void func_1507AE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507AE94: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507AE98: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x1507AE9C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507AEA0: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507AEA4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507AEA8: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x1507AEAC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x1507AEB0: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x1507AEB4: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x1507AEB8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1507AEBC: sh          $t9, 0xD2($t0)
    MEM_H(0XD2, ctx->r8) = ctx->r25;
    // 0x1507AEC0: lbu         $t1, 0x1892($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1892);
    // 0x1507AEC4: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1507AEC8: lbu         $t3, 0x1893($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X1893);
    // 0x1507AECC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x1507AED0: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x1507AED4: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x1507AED8: sh          $t4, 0xD4($t5)
    MEM_H(0XD4, ctx->r13) = ctx->r12;
    // 0x1507AEDC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1507AEE0: lh          $t6, 0xD2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XD2);
    // 0x1507AEE4: lwc1        $f8, 0x14C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14C);
    // 0x1507AEE8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1507AEEC: nop

    // 0x1507AEF0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1507AEF4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1507AEF8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1507AEFC: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x1507AF00: nop

    // 0x1507AF04: sh          $t8, 0xD2($v0)
    MEM_H(0XD2, ctx->r2) = ctx->r24;
    // 0x1507AF08: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1507AF0C: lh          $t9, 0xD4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XD4);
    // 0x1507AF10: lwc1        $f6, 0x150($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X150);
    // 0x1507AF14: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x1507AF18: nop

    // 0x1507AF1C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1507AF20: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1507AF24: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1507AF28: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1507AF2C: nop

    // 0x1507AF30: sh          $t1, 0xD4($v0)
    MEM_H(0XD4, ctx->r2) = ctx->r9;
    // 0x1507AF34: jr          $ra
    // 0x1507AF38: nop

    return;
    return;
    // 0x1507AF38: nop

;}
RECOMP_FUNC void func_1509F6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509F6E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1509F6EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1509F6F0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1509F6F4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1509F6F8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x1509F6FC: jal         0x1505EEF4
    // 0x1509F700: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1505EEF4(rdram, ctx);
        goto after_0;
    // 0x1509F700: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x1509F704: bne         $v0, $zero, L_1509F714
    if (ctx->r2 != 0) {
        // 0x1509F708: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1509F714;
    }
    // 0x1509F708: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1509F70C: b           L_1509F76C
    // 0x1509F710: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509F76C;
    // 0x1509F710: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509F714:
    // 0x1509F714: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1509F718: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1509F71C: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1509F720: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1509F724: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1509F728: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1509F72C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1509F730: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x1509F734: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1509F738: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1509F73C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x1509F740: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1509F744: lhu         $a1, 0x3A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X3A);
    // 0x1509F748: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x1509F74C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1509F750: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1509F754: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x1509F758: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x1509F75C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x1509F760: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1509F764: jal         0x10010F88
    // 0x1509F768: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_10010F88(rdram, ctx);
        goto after_1;
    // 0x1509F768: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_1:
L_1509F76C:
    // 0x1509F76C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1509F770: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1509F774: jr          $ra
    // 0x1509F778: nop

    return;
    return;
    // 0x1509F778: nop

;}
RECOMP_FUNC void func_1507911C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507911C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15079120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15079124: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15079128: lbu         $t6, 0x1891($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1891);
    // 0x1507912C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15079130: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15079134: lbu         $t8, 0x1892($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1892);
    // 0x15079138: lbu         $v1, 0x1893($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1893);
    // 0x1507913C: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x15079140: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    // 0x15079144: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15079148: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x1507914C: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x15079150: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15079154: beq         $t1, $zero, L_15079164
    if (ctx->r9 == 0) {
        // 0x15079158: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_15079164;
    }
    // 0x15079158: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x1507915C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15079160: lbu         $v0, 0x3E78($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E78);
L_15079164:
    // 0x15079164: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x15079168: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x1507916C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15079170: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x15079174: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15079178: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x1507917C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15079180: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x15079184: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15079188: addiu       $t3, $t3, -0x3D30
    ctx->r11 = ADD32(ctx->r11, -0X3D30);
    // 0x1507918C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15079190: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x15079194: lwc1        $f4, 0x18($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X18);
    // 0x15079198: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x1507919C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150791A0: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x150791A4: nop

    // 0x150791A8: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x150791AC: beq         $t7, $zero, L_150791CC
    if (ctx->r15 == 0) {
        // 0x150791B0: sra         $a0, $t5, 16
        ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
            goto L_150791CC;
    }
    // 0x150791B0: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    // 0x150791B4: lwc1        $f8, 0x14($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X14);
    // 0x150791B8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150791BC: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x150791C0: nop

    // 0x150791C4: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x150791C8: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
L_150791CC:
    // 0x150791CC: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x150791D0: beq         $at, $zero, L_150791E0
    if (ctx->r1 == 0) {
        // 0x150791D4: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_150791E0;
    }
    // 0x150791D4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150791D8: jal         0x15075400
    // 0x150791DC: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x150791DC: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
L_150791E0:
    // 0x150791E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150791E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150791E8: jr          $ra
    // 0x150791EC: nop

    return;
    return;
    // 0x150791EC: nop

;}
RECOMP_FUNC void func_1511DD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511DD98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1511DD9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1511DDA0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1511DDA4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1511DDA8: addiu       $t6, $zero, 0x6590
    ctx->r14 = ADD32(0, 0X6590);
    // 0x1511DDAC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x1511DDB0: lhu         $t8, 0x54($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X54);
    // 0x1511DDB4: lbu         $v0, 0x4($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X4);
    // 0x1511DDB8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1511DDBC: addiu       $t9, $t8, -0x39
    ctx->r25 = ADD32(ctx->r24, -0X39);
    // 0x1511DDC0: sltiu       $at, $t9, 0x36
    ctx->r1 = ctx->r25 < 0X36 ? 1 : 0;
    // 0x1511DDC4: xori        $a3, $v0, 0x3B
    ctx->r7 = ctx->r2 ^ 0X3B;
    // 0x1511DDC8: xori        $a2, $v0, 0x80
    ctx->r6 = ctx->r2 ^ 0X80;
    // 0x1511DDCC: sltiu       $a3, $a3, 0x1
    ctx->r7 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x1511DDD0: beq         $at, $zero, L_1511DF3C
    if (ctx->r1 == 0) {
        // 0x1511DDD4: sltiu       $a2, $a2, 0x1
        ctx->r6 = ctx->r6 < 0X1 ? 1 : 0;
            goto L_1511DF3C;
    }
    // 0x1511DDD4: sltiu       $a2, $a2, 0x1
    ctx->r6 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x1511DDD8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1511DDDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511DDE0: addu        $at, $at, $t9
    gpr jr_addend_1511DDE8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x1511DDE4: lw          $t9, 0x3218($at)
    ctx->r25 = ADD32(ctx->r1, 0X3218);
    // 0x1511DDE8: jr          $t9
    // 0x1511DDEC: nop

    switch (jr_addend_1511DDE8 >> 2) {
        case 0: goto L_1511DDF0; break;
        case 1: goto L_1511DE40; break;
        case 2: goto L_1511DE74; break;
        case 3: goto L_1511DE7C; break;
        case 4: goto L_1511DE84; break;
        case 5: goto L_1511DE8C; break;
        case 6: goto L_1511DF3C; break;
        case 7: goto L_1511DF3C; break;
        case 8: goto L_1511DF3C; break;
        case 9: goto L_1511DF3C; break;
        case 10: goto L_1511DF3C; break;
        case 11: goto L_1511DF3C; break;
        case 12: goto L_1511DF3C; break;
        case 13: goto L_1511DE94; break;
        case 14: goto L_1511DE9C; break;
        case 15: goto L_1511DF3C; break;
        case 16: goto L_1511DF3C; break;
        case 17: goto L_1511DF3C; break;
        case 18: goto L_1511DF3C; break;
        case 19: goto L_1511DF3C; break;
        case 20: goto L_1511DF3C; break;
        case 21: goto L_1511DF3C; break;
        case 22: goto L_1511DF3C; break;
        case 23: goto L_1511DEA4; break;
        case 24: goto L_1511DE74; break;
        case 25: goto L_1511DEB8; break;
        case 26: goto L_1511DEC0; break;
        case 27: goto L_1511DF3C; break;
        case 28: goto L_1511DEA4; break;
        case 29: goto L_1511DEF8; break;
        case 30: goto L_1511DF20; break;
        case 31: goto L_1511DEB8; break;
        case 32: goto L_1511DF3C; break;
        case 33: goto L_1511DF3C; break;
        case 34: goto L_1511DF3C; break;
        case 35: goto L_1511DDF0; break;
        case 36: goto L_1511DDF0; break;
        case 37: goto L_1511DDF0; break;
        case 38: goto L_1511DF3C; break;
        case 39: goto L_1511DF3C; break;
        case 40: goto L_1511DF3C; break;
        case 41: goto L_1511DF3C; break;
        case 42: goto L_1511DF3C; break;
        case 43: goto L_1511DF30; break;
        case 44: goto L_1511DF30; break;
        case 45: goto L_1511DF3C; break;
        case 46: goto L_1511DF3C; break;
        case 47: goto L_1511DF3C; break;
        case 48: goto L_1511DF3C; break;
        case 49: goto L_1511DE7C; break;
        case 50: goto L_1511DE84; break;
        case 51: goto L_1511DF3C; break;
        case 52: goto L_1511DF20; break;
        case 53: goto L_1511DF20; break;
        default: switch_error(__func__, 0x1511DDE8, 0x800A3218);
    }
    // 0x1511DDEC: nop

L_1511DDF0:
    // 0x1511DDF0: beq         $a3, $zero, L_1511DE18
    if (ctx->r7 == 0) {
        // 0x1511DDF4: addiu       $a0, $zero, 0x542
        ctx->r4 = ADD32(0, 0X542);
            goto L_1511DE18;
    }
    // 0x1511DDF4: addiu       $a0, $zero, 0x542
    ctx->r4 = ADD32(0, 0X542);
    // 0x1511DDF8: addiu       $t0, $zero, 0x3E8
    ctx->r8 = ADD32(0, 0X3E8);
    // 0x1511DDFC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1511DE00: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x1511DE04: addiu       $a2, $zero, 0x6590
    ctx->r6 = ADD32(0, 0X6590);
    // 0x1511DE08: jal         0x10010630
    // 0x1511DE0C: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    func_10010630(rdram, ctx);
        goto after_0;
    // 0x1511DE0C: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_0:
    // 0x1511DE10: b           L_1511DF3C
    // 0x1511DE14: addiu       $v1, $zero, 0x2B0
    ctx->r3 = ADD32(0, 0X2B0);
        goto L_1511DF3C;
    // 0x1511DE14: addiu       $v1, $zero, 0x2B0
    ctx->r3 = ADD32(0, 0X2B0);
L_1511DE18:
    // 0x1511DE18: beq         $a2, $zero, L_1511DE38
    if (ctx->r6 == 0) {
        // 0x1511DE1C: addiu       $a0, $zero, 0x567
        ctx->r4 = ADD32(0, 0X567);
            goto L_1511DE38;
    }
    // 0x1511DE1C: addiu       $a0, $zero, 0x567
    ctx->r4 = ADD32(0, 0X567);
    // 0x1511DE20: addiu       $t1, $zero, 0x3E8
    ctx->r9 = ADD32(0, 0X3E8);
    // 0x1511DE24: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x1511DE28: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x1511DE2C: addiu       $a2, $zero, 0x6590
    ctx->r6 = ADD32(0, 0X6590);
    // 0x1511DE30: jal         0x10010630
    // 0x1511DE34: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    func_10010630(rdram, ctx);
        goto after_1;
    // 0x1511DE34: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_1:
L_1511DE38:
    // 0x1511DE38: b           L_1511DF3C
    // 0x1511DE3C: addiu       $v1, $zero, 0x2B0
    ctx->r3 = ADD32(0, 0X2B0);
        goto L_1511DF3C;
    // 0x1511DE3C: addiu       $v1, $zero, 0x2B0
    ctx->r3 = ADD32(0, 0X2B0);
L_1511DE40:
    // 0x1511DE40: beq         $a3, $zero, L_1511DE5C
    if (ctx->r7 == 0) {
        // 0x1511DE44: nop
    
            goto L_1511DE5C;
    }
    // 0x1511DE44: nop

    // 0x1511DE48: jal         0x150ADA20
    // 0x1511DE4C: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1511DE4C: nop

    after_2:
    // 0x1511DE50: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x1511DE54: b           L_1511DF3C
    // 0x1511DE58: addiu       $v1, $v1, 0x53E
    ctx->r3 = ADD32(ctx->r3, 0X53E);
        goto L_1511DF3C;
    // 0x1511DE58: addiu       $v1, $v1, 0x53E
    ctx->r3 = ADD32(ctx->r3, 0X53E);
L_1511DE5C:
    // 0x1511DE5C: beq         $a2, $zero, L_1511DE6C
    if (ctx->r6 == 0) {
        // 0x1511DE60: nop
    
            goto L_1511DE6C;
    }
    // 0x1511DE60: nop

    // 0x1511DE64: b           L_1511DF3C
    // 0x1511DE68: addiu       $v1, $zero, 0x567
    ctx->r3 = ADD32(0, 0X567);
        goto L_1511DF3C;
    // 0x1511DE68: addiu       $v1, $zero, 0x567
    ctx->r3 = ADD32(0, 0X567);
L_1511DE6C:
    // 0x1511DE6C: b           L_1511DF3C
    // 0x1511DE70: addiu       $v1, $zero, 0x60A
    ctx->r3 = ADD32(0, 0X60A);
        goto L_1511DF3C;
    // 0x1511DE70: addiu       $v1, $zero, 0x60A
    ctx->r3 = ADD32(0, 0X60A);
L_1511DE74:
    // 0x1511DE74: b           L_1511DF3C
    // 0x1511DE78: addiu       $v1, $zero, 0x181
    ctx->r3 = ADD32(0, 0X181);
        goto L_1511DF3C;
    // 0x1511DE78: addiu       $v1, $zero, 0x181
    ctx->r3 = ADD32(0, 0X181);
L_1511DE7C:
    // 0x1511DE7C: b           L_1511DF3C
    // 0x1511DE80: addiu       $v1, $zero, 0xB1
    ctx->r3 = ADD32(0, 0XB1);
        goto L_1511DF3C;
    // 0x1511DE80: addiu       $v1, $zero, 0xB1
    ctx->r3 = ADD32(0, 0XB1);
L_1511DE84:
    // 0x1511DE84: b           L_1511DF3C
    // 0x1511DE88: addiu       $v1, $zero, 0x442
    ctx->r3 = ADD32(0, 0X442);
        goto L_1511DF3C;
    // 0x1511DE88: addiu       $v1, $zero, 0x442
    ctx->r3 = ADD32(0, 0X442);
L_1511DE8C:
    // 0x1511DE8C: b           L_1511DF3C
    // 0x1511DE90: addiu       $v1, $zero, 0x444
    ctx->r3 = ADD32(0, 0X444);
        goto L_1511DF3C;
    // 0x1511DE90: addiu       $v1, $zero, 0x444
    ctx->r3 = ADD32(0, 0X444);
L_1511DE94:
    // 0x1511DE94: b           L_1511DF3C
    // 0x1511DE98: addiu       $v1, $zero, 0x2F0
    ctx->r3 = ADD32(0, 0X2F0);
        goto L_1511DF3C;
    // 0x1511DE98: addiu       $v1, $zero, 0x2F0
    ctx->r3 = ADD32(0, 0X2F0);
L_1511DE9C:
    // 0x1511DE9C: b           L_1511DF3C
    // 0x1511DEA0: addiu       $v1, $zero, 0x4A3
    ctx->r3 = ADD32(0, 0X4A3);
        goto L_1511DF3C;
    // 0x1511DEA0: addiu       $v1, $zero, 0x4A3
    ctx->r3 = ADD32(0, 0X4A3);
L_1511DEA4:
    // 0x1511DEA4: jal         0x150ADA20
    // 0x1511DEA8: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1511DEA8: nop

    after_3:
    // 0x1511DEAC: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x1511DEB0: b           L_1511DF3C
    // 0x1511DEB4: addiu       $v1, $v1, 0xB
    ctx->r3 = ADD32(ctx->r3, 0XB);
        goto L_1511DF3C;
    // 0x1511DEB4: addiu       $v1, $v1, 0xB
    ctx->r3 = ADD32(ctx->r3, 0XB);
L_1511DEB8:
    // 0x1511DEB8: b           L_1511DF3C
    // 0x1511DEBC: addiu       $v1, $zero, 0x510
    ctx->r3 = ADD32(0, 0X510);
        goto L_1511DF3C;
    // 0x1511DEBC: addiu       $v1, $zero, 0x510
    ctx->r3 = ADD32(0, 0X510);
L_1511DEC0:
    // 0x1511DEC0: beq         $a2, $zero, L_1511DF3C
    if (ctx->r6 == 0) {
        // 0x1511DEC4: addiu       $v1, $zero, 0x2AF
        ctx->r3 = ADD32(0, 0X2AF);
            goto L_1511DF3C;
    }
    // 0x1511DEC4: addiu       $v1, $zero, 0x2AF
    ctx->r3 = ADD32(0, 0X2AF);
    // 0x1511DEC8: addiu       $t2, $zero, 0x3E8
    ctx->r10 = ADD32(0, 0X3E8);
    // 0x1511DECC: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x1511DED0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1511DED4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1511DED8: addiu       $a0, $zero, 0x567
    ctx->r4 = ADD32(0, 0X567);
    // 0x1511DEDC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x1511DEE0: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x1511DEE4: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    // 0x1511DEE8: jal         0x10010558
    // 0x1511DEEC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_10010558(rdram, ctx);
        goto after_4;
    // 0x1511DEEC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_4:
    // 0x1511DEF0: b           L_1511DF3C
    // 0x1511DEF4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
        goto L_1511DF3C;
    // 0x1511DEF4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_1511DEF8:
    // 0x1511DEF8: beq         $a2, $zero, L_1511DF18
    if (ctx->r6 == 0) {
        // 0x1511DEFC: addiu       $a0, $zero, 0x567
        ctx->r4 = ADD32(0, 0X567);
            goto L_1511DF18;
    }
    // 0x1511DEFC: addiu       $a0, $zero, 0x567
    ctx->r4 = ADD32(0, 0X567);
    // 0x1511DF00: addiu       $t4, $zero, 0x3E8
    ctx->r12 = ADD32(0, 0X3E8);
    // 0x1511DF04: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1511DF08: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x1511DF0C: addiu       $a2, $zero, 0x6590
    ctx->r6 = ADD32(0, 0X6590);
    // 0x1511DF10: jal         0x10010630
    // 0x1511DF14: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    func_10010630(rdram, ctx);
        goto after_5;
    // 0x1511DF14: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_5:
L_1511DF18:
    // 0x1511DF18: b           L_1511DF3C
    // 0x1511DF1C: addiu       $v1, $zero, 0x5AE
    ctx->r3 = ADD32(0, 0X5AE);
        goto L_1511DF3C;
    // 0x1511DF1C: addiu       $v1, $zero, 0x5AE
    ctx->r3 = ADD32(0, 0X5AE);
L_1511DF20:
    // 0x1511DF20: addiu       $t5, $zero, 0x2328
    ctx->r13 = ADD32(0, 0X2328);
    // 0x1511DF24: addiu       $v1, $zero, 0x51
    ctx->r3 = ADD32(0, 0X51);
    // 0x1511DF28: b           L_1511DF3C
    // 0x1511DF2C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
        goto L_1511DF3C;
    // 0x1511DF2C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
L_1511DF30:
    // 0x1511DF30: addiu       $t6, $zero, 0x7FFF
    ctx->r14 = ADD32(0, 0X7FFF);
    // 0x1511DF34: addiu       $v1, $zero, 0x629
    ctx->r3 = ADD32(0, 0X629);
    // 0x1511DF38: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_1511DF3C:
    // 0x1511DF3C: beq         $v1, $zero, L_1511DF5C
    if (ctx->r3 == 0) {
        // 0x1511DF40: andi        $a0, $v1, 0xFFFF
        ctx->r4 = ctx->r3 & 0XFFFF;
            goto L_1511DF5C;
    }
    // 0x1511DF40: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x1511DF44: addiu       $t7, $zero, 0x3E8
    ctx->r15 = ADD32(0, 0X3E8);
    // 0x1511DF48: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1511DF4C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x1511DF50: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x1511DF54: jal         0x10010630
    // 0x1511DF58: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    func_10010630(rdram, ctx);
        goto after_6;
    // 0x1511DF58: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_6:
L_1511DF5C:
    // 0x1511DF5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1511DF60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1511DF64: jr          $ra
    // 0x1511DF68: nop

    return;
    return;
    // 0x1511DF68: nop

;}
RECOMP_FUNC void func_1513D524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513D524: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1513D528: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1513D52C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1513D530: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x1513D534: lbu         $a3, 0x43($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X43);
    // 0x1513D538: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x1513D53C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1513D540: lbu         $t6, 0x47($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X47);
    // 0x1513D544: lbu         $t7, 0x4B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4B);
    // 0x1513D548: lbu         $t8, 0x4F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4F);
    // 0x1513D54C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x1513D550: lbu         $t0, 0x57($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X57);
    // 0x1513D554: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x1513D558: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x1513D55C: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
    // 0x1513D560: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1513D564: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1513D568: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1513D56C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1513D570: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1513D574: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x1513D578: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x1513D57C: jal         0x1513D2F0
    // 0x1513D580: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    func_1513D2F0(rdram, ctx);
        goto after_0;
    // 0x1513D580: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    after_0:
    // 0x1513D584: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1513D588: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1513D58C: jr          $ra
    // 0x1513D590: nop

    return;
    return;
    // 0x1513D590: nop

;}
RECOMP_FUNC void func_15072940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15072944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15072948: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507294C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15072950: jal         0x15060F28
    // 0x15072954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15060F28(rdram, ctx);
        goto after_0;
    // 0x15072954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x15072958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507295C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15072960: jr          $ra
    // 0x15072964: nop

    return;
    return;
    // 0x15072964: nop

;}
RECOMP_FUNC void func_15114188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15114188: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1511418C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15114190: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x15114194: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x15114198: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1511419C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x151141A0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x151141A4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x151141A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x151141AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x151141B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151141B4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151141B8: lw          $v1, -0x4110($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4110);
    // 0x151141BC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x151141C0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x151141C4: blez        $v1, L_15114318
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151141C8: lui         $fp, 0x800D
        ctx->r30 = S32(0X800D << 16);
            goto L_15114318;
    }
    // 0x151141C8: lui         $fp, 0x800D
    ctx->r30 = S32(0X800D << 16);
    // 0x151141CC: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x151141D0: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x151141D4: addiu       $s4, $s4, -0x406C
    ctx->r20 = ADD32(ctx->r20, -0X406C);
    // 0x151141D8: addiu       $s5, $s5, -0x410C
    ctx->r21 = ADD32(ctx->r21, -0X410C);
    // 0x151141DC: addiu       $fp, $fp, -0x3D30
    ctx->r30 = ADD32(ctx->r30, -0X3D30);
    // 0x151141E0: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
    // 0x151141E4: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
L_151141E8:
    // 0x151141E8: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x151141EC: sll         $s1, $s3, 2
    ctx->r17 = S32(ctx->r19 << 2);
    // 0x151141F0: addu        $s1, $s1, $s3
    ctx->r17 = ADD32(ctx->r17, ctx->r19);
    // 0x151141F4: addu        $a1, $t6, $s2
    ctx->r5 = ADD32(ctx->r14, ctx->r18);
    // 0x151141F8: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x151141FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15114200: beql        $a0, $zero, L_1511430C
    if (ctx->r4 == 0) {
        // 0x15114204: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_1511430C;
    }
    goto skip_0;
    // 0x15114204: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x15114208: beq         $a0, $zero, L_151142EC
    if (ctx->r4 == 0) {
        // 0x1511420C: sll         $s1, $s1, 5
        ctx->r17 = S32(ctx->r17 << 5);
            goto L_151142EC;
    }
    // 0x1511420C: sll         $s1, $s1, 5
    ctx->r17 = S32(ctx->r17 << 5);
    // 0x15114210: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_15114214:
    // 0x15114214: sllv        $v1, $t7, $s0
    ctx->r3 = S32(ctx->r15 << (ctx->r16 & 31));
    // 0x15114218: and         $t8, $a0, $v1
    ctx->r24 = ctx->r4 & ctx->r3;
    // 0x1511421C: beq         $t8, $zero, L_151142C8
    if (ctx->r24 == 0) {
        // 0x15114220: xor         $t9, $a0, $v1
        ctx->r25 = ctx->r4 ^ ctx->r3;
            goto L_151142C8;
    }
    // 0x15114220: xor         $t9, $a0, $v1
    ctx->r25 = ctx->r4 ^ ctx->r3;
    // 0x15114224: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x15114228: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
    // 0x1511422C: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x15114230: subu        $t0, $t0, $s0
    ctx->r8 = SUB32(ctx->r8, ctx->r16);
    // 0x15114234: addu        $v0, $a2, $s1
    ctx->r2 = ADD32(ctx->r6, ctx->r17);
    // 0x15114238: lw          $a3, 0x78($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X78);
    // 0x1511423C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15114240: addu        $t0, $t0, $s0
    ctx->r8 = ADD32(ctx->r8, ctx->r16);
    // 0x15114244: beq         $a3, $zero, L_15114284
    if (ctx->r7 == 0) {
        // 0x15114248: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_15114284;
    }
    // 0x15114248: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1511424C: subu        $t0, $t0, $s0
    ctx->r8 = SUB32(ctx->r8, ctx->r16);
    // 0x15114250: lbu         $t1, 0x92($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X92);
    // 0x15114254: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15114258: subu        $t0, $t0, $s0
    ctx->r8 = SUB32(ctx->r8, ctx->r16);
    // 0x1511425C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15114260: bne         $t1, $zero, L_15114274
    if (ctx->r9 != 0) {
        // 0x15114264: addu        $a1, $fp, $t0
        ctx->r5 = ADD32(ctx->r30, ctx->r8);
            goto L_15114274;
    }
    // 0x15114264: addu        $a1, $fp, $t0
    ctx->r5 = ADD32(ctx->r30, ctx->r8);
    // 0x15114268: lbu         $t2, 0x127($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X127);
    // 0x1511426C: beql        $s6, $t2, L_15114288
    if (ctx->r22 == ctx->r10) {
        // 0x15114270: lbu         $v1, 0x4F($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X4F);
            goto L_15114288;
    }
    goto skip_1;
    // 0x15114270: lbu         $v1, 0x4F($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4F);
    skip_1:
L_15114274:
    // 0x15114274: jalr        $a3
    // 0x15114278: addu        $a0, $s1, $a2
    ctx->r4 = ADD32(ctx->r17, ctx->r6);
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_0;
    // 0x15114278: addu        $a0, $s1, $a2
    ctx->r4 = ADD32(ctx->r17, ctx->r6);
    after_0:
    // 0x1511427C: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x15114280: addu        $v0, $t3, $s1
    ctx->r2 = ADD32(ctx->r11, ctx->r17);
L_15114284:
    // 0x15114284: lbu         $v1, 0x4F($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4F);
L_15114288:
    // 0x15114288: andi        $t4, $v1, 0x4
    ctx->r12 = ctx->r3 & 0X4;
    // 0x1511428C: bne         $s7, $t4, L_151142C8
    if (ctx->r23 != ctx->r12) {
        // 0x15114290: andi        $t5, $v1, 0x8
        ctx->r13 = ctx->r3 & 0X8;
            goto L_151142C8;
    }
    // 0x15114290: andi        $t5, $v1, 0x8
    ctx->r13 = ctx->r3 & 0X8;
    // 0x15114294: bne         $t5, $zero, L_151142C8
    if (ctx->r13 != 0) {
        // 0x15114298: sll         $t6, $s0, 2
        ctx->r14 = S32(ctx->r16 << 2);
            goto L_151142C8;
    }
    // 0x15114298: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x1511429C: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x151142A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151142A4: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x151142A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151142AC: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x151142B0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151142B4: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x151142B8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151142BC: addu        $a0, $fp, $t6
    ctx->r4 = ADD32(ctx->r30, ctx->r14);
    // 0x151142C0: jal         0x1511473C
    // 0x151142C4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_1511473C(rdram, ctx);
        goto after_1;
    // 0x151142C4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
L_151142C8:
    // 0x151142C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151142CC: slti        $at, $s0, 0x19
    ctx->r1 = SIGNED(ctx->r16) < 0X19 ? 1 : 0;
    // 0x151142D0: beql        $at, $zero, L_151142F0
    if (ctx->r1 == 0) {
        // 0x151142D4: lw          $t8, 0x0($s5)
        ctx->r24 = MEM_W(ctx->r21, 0X0);
            goto L_151142F0;
    }
    goto skip_2;
    // 0x151142D4: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    skip_2:
    // 0x151142D8: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x151142DC: addu        $a1, $t7, $s2
    ctx->r5 = ADD32(ctx->r15, ctx->r18);
    // 0x151142E0: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x151142E4: bnel        $a0, $zero, L_15114214
    if (ctx->r4 != 0) {
        // 0x151142E8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_15114214;
    }
    goto skip_3;
    // 0x151142E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    skip_3:
L_151142EC:
    // 0x151142EC: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
L_151142F0:
    // 0x151142F0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151142F4: addu        $v0, $t8, $s1
    ctx->r2 = ADD32(ctx->r24, ctx->r17);
    // 0x151142F8: lbu         $t9, 0x4F($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4F);
    // 0x151142FC: andi        $t0, $t9, 0xFF73
    ctx->r8 = ctx->r25 & 0XFF73;
    // 0x15114300: sb          $t0, 0x4F($v0)
    MEM_B(0X4F, ctx->r2) = ctx->r8;
    // 0x15114304: lw          $v1, -0x4110($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4110);
    // 0x15114308: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_1511430C:
    // 0x1511430C: slt         $at, $s3, $v1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15114310: bne         $at, $zero, L_151141E8
    if (ctx->r1 != 0) {
        // 0x15114314: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_151141E8;
    }
    // 0x15114314: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_15114318:
    // 0x15114318: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1511431C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15114320: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15114324: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15114328: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1511432C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15114330: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15114334: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15114338: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x1511433C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15114340: jr          $ra
    // 0x15114344: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x15114344: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_150E0870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E0870: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x150E0874: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x150E0878: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x150E087C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150E0880: andi        $s1, $a1, 0xFF
    ctx->r17 = ctx->r5 & 0XFF;
    // 0x150E0884: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150E0888: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x150E088C: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x150E0890: beq         $s0, $zero, L_150E0BCC
    if (ctx->r16 == 0) {
        // 0x150E0894: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_150E0BCC;
    }
    // 0x150E0894: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150E0898: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x150E089C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150E08A0: beq         $t6, $at, L_150E08DC
    if (ctx->r14 == ctx->r1) {
        // 0x150E08A4: addiu       $t7, $zero, 0x7D0
        ctx->r15 = ADD32(0, 0X7D0);
            goto L_150E08DC;
    }
    // 0x150E08A4: addiu       $t7, $zero, 0x7D0
    ctx->r15 = ADD32(0, 0X7D0);
    // 0x150E08A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150E08AC: addiu       $a0, $zero, 0x2BB
    ctx->r4 = ADD32(0, 0X2BB);
    // 0x150E08B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150E08B4: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    // 0x150E08B8: jal         0x10010630
    // 0x150E08BC: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    func_10010630(rdram, ctx);
        goto after_0;
    // 0x150E08BC: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    after_0:
    // 0x150E08C0: addiu       $t8, $zero, 0x7D0
    ctx->r24 = ADD32(0, 0X7D0);
    // 0x150E08C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150E08C8: addiu       $a0, $zero, 0x2BA
    ctx->r4 = ADD32(0, 0X2BA);
    // 0x150E08CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150E08D0: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    // 0x150E08D4: jal         0x10010630
    // 0x150E08D8: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    func_10010630(rdram, ctx);
        goto after_1;
    // 0x150E08D8: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    after_1:
L_150E08DC:
    // 0x150E08DC: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150E08E0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150E08E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150E08E8: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x150E08EC: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150E08F0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150E08F4: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x150E08F8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150E08FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E0900: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x150E0904: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x150E0908: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150E090C: sb          $zero, 0x7F($sp)
    MEM_B(0X7F, ctx->r29) = 0;
    // 0x150E0910: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x150E0914: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150E0918: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x150E091C: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x150E0920: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150E0924: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150E0928: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x150E092C: jal         0x1504715C
    // 0x150E0930: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    func_1504715C(rdram, ctx);
        goto after_2;
    // 0x150E0930: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x150E0934: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150E0938: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150E093C: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150E0940: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x150E0944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E0948: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150E094C: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x150E0950: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x150E0954: jal         0x15046C80
    // 0x150E0958: nop

    func_15046C80(rdram, ctx);
        goto after_3;
    // 0x150E0958: nop

    after_3:
    // 0x150E095C: beql        $v0, $zero, L_150E0A24
    if (ctx->r2 == 0) {
        // 0x150E0960: lw          $t8, 0xA0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA0);
            goto L_150E0A24;
    }
    goto skip_0;
    // 0x150E0960: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    skip_0:
    // 0x150E0964: lbu         $t9, 0x68($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X68);
    // 0x150E0968: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x150E096C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150E0970: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x150E0974: beql        $t0, $zero, L_150E0A24
    if (ctx->r8 == 0) {
        // 0x150E0978: lw          $t8, 0xA0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA0);
            goto L_150E0A24;
    }
    goto skip_1;
    // 0x150E0978: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    skip_1:
    // 0x150E097C: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150E0980: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150E0984: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x150E0988: sb          $t1, 0x7F($sp)
    MEM_B(0X7F, ctx->r29) = ctx->r9;
    // 0x150E098C: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x150E0990: jal         0x150ADA68
    // 0x150E0994: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150E0994: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x150E0998: jal         0x150ADA20
    // 0x150E099C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150E099C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x150E09A0: jal         0x150ADA20
    // 0x150E09A4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150E09A4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_6:
    // 0x150E09A8: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x150E09AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150E09B0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x150E09B4: lui         $at, 0x434C
    ctx->r1 = S32(0X434C << 16);
    // 0x150E09B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E09BC: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x150E09C0: divu        $zero, $a0, $at
    lo = S32(U32(ctx->r4) / U32(ctx->r1)); hi = S32(U32(ctx->r4) % U32(ctx->r1));
    // 0x150E09C4: mfhi        $a1
    ctx->r5 = hi;
    // 0x150E09C8: addiu       $at, $zero, 0x12E
    ctx->r1 = ADD32(0, 0X12E);
    // 0x150E09CC: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150E09D0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E09D4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150E09D8: mfhi        $t3
    ctx->r11 = hi;
    // 0x150E09DC: addiu       $a1, $a1, 0x9B
    ctx->r5 = ADD32(ctx->r5, 0X9B);
    // 0x150E09E0: andi        $t2, $a1, 0xFF
    ctx->r10 = ctx->r5 & 0XFF;
    // 0x150E09E4: addiu       $t4, $t3, 0x1F4
    ctx->r12 = ADD32(ctx->r11, 0X1F4);
    // 0x150E09E8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150E09EC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150E09F0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150E09F4: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x150E09F8: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x150E09FC: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    // 0x150E0A00: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150E0A04: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150E0A08: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150E0A0C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150E0A10: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x150E0A14: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150E0A18: jal         0x150E7FEC
    // 0x150E0A1C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_150E7FEC(rdram, ctx);
        goto after_7;
    // 0x150E0A1C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_7:
    // 0x150E0A20: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
L_150E0A24:
    // 0x150E0A24: lui         $a2, 0x447D
    ctx->r6 = S32(0X447D << 16);
    // 0x150E0A28: lui         $a3, 0x3A81
    ctx->r7 = S32(0X3A81 << 16);
    // 0x150E0A2C: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x150E0A30: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x150E0A34: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150E0A38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150E0A3C: ori         $a3, $a3, 0x63D3
    ctx->r7 = ctx->r7 | 0X63D3;
    // 0x150E0A40: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x150E0A44: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x150E0A48: lui         $a1, 0x43FD
    ctx->r5 = S32(0X43FD << 16);
    // 0x150E0A4C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150E0A50: jal         0x151D5404
    // 0x150E0A54: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_151D5404(rdram, ctx);
        goto after_8;
    // 0x150E0A54: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_8:
    // 0x150E0A58: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x150E0A5C: lui         $a2, 0x447D
    ctx->r6 = S32(0X447D << 16);
    // 0x150E0A60: lui         $a3, 0x3A81
    ctx->r7 = S32(0X3A81 << 16);
    // 0x150E0A64: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x150E0A68: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150E0A6C: ori         $a3, $a3, 0x63D3
    ctx->r7 = ctx->r7 | 0X63D3;
    // 0x150E0A70: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x150E0A74: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x150E0A78: lui         $a1, 0x43FD
    ctx->r5 = S32(0X43FD << 16);
    // 0x150E0A7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x150E0A80: jal         0x151D5334
    // 0x150E0A84: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_151D5334(rdram, ctx);
        goto after_9;
    // 0x150E0A84: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_9:
    // 0x150E0A88: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x150E0A8C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x150E0A90: jal         0x151D5514
    // 0x150E0A94: lw          $a2, 0xA0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA0);
    func_151D5514(rdram, ctx);
        goto after_10;
    // 0x150E0A94: lw          $a2, 0xA0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA0);
    after_10:
    // 0x150E0A98: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x150E0A9C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x150E0AA0: jal         0x151D3FF4
    // 0x150E0AA4: lw          $a2, 0xA0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA0);
    func_151D3FF4(rdram, ctx);
        goto after_11;
    // 0x150E0AA4: lw          $a2, 0xA0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA0);
    after_11:
    // 0x150E0AA8: lbu         $t1, 0x7F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X7F);
    // 0x150E0AAC: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x150E0AB0: beq         $t1, $zero, L_150E0AC0
    if (ctx->r9 == 0) {
        // 0x150E0AB4: nop
    
            goto L_150E0AC0;
    }
    // 0x150E0AB4: nop

    // 0x150E0AB8: b           L_150E0AC0
    // 0x150E0ABC: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
        goto L_150E0AC0;
    // 0x150E0ABC: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
L_150E0AC0:
    // 0x150E0AC0: jal         0x150ADA20
    // 0x150E0AC4: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x150E0AC4: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    after_12:
    // 0x150E0AC8: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x150E0ACC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E0AD0: mfhi        $a1
    ctx->r5 = hi;
    // 0x150E0AD4: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    // 0x150E0AD8: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x150E0ADC: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x150E0AE0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x150E0AE4: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    // 0x150E0AE8: jal         0x150E83AC
    // 0x150E0AEC: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    func_150E83AC(rdram, ctx);
        goto after_13;
    // 0x150E0AEC: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    after_13:
    // 0x150E0AF0: jal         0x150ADA68
    // 0x150E0AF4: nop

    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x150E0AF4: nop

    after_14:
    // 0x150E0AF8: jal         0x150ADA20
    // 0x150E0AFC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x150E0AFC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_15:
    // 0x150E0B00: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150E0B04: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150E0B08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150E0B0C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x150E0B10: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150E0B14: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x150E0B18: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x150E0B1C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E0B20: add.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x150E0B24: mfhi        $t4
    ctx->r12 = hi;
    // 0x150E0B28: addiu       $t5, $t4, 0xC8
    ctx->r13 = ADD32(ctx->r12, 0XC8);
    // 0x150E0B2C: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x150E0B30: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x150E0B34: lui         $a2, 0x3FD2
    ctx->r6 = S32(0X3FD2 << 16);
    // 0x150E0B38: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150E0B3C: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x150E0B40: bgez        $t5, L_150E0B58
    if (SIGNED(ctx->r13) >= 0) {
        // 0x150E0B44: ori         $a2, $a2, 0xC49
        ctx->r6 = ctx->r6 | 0XC49;
            goto L_150E0B58;
    }
    // 0x150E0B44: ori         $a2, $a2, 0xC49
    ctx->r6 = ctx->r6 | 0XC49;
    // 0x150E0B48: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150E0B4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150E0B50: nop

    // 0x150E0B54: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_150E0B58:
    // 0x150E0B58: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150E0B5C: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x150E0B60: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x150E0B64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x150E0B68: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150E0B6C: jal         0x151541B8
    // 0x150E0B70: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_151541B8(rdram, ctx);
        goto after_16;
    // 0x150E0B70: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_16:
    // 0x150E0B74: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x150E0B78: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150E0B7C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150E0B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150E0B84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150E0B88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150E0B8C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150E0B90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150E0B94: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150E0B98: jal         0x15136C3C
    // 0x150E0B9C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_15136C3C(rdram, ctx);
        goto after_17;
    // 0x150E0B9C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_17:
    // 0x150E0BA0: addiu       $t9, $zero, 0x16
    ctx->r25 = ADD32(0, 0X16);
    // 0x150E0BA4: addiu       $t0, $zero, 0x15
    ctx->r8 = ADD32(0, 0X15);
    // 0x150E0BA8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150E0BAC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150E0BB0: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x150E0BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E0BB8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x150E0BBC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x150E0BC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150E0BC4: jal         0x151D40D4
    // 0x150E0BC8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151D40D4(rdram, ctx);
        goto after_18;
    // 0x150E0BC8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_18:
L_150E0BCC:
    // 0x150E0BCC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150E0BD0: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x150E0BD4: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x150E0BD8: jr          $ra
    // 0x150E0BDC: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x150E0BDC: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_1515452C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515452C: lwc1        $f0, 0x170($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X170);
    // 0x15154530: lwc1        $f4, 0x178($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X178);
    // 0x15154534: lbu         $t6, 0x184($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X184);
    // 0x15154538: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1515453C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15154540: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x15154544: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x15154548: addiu       $v0, $a0, 0x170
    ctx->r2 = ADD32(ctx->r4, 0X170);
    // 0x1515454C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15154550: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15154554: bne         $t7, $zero, L_15154560
    if (ctx->r15 != 0) {
        // 0x15154558: swc1        $f2, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
            goto L_15154560;
    }
    // 0x15154558: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x1515455C: swc1        $f2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f2.u32l;
L_15154560:
    // 0x15154560: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15154564: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15154568: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1515456C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15154570: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15154574: nop

    // 0x15154578: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1515457C: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x15154580: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x15154584: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x15154588: nop

    // 0x1515458C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x15154590: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x15154594: nop

    // 0x15154598: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x1515459C: beq         $t9, $zero, L_151545E8
    if (ctx->r25 == 0) {
        // 0x151545A0: nop
    
            goto L_151545E8;
    }
    // 0x151545A0: nop

    // 0x151545A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151545A8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151545AC: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x151545B0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x151545B4: nop

    // 0x151545B8: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x151545BC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x151545C0: nop

    // 0x151545C4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x151545C8: bne         $t9, $zero, L_151545E0
    if (ctx->r25 != 0) {
        // 0x151545CC: nop
    
            goto L_151545E0;
    }
    // 0x151545CC: nop

    // 0x151545D0: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x151545D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151545D8: b           L_151545F8
    // 0x151545DC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_151545F8;
    // 0x151545DC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_151545E0:
    // 0x151545E0: b           L_151545F8
    // 0x151545E4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_151545F8;
    // 0x151545E4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
L_151545E8:
    // 0x151545E8: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x151545EC: nop

    // 0x151545F0: bltz        $t9, L_151545E0
    if (SIGNED(ctx->r25) < 0) {
        // 0x151545F4: nop
    
            goto L_151545E0;
    }
    // 0x151545F4: nop

L_151545F8:
    // 0x151545F8: sb          $t9, 0x70($a0)
    MEM_B(0X70, ctx->r4) = ctx->r25;
    // 0x151545FC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x15154600: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15154604: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15154608: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1515460C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15154610: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x15154614: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15154618: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x1515461C: nop

    // 0x15154620: bc1fl       L_15154634
    if (!c1cs) {
        // 0x15154624: lwc1        $f4, 0x50($a0)
        ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
            goto L_15154634;
    }
    goto skip_0;
    // 0x15154624: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    skip_0:
    // 0x15154628: jr          $ra
    // 0x1515462C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1515462C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15154630: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
L_15154634:
    // 0x15154634: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15154638: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x1515463C: lwc1        $f18, 0x54($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X54);
    // 0x15154640: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15154644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15154648: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1515464C: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x15154650: swc1        $f16, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f16.u32l;
    // 0x15154654: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15154658: lwc1        $f16, 0x58($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X58);
    // 0x1515465C: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15154660: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15154664: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x15154668: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x1515466C: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15154670: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15154674: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15154678: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    // 0x1515467C: jr          $ra
    // 0x15154680: nop

    return;
    return;
    // 0x15154680: nop

;}
RECOMP_FUNC void func_1511FC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511FC60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1511FC64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1511FC68: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1511FC6C: lw          $t7, 0x5F0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X5F0);
    // 0x1511FC70: lbu         $v0, 0x23E($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X23E);
    // 0x1511FC74: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x1511FC78: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x1511FC7C: sh          $t6, 0x84A($a2)
    MEM_H(0X84A, ctx->r6) = ctx->r14;
    // 0x1511FC80: bne         $t8, $zero, L_1511FCB4
    if (ctx->r24 != 0) {
        // 0x1511FC84: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_1511FCB4;
    }
    // 0x1511FC84: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1511FC88: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1511FC8C: beq         $v0, $at, L_1511FCB4
    if (ctx->r2 == ctx->r1) {
        // 0x1511FC90: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_1511FCB4;
    }
    // 0x1511FC90: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x1511FC94: beq         $v0, $at, L_1511FCB4
    if (ctx->r2 == ctx->r1) {
        // 0x1511FC98: addiu       $at, $zero, 0x39
        ctx->r1 = ADD32(0, 0X39);
            goto L_1511FCB4;
    }
    // 0x1511FC98: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x1511FC9C: beq         $v0, $at, L_1511FCB4
    if (ctx->r2 == ctx->r1) {
        // 0x1511FCA0: addiu       $at, $zero, 0x37
        ctx->r1 = ADD32(0, 0X37);
            goto L_1511FCB4;
    }
    // 0x1511FCA0: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x1511FCA4: beq         $v0, $at, L_1511FCB4
    if (ctx->r2 == ctx->r1) {
        // 0x1511FCA8: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_1511FCB4;
    }
    // 0x1511FCA8: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x1511FCAC: bne         $v0, $at, L_1511FCC8
    if (ctx->r2 != ctx->r1) {
        // 0x1511FCB0: addiu       $v1, $a2, 0x740
        ctx->r3 = ADD32(ctx->r6, 0X740);
            goto L_1511FCC8;
    }
    // 0x1511FCB0: addiu       $v1, $a2, 0x740
    ctx->r3 = ADD32(ctx->r6, 0X740);
L_1511FCB4:
    // 0x1511FCB4: addiu       $v1, $a2, 0x740
    ctx->r3 = ADD32(ctx->r6, 0X740);
    // 0x1511FCB8: sb          $zero, 0x4D($v1)
    MEM_B(0X4D, ctx->r3) = 0;
    // 0x1511FCBC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1511FCC0: b           L_1511FCD0
    // 0x1511FCC4: sb          $t9, 0x4D($v1)
    MEM_B(0X4D, ctx->r3) = ctx->r25;
        goto L_1511FCD0;
    // 0x1511FCC4: sb          $t9, 0x4D($v1)
    MEM_B(0X4D, ctx->r3) = ctx->r25;
L_1511FCC8:
    // 0x1511FCC8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1511FCCC: sb          $t0, 0x4D($v1)
    MEM_B(0X4D, ctx->r3) = ctx->r8;
L_1511FCD0:
    // 0x1511FCD0: lw          $t1, 0x34($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X34);
    // 0x1511FCD4: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x1511FCD8: sb          $zero, 0x84C($a2)
    MEM_B(0X84C, ctx->r6) = 0;
    // 0x1511FCDC: bnel        $t1, $at, L_1511FCF4
    if (ctx->r9 != ctx->r1) {
        // 0x1511FCE0: lbu         $t2, 0x4D($v1)
        ctx->r10 = MEM_BU(ctx->r3, 0X4D);
            goto L_1511FCF4;
    }
    goto skip_0;
    // 0x1511FCE0: lbu         $t2, 0x4D($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X4D);
    skip_0:
    // 0x1511FCE4: lwc1        $f4, 0x37C($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X37C);
    // 0x1511FCE8: b           L_1511FDD8
    // 0x1511FCEC: swc1        $f4, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f4.u32l;
        goto L_1511FDD8;
    // 0x1511FCEC: swc1        $f4, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f4.u32l;
    // 0x1511FCF0: lbu         $t2, 0x4D($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X4D);
L_1511FCF4:
    // 0x1511FCF4: beql        $t2, $zero, L_1511FDC4
    if (ctx->r10 == 0) {
        // 0x1511FCF8: lwc1        $f10, 0x37C($a2)
        ctx->f10.u32l = MEM_W(ctx->r6, 0X37C);
            goto L_1511FDC4;
    }
    goto skip_1;
    // 0x1511FCF8: lwc1        $f10, 0x37C($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X37C);
    skip_1:
    // 0x1511FCFC: lbu         $v0, 0x23E($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X23E);
    // 0x1511FD00: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1511FD04: beq         $v0, $at, L_1511FD44
    if (ctx->r2 == ctx->r1) {
        // 0x1511FD08: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_1511FD44;
    }
    // 0x1511FD08: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x1511FD0C: beq         $v0, $at, L_1511FD44
    if (ctx->r2 == ctx->r1) {
        // 0x1511FD10: addiu       $at, $zero, 0x39
        ctx->r1 = ADD32(0, 0X39);
            goto L_1511FD44;
    }
    // 0x1511FD10: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x1511FD14: beq         $v0, $at, L_1511FD44
    if (ctx->r2 == ctx->r1) {
        // 0x1511FD18: addiu       $at, $zero, 0x37
        ctx->r1 = ADD32(0, 0X37);
            goto L_1511FD44;
    }
    // 0x1511FD18: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x1511FD1C: beq         $v0, $at, L_1511FD44
    if (ctx->r2 == ctx->r1) {
        // 0x1511FD20: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_1511FD44;
    }
    // 0x1511FD20: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x1511FD24: beq         $v0, $at, L_1511FD44
    if (ctx->r2 == ctx->r1) {
        // 0x1511FD28: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_1511FD44;
    }
    // 0x1511FD28: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x1511FD2C: beq         $v0, $at, L_1511FD44
    if (ctx->r2 == ctx->r1) {
        // 0x1511FD30: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_1511FD44;
    }
    // 0x1511FD30: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x1511FD34: beq         $v0, $at, L_1511FD44
    if (ctx->r2 == ctx->r1) {
        // 0x1511FD38: addiu       $at, $zero, 0x3A
        ctx->r1 = ADD32(0, 0X3A);
            goto L_1511FD44;
    }
    // 0x1511FD38: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x1511FD3C: bne         $v0, $at, L_1511FD7C
    if (ctx->r2 != ctx->r1) {
        // 0x1511FD40: lui         $t9, 0x800D
        ctx->r25 = S32(0X800D << 16);
            goto L_1511FD7C;
    }
    // 0x1511FD40: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
L_1511FD44:
    // 0x1511FD44: lw          $t3, 0x3D0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X3D0);
    // 0x1511FD48: lw          $t5, 0x3D4($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X3D4);
    // 0x1511FD4C: ori         $at, $zero, 0xC000
    ctx->r1 = 0 | 0XC000;
    // 0x1511FD50: lhu         $t4, 0x7A($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X7A);
    // 0x1511FD54: lh          $t6, 0x12($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X12);
    // 0x1511FD58: subu        $t7, $t4, $t6
    ctx->r15 = SUB32(ctx->r12, ctx->r14);
    // 0x1511FD5C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x1511FD60: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x1511FD64: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x1511FD68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1511FD6C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1511FD70: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1511FD74: b           L_1511FDD8
    // 0x1511FD78: swc1        $f16, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f16.u32l;
        goto L_1511FDD8;
    // 0x1511FD78: swc1        $f16, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f16.u32l;
L_1511FD7C:
    // 0x1511FD7C: lbu         $t9, 0x1940($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1940);
    // 0x1511FD80: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x1511FD84: bne         $t9, $at, L_1511FDA4
    if (ctx->r25 != ctx->r1) {
        // 0x1511FD88: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_1511FDA4;
    }
    // 0x1511FD88: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x1511FD8C: bnel        $a1, $at, L_1511FDA8
    if (ctx->r5 != ctx->r1) {
        // 0x1511FD90: lw          $t1, 0x3D0($a2)
        ctx->r9 = MEM_W(ctx->r6, 0X3D0);
            goto L_1511FDA8;
    }
    goto skip_2;
    // 0x1511FD90: lw          $t1, 0x3D0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X3D0);
    skip_2:
    // 0x1511FD94: lw          $t0, 0x3D0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X3D0);
    // 0x1511FD98: lwc1        $f18, 0x40($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X40);
    // 0x1511FD9C: b           L_1511FDD8
    // 0x1511FDA0: swc1        $f18, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f18.u32l;
        goto L_1511FDD8;
    // 0x1511FDA0: swc1        $f18, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f18.u32l;
L_1511FDA4:
    // 0x1511FDA4: lw          $t1, 0x3D0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X3D0);
L_1511FDA8:
    // 0x1511FDA8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x1511FDAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1511FDB0: lwc1        $f4, 0x40($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X40);
    // 0x1511FDB4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1511FDB8: b           L_1511FDD8
    // 0x1511FDBC: swc1        $f8, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f8.u32l;
        goto L_1511FDD8;
    // 0x1511FDBC: swc1        $f8, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f8.u32l;
    // 0x1511FDC0: lwc1        $f10, 0x37C($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X37C);
L_1511FDC4:
    // 0x1511FDC4: addiu       $at, $zero, -0x281
    ctx->r1 = ADD32(0, -0X281);
    // 0x1511FDC8: swc1        $f10, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f10.u32l;
    // 0x1511FDCC: lw          $t2, 0x84($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X84);
    // 0x1511FDD0: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x1511FDD4: sw          $t3, 0x84($a2)
    MEM_W(0X84, ctx->r6) = ctx->r11;
L_1511FDD8:
    // 0x1511FDD8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1511FDDC: beq         $a1, $at, L_1511FE1C
    if (ctx->r5 == ctx->r1) {
        // 0x1511FDE0: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_1511FE1C;
    }
    // 0x1511FDE0: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x1511FDE4: beq         $a1, $at, L_1511FE1C
    if (ctx->r5 == ctx->r1) {
        // 0x1511FDE8: addiu       $at, $zero, 0x39
        ctx->r1 = ADD32(0, 0X39);
            goto L_1511FE1C;
    }
    // 0x1511FDE8: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x1511FDEC: beq         $a1, $at, L_1511FE1C
    if (ctx->r5 == ctx->r1) {
        // 0x1511FDF0: addiu       $at, $zero, 0x37
        ctx->r1 = ADD32(0, 0X37);
            goto L_1511FE1C;
    }
    // 0x1511FDF0: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x1511FDF4: beq         $a1, $at, L_1511FE1C
    if (ctx->r5 == ctx->r1) {
        // 0x1511FDF8: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_1511FE1C;
    }
    // 0x1511FDF8: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x1511FDFC: beq         $a1, $at, L_1511FE1C
    if (ctx->r5 == ctx->r1) {
        // 0x1511FE00: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_1511FE1C;
    }
    // 0x1511FE00: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x1511FE04: beq         $a1, $at, L_1511FE1C
    if (ctx->r5 == ctx->r1) {
        // 0x1511FE08: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_1511FE1C;
    }
    // 0x1511FE08: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x1511FE0C: beq         $a1, $at, L_1511FE1C
    if (ctx->r5 == ctx->r1) {
        // 0x1511FE10: addiu       $at, $zero, 0x3A
        ctx->r1 = ADD32(0, 0X3A);
            goto L_1511FE1C;
    }
    // 0x1511FE10: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x1511FE14: bnel        $a1, $at, L_1511FE58
    if (ctx->r5 != ctx->r1) {
        // 0x1511FE18: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1511FE58;
    }
    goto skip_3;
    // 0x1511FE18: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_3:
L_1511FE1C:
    // 0x1511FE1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1511FE20: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1511FE24: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x1511FE28: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
    // 0x1511FE2C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1511FE30: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x1511FE34: jal         0x151C9BA0
    // 0x1511FE38: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_151C9BA0(rdram, ctx);
        goto after_0;
    // 0x1511FE38: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x1511FE3C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x1511FE40: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x1511FE44: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x1511FE48: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1511FE4C: b           L_1511FEE8
    // 0x1511FE50: sb          $t5, 0x84C($a2)
    MEM_B(0X84C, ctx->r6) = ctx->r13;
        goto L_1511FEE8;
    // 0x1511FE50: sb          $t5, 0x84C($a2)
    MEM_B(0X84C, ctx->r6) = ctx->r13;
    // 0x1511FE54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_1511FE58:
    // 0x1511FE58: beq         $a1, $at, L_1511FE68
    if (ctx->r5 == ctx->r1) {
        // 0x1511FE5C: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_1511FE68;
    }
    // 0x1511FE5C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x1511FE60: bnel        $a1, $at, L_1511FE80
    if (ctx->r5 != ctx->r1) {
        // 0x1511FE64: addiu       $at, $zero, 0x1C
        ctx->r1 = ADD32(0, 0X1C);
            goto L_1511FE80;
    }
    goto skip_4;
    // 0x1511FE64: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    skip_4:
L_1511FE68:
    // 0x1511FE68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1511FE6C: nop

    // 0x1511FE70: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x1511FE74: b           L_1511FEE8
    // 0x1511FE78: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
        goto L_1511FEE8;
    // 0x1511FE78: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
    // 0x1511FE7C: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
L_1511FE80:
    // 0x1511FE80: beq         $a1, $at, L_1511FEE8
    if (ctx->r5 == ctx->r1) {
        // 0x1511FE84: addiu       $at, $zero, 0x34
        ctx->r1 = ADD32(0, 0X34);
            goto L_1511FEE8;
    }
    // 0x1511FE84: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x1511FE88: bnel        $a1, $at, L_1511FEA8
    if (ctx->r5 != ctx->r1) {
        // 0x1511FE8C: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_1511FEA8;
    }
    goto skip_5;
    // 0x1511FE8C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    skip_5:
    // 0x1511FE90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1511FE94: nop

    // 0x1511FE98: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x1511FE9C: b           L_1511FEE8
    // 0x1511FEA0: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
        goto L_1511FEE8;
    // 0x1511FEA0: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
    // 0x1511FEA4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
L_1511FEA8:
    // 0x1511FEA8: bne         $a1, $at, L_1511FED8
    if (ctx->r5 != ctx->r1) {
        // 0x1511FEAC: lui         $at, 0x41D8
        ctx->r1 = S32(0X41D8 << 16);
            goto L_1511FED8;
    }
    // 0x1511FEAC: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x1511FEB0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1511FEB4: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x1511FEB8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1511FEBC: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x1511FEC0: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
    // 0x1511FEC4: lw          $t4, 0x3D0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X3D0);
    // 0x1511FEC8: lwc1        $f16, 0x40($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X40);
    // 0x1511FECC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1511FED0: b           L_1511FEE8
    // 0x1511FED4: swc1        $f4, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f4.u32l;
        goto L_1511FEE8;
    // 0x1511FED4: swc1        $f4, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f4.u32l;
L_1511FED8:
    // 0x1511FED8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1511FEDC: nop

    // 0x1511FEE0: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x1511FEE4: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
L_1511FEE8:
    // 0x1511FEE8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1511FEEC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x1511FEF0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x1511FEF4: jal         0x151216F8
    // 0x1511FEF8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_151216F8(rdram, ctx);
        goto after_1;
    // 0x1511FEF8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_1:
    // 0x1511FEFC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x1511FF00: jal         0x15048758
    // 0x1511FF04: addiu       $a0, $v1, 0x34
    ctx->r4 = ADD32(ctx->r3, 0X34);
    func_15048758(rdram, ctx);
        goto after_2;
    // 0x1511FF04: addiu       $a0, $v1, 0x34
    ctx->r4 = ADD32(ctx->r3, 0X34);
    after_2:
    // 0x1511FF08: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x1511FF0C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x1511FF10: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x1511FF14: lbu         $t6, 0x4C($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4C);
    // 0x1511FF18: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1511FF1C: beql        $t6, $zero, L_1511FF4C
    if (ctx->r14 == 0) {
        // 0x1511FF20: lwc1        $f18, 0x37C($a2)
        ctx->f18.u32l = MEM_W(ctx->r6, 0X37C);
            goto L_1511FF4C;
    }
    goto skip_6;
    // 0x1511FF20: lwc1        $f18, 0x37C($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X37C);
    skip_6:
    // 0x1511FF24: lwc1        $f8, 0x34($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X34);
    // 0x1511FF28: lwc1        $f10, 0x54($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X54);
    // 0x1511FF2C: lwc1        $f0, 0x50($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X50);
    // 0x1511FF30: lwc1        $f6, 0x58($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X58);
    // 0x1511FF34: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1511FF38: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x1511FF3C: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
    // 0x1511FF40: swc1        $f6, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f6.u32l;
    // 0x1511FF44: swc1        $f16, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f16.u32l;
    // 0x1511FF48: lwc1        $f18, 0x37C($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X37C);
L_1511FF4C:
    // 0x1511FF4C: swc1        $f18, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f18.u32l;
    // 0x1511FF50: lw          $t7, 0x134($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X134);
    // 0x1511FF54: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1511FF58: nop

    // 0x1511FF5C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511FF60: swc1        $f6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f6.u32l;
    // 0x1511FF64: lbu         $t8, 0x92C($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X92C);
    // 0x1511FF68: beql        $t8, $zero, L_1511FFB8
    if (ctx->r24 == 0) {
        // 0x1511FF6C: lwc1        $f16, 0x374($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X374);
            goto L_1511FFB8;
    }
    goto skip_7;
    // 0x1511FF6C: lwc1        $f16, 0x374($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X374);
    skip_7:
    // 0x1511FF70: lwc1        $f8, 0x2BC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X2BC);
    // 0x1511FF74: lwc1        $f10, 0x2F8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X2F8);
    // 0x1511FF78: lwc1        $f16, 0x2C4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X2C4);
    // 0x1511FF7C: lwc1        $f18, 0x300($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X300);
    // 0x1511FF80: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1511FF84: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1511FF88: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1511FF8C: nop

    // 0x1511FF90: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1511FF94: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1511FF98: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1511FF9C: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x1511FFA0: lwc1        $f8, 0x344($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X344);
    // 0x1511FFA4: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
    // 0x1511FFA8: lwc1        $f10, 0x354($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X354);
    // 0x1511FFAC: b           L_1511FFCC
    // 0x1511FFB0: swc1        $f10, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f10.u32l;
        goto L_1511FFCC;
    // 0x1511FFB0: swc1        $f10, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f10.u32l;
    // 0x1511FFB4: lwc1        $f16, 0x374($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X374);
L_1511FFB8:
    // 0x1511FFB8: swc1        $f16, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f16.u32l;
    // 0x1511FFBC: lwc1        $f18, 0x348($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X348);
    // 0x1511FFC0: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
    // 0x1511FFC4: lwc1        $f4, 0x354($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X354);
    // 0x1511FFC8: swc1        $f4, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f4.u32l;
L_1511FFCC:
    // 0x1511FFCC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1511FFD0: lwc1        $f0, 0x2C0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X2C0);
    // 0x1511FFD4: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x1511FFD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1511FFDC: swc1        $f0, 0x35C($a2)
    MEM_W(0X35C, ctx->r6) = ctx->f0.u32l;
    // 0x1511FFE0: swc1        $f0, 0x354($a2)
    MEM_W(0X354, ctx->r6) = ctx->f0.u32l;
    // 0x1511FFE4: swc1        $f6, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f6.u32l;
    // 0x1511FFE8: swc1        $f2, 0x348($a2)
    MEM_W(0X348, ctx->r6) = ctx->f2.u32l;
    // 0x1511FFEC: lwc1        $f8, 0x34($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X34);
    // 0x1511FFF0: lw          $t9, 0x3D4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X3D4);
    // 0x1511FFF4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x1511FFF8: beq         $a1, $zero, L_15120048
    if (ctx->r5 == 0) {
        // 0x1511FFFC: swc1        $f8, 0x16C($t9)
        MEM_W(0X16C, ctx->r25) = ctx->f8.u32l;
            goto L_15120048;
    }
    // 0x1511FFFC: swc1        $f8, 0x16C($t9)
    MEM_W(0X16C, ctx->r25) = ctx->f8.u32l;
    // 0x15120000: beq         $a1, $at, L_15120048
    if (ctx->r5 == ctx->r1) {
        // 0x15120004: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_15120048;
    }
    // 0x15120004: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x15120008: beq         $a1, $at, L_15120048
    if (ctx->r5 == ctx->r1) {
        // 0x1512000C: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_15120048;
    }
    // 0x1512000C: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x15120010: beq         $a1, $at, L_15120048
    if (ctx->r5 == ctx->r1) {
        // 0x15120014: addiu       $at, $zero, 0x39
        ctx->r1 = ADD32(0, 0X39);
            goto L_15120048;
    }
    // 0x15120014: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x15120018: beq         $a1, $at, L_15120048
    if (ctx->r5 == ctx->r1) {
        // 0x1512001C: addiu       $at, $zero, 0x37
        ctx->r1 = ADD32(0, 0X37);
            goto L_15120048;
    }
    // 0x1512001C: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x15120020: beq         $a1, $at, L_15120048
    if (ctx->r5 == ctx->r1) {
        // 0x15120024: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_15120048;
    }
    // 0x15120024: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x15120028: beq         $a1, $at, L_15120048
    if (ctx->r5 == ctx->r1) {
        // 0x1512002C: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_15120048;
    }
    // 0x1512002C: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x15120030: beq         $a1, $at, L_15120048
    if (ctx->r5 == ctx->r1) {
        // 0x15120034: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_15120048;
    }
    // 0x15120034: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x15120038: beq         $a1, $at, L_15120048
    if (ctx->r5 == ctx->r1) {
        // 0x1512003C: addiu       $at, $zero, 0x3A
        ctx->r1 = ADD32(0, 0X3A);
            goto L_15120048;
    }
    // 0x1512003C: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x15120040: bnel        $a1, $at, L_15120058
    if (ctx->r5 != ctx->r1) {
        // 0x15120044: sw          $zero, 0x64($v1)
        MEM_W(0X64, ctx->r3) = 0;
            goto L_15120058;
    }
    goto skip_8;
    // 0x15120044: sw          $zero, 0x64($v1)
    MEM_W(0X64, ctx->r3) = 0;
    skip_8:
L_15120048:
    // 0x15120048: lwc1        $f10, 0x348($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X348);
    // 0x1512004C: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x15120050: swc1        $f16, 0x348($a2)
    MEM_W(0X348, ctx->r6) = ctx->f16.u32l;
    // 0x15120054: sw          $zero, 0x64($v1)
    MEM_W(0X64, ctx->r3) = 0;
L_15120058:
    // 0x15120058: lbu         $t0, 0x23C($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X23C);
    // 0x1512005C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15120060: sh          $v0, 0x73C($a2)
    MEM_H(0X73C, ctx->r6) = ctx->r2;
    // 0x15120064: beql        $t0, $zero, L_151200B4
    if (ctx->r8 == 0) {
        // 0x15120068: lwc1        $f0, 0x44($v1)
        ctx->f0.u32l = MEM_W(ctx->r3, 0X44);
            goto L_151200B4;
    }
    goto skip_9;
    // 0x15120068: lwc1        $f0, 0x44($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X44);
    skip_9:
    // 0x1512006C: lw          $t1, 0x3D0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X3D0);
    // 0x15120070: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15120074: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15120078: lwc1        $f18, 0x40($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X40);
    // 0x1512007C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15120080: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x15120084: swc1        $f6, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f6.u32l;
    // 0x15120088: lwc1        $f8, 0x34($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X34);
    // 0x1512008C: lwc1        $f4, 0x198($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X198);
    // 0x15120090: lwc1        $f6, 0x190($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X190);
    // 0x15120094: swc1        $f8, 0x37C($a2)
    MEM_W(0X37C, ctx->r6) = ctx->f8.u32l;
    // 0x15120098: lwc1        $f16, 0x3380($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3380);
    // 0x1512009C: lwc1        $f10, 0x37C($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X37C);
    // 0x151200A0: swc1        $f4, 0x194($a2)
    MEM_W(0X194, ctx->r6) = ctx->f4.u32l;
    // 0x151200A4: swc1        $f6, 0x18C($a2)
    MEM_W(0X18C, ctx->r6) = ctx->f6.u32l;
    // 0x151200A8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151200AC: swc1        $f18, 0x39C($a2)
    MEM_W(0X39C, ctx->r6) = ctx->f18.u32l;
    // 0x151200B0: lwc1        $f0, 0x44($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X44);
L_151200B4:
    // 0x151200B4: lwc1        $f8, 0x370($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X370);
    // 0x151200B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151200BC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x151200C0: nop

    // 0x151200C4: bc1f        L_151200E8
    if (!c1cs) {
        // 0x151200C8: nop
    
            goto L_151200E8;
    }
    // 0x151200C8: nop

    // 0x151200CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151200D0: lwc1        $f10, 0x3384($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3384);
    // 0x151200D4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151200D8: sb          $t2, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = ctx->r10;
    // 0x151200DC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151200E0: b           L_151200F8
    // 0x151200E4: swc1        $f16, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f16.u32l;
        goto L_151200F8;
    // 0x151200E4: swc1        $f16, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f16.u32l;
L_151200E8:
    // 0x151200E8: lwc1        $f18, 0x3388($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3388);
    // 0x151200EC: sb          $v0, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = ctx->r2;
    // 0x151200F0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151200F4: swc1        $f4, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f4.u32l;
L_151200F8:
    // 0x151200F8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x151200FC: beq         $a1, $at, L_15120124
    if (ctx->r5 == ctx->r1) {
        // 0x15120100: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15120124;
    }
    // 0x15120100: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15120104: beq         $a1, $at, L_15120124
    if (ctx->r5 == ctx->r1) {
        // 0x15120108: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_15120124;
    }
    // 0x15120108: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x1512010C: beq         $a1, $at, L_15120124
    if (ctx->r5 == ctx->r1) {
        // 0x15120110: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15120124;
    }
    // 0x15120110: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15120114: beq         $a1, $at, L_15120124
    if (ctx->r5 == ctx->r1) {
        // 0x15120118: addiu       $at, $zero, 0x34
        ctx->r1 = ADD32(0, 0X34);
            goto L_15120124;
    }
    // 0x15120118: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x1512011C: bnel        $a1, $at, L_15120138
    if (ctx->r5 != ctx->r1) {
        // 0x15120120: lw          $t5, 0x84($a2)
        ctx->r13 = MEM_W(ctx->r6, 0X84);
            goto L_15120138;
    }
    goto skip_10;
    // 0x15120120: lw          $t5, 0x84($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X84);
    skip_10:
L_15120124:
    // 0x15120124: lwc1        $f6, 0x374($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X374);
    // 0x15120128: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x1512012C: sb          $t3, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = ctx->r11;
    // 0x15120130: swc1        $f6, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f6.u32l;
    // 0x15120134: lw          $t5, 0x84($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X84);
L_15120138:
    // 0x15120138: addiu       $at, $zero, -0x281
    ctx->r1 = ADD32(0, -0X281);
    // 0x1512013C: and         $t4, $t5, $at
    ctx->r12 = ctx->r13 & ctx->r1;
    // 0x15120140: sw          $t4, 0x84($a2)
    MEM_W(0X84, ctx->r6) = ctx->r12;
    // 0x15120144: lwc1        $f8, 0x44($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X44);
    // 0x15120148: swc1        $f8, 0x374($a2)
    MEM_W(0X374, ctx->r6) = ctx->f8.u32l;
    // 0x1512014C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15120150: jr          $ra
    // 0x15120154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15120154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_151A5070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A5070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A5074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A5078: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151A507C: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x151A5080: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151A5084: beql        $v0, $zero, L_151A50B4
    if (ctx->r2 == 0) {
        // 0x151A5088: lbu         $t7, 0x19($a1)
        ctx->r15 = MEM_BU(ctx->r5, 0X19);
            goto L_151A50B4;
    }
    goto skip_0;
    // 0x151A5088: lbu         $t7, 0x19($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X19);
    skip_0:
    // 0x151A508C: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x151A5090: subu        $v0, $v0, $t6
    ctx->r2 = SUB32(ctx->r2, ctx->r14);
    // 0x151A5094: bgtzl       $v0, L_151A50B0
    if (SIGNED(ctx->r2) > 0) {
        // 0x151A5098: sw          $v0, 0x10($a1)
        MEM_W(0X10, ctx->r5) = ctx->r2;
            goto L_151A50B0;
    }
    goto skip_1;
    // 0x151A5098: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    skip_1:
    // 0x151A509C: jal         0x1516972C
    // 0x151A50A0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151A50A0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x151A50A4: b           L_151A5124
    // 0x151A50A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151A5124;
    // 0x151A50A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151A50AC: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
L_151A50B0:
    // 0x151A50B0: lbu         $t7, 0x19($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X19);
L_151A50B4:
    // 0x151A50B4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x151A50B8: bne         $t7, $zero, L_151A50CC
    if (ctx->r15 != 0) {
        // 0x151A50BC: nop
    
            goto L_151A50CC;
    }
    // 0x151A50BC: nop

    // 0x151A50C0: jal         0x10011FA0
    // 0x151A50C4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_10011FA0(rdram, ctx);
        goto after_1;
    // 0x151A50C4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x151A50C8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_151A50CC:
    // 0x151A50CC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x151A50D0: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x151A50D4: lbu         $t9, 0x18($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X18);
    // 0x151A50D8: lbu         $v0, 0x15($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X15);
    // 0x151A50DC: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x151A50E0: bne         $t9, $zero, L_151A5104
    if (ctx->r25 != 0) {
        // 0x151A50E4: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_151A5104;
    }
    // 0x151A50E4: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x151A50E8: subu        $v0, $v0, $t8
    ctx->r2 = SUB32(ctx->r2, ctx->r24);
    // 0x151A50EC: slti        $at, $v0, 0x90
    ctx->r1 = SIGNED(ctx->r2) < 0X90 ? 1 : 0;
    // 0x151A50F0: beq         $at, $zero, L_151A511C
    if (ctx->r1 == 0) {
        // 0x151A50F4: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_151A511C;
    }
    // 0x151A50F4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151A50F8: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
    // 0x151A50FC: b           L_151A511C
    // 0x151A5100: sb          $t0, 0x18($a1)
    MEM_B(0X18, ctx->r5) = ctx->r8;
        goto L_151A511C;
    // 0x151A5100: sb          $t0, 0x18($a1)
    MEM_B(0X18, ctx->r5) = ctx->r8;
L_151A5104:
    // 0x151A5104: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x151A5108: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x151A510C: bnel        $at, $zero, L_151A5120
    if (ctx->r1 != 0) {
        // 0x151A5110: sb          $v0, 0x15($a1)
        MEM_B(0X15, ctx->r5) = ctx->r2;
            goto L_151A5120;
    }
    goto skip_2;
    // 0x151A5110: sb          $v0, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r2;
    skip_2:
    // 0x151A5114: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x151A5118: sb          $zero, 0x18($a1)
    MEM_B(0X18, ctx->r5) = 0;
L_151A511C:
    // 0x151A511C: sb          $v0, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r2;
L_151A5120:
    // 0x151A5120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151A5124:
    // 0x151A5124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A5128: jr          $ra
    // 0x151A512C: nop

    return;
    return;
    // 0x151A512C: nop

;}
RECOMP_FUNC void func_15014F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15014F6C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x15014F70: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15014F74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15014F78: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15014F7C: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
    // 0x15014F80: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x15014F84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15014F88: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x15014F8C: sb          $t7, 0x16($s0)
    MEM_B(0X16, ctx->r16) = ctx->r15;
    // 0x15014F90: sb          $t8, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r24;
    // 0x15014F94: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    // 0x15014F98: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x15014F9C: beq         $t0, $zero, L_15014FAC
    if (ctx->r8 == 0) {
        // 0x15014FA0: nop
    
            goto L_15014FAC;
    }
    // 0x15014FA0: nop

    // 0x15014FA4: b           L_15014FAC
    // 0x15014FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15014FAC;
    // 0x15014FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15014FAC:
    // 0x15014FAC: sb          $v0, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r2;
    // 0x15014FB0: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x15014FB4: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    // 0x15014FB8: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x15014FBC: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x15014FC0: lw          $t3, 0x18($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X18);
    // 0x15014FC4: srl         $t4, $t3, 16
    ctx->r12 = S32(U32(ctx->r11) >> 16);
    // 0x15014FC8: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x15014FCC: jal         0x150ADA20
    // 0x15014FD0: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15014FD0: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    after_0:
    // 0x15014FD4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x15014FD8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x15014FDC: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x15014FE0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x15014FE4: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x15014FE8: mfhi        $t8
    ctx->r24 = hi;
    // 0x15014FEC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x15014FF0: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x15014FF4: bne         $t7, $zero, L_15015000
    if (ctx->r15 != 0) {
        // 0x15014FF8: nop
    
            goto L_15015000;
    }
    // 0x15014FF8: nop

    // 0x15014FFC: break       7
    do_break(352407548);
L_15015000:
    // 0x15015000: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x15015004: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x15015008: jal         0x150A8050
    // 0x1501500C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_150A8050(rdram, ctx);
        goto after_1;
    // 0x1501500C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x15015010: lh          $t1, 0x0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X0);
    // 0x15015014: addiu       $t4, $zero, 0x2A
    ctx->r12 = ADD32(0, 0X2A);
    // 0x15015018: addiu       $t5, $zero, 0x54
    ctx->r13 = ADD32(0, 0X54);
    // 0x1501501C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x15015020: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15015024: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x15015028: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1501502C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15015030: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x15015034: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15015038: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x1501503C: lh          $t2, 0x2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2);
    // 0x15015040: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x15015044: nop

    // 0x15015048: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1501504C: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x15015050: lh          $t3, 0x4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X4);
    // 0x15015054: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15015058: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x1501505C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x15015060: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15015064: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x15015068: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1501506C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15015070: jal         0x15149130
    // 0x15015074: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    func_15149130(rdram, ctx);
        goto after_2;
    // 0x15015074: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x15015078: beq         $v0, $zero, L_1501508C
    if (ctx->r2 == 0) {
        // 0x1501507C: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1501508C;
    }
    // 0x1501507C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15015080: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x15015084: jal         0x10022EC0
    // 0x15015088: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x15015088: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
    after_3:
L_1501508C:
    // 0x1501508C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15015090: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15015094: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15015098: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x1501509C: jr          $ra
    // 0x150150A0: nop

    return;
    return;
    // 0x150150A0: nop

;}
RECOMP_FUNC void func_1516A770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516A770: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x1516A774: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1516A778: addiu       $a1, $zero, 0xBD
    ctx->r5 = ADD32(0, 0XBD);
    // 0x1516A77C: beql        $v0, $zero, L_1516A7A8
    if (ctx->r2 == 0) {
        // 0x1516A780: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1516A7A8;
    }
    goto skip_0;
    // 0x1516A780: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
L_1516A784:
    // 0x1516A784: bnel        $a1, $v0, L_1516A798
    if (ctx->r5 != ctx->r2) {
        // 0x1516A788: lbu         $v0, 0x1($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X1);
            goto L_1516A798;
    }
    goto skip_1;
    // 0x1516A788: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    skip_1:
    // 0x1516A78C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x1516A790: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1516A794: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
L_1516A798:
    // 0x1516A798: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1516A79C: bne         $v0, $zero, L_1516A784
    if (ctx->r2 != 0) {
        // 0x1516A7A0: nop
    
            goto L_1516A784;
    }
    // 0x1516A7A0: nop

    // 0x1516A7A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1516A7A8:
    // 0x1516A7A8: jr          $ra
    // 0x1516A7AC: nop

    return;
    return;
    // 0x1516A7AC: nop

;}

#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_15188A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15188A9C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15188AA0: lw          $v0, -0x838($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X838);
    // 0x15188AA4: beq         $v0, $zero, L_15188AC8
    if (ctx->r2 == 0) {
        // 0x15188AA8: nop
    
            goto L_15188AC8;
    }
    // 0x15188AA8: nop

    // 0x15188AAC: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
L_15188AB0:
    // 0x15188AB0: bnel        $a0, $t6, L_15188AC0
    if (ctx->r4 != ctx->r14) {
        // 0x15188AB4: lw          $v0, 0xC($v0)
        ctx->r2 = MEM_W(ctx->r2, 0XC);
            goto L_15188AC0;
    }
    goto skip_0;
    // 0x15188AB4: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x15188AB8: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x15188ABC: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
L_15188AC0:
    // 0x15188AC0: bnel        $v0, $zero, L_15188AB0
    if (ctx->r2 != 0) {
        // 0x15188AC4: lw          $t6, 0x10($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X10);
            goto L_15188AB0;
    }
    goto skip_1;
    // 0x15188AC4: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    skip_1:
L_15188AC8:
    // 0x15188AC8: jr          $ra
    // 0x15188ACC: nop

    return;
    return;
    // 0x15188ACC: nop

;}
RECOMP_FUNC void func_1507E3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507E3C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1507E3C4: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x1507E3C8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1507E3CC: addiu       $v1, $sp, 0x14
    ctx->r3 = ADD32(ctx->r29, 0X14);
    // 0x1507E3D0: beq         $v0, $at, L_1507E3E8
    if (ctx->r2 == ctx->r1) {
        // 0x1507E3D4: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_1507E3E8;
    }
    // 0x1507E3D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1507E3D8: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x1507E3DC: beq         $v0, $at, L_1507E3E8
    if (ctx->r2 == ctx->r1) {
        // 0x1507E3E0: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_1507E3E8;
    }
    // 0x1507E3E0: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x1507E3E4: bne         $v0, $at, L_1507E4F8
    if (ctx->r2 != ctx->r1) {
        // 0x1507E3E8: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_1507E4F8;
    }
L_1507E3E8:
    // 0x1507E3E8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x1507E3EC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1507E3F0: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    // 0x1507E3F4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_1507E3F8:
    // 0x1507E3F8: lbu         $t6, 0x6C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X6C);
    // 0x1507E3FC: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x1507E400: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x1507E404: bne         $at, $zero, L_1507E438
    if (ctx->r1 != 0) {
        // 0x1507E408: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_1507E438;
    }
    // 0x1507E408: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x1507E40C: addiu       $v0, $t6, -0xA
    ctx->r2 = ADD32(ctx->r14, -0XA);
    // 0x1507E410: bne         $a2, $v0, L_1507E420
    if (ctx->r6 != ctx->r2) {
        // 0x1507E414: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_1507E420;
    }
    // 0x1507E414: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x1507E418: b           L_1507E448
    // 0x1507E41C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_1507E448;
    // 0x1507E41C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_1507E420:
    // 0x1507E420: bne         $t0, $v0, L_1507E430
    if (ctx->r8 != ctx->r2) {
        // 0x1507E424: nop
    
            goto L_1507E430;
    }
    // 0x1507E424: nop

    // 0x1507E428: b           L_1507E448
    // 0x1507E42C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_1507E448;
    // 0x1507E42C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_1507E430:
    // 0x1507E430: b           L_1507E448
    // 0x1507E434: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_1507E448;
    // 0x1507E434: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_1507E438:
    // 0x1507E438: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x1507E43C: beq         $at, $zero, L_1507E448
    if (ctx->r1 == 0) {
        // 0x1507E440: addiu       $t8, $v0, 0x1
        ctx->r24 = ADD32(ctx->r2, 0X1);
            goto L_1507E448;
    }
    // 0x1507E440: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x1507E444: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_1507E448:
    // 0x1507E448: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1507E44C: bne         $v1, $a3, L_1507E3F8
    if (ctx->r3 != ctx->r7) {
        // 0x1507E450: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_1507E3F8;
    }
    // 0x1507E450: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1507E454: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x1507E458: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x1507E45C: ori         $t2, $t9, 0x7E
    ctx->r10 = ctx->r25 | 0X7E;
    // 0x1507E460: sw          $t2, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r10;
    // 0x1507E464: lw          $t3, 0x14($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14);
    // 0x1507E468: and         $t5, $t2, $at
    ctx->r13 = ctx->r10 & ctx->r1;
    // 0x1507E46C: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x1507E470: bne         $t3, $zero, L_1507E480
    if (ctx->r11 != 0) {
        // 0x1507E474: nop
    
            goto L_1507E480;
    }
    // 0x1507E474: nop

    // 0x1507E478: b           L_1507E4AC
    // 0x1507E47C: sw          $t5, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r13;
        goto L_1507E4AC;
    // 0x1507E47C: sw          $t5, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r13;
L_1507E480:
    // 0x1507E480: bnel        $t0, $t6, L_1507E4A0
    if (ctx->r8 != ctx->r14) {
        // 0x1507E484: lw          $t9, 0x94($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X94);
            goto L_1507E4A0;
    }
    goto skip_0;
    // 0x1507E484: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    skip_0:
    // 0x1507E488: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
    // 0x1507E48C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x1507E490: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x1507E494: b           L_1507E4AC
    // 0x1507E498: sw          $t8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r24;
        goto L_1507E4AC;
    // 0x1507E498: sw          $t8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r24;
    // 0x1507E49C: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
L_1507E4A0:
    // 0x1507E4A0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x1507E4A4: and         $t2, $t9, $at
    ctx->r10 = ctx->r25 & ctx->r1;
    // 0x1507E4A8: sw          $t2, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r10;
L_1507E4AC:
    // 0x1507E4AC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x1507E4B0: bne         $v0, $zero, L_1507E4CC
    if (ctx->r2 != 0) {
        // 0x1507E4B4: nop
    
            goto L_1507E4CC;
    }
    // 0x1507E4B4: nop

    // 0x1507E4B8: lw          $t3, 0x94($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X94);
    // 0x1507E4BC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x1507E4C0: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x1507E4C4: b           L_1507E4F8
    // 0x1507E4C8: sw          $t4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r12;
        goto L_1507E4F8;
    // 0x1507E4C8: sw          $t4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r12;
L_1507E4CC:
    // 0x1507E4CC: bnel        $t0, $v0, L_1507E4EC
    if (ctx->r8 != ctx->r2) {
        // 0x1507E4D0: lw          $t7, 0x94($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X94);
            goto L_1507E4EC;
    }
    goto skip_1;
    // 0x1507E4D0: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
    skip_1:
    // 0x1507E4D4: lw          $t5, 0x94($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X94);
    // 0x1507E4D8: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x1507E4DC: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x1507E4E0: b           L_1507E4F8
    // 0x1507E4E4: sw          $t6, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r14;
        goto L_1507E4F8;
    // 0x1507E4E4: sw          $t6, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r14;
    // 0x1507E4E8: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
L_1507E4EC:
    // 0x1507E4EC: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x1507E4F0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x1507E4F4: sw          $t8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r24;
L_1507E4F8:
    // 0x1507E4F8: jr          $ra
    // 0x1507E4FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1507E4FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_15131C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15131C2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15131C30: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15131C34: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15131C38: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15131C3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15131C40: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x15131C44: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x15131C48: beql        $t8, $zero, L_15131C78
    if (ctx->r24 == 0) {
        // 0x15131C4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15131C78;
    }
    goto skip_0;
    // 0x15131C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15131C50: lbu         $t9, 0x75($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X75);
    // 0x15131C54: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x15131C58: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x15131C5C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x15131C60: lw          $v0, -0x6788($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6788);
    // 0x15131C64: beql        $v0, $zero, L_15131C78
    if (ctx->r2 == 0) {
        // 0x15131C68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15131C78;
    }
    goto skip_1;
    // 0x15131C68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15131C6C: jalr        $v0
    // 0x15131C70: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x15131C70: nop

    after_0:
    // 0x15131C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15131C78:
    // 0x15131C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15131C7C: jr          $ra
    // 0x15131C80: nop

    return;
    return;
    // 0x15131C80: nop

;}
RECOMP_FUNC void func_1505D1C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505D1C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1505D1C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1505D1CC: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x1505D1D0: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x1505D1D4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1505D1D8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x1505D1DC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1505D1E0: lbu         $t6, 0x3E78($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3E78);
    // 0x1505D1E4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1505D1E8: addiu       $a0, $a0, 0x121C
    ctx->r4 = ADD32(ctx->r4, 0X121C);
    // 0x1505D1EC: jal         0x1505F188
    // 0x1505D1F0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_1505F188(rdram, ctx);
        goto after_0;
    // 0x1505D1F0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_0:
    // 0x1505D1F4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1505D1F8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1505D1FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1505D200: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1505D204: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D208: swc1        $f4, 0x1230($at)
    MEM_W(0X1230, ctx->r1) = ctx->f4.u32l;
    // 0x1505D20C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1505D210: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D214: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x1505D218: swc1        $f6, 0x1234($at)
    MEM_W(0X1234, ctx->r1) = ctx->f6.u32l;
    // 0x1505D21C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D220: swc1        $f8, 0x1238($at)
    MEM_W(0X1238, ctx->r1) = ctx->f8.u32l;
    // 0x1505D224: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x1505D228: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D22C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x1505D230: sb          $t8, 0x1340($at)
    MEM_B(0X1340, ctx->r1) = ctx->r24;
    // 0x1505D234: lhu         $t0, 0x36($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X36);
    // 0x1505D238: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D23C: sb          $t9, 0x1359($at)
    MEM_B(0X1359, ctx->r1) = ctx->r25;
    // 0x1505D240: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D244: sh          $t0, 0x1292($at)
    MEM_H(0X1292, ctx->r1) = ctx->r8;
    // 0x1505D248: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x1505D24C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1505D250: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x1505D254: sb          $t1, 0x3E78($at)
    MEM_B(0X3E78, ctx->r1) = ctx->r9;
    // 0x1505D258: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D25C: sw          $t2, 0x1510($at)
    MEM_W(0X1510, ctx->r1) = ctx->r10;
    // 0x1505D260: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1505D264: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505D268: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1505D26C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D270: swc1        $f10, 0x1330($at)
    MEM_W(0X1330, ctx->r1) = ctx->f10.u32l;
    // 0x1505D274: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D278: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x1505D27C: sb          $t5, 0x12EC($at)
    MEM_B(0X12EC, ctx->r1) = ctx->r13;
    // 0x1505D280: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D284: swc1        $f0, 0x1368($at)
    MEM_W(0X1368, ctx->r1) = ctx->f0.u32l;
    // 0x1505D288: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D28C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1505D290: addiu       $a0, $a0, 0x121C
    ctx->r4 = ADD32(ctx->r4, 0X121C);
    // 0x1505D294: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x1505D298: jal         0x1505C7D8
    // 0x1505D29C: swc1        $f0, 0x136C($at)
    MEM_W(0X136C, ctx->r1) = ctx->f0.u32l;
    func_1505C7D8(rdram, ctx);
        goto after_1;
    // 0x1505D29C: swc1        $f0, 0x136C($at)
    MEM_W(0X136C, ctx->r1) = ctx->f0.u32l;
    after_1:
    // 0x1505D2A0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x1505D2A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1505D2A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1505D2AC: sb          $t6, 0x3E78($at)
    MEM_B(0X3E78, ctx->r1) = ctx->r14;
    // 0x1505D2B0: jr          $ra
    // 0x1505D2B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1505D2B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1507515C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507515C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15075160: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x15075164: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15075168: lw          $t6, -0x3D30($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D30);
    // 0x1507516C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x15075170: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15075174: beq         $t6, $zero, L_150751E0
    if (ctx->r14 == 0) {
        // 0x15075178: addiu       $v1, $v1, -0x3A04
        ctx->r3 = ADD32(ctx->r3, -0X3A04);
            goto L_150751E0;
    }
    // 0x15075178: addiu       $v1, $v1, -0x3A04
    ctx->r3 = ADD32(ctx->r3, -0X3A04);
    // 0x1507517C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15075180: lbu         $t7, -0x3D2C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3D2C);
    // 0x15075184: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15075188: addiu       $a3, $zero, 0x32C
    ctx->r7 = ADD32(0, 0X32C);
    // 0x1507518C: beql        $a2, $t7, L_150751E4
    if (ctx->r6 == ctx->r15) {
        // 0x15075190: lw          $t3, 0x0($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X0);
            goto L_150751E4;
    }
    goto skip_0;
    // 0x15075190: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x15075194: subu        $t8, $a0, $a1
    ctx->r24 = SUB32(ctx->r4, ctx->r5);
    // 0x15075198: div         $zero, $t8, $a3
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r7)));
    // 0x1507519C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150751A0: lbu         $t2, -0x3CCB($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X3CCB);
    // 0x150751A4: mflo        $t9
    ctx->r25 = lo;
    // 0x150751A8: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x150751AC: bne         $a3, $zero, L_150751B8
    if (ctx->r7 != 0) {
        // 0x150751B0: nop
    
            goto L_150751B8;
    }
    // 0x150751B0: nop

    // 0x150751B4: break       7
    do_break(352801204);
L_150751B8:
    // 0x150751B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150751BC: bne         $a3, $at, L_150751D0
    if (ctx->r7 != ctx->r1) {
        // 0x150751C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150751D0;
    }
    // 0x150751C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150751C4: bne         $t8, $at, L_150751D0
    if (ctx->r24 != ctx->r1) {
        // 0x150751C8: nop
    
            goto L_150751D0;
    }
    // 0x150751C8: nop

    // 0x150751CC: break       6
    do_break(352801228);
L_150751D0:
    // 0x150751D0: bnel        $t1, $t2, L_150751E4
    if (ctx->r9 != ctx->r10) {
        // 0x150751D4: lw          $t3, 0x0($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X0);
            goto L_150751E4;
    }
    goto skip_1;
    // 0x150751D4: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x150751D8: jr          $ra
    // 0x150751DC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    return;
    // 0x150751DC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_150751E0:
    // 0x150751E0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
L_150751E4:
    // 0x150751E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150751E8: addiu       $a3, $zero, 0x32C
    ctx->r7 = ADD32(0, 0X32C);
    // 0x150751EC: beq         $t3, $zero, L_15075248
    if (ctx->r11 == 0) {
        // 0x150751F0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_15075248;
    }
    // 0x150751F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x150751F4: lbu         $t4, 0x4($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X4);
    // 0x150751F8: beql        $a2, $t4, L_1507524C
    if (ctx->r6 == ctx->r12) {
        // 0x150751FC: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_1507524C;
    }
    goto skip_2;
    // 0x150751FC: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    skip_2:
    // 0x15075200: subu        $t5, $a0, $a1
    ctx->r13 = SUB32(ctx->r4, ctx->r5);
    // 0x15075204: div         $zero, $t5, $a3
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r7)));
    // 0x15075208: lbu         $t8, 0x65($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X65);
    // 0x1507520C: mflo        $t6
    ctx->r14 = lo;
    // 0x15075210: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x15075214: bne         $a3, $zero, L_15075220
    if (ctx->r7 != 0) {
        // 0x15075218: nop
    
            goto L_15075220;
    }
    // 0x15075218: nop

    // 0x1507521C: break       7
    do_break(352801308);
L_15075220:
    // 0x15075220: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15075224: bne         $a3, $at, L_15075238
    if (ctx->r7 != ctx->r1) {
        // 0x15075228: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15075238;
    }
    // 0x15075228: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1507522C: bne         $t5, $at, L_15075238
    if (ctx->r13 != ctx->r1) {
        // 0x15075230: nop
    
            goto L_15075238;
    }
    // 0x15075230: nop

    // 0x15075234: break       6
    do_break(352801332);
L_15075238:
    // 0x15075238: bnel        $t7, $t8, L_1507524C
    if (ctx->r15 != ctx->r24) {
        // 0x1507523C: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_1507524C;
    }
    goto skip_3;
    // 0x1507523C: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    skip_3:
    // 0x15075240: jr          $ra
    // 0x15075244: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15075244: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15075248:
    // 0x15075248: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
L_1507524C:
    // 0x1507524C: addiu       $t0, $zero, 0x1A
    ctx->r8 = ADD32(0, 0X1A);
L_15075250:
    // 0x15075250: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x15075254: beql        $t9, $zero, L_150752B4
    if (ctx->r25 == 0) {
        // 0x15075258: lw          $t6, 0x32C($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X32C);
            goto L_150752B4;
    }
    goto skip_4;
    // 0x15075258: lw          $t6, 0x32C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X32C);
    skip_4:
    // 0x1507525C: lbu         $t1, 0x4($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X4);
    // 0x15075260: beql        $a2, $t1, L_150752B4
    if (ctx->r6 == ctx->r9) {
        // 0x15075264: lw          $t6, 0x32C($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X32C);
            goto L_150752B4;
    }
    goto skip_5;
    // 0x15075264: lw          $t6, 0x32C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X32C);
    skip_5:
    // 0x15075268: subu        $t2, $a0, $a1
    ctx->r10 = SUB32(ctx->r4, ctx->r5);
    // 0x1507526C: div         $zero, $t2, $a3
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r7)));
    // 0x15075270: lbu         $t5, 0x65($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X65);
    // 0x15075274: mflo        $t3
    ctx->r11 = lo;
    // 0x15075278: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x1507527C: bne         $a3, $zero, L_15075288
    if (ctx->r7 != 0) {
        // 0x15075280: nop
    
            goto L_15075288;
    }
    // 0x15075280: nop

    // 0x15075284: break       7
    do_break(352801412);
L_15075288:
    // 0x15075288: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1507528C: bne         $a3, $at, L_150752A0
    if (ctx->r7 != ctx->r1) {
        // 0x15075290: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150752A0;
    }
    // 0x15075290: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15075294: bne         $t2, $at, L_150752A0
    if (ctx->r10 != ctx->r1) {
        // 0x15075298: nop
    
            goto L_150752A0;
    }
    // 0x15075298: nop

    // 0x1507529C: break       6
    do_break(352801436);
L_150752A0:
    // 0x150752A0: bnel        $t4, $t5, L_150752B4
    if (ctx->r12 != ctx->r13) {
        // 0x150752A4: lw          $t6, 0x32C($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X32C);
            goto L_150752B4;
    }
    goto skip_6;
    // 0x150752A4: lw          $t6, 0x32C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X32C);
    skip_6:
    // 0x150752A8: jr          $ra
    // 0x150752AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x150752AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150752B0: lw          $t6, 0x32C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X32C);
L_150752B4:
    // 0x150752B4: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x150752B8: beql        $t6, $zero, L_15075318
    if (ctx->r14 == 0) {
        // 0x150752BC: lw          $t3, 0x32C($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X32C);
            goto L_15075318;
    }
    goto skip_7;
    // 0x150752BC: lw          $t3, 0x32C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X32C);
    skip_7:
    // 0x150752C0: lbu         $t7, 0x4($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4);
    // 0x150752C4: beql        $a2, $t7, L_15075318
    if (ctx->r6 == ctx->r15) {
        // 0x150752C8: lw          $t3, 0x32C($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X32C);
            goto L_15075318;
    }
    goto skip_8;
    // 0x150752C8: lw          $t3, 0x32C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X32C);
    skip_8:
    // 0x150752CC: subu        $t8, $a0, $a1
    ctx->r24 = SUB32(ctx->r4, ctx->r5);
    // 0x150752D0: div         $zero, $t8, $a3
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r7)));
    // 0x150752D4: lbu         $t2, 0x65($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X65);
    // 0x150752D8: mflo        $t9
    ctx->r25 = lo;
    // 0x150752DC: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x150752E0: bne         $a3, $zero, L_150752EC
    if (ctx->r7 != 0) {
        // 0x150752E4: nop
    
            goto L_150752EC;
    }
    // 0x150752E4: nop

    // 0x150752E8: break       7
    do_break(352801512);
L_150752EC:
    // 0x150752EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150752F0: bne         $a3, $at, L_15075304
    if (ctx->r7 != ctx->r1) {
        // 0x150752F4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15075304;
    }
    // 0x150752F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150752F8: bne         $t8, $at, L_15075304
    if (ctx->r24 != ctx->r1) {
        // 0x150752FC: nop
    
            goto L_15075304;
    }
    // 0x150752FC: nop

    // 0x15075300: break       6
    do_break(352801536);
L_15075304:
    // 0x15075304: bnel        $t1, $t2, L_15075318
    if (ctx->r9 != ctx->r10) {
        // 0x15075308: lw          $t3, 0x32C($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X32C);
            goto L_15075318;
    }
    goto skip_9;
    // 0x15075308: lw          $t3, 0x32C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X32C);
    skip_9:
    // 0x1507530C: jr          $ra
    // 0x15075310: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15075310: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15075314: lw          $t3, 0x32C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X32C);
L_15075318:
    // 0x15075318: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x1507531C: beql        $t3, $zero, L_1507537C
    if (ctx->r11 == 0) {
        // 0x15075320: lw          $t9, 0x32C($v1)
        ctx->r25 = MEM_W(ctx->r3, 0X32C);
            goto L_1507537C;
    }
    goto skip_10;
    // 0x15075320: lw          $t9, 0x32C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X32C);
    skip_10:
    // 0x15075324: lbu         $t4, 0x4($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X4);
    // 0x15075328: beql        $a2, $t4, L_1507537C
    if (ctx->r6 == ctx->r12) {
        // 0x1507532C: lw          $t9, 0x32C($v1)
        ctx->r25 = MEM_W(ctx->r3, 0X32C);
            goto L_1507537C;
    }
    goto skip_11;
    // 0x1507532C: lw          $t9, 0x32C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X32C);
    skip_11:
    // 0x15075330: subu        $t5, $a0, $a1
    ctx->r13 = SUB32(ctx->r4, ctx->r5);
    // 0x15075334: div         $zero, $t5, $a3
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r7)));
    // 0x15075338: lbu         $t8, 0x65($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X65);
    // 0x1507533C: mflo        $t6
    ctx->r14 = lo;
    // 0x15075340: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x15075344: bne         $a3, $zero, L_15075350
    if (ctx->r7 != 0) {
        // 0x15075348: nop
    
            goto L_15075350;
    }
    // 0x15075348: nop

    // 0x1507534C: break       7
    do_break(352801612);
L_15075350:
    // 0x15075350: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15075354: bne         $a3, $at, L_15075368
    if (ctx->r7 != ctx->r1) {
        // 0x15075358: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15075368;
    }
    // 0x15075358: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1507535C: bne         $t5, $at, L_15075368
    if (ctx->r13 != ctx->r1) {
        // 0x15075360: nop
    
            goto L_15075368;
    }
    // 0x15075360: nop

    // 0x15075364: break       6
    do_break(352801636);
L_15075368:
    // 0x15075368: bnel        $t7, $t8, L_1507537C
    if (ctx->r15 != ctx->r24) {
        // 0x1507536C: lw          $t9, 0x32C($v1)
        ctx->r25 = MEM_W(ctx->r3, 0X32C);
            goto L_1507537C;
    }
    goto skip_12;
    // 0x1507536C: lw          $t9, 0x32C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X32C);
    skip_12:
    // 0x15075370: jr          $ra
    // 0x15075374: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15075374: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15075378: lw          $t9, 0x32C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X32C);
L_1507537C:
    // 0x1507537C: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x15075380: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15075384: beq         $t9, $zero, L_150753E0
    if (ctx->r25 == 0) {
        // 0x15075388: nop
    
            goto L_150753E0;
    }
    // 0x15075388: nop

    // 0x1507538C: lbu         $t1, 0x4($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X4);
    // 0x15075390: beq         $a2, $t1, L_150753E0
    if (ctx->r6 == ctx->r9) {
        // 0x15075394: nop
    
            goto L_150753E0;
    }
    // 0x15075394: nop

    // 0x15075398: subu        $t2, $a0, $a1
    ctx->r10 = SUB32(ctx->r4, ctx->r5);
    // 0x1507539C: div         $zero, $t2, $a3
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r7)));
    // 0x150753A0: lbu         $t5, 0x65($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X65);
    // 0x150753A4: mflo        $t3
    ctx->r11 = lo;
    // 0x150753A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x150753AC: bne         $a3, $zero, L_150753B8
    if (ctx->r7 != 0) {
        // 0x150753B0: nop
    
            goto L_150753B8;
    }
    // 0x150753B0: nop

    // 0x150753B4: break       7
    do_break(352801716);
L_150753B8:
    // 0x150753B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150753BC: bne         $a3, $at, L_150753D0
    if (ctx->r7 != ctx->r1) {
        // 0x150753C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150753D0;
    }
    // 0x150753C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150753C4: bne         $t2, $at, L_150753D0
    if (ctx->r10 != ctx->r1) {
        // 0x150753C8: nop
    
            goto L_150753D0;
    }
    // 0x150753C8: nop

    // 0x150753CC: break       6
    do_break(352801740);
L_150753D0:
    // 0x150753D0: bne         $t4, $t5, L_150753E0
    if (ctx->r12 != ctx->r13) {
        // 0x150753D4: nop
    
            goto L_150753E0;
    }
    // 0x150753D4: nop

    // 0x150753D8: jr          $ra
    // 0x150753DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x150753DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_150753E0:
    // 0x150753E0: bne         $v0, $t0, L_15075250
    if (ctx->r2 != ctx->r8) {
        // 0x150753E4: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_15075250;
    }
    // 0x150753E4: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x150753E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150753EC: jr          $ra
    // 0x150753F0: nop

    return;
    return;
    // 0x150753F0: nop

    // 0x150753F4: nop

    // 0x150753F8: nop

    // 0x150753FC: nop

;}
RECOMP_FUNC void func_151D42E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D42E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D42EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151D42F0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151D42F4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151D42F8: beq         $a1, $zero, L_151D43B8
    if (ctx->r5 == 0) {
        // 0x151D42FC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_151D43B8;
    }
    // 0x151D42FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151D4300: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151D4304: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
    // 0x151D4308: jal         0x150484A0
    // 0x151D430C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_150484A0(rdram, ctx);
        goto after_0;
    // 0x151D430C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x151D4310: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D4314: lwc1        $f4, -0x4E30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4E30);
    // 0x151D4318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151D431C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x151D4320: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151D4324: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151D4328: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x151D432C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x151D4330: nop

    // 0x151D4334: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x151D4338: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x151D433C: nop

    // 0x151D4340: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x151D4344: beql        $v0, $zero, L_151D4394
    if (ctx->r2 == 0) {
        // 0x151D4348: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_151D4394;
    }
    goto skip_0;
    // 0x151D4348: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x151D434C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151D4350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151D4354: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151D4358: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x151D435C: nop

    // 0x151D4360: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x151D4364: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x151D4368: nop

    // 0x151D436C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x151D4370: bne         $v0, $zero, L_151D4388
    if (ctx->r2 != 0) {
        // 0x151D4374: nop
    
            goto L_151D4388;
    }
    // 0x151D4374: nop

    // 0x151D4378: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x151D437C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151D4380: b           L_151D43A0
    // 0x151D4384: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_151D43A0;
    // 0x151D4384: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_151D4388:
    // 0x151D4388: b           L_151D43A0
    // 0x151D438C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_151D43A0;
    // 0x151D438C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x151D4390: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_151D4394:
    // 0x151D4394: nop

    // 0x151D4398: bltz        $v0, L_151D4388
    if (SIGNED(ctx->r2) < 0) {
        // 0x151D439C: nop
    
            goto L_151D4388;
    }
    // 0x151D439C: nop

L_151D43A0:
    // 0x151D43A0: or          $t7, $v0, $zero
    ctx->r15 = ctx->r2 | 0;
    // 0x151D43A4: addiu       $v0, $t7, -0x4000
    ctx->r2 = ADD32(ctx->r15, -0X4000);
    // 0x151D43A8: ori         $t8, $v0, 0x1
    ctx->r24 = ctx->r2 | 0X1;
    // 0x151D43AC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x151D43B0: b           L_151D43B8
    // 0x151D43B4: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
        goto L_151D43B8;
    // 0x151D43B4: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
L_151D43B8:
    // 0x151D43B8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x151D43BC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x151D43C0: addiu       $t1, $t1, -0x3D30
    ctx->r9 = ADD32(ctx->r9, -0X3D30);
    // 0x151D43C4: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x151D43C8: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x151D43CC: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x151D43D0: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151D43D4: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151D43D8: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x151D43DC: mflo        $t3
    ctx->r11 = lo;
    // 0x151D43E0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151D43E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151D43E8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151D43EC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x151D43F0: jal         0x1505D1C4
    // 0x151D43F4: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    func_1505D1C4(rdram, ctx);
        goto after_1;
    // 0x151D43F4: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x151D43F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151D43FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D4400: jr          $ra
    // 0x151D4404: nop

    return;
    return;
    // 0x151D4404: nop

;}
RECOMP_FUNC void func_10011FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10011FEC: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x10011FF0: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x10011FF4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10011FF8: addiu       $a0, $a0, 0x2774
    ctx->r4 = ADD32(ctx->r4, 0X2774);
    // 0x10011FFC: addiu       $v1, $v1, 0x2778
    ctx->r3 = ADD32(ctx->r3, 0X2778);
    // 0x10012000: addiu       $v0, $v0, 0x277C
    ctx->r2 = ADD32(ctx->r2, 0X277C);
    // 0x10012004: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x10012008: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x1001200C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x10012010: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10012014: sw          $zero, 0x2770($at)
    MEM_W(0X2770, ctx->r1) = 0;
    // 0x10012018: jr          $ra
    // 0x1001201C: nop

    return;
    return;
    // 0x1001201C: nop

;}
RECOMP_FUNC void func_15070224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15070224: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15070228: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1507022C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x15070230: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x15070234: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x15070238: sb          $t6, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r14;
    // 0x1507023C: jal         0x150ADA20
    // 0x15070240: sb          $t7, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15070240: sb          $t7, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r15;
    after_0:
    // 0x15070244: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15070248: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1507024C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15070250: lw          $v1, 0x154C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154C);
    // 0x15070254: mfhi        $t8
    ctx->r24 = hi;
    // 0x15070258: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x1507025C: sh          $t9, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r25;
    // 0x15070260: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x15070264: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x15070268: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1507026C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x15070270: nop

    // 0x15070274: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x15070278: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1507027C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15070280: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x15070284: nop

    // 0x15070288: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x1507028C: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x15070290: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15070294: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x15070298: jal         0x150ADA20
    // 0x1507029C: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1507029C: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    after_1:
    // 0x150702A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150702A4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150702A8: mfhi        $a2
    ctx->r6 = hi;
    // 0x150702AC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150702B0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150702B4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150702B8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150702BC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150702C0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x150702C4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x150702C8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150702CC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150702D0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150702D4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x150702D8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x150702DC: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x150702E0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150702E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150702E8: jal         0x151602C0
    // 0x150702EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_151602C0(rdram, ctx);
        goto after_2;
    // 0x150702EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_2:
    // 0x150702F0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150702F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150702F8: jr          $ra
    // 0x150702FC: nop

    return;
    return;
    // 0x150702FC: nop

;}
RECOMP_FUNC void func_1506DDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DDC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506DDC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506DDC8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1506DDCC: jal         0x15178E50
    // 0x1506DDD0: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_15178E50(rdram, ctx);
        goto after_0;
    // 0x1506DDD0: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_0:
    // 0x1506DDD4: beq         $v0, $zero, L_1506DDF4
    if (ctx->r2 == 0) {
        // 0x1506DDD8: lui         $a0, 0x800C
        ctx->r4 = S32(0X800C << 16);
            goto L_1506DDF4;
    }
    // 0x1506DDD8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1506DDDC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506DDE0: lw          $a1, 0x1580($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1580);
    // 0x1506DDE4: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1506DDE8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1506DDEC: jal         0x1516EED4
    // 0x1506DDF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1516EED4(rdram, ctx);
        goto after_1;
    // 0x1506DDF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_1506DDF4:
    // 0x1506DDF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506DDF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506DDFC: jr          $ra
    // 0x1506DE00: nop

    return;
    return;
    // 0x1506DE00: nop

;}
RECOMP_FUNC void func_15171FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15171FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15171FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15171FC8: lh          $v0, 0x50($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X50);
    // 0x15171FCC: slti        $at, $v0, -0x1
    ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x15171FD0: beq         $at, $zero, L_15171FFC
    if (ctx->r1 == 0) {
        // 0x15171FD4: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_15171FFC;
    }
    // 0x15171FD4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x15171FD8: sh          $t6, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r14;
    // 0x15171FDC: lh          $t7, 0x50($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X50);
    // 0x15171FE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15171FE4: bnel        $t7, $at, L_151720B8
    if (ctx->r15 != ctx->r1) {
        // 0x15171FE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151720B8;
    }
    goto skip_0;
    // 0x15171FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15171FEC: jal         0x1516972C
    // 0x15171FF0: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15171FF0: nop

    after_0:
    // 0x15171FF4: b           L_151720B8
    // 0x15171FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151720B8;
    // 0x15171FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15171FFC:
    // 0x15171FFC: bne         $v0, $zero, L_15172010
    if (ctx->r2 != 0) {
        // 0x15172000: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_15172010;
    }
    // 0x15172000: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15172004: addiu       $t8, $zero, -0x3
    ctx->r24 = ADD32(0, -0X3);
    // 0x15172008: b           L_151720B4
    // 0x1517200C: sh          $t8, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r24;
        goto L_151720B4;
    // 0x1517200C: sh          $t8, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r24;
L_15172010:
    // 0x15172010: beql        $v0, $at, L_151720B8
    if (ctx->r2 == ctx->r1) {
        // 0x15172014: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151720B8;
    }
    goto skip_1;
    // 0x15172014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15172018: lbu         $t9, 0x59($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X59);
    // 0x1517201C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15172020: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x15172024: bnel        $t0, $zero, L_1517204C
    if (ctx->r8 != 0) {
        // 0x15172028: lh          $t2, 0x52($a0)
        ctx->r10 = MEM_H(ctx->r4, 0X52);
            goto L_1517204C;
    }
    goto skip_2;
    // 0x15172028: lh          $t2, 0x52($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X52);
    skip_2:
    // 0x1517202C: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x15172030: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15172034: beq         $at, $zero, L_15172044
    if (ctx->r1 == 0) {
        // 0x15172038: subu        $t1, $v0, $v1
        ctx->r9 = SUB32(ctx->r2, ctx->r3);
            goto L_15172044;
    }
    // 0x15172038: subu        $t1, $v0, $v1
    ctx->r9 = SUB32(ctx->r2, ctx->r3);
    // 0x1517203C: b           L_15172048
    // 0x15172040: sh          $t1, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r9;
        goto L_15172048;
    // 0x15172040: sh          $t1, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r9;
L_15172044:
    // 0x15172044: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
L_15172048:
    // 0x15172048: lh          $t2, 0x52($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X52);
L_1517204C:
    // 0x1517204C: lh          $t3, 0x54($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X54);
    // 0x15172050: lbu         $t5, 0x58($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X58);
    // 0x15172054: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15172058: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x1517205C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x15172060: sh          $t4, 0x52($a0)
    MEM_H(0X52, ctx->r4) = ctx->r12;
    // 0x15172064: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15172068: lw          $t7, -0x35B4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X35B4);
    // 0x1517206C: lh          $t8, 0x52($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X52);
    // 0x15172070: lbu         $v0, 0x4($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X4);
    // 0x15172074: bgez        $t8, L_15172084
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15172078: sra         $t9, $t8, 8
        ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
            goto L_15172084;
    }
    // 0x15172078: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x1517207C: addiu       $at, $t8, 0xFF
    ctx->r1 = ADD32(ctx->r24, 0XFF);
    // 0x15172080: sra         $t9, $at, 8
    ctx->r25 = S32(SIGNED(ctx->r1) >> 8);
L_15172084:
    // 0x15172084: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15172088: bnel        $at, $zero, L_151720B8
    if (ctx->r1 != 0) {
        // 0x1517208C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151720B8;
    }
    goto skip_3;
    // 0x1517208C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x15172090: lbu         $t0, 0x59($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X59);
    // 0x15172094: sll         $t3, $v0, 8
    ctx->r11 = S32(ctx->r2 << 8);
    // 0x15172098: addiu       $t2, $zero, -0x3
    ctx->r10 = ADD32(0, -0X3);
    // 0x1517209C: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x151720A0: beq         $t1, $zero, L_151720B0
    if (ctx->r9 == 0) {
        // 0x151720A4: addiu       $t4, $t3, -0x100
        ctx->r12 = ADD32(ctx->r11, -0X100);
            goto L_151720B0;
    }
    // 0x151720A4: addiu       $t4, $t3, -0x100
    ctx->r12 = ADD32(ctx->r11, -0X100);
    // 0x151720A8: b           L_151720B4
    // 0x151720AC: sh          $t2, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r10;
        goto L_151720B4;
    // 0x151720AC: sh          $t2, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r10;
L_151720B0:
    // 0x151720B0: sh          $t4, 0x52($a0)
    MEM_H(0X52, ctx->r4) = ctx->r12;
L_151720B4:
    // 0x151720B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151720B8:
    // 0x151720B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151720BC: jr          $ra
    // 0x151720C0: nop

    return;
    return;
    // 0x151720C0: nop

;}
RECOMP_FUNC void func_150F81BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F81BC: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x150F81C0: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x150F81C4: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x150F81C8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150F81CC: addiu       $s2, $sp, 0x140
    ctx->r18 = ADD32(ctx->r29, 0X140);
    // 0x150F81D0: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x150F81D4: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x150F81D8: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x150F81DC: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x150F81E0: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x150F81E4: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x150F81E8: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x150F81EC: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x150F81F0: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x150F81F4: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x150F81F8: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x150F81FC: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x150F8200: lw          $v0, 0x170($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X170);
    // 0x150F8204: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150F8208: swc1        $f4, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f4.u32l;
    // 0x150F820C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150F8210: swc1        $f6, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f6.u32l;
    // 0x150F8214: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150F8218: swc1        $f8, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f8.u32l;
    // 0x150F821C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x150F8220: swc1        $f10, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f10.u32l;
    // 0x150F8224: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x150F8228: swc1        $f16, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f16.u32l;
    // 0x150F822C: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150F8230: swc1        $f18, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f18.u32l;
    // 0x150F8234: lwc1        $f4, 0x38($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X38);
    // 0x150F8238: lwc1        $f6, 0x174($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X174);
    // 0x150F823C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F8240: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150F8244: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150F8248: addiu       $a1, $sp, 0x12C
    ctx->r5 = ADD32(ctx->r29, 0X12C);
    // 0x150F824C: addiu       $a2, $sp, 0x13C
    ctx->r6 = ADD32(ctx->r29, 0X13C);
    // 0x150F8250: addiu       $a3, $sp, 0x138
    ctx->r7 = ADD32(ctx->r29, 0X138);
    // 0x150F8254: swc1        $f8, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f8.u32l;
    // 0x150F8258: lwc1        $f16, 0x178($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X178);
    // 0x150F825C: lwc1        $f10, 0x3C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x150F8260: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150F8264: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F8268: swc1        $f18, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f18.u32l;
    // 0x150F826C: lwc1        $f6, 0x17C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X17C);
    // 0x150F8270: lwc1        $f4, 0x40($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X40);
    // 0x150F8274: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150F8278: swc1        $f8, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f8.u32l;
    // 0x150F827C: lwc1        $f10, 0x180($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X180);
    // 0x150F8280: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150F8284: jal         0x15145128
    // 0x150F8288: swc1        $f18, 0x180($s1)
    MEM_W(0X180, ctx->r17) = ctx->f18.u32l;
    func_15145128(rdram, ctx);
        goto after_0;
    // 0x150F8288: swc1        $f18, 0x180($s1)
    MEM_W(0X180, ctx->r17) = ctx->f18.u32l;
    after_0:
    // 0x150F828C: beq         $v0, $zero, L_150F855C
    if (ctx->r2 == 0) {
        // 0x150F8290: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_150F855C;
    }
    // 0x150F8290: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150F8294: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150F8298: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F829C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150F82A0: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x150F82A4: mul.s       $f30, $f4, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150F82A8: lwc1        $f6, 0x130($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X130);
    // 0x150F82AC: lwc1        $f10, 0x134($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X134);
    // 0x150F82B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F82B4: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150F82B8: lwc1        $f4, 0x1BE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1BE0);
    // 0x150F82BC: lwc1        $f18, 0x13C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x150F82C0: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x150F82C4: addiu       $s6, $sp, 0x98
    ctx->r22 = ADD32(ctx->r29, 0X98);
    // 0x150F82C8: addiu       $s0, $s1, 0x170
    ctx->r16 = ADD32(ctx->r17, 0X170);
    // 0x150F82CC: mul.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150F82D0: swc1        $f8, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f8.u32l;
    // 0x150F82D4: swc1        $f16, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f16.u32l;
    // 0x150F82D8: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x150F82DC: nop

    // 0x150F82E0: bc1fl       L_150F8560
    if (!c1cs) {
        // 0x150F82E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150F8560;
    }
    goto skip_0;
    // 0x150F82E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x150F82E8: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150F82EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150F82F0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x150F82F4: div.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x150F82F8: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    // 0x150F82FC: jal         0x15146078
    // 0x150F8300: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    func_15146078(rdram, ctx);
        goto after_1;
    // 0x150F8300: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x150F8304: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F8308: lwc1        $f10, 0x1BE4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1BE4);
    // 0x150F830C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F8310: lwc1        $f16, 0x1BE8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1BE8);
    // 0x150F8314: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150F8318: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F831C: lwc1        $f18, 0x1BEC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1BEC);
    // 0x150F8320: addiu       $t6, $zero, 0x7A
    ctx->r14 = ADD32(0, 0X7A);
    // 0x150F8324: addiu       $t7, $zero, 0x4404
    ctx->r15 = ADD32(0, 0X4404);
    // 0x150F8328: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x150F832C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F8330: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150F8334: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150F8338: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150F833C: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x150F8340: sb          $t6, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r14;
    // 0x150F8344: sb          $zero, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = 0;
    // 0x150F8348: sh          $t7, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r15;
    // 0x150F834C: sh          $t8, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r24;
    // 0x150F8350: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x150F8354: sw          $zero, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = 0;
    // 0x150F8358: sb          $t9, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r25;
    // 0x150F835C: sb          $t0, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r8;
    // 0x150F8360: sb          $t1, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = ctx->r9;
    // 0x150F8364: sb          $t2, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r10;
    // 0x150F8368: addiu       $t4, $t4, 0x5480
    ctx->r12 = ADD32(ctx->r12, 0X5480);
    // 0x150F836C: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x150F8370: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    // 0x150F8374: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x150F8378: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x150F837C: swc1        $f18, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f18.u32l;
    // 0x150F8380: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x150F8384: addiu       $t3, $sp, 0xEC
    ctx->r11 = ADD32(ctx->r29, 0XEC);
    // 0x150F8388: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x150F838C: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x150F8390: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x150F8394: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x150F8398: lui         $t8, 0xCC
    ctx->r24 = S32(0XCC << 16);
    // 0x150F839C: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x150F83A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F83A4: lwc1        $f28, 0x1BF0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X1BF0);
    // 0x150F83A8: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x150F83AC: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150F83B0: ori         $t8, $t8, 0x8
    ctx->r24 = ctx->r24 | 0X8;
    // 0x150F83B4: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x150F83B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F83BC: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x150F83C0: swc1        $f22, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f22.u32l;
    // 0x150F83C4: swc1        $f22, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f22.u32l;
    // 0x150F83C8: swc1        $f22, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f22.u32l;
    // 0x150F83CC: sw          $t8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r24;
    // 0x150F83D0: sb          $t9, 0x109($sp)
    MEM_B(0X109, ctx->r29) = ctx->r25;
    // 0x150F83D4: sb          $zero, 0x10A($sp)
    MEM_B(0X10A, ctx->r29) = 0;
    // 0x150F83D8: sb          $t0, 0x10B($sp)
    MEM_B(0X10B, ctx->r29) = ctx->r8;
    // 0x150F83DC: sw          $zero, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = 0;
    // 0x150F83E0: sb          $t1, 0x110($sp)
    MEM_B(0X110, ctx->r29) = ctx->r9;
    // 0x150F83E4: sw          $zero, 0x114($sp)
    MEM_W(0X114, ctx->r29) = 0;
    // 0x150F83E8: addiu       $s4, $s4, 0x4AA0
    ctx->r20 = ADD32(ctx->r20, 0X4AA0);
    // 0x150F83EC: lwc1        $f24, 0x1BF4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X1BF4);
    // 0x150F83F0: addiu       $s5, $s0, 0x4
    ctx->r21 = ADD32(ctx->r16, 0X4);
    // 0x150F83F4: addiu       $s3, $sp, 0xC4
    ctx->r19 = ADD32(ctx->r29, 0XC4);
    // 0x150F83F8: addiu       $s2, $sp, 0xE0
    ctx->r18 = ADD32(ctx->r29, 0XE0);
    // 0x150F83FC: swc1        $f24, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f24.u32l;
L_150F8400:
    // 0x150F8400: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150F8404: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150F8408: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150F840C: sub.s       $f6, $f26, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f26.fl - ctx->f4.fl;
    // 0x150F8410: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x150F8414: addiu       $t7, $zero, 0x21
    ctx->r15 = ADD32(0, 0X21);
    // 0x150F8418: addiu       $t8, $zero, 0x2C
    ctx->r24 = ADD32(0, 0X2C);
    // 0x150F841C: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x150F8420: lw          $at, 0x0($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X0);
    // 0x150F8424: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x150F8428: lw          $t5, 0x4($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X4);
    // 0x150F842C: sw          $t5, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r13;
    // 0x150F8430: lw          $at, 0x8($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X8);
    // 0x150F8434: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x150F8438: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150F843C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150F8440: mul.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x150F8444: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x150F8448: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x150F844C: nop

    // 0x150F8450: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150F8454: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x150F8458: nop

    // 0x150F845C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x150F8460: beql        $t4, $zero, L_150F84B0
    if (ctx->r12 == 0) {
        // 0x150F8464: mfc1        $t4, $f16
        ctx->r12 = (int32_t)ctx->f16.u32l;
            goto L_150F84B0;
    }
    goto skip_1;
    // 0x150F8464: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x150F8468: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F846C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150F8470: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150F8474: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x150F8478: nop

    // 0x150F847C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x150F8480: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x150F8484: nop

    // 0x150F8488: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x150F848C: bne         $t4, $zero, L_150F84A4
    if (ctx->r12 != 0) {
        // 0x150F8490: nop
    
            goto L_150F84A4;
    }
    // 0x150F8490: nop

    // 0x150F8494: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x150F8498: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150F849C: b           L_150F84BC
    // 0x150F84A0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_150F84BC;
    // 0x150F84A0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_150F84A4:
    // 0x150F84A4: b           L_150F84BC
    // 0x150F84A8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_150F84BC;
    // 0x150F84A8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150F84AC: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
L_150F84B0:
    // 0x150F84B0: nop

    // 0x150F84B4: bltz        $t4, L_150F84A4
    if (SIGNED(ctx->r12) < 0) {
        // 0x150F84B8: nop
    
            goto L_150F84A4;
    }
    // 0x150F84B8: nop

L_150F84BC:
    // 0x150F84BC: sb          $t4, 0x108($sp)
    MEM_B(0X108, ctx->r29) = ctx->r12;
    // 0x150F84C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150F84C4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150F84C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150F84CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150F84D0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150F84D4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x150F84D8: lbu         $t9, 0xC($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XC);
    // 0x150F84DC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x150F84E0: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x150F84E4: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x150F84E8: lbu         $t0, 0x1($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X1);
    // 0x150F84EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F84F0: jal         0x1513D2F0
    // 0x150F84F4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_1513D2F0(rdram, ctx);
        goto after_2;
    // 0x150F84F4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_2:
    // 0x150F84F8: beq         $v0, $zero, L_150F850C
    if (ctx->r2 == 0) {
        // 0x150F84FC: addiu       $a0, $v0, 0x110
        ctx->r4 = ADD32(ctx->r2, 0X110);
            goto L_150F850C;
    }
    // 0x150F84FC: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x150F8500: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x150F8504: jal         0x10022EC0
    // 0x150F8508: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x150F8508: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_3:
L_150F850C:
    // 0x150F850C: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150F8510: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150F8514: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x150F8518: add.s       $f4, $f18, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f30.fl;
    // 0x150F851C: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
    // 0x150F8520: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x150F8524: lwc1        $f8, 0x120($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X120);
    // 0x150F8528: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150F852C: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150F8530: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x150F8534: lwc1        $f18, 0x124($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150F8538: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150F853C: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x150F8540: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x150F8544: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150F8548: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x150F854C: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x150F8550: nop

    // 0x150F8554: bc1tl       L_150F8400
    if (c1cs) {
        // 0x150F8558: swc1        $f24, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = ctx->f24.u32l;
            goto L_150F8400;
    }
    goto skip_2;
    // 0x150F8558: swc1        $f24, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f24.u32l;
    skip_2:
L_150F855C:
    // 0x150F855C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150F8560:
    // 0x150F8560: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x150F8564: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x150F8568: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x150F856C: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x150F8570: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x150F8574: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x150F8578: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x150F857C: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x150F8580: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x150F8584: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x150F8588: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x150F858C: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x150F8590: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x150F8594: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x150F8598: jr          $ra
    // 0x150F859C: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    return;
    // 0x150F859C: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_1506EEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506EEF4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506EEF8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506EEFC: addiu       $v1, $v1, 0x1580
    ctx->r3 = ADD32(ctx->r3, 0X1580);
    // 0x1506EF00: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1506EF04: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1506EF08: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1506EF0C: sra         $t8, $t6, 16
    ctx->r24 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1506EF10: sb          $t8, 0x276($t9)
    MEM_B(0X276, ctx->r25) = ctx->r24;
    // 0x1506EF14: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x1506EF18: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x1506EF1C: sra         $t1, $t0, 24
    ctx->r9 = S32(SIGNED(ctx->r8) >> 24);
    // 0x1506EF20: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x1506EF24: sh          $t2, 0x278($t3)
    MEM_H(0X278, ctx->r11) = ctx->r10;
    // 0x1506EF28: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1506EF2C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x1506EF30: sh          $t5, 0x282($t6)
    MEM_H(0X282, ctx->r14) = ctx->r13;
    // 0x1506EF34: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1506EF38: sb          $zero, 0x284($t7)
    MEM_B(0X284, ctx->r15) = 0;
    // 0x1506EF3C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x1506EF40: sb          $zero, 0x285($t8)
    MEM_B(0X285, ctx->r24) = 0;
    // 0x1506EF44: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1506EF48: sb          $zero, 0x286($t9)
    MEM_B(0X286, ctx->r25) = 0;
    // 0x1506EF4C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x1506EF50: sb          $zero, 0x287($t0)
    MEM_B(0X287, ctx->r8) = 0;
    // 0x1506EF54: jr          $ra
    // 0x1506EF58: nop

    return;
    return;
    // 0x1506EF58: nop

;}
RECOMP_FUNC void func_151E09DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E09DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151E09E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151E09E4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151E09E8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151E09EC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151E09F0: jal         0x1504332C
    // 0x151E09F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_1504332C(rdram, ctx);
        goto after_0;
    // 0x151E09F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x151E09F8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E09FC: addiu       $t6, $zero, 0x1A
    ctx->r14 = ADD32(0, 0X1A);
    // 0x151E0A00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151E0A04: addiu       $a3, $a3, -0x47B0
    ctx->r7 = ADD32(ctx->r7, -0X47B0);
    // 0x151E0A08: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151E0A0C: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    // 0x151E0A10: jal         0x15042D94
    // 0x151E0A14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15042D94(rdram, ctx);
        goto after_1;
    // 0x151E0A14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x151E0A18: jal         0x15042D78
    // 0x151E0A1C: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    func_15042D78(rdram, ctx);
        goto after_2;
    // 0x151E0A1C: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_2:
    // 0x151E0A20: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x151E0A24: addiu       $t0, $t0, -0x22C
    ctx->r8 = ADD32(ctx->r8, -0X22C);
    // 0x151E0A28: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x151E0A2C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x151E0A30: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x151E0A34: lb          $t7, 0x42($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X42);
    // 0x151E0A38: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x151E0A3C: lb          $t3, 0xA96($t3)
    ctx->r11 = MEM_B(ctx->r11, 0XA96);
    // 0x151E0A40: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151E0A44: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x151E0A48: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x151E0A4C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151E0A50: lb          $t9, -0x4970($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X4970);
    // 0x151E0A54: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151E0A58: addiu       $a0, $a0, 0xA95
    ctx->r4 = ADD32(ctx->r4, 0XA95);
    // 0x151E0A5C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x151E0A60: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x151E0A64: lw          $t2, -0x48AC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X48AC);
    // 0x151E0A68: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x151E0A6C: bne         $t3, $zero, L_151E0AE4
    if (ctx->r11 != 0) {
        // 0x151E0A70: sw          $t2, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r10;
            goto L_151E0AE4;
    }
    // 0x151E0A70: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x151E0A74: lhu         $t4, 0x20($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X20);
    // 0x151E0A78: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151E0A7C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151E0A80: andi        $t5, $t4, 0xFFDF
    ctx->r13 = ctx->r12 & 0XFFDF;
    // 0x151E0A84: sh          $t5, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r13;
    // 0x151E0A88: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x151E0A8C: addiu       $a0, $a0, 0xA95
    ctx->r4 = ADD32(ctx->r4, 0XA95);
    // 0x151E0A90: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x151E0A94: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x151E0A98: subu        $v1, $t6, $t8
    ctx->r3 = SUB32(ctx->r14, ctx->r24);
    // 0x151E0A9C: bgtz        $v1, L_151E0ADC
    if (SIGNED(ctx->r3) > 0) {
        // 0x151E0AA0: nop
    
            goto L_151E0ADC;
    }
    // 0x151E0AA0: nop

    // 0x151E0AA4: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x151E0AA8: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x151E0AAC: sb          $zero, 0x3F($t9)
    MEM_B(0X3F, ctx->r25) = 0;
    // 0x151E0AB0: lb          $t1, -0x220($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X220);
    // 0x151E0AB4: beq         $t1, $zero, L_151E0AC4
    if (ctx->r9 == 0) {
        // 0x151E0AB8: nop
    
            goto L_151E0AC4;
    }
    // 0x151E0AB8: nop

    // 0x151E0ABC: jal         0x151E2404
    // 0x151E0AC0: nop

    func_151E2404(rdram, ctx);
        goto after_3;
    // 0x151E0AC0: nop

    after_3:
L_151E0AC4:
    // 0x151E0AC4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E0AC8: sb          $zero, -0x220($at)
    MEM_B(-0X220, ctx->r1) = 0;
    // 0x151E0ACC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E0AD0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151E0AD4: b           L_151E0B60
    // 0x151E0AD8: sb          $t2, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r10;
        goto L_151E0B60;
    // 0x151E0AD8: sb          $t2, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r10;
L_151E0ADC:
    // 0x151E0ADC: b           L_151E0B04
    // 0x151E0AE0: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
        goto L_151E0B04;
    // 0x151E0AE0: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_151E0AE4:
    // 0x151E0AE4: lw          $t4, -0x161C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X161C);
    // 0x151E0AE8: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x151E0AEC: sll         $t5, $t4, 5
    ctx->r13 = S32(ctx->r12 << 5);
    // 0x151E0AF0: addu        $v1, $t3, $t5
    ctx->r3 = ADD32(ctx->r11, ctx->r13);
    // 0x151E0AF4: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x151E0AF8: bnel        $at, $zero, L_151E0B08
    if (ctx->r1 != 0) {
        // 0x151E0AFC: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_151E0B08;
    }
    goto skip_0;
    // 0x151E0AFC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    skip_0:
    // 0x151E0B00: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151E0B04:
    // 0x151E0B04: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
L_151E0B08:
    // 0x151E0B08: beq         $v1, $at, L_151E0B18
    if (ctx->r3 == ctx->r1) {
        // 0x151E0B0C: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_151E0B18;
    }
    // 0x151E0B0C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x151E0B10: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x151E0B14: sh          $zero, 0x20($t7)
    MEM_H(0X20, ctx->r15) = 0;
L_151E0B18:
    // 0x151E0B18: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x151E0B1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151E0B20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E0B24: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x151E0B28: jal         0x151E3344
    // 0x151E0B2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_151E3344(rdram, ctx);
        goto after_4;
    // 0x151E0B2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x151E0B30: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x151E0B34: addiu       $t0, $t0, -0x22C
    ctx->r8 = ADD32(ctx->r8, -0X22C);
    // 0x151E0B38: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x151E0B3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E0B40: lhu         $v1, 0x20($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X20);
    // 0x151E0B44: andi        $t6, $v1, 0x20
    ctx->r14 = ctx->r3 & 0X20;
    // 0x151E0B48: beql        $t6, $zero, L_151E0B5C
    if (ctx->r14 == 0) {
        // 0x151E0B4C: andi        $t8, $v1, 0xFFDF
        ctx->r24 = ctx->r3 & 0XFFDF;
            goto L_151E0B5C;
    }
    goto skip_1;
    // 0x151E0B4C: andi        $t8, $v1, 0xFFDF
    ctx->r24 = ctx->r3 & 0XFFDF;
    skip_1:
    // 0x151E0B50: sb          $zero, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = 0;
    // 0x151E0B54: lhu         $v1, 0x20($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X20);
    // 0x151E0B58: andi        $t8, $v1, 0xFFDF
    ctx->r24 = ctx->r3 & 0XFFDF;
L_151E0B5C:
    // 0x151E0B5C: sh          $t8, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r24;
L_151E0B60:
    // 0x151E0B60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151E0B64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151E0B68: jr          $ra
    // 0x151E0B6C: nop

    return;
    return;
    // 0x151E0B6C: nop

;}
RECOMP_FUNC void func_15005818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005818: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1500581C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x15005820: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15005824: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15005828: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x1500582C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x15005830: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15005834: sb          $t6, 0x23C($s0)
    MEM_B(0X23C, ctx->r16) = ctx->r14;
    // 0x15005838: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x1500583C: addiu       $v1, $s0, 0x2F8
    ctx->r3 = ADD32(ctx->r16, 0X2F8);
    // 0x15005840: addiu       $t4, $s0, 0x640
    ctx->r12 = ADD32(ctx->r16, 0X640);
    // 0x15005844: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x15005848: addiu       $a0, $s0, 0x644
    ctx->r4 = ADD32(ctx->r16, 0X644);
    // 0x1500584C: addiu       $a1, $s0, 0x648
    ctx->r5 = ADD32(ctx->r16, 0X648);
    // 0x15005850: swc1        $f4, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f4.u32l;
    // 0x15005854: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x15005858: addiu       $a2, $s0, 0x354
    ctx->r6 = ADD32(ctx->r16, 0X354);
    // 0x1500585C: addiu       $a3, $s0, 0x360
    ctx->r7 = ADD32(ctx->r16, 0X360);
    // 0x15005860: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x15005864: swc1        $f6, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->f6.u32l;
    // 0x15005868: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x1500586C: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x15005870: swc1        $f8, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f8.u32l;
    // 0x15005874: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x15005878: sw          $at, 0x27C($s0)
    MEM_W(0X27C, ctx->r16) = ctx->r1;
    // 0x1500587C: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x15005880: sw          $t1, 0x280($s0)
    MEM_W(0X280, ctx->r16) = ctx->r9;
    // 0x15005884: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x15005888: sw          $at, 0x284($s0)
    MEM_W(0X284, ctx->r16) = ctx->r1;
    // 0x1500588C: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x15005890: sw          $at, 0x304($s0)
    MEM_W(0X304, ctx->r16) = ctx->r1;
    // 0x15005894: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x15005898: sw          $t3, 0x308($s0)
    MEM_W(0X308, ctx->r16) = ctx->r11;
    // 0x1500589C: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150058A0: sw          $at, 0x30C($s0)
    MEM_W(0X30C, ctx->r16) = ctx->r1;
    // 0x150058A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150058A8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150058AC: lwc1        $f10, 0x2F8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x150058B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150058B4: lwc1        $f18, 0x59F0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X59F0);
    // 0x150058B8: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x150058BC: lwc1        $f0, 0x2FC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x150058C0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x150058C4: lwc1        $f16, 0x300($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X300);
    // 0x150058C8: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x150058CC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150058D0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150058D4: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x150058D8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x150058DC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x150058E0: jal         0x1510E7A4
    // 0x150058E4: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    func_1510E7A4(rdram, ctx);
        goto after_0;
    // 0x150058E4: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x150058E8: lwc1        $f2, 0x354($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X354);
    // 0x150058EC: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x150058F0: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x150058F4: swc1        $f2, 0x358($s0)
    MEM_W(0X358, ctx->r16) = ctx->f2.u32l;
    // 0x150058F8: swc1        $f2, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = ctx->f2.u32l;
    // 0x150058FC: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x15005900: addiu       $v0, $s0, 0x2A4
    ctx->r2 = ADD32(ctx->r16, 0X2A4);
    // 0x15005904: addiu       $a1, $s0, 0x2BC
    ctx->r5 = ADD32(ctx->r16, 0X2BC);
    // 0x15005908: swc1        $f4, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->f4.u32l;
    // 0x1500590C: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15005910: swc1        $f6, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->f6.u32l;
    // 0x15005914: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x15005918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1500591C: swc1        $f8, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f8.u32l;
    // 0x15005920: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x15005924: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x15005928: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x1500592C: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x15005930: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x15005934: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x15005938: lwc1        $f16, 0x2F8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x1500593C: lwc1        $f10, 0x2A4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2A4);
    // 0x15005940: lwc1        $f4, 0x300($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X300);
    // 0x15005944: lwc1        $f18, 0x2AC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x15005948: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1500594C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x15005950: lwc1        $f16, 0x354($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X354);
    // 0x15005954: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x15005958: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1500595C: sw          $at, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r1;
    // 0x15005960: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x15005964: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15005968: lwc1        $f10, 0x2FC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x1500596C: sw          $t8, 0x2B4($s0)
    MEM_W(0X2B4, ctx->r16) = ctx->r24;
    // 0x15005970: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x15005974: sub.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15005978: sw          $at, 0x2B8($s0)
    MEM_W(0X2B8, ctx->r16) = ctx->r1;
    // 0x1500597C: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15005980: swc1        $f2, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f2.u32l;
    // 0x15005984: swc1        $f2, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f2.u32l;
    // 0x15005988: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1500598C: swc1        $f0, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f0.u32l;
    // 0x15005990: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x15005994: sw          $at, 0x2E0($s0)
    MEM_W(0X2E0, ctx->r16) = ctx->r1;
    // 0x15005998: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x1500599C: sw          $t0, 0x2E4($s0)
    MEM_W(0X2E4, ctx->r16) = ctx->r8;
    // 0x150059A0: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x150059A4: sw          $at, 0x2E8($s0)
    MEM_W(0X2E8, ctx->r16) = ctx->r1;
    // 0x150059A8: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150059AC: sw          $at, 0x2EC($s0)
    MEM_W(0X2EC, ctx->r16) = ctx->r1;
    // 0x150059B0: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x150059B4: sw          $t2, 0x2F0($s0)
    MEM_W(0X2F0, ctx->r16) = ctx->r10;
    // 0x150059B8: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150059BC: jal         0x15124B18
    // 0x150059C0: sw          $at, 0x2F4($s0)
    MEM_W(0X2F4, ctx->r16) = ctx->r1;
    func_15124B18(rdram, ctx);
        goto after_1;
    // 0x150059C0: sw          $at, 0x2F4($s0)
    MEM_W(0X2F4, ctx->r16) = ctx->r1;
    after_1:
    // 0x150059C4: jal         0x15125330
    // 0x150059C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15125330(rdram, ctx);
        goto after_2;
    // 0x150059C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x150059CC: jal         0x1512523C
    // 0x150059D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1512523C(rdram, ctx);
        goto after_3;
    // 0x150059D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x150059D4: jal         0x15123070
    // 0x150059D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15123070(rdram, ctx);
        goto after_4;
    // 0x150059D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x150059DC: lw          $t3, 0x5F0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5F0);
    // 0x150059E0: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x150059E4: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x150059E8: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x150059EC: sw          $t4, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r12;
    // 0x150059F0: lw          $t5, -0x1610($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1610);
    // 0x150059F4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150059F8: beql        $t5, $at, L_15005A4C
    if (ctx->r13 == ctx->r1) {
        // 0x150059FC: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_15005A4C;
    }
    goto skip_0;
    // 0x150059FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x15005A00: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x15005A04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15005A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15005A0C: beq         $t6, $at, L_15005A48
    if (ctx->r14 == ctx->r1) {
        // 0x15005A10: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_15005A48;
    }
    // 0x15005A10: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x15005A14: jal         0x1512D560
    // 0x15005A18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1512D560(rdram, ctx);
        goto after_5;
    // 0x15005A18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x15005A1C: lwc1        $f18, 0x37C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15005A20: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15005A24: addiu       $a2, $a2, 0x3600
    ctx->r6 = ADD32(ctx->r6, 0X3600);
    // 0x15005A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15005A2C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x15005A30: jal         0x1512D560
    // 0x15005A34: swc1        $f18, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f18.u32l;
    func_1512D560(rdram, ctx);
        goto after_6;
    // 0x15005A34: swc1        $f18, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f18.u32l;
    after_6:
    // 0x15005A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15005A3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x15005A40: jal         0x1512D560
    // 0x15005A44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1512D560(rdram, ctx);
        goto after_7;
    // 0x15005A44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_15005A48:
    // 0x15005A48: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_15005A4C:
    // 0x15005A4C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x15005A50: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15005A54: jr          $ra
    // 0x15005A58: nop

    return;
    return;
    // 0x15005A58: nop

    // 0x15005A5C: nop

;}
RECOMP_FUNC void func_15139578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15139578: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1513957C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15139580: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15139584: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15139588: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x1513958C: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x15139590: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x15139594: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15139598: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1513959C: lwc1        $f16, 0x48($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151395A0: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151395A4: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151395A8: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151395AC: mul.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x151395B0: neg.s       $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = -ctx->f18.fl;
    // 0x151395B4: add.s       $f8, $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x151395B8: mul.s       $f6, $f16, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151395BC: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    // 0x151395C0: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x151395C4: mul.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x151395C8: lwc1        $f2, 0x58($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X58);
    // 0x151395CC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x151395D0: mul.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151395D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151395D8: swc1        $f6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f6.u32l;
    // 0x151395DC: mul.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x151395E0: lwc1        $f6, 0x48($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151395E4: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
    // 0x151395E8: mul.s       $f18, $f2, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x151395EC: abs.s       $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = fabsf(ctx->f6.fl);
    // 0x151395F0: swc1        $f14, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f14.u32l;
    // 0x151395F4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x151395F8: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
    // 0x151395FC: swc1        $f16, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f16.u32l;
    // 0x15139600: swc1        $f4, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f4.u32l;
    // 0x15139604: bc1f        L_1513963C
    if (!c1cs) {
        // 0x15139608: swc1        $f18, 0x58($s0)
        MEM_W(0X58, ctx->r16) = ctx->f18.u32l;
            goto L_1513963C;
    }
    // 0x15139608: swc1        $f18, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f18.u32l;
    // 0x1513960C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15139610: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x15139614: addiu       $at, $zero, -0x6A
    ctx->r1 = ADD32(0, -0X6A);
    // 0x15139618: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x1513961C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x15139620: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x15139624: swc1        $f0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f0.u32l;
    // 0x15139628: swc1        $f0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f0.u32l;
    // 0x1513962C: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x15139630: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x15139634: swc1        $f0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f0.u32l;
    // 0x15139638: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
L_1513963C:
    // 0x1513963C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15139640: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15139644: lwc1        $f18, 0x30($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15139648: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x1513964C: nop

    // 0x15139650: bc1tl       L_15139754
    if (c1cs) {
        // 0x15139654: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15139754;
    }
    goto skip_0;
    // 0x15139654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15139658: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1513965C: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x15139660: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15139664: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x15139668: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1513966C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15139670: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x15139674: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15139678: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x1513967C: nop

    // 0x15139680: bc1tl       L_15139694
    if (c1cs) {
        // 0x15139684: sw          $zero, 0x44($sp)
        MEM_W(0X44, ctx->r29) = 0;
            goto L_15139694;
    }
    goto skip_1;
    // 0x15139684: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    skip_1:
    // 0x15139688: b           L_15139694
    // 0x1513968C: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
        goto L_15139694;
    // 0x1513968C: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x15139690: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_15139694:
    // 0x15139694: jal         0x150ADA68
    // 0x15139698: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x15139698: nop

    after_0:
    // 0x1513969C: jal         0x150ADA20
    // 0x151396A0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151396A0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x151396A4: jal         0x150ADA20
    // 0x151396A8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151396A8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_2:
    // 0x151396AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151396B0: lwc1        $f18, 0x48F8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X48F8);
    // 0x151396B4: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151396B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151396BC: lwc1        $f6, 0x48FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X48FC);
    // 0x151396C0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151396C4: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x151396C8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151396CC: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151396D0: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151396D4: addiu       $t1, $sp, 0x54
    ctx->r9 = ADD32(ctx->r29, 0X54);
    // 0x151396D8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151396DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151396E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151396E4: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x151396E8: divu        $zero, $a2, $at
    lo = S32(U32(ctx->r6) / U32(ctx->r1)); hi = S32(U32(ctx->r6) % U32(ctx->r1));
    // 0x151396EC: mfhi        $t9
    ctx->r25 = hi;
    // 0x151396F0: addiu       $at, $zero, 0x90
    ctx->r1 = ADD32(0, 0X90);
    // 0x151396F4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151396F8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151396FC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15139700: mfhi        $t2
    ctx->r10 = hi;
    // 0x15139704: addiu       $t3, $t2, 0x50
    ctx->r11 = ADD32(ctx->r10, 0X50);
    // 0x15139708: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1513970C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x15139710: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15139714: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x15139718: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1513971C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15139720: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15139724: lbu         $t6, 0xC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XC);
    // 0x15139728: addiu       $a2, $t9, 0x64
    ctx->r6 = ADD32(ctx->r25, 0X64);
    // 0x1513972C: andi        $t0, $a2, 0xFF
    ctx->r8 = ctx->r6 & 0XFF;
    // 0x15139730: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x15139734: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
    // 0x15139738: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x1513973C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x15139740: lbu         $a0, 0x47($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X47);
    // 0x15139744: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x15139748: jal         0x151D9B8C
    // 0x1513974C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_151D9B8C(rdram, ctx);
        goto after_3;
    // 0x1513974C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_3:
    // 0x15139750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15139754:
    // 0x15139754: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15139758: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x1513975C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x15139760: jr          $ra
    // 0x15139764: nop

    return;
    return;
    // 0x15139764: nop

;}
RECOMP_FUNC void func_15036570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15036570: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x15036574: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15036578: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x1503657C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x15036580: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x15036584: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x15036588: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1503658C: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x15036590: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x15036594: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x15036598: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1503659C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x150365A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150365A4: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x150365A8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150365AC: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x150365B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150365B4: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x150365B8: lhu         $v1, 0x84($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X84);
    // 0x150365BC: lw          $t1, 0x2D0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X2D0);
    // 0x150365C0: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150365C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150365C8: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x150365CC: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x150365D0: lw          $t0, 0x3FC0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3FC0);
    // 0x150365D4: beq         $v1, $at, L_1503662C
    if (ctx->r3 == ctx->r1) {
        // 0x150365D8: lwc1        $f0, 0x8($t1)
        ctx->f0.u32l = MEM_W(ctx->r9, 0X8);
            goto L_1503662C;
    }
    // 0x150365D8: lwc1        $f0, 0x8($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X8);
    // 0x150365DC: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x150365E0: beq         $v1, $at, L_1503662C
    if (ctx->r3 == ctx->r1) {
        // 0x150365E4: addiu       $a0, $zero, 0x138
        ctx->r4 = ADD32(0, 0X138);
            goto L_1503662C;
    }
    // 0x150365E4: addiu       $a0, $zero, 0x138
    ctx->r4 = ADD32(0, 0X138);
    // 0x150365E8: bne         $v1, $a0, L_15036604
    if (ctx->r3 != ctx->r4) {
        // 0x150365EC: lui         $at, 0x4210
        ctx->r1 = S32(0X4210 << 16);
            goto L_15036604;
    }
    // 0x150365EC: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x150365F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150365F4: nop

    // 0x150365F8: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x150365FC: nop

    // 0x15036600: bc1t        L_1503662C
    if (c1cs) {
        // 0x15036604: addiu       $v0, $zero, 0x3D
        ctx->r2 = ADD32(0, 0X3D);
            goto L_1503662C;
    }
L_15036604:
    // 0x15036604: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x15036608: beq         $v1, $v0, L_15036614
    if (ctx->r3 == ctx->r2) {
        // 0x1503660C: addiu       $at, $zero, 0xD9
        ctx->r1 = ADD32(0, 0XD9);
            goto L_15036614;
    }
    // 0x1503660C: addiu       $at, $zero, 0xD9
    ctx->r1 = ADD32(0, 0XD9);
    // 0x15036610: bne         $v1, $at, L_150366BC
    if (ctx->r3 != ctx->r1) {
        // 0x15036614: lui         $at, 0x41A8
        ctx->r1 = S32(0X41A8 << 16);
            goto L_150366BC;
    }
L_15036614:
    // 0x15036614: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x15036618: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1503661C: nop

    // 0x15036620: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15036624: nop

    // 0x15036628: bc1f        L_150366BC
    if (!c1cs) {
        // 0x1503662C: lui         $at, 0xC0E0
        ctx->r1 = S32(0XC0E0 << 16);
            goto L_150366BC;
    }
L_1503662C:
    // 0x1503662C: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x15036630: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15036634: addiu       $t2, $sp, 0x5C
    ctx->r10 = ADD32(ctx->r29, 0X5C);
    // 0x15036638: addiu       $t3, $sp, 0x58
    ctx->r11 = ADD32(ctx->r29, 0X58);
    // 0x1503663C: addiu       $t4, $sp, 0x54
    ctx->r12 = ADD32(ctx->r29, 0X54);
    // 0x15036640: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15036644: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15036648: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x1503664C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15036650: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15036654: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x15036658: lui         $a2, 0xC188
    ctx->r6 = S32(0XC188 << 16);
    // 0x1503665C: jal         0x150A7960
    // 0x15036660: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    func_150A7960(rdram, ctx);
        goto after_0;
    // 0x15036660: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_0:
    // 0x15036664: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15036668: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x1503666C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15036670: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15036674: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x15036678: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x1503667C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x15036680: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x15036684: addiu       $t6, $t6, 0x3FC4
    ctx->r14 = ADD32(ctx->r14, 0X3FC4);
    // 0x15036688: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x1503668C: addu        $v0, $t7, $t6
    ctx->r2 = ADD32(ctx->r15, ctx->r14);
    // 0x15036690: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x15036694: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15036698: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1503669C: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x150366A0: nop

    // 0x150366A4: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
    // 0x150366A8: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150366AC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150366B0: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x150366B4: b           L_1503687C
    // 0x150366B8: sh          $t4, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r12;
        goto L_1503687C;
    // 0x150366B8: sh          $t4, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r12;
L_150366BC:
    // 0x150366BC: beq         $v1, $v0, L_150366C8
    if (ctx->r3 == ctx->r2) {
        // 0x150366C0: addiu       $at, $zero, 0xD9
        ctx->r1 = ADD32(0, 0XD9);
            goto L_150366C8;
    }
    // 0x150366C0: addiu       $at, $zero, 0xD9
    ctx->r1 = ADD32(0, 0XD9);
    // 0x150366C4: bne         $v1, $at, L_150366E4
    if (ctx->r3 != ctx->r1) {
        // 0x150366C8: lui         $at, 0x40E0
        ctx->r1 = S32(0X40E0 << 16);
            goto L_150366E4;
    }
L_150366C8:
    // 0x150366C8: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x150366CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150366D0: nop

    // 0x150366D4: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x150366D8: nop

    // 0x150366DC: bc1tl       L_150366F4
    if (c1cs) {
        // 0x150366E0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150366F4;
    }
    goto skip_0;
    // 0x150366E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
L_150366E4:
    // 0x150366E4: beq         $v1, $a0, L_150366F0
    if (ctx->r3 == ctx->r4) {
        // 0x150366E8: addiu       $at, $zero, 0x139
        ctx->r1 = ADD32(0, 0X139);
            goto L_150366F0;
    }
    // 0x150366E8: addiu       $at, $zero, 0x139
    ctx->r1 = ADD32(0, 0X139);
    // 0x150366EC: bne         $v1, $at, L_15036700
    if (ctx->r3 != ctx->r1) {
        // 0x150366F0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_15036700;
    }
L_150366F0:
    // 0x150366F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_150366F4:
    // 0x150366F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150366F8: b           L_1503670C
    // 0x150366FC: lh          $t5, 0x30($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X30);
        goto L_1503670C;
    // 0x150366FC: lh          $t5, 0x30($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X30);
L_15036700:
    // 0x15036700: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15036704: lwc1        $f16, 0x7D80($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7D80);
    // 0x15036708: lh          $t5, 0x30($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X30);
L_1503670C:
    // 0x1503670C: lh          $t7, 0x20($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X20);
    // 0x15036710: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15036714: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15036718: addu        $t6, $t5, $t7
    ctx->r14 = ADD32(ctx->r13, ctx->r15);
    // 0x1503671C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x15036720: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x15036724: addiu       $t7, $sp, 0x4C
    ctx->r15 = ADD32(ctx->r29, 0X4C);
    // 0x15036728: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1503672C: addiu       $t5, $sp, 0x50
    ctx->r13 = ADD32(ctx->r29, 0X50);
    // 0x15036730: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x15036734: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15036738: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x1503673C: lh          $t9, 0x22($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X22);
    // 0x15036740: lh          $t8, 0x32($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X32);
    // 0x15036744: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15036748: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x1503674C: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x15036750: nop

    // 0x15036754: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15036758: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1503675C: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x15036760: lh          $t3, 0x24($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X24);
    // 0x15036764: lh          $t2, 0x34($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X34);
    // 0x15036768: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x1503676C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x15036770: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15036774: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x15036778: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x1503677C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x15036780: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15036784: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15036788: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1503678C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15036790: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x15036794: jal         0x150A7960
    // 0x15036798: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15036798: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x1503679C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x150367A0: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x150367A4: addiu       $t1, $t1, 0x3FC4
    ctx->r9 = ADD32(ctx->r9, 0X3FC4);
    // 0x150367A8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x150367AC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x150367B0: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x150367B4: addu        $v0, $t9, $t1
    ctx->r2 = ADD32(ctx->r25, ctx->r9);
    // 0x150367B8: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x150367BC: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150367C0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150367C4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x150367C8: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x150367CC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x150367D0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150367D4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x150367D8: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x150367DC: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150367E0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150367E4: sub.s       $f0, $f8, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x150367E8: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150367EC: mul.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150367F0: add.s       $f18, $f12, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x150367F4: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150367F8: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x150367FC: nop

    // 0x15036800: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x15036804: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15036808: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x1503680C: sub.s       $f0, $f8, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x15036810: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x15036814: mul.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15036818: add.s       $f18, $f14, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x1503681C: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15036820: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x15036824: nop

    // 0x15036828: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x1503682C: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15036830: sub.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x15036834: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15036838: mul.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1503683C: add.s       $f18, $f2, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x15036840: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15036844: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x15036848: nop

    // 0x1503684C: sh          $t1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r9;
    // 0x15036850: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x15036854: lh          $t3, 0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2);
    // 0x15036858: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x1503685C: nop

    // 0x15036860: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15036864: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x15036868: lh          $t4, 0x4($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X4);
    // 0x1503686C: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x15036870: nop

    // 0x15036874: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15036878: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
L_1503687C:
    // 0x1503687C: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15036880: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15036884: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15036888: nop

    // 0x1503688C: sh          $t7, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r15;
    // 0x15036890: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15036894: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15036898: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x1503689C: nop

    // 0x150368A0: sh          $t8, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r24;
    // 0x150368A4: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150368A8: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150368AC: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x150368B0: nop

    // 0x150368B4: sh          $t1, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r9;
    // 0x150368B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150368BC: jr          $ra
    // 0x150368C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x150368C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_150EA490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EA490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150EA494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150EA498: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150EA49C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x150EA4A0: lw          $a0, 0x80($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X80);
    // 0x150EA4A4: srl         $t7, $a0, 16
    ctx->r15 = S32(U32(ctx->r4) >> 16);
    // 0x150EA4A8: addiu       $a0, $t7, -0x40
    ctx->r4 = ADD32(ctx->r15, -0X40);
    // 0x150EA4AC: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x150EA4B0: jal         0x151423D8
    // 0x150EA4B4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x150EA4B4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x150EA4B8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x150EA4BC: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150EA4C0: lw          $t0, -0x161C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X161C);
    // 0x150EA4C4: lw          $t9, 0x84($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X84);
    // 0x150EA4C8: lwc1        $f4, 0x8C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8C);
    // 0x150EA4CC: lwc1        $f8, 0x88($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X88);
    // 0x150EA4D0: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150EA4D4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150EA4D8: lw          $t2, 0x80($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X80);
    // 0x150EA4DC: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x150EA4E0: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150EA4E4: mflo        $t1
    ctx->r9 = lo;
    // 0x150EA4E8: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x150EA4EC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x150EA4F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150EA4F4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x150EA4F8: jr          $ra
    // 0x150EA4FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x150EA4FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1508CA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508CA88: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1508CA8C: addiu       $a0, $a0, 0x23B0
    ctx->r4 = ADD32(ctx->r4, 0X23B0);
    // 0x1508CA90: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x1508CA94: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x1508CA98: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1508CA9C: lb          $t6, 0x1703($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X1703);
    // 0x1508CAA0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x1508CAA4: sb          $t7, 0x1703($v0)
    MEM_B(0X1703, ctx->r2) = ctx->r15;
    // 0x1508CAA8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x1508CAAC: lb          $t8, -0x270($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X270);
    // 0x1508CAB0: lb          $v1, 0x1703($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1703);
    // 0x1508CAB4: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x1508CAB8: bnel        $at, $zero, L_1508CAD0
    if (ctx->r1 != 0) {
        // 0x1508CABC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1508CAD0;
    }
    goto skip_0;
    // 0x1508CABC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x1508CAC0: sb          $zero, 0x1703($v0)
    MEM_B(0X1703, ctx->r2) = 0;
    // 0x1508CAC4: lw          $t9, 0x23B0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X23B0);
    // 0x1508CAC8: lb          $v1, 0x1703($t9)
    ctx->r3 = MEM_B(ctx->r25, 0X1703);
    // 0x1508CACC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1508CAD0:
    // 0x1508CAD0: jr          $ra
    // 0x1508CAD4: nop

    return;
    return;
    // 0x1508CAD4: nop

;}
RECOMP_FUNC void func_150DEACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DEACC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150DEAD0: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x150DEAD4: lwc1        $f4, 0x110($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X110);
    // 0x150DEAD8: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150DEADC: lwc1        $f10, 0x34($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X34);
    // 0x150DEAE0: lwc1        $f18, 0x114($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X114);
    // 0x150DEAE4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150DEAE8: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150DEAEC: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x150DEAF0: swc1        $f16, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f16.u32l;
    // 0x150DEAF4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150DEAF8: lwc1        $f16, 0x118($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X118);
    // 0x150DEAFC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150DEB00: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150DEB04: lwc1        $f10, 0x3C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x150DEB08: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x150DEB0C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150DEB10: lwc1        $f8, 0x11C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X11C);
    // 0x150DEB14: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150DEB18: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150DEB1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150DEB20: swc1        $f6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f6.u32l;
    // 0x150DEB24: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150DEB28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150DEB2C: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x150DEB30: swc1        $f18, 0x11C($a0)
    MEM_W(0X11C, ctx->r4) = ctx->f18.u32l;
    // 0x150DEB34: lwc1        $f10, 0x11C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X11C);
    // 0x150DEB38: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x150DEB3C: nop

    // 0x150DEB40: bc1f        L_150DEB50
    if (!c1cs) {
        // 0x150DEB44: nop
    
            goto L_150DEB50;
    }
    // 0x150DEB44: nop

    // 0x150DEB48: jr          $ra
    // 0x150DEB4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150DEB4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150DEB50:
    // 0x150DEB50: jr          $ra
    // 0x150DEB54: nop

    return;
    return;
    // 0x150DEB54: nop

;}
RECOMP_FUNC void func_151F2C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F2C4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151F2C50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F2C54: jal         0x10024880
    // 0x151F2C58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x151F2C58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x151F2C5C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151F2C60: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151F2C64: lw          $t6, 0xE04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XE04);
    // 0x151F2C68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151F2C6C: bne         $t6, $at, L_151F2C90
    if (ctx->r14 != ctx->r1) {
        // 0x151F2C70: nop
    
            goto L_151F2C90;
    }
    // 0x151F2C70: nop

    // 0x151F2C74: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x151F2C78: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2C7C: sb          $t7, 0xE18($at)
    MEM_B(0XE18, ctx->r1) = ctx->r15;
    // 0x151F2C80: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x151F2C84: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2C88: b           L_151F2CBC
    // 0x151F2C8C: sw          $t8, 0xE04($at)
    MEM_W(0XE04, ctx->r1) = ctx->r24;
        goto L_151F2CBC;
    // 0x151F2C8C: sw          $t8, 0xE04($at)
    MEM_W(0XE04, ctx->r1) = ctx->r24;
L_151F2C90:
    // 0x151F2C90: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151F2C94: lw          $t9, 0xE04($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XE04);
    // 0x151F2C98: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151F2C9C: bne         $t9, $at, L_151F2CBC
    if (ctx->r25 != ctx->r1) {
        // 0x151F2CA0: nop
    
            goto L_151F2CBC;
    }
    // 0x151F2CA0: nop

    // 0x151F2CA4: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x151F2CA8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2CAC: sb          $t0, 0xE18($at)
    MEM_B(0XE18, ctx->r1) = ctx->r8;
    // 0x151F2CB0: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x151F2CB4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2CB8: sw          $t1, 0xE04($at)
    MEM_W(0XE04, ctx->r1) = ctx->r9;
L_151F2CBC:
    // 0x151F2CBC: jal         0x10024880
    // 0x151F2CC0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x151F2CC0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x151F2CC4: b           L_151F2CCC
    // 0x151F2CC8: nop

        goto L_151F2CCC;
    // 0x151F2CC8: nop

L_151F2CCC:
    // 0x151F2CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F2CD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151F2CD4: jr          $ra
    // 0x151F2CD8: nop

    return;
    return;
    // 0x151F2CD8: nop

;}
RECOMP_FUNC void func_15071470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071470: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15071474: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15071478: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1507147C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15071480: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15071484: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15071488: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507148C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15071490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15071494: jal         0x150FF840
    // 0x15071498: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_150FF840(rdram, ctx);
        goto after_0;
    // 0x15071498: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x1507149C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150714A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150714A4: jr          $ra
    // 0x150714A8: nop

    return;
    return;
    // 0x150714A8: nop

;}
RECOMP_FUNC void func_150409C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150409C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150409CC: jr          $ra
    // 0x150409D0: nop

    return;
    return;
    // 0x150409D0: nop

;}
RECOMP_FUNC void func_1517F720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517F720: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517F724: sh          $a1, -0x21F8($at)
    MEM_H(-0X21F8, ctx->r1) = ctx->r5;
    // 0x1517F728: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517F72C: sb          $a2, -0x2278($at)
    MEM_B(-0X2278, ctx->r1) = ctx->r6;
    // 0x1517F730: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517F734: sb          $zero, -0x2277($at)
    MEM_B(-0X2277, ctx->r1) = 0;
    // 0x1517F738: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517F73C: sb          $a0, -0x2276($at)
    MEM_B(-0X2276, ctx->r1) = ctx->r4;
    // 0x1517F740: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x1517F744: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517F748: sb          $a3, -0x2275($at)
    MEM_B(-0X2275, ctx->r1) = ctx->r7;
    // 0x1517F74C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517F750: sb          $t6, -0x2274($at)
    MEM_B(-0X2274, ctx->r1) = ctx->r14;
    // 0x1517F754: jr          $ra
    // 0x1517F758: nop

    return;
    return;
    // 0x1517F758: nop

;}
RECOMP_FUNC void func_150082CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150082CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150082D0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150082D4: addiu       $v1, $v1, 0x35C4
    ctx->r3 = ADD32(ctx->r3, 0X35C4);
    // 0x150082D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150082DC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x150082E0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150082E4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150082E8: beq         $v0, $zero, L_15008328
    if (ctx->r2 == 0) {
        // 0x150082EC: addiu       $a1, $v0, -0x1
        ctx->r5 = ADD32(ctx->r2, -0X1);
            goto L_15008328;
    }
    // 0x150082EC: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x150082F0: lbu         $t6, 0x35C5($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35C5);
    // 0x150082F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150082F8: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x150082FC: bne         $t6, $zero, L_15008310
    if (ctx->r14 != 0) {
        // 0x15008300: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_15008310;
    }
    // 0x15008300: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15008304: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x15008308: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1500830C: sb          $t7, 0x35EA($at)
    MEM_B(0X35EA, ctx->r1) = ctx->r15;
L_15008310:
    // 0x15008310: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x15008314: lw          $t8, 0x3C94($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3C94);
    // 0x15008318: lbu         $a3, 0x3C90($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X3C90);
    // 0x1500831C: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    // 0x15008320: jal         0x1501D348
    // 0x15008324: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1501D348(rdram, ctx);
        goto after_0;
    // 0x15008324: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
L_15008328:
    // 0x15008328: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1500832C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15008330: jr          $ra
    // 0x15008334: nop

    return;
    return;
    // 0x15008334: nop

;}
RECOMP_FUNC void func_151C36D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C36D8: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x151C36DC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151C36E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151C36E4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151C36E8: sw          $a1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r5;
    // 0x151C36EC: sw          $a2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r6;
    // 0x151C36F0: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x151C36F4: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x151C36F8: sw          $t6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r14;
    // 0x151C36FC: sw          $t7, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r15;
    // 0x151C3700: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151C3704: addiu       $t8, $sp, 0xD4
    ctx->r24 = ADD32(ctx->r29, 0XD4);
    // 0x151C3708: addiu       $t3, $zero, -0x40
    ctx->r11 = ADD32(0, -0X40);
    // 0x151C370C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151C3710: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x151C3714: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x151C3718: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151C371C: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x151C3720: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151C3724: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x151C3728: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x151C372C: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x151C3730: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C3734: lwc1        $f4, -0x55AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X55AC);
    // 0x151C3738: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C373C: lwc1        $f6, -0x55A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X55A8);
    // 0x151C3740: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C3744: lwc1        $f8, -0x55A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X55A4);
    // 0x151C3748: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C374C: lwc1        $f10, -0x55A0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X55A0);
    // 0x151C3750: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151C3754: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151C3758: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x151C375C: sh          $t3, 0xFC($sp)
    MEM_H(0XFC, ctx->r29) = ctx->r11;
    // 0x151C3760: sh          $t4, 0xFE($sp)
    MEM_H(0XFE, ctx->r29) = ctx->r12;
    // 0x151C3764: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151C3768: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x151C376C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x151C3770: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151C3774: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151C3778: sw          $t5, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r13;
    // 0x151C377C: sh          $t6, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r14;
    // 0x151C3780: sh          $t7, 0x10A($sp)
    MEM_H(0X10A, ctx->r29) = ctx->r15;
    // 0x151C3784: sh          $t0, 0x10C($sp)
    MEM_H(0X10C, ctx->r29) = ctx->r8;
    // 0x151C3788: sb          $t9, 0x10E($sp)
    MEM_B(0X10E, ctx->r29) = ctx->r25;
    // 0x151C378C: sb          $t8, 0x10F($sp)
    MEM_B(0X10F, ctx->r29) = ctx->r24;
    // 0x151C3790: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151C3794: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151C3798: sb          $t3, 0x112($sp)
    MEM_B(0X112, ctx->r29) = ctx->r11;
    // 0x151C379C: sb          $t4, 0x113($sp)
    MEM_B(0X113, ctx->r29) = ctx->r12;
    // 0x151C37A0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151C37A4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151C37A8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151C37AC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151C37B0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C37B4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C37B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C37BC: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x151C37C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C37C4: sh          $t2, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r10;
    // 0x151C37C8: sb          $t2, 0x111($sp)
    MEM_B(0X111, ctx->r29) = ctx->r10;
    // 0x151C37CC: sb          $t5, 0x114($sp)
    MEM_B(0X114, ctx->r29) = ctx->r13;
    // 0x151C37D0: sb          $t6, 0x119($sp)
    MEM_B(0X119, ctx->r29) = ctx->r14;
    // 0x151C37D4: sb          $t7, 0x11A($sp)
    MEM_B(0X11A, ctx->r29) = ctx->r15;
    // 0x151C37D8: sb          $t0, 0x11B($sp)
    MEM_B(0X11B, ctx->r29) = ctx->r8;
    // 0x151C37DC: sb          $t9, 0x11C($sp)
    MEM_B(0X11C, ctx->r29) = ctx->r25;
    // 0x151C37E0: sb          $t8, 0x121($sp)
    MEM_B(0X121, ctx->r29) = ctx->r24;
    // 0x151C37E4: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x151C37E8: lui         $t4, 0x6
    ctx->r12 = S32(0X6 << 16);
    // 0x151C37EC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151C37F0: addiu       $t2, $zero, 0x24
    ctx->r10 = ADD32(0, 0X24);
    // 0x151C37F4: ori         $t3, $t3, 0x5
    ctx->r11 = ctx->r11 | 0X5;
    // 0x151C37F8: ori         $t4, $t4, 0x600
    ctx->r12 = ctx->r12 | 0X600;
    // 0x151C37FC: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x151C3800: addiu       $t6, $zero, 0x1F
    ctx->r14 = ADD32(0, 0X1F);
    // 0x151C3804: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151C3808: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x151C380C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x151C3810: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151C3814: sh          $zero, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = 0;
    // 0x151C3818: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
    // 0x151C381C: sb          $t1, 0x110($sp)
    MEM_B(0X110, ctx->r29) = ctx->r9;
    // 0x151C3820: sb          $zero, 0x115($sp)
    MEM_B(0X115, ctx->r29) = 0;
    // 0x151C3824: sb          $zero, 0x116($sp)
    MEM_B(0X116, ctx->r29) = 0;
    // 0x151C3828: sb          $zero, 0x117($sp)
    MEM_B(0X117, ctx->r29) = 0;
    // 0x151C382C: sb          $zero, 0x118($sp)
    MEM_B(0X118, ctx->r29) = 0;
    // 0x151C3830: sb          $zero, 0x11D($sp)
    MEM_B(0X11D, ctx->r29) = 0;
    // 0x151C3834: sb          $zero, 0x11E($sp)
    MEM_B(0X11E, ctx->r29) = 0;
    // 0x151C3838: sb          $zero, 0x11F($sp)
    MEM_B(0X11F, ctx->r29) = 0;
    // 0x151C383C: sb          $zero, 0x120($sp)
    MEM_B(0X120, ctx->r29) = 0;
    // 0x151C3840: sb          $zero, 0x122($sp)
    MEM_B(0X122, ctx->r29) = 0;
    // 0x151C3844: sb          $t1, 0x123($sp)
    MEM_B(0X123, ctx->r29) = ctx->r9;
    // 0x151C3848: sb          $t2, 0x124($sp)
    MEM_B(0X124, ctx->r29) = ctx->r10;
    // 0x151C384C: sw          $t3, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r11;
    // 0x151C3850: sw          $t4, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r12;
    // 0x151C3854: sh          $t5, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r13;
    // 0x151C3858: sh          $t6, 0x132($sp)
    MEM_H(0X132, ctx->r29) = ctx->r14;
    // 0x151C385C: sh          $t7, 0x134($sp)
    MEM_H(0X134, ctx->r29) = ctx->r15;
    // 0x151C3860: sb          $zero, 0x136($sp)
    MEM_B(0X136, ctx->r29) = 0;
    // 0x151C3864: sb          $t0, 0x13C($sp)
    MEM_B(0X13C, ctx->r29) = ctx->r8;
    // 0x151C3868: sb          $zero, 0x13D($sp)
    MEM_B(0X13D, ctx->r29) = 0;
    // 0x151C386C: sb          $t9, 0x13E($sp)
    MEM_B(0X13E, ctx->r29) = ctx->r25;
    // 0x151C3870: sb          $t8, 0x13F($sp)
    MEM_B(0X13F, ctx->r29) = ctx->r24;
    // 0x151C3874: lw          $a2, 0x148($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X148);
    // 0x151C3878: lbu         $a1, 0x147($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X147);
    // 0x151C387C: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x151C3880: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x151C3884: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x151C3888: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x151C388C: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x151C3890: swc1        $f18, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f18.u32l;
    // 0x151C3894: jal         0x15152B38
    // 0x151C3898: swc1        $f4, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f4.u32l;
    func_15152B38(rdram, ctx);
        goto after_0;
    // 0x151C3898: swc1        $f4, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151C389C: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x151C38A0: addiu       $t1, $zero, 0x2B
    ctx->r9 = ADD32(0, 0X2B);
    // 0x151C38A4: addiu       $t2, $zero, 0x4403
    ctx->r10 = ADD32(0, 0X4403);
    // 0x151C38A8: ori         $t3, $t3, 0x5
    ctx->r11 = ctx->r11 | 0X5;
    // 0x151C38AC: lui         $t4, 0x2
    ctx->r12 = S32(0X2 << 16);
    // 0x151C38B0: sb          $t1, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r9;
    // 0x151C38B4: sh          $t2, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r10;
    // 0x151C38B8: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x151C38BC: jal         0x150ADA20
    // 0x151C38C0: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151C38C0: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    after_1:
    // 0x151C38C4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151C38C8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C38CC: mfhi        $t5
    ctx->r13 = hi;
    // 0x151C38D0: addiu       $t6, $t5, 0x4
    ctx->r14 = ADD32(ctx->r13, 0X4);
    // 0x151C38D4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151C38D8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151C38DC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C38E0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C38E4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151C38E8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151C38EC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151C38F0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151C38F4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151C38F8: sh          $t6, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r14;
    // 0x151C38FC: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x151C3900: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x151C3904: sb          $t7, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r15;
    // 0x151C3908: sb          $t0, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r8;
    // 0x151C390C: sb          $t9, 0x72($sp)
    MEM_B(0X72, ctx->r29) = ctx->r25;
    // 0x151C3910: sb          $t8, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r24;
    // 0x151C3914: sb          $t1, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r9;
    // 0x151C3918: sb          $t2, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r10;
    // 0x151C391C: sb          $t3, 0x76($sp)
    MEM_B(0X76, ctx->r29) = ctx->r11;
    // 0x151C3920: sb          $t4, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r12;
    // 0x151C3924: jal         0x150ADA68
    // 0x151C3928: sb          $t5, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r13;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151C3928: sb          $t5, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r13;
    after_2:
    // 0x151C392C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x151C3930: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C3934: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x151C3938: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151C393C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151C3940: addiu       $t6, $sp, 0x8C
    ctx->r14 = ADD32(ctx->r29, 0X8C);
    // 0x151C3944: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151C3948: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x151C394C: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x151C3950: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151C3954: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151C3958: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x151C395C: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x151C3960: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151C3964: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151C3968: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x151C396C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151C3970: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151C3974: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151C3978: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C397C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151C3980: sh          $t8, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r24;
    // 0x151C3984: sh          $t1, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r9;
    // 0x151C3988: sh          $t2, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r10;
    // 0x151C398C: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
    // 0x151C3990: swc1        $f2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f2.u32l;
    // 0x151C3994: swc1        $f2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f2.u32l;
    // 0x151C3998: swc1        $f2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f2.u32l;
    // 0x151C399C: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    // 0x151C39A0: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    // 0x151C39A4: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x151C39A8: jal         0x150ADA20
    // 0x151C39AC: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151C39AC: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x151C39B0: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x151C39B4: beq         $t3, $zero, L_151C39C4
    if (ctx->r11 == 0) {
        // 0x151C39B8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151C39C4;
    }
    // 0x151C39B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151C39BC: b           L_151C39C4
    // 0x151C39C0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_151C39C4;
    // 0x151C39C0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_151C39C4:
    // 0x151C39C4: jal         0x150ADA20
    // 0x151C39C8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151C39C8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_4:
    // 0x151C39CC: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x151C39D0: beq         $t4, $zero, L_151C39E0
    if (ctx->r12 == 0) {
        // 0x151C39D4: lw          $v1, 0x40($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X40);
            goto L_151C39E0;
    }
    // 0x151C39D4: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x151C39D8: b           L_151C39E4
    // 0x151C39DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_151C39E4;
    // 0x151C39DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_151C39E0:
    // 0x151C39E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C39E4:
    // 0x151C39E4: ori         $t5, $v0, 0x1
    ctx->r13 = ctx->r2 | 0X1;
    // 0x151C39E8: or          $t6, $t5, $v1
    ctx->r14 = ctx->r13 | ctx->r3;
    // 0x151C39EC: lbu         $t0, 0x147($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X147);
    // 0x151C39F0: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x151C39F4: ori         $t9, $t6, 0xC200
    ctx->r25 = ctx->r14 | 0XC200;
    // 0x151C39F8: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x151C39FC: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x151C3A00: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151C3A04: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151C3A08: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151C3A0C: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x151C3A10: sw          $t9, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r25;
    // 0x151C3A14: sb          $t8, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r24;
    // 0x151C3A18: sb          $t1, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r9;
    // 0x151C3A1C: sb          $t2, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r10;
    // 0x151C3A20: sb          $t3, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = ctx->r11;
    // 0x151C3A24: sb          $t4, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r12;
    // 0x151C3A28: sb          $t5, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r13;
    // 0x151C3A2C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x151C3A30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151C3A34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151C3A38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151C3A3C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151C3A40: jal         0x15130280
    // 0x151C3A44: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_15130280(rdram, ctx);
        goto after_5;
    // 0x151C3A44: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_5:
    // 0x151C3A48: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x151C3A4C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x151C3A50: sb          $t6, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r14;
    // 0x151C3A54: jal         0x150ADA20
    // 0x151C3A58: sb          $t9, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151C3A58: sb          $t9, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r25;
    after_6:
    // 0x151C3A5C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151C3A60: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C3A64: mfhi        $t8
    ctx->r24 = hi;
    // 0x151C3A68: addiu       $t1, $t8, 0x6
    ctx->r9 = ADD32(ctx->r24, 0X6);
    // 0x151C3A6C: sh          $t1, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r9;
    // 0x151C3A70: sb          $zero, 0x58($sp)
    MEM_B(0X58, ctx->r29) = 0;
    // 0x151C3A74: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151C3A78: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C3A7C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x151C3A80: nop

    // 0x151C3A84: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x151C3A88: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151C3A8C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C3A90: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x151C3A94: nop

    // 0x151C3A98: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x151C3A9C: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151C3AA0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151C3AA4: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x151C3AA8: jal         0x150ADA20
    // 0x151C3AAC: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151C3AAC: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    after_7:
    // 0x151C3AB0: lbu         $t1, 0x147($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X147);
    // 0x151C3AB4: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x151C3AB8: andi        $a2, $v0, 0x1
    ctx->r6 = ctx->r2 & 0X1;
    // 0x151C3ABC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151C3AC0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C3AC4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C3AC8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151C3ACC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151C3AD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151C3AD4: addiu       $a2, $a2, 0x5
    ctx->r6 = ADD32(ctx->r6, 0X5);
    // 0x151C3AD8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x151C3ADC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x151C3AE0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151C3AE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C3AE8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151C3AEC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x151C3AF0: jal         0x151602C0
    // 0x151C3AF4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    func_151602C0(rdram, ctx);
        goto after_8;
    // 0x151C3AF4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    after_8:
    // 0x151C3AF8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151C3AFC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151C3B00: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    // 0x151C3B04: jr          $ra
    // 0x151C3B08: nop

    return;
    return;
    // 0x151C3B08: nop

;}
RECOMP_FUNC void func_151A9AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A9AA4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151A9AA8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x151A9AAC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151A9AB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151A9AB4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x151A9AB8: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x151A9ABC: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151A9AC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A9AC4: lwc1        $f6, -0x7088($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7088);
    // 0x151A9AC8: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x151A9ACC: lwc1        $f0, 0x118($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X118);
    // 0x151A9AD0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x151A9AD4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x151A9AD8: nop

    // 0x151A9ADC: bc1fl       L_151A9B00
    if (!c1cs) {
        // 0x151A9AE0: lwc1        $f16, 0x18($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
            goto L_151A9B00;
    }
    goto skip_0;
    // 0x151A9AE0: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    skip_0:
    // 0x151A9AE4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151A9AE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151A9AEC: nop

    // 0x151A9AF0: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x151A9AF4: b           L_151A9B10
    // 0x151A9AF8: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
        goto L_151A9B10;
    // 0x151A9AF8: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x151A9AFC: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
L_151A9B00:
    // 0x151A9B00: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A9B04: nop

    // 0x151A9B08: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151A9B0C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
L_151A9B10:
    // 0x151A9B10: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151A9B14: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151A9B18: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151A9B1C: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151A9B20: addiu       $a3, $s1, 0x34
    ctx->r7 = ADD32(ctx->r17, 0X34);
    // 0x151A9B24: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151A9B28: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x151A9B2C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151A9B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A9B34: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x151A9B38: jal         0x15045800
    // 0x151A9B3C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    func_15045800(rdram, ctx);
        goto after_0;
    // 0x151A9B3C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x151A9B40: beq         $v0, $zero, L_151A9B84
    if (ctx->r2 == 0) {
        // 0x151A9B44: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_151A9B84;
    }
    // 0x151A9B44: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151A9B48: lwc1        $f18, 0x34($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X34);
    // 0x151A9B4C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151A9B50: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151A9B54: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x151A9B58: lbu         $t6, 0x1($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X1);
    // 0x151A9B5C: lbu         $a3, 0xC($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0XC);
    // 0x151A9B60: jal         0x151ABE40
    // 0x151A9B64: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_151ABE40(rdram, ctx);
        goto after_1;
    // 0x151A9B64: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x151A9B68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151A9B6C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x151A9B70: addiu       $a2, $zero, 0x5208
    ctx->r6 = ADD32(0, 0X5208);
    // 0x151A9B74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151A9B78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151A9B7C: jal         0x10010FFC
    // 0x151A9B80: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_10010FFC(rdram, ctx);
        goto after_2;
    // 0x151A9B80: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_2:
L_151A9B84:
    // 0x151A9B84: jal         0x151ABE00
    // 0x151A9B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151ABE00(rdram, ctx);
        goto after_3;
    // 0x151A9B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x151A9B8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151A9B90: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x151A9B94: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x151A9B98: jr          $ra
    // 0x151A9B9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x151A9B9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_150F9BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F9BB0: addiu       $sp, $sp, -0x228
    ctx->r29 = ADD32(ctx->r29, -0X228);
    // 0x150F9BB4: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x150F9BB8: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x150F9BBC: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x150F9BC0: andi        $s4, $a1, 0xFF
    ctx->r20 = ctx->r5 & 0XFF;
    // 0x150F9BC4: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x150F9BC8: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x150F9BCC: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x150F9BD0: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x150F9BD4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x150F9BD8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x150F9BDC: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x150F9BE0: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x150F9BE4: sw          $a1, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->r5;
    // 0x150F9BE8: sw          $s6, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->r22;
    // 0x150F9BEC: lbu         $t6, 0x3B($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X3B);
    // 0x150F9BF0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150F9BF4: addiu       $t8, $zero, 0x33
    ctx->r24 = ADD32(0, 0X33);
    // 0x150F9BF8: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x150F9BFC: sw          $zero, 0x214($sp)
    MEM_W(0X214, ctx->r29) = 0;
    // 0x150F9C00: sw          $zero, 0x218($sp)
    MEM_W(0X218, ctx->r29) = 0;
    // 0x150F9C04: sw          $zero, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = 0;
    // 0x150F9C08: sw          $zero, 0x220($sp)
    MEM_W(0X220, ctx->r29) = 0;
    // 0x150F9C0C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x150F9C10: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150F9C14: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150F9C18: sw          $s5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r21;
    // 0x150F9C1C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x150F9C20: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x150F9C24: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150F9C28: addiu       $a2, $zero, 0x4D
    ctx->r6 = ADD32(0, 0X4D);
    // 0x150F9C2C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150F9C30: jal         0x15149130
    // 0x150F9C34: sb          $t6, 0x210($sp)
    MEM_B(0X210, ctx->r29) = ctx->r14;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x150F9C34: sb          $t6, 0x210($sp)
    MEM_B(0X210, ctx->r29) = ctx->r14;
    after_0:
    // 0x150F9C38: beq         $v0, $zero, L_150FA0EC
    if (ctx->r2 == 0) {
        // 0x150F9C3C: addiu       $s0, $v0, 0x28
        ctx->r16 = ADD32(ctx->r2, 0X28);
            goto L_150FA0EC;
    }
    // 0x150F9C3C: addiu       $s0, $v0, 0x28
    ctx->r16 = ADD32(ctx->r2, 0X28);
    // 0x150F9C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F9C44: addiu       $a1, $sp, 0x20C
    ctx->r5 = ADD32(ctx->r29, 0X20C);
    // 0x150F9C48: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x150F9C4C: jal         0x10022EC0
    // 0x150F9C50: sw          $v0, 0x224($sp)
    MEM_W(0X224, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150F9C50: sw          $v0, 0x224($sp)
    MEM_W(0X224, ctx->r29) = ctx->r2;
    after_1:
    // 0x150F9C54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F9C58: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x150F9C5C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150F9C60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150F9C64: addiu       $v1, $v1, 0x5480
    ctx->r3 = ADD32(ctx->r3, 0X5480);
    // 0x150F9C68: sb          $zero, 0x204($sp)
    MEM_B(0X204, ctx->r29) = 0;
    // 0x150F9C6C: lwc1        $f6, 0x150($s6)
    ctx->f6.u32l = MEM_W(ctx->r22, 0X150);
    // 0x150F9C70: lwc1        $f4, 0x14C($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X14C);
    // 0x150F9C74: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150F9C78: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F9C7C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150F9C80: sw          $s6, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r22;
    // 0x150F9C84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9C88: lwc1        $f18, 0x1D60($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1D60);
    // 0x150F9C8C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150F9C90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9C94: lwc1        $f4, 0x1D64($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1D64);
    // 0x150F9C98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9C9C: lwc1        $f6, 0x1D68($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1D68);
    // 0x150F9CA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9CA4: lwc1        $f8, 0x1D6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1D6C);
    // 0x150F9CA8: swc1        $f16, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->f16.u32l;
    // 0x150F9CAC: lbu         $t0, 0x3B($s6)
    ctx->r8 = MEM_BU(ctx->r22, 0X3B);
    // 0x150F9CB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9CB4: lwc1        $f10, 0x1D70($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1D70);
    // 0x150F9CB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9CBC: lwc1        $f16, 0x1D74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1D74);
    // 0x150F9CC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9CC4: swc1        $f18, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f18.u32l;
    // 0x150F9CC8: lwc1        $f18, 0x1D78($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1D78);
    // 0x150F9CCC: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x150F9CD0: swc1        $f4, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f4.u32l;
    // 0x150F9CD4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F9CD8: lui         $at, 0x42BE
    ctx->r1 = S32(0X42BE << 16);
    // 0x150F9CDC: swc1        $f6, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f6.u32l;
    // 0x150F9CE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F9CE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9CE8: swc1        $f8, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f8.u32l;
    // 0x150F9CEC: lwc1        $f8, 0x1D7C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1D7C);
    // 0x150F9CF0: lw          $t1, 0x224($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X224);
    // 0x150F9CF4: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150F9CF8: addiu       $t2, $zero, 0x5F
    ctx->r10 = ADD32(0, 0X5F);
    // 0x150F9CFC: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x150F9D00: addiu       $t4, $zero, 0x2203
    ctx->r12 = ADD32(0, 0X2203);
    // 0x150F9D04: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x150F9D08: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150F9D0C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150F9D10: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F9D14: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F9D18: sb          $t0, 0x1B0($sp)
    MEM_B(0X1B0, ctx->r29) = ctx->r8;
    // 0x150F9D1C: swc1        $f0, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->f0.u32l;
    // 0x150F9D20: swc1        $f0, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->f0.u32l;
    // 0x150F9D24: swc1        $f0, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f0.u32l;
    // 0x150F9D28: swc1        $f0, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f0.u32l;
    // 0x150F9D2C: swc1        $f0, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f0.u32l;
    // 0x150F9D30: swc1        $f0, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->f0.u32l;
    // 0x150F9D34: swc1        $f20, 0x1F4($sp)
    MEM_W(0X1F4, ctx->r29) = ctx->f20.u32l;
    // 0x150F9D38: swc1        $f20, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->f20.u32l;
    // 0x150F9D3C: swc1        $f20, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->f20.u32l;
    // 0x150F9D40: swc1        $f20, 0x1F0($sp)
    MEM_W(0X1F0, ctx->r29) = ctx->f20.u32l;
    // 0x150F9D44: sb          $t2, 0x154($sp)
    MEM_B(0X154, ctx->r29) = ctx->r10;
    // 0x150F9D48: sb          $t3, 0x155($sp)
    MEM_B(0X155, ctx->r29) = ctx->r11;
    // 0x150F9D4C: sh          $t4, 0x156($sp)
    MEM_H(0X156, ctx->r29) = ctx->r12;
    // 0x150F9D50: sh          $t5, 0x158($sp)
    MEM_H(0X158, ctx->r29) = ctx->r13;
    // 0x150F9D54: sw          $zero, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = 0;
    // 0x150F9D58: sw          $zero, 0x160($sp)
    MEM_W(0X160, ctx->r29) = 0;
    // 0x150F9D5C: sb          $t6, 0x164($sp)
    MEM_B(0X164, ctx->r29) = ctx->r14;
    // 0x150F9D60: sb          $t7, 0x165($sp)
    MEM_B(0X165, ctx->r29) = ctx->r15;
    // 0x150F9D64: sb          $t8, 0x166($sp)
    MEM_B(0X166, ctx->r29) = ctx->r24;
    // 0x150F9D68: sb          $t9, 0x167($sp)
    MEM_B(0X167, ctx->r29) = ctx->r25;
    // 0x150F9D6C: addiu       $t0, $sp, 0x170
    ctx->r8 = ADD32(ctx->r29, 0X170);
    // 0x150F9D70: swc1        $f10, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f10.u32l;
    // 0x150F9D74: swc1        $f16, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->f16.u32l;
    // 0x150F9D78: swc1        $f18, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->f18.u32l;
    // 0x150F9D7C: swc1        $f4, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->f4.u32l;
    // 0x150F9D80: swc1        $f6, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f6.u32l;
    // 0x150F9D84: swc1        $f8, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->f8.u32l;
    // 0x150F9D88: sw          $t1, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r9;
    // 0x150F9D8C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x150F9D90: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x150F9D94: addiu       $t4, $sp, 0x17C
    ctx->r12 = ADD32(ctx->r29, 0X17C);
    // 0x150F9D98: lui         $t8, 0x40EC
    ctx->r24 = S32(0X40EC << 16);
    // 0x150F9D9C: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x150F9DA0: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150F9DA4: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x150F9DA8: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x150F9DAC: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x150F9DB0: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150F9DB4: addiu       $s2, $s2, 0x4AA0
    ctx->r18 = ADD32(ctx->r18, 0X4AA0);
    // 0x150F9DB8: addiu       $s3, $sp, 0x1AC
    ctx->r19 = ADD32(ctx->r29, 0X1AC);
    // 0x150F9DBC: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150F9DC0: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x150F9DC4: addiu       $s1, $sp, 0x154
    ctx->r17 = ADD32(ctx->r29, 0X154);
    // 0x150F9DC8: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x150F9DCC: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150F9DD0: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x150F9DD4: swc1        $f20, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f20.u32l;
    // 0x150F9DD8: swc1        $f20, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f20.u32l;
    // 0x150F9DDC: swc1        $f20, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f20.u32l;
    // 0x150F9DE0: sw          $t8, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r24;
    // 0x150F9DE4: sb          $zero, 0x198($sp)
    MEM_B(0X198, ctx->r29) = 0;
    // 0x150F9DE8: sb          $t9, 0x199($sp)
    MEM_B(0X199, ctx->r29) = ctx->r25;
    // 0x150F9DEC: sb          $zero, 0x19A($sp)
    MEM_B(0X19A, ctx->r29) = 0;
    // 0x150F9DF0: sb          $t2, 0x19B($sp)
    MEM_B(0X19B, ctx->r29) = ctx->r10;
    // 0x150F9DF4: sw          $zero, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = 0;
    // 0x150F9DF8: sb          $zero, 0x1B1($sp)
    MEM_B(0X1B1, ctx->r29) = 0;
L_150F9DFC:
    // 0x150F9DFC: jal         0x150ADA20
    // 0x150F9E00: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150F9E00: nop

    after_2:
    // 0x150F9E04: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x150F9E08: beq         $t1, $zero, L_150F9E18
    if (ctx->r9 == 0) {
        // 0x150F9E0C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_150F9E18;
    }
    // 0x150F9E0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150F9E10: b           L_150F9E1C
    // 0x150F9E14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_150F9E1C;
    // 0x150F9E14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_150F9E18:
    // 0x150F9E18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150F9E1C:
    // 0x150F9E1C: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x150F9E20: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x150F9E24: addiu       $t6, $zero, 0x5C
    ctx->r14 = ADD32(0, 0X5C);
    // 0x150F9E28: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x150F9E2C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x150F9E30: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150F9E34: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150F9E38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F9E3C: addiu       $a3, $zero, 0x25
    ctx->r7 = ADD32(0, 0X25);
    // 0x150F9E40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150F9E44: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150F9E48: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150F9E4C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150F9E50: jal         0x1513D2F0
    // 0x150F9E54: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    func_1513D2F0(rdram, ctx);
        goto after_3;
    // 0x150F9E54: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    after_3:
    // 0x150F9E58: lbu         $t5, 0x1B1($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1B1);
    // 0x150F9E5C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x150F9E60: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x150F9E64: addu        $t7, $s0, $t4
    ctx->r15 = ADD32(ctx->r16, ctx->r12);
    // 0x150F9E68: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x150F9E6C: sw          $v0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r2;
    // 0x150F9E70: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x150F9E74: lw          $v1, 0x8($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X8);
    // 0x150F9E78: beq         $v1, $zero, L_150F9E88
    if (ctx->r3 == 0) {
        // 0x150F9E7C: addiu       $a0, $v1, 0x110
        ctx->r4 = ADD32(ctx->r3, 0X110);
            goto L_150F9E88;
    }
    // 0x150F9E7C: addiu       $a0, $v1, 0x110
    ctx->r4 = ADD32(ctx->r3, 0X110);
    // 0x150F9E80: jal         0x10022EC0
    // 0x150F9E84: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x150F9E84: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    after_4:
L_150F9E88:
    // 0x150F9E88: lbu         $v0, 0x1B1($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1B1);
    // 0x150F9E8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150F9E90: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x150F9E94: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x150F9E98: bne         $at, $zero, L_150F9DFC
    if (ctx->r1 != 0) {
        // 0x150F9E9C: sb          $t2, 0x1B1($sp)
        MEM_B(0X1B1, ctx->r29) = ctx->r10;
            goto L_150F9DFC;
    }
    // 0x150F9E9C: sb          $t2, 0x1B1($sp)
    MEM_B(0X1B1, ctx->r29) = ctx->r10;
    // 0x150F9EA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9EA4: lwc1        $f0, 0x1D80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1D80);
    // 0x150F9EA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9EAC: lwc1        $f2, 0x1D84($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X1D84);
    // 0x150F9EB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9EB4: lwc1        $f12, 0x1D88($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1D88);
    // 0x150F9EB8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150F9EBC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150F9EC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9EC4: lw          $t1, 0x224($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X224);
    // 0x150F9EC8: sh          $zero, 0x88($sp)
    MEM_H(0X88, ctx->r29) = 0;
    // 0x150F9ECC: swc1        $f20, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f20.u32l;
    // 0x150F9ED0: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x150F9ED4: sw          $t1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r9;
    // 0x150F9ED8: lbu         $t0, 0x3B($s6)
    ctx->r8 = MEM_BU(ctx->r22, 0X3B);
    // 0x150F9EDC: lwc1        $f10, 0x1D8C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1D8C);
    // 0x150F9EE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9EE4: sb          $t0, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r8;
    // 0x150F9EE8: lwc1        $f16, 0x1D90($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1D90);
    // 0x150F9EEC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150F9EF0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150F9EF4: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150F9EF8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150F9EFC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150F9F00: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150F9F04: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150F9F08: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150F9F0C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150F9F10: sw          $t3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r11;
    // 0x150F9F14: sw          $t6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r14;
    // 0x150F9F18: sw          $t4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r12;
    // 0x150F9F1C: sw          $t7, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r15;
    // 0x150F9F20: sw          $t5, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r13;
    // 0x150F9F24: sw          $t8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r24;
    // 0x150F9F28: sw          $t9, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r25;
    // 0x150F9F2C: sw          $t2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r10;
    // 0x150F9F30: sb          $t0, 0x151($sp)
    MEM_B(0X151, ctx->r29) = ctx->r8;
    // 0x150F9F34: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x150F9F38: addiu       $t3, $zero, 0x60
    ctx->r11 = ADD32(0, 0X60);
    // 0x150F9F3C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150F9F40: addiu       $t4, $zero, 0x2203
    ctx->r12 = ADD32(0, 0X2203);
    // 0x150F9F44: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x150F9F48: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150F9F4C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F9F50: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F9F54: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150F9F58: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x150F9F5C: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x150F9F60: swc1        $f0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f0.u32l;
    // 0x150F9F64: swc1        $f2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f2.u32l;
    // 0x150F9F68: swc1        $f2, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f2.u32l;
    // 0x150F9F6C: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x150F9F70: swc1        $f12, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f12.u32l;
    // 0x150F9F74: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
    // 0x150F9F78: sw          $zero, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = 0;
    // 0x150F9F7C: swc1        $f20, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f20.u32l;
    // 0x150F9F80: sh          $zero, 0x144($sp)
    MEM_H(0X144, ctx->r29) = 0;
    // 0x150F9F84: sh          $zero, 0x146($sp)
    MEM_H(0X146, ctx->r29) = 0;
    // 0x150F9F88: sh          $zero, 0x148($sp)
    MEM_H(0X148, ctx->r29) = 0;
    // 0x150F9F8C: sh          $zero, 0x14A($sp)
    MEM_H(0X14A, ctx->r29) = 0;
    // 0x150F9F90: sb          $zero, 0x14C($sp)
    MEM_B(0X14C, ctx->r29) = 0;
    // 0x150F9F94: sb          $zero, 0x14D($sp)
    MEM_B(0X14D, ctx->r29) = 0;
    // 0x150F9F98: sb          $zero, 0x14E($sp)
    MEM_B(0X14E, ctx->r29) = 0;
    // 0x150F9F9C: sb          $zero, 0x14F($sp)
    MEM_B(0X14F, ctx->r29) = 0;
    // 0x150F9FA0: sb          $t1, 0x150($sp)
    MEM_B(0X150, ctx->r29) = ctx->r9;
    // 0x150F9FA4: sb          $t3, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r11;
    // 0x150F9FA8: sb          $t6, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r14;
    // 0x150F9FAC: sh          $t4, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r12;
    // 0x150F9FB0: sh          $t7, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r15;
    // 0x150F9FB4: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x150F9FB8: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x150F9FBC: sb          $t5, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r13;
    // 0x150F9FC0: sb          $t8, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r24;
    // 0x150F9FC4: sb          $t9, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r25;
    // 0x150F9FC8: sb          $t2, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r10;
    // 0x150F9FCC: swc1        $f14, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f14.u32l;
    // 0x150F9FD0: swc1        $f14, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f14.u32l;
    // 0x150F9FD4: addiu       $t0, $t0, 0x5480
    ctx->r8 = ADD32(ctx->r8, 0X5480);
    // 0x150F9FD8: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    // 0x150F9FDC: swc1        $f16, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f16.u32l;
    // 0x150F9FE0: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x150F9FE4: addiu       $t1, $sp, 0xBC
    ctx->r9 = ADD32(ctx->r29, 0XBC);
    // 0x150F9FE8: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x150F9FEC: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150F9FF0: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x150F9FF4: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x150F9FF8: addiu       $t5, $t5, 0x5480
    ctx->r13 = ADD32(ctx->r13, 0X5480);
    // 0x150F9FFC: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x150FA000: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x150FA004: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150FA008: addiu       $t7, $sp, 0xC8
    ctx->r15 = ADD32(ctx->r29, 0XC8);
    // 0x150FA00C: lw          $t2, 0x4($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X4);
    // 0x150FA010: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150FA014: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150FA018: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    // 0x150FA01C: lui         $t6, 0xCD
    ctx->r14 = S32(0XCD << 16);
    // 0x150FA020: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150FA024: ori         $t6, $t6, 0x2002
    ctx->r14 = ctx->r14 | 0X2002;
    // 0x150FA028: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150FA02C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150FA030: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x150FA034: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150FA038: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x150FA03C: swc1        $f20, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f20.u32l;
    // 0x150FA040: swc1        $f20, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f20.u32l;
    // 0x150FA044: sw          $t6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r14;
    // 0x150FA048: sb          $t3, 0xE4($sp)
    MEM_B(0XE4, ctx->r29) = ctx->r11;
    // 0x150FA04C: sb          $t1, 0xE5($sp)
    MEM_B(0XE5, ctx->r29) = ctx->r9;
    // 0x150FA050: sb          $zero, 0xE6($sp)
    MEM_B(0XE6, ctx->r29) = 0;
    // 0x150FA054: sb          $t0, 0xE7($sp)
    MEM_B(0XE7, ctx->r29) = ctx->r8;
    // 0x150FA058: sw          $zero, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = 0;
    // 0x150FA05C: sb          $t4, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = ctx->r12;
    // 0x150FA060: sb          $zero, 0x94($sp)
    MEM_B(0X94, ctx->r29) = 0;
    // 0x150FA064: addiu       $s3, $sp, 0x88
    ctx->r19 = ADD32(ctx->r29, 0X88);
    // 0x150FA068: addiu       $s2, $sp, 0xA0
    ctx->r18 = ADD32(ctx->r29, 0XA0);
    // 0x150FA06C: addiu       $s1, $sp, 0xF8
    ctx->r17 = ADD32(ctx->r29, 0XF8);
L_150FA070:
    // 0x150FA070: addiu       $t9, $zero, 0x2A
    ctx->r25 = ADD32(0, 0X2A);
    // 0x150FA074: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150FA078: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x150FA07C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150FA080: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150FA084: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x150FA088: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x150FA08C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150FA090: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150FA094: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150FA098: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x150FA09C: jal         0x151407D0
    // 0x150FA0A0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    func_151407D0(rdram, ctx);
        goto after_5;
    // 0x150FA0A0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    after_5:
    // 0x150FA0A4: lbu         $t7, 0x94($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X94);
    // 0x150FA0A8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x150FA0AC: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x150FA0B0: addu        $t2, $s0, $t5
    ctx->r10 = ADD32(ctx->r16, ctx->r13);
    // 0x150FA0B4: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x150FA0B8: sw          $v0, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r2;
    // 0x150FA0BC: addu        $t3, $s0, $t6
    ctx->r11 = ADD32(ctx->r16, ctx->r14);
    // 0x150FA0C0: lw          $v1, 0x10($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X10);
    // 0x150FA0C4: beq         $v1, $zero, L_150FA0D4
    if (ctx->r3 == 0) {
        // 0x150FA0C8: addiu       $a0, $v1, 0x170
        ctx->r4 = ADD32(ctx->r3, 0X170);
            goto L_150FA0D4;
    }
    // 0x150FA0C8: addiu       $a0, $v1, 0x170
    ctx->r4 = ADD32(ctx->r3, 0X170);
    // 0x150FA0CC: jal         0x10022EC0
    // 0x150FA0D0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x150FA0D0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_6:
L_150FA0D4:
    // 0x150FA0D4: lbu         $v0, 0x94($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X94);
    // 0x150FA0D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150FA0DC: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x150FA0E0: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x150FA0E4: bne         $at, $zero, L_150FA070
    if (ctx->r1 != 0) {
        // 0x150FA0E8: sb          $t1, 0x94($sp)
        MEM_B(0X94, ctx->r29) = ctx->r9;
            goto L_150FA070;
    }
    // 0x150FA0E8: sb          $t1, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r9;
L_150FA0EC:
    // 0x150FA0EC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150FA0F0: addiu       $t4, $zero, 0x46
    ctx->r12 = ADD32(0, 0X46);
    // 0x150FA0F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150FA0F8: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x150FA0FC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150FA100: sb          $t0, 0x80($sp)
    MEM_B(0X80, ctx->r29) = ctx->r8;
    // 0x150FA104: sh          $t4, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r12;
    // 0x150FA108: sb          $t9, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r25;
    // 0x150FA10C: sb          $t8, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r24;
    // 0x150FA110: sb          $t5, 0x86($sp)
    MEM_B(0X86, ctx->r29) = ctx->r13;
    // 0x150FA114: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x150FA118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150FA11C: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    // 0x150FA120: jal         0x151D8868
    // 0x150FA124: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_151D8868(rdram, ctx);
        goto after_7;
    // 0x150FA124: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_7:
    // 0x150FA128: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150FA12C: addiu       $t2, $zero, 0x46
    ctx->r10 = ADD32(0, 0X46);
    // 0x150FA130: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x150FA134: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150FA138: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150FA13C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150FA140: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150FA144: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150FA148: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x150FA14C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x150FA150: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x150FA154: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x150FA158: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150FA15C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150FA160: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150FA164: addiu       $a2, $a2, 0x1CC0
    ctx->r6 = ADD32(ctx->r6, 0X1CC0);
    // 0x150FA168: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x150FA16C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150FA170: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x150FA174: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150FA178: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150FA17C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150FA180: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x150FA184: jal         0x15160A58
    // 0x150FA188: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    func_15160A58(rdram, ctx);
        goto after_8;
    // 0x150FA188: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    after_8:
    // 0x150FA18C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x150FA190: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x150FA194: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x150FA198: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x150FA19C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x150FA1A0: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x150FA1A4: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x150FA1A8: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x150FA1AC: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x150FA1B0: jr          $ra
    // 0x150FA1B4: addiu       $sp, $sp, 0x228
    ctx->r29 = ADD32(ctx->r29, 0X228);
    return;
    return;
    // 0x150FA1B4: addiu       $sp, $sp, 0x228
    ctx->r29 = ADD32(ctx->r29, 0X228);
;}
RECOMP_FUNC void __osCheckPackId2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F0A2C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151F0A30: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x151F0A34: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x151F0A38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151F0A3C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x151F0A40: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151F0A44: lbu         $t7, 0x65($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X65);
    // 0x151F0A48: beq         $t7, $zero, L_151F0A74
    if (ctx->r15 == 0) {
        // 0x151F0A4C: nop
    
            goto L_151F0A74;
    }
    // 0x151F0A4C: nop

    // 0x151F0A50: sb          $zero, 0x65($t6)
    MEM_B(0X65, ctx->r14) = 0;
    // 0x151F0A54: jal         0x100285FC
    // 0x151F0A58: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_0;
    // 0x151F0A58: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_0:
    // 0x151F0A5C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x151F0A60: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x151F0A64: beq         $t8, $zero, L_151F0A74
    if (ctx->r24 == 0) {
        // 0x151F0A68: nop
    
            goto L_151F0A74;
    }
    // 0x151F0A68: nop

    // 0x151F0A6C: b           L_151F0BB4
    // 0x151F0A70: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_151F0BB4;
    // 0x151F0A70: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_151F0A74:
    // 0x151F0A74: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151F0A78: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x151F0A7C: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x151F0A80: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151F0A84: addiu       $t2, $sp, 0x30
    ctx->r10 = ADD32(ctx->r29, 0X30);
    // 0x151F0A88: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
    // 0x151F0A8C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x151F0A90: addiu       $t4, $sp, 0x30
    ctx->r12 = ADD32(ctx->r29, 0X30);
    // 0x151F0A94: sh          $t3, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r11;
    // 0x151F0A98: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x151F0A9C: addiu       $t7, $sp, 0x30
    ctx->r15 = ADD32(ctx->r29, 0X30);
    // 0x151F0AA0: sh          $t5, 0x6($t7)
    MEM_H(0X6, ctx->r15) = ctx->r13;
    // 0x151F0AA4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151F0AA8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_151F0AAC:
    // 0x151F0AAC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x151F0AB0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x151F0AB4: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x151F0AB8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x151F0ABC: addu        $a2, $sp, $t0
    ctx->r6 = ADD32(ctx->r29, ctx->r8);
    // 0x151F0AC0: lhu         $a2, 0x30($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X30);
    // 0x151F0AC4: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x151F0AC8: jal         0x10025C20
    // 0x151F0ACC: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    __osContRamRead_recomp(rdram, ctx);
        goto after_1;
    // 0x151F0ACC: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    after_1:
    // 0x151F0AD0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x151F0AD4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x151F0AD8: beq         $t1, $zero, L_151F0AE8
    if (ctx->r9 == 0) {
        // 0x151F0ADC: nop
    
            goto L_151F0AE8;
    }
    // 0x151F0ADC: nop

    // 0x151F0AE0: b           L_151F0BB4
    // 0x151F0AE4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_151F0BB4;
    // 0x151F0AE4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_151F0AE8:
    // 0x151F0AE8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x151F0AEC: addiu       $a1, $sp, 0x2A
    ctx->r5 = ADD32(ctx->r29, 0X2A);
    // 0x151F0AF0: jal         0x1002796C
    // 0x151F0AF4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    __osIdCheckSum(rdram, ctx);
        goto after_2;
    // 0x151F0AF4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x151F0AF8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x151F0AFC: lhu         $t4, 0x2A($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X2A);
    // 0x151F0B00: lhu         $t3, 0x1C($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X1C);
    // 0x151F0B04: bne         $t3, $t4, L_151F0B1C
    if (ctx->r11 != ctx->r12) {
        // 0x151F0B08: nop
    
            goto L_151F0B1C;
    }
    // 0x151F0B08: nop

    // 0x151F0B0C: lhu         $t5, 0x1E($t2)
    ctx->r13 = MEM_HU(ctx->r10, 0X1E);
    // 0x151F0B10: lhu         $t7, 0x28($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X28);
    // 0x151F0B14: beq         $t5, $t7, L_151F0B30
    if (ctx->r13 == ctx->r15) {
        // 0x151F0B18: nop
    
            goto L_151F0B30;
    }
    // 0x151F0B18: nop

L_151F0B1C:
    // 0x151F0B1C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x151F0B20: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x151F0B24: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x151F0B28: bne         $at, $zero, L_151F0AAC
    if (ctx->r1 != 0) {
        // 0x151F0B2C: sw          $t8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r24;
            goto L_151F0AAC;
    }
    // 0x151F0B2C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_151F0B30:
    // 0x151F0B30: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x151F0B34: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151F0B38: bne         $t9, $at, L_151F0B48
    if (ctx->r25 != ctx->r1) {
        // 0x151F0B3C: nop
    
            goto L_151F0B48;
    }
    // 0x151F0B3C: nop

    // 0x151F0B40: b           L_151F0BB4
    // 0x151F0B44: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_151F0BB4;
    // 0x151F0B44: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_151F0B48:
    // 0x151F0B48: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_151F0B4C:
    // 0x151F0B4C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x151F0B50: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x151F0B54: beq         $t0, $t1, L_151F0B9C
    if (ctx->r8 == ctx->r9) {
        // 0x151F0B58: nop
    
            goto L_151F0B9C;
    }
    // 0x151F0B58: nop

    // 0x151F0B5C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x151F0B60: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x151F0B64: addu        $a2, $sp, $t4
    ctx->r6 = ADD32(ctx->r29, ctx->r12);
    // 0x151F0B68: lhu         $a2, 0x30($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X30);
    // 0x151F0B6C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151F0B70: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    // 0x151F0B74: lw          $a1, 0x8($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X8);
    // 0x151F0B78: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x151F0B7C: jal         0x10025870
    // 0x151F0B80: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    __osContRamWrite_recomp(rdram, ctx);
        goto after_3;
    // 0x151F0B80: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    after_3:
    // 0x151F0B84: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x151F0B88: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x151F0B8C: beq         $t5, $zero, L_151F0B9C
    if (ctx->r13 == 0) {
        // 0x151F0B90: nop
    
            goto L_151F0B9C;
    }
    // 0x151F0B90: nop

    // 0x151F0B94: b           L_151F0BB4
    // 0x151F0B98: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_151F0BB4;
    // 0x151F0B98: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_151F0B9C:
    // 0x151F0B9C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x151F0BA0: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x151F0BA4: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x151F0BA8: bne         $at, $zero, L_151F0B4C
    if (ctx->r1 != 0) {
        // 0x151F0BAC: sw          $t6, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r14;
            goto L_151F0B4C;
    }
    // 0x151F0BAC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x151F0BB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151F0BB4:
    // 0x151F0BB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151F0BB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151F0BBC: jr          $ra
    // 0x151F0BC0: nop

    return;
    return;
    // 0x151F0BC0: nop

;}
RECOMP_FUNC void func_1506DD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DD00: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506DD04: lw          $v0, 0x1580($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1580);
    // 0x1506DD08: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506DD0C: bne         $v0, $zero, L_1506DD2C
    if (ctx->r2 != 0) {
        // 0x1506DD10: nop
    
            goto L_1506DD2C;
    }
    // 0x1506DD10: nop

    // 0x1506DD14: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506DD18: lw          $v1, 0x154C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154C);
    // 0x1506DD1C: lw          $t6, 0x144($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X144);
    // 0x1506DD20: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x1506DD24: jr          $ra
    // 0x1506DD28: sw          $t7, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = ctx->r15;
    return;
    return;
    // 0x1506DD28: sw          $t7, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = ctx->r15;
L_1506DD2C:
    // 0x1506DD2C: lw          $v1, 0x154C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154C);
    // 0x1506DD30: lw          $t8, 0xF8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XF8);
    // 0x1506DD34: or          $t9, $t8, $v0
    ctx->r25 = ctx->r24 | ctx->r2;
    // 0x1506DD38: sw          $t9, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = ctx->r25;
    // 0x1506DD3C: jr          $ra
    // 0x1506DD40: nop

    return;
    return;
    // 0x1506DD40: nop

;}
RECOMP_FUNC void func_150CA9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CA9D0: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x150CA9D4: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x150CA9D8: beql        $at, $zero, L_150CA9FC
    if (ctx->r1 == 0) {
        // 0x150CA9DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150CA9FC;
    }
    goto skip_0;
    // 0x150CA9DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x150CA9E0: lbu         $t6, 0x28($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X28);
    // 0x150CA9E4: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x150CA9E8: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x150CA9EC: beql        $at, $zero, L_150CA9FC
    if (ctx->r1 == 0) {
        // 0x150CA9F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150CA9FC;
    }
    goto skip_1;
    // 0x150CA9F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x150CA9F4: sb          $v1, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r3;
    // 0x150CA9F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150CA9FC:
    // 0x150CA9FC: jr          $ra
    // 0x150CAA00: nop

    return;
    return;
    // 0x150CAA00: nop

;}
RECOMP_FUNC void func_1508DA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508DA1C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1508DA20: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1508DA24: addiu       $t5, $t5, 0x23B0
    ctx->r13 = ADD32(ctx->r13, 0X23B0);
    // 0x1508DA28: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x1508DA2C: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x1508DA30: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x1508DA34: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x1508DA38: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x1508DA3C: addiu       $v0, $v1, 0xEB0
    ctx->r2 = ADD32(ctx->r3, 0XEB0);
    // 0x1508DA40: addiu       $a0, $v1, 0xF70
    ctx->r4 = ADD32(ctx->r3, 0XF70);
    // 0x1508DA44: addiu       $a1, $v1, 0xFF0
    ctx->r5 = ADD32(ctx->r3, 0XFF0);
    // 0x1508DA48: addiu       $a2, $v1, 0x1070
    ctx->r6 = ADD32(ctx->r3, 0X1070);
    // 0x1508DA4C: addiu       $a3, $v1, 0x10F0
    ctx->r7 = ADD32(ctx->r3, 0X10F0);
    // 0x1508DA50: blez        $t6, L_1508DA80
    if (SIGNED(ctx->r14) <= 0) {
        // 0x1508DA54: addiu       $t0, $v1, 0x12F4
        ctx->r8 = ADD32(ctx->r3, 0X12F4);
            goto L_1508DA80;
    }
    // 0x1508DA54: addiu       $t0, $v1, 0x12F4
    ctx->r8 = ADD32(ctx->r3, 0X12F4);
    // 0x1508DA58: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x1508DA5C: sw          $s0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r16;
L_1508DA60:
    // 0x1508DA60: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x1508DA64: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x1508DA68: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x1508DA6C: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x1508DA70: slt         $at, $t1, $t7
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1508DA74: bnel        $at, $zero, L_1508DA60
    if (ctx->r1 != 0) {
        // 0x1508DA78: sw          $s0, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r16;
            goto L_1508DA60;
    }
    goto skip_0;
    // 0x1508DA78: sw          $s0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r16;
    skip_0:
    // 0x1508DA7C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_1508DA80:
    // 0x1508DA80: lw          $t8, 0xEA4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XEA4);
    // 0x1508DA84: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x1508DA88: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x1508DA8C: blez        $t8, L_1508DAE0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x1508DA90: or          $t2, $a3, $zero
        ctx->r10 = ctx->r7 | 0;
            goto L_1508DAE0;
    }
    // 0x1508DA90: or          $t2, $a3, $zero
    ctx->r10 = ctx->r7 | 0;
    // 0x1508DA94: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1508DA98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1508DA9C: or          $t3, $a2, $zero
    ctx->r11 = ctx->r6 | 0;
    // 0x1508DAA0: or          $t4, $t0, $zero
    ctx->r12 = ctx->r8 | 0;
L_1508DAA4:
    // 0x1508DAA4: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x1508DAA8: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x1508DAAC: sw          $s0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r16;
    // 0x1508DAB0: sw          $a0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r4;
    // 0x1508DAB4: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    // 0x1508DAB8: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x1508DABC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x1508DAC0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1508DAC4: lw          $t6, 0xEA4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0XEA4);
    // 0x1508DAC8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1508DACC: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x1508DAD0: slt         $at, $t1, $t6
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1508DAD4: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x1508DAD8: bne         $at, $zero, L_1508DAA4
    if (ctx->r1 != 0) {
        // 0x1508DADC: addiu       $t4, $t4, 0x4
        ctx->r12 = ADD32(ctx->r12, 0X4);
            goto L_1508DAA4;
    }
    // 0x1508DADC: addiu       $t4, $t4, 0x4
    ctx->r12 = ADD32(ctx->r12, 0X4);
L_1508DAE0:
    // 0x1508DAE0: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x1508DAE4: jr          $ra
    // 0x1508DAE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x1508DAE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_1501DE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501DE18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1501DE1C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1501DE20: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x1501DE24: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1501DE28: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1501DE2C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1501DE30: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1501DE34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1501DE38: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x1501DE3C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501DE40: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x1501DE44: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501DE48: lw          $t7, -0x15F8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X15F8);
    // 0x1501DE4C: lw          $t6, 0x3640($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3640);
    // 0x1501DE50: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501DE54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1501DE58: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1501DE5C: sw          $t8, 0x35B0($at)
    MEM_W(0X35B0, ctx->r1) = ctx->r24;
    // 0x1501DE60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1501DE64: jal         0x150242F8
    // 0x1501DE68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150242F8(rdram, ctx);
        goto after_0;
    // 0x1501DE68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x1501DE6C: jal         0x1501EC38
    // 0x1501DE70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1501EC38(rdram, ctx);
        goto after_1;
    // 0x1501DE70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x1501DE74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1501DE78: jal         0x150242F8
    // 0x1501DE7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150242F8(rdram, ctx);
        goto after_2;
    // 0x1501DE7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x1501DE80: jal         0x15020EC4
    // 0x1501DE84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15020EC4(rdram, ctx);
        goto after_3;
    // 0x1501DE84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x1501DE88: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x1501DE8C: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x1501DE90: addiu       $s3, $s3, 0x3E78
    ctx->r19 = ADD32(ctx->r19, 0X3E78);
    // 0x1501DE94: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x1501DE98: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1501DE9C: addiu       $s2, $zero, 0x19
    ctx->r18 = ADD32(0, 0X19);
L_1501DEA0:
    // 0x1501DEA0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x1501DEA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1501DEA8: beql        $t9, $zero, L_1501DED0
    if (ctx->r25 == 0) {
        // 0x1501DEAC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1501DED0;
    }
    goto skip_0;
    // 0x1501DEAC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x1501DEB0: jal         0x150229E4
    // 0x1501DEB4: sb          $s1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r17;
    func_150229E4(rdram, ctx);
        goto after_4;
    // 0x1501DEB4: sb          $s1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r17;
    after_4:
    // 0x1501DEB8: beq         $v0, $zero, L_1501DECC
    if (ctx->r2 == 0) {
        // 0x1501DEBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1501DECC;
    }
    // 0x1501DEBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1501DEC0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x1501DEC4: jal         0x1502178C
    // 0x1501DEC8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_1502178C(rdram, ctx);
        goto after_5;
    // 0x1501DEC8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_5:
L_1501DECC:
    // 0x1501DECC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1501DED0:
    // 0x1501DED0: bne         $s1, $s2, L_1501DEA0
    if (ctx->r17 != ctx->r18) {
        // 0x1501DED4: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_1501DEA0;
    }
    // 0x1501DED4: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    // 0x1501DED8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1501DEDC: jal         0x1501E81C
    // 0x1501DEE0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_1501E81C(rdram, ctx);
        goto after_6;
    // 0x1501DEE0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_6:
    // 0x1501DEE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1501DEE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1501DEEC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1501DEF0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1501DEF4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1501DEF8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1501DEFC: jr          $ra
    // 0x1501DF00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1501DF00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15195528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15195528: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1519552C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15195530: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15195534: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15195538: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x1519553C: beq         $a0, $zero, L_15195554
    if (ctx->r4 == 0) {
        // 0x15195540: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_15195554;
    }
    // 0x15195540: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x15195544: lwc1        $f4, 0x40($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X40);
    // 0x15195548: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1519554C: b           L_15195588
    // 0x15195550: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
        goto L_15195588;
    // 0x15195550: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
L_15195554:
    // 0x15195554: beq         $s0, $zero, L_1519556C
    if (ctx->r16 == 0) {
        // 0x15195558: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_1519556C;
    }
    // 0x15195558: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x1519555C: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15195560: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15195564: b           L_15195588
    // 0x15195568: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
        goto L_15195588;
    // 0x15195568: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
L_1519556C:
    // 0x1519556C: jal         0x150ADA68
    // 0x15195570: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x15195570: nop

    after_0:
    // 0x15195574: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15195578: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1519557C: nop

    // 0x15195580: mul.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15195584: nop

L_15195588:
    // 0x15195588: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519558C: lwc1        $f18, -0x78F8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X78F8);
    // 0x15195590: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15195594: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15195598: mul.s       $f12, $f2, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x1519559C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x151955A0: jal         0x1514373C
    // 0x151955A4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_1514373C(rdram, ctx);
        goto after_1;
    // 0x151955A4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x151955A8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x151955AC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151955B0: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151955B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151955B8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x151955BC: mul.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151955C0: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x151955C4: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151955C8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151955CC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x151955D0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151955D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151955D8: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x151955DC: mul.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x151955E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151955E4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x151955E8: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x151955EC: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151955F0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x151955F4: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x151955F8: add.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x151955FC: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x15195600: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15195604: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x15195608: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x1519560C: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15195610: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x15195614: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x15195618: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1519561C: add.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x15195620: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x15195624: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15195628: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1519562C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15195630: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x15195634: jal         0x15137610
    // 0x15195638: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    func_15137610(rdram, ctx);
        goto after_2;
    // 0x15195638: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x1519563C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15195640: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15195644: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15195648: jr          $ra
    // 0x1519564C: nop

    return;
    return;
    // 0x1519564C: nop

;}
RECOMP_FUNC void func_15114D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15114D24: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15114D28: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x15114D2C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15114D30: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15114D34: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x15114D38: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x15114D3C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x15114D40: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x15114D44: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x15114D48: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x15114D4C: beql        $t7, $zero, L_15114D78
    if (ctx->r15 == 0) {
        // 0x15114D50: lw          $t9, 0x4C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X4C);
            goto L_15114D78;
    }
    goto skip_0;
    // 0x15114D50: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x15114D54: lhu         $a0, 0x74($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X74);
    // 0x15114D58: beql        $a0, $zero, L_15114D78
    if (ctx->r4 == 0) {
        // 0x15114D5C: lw          $t9, 0x4C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X4C);
            goto L_15114D78;
    }
    goto skip_1;
    // 0x15114D5C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    skip_1:
    // 0x15114D60: jal         0x1001147C
    // 0x15114D64: nop

    func_1001147C(rdram, ctx);
        goto after_0;
    // 0x15114D64: nop

    after_0:
    // 0x15114D68: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x15114D6C: beql        $v0, $t8, L_15114EF4
    if (ctx->r2 == ctx->r24) {
        // 0x15114D70: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15114EF4;
    }
    goto skip_2;
    // 0x15114D70: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_2:
    // 0x15114D74: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_15114D78:
    // 0x15114D78: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x15114D7C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15114D80: bne         $t9, $at, L_15114DA4
    if (ctx->r25 != ctx->r1) {
        // 0x15114D84: andi        $t0, $v1, 0x8
        ctx->r8 = ctx->r3 & 0X8;
            goto L_15114DA4;
    }
    // 0x15114D84: andi        $t0, $v1, 0x8
    ctx->r8 = ctx->r3 & 0X8;
    // 0x15114D88: lhu         $a0, 0x74($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X74);
    // 0x15114D8C: beql        $a0, $zero, L_15114EF4
    if (ctx->r4 == 0) {
        // 0x15114D90: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15114EF4;
    }
    goto skip_3;
    // 0x15114D90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_3:
    // 0x15114D94: jal         0x100111C8
    // 0x15114D98: nop

    func_100111C8(rdram, ctx);
        goto after_1;
    // 0x15114D98: nop

    after_1:
    // 0x15114D9C: b           L_15114EF0
    // 0x15114DA0: sh          $zero, 0x74($s1)
    MEM_H(0X74, ctx->r17) = 0;
        goto L_15114EF0;
    // 0x15114DA0: sh          $zero, 0x74($s1)
    MEM_H(0X74, ctx->r17) = 0;
L_15114DA4:
    // 0x15114DA4: beq         $t0, $zero, L_15114DB4
    if (ctx->r8 == 0) {
        // 0x15114DA8: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_15114DB4;
    }
    // 0x15114DA8: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x15114DAC: b           L_15114DB8
    // 0x15114DB0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_15114DB8;
    // 0x15114DB0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_15114DB4:
    // 0x15114DB4: lhu         $s0, 0x74($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X74);
L_15114DB8:
    // 0x15114DB8: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x15114DBC: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x15114DC0: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x15114DC4: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x15114DC8: beq         $t2, $zero, L_15114E2C
    if (ctx->r10 == 0) {
        // 0x15114DCC: andi        $t0, $t9, 0x2
        ctx->r8 = ctx->r25 & 0X2;
            goto L_15114E2C;
    }
    // 0x15114DCC: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x15114DD0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x15114DD4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15114DD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15114DDC: lh          $t4, 0x10($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X10);
    // 0x15114DE0: lh          $t7, 0x56($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X56);
    // 0x15114DE4: lh          $t8, 0x5A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X5A);
    // 0x15114DE8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x15114DEC: lh          $t5, 0x12($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X12);
    // 0x15114DF0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x15114DF4: lhu         $a2, 0x52($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X52);
    // 0x15114DF8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x15114DFC: lh          $t6, 0x14($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X14);
    // 0x15114E00: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x15114E04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15114E08: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x15114E0C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x15114E10: jal         0x10010E78
    // 0x15114E14: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_10010E78(rdram, ctx);
        goto after_2;
    // 0x15114E14: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_2:
    // 0x15114E18: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x15114E1C: bnel        $v1, $zero, L_15114EF4
    if (ctx->r3 != 0) {
        // 0x15114E20: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15114EF4;
    }
    goto skip_4;
    // 0x15114E20: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_4:
    // 0x15114E24: b           L_15114EF0
    // 0x15114E28: sh          $zero, 0x74($s1)
    MEM_H(0X74, ctx->r17) = 0;
        goto L_15114EF0;
    // 0x15114E28: sh          $zero, 0x74($s1)
    MEM_H(0X74, ctx->r17) = 0;
L_15114E2C:
    // 0x15114E2C: beq         $t0, $zero, L_15114E94
    if (ctx->r8 == 0) {
        // 0x15114E30: nop
    
            goto L_15114E94;
    }
    // 0x15114E30: nop

    // 0x15114E34: beq         $s0, $zero, L_15114E44
    if (ctx->r16 == 0) {
        // 0x15114E38: andi        $a0, $s0, 0xFFFF
        ctx->r4 = ctx->r16 & 0XFFFF;
            goto L_15114E44;
    }
    // 0x15114E38: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x15114E3C: jal         0x1001123C
    // 0x15114E40: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_1001123C(rdram, ctx);
        goto after_3;
    // 0x15114E40: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_3:
L_15114E44:
    // 0x15114E44: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x15114E48: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15114E4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15114E50: lh          $t2, 0x10($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X10);
    // 0x15114E54: lh          $t5, 0x56($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X56);
    // 0x15114E58: lh          $t6, 0x5A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X5A);
    // 0x15114E5C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x15114E60: lh          $t3, 0x12($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X12);
    // 0x15114E64: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x15114E68: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x15114E6C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x15114E70: lh          $t4, 0x14($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X14);
    // 0x15114E74: lhu         $a2, 0x52($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X52);
    // 0x15114E78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15114E7C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x15114E80: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x15114E84: jal         0x10010E78
    // 0x15114E88: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    func_10010E78(rdram, ctx);
        goto after_4;
    // 0x15114E88: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_4:
    // 0x15114E8C: b           L_15114EF0
    // 0x15114E90: sh          $v0, 0x74($s1)
    MEM_H(0X74, ctx->r17) = ctx->r2;
        goto L_15114EF0;
    // 0x15114E90: sh          $v0, 0x74($s1)
    MEM_H(0X74, ctx->r17) = ctx->r2;
L_15114E94:
    // 0x15114E94: beql        $s0, $zero, L_15114EA8
    if (ctx->r16 == 0) {
        // 0x15114E98: lh          $a1, 0x10($s1)
        ctx->r5 = MEM_H(ctx->r17, 0X10);
            goto L_15114EA8;
    }
    goto skip_5;
    // 0x15114E98: lh          $a1, 0x10($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X10);
    skip_5:
    // 0x15114E9C: jal         0x1001123C
    // 0x15114EA0: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_1001123C(rdram, ctx);
        goto after_5;
    // 0x15114EA0: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_5:
    // 0x15114EA4: lh          $a1, 0x10($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X10);
L_15114EA8:
    // 0x15114EA8: lh          $a2, 0x12($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X12);
    // 0x15114EAC: lh          $a3, 0x14($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X14);
    // 0x15114EB0: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x15114EB4: lh          $t8, 0x5A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X5A);
    // 0x15114EB8: lh          $t9, 0x56($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X56);
    // 0x15114EBC: lui         $t0, 0x1511
    ctx->r8 = S32(0X1511 << 16);
    // 0x15114EC0: addiu       $t0, $t0, 0x4CC4
    ctx->r8 = ADD32(ctx->r8, 0X4CC4);
    // 0x15114EC4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x15114EC8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15114ECC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15114ED0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15114ED4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x15114ED8: lhu         $a0, 0x4E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4E);
    // 0x15114EDC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15114EE0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15114EE4: jal         0x1000FA64
    // 0x15114EE8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_1000FA64(rdram, ctx);
        goto after_6;
    // 0x15114EE8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_6:
    // 0x15114EEC: sh          $v0, 0x74($s1)
    MEM_H(0X74, ctx->r17) = ctx->r2;
L_15114EF0:
    // 0x15114EF0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_15114EF4:
    // 0x15114EF4: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x15114EF8: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x15114EFC: jr          $ra
    // 0x15114F00: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x15114F00: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_15018500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15018500: or          $s4, $ra, $zero
    ctx->r20 = ctx->r31 | 0;
    // 0x15018504: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x15018508: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501850C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x15018510: jal         0x10003C40
    // 0x15018514: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15018514: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x15018518: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501851C: sw          $v0, -0x1A28($at)
    MEM_W(-0X1A28, ctx->r1) = ctx->r2;
    // 0x15018520: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x15018524: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x15018528: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x1501852C: addiu       $t6, $v0, 0x6
    ctx->r14 = ADD32(ctx->r2, 0X6);
    // 0x15018530: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x15018534: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15018538: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x1501853C: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x15018540: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x15018544: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
L_15018548:
    // 0x15018548: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x1501854C: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x15018550: beq         $t0, $zero, L_150186B0
    if (ctx->r8 == 0) {
        // 0x15018554: addiu       $t0, $t0, -0x1
        ctx->r8 = ADD32(ctx->r8, -0X1);
            goto L_150186B0;
    }
    // 0x15018554: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x15018558: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
L_1501855C:
    // 0x1501855C: sllv        $t2, $t3, $t0
    ctx->r10 = S32(ctx->r11 << (ctx->r8 & 31));
    // 0x15018560: and         $t2, $t1, $t2
    ctx->r10 = ctx->r9 & ctx->r10;
    // 0x15018564: lh          $t9, 0x0($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X0);
    // 0x15018568: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1501856C: bne         $t9, $at, L_150185B8
    if (ctx->r25 != ctx->r1) {
        // 0x15018570: nop
    
            goto L_150185B8;
    }
    // 0x15018570: nop

    // 0x15018574: or          $t5, $t4, $zero
    ctx->r13 = ctx->r12 | 0;
    // 0x15018578: bnel        $t2, $zero, L_15018584
    if (ctx->r10 != 0) {
        // 0x1501857C: lh          $t4, 0x4($t4)
        ctx->r12 = MEM_H(ctx->r12, 0X4);
            goto L_15018584;
    }
    goto skip_0;
    // 0x1501857C: lh          $t4, 0x4($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4);
    skip_0:
    // 0x15018580: lh          $t4, 0x2($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X2);
L_15018584:
    // 0x15018584: bne         $t4, $zero, L_150186A8
    if (ctx->r12 != 0) {
        // 0x15018588: addu        $t4, $t4, $v0
        ctx->r12 = ADD32(ctx->r12, ctx->r2);
            goto L_150186A8;
    }
    // 0x15018588: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x1501858C: or          $t4, $t6, $zero
    ctx->r12 = ctx->r14 | 0;
    // 0x15018590: addiu       $t6, $t6, 0x6
    ctx->r14 = ADD32(ctx->r14, 0X6);
    // 0x15018594: sh          $t8, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r24;
    // 0x15018598: sh          $zero, 0x2($t4)
    MEM_H(0X2, ctx->r12) = 0;
    // 0x1501859C: sh          $zero, 0x4($t4)
    MEM_H(0X4, ctx->r12) = 0;
    // 0x150185A0: subu        $t9, $t4, $v0
    ctx->r25 = SUB32(ctx->r12, ctx->r2);
    // 0x150185A4: bnel        $t2, $zero, L_150185B0
    if (ctx->r10 != 0) {
        // 0x150185A8: sh          $t9, 0x4($t5)
        MEM_H(0X4, ctx->r13) = ctx->r25;
            goto L_150185B0;
    }
    goto skip_1;
    // 0x150185A8: sh          $t9, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r25;
    skip_1:
    // 0x150185AC: sh          $t9, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r25;
L_150185B0:
    // 0x150185B0: j           L_150186B0
    // 0x150185B4: nop

        goto L_150186B0;
    // 0x150185B4: nop

L_150185B8:
    // 0x150185B8: lhu         $t9, 0x0($t4)
    ctx->r25 = MEM_HU(ctx->r12, 0X0);
    // 0x150185BC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x150185C0: addu        $t9, $t9, $s0
    ctx->r25 = ADD32(ctx->r25, ctx->r16);
    // 0x150185C4: lw          $s3, 0x4($t9)
    ctx->r19 = MEM_W(ctx->r25, 0X4);
    // 0x150185C8: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x150185CC: lw          $s1, 0x4($a3)
    ctx->r17 = MEM_W(ctx->r7, 0X4);
    // 0x150185D0: subu        $s1, $s1, $t0
    ctx->r17 = SUB32(ctx->r17, ctx->r8);
L_150185D4:
    // 0x150185D4: srlv        $s2, $t1, $t0
    ctx->r18 = S32(U32(ctx->r9) >> (ctx->r8 & 31));
    // 0x150185D8: andi        $s2, $s2, 0x1
    ctx->r18 = ctx->r18 & 0X1;
    // 0x150185DC: subu        $t2, $s3, $s1
    ctx->r10 = SUB32(ctx->r19, ctx->r17);
    // 0x150185E0: srlv        $t2, $t9, $t2
    ctx->r10 = S32(U32(ctx->r25) >> (ctx->r10 & 31));
    // 0x150185E4: andi        $t2, $t2, 0x1
    ctx->r10 = ctx->r10 & 0X1;
    // 0x150185E8: bne         $s2, $t2, L_15018644
    if (ctx->r18 != ctx->r10) {
        // 0x150185EC: nop
    
            goto L_15018644;
    }
    // 0x150185EC: nop

    // 0x150185F0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x150185F4: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x150185F8: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x150185FC: addiu       $t6, $t6, 0x6
    ctx->r14 = ADD32(ctx->r14, 0X6);
    // 0x15018600: lh          $v1, 0x0($t4)
    ctx->r3 = MEM_H(ctx->r12, 0X0);
    // 0x15018604: sh          $v1, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r3;
    // 0x15018608: lh          $v1, 0x2($t4)
    ctx->r3 = MEM_H(ctx->r12, 0X2);
    // 0x1501860C: sh          $v1, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r3;
    // 0x15018610: lh          $v1, 0x4($t4)
    ctx->r3 = MEM_H(ctx->r12, 0X4);
    // 0x15018614: sh          $v1, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r3;
    // 0x15018618: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x1501861C: sh          $v1, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r3;
    // 0x15018620: beq         $t2, $zero, L_15018634
    if (ctx->r10 == 0) {
        // 0x15018624: subu        $v1, $s2, $v0
        ctx->r3 = SUB32(ctx->r18, ctx->r2);
            goto L_15018634;
    }
    // 0x15018624: subu        $v1, $s2, $v0
    ctx->r3 = SUB32(ctx->r18, ctx->r2);
    // 0x15018628: sh          $zero, 0x2($t4)
    MEM_H(0X2, ctx->r12) = 0;
    // 0x1501862C: j           L_1501863C
    // 0x15018630: sh          $v1, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r3;
        goto L_1501863C;
    // 0x15018630: sh          $v1, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r3;
L_15018634:
    // 0x15018634: sh          $v1, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r3;
    // 0x15018638: sh          $zero, 0x4($t4)
    MEM_H(0X4, ctx->r12) = 0;
L_1501863C:
    // 0x1501863C: j           L_150185D4
    // 0x15018640: or          $t4, $s2, $zero
    ctx->r12 = ctx->r18 | 0;
        goto L_150185D4;
    // 0x15018640: or          $t4, $s2, $zero
    ctx->r12 = ctx->r18 | 0;
L_15018644:
    // 0x15018644: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x15018648: addiu       $t6, $t6, 0x6
    ctx->r14 = ADD32(ctx->r14, 0X6);
    // 0x1501864C: lh          $s3, 0x0($t4)
    ctx->r19 = MEM_H(ctx->r12, 0X0);
    // 0x15018650: sh          $s3, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r19;
    // 0x15018654: lh          $s3, 0x2($t4)
    ctx->r19 = MEM_H(ctx->r12, 0X2);
    // 0x15018658: sh          $s3, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r19;
    // 0x1501865C: lh          $s3, 0x4($t4)
    ctx->r19 = MEM_H(ctx->r12, 0X4);
    // 0x15018660: sh          $s3, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r19;
    // 0x15018664: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x15018668: addiu       $t6, $t6, 0x6
    ctx->r14 = ADD32(ctx->r14, 0X6);
    // 0x1501866C: sh          $t8, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r24;
    // 0x15018670: sh          $zero, 0x2($s3)
    MEM_H(0X2, ctx->r19) = 0;
    // 0x15018674: sh          $zero, 0x4($s3)
    MEM_H(0X4, ctx->r19) = 0;
    // 0x15018678: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x1501867C: sh          $s1, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r17;
    // 0x15018680: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x15018684: beq         $t2, $zero, L_15018698
    if (ctx->r10 == 0) {
        // 0x15018688: subu        $s3, $s3, $v0
        ctx->r19 = SUB32(ctx->r19, ctx->r2);
            goto L_15018698;
    }
    // 0x15018688: subu        $s3, $s3, $v0
    ctx->r19 = SUB32(ctx->r19, ctx->r2);
    // 0x1501868C: sh          $s3, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r19;
    // 0x15018690: j           L_150186A0
    // 0x15018694: sh          $t9, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r25;
        goto L_150186A0;
    // 0x15018694: sh          $t9, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r25;
L_15018698:
    // 0x15018698: sh          $t9, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r25;
    // 0x1501869C: sh          $s3, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r19;
L_150186A0:
    // 0x150186A0: j           L_150186B0
    // 0x150186A4: nop

        goto L_150186B0;
    // 0x150186A4: nop

L_150186A8:
    // 0x150186A8: bne         $t0, $zero, L_1501855C
    if (ctx->r8 != 0) {
        // 0x150186AC: addiu       $t0, $t0, -0x1
        ctx->r8 = ADD32(ctx->r8, -0X1);
            goto L_1501855C;
    }
    // 0x150186AC: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
L_150186B0:
    // 0x150186B0: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x150186B4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150186B8: bne         $t8, $at, L_15018548
    if (ctx->r24 != ctx->r1) {
        // 0x150186BC: addiu       $t8, $t8, 0x1
        ctx->r24 = ADD32(ctx->r24, 0X1);
            goto L_15018548;
    }
    // 0x150186BC: addiu       $t8, $t8, 0x1
    ctx->r24 = ADD32(ctx->r24, 0X1);
    // 0x150186C0: jr          $s4
    // 0x150186C4: nop

    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
    return;
    // 0x150186C4: nop

;}
RECOMP_FUNC void func_151347CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151347CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151347D0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151347D4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151347D8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151347DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151347E0: beq         $a2, $zero, L_151347F4
    if (ctx->r6 == 0) {
        // 0x151347E4: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_151347F4;
    }
    // 0x151347E4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151347E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151347EC: bnel        $a2, $at, L_15134828
    if (ctx->r6 != ctx->r1) {
        // 0x151347F0: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_15134828;
    }
    goto skip_0;
    // 0x151347F0: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    skip_0:
L_151347F4:
    // 0x151347F4: lw          $t7, 0x1C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1C);
    // 0x151347F8: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x151347FC: beq         $t7, $t8, L_15134814
    if (ctx->r15 == ctx->r24) {
        // 0x15134800: nop
    
            goto L_15134814;
    }
    // 0x15134800: nop

    // 0x15134804: lbu         $t9, 0x18($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X18);
    // 0x15134808: lbu         $t0, 0x4($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X4);
    // 0x1513480C: bnel        $t9, $t0, L_151348E4
    if (ctx->r25 != ctx->r8) {
        // 0x15134810: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151348E4;
    }
    goto skip_1;
    // 0x15134810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_15134814:
    // 0x15134814: jal         0x1516972C
    // 0x15134818: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15134818: nop

    after_0:
    // 0x1513481C: b           L_151348E4
    // 0x15134820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151348E4;
    // 0x15134820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15134824: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
L_15134828:
    // 0x15134828: bnel        $v0, $at, L_15134874
    if (ctx->r2 != ctx->r1) {
        // 0x1513482C: addiu       $at, $zero, 0x16
        ctx->r1 = ADD32(0, 0X16);
            goto L_15134874;
    }
    goto skip_2;
    // 0x1513482C: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    skip_2:
    // 0x15134830: lbu         $t1, 0x3D($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3D);
    // 0x15134834: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15134838: bnel        $t1, $at, L_151348E4
    if (ctx->r9 != ctx->r1) {
        // 0x1513483C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151348E4;
    }
    goto skip_3;
    // 0x1513483C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x15134840: lw          $t2, 0x1C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X1C);
    // 0x15134844: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x15134848: beq         $t2, $t3, L_15134860
    if (ctx->r10 == ctx->r11) {
        // 0x1513484C: nop
    
            goto L_15134860;
    }
    // 0x1513484C: nop

    // 0x15134850: lbu         $t4, 0x18($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X18);
    // 0x15134854: lbu         $t5, 0x4($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X4);
    // 0x15134858: bnel        $t4, $t5, L_151348E4
    if (ctx->r12 != ctx->r13) {
        // 0x1513485C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151348E4;
    }
    goto skip_4;
    // 0x1513485C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
L_15134860:
    // 0x15134860: jal         0x1516972C
    // 0x15134864: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x15134864: nop

    after_1:
    // 0x15134868: b           L_151348E4
    // 0x1513486C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151348E4;
    // 0x1513486C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15134870: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
L_15134874:
    // 0x15134874: bnel        $v0, $at, L_1513489C
    if (ctx->r2 != ctx->r1) {
        // 0x15134878: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_1513489C;
    }
    goto skip_5;
    // 0x15134878: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    skip_5:
    // 0x1513487C: lw          $t6, 0x1C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C);
    // 0x15134880: bnel        $a1, $t6, L_151348E4
    if (ctx->r5 != ctx->r14) {
        // 0x15134884: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151348E4;
    }
    goto skip_6;
    // 0x15134884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x15134888: jal         0x1516972C
    // 0x1513488C: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x1513488C: nop

    after_2:
    // 0x15134890: b           L_151348E4
    // 0x15134894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151348E4;
    // 0x15134894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15134898: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
L_1513489C:
    // 0x1513489C: bnel        $v0, $at, L_151348E4
    if (ctx->r2 != ctx->r1) {
        // 0x151348A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151348E4;
    }
    goto skip_7;
    // 0x151348A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_7:
    // 0x151348A4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x151348A8: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x151348AC: bnel        $v0, $v1, L_151348CC
    if (ctx->r2 != ctx->r3) {
        // 0x151348B0: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_151348CC;
    }
    goto skip_8;
    // 0x151348B0: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_8:
    // 0x151348B4: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x151348B8: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x151348BC: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x151348C0: b           L_151348E0
    // 0x151348C4: sb          $t8, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r24;
        goto L_151348E0;
    // 0x151348C4: sb          $t8, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r24;
    // 0x151348C8: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_151348CC:
    // 0x151348CC: bnel        $t9, $v1, L_151348E4
    if (ctx->r25 != ctx->r3) {
        // 0x151348D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151348E4;
    }
    goto skip_9;
    // 0x151348D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_9:
    // 0x151348D4: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x151348D8: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x151348DC: sb          $t0, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r8;
L_151348E0:
    // 0x151348E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151348E4:
    // 0x151348E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151348E8: jr          $ra
    // 0x151348EC: nop

    return;
    return;
    // 0x151348EC: nop

;}
RECOMP_FUNC void func_15167D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15167D84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15167D88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15167D8C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15167D90: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15167D94: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15167D98: bne         $a1, $zero, L_15167DA8
    if (ctx->r5 != 0) {
        // 0x15167D9C: lw          $a2, 0x30($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X30);
            goto L_15167DA8;
    }
    // 0x15167D9C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x15167DA0: b           L_15167DAC
    // 0x15167DA4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_15167DAC;
    // 0x15167DA4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_15167DA8:
    // 0x15167DA8: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
L_15167DAC:
    // 0x15167DAC: lbu         $t6, 0x3B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3B);
    // 0x15167DB0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15167DB4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15167DB8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x15167DBC: addiu       $a2, $a2, 0x50
    ctx->r6 = ADD32(ctx->r6, 0X50);
    // 0x15167DC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15167DC4: jal         0x15167A68
    // 0x15167DC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15167DC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x15167DCC: bne         $v0, $zero, L_15167DDC
    if (ctx->r2 != 0) {
        // 0x15167DD0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15167DDC;
    }
    // 0x15167DD0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15167DD4: b           L_15167E00
    // 0x15167DD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15167E00;
    // 0x15167DD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15167DDC:
    // 0x15167DDC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x15167DE0: addiu       $a1, $v1, 0x10
    ctx->r5 = ADD32(ctx->r3, 0X10);
    // 0x15167DE4: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x15167DE8: jal         0x10023A10
    // 0x15167DEC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    bcopy_recomp(rdram, ctx);
        goto after_1;
    // 0x15167DEC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x15167DF0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x15167DF4: lb          $t8, 0x37($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X37);
    // 0x15167DF8: sb          $t8, 0x48($v0)
    MEM_B(0X48, ctx->r2) = ctx->r24;
    // 0x15167DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15167E00:
    // 0x15167E00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15167E04: jr          $ra
    // 0x15167E08: nop

    return;
    return;
    // 0x15167E08: nop

;}
RECOMP_FUNC void func_151D2C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D2C40: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151D2C44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151D2C48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D2C4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151D2C50: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x151D2C54: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151D2C58: beq         $t6, $zero, L_151D2CA0
    if (ctx->r14 == 0) {
        // 0x151D2C5C: nop
    
            goto L_151D2CA0;
    }
    // 0x151D2C5C: nop

    // 0x151D2C60: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x151D2C64: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151D2C68: beq         $t7, $at, L_151D2CA0
    if (ctx->r15 == ctx->r1) {
        // 0x151D2C6C: nop
    
            goto L_151D2CA0;
    }
    // 0x151D2C6C: nop

    // 0x151D2C70: lbu         $t8, 0x14($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X14);
    // 0x151D2C74: lbu         $t9, 0x3B($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X3B);
    // 0x151D2C78: bne         $t8, $t9, L_151D2CA0
    if (ctx->r24 != ctx->r25) {
        // 0x151D2C7C: nop
    
            goto L_151D2CA0;
    }
    // 0x151D2C7C: nop

    // 0x151D2C80: lw          $v1, 0x1D4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1D4);
    // 0x151D2C84: beq         $v1, $zero, L_151D2CA0
    if (ctx->r3 == 0) {
        // 0x151D2C88: nop
    
            goto L_151D2CA0;
    }
    // 0x151D2C88: nop

    // 0x151D2C8C: lbu         $t0, 0x74($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X74);
    // 0x151D2C90: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151D2C94: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x151D2C98: bnel        $t1, $at, L_151D2CB4
    if (ctx->r9 != ctx->r1) {
        // 0x151D2C9C: lbu         $t2, 0x24($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X24);
            goto L_151D2CB4;
    }
    goto skip_0;
    // 0x151D2C9C: lbu         $t2, 0x24($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X24);
    skip_0:
L_151D2CA0:
    // 0x151D2CA0: jal         0x1516972C
    // 0x151D2CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151D2CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x151D2CA8: b           L_151D2D9C
    // 0x151D2CAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151D2D9C;
    // 0x151D2CAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151D2CB0: lbu         $t2, 0x24($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X24);
L_151D2CB4:
    // 0x151D2CB4: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x151D2CB8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x151D2CBC: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x151D2CC0: jal         0x15143134
    // 0x151D2CC4: addu        $a2, $v1, $t3
    ctx->r6 = ADD32(ctx->r3, ctx->r11);
    func_15143134(rdram, ctx);
        goto after_1;
    // 0x151D2CC4: addu        $a2, $v1, $t3
    ctx->r6 = ADD32(ctx->r3, ctx->r11);
    after_1:
    // 0x151D2CC8: lbu         $t4, 0x28($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X28);
    // 0x151D2CCC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151D2CD0: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x151D2CD4: beql        $t5, $zero, L_151D2D3C
    if (ctx->r13 == 0) {
        // 0x151D2CD8: lb          $v0, 0x29($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X29);
            goto L_151D2D3C;
    }
    goto skip_1;
    // 0x151D2CD8: lb          $v0, 0x29($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X29);
    skip_1:
    // 0x151D2CDC: lh          $t6, 0x26($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X26);
    // 0x151D2CE0: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x151D2CE4: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x151D2CE8: sh          $t8, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r24;
    // 0x151D2CEC: lh          $t9, 0x26($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X26);
    // 0x151D2CF0: bgezl       $t9, L_151D2D3C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x151D2CF4: lb          $v0, 0x29($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X29);
            goto L_151D2D3C;
    }
    goto skip_2;
    // 0x151D2CF4: lb          $v0, 0x29($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X29);
    skip_2:
    // 0x151D2CF8: lb          $v0, 0x2A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2A);
    // 0x151D2CFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151D2D00: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151D2D04: beq         $v0, $at, L_151D2D24
    if (ctx->r2 == ctx->r1) {
        // 0x151D2D08: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_151D2D24;
    }
    // 0x151D2D08: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x151D2D0C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x151D2D10: lw          $t9, -0x3B8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3B8);
    // 0x151D2D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D2D18: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x151D2D1C: jalr        $t9
    // 0x151D2D20: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x151D2D20: nop

    after_2:
L_151D2D24:
    // 0x151D2D24: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x151D2D28: jal         0x1516972C
    // 0x151D2D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_3;
    // 0x151D2D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x151D2D30: b           L_151D2D9C
    // 0x151D2D34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151D2D9C;
    // 0x151D2D34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151D2D38: lb          $v0, 0x29($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X29);
L_151D2D3C:
    // 0x151D2D3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151D2D40: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151D2D44: beq         $v0, $at, L_151D2D7C
    if (ctx->r2 == ctx->r1) {
        // 0x151D2D48: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_151D2D7C;
    }
    // 0x151D2D48: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x151D2D4C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x151D2D50: lw          $t9, -0x3C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C0);
    // 0x151D2D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D2D58: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x151D2D5C: jalr        $t9
    // 0x151D2D60: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x151D2D60: nop

    after_4:
    // 0x151D2D64: bnel        $v0, $zero, L_151D2D80
    if (ctx->r2 != 0) {
        // 0x151D2D68: addiu       $t2, $sp, 0x28
        ctx->r10 = ADD32(ctx->r29, 0X28);
            goto L_151D2D80;
    }
    goto skip_3;
    // 0x151D2D68: addiu       $t2, $sp, 0x28
    ctx->r10 = ADD32(ctx->r29, 0X28);
    skip_3:
    // 0x151D2D6C: jal         0x1516972C
    // 0x151D2D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_5;
    // 0x151D2D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x151D2D74: b           L_151D2D9C
    // 0x151D2D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151D2D9C;
    // 0x151D2D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151D2D7C:
    // 0x151D2D7C: addiu       $t2, $sp, 0x28
    ctx->r10 = ADD32(ctx->r29, 0X28);
L_151D2D80:
    // 0x151D2D80: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x151D2D84: sw          $at, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r1;
    // 0x151D2D88: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x151D2D8C: sw          $t4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r12;
    // 0x151D2D90: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x151D2D94: sw          $at, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r1;
    // 0x151D2D98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151D2D9C:
    // 0x151D2D9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151D2DA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151D2DA4: jr          $ra
    // 0x151D2DA8: nop

    return;
    return;
    // 0x151D2DA8: nop

;}
RECOMP_FUNC void func_1506BEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BEC0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506BEC4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506BEC8: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506BECC: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506BED0: sb          $t6, 0x89($t7)
    MEM_B(0X89, ctx->r15) = ctx->r14;
    // 0x1506BED4: jr          $ra
    // 0x1506BED8: nop

    return;
    return;
    // 0x1506BED8: nop

;}
RECOMP_FUNC void func_151CC840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CC840: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x151CC844: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151CC848: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151CC84C: sw          $a0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r4;
    // 0x151CC850: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
    // 0x151CC854: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x151CC858: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x151CC85C: lbu         $t8, 0xF3($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XF3);
    // 0x151CC860: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x151CC864: lw          $t6, 0xE0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE0);
    // 0x151CC868: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151CC86C: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x151CC870: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x151CC874: sb          $zero, 0x39($sp)
    MEM_B(0X39, ctx->r29) = 0;
    // 0x151CC878: sb          $zero, 0x38($sp)
    MEM_B(0X38, ctx->r29) = 0;
    // 0x151CC87C: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x151CC880: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x151CC884: beq         $t8, $zero, L_151CC894
    if (ctx->r24 == 0) {
        // 0x151CC888: swc1        $f4, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
            goto L_151CC894;
    }
    // 0x151CC888: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x151CC88C: b           L_151CC898
    // 0x151CC890: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_151CC898;
    // 0x151CC890: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_151CC894:
    // 0x151CC894: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151CC898:
    // 0x151CC898: lw          $t0, 0xE0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE0);
    // 0x151CC89C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151CC8A0: ori         $t9, $v0, 0x10
    ctx->r25 = ctx->r2 | 0X10;
    // 0x151CC8A4: lbu         $t1, 0x23D($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X23D);
    // 0x151CC8A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151CC8AC: sh          $t6, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r14;
    // 0x151CC8B0: addiu       $t2, $t1, 0xB
    ctx->r10 = ADD32(ctx->r9, 0XB);
    // 0x151CC8B4: sllv        $t4, $t3, $t2
    ctx->r12 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x151CC8B8: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x151CC8BC: lbu         $t1, 0xE7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XE7);
    // 0x151CC8C0: lbu         $t3, 0xEB($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XEB);
    // 0x151CC8C4: lbu         $t2, 0xEF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XEF);
    // 0x151CC8C8: sh          $t5, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r13;
    // 0x151CC8CC: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x151CC8D0: addiu       $t9, $zero, 0xB4
    ctx->r25 = ADD32(0, 0XB4);
    // 0x151CC8D4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151CC8D8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151CC8DC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151CC8E0: sb          $t1, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r9;
    // 0x151CC8E4: sb          $t3, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r11;
    // 0x151CC8E8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151CC8EC: sb          $t8, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r24;
    // 0x151CC8F0: sb          $t9, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = ctx->r25;
    // 0x151CC8F4: sb          $t4, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r12;
    // 0x151CC8F8: sb          $t5, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r13;
    // 0x151CC8FC: sb          $t6, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r14;
    // 0x151CC900: lui         $t1, 0x20
    ctx->r9 = S32(0X20 << 16);
    // 0x151CC904: lui         $t3, 0x1F
    ctx->r11 = S32(0X1F << 16);
    // 0x151CC908: sb          $t2, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r10;
    // 0x151CC90C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151CC910: ori         $t1, $t1, 0x4
    ctx->r9 = ctx->r9 | 0X4;
    // 0x151CC914: ori         $t3, $t3, 0x601
    ctx->r11 = ctx->r11 | 0X601;
    // 0x151CC918: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x151CC91C: addiu       $t9, $zero, 0x44
    ctx->r25 = ADD32(0, 0X44);
    // 0x151CC920: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x151CC924: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x151CC928: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x151CC92C: sh          $t7, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r15;
    // 0x151CC930: sb          $t7, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r15;
    // 0x151CC934: sb          $t8, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r24;
    // 0x151CC938: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x151CC93C: sw          $t1, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r9;
    // 0x151CC940: sw          $t3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r11;
    // 0x151CC944: sw          $t2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r10;
    // 0x151CC948: sw          $t9, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r25;
    // 0x151CC94C: sw          $t4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r12;
    // 0x151CC950: sw          $t5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r13;
    // 0x151CC954: sb          $zero, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = 0;
    // 0x151CC958: sb          $t6, 0xC9($sp)
    MEM_B(0XC9, ctx->r29) = ctx->r14;
    // 0x151CC95C: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x151CC960: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x151CC964: lbu         $t7, 0x23D($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X23D);
    // 0x151CC968: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x151CC96C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151CC970: lbu         $t3, 0xF7($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XF7);
    // 0x151CC974: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x151CC978: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151CC97C: addiu       $t1, $zero, 0x58
    ctx->r9 = ADD32(0, 0X58);
    // 0x151CC980: sb          $t8, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r24;
    // 0x151CC984: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151CC988: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151CC98C: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151CC990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151CC994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CC998: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CC99C: sb          $t7, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = ctx->r15;
    // 0x151CC9A0: swc1        $f2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f2.u32l;
    // 0x151CC9A4: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x151CC9A8: jal         0x1515548C
    // 0x151CC9AC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_1515548C(rdram, ctx);
        goto after_0;
    // 0x151CC9AC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_0:
    // 0x151CC9B0: beq         $v0, $zero, L_151CC9C4
    if (ctx->r2 == 0) {
        // 0x151CC9B4: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CC9C4;
    }
    // 0x151CC9B4: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CC9B8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151CC9BC: jal         0x10022EC0
    // 0x151CC9C0: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151CC9C0: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_1:
L_151CC9C4:
    // 0x151CC9C4: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x151CC9C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151CC9CC: lhu         $v0, 0x9C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X9C);
    // 0x151CC9D0: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x151CC9D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151CC9D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151CC9DC: lbu         $t7, 0xF7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XF7);
    // 0x151CC9E0: addiu       $t9, $zero, 0x9D
    ctx->r25 = ADD32(0, 0X9D);
    // 0x151CC9E4: addiu       $t0, $zero, 0x58
    ctx->r8 = ADD32(0, 0X58);
    // 0x151CC9E8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151CC9EC: andi        $t6, $v0, 0xFFF9
    ctx->r14 = ctx->r2 & 0XFFF9;
    // 0x151CC9F0: sb          $t9, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r25;
    // 0x151CC9F4: sh          $t6, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r14;
    // 0x151CC9F8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151CC9FC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151CCA00: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151CCA04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151CCA08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CCA0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CCA10: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x151CCA14: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x151CCA18: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x151CCA1C: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x151CCA20: jal         0x1515548C
    // 0x151CCA24: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_1515548C(rdram, ctx);
        goto after_2;
    // 0x151CCA24: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_2:
    // 0x151CCA28: beq         $v0, $zero, L_151CCA3C
    if (ctx->r2 == 0) {
        // 0x151CCA2C: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CCA3C;
    }
    // 0x151CCA2C: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CCA30: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151CCA34: jal         0x10022EC0
    // 0x151CCA38: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151CCA38: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_3:
L_151CCA3C:
    // 0x151CCA3C: lhu         $v0, 0x9C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X9C);
    // 0x151CCA40: lui         $at, 0xC25C
    ctx->r1 = S32(0XC25C << 16);
    // 0x151CCA44: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151CCA48: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151CCA4C: lbu         $t5, 0xF7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XF7);
    // 0x151CCA50: andi        $t3, $v0, 0xFFF9
    ctx->r11 = ctx->r2 & 0XFFF9;
    // 0x151CCA54: ori         $t9, $t3, 0x2
    ctx->r25 = ctx->r11 | 0X2;
    // 0x151CCA58: addiu       $t4, $zero, 0x58
    ctx->r12 = ADD32(0, 0X58);
    // 0x151CCA5C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151CCA60: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151CCA64: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151CCA68: sh          $t9, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r25;
    // 0x151CCA6C: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151CCA70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151CCA74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CCA78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CCA7C: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x151CCA80: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    // 0x151CCA84: jal         0x1515548C
    // 0x151CCA88: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_1515548C(rdram, ctx);
        goto after_4;
    // 0x151CCA88: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_4:
    // 0x151CCA8C: beq         $v0, $zero, L_151CCAA0
    if (ctx->r2 == 0) {
        // 0x151CCA90: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CCAA0;
    }
    // 0x151CCA90: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CCA94: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151CCA98: jal         0x10022EC0
    // 0x151CCA9C: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x151CCA9C: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_5:
L_151CCAA0:
    // 0x151CCAA0: lhu         $v0, 0x9C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X9C);
    // 0x151CCAA4: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x151CCAA8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x151CCAAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151CCAB0: lbu         $t9, 0xF7($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XF7);
    // 0x151CCAB4: andi        $t8, $v0, 0xFFF9
    ctx->r24 = ctx->r2 & 0XFFF9;
    // 0x151CCAB8: addiu       $t0, $zero, 0x9C
    ctx->r8 = ADD32(0, 0X9C);
    // 0x151CCABC: ori         $t3, $t8, 0x4
    ctx->r11 = ctx->r24 | 0X4;
    // 0x151CCAC0: addiu       $t2, $zero, 0x58
    ctx->r10 = ADD32(0, 0X58);
    // 0x151CCAC4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151CCAC8: sb          $t0, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r8;
    // 0x151CCACC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151CCAD0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x151CCAD4: sh          $t3, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r11;
    // 0x151CCAD8: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151CCADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151CCAE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CCAE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CCAE8: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x151CCAEC: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x151CCAF0: jal         0x1515548C
    // 0x151CCAF4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_1515548C(rdram, ctx);
        goto after_6;
    // 0x151CCAF4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_6:
    // 0x151CCAF8: beq         $v0, $zero, L_151CCB0C
    if (ctx->r2 == 0) {
        // 0x151CCAFC: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CCB0C;
    }
    // 0x151CCAFC: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CCB00: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151CCB04: jal         0x10022EC0
    // 0x151CCB08: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x151CCB08: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_7:
L_151CCB0C:
    // 0x151CCB0C: lhu         $v0, 0x9C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X9C);
    // 0x151CCB10: lui         $at, 0xC25C
    ctx->r1 = S32(0XC25C << 16);
    // 0x151CCB14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151CCB18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151CCB1C: lbu         $t8, 0xF7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XF7);
    // 0x151CCB20: addiu       $t7, $zero, 0x58
    ctx->r15 = ADD32(0, 0X58);
    // 0x151CCB24: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151CCB28: andi        $t0, $v0, 0xFFF9
    ctx->r8 = ctx->r2 & 0XFFF9;
    // 0x151CCB2C: sh          $t0, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r8;
    // 0x151CCB30: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x151CCB34: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151CCB38: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151CCB3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151CCB40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CCB44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CCB48: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x151CCB4C: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x151CCB50: jal         0x1515548C
    // 0x151CCB54: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_1515548C(rdram, ctx);
        goto after_8;
    // 0x151CCB54: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_8:
    // 0x151CCB58: beq         $v0, $zero, L_151CCB6C
    if (ctx->r2 == 0) {
        // 0x151CCB5C: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CCB6C;
    }
    // 0x151CCB5C: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CCB60: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151CCB64: jal         0x10022EC0
    // 0x151CCB68: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x151CCB68: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_9:
L_151CCB6C:
    // 0x151CCB6C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x151CCB70: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151CCB74: lhu         $t9, 0x9C($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X9C);
    // 0x151CCB78: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x151CCB7C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151CCB80: lbu         $t0, 0xF7($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XF7);
    // 0x151CCB84: addiu       $t3, $zero, 0x9E
    ctx->r11 = ADD32(0, 0X9E);
    // 0x151CCB88: addiu       $t6, $zero, 0x58
    ctx->r14 = ADD32(0, 0X58);
    // 0x151CCB8C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151CCB90: ori         $t5, $t9, 0x6
    ctx->r13 = ctx->r25 | 0X6;
    // 0x151CCB94: sb          $t3, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r11;
    // 0x151CCB98: sh          $t5, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r13;
    // 0x151CCB9C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151CCBA0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151CCBA4: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151CCBA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151CCBAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CCBB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CCBB4: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x151CCBB8: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x151CCBBC: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x151CCBC0: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x151CCBC4: jal         0x1515548C
    // 0x151CCBC8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_1515548C(rdram, ctx);
        goto after_10;
    // 0x151CCBC8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_10:
    // 0x151CCBCC: beq         $v0, $zero, L_151CCBE0
    if (ctx->r2 == 0) {
        // 0x151CCBD0: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CCBE0;
    }
    // 0x151CCBD0: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CCBD4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151CCBD8: jal         0x10022EC0
    // 0x151CCBDC: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x151CCBDC: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_11:
L_151CCBE0:
    // 0x151CCBE0: lhu         $v0, 0x9C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X9C);
    // 0x151CCBE4: lui         $at, 0xC230
    ctx->r1 = S32(0XC230 << 16);
    // 0x151CCBE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151CCBEC: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x151CCBF0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151CCBF4: lbu         $t4, 0xF7($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XF7);
    // 0x151CCBF8: andi        $t1, $v0, 0xFFF9
    ctx->r9 = ctx->r2 & 0XFFF9;
    // 0x151CCBFC: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x151CCC00: addiu       $t9, $zero, 0x58
    ctx->r25 = ADD32(0, 0X58);
    // 0x151CCC04: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151CCC08: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x151CCC0C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151CCC10: sh          $t2, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r10;
    // 0x151CCC14: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151CCC18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151CCC1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CCC20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CCC24: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x151CCC28: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    // 0x151CCC2C: jal         0x1515548C
    // 0x151CCC30: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_1515548C(rdram, ctx);
        goto after_12;
    // 0x151CCC30: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_12:
    // 0x151CCC34: beq         $v0, $zero, L_151CCC48
    if (ctx->r2 == 0) {
        // 0x151CCC38: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CCC48;
    }
    // 0x151CCC38: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CCC3C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151CCC40: jal         0x10022EC0
    // 0x151CCC44: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x151CCC44: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_13:
L_151CCC48:
    // 0x151CCC48: lhu         $v0, 0x9C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X9C);
    // 0x151CCC4C: lui         $at, 0xC230
    ctx->r1 = S32(0XC230 << 16);
    // 0x151CCC50: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151CCC54: lbu         $t1, 0xF7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XF7);
    // 0x151CCC58: addiu       $t8, $zero, 0x58
    ctx->r24 = ADD32(0, 0X58);
    // 0x151CCC5C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151CCC60: andi        $t7, $v0, 0xFFF9
    ctx->r15 = ctx->r2 & 0XFFF9;
    // 0x151CCC64: sh          $t7, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r15;
    // 0x151CCC68: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151CCC6C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151CCC70: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151CCC74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151CCC78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CCC7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CCC80: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x151CCC84: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x151CCC88: jal         0x1515548C
    // 0x151CCC8C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_1515548C(rdram, ctx);
        goto after_14;
    // 0x151CCC8C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_14:
    // 0x151CCC90: beq         $v0, $zero, L_151CCCA4
    if (ctx->r2 == 0) {
        // 0x151CCC94: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CCCA4;
    }
    // 0x151CCC94: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CCC98: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151CCC9C: jal         0x10022EC0
    // 0x151CCCA0: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x151CCCA0: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_15:
L_151CCCA4:
    // 0x151CCCA4: lhu         $v0, 0x9C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X9C);
    // 0x151CCCA8: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x151CCCAC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151CCCB0: lui         $at, 0xC230
    ctx->r1 = S32(0XC230 << 16);
    // 0x151CCCB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151CCCB8: lbu         $t0, 0xF7($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XF7);
    // 0x151CCCBC: andi        $t9, $v0, 0xFFF9
    ctx->r25 = ctx->r2 & 0XFFF9;
    // 0x151CCCC0: ori         $t5, $t9, 0x2
    ctx->r13 = ctx->r25 | 0X2;
    // 0x151CCCC4: addiu       $t6, $zero, 0x58
    ctx->r14 = ADD32(0, 0X58);
    // 0x151CCCC8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151CCCCC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151CCCD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151CCCD4: sh          $t5, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r13;
    // 0x151CCCD8: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151CCCDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151CCCE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CCCE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CCCE8: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x151CCCEC: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x151CCCF0: jal         0x1515548C
    // 0x151CCCF4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_1515548C(rdram, ctx);
        goto after_16;
    // 0x151CCCF4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_16:
    // 0x151CCCF8: beq         $v0, $zero, L_151CCD0C
    if (ctx->r2 == 0) {
        // 0x151CCCFC: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CCD0C;
    }
    // 0x151CCCFC: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CCD00: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151CCD04: jal         0x10022EC0
    // 0x151CCD08: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x151CCD08: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_17:
L_151CCD0C:
    // 0x151CCD0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151CCD10: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x151CCD14: jr          $ra
    // 0x151CCD18: nop

    return;
    return;
    // 0x151CCD18: nop

;}
RECOMP_FUNC void func_1516295C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516295C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15162960: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x15162964: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x15162968: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1516296C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15162970: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x15162974: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x15162978: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x1516297C: slti        $at, $a1, 0x5
    ctx->r1 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
    // 0x15162980: bne         $at, $zero, L_15162990
    if (ctx->r1 != 0) {
        // 0x15162984: lb          $t7, 0x83($sp)
        ctx->r15 = MEM_B(ctx->r29, 0X83);
            goto L_15162990;
    }
    // 0x15162984: lb          $t7, 0x83($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X83);
    // 0x15162988: b           L_15162B18
    // 0x1516298C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15162B18;
    // 0x1516298C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15162990:
    // 0x15162990: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x15162994: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15162998: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1516299C: lwc1        $f2, 0x6880($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6880);
    // 0x151629A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151629A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x151629A8: lwc1        $f12, 0x6894($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6894);
    // 0x151629AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151629B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x151629B4: lwc1        $f6, 0x68A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X68A8);
    // 0x151629B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151629BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x151629C0: lwc1        $f0, 0x68BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X68BC);
    // 0x151629C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151629C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x151629CC: lwc1        $f18, 0x68D0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X68D0);
    // 0x151629D0: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x151629D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151629D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x151629DC: add.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x151629E0: lwc1        $f8, 0x68E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X68E4);
    // 0x151629E4: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x151629E8: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x151629EC: add.s       $f16, $f8, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x151629F0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151629F4: lb          $t8, 0x87($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X87);
    // 0x151629F8: lb          $t9, 0x8B($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X8B);
    // 0x151629FC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x15162A00: lb          $t0, 0x8F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X8F);
    // 0x15162A04: add.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x15162A08: sb          $t7, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r15;
    // 0x15162A0C: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x15162A10: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x15162A14: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x15162A18: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x15162A1C: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x15162A20: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x15162A24: sb          $t8, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r24;
    // 0x15162A28: sb          $t9, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r25;
    // 0x15162A2C: bc1f        L_15162A3C
    if (!c1cs) {
        // 0x15162A30: sb          $t0, 0x58($sp)
        MEM_B(0X58, ctx->r29) = ctx->r8;
            goto L_15162A3C;
    }
    // 0x15162A30: sb          $t0, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r8;
    // 0x15162A34: b           L_15162AA4
    // 0x15162A38: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
        goto L_15162AA4;
    // 0x15162A38: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
L_15162A3C:
    // 0x15162A3C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15162A40: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15162A44: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15162A48: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15162A4C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x15162A50: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15162A54: bc1fl       L_15162A68
    if (!c1cs) {
        // 0x15162A58: c.lt.s      $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
            goto L_15162A68;
    }
    goto skip_0;
    // 0x15162A58: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    skip_0:
    // 0x15162A5C: b           L_15162AA4
    // 0x15162A60: sb          $t1, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r9;
        goto L_15162AA4;
    // 0x15162A60: sb          $t1, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r9;
    // 0x15162A64: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
L_15162A68:
    // 0x15162A68: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x15162A6C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15162A70: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15162A74: bc1fl       L_15162A88
    if (!c1cs) {
        // 0x15162A78: c.lt.s      $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
            goto L_15162A88;
    }
    goto skip_1;
    // 0x15162A78: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    skip_1:
    // 0x15162A7C: b           L_15162AA4
    // 0x15162A80: sb          $t2, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r10;
        goto L_15162AA4;
    // 0x15162A80: sb          $t2, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r10;
    // 0x15162A84: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
L_15162A88:
    // 0x15162A88: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x15162A8C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x15162A90: bc1fl       L_15162AA4
    if (!c1cs) {
        // 0x15162A94: sb          $t4, 0x54($sp)
        MEM_B(0X54, ctx->r29) = ctx->r12;
            goto L_15162AA4;
    }
    goto skip_2;
    // 0x15162A94: sb          $t4, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r12;
    skip_2:
    // 0x15162A98: b           L_15162AA4
    // 0x15162A9C: sb          $t3, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r11;
        goto L_15162AA4;
    // 0x15162A9C: sb          $t3, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r11;
    // 0x15162AA0: sb          $t4, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r12;
L_15162AA4:
    // 0x15162AA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15162AA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15162AAC: lbu         $t5, 0x77($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X77);
    // 0x15162AB0: lb          $t6, 0x7F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X7F);
    // 0x15162AB4: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15162AB8: lh          $t7, 0x7A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X7A);
    // 0x15162ABC: lbu         $t8, 0x73($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X73);
    // 0x15162AC0: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x15162AC4: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x15162AC8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x15162ACC: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x15162AD0: lbu         $a3, 0x97($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X97);
    // 0x15162AD4: sb          $t5, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r13;
    // 0x15162AD8: sb          $t6, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r14;
    // 0x15162ADC: sh          $t7, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r15;
    // 0x15162AE0: sb          $t8, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r24;
    // 0x15162AE4: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    // 0x15162AE8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15162AEC: jal         0x1516037C
    // 0x15162AF0: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    func_1516037C(rdram, ctx);
        goto after_0;
    // 0x15162AF0: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x15162AF4: beq         $v0, $zero, L_15162B14
    if (ctx->r2 == 0) {
        // 0x15162AF8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15162B14;
    }
    // 0x15162AF8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15162AFC: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x15162B00: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x15162B04: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x15162B08: jal         0x10022EC0
    // 0x15162B0C: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15162B0C: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_1:
    // 0x15162B10: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
L_15162B14:
    // 0x15162B14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15162B18:
    // 0x15162B18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15162B1C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x15162B20: jr          $ra
    // 0x15162B24: nop

    return;
    return;
    // 0x15162B24: nop

;}
RECOMP_FUNC void func_150238D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150238D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150238DC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x150238E0: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x150238E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150238E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150238EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150238F0: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x150238F4: lbu         $t6, 0x2($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X2);
    // 0x150238F8: beql        $t6, $zero, L_15023930
    if (ctx->r14 == 0) {
        // 0x150238FC: lw          $t1, 0x10($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X10);
            goto L_15023930;
    }
    goto skip_0;
    // 0x150238FC: lw          $t1, 0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X10);
    skip_0:
    // 0x15023900: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x15023904: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15023908: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1502390C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15023910: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x15023914: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15023918: lw          $t9, 0x3640($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3640);
    // 0x1502391C: lw          $t8, 0x35B0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X35B0);
    // 0x15023920: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x15023924: beql        $at, $zero, L_15023940
    if (ctx->r1 == 0) {
        // 0x15023928: sw          $zero, 0x0($a3)
        MEM_W(0X0, ctx->r7) = 0;
            goto L_15023940;
    }
    goto skip_1;
    // 0x15023928: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    skip_1:
    // 0x1502392C: lw          $t1, 0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X10);
L_15023930:
    // 0x15023930: andi        $t2, $t1, 0x80
    ctx->r10 = ctx->r9 & 0X80;
    // 0x15023934: beql        $t2, $zero, L_1502395C
    if (ctx->r10 == 0) {
        // 0x15023938: lbu         $v0, 0x0($a1)
        ctx->r2 = MEM_BU(ctx->r5, 0X0);
            goto L_1502395C;
    }
    goto skip_2;
    // 0x15023938: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    skip_2:
    // 0x1502393C: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
L_15023940:
    // 0x15023940: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x15023944: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x15023948: jal         0x10004074
    // 0x1502394C: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    func_10004074(rdram, ctx);
        goto after_0;
    // 0x1502394C: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    after_0:
    // 0x15023950: b           L_15023BA0
    // 0x15023954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15023BA0;
    // 0x15023954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15023958: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
L_1502395C:
    // 0x1502395C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15023960: lbu         $t4, 0xE($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0XE);
    // 0x15023964: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x15023968: lbu         $t5, 0x35E8($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X35E8);
    // 0x1502396C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15023970: addiu       $t0, $t0, 0x3958
    ctx->r8 = ADD32(ctx->r8, 0X3958);
    // 0x15023974: bnel        $t4, $t5, L_15023A2C
    if (ctx->r12 != ctx->r13) {
        // 0x15023978: lhu         $v0, 0x4($a1)
        ctx->r2 = MEM_HU(ctx->r5, 0X4);
            goto L_15023A2C;
    }
    goto skip_3;
    // 0x15023978: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    skip_3:
    // 0x1502397C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15023980: addu        $t7, $t0, $t6
    ctx->r15 = ADD32(ctx->r8, ctx->r14);
    // 0x15023984: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x15023988: beql        $a2, $zero, L_15023A2C
    if (ctx->r6 == 0) {
        // 0x1502398C: lhu         $v0, 0x4($a1)
        ctx->r2 = MEM_HU(ctx->r5, 0X4);
            goto L_15023A2C;
    }
    goto skip_4;
    // 0x1502398C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    skip_4:
    // 0x15023990: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x15023994: addiu       $v1, $zero, 0x44
    ctx->r3 = ADD32(0, 0X44);
    // 0x15023998: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1502399C: mflo        $t9
    ctx->r25 = lo;
    // 0x150239A0: addu        $t1, $a2, $t9
    ctx->r9 = ADD32(ctx->r6, ctx->r25);
    // 0x150239A4: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x150239A8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150239AC: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x150239B0: nop

    // 0x150239B4: sh          $t3, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r11;
    // 0x150239B8: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x150239BC: lbu         $t4, 0x0($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X0);
    // 0x150239C0: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150239C4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x150239C8: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x150239CC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x150239D0: mflo        $t9
    ctx->r25 = lo;
    // 0x150239D4: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x150239D8: lwc1        $f8, 0x38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X38);
    // 0x150239DC: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150239E0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150239E4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150239E8: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x150239EC: nop

    // 0x150239F0: sh          $t2, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r10;
    // 0x150239F4: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x150239F8: lbu         $t3, 0x0($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X0);
    // 0x150239FC: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15023A00: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x15023A04: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x15023A08: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15023A0C: mflo        $t7
    ctx->r15 = lo;
    // 0x15023A10: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x15023A14: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x15023A18: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15023A1C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x15023A20: nop

    // 0x15023A24: sh          $t2, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r10;
    // 0x15023A28: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
L_15023A2C:
    // 0x15023A2C: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x15023A30: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15023A34: beql        $t0, $v0, L_15023A74
    if (ctx->r8 == ctx->r2) {
        // 0x15023A38: lhu         $t5, 0xC($a1)
        ctx->r13 = MEM_HU(ctx->r5, 0XC);
            goto L_15023A74;
    }
    goto skip_5;
    // 0x15023A38: lhu         $t5, 0xC($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0XC);
    skip_5:
    // 0x15023A3C: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x15023A40: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15023A44: beq         $at, $zero, L_15023A54
    if (ctx->r1 == 0) {
        // 0x15023A48: subu        $t3, $v0, $v1
        ctx->r11 = SUB32(ctx->r2, ctx->r3);
            goto L_15023A54;
    }
    // 0x15023A48: subu        $t3, $v0, $v1
    ctx->r11 = SUB32(ctx->r2, ctx->r3);
    // 0x15023A4C: b           L_15023A70
    // 0x15023A50: sh          $t3, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r11;
        goto L_15023A70;
    // 0x15023A50: sh          $t3, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r11;
L_15023A54:
    // 0x15023A54: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x15023A58: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x15023A5C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x15023A60: jal         0x10004074
    // 0x15023A64: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
    func_10004074(rdram, ctx);
        goto after_1;
    // 0x15023A64: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
    after_1:
    // 0x15023A68: b           L_15023BA0
    // 0x15023A6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15023BA0;
    // 0x15023A6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15023A70:
    // 0x15023A70: lhu         $t5, 0xC($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0XC);
L_15023A74:
    // 0x15023A74: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x15023A78: lhu         $a0, 0xA($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0XA);
    // 0x15023A7C: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x15023A80: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15023A84: beq         $at, $zero, L_15023ACC
    if (ctx->r1 == 0) {
        // 0x15023A88: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15023ACC;
    }
    // 0x15023A88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15023A8C: beq         $v1, $zero, L_15023B24
    if (ctx->r3 == 0) {
        // 0x15023A90: nop
    
            goto L_15023B24;
    }
    // 0x15023A90: nop

    // 0x15023A94: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15023A98: or          $t8, $t5, $zero
    ctx->r24 = ctx->r13 | 0;
    // 0x15023A9C: mflo        $t6
    ctx->r14 = lo;
    // 0x15023AA0: nop

    // 0x15023AA4: nop

    // 0x15023AA8: divu        $zero, $t6, $a0
    lo = S32(U32(ctx->r14) / U32(ctx->r4)); hi = S32(U32(ctx->r14) % U32(ctx->r4));
    // 0x15023AAC: mflo        $t7
    ctx->r15 = lo;
    // 0x15023AB0: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x15023AB4: bne         $a0, $zero, L_15023AC0
    if (ctx->r4 != 0) {
        // 0x15023AB8: nop
    
            goto L_15023AC0;
    }
    // 0x15023AB8: nop

    // 0x15023ABC: break       7
    do_break(352467644);
L_15023AC0:
    // 0x15023AC0: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x15023AC4: b           L_15023B24
    // 0x15023AC8: nop

        goto L_15023B24;
    // 0x15023AC8: nop

L_15023ACC:
    // 0x15023ACC: lhu         $v1, 0x8($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X8);
    // 0x15023AD0: beq         $v1, $zero, L_15023B24
    if (ctx->r3 == 0) {
        // 0x15023AD4: nop
    
            goto L_15023B24;
    }
    // 0x15023AD4: nop

    // 0x15023AD8: lhu         $a0, 0x6($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6);
    // 0x15023ADC: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x15023AE0: subu        $t9, $a0, $v1
    ctx->r25 = SUB32(ctx->r4, ctx->r3);
    // 0x15023AE4: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15023AE8: beq         $at, $zero, L_15023B24
    if (ctx->r1 == 0) {
        // 0x15023AEC: nop
    
            goto L_15023B24;
    }
    // 0x15023AEC: nop

    // 0x15023AF0: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x15023AF4: subu        $t2, $a0, $v0
    ctx->r10 = SUB32(ctx->r4, ctx->r2);
    // 0x15023AF8: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15023AFC: mflo        $t3
    ctx->r11 = lo;
    // 0x15023B00: nop

    // 0x15023B04: nop

    // 0x15023B08: divu        $zero, $t3, $v1
    lo = S32(U32(ctx->r11) / U32(ctx->r3)); hi = S32(U32(ctx->r11) % U32(ctx->r3));
    // 0x15023B0C: mflo        $t4
    ctx->r12 = lo;
    // 0x15023B10: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x15023B14: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x15023B18: bne         $a2, $zero, L_15023B24
    if (ctx->r6 != 0) {
        // 0x15023B1C: nop
    
            goto L_15023B24;
    }
    // 0x15023B1C: nop

    // 0x15023B20: break       7
    do_break(352467744);
L_15023B24:
    // 0x15023B24: beq         $t0, $v0, L_15023B9C
    if (ctx->r8 == ctx->r2) {
        // 0x15023B28: lui         $t5, 0x800C
        ctx->r13 = S32(0X800C << 16);
            goto L_15023B9C;
    }
    // 0x15023B28: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15023B2C: lbu         $t5, 0x3C88($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3C88);
    // 0x15023B30: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15023B34: addiu       $v0, $v0, 0x3C89
    ctx->r2 = ADD32(ctx->r2, 0X3C89);
    // 0x15023B38: beql        $t5, $zero, L_15023BA0
    if (ctx->r13 == 0) {
        // 0x15023B3C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15023BA0;
    }
    goto skip_6;
    // 0x15023B3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x15023B40: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x15023B44: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x15023B48: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x15023B4C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15023B50: multu       $t8, $t6
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15023B54: mflo        $t7
    ctx->r15 = lo;
    // 0x15023B58: nop

    // 0x15023B5C: nop

    // 0x15023B60: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x15023B64: mflo        $t9
    ctx->r25 = lo;
    // 0x15023B68: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x15023B6C: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x15023B70: lw          $t1, -0x161C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X161C);
    // 0x15023B74: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x15023B78: bnel        $at, $zero, L_15023BA0
    if (ctx->r1 != 0) {
        // 0x15023B7C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15023BA0;
    }
    goto skip_7;
    // 0x15023B7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_7:
    // 0x15023B80: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x15023B84: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x15023B88: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x15023B8C: jal         0x10004074
    // 0x15023B90: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    func_10004074(rdram, ctx);
        goto after_2;
    // 0x15023B90: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    after_2:
    // 0x15023B94: b           L_15023BA0
    // 0x15023B98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15023BA0;
    // 0x15023B98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15023B9C:
    // 0x15023B9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15023BA0:
    // 0x15023BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15023BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15023BA8: jr          $ra
    // 0x15023BAC: nop

    return;
    return;
    // 0x15023BAC: nop

;}
RECOMP_FUNC void func_151027E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151027E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151027EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151027F0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151027F4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x151027F8: lbu         $t6, 0x3B($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3B);
    // 0x151027FC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15102800: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x15102804: jal         0x151403A8
    // 0x15102808: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    func_151403A8(rdram, ctx);
        goto after_0;
    // 0x15102808: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x1510280C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15102810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15102814: jr          $ra
    // 0x15102818: nop

    return;
    return;
    // 0x15102818: nop

;}
RECOMP_FUNC void func_151BEE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BEE94: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x151BEE98: lbu         $t6, 0x127($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X127);
    // 0x151BEE9C: bnel        $v0, $t6, L_151BEEB0
    if (ctx->r2 != ctx->r14) {
        // 0x151BEEA0: lw          $t7, 0x0($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X0);
            goto L_151BEEB0;
    }
    goto skip_0;
    // 0x151BEEA0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x151BEEA4: jr          $ra
    // 0x151BEEA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151BEEA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151BEEAC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
L_151BEEB0:
    // 0x151BEEB0: bnel        $t7, $zero, L_151BEEC4
    if (ctx->r15 != 0) {
        // 0x151BEEB4: lbu         $t8, 0x4($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X4);
            goto L_151BEEC4;
    }
    goto skip_1;
    // 0x151BEEB4: lbu         $t8, 0x4($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X4);
    skip_1:
    // 0x151BEEB8: jr          $ra
    // 0x151BEEBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151BEEBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151BEEC0: lbu         $t8, 0x4($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X4);
L_151BEEC4:
    // 0x151BEEC4: bnel        $v0, $t8, L_151BEED8
    if (ctx->r2 != ctx->r24) {
        // 0x151BEEC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151BEED8;
    }
    goto skip_2;
    // 0x151BEEC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x151BEECC: jr          $ra
    // 0x151BEED0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151BEED0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151BEED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151BEED8:
    // 0x151BEED8: jr          $ra
    // 0x151BEEDC: nop

    return;
    return;
    // 0x151BEEDC: nop

;}
RECOMP_FUNC void func_150DC558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DC558: addiu       $sp, $sp, -0x198
    ctx->r29 = ADD32(ctx->r29, -0X198);
    // 0x150DC55C: sw          $s3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r19;
    // 0x150DC560: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150DC564: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x150DC568: sw          $fp, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r30;
    // 0x150DC56C: sw          $s7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r23;
    // 0x150DC570: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x150DC574: sw          $s5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r21;
    // 0x150DC578: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x150DC57C: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x150DC580: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x150DC584: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x150DC588: sdc1        $f30, 0x78($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X78, ctx->r29);
    // 0x150DC58C: sdc1        $f28, 0x70($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X70, ctx->r29);
    // 0x150DC590: sdc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X68, ctx->r29);
    // 0x150DC594: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x150DC598: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x150DC59C: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x150DC5A0: lw          $t6, 0x94($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X94);
    // 0x150DC5A4: lw          $s0, 0x98($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X98);
    // 0x150DC5A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150DC5AC: sw          $t6, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r14;
    // 0x150DC5B0: lb          $s7, 0x2E($s3)
    ctx->r23 = MEM_B(ctx->r19, 0X2E);
    // 0x150DC5B4: lb          $v0, 0x2D($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2D);
    // 0x150DC5B8: addiu       $s6, $zero, 0x18
    ctx->r22 = ADD32(0, 0X18);
    // 0x150DC5BC: beql        $s7, $v0, L_150DCD1C
    if (ctx->r23 == ctx->r2) {
        // 0x150DC5C0: addiu       $s6, $zero, 0x18
        ctx->r22 = ADD32(0, 0X18);
            goto L_150DCD1C;
    }
    goto skip_0;
    // 0x150DC5C0: addiu       $s6, $zero, 0x18
    ctx->r22 = ADD32(0, 0X18);
    skip_0:
    // 0x150DC5C4: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150DC5C8: addiu       $fp, $sp, 0x180
    ctx->r30 = ADD32(ctx->r29, 0X180);
    // 0x150DC5CC: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
L_150DC5D0:
    // 0x150DC5D0: bgez        $s7, L_150DC5E0
    if (SIGNED(ctx->r23) >= 0) {
        // 0x150DC5D4: nop
    
            goto L_150DC5E0;
    }
    // 0x150DC5D4: nop

    // 0x150DC5D8: lbu         $s7, 0x25($s3)
    ctx->r23 = MEM_BU(ctx->r19, 0X25);
    // 0x150DC5DC: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
L_150DC5E0:
    // 0x150DC5E0: multu       $s7, $s6
    result = U64(U32(ctx->r23)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DC5E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150DC5E8: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150DC5EC: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150DC5F0: lw          $t7, 0x190($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X190);
    // 0x150DC5F4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150DC5F8: mflo        $t8
    ctx->r24 = lo;
    // 0x150DC5FC: addu        $s5, $t7, $t8
    ctx->r21 = ADD32(ctx->r15, ctx->r24);
    // 0x150DC600: lwc1        $f10, 0xC($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0XC);
    // 0x150DC604: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150DC608: lwc1        $f10, 0x4($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X4);
    // 0x150DC60C: swc1        $f16, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f16.u32l;
    // 0x150DC610: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150DC614: lwc1        $f18, 0xC($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0XC);
    // 0x150DC618: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150DC61C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150DC620: swc1        $f8, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->f8.u32l;
    // 0x150DC624: lwc1        $f18, 0x24($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X24);
    // 0x150DC628: lwc1        $f16, 0x4($s5)
    ctx->f16.u32l = MEM_W(ctx->r21, 0X4);
    // 0x150DC62C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x150DC630: nop

    // 0x150DC634: bc1fl       L_150DCD10
    if (!c1cs) {
        // 0x150DC638: lb          $v0, 0x2D($s3)
        ctx->r2 = MEM_B(ctx->r19, 0X2D);
            goto L_150DCD10;
    }
    goto skip_1;
    // 0x150DC638: lb          $v0, 0x2D($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2D);
    skip_1:
    // 0x150DC63C: lwc1        $f4, 0xA0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x150DC640: lwc1        $f10, 0x9C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x150DC644: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150DC648: swc1        $f6, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f6.u32l;
    // 0x150DC64C: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x150DC650: c.lt.s      $f30, $f8
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f30.fl < ctx->f8.fl;
    // 0x150DC654: nop

    // 0x150DC658: bc1fl       L_150DC870
    if (!c1cs) {
        // 0x150DC65C: lwc1        $f4, 0xD0($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0XD0);
            goto L_150DC870;
    }
    goto skip_2;
    // 0x150DC65C: lwc1        $f4, 0xD0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD0);
    skip_2:
L_150DC660:
    // 0x150DC660: jal         0x150ADA68
    // 0x150DC664: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150DC664: nop

    after_0:
    // 0x150DC668: lwc1        $f16, 0xB0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x150DC66C: lwc1        $f4, 0xAC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x150DC670: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150DC674: jal         0x150ADA20
    // 0x150DC678: add.s       $f22, $f18, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f18.fl + ctx->f4.fl;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150DC678: add.s       $f22, $f18, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f18.fl + ctx->f4.fl;
    after_1:
    // 0x150DC67C: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x150DC680: jal         0x151423D8
    // 0x150DC684: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x150DC684: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_2:
    // 0x150DC688: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x150DC68C: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x150DC690: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x150DC694: jal         0x151423D8
    // 0x150DC698: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x150DC698: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_3:
    // 0x150DC69C: jal         0x150ADA20
    // 0x150DC6A0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150DC6A0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x150DC6A4: lh          $t0, 0xAA($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XAA);
    // 0x150DC6A8: lh          $t3, 0xA8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XA8);
    // 0x150DC6AC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x150DC6B0: divu        $zero, $v0, $t1
    lo = S32(U32(ctx->r2) / U32(ctx->r9)); hi = S32(U32(ctx->r2) % U32(ctx->r9));
    // 0x150DC6B4: mfhi        $t2
    ctx->r10 = hi;
    // 0x150DC6B8: addu        $s1, $t2, $t3
    ctx->r17 = ADD32(ctx->r10, ctx->r11);
    // 0x150DC6BC: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x150DC6C0: bne         $t1, $zero, L_150DC6CC
    if (ctx->r9 != 0) {
        // 0x150DC6C4: nop
    
            goto L_150DC6CC;
    }
    // 0x150DC6C4: nop

    // 0x150DC6C8: break       7
    do_break(353224392);
L_150DC6CC:
    // 0x150DC6CC: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x150DC6D0: jal         0x151423D8
    // 0x150DC6D4: andi        $a0, $t4, 0xFF
    ctx->r4 = ctx->r12 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x150DC6D4: andi        $a0, $t4, 0xFF
    ctx->r4 = ctx->r12 & 0XFF;
    after_5:
    // 0x150DC6D8: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x150DC6DC: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x150DC6E0: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x150DC6E4: jal         0x151423D8
    // 0x150DC6E8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x150DC6E8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_6:
    // 0x150DC6EC: jal         0x150ADA68
    // 0x150DC6F0: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150DC6F0: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    after_7:
    // 0x150DC6F4: lwc1        $f10, 0xA4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x150DC6F8: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x150DC6FC: mul.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150DC700: nop

    // 0x150DC704: mul.s       $f8, $f2, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x150DC708: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150DC70C: mul.s       $f10, $f2, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x150DC710: nop

    // 0x150DC714: mul.s       $f12, $f22, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x150DC718: swc1        $f16, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f16.u32l;
    // 0x150DC71C: lwc1        $f18, 0x24($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X24);
    // 0x150DC720: neg.s       $f16, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = -ctx->f22.fl;
    // 0x150DC724: swc1        $f18, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f18.u32l;
    // 0x150DC728: lwc1        $f4, 0x8($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X8);
    // 0x150DC72C: mul.s       $f8, $f12, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x150DC730: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150DC734: mul.s       $f18, $f16, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f28.fl);
    // 0x150DC738: nop

    // 0x150DC73C: mul.s       $f4, $f12, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x150DC740: swc1        $f6, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f6.u32l;
    // 0x150DC744: swc1        $f8, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f8.u32l;
    // 0x150DC748: swc1        $f18, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f18.u32l;
    // 0x150DC74C: jal         0x150ADA68
    // 0x150DC750: swc1        $f4, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150DC750: swc1        $f4, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x150DC754: lbu         $t6, 0x41($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X41);
    // 0x150DC758: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x150DC75C: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    // 0x150DC760: bne         $s6, $t6, L_150DC770
    if (ctx->r22 != ctx->r14) {
        // 0x150DC764: nop
    
            goto L_150DC770;
    }
    // 0x150DC764: nop

    // 0x150DC768: b           L_150DC770
    // 0x150DC76C: addiu       $s2, $zero, 0x7D
    ctx->r18 = ADD32(0, 0X7D);
        goto L_150DC770;
    // 0x150DC76C: addiu       $s2, $zero, 0x7D
    ctx->r18 = ADD32(0, 0X7D);
L_150DC770:
    // 0x150DC770: jal         0x150ADA68
    // 0x150DC774: nop

    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150DC774: nop

    after_9:
    // 0x150DC778: jal         0x150ADA20
    // 0x150DC77C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150DC77C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_10:
    // 0x150DC780: lbu         $t7, 0x41($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X41);
    // 0x150DC784: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x150DC788: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x150DC78C: bne         $s6, $t7, L_150DC79C
    if (ctx->r22 != ctx->r15) {
        // 0x150DC790: nop
    
            goto L_150DC79C;
    }
    // 0x150DC790: nop

    // 0x150DC794: b           L_150DC79C
    // 0x150DC798: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_150DC79C;
    // 0x150DC798: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_150DC79C:
    // 0x150DC79C: lwc1        $f10, 0xC0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x150DC7A0: lwc1        $f8, 0xBC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x150DC7A4: lh          $a3, 0xC4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XC4);
    // 0x150DC7A8: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x150DC7AC: mul.s       $f6, $f22, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x150DC7B0: lwc1        $f18, 0xB8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x150DC7B4: lwc1        $f10, 0xB4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x150DC7B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC7BC: mul.s       $f4, $f20, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x150DC7C0: lwc1        $f0, 0xCF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XCF0);
    // 0x150DC7C4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150DC7C8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150DC7CC: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x150DC7D0: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150DC7D4: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x150DC7D8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x150DC7DC: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150DC7E0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x150DC7E4: addiu       $a1, $sp, 0x174
    ctx->r5 = ADD32(ctx->r29, 0X174);
    // 0x150DC7E8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x150DC7EC: lh          $t8, 0xC8($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XC8);
    // 0x150DC7F0: lh          $t1, 0xC6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XC6);
    // 0x150DC7F4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x150DC7F8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x150DC7FC: divu        $zero, $s1, $t9
    lo = S32(U32(ctx->r17) / U32(ctx->r25)); hi = S32(U32(ctx->r17) % U32(ctx->r25));
    // 0x150DC800: mfhi        $t0
    ctx->r8 = hi;
    // 0x150DC804: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x150DC808: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150DC80C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x150DC810: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x150DC814: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150DC818: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x150DC81C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x150DC820: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x150DC824: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x150DC828: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150DC82C: lbu         $t7, 0xC($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0XC);
    // 0x150DC830: bne         $t9, $zero, L_150DC83C
    if (ctx->r25 != 0) {
        // 0x150DC834: nop
    
            goto L_150DC83C;
    }
    // 0x150DC834: nop

    // 0x150DC838: break       7
    do_break(353224760);
L_150DC83C:
    // 0x150DC83C: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x150DC840: lbu         $t8, 0x1($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X1);
    // 0x150DC844: jal         0x151DA6F8
    // 0x150DC848: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    func_151DA6F8(rdram, ctx);
        goto after_11;
    // 0x150DC848: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    after_11:
    // 0x150DC84C: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x150DC850: sub.s       $f16, $f8, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f30.fl;
    // 0x150DC854: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
    // 0x150DC858: lwc1        $f18, 0xA0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x150DC85C: c.lt.s      $f30, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f30.fl < ctx->f18.fl;
    // 0x150DC860: nop

    // 0x150DC864: bc1t        L_150DC660
    if (c1cs) {
        // 0x150DC868: nop
    
            goto L_150DC660;
    }
    // 0x150DC868: nop

    // 0x150DC86C: lwc1        $f4, 0xD0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD0);
L_150DC870:
    // 0x150DC870: lwc1        $f10, 0xCC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x150DC874: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150DC878: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150DC87C: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150DC880: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150DC884: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150DC888: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x150DC88C: swc1        $f6, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f6.u32l;
    // 0x150DC890: lwc1        $f8, 0xD0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x150DC894: c.lt.s      $f30, $f8
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f30.fl < ctx->f8.fl;
    // 0x150DC898: nop

    // 0x150DC89C: bc1fl       L_150DCB34
    if (!c1cs) {
        // 0x150DC8A0: lwc1        $f16, 0x108($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X108);
            goto L_150DCB34;
    }
    goto skip_3;
    // 0x150DC8A0: lwc1        $f16, 0x108($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X108);
    skip_3:
    // 0x150DC8A4: sb          $zero, 0x134($sp)
    MEM_B(0X134, ctx->r29) = 0;
    // 0x150DC8A8: sb          $zero, 0x136($sp)
    MEM_B(0X136, ctx->r29) = 0;
    // 0x150DC8AC: sb          $zero, 0x135($sp)
    MEM_B(0X135, ctx->r29) = 0;
    // 0x150DC8B0: sb          $t9, 0x144($sp)
    MEM_B(0X144, ctx->r29) = ctx->r25;
    // 0x150DC8B4: sb          $t0, 0x145($sp)
    MEM_B(0X145, ctx->r29) = ctx->r8;
    // 0x150DC8B8: sb          $t1, 0x146($sp)
    MEM_B(0X146, ctx->r29) = ctx->r9;
    // 0x150DC8BC: sb          $zero, 0x148($sp)
    MEM_B(0X148, ctx->r29) = 0;
    // 0x150DC8C0: sb          $zero, 0x149($sp)
    MEM_B(0X149, ctx->r29) = 0;
    // 0x150DC8C4: sb          $zero, 0x14A($sp)
    MEM_B(0X14A, ctx->r29) = 0;
    // 0x150DC8C8: sb          $t2, 0x147($sp)
    MEM_B(0X147, ctx->r29) = ctx->r10;
    // 0x150DC8CC: lb          $t3, 0xFC($s0)
    ctx->r11 = MEM_B(ctx->r16, 0XFC);
    // 0x150DC8D0: sh          $t4, 0x14C($sp)
    MEM_H(0X14C, ctx->r29) = ctx->r12;
    // 0x150DC8D4: sh          $zero, 0x124($sp)
    MEM_H(0X124, ctx->r29) = 0;
    // 0x150DC8D8: sb          $t3, 0x137($sp)
    MEM_B(0X137, ctx->r29) = ctx->r11;
    // 0x150DC8DC: lw          $t5, 0xF8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XF8);
    // 0x150DC8E0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x150DC8E4: sh          $t5, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r13;
    // 0x150DC8E8: lw          $t6, 0xF4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XF4);
    // 0x150DC8EC: sw          $t6, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r14;
    // 0x150DC8F0: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x150DC8F4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150DC8F8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x150DC8FC: nop

    // 0x150DC900: sh          $t8, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r24;
    // 0x150DC904: lh          $t9, 0xE4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE4);
    // 0x150DC908: sh          $t9, 0x140($sp)
    MEM_H(0X140, ctx->r29) = ctx->r25;
L_150DC90C:
    // 0x150DC90C: jal         0x150ADA68
    // 0x150DC910: nop

    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x150DC910: nop

    after_12:
    // 0x150DC914: lwc1        $f4, 0xE0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x150DC918: lwc1        $f6, 0xDC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x150DC91C: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150DC920: jal         0x150ADA20
    // 0x150DC924: add.s       $f22, $f10, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f6.fl;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x150DC924: add.s       $f22, $f10, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f6.fl;
    after_13:
    // 0x150DC928: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x150DC92C: jal         0x151423D8
    // 0x150DC930: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_14;
    // 0x150DC930: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_14:
    // 0x150DC934: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x150DC938: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x150DC93C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x150DC940: jal         0x151423D8
    // 0x150DC944: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_151423D8(rdram, ctx);
        goto after_15;
    // 0x150DC944: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_15:
    // 0x150DC948: jal         0x150ADA20
    // 0x150DC94C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x150DC94C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_16:
    // 0x150DC950: lh          $t1, 0xDA($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XDA);
    // 0x150DC954: lh          $t4, 0xD8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XD8);
    // 0x150DC958: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x150DC95C: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x150DC960: mfhi        $t3
    ctx->r11 = hi;
    // 0x150DC964: addu        $s1, $t3, $t4
    ctx->r17 = ADD32(ctx->r11, ctx->r12);
    // 0x150DC968: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x150DC96C: bne         $t2, $zero, L_150DC978
    if (ctx->r10 != 0) {
        // 0x150DC970: nop
    
            goto L_150DC978;
    }
    // 0x150DC970: nop

    // 0x150DC974: break       7
    do_break(353225076);
L_150DC978:
    // 0x150DC978: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x150DC97C: jal         0x151423D8
    // 0x150DC980: andi        $a0, $t5, 0xFF
    ctx->r4 = ctx->r13 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_17;
    // 0x150DC980: andi        $a0, $t5, 0xFF
    ctx->r4 = ctx->r13 & 0XFF;
    after_17:
    // 0x150DC984: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x150DC988: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150DC98C: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x150DC990: jal         0x151423D8
    // 0x150DC994: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_18;
    // 0x150DC994: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_18:
    // 0x150DC998: jal         0x150ADA68
    // 0x150DC99C: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_19;
    // 0x150DC99C: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    after_19:
    // 0x150DC9A0: lwc1        $f8, 0xD4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x150DC9A4: lwc1        $f16, 0x0($s5)
    ctx->f16.u32l = MEM_W(ctx->r21, 0X0);
    // 0x150DC9A8: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150DC9AC: nop

    // 0x150DC9B0: mul.s       $f18, $f2, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x150DC9B4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150DC9B8: mul.s       $f8, $f2, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x150DC9BC: nop

    // 0x150DC9C0: mul.s       $f12, $f22, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x150DC9C4: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150DC9C8: mul.s       $f4, $f12, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x150DC9CC: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x150DC9D0: nop

    // 0x150DC9D4: sh          $t8, 0x128($sp)
    MEM_H(0X128, ctx->r29) = ctx->r24;
    // 0x150DC9D8: lwc1        $f6, 0x8($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X8);
    // 0x150DC9DC: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150DC9E0: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150DC9E4: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x150DC9E8: neg.s       $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = -ctx->f22.fl;
    // 0x150DC9EC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150DC9F0: mul.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x150DC9F4: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x150DC9F8: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x150DC9FC: mul.s       $f18, $f12, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x150DCA00: sh          $t0, 0x12C($sp)
    MEM_H(0X12C, ctx->r29) = ctx->r8;
    // 0x150DCA04: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150DCA08: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150DCA0C: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x150DCA10: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x150DCA14: sh          $t4, 0x138($sp)
    MEM_H(0X138, ctx->r29) = ctx->r12;
    // 0x150DCA18: jal         0x150ADA20
    // 0x150DCA1C: sh          $t6, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_20;
    // 0x150DCA1C: sh          $t6, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r14;
    after_20:
    // 0x150DCA20: lh          $t7, 0xE8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE8);
    // 0x150DCA24: lh          $t0, 0xE6($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XE6);
    // 0x150DCA28: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x150DCA2C: divu        $zero, $v0, $t8
    lo = S32(U32(ctx->r2) / U32(ctx->r24)); hi = S32(U32(ctx->r2) % U32(ctx->r24));
    // 0x150DCA30: mfhi        $t9
    ctx->r25 = hi;
    // 0x150DCA34: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x150DCA38: bne         $t8, $zero, L_150DCA44
    if (ctx->r24 != 0) {
        // 0x150DCA3C: nop
    
            goto L_150DCA44;
    }
    // 0x150DCA3C: nop

    // 0x150DCA40: break       7
    do_break(353225280);
L_150DCA44:
    // 0x150DCA44: sh          $t1, 0x13A($sp)
    MEM_H(0X13A, ctx->r29) = ctx->r9;
    // 0x150DCA48: jal         0x150ADA20
    // 0x150DCA4C: nop

    func_150ADA20(rdram, ctx);
        goto after_21;
    // 0x150DCA4C: nop

    after_21:
    // 0x150DCA50: lh          $t2, 0xEC($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XEC);
    // 0x150DCA54: lh          $t5, 0xEA($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XEA);
    // 0x150DCA58: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x150DCA5C: divu        $zero, $v0, $t3
    lo = S32(U32(ctx->r2) / U32(ctx->r11)); hi = S32(U32(ctx->r2) % U32(ctx->r11));
    // 0x150DCA60: mfhi        $t4
    ctx->r12 = hi;
    // 0x150DCA64: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150DCA68: bne         $t3, $zero, L_150DCA74
    if (ctx->r11 != 0) {
        // 0x150DCA6C: nop
    
            goto L_150DCA74;
    }
    // 0x150DCA6C: nop

    // 0x150DCA70: break       7
    do_break(353225328);
L_150DCA74:
    // 0x150DCA74: sb          $t6, 0x142($sp)
    MEM_B(0X142, ctx->r29) = ctx->r14;
    // 0x150DCA78: jal         0x150ADA68
    // 0x150DCA7C: nop

    func_150ADA68(rdram, ctx);
        goto after_22;
    // 0x150DCA7C: nop

    after_22:
    // 0x150DCA80: lh          $t7, 0xEE($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XEE);
    // 0x150DCA84: lwc1        $f10, 0xF0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XF0);
    // 0x150DCA88: addiu       $a0, $sp, 0x118
    ctx->r4 = ADD32(ctx->r29, 0X118);
    // 0x150DCA8C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x150DCA90: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150DCA94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150DCA98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150DCA9C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150DCAA0: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150DCAA4: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x150DCAA8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150DCAAC: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x150DCAB0: nop

    // 0x150DCAB4: sh          $t1, 0x13E($sp)
    MEM_H(0X13E, ctx->r29) = ctx->r9;
    // 0x150DCAB8: sh          $t1, 0x13C($sp)
    MEM_H(0X13C, ctx->r29) = ctx->r9;
    // 0x150DCABC: lbu         $t2, 0xC($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0XC);
    // 0x150DCAC0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150DCAC4: lbu         $t3, 0x1($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X1);
    // 0x150DCAC8: jal         0x15167D84
    // 0x150DCACC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_15167D84(rdram, ctx);
        goto after_23;
    // 0x150DCACC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_23:
    // 0x150DCAD0: bnel        $v0, $zero, L_150DCAE0
    if (ctx->r2 != 0) {
        // 0x150DCAD4: lwc1        $f10, 0xD0($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0XD0);
            goto L_150DCAE0;
    }
    goto skip_4;
    // 0x150DCAD4: lwc1        $f10, 0xD0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XD0);
    skip_4:
    // 0x150DCAD8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x150DCADC: lwc1        $f10, 0xD0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XD0);
L_150DCAE0:
    // 0x150DCAE0: sub.s       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f30.fl;
    // 0x150DCAE4: swc1        $f8, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f8.u32l;
    // 0x150DCAE8: lwc1        $f0, 0xD0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x150DCAEC: c.lt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
    // 0x150DCAF0: nop

    // 0x150DCAF4: bc1fl       L_150DCB08
    if (!c1cs) {
        // 0x150DCAF8: c.lt.s      $f30, $f0
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
            goto L_150DCB08;
    }
    goto skip_5;
    // 0x150DCAF8: c.lt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
    skip_5:
    // 0x150DCAFC: bne         $s2, $zero, L_150DC90C
    if (ctx->r18 != 0) {
        // 0x150DCB00: nop
    
            goto L_150DC90C;
    }
    // 0x150DCB00: nop

    // 0x150DCB04: c.lt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
L_150DCB08:
    // 0x150DCB08: nop

    // 0x150DCB0C: bc1fl       L_150DCB34
    if (!c1cs) {
        // 0x150DCB10: lwc1        $f16, 0x108($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X108);
            goto L_150DCB34;
    }
    goto skip_6;
    // 0x150DCB10: lwc1        $f16, 0x108($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X108);
    skip_6:
    // 0x150DCB14: sub.s       $f6, $f0, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f30.fl;
L_150DCB18:
    // 0x150DCB18: swc1        $f6, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f6.u32l;
    // 0x150DCB1C: lwc1        $f0, 0xD0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x150DCB20: c.lt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
    // 0x150DCB24: nop

    // 0x150DCB28: bc1tl       L_150DCB18
    if (c1cs) {
        // 0x150DCB2C: sub.s       $f6, $f0, $f30
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f30.fl;
            goto L_150DCB18;
    }
    goto skip_7;
    // 0x150DCB2C: sub.s       $f6, $f0, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f30.fl;
    skip_7:
    // 0x150DCB30: lwc1        $f16, 0x108($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X108);
L_150DCB34:
    // 0x150DCB34: lwc1        $f18, 0x104($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X104);
    // 0x150DCB38: lui         $t9, 0x3
    ctx->r25 = S32(0X3 << 16);
    // 0x150DCB3C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150DCB40: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150DCB44: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x150DCB48: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150DCB4C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150DCB50: swc1        $f4, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f4.u32l;
    // 0x150DCB54: lwc1        $f10, 0x108($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X108);
    // 0x150DCB58: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150DCB5C: ori         $t9, $t9, 0x1
    ctx->r25 = ctx->r25 | 0X1;
    // 0x150DCB60: c.lt.s      $f30, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl < ctx->f10.fl;
    // 0x150DCB64: nop

    // 0x150DCB68: bc1fl       L_150DCCC0
    if (!c1cs) {
        // 0x150DCB6C: lb          $v0, 0x2D($s3)
        ctx->r2 = MEM_B(ctx->r19, 0X2D);
            goto L_150DCCC0;
    }
    goto skip_8;
    // 0x150DCB6C: lb          $v0, 0x2D($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2D);
    skip_8:
    // 0x150DCB70: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x150DCB74: sw          $zero, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = 0;
    // 0x150DCB78: sw          $zero, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = 0;
    // 0x150DCB7C: sw          $t4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r12;
    // 0x150DCB80: sh          $t5, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r13;
    // 0x150DCB84: sb          $t6, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r14;
    // 0x150DCB88: sb          $t7, 0xDD($sp)
    MEM_B(0XDD, ctx->r29) = ctx->r15;
    // 0x150DCB8C: sb          $zero, 0xDE($sp)
    MEM_B(0XDE, ctx->r29) = 0;
    // 0x150DCB90: sb          $zero, 0xDF($sp)
    MEM_B(0XDF, ctx->r29) = 0;
    // 0x150DCB94: sb          $zero, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = 0;
    // 0x150DCB98: sb          $t8, 0xE1($sp)
    MEM_B(0XE1, ctx->r29) = ctx->r24;
    // 0x150DCB9C: sw          $t9, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r25;
L_150DCBA0:
    // 0x150DCBA0: jal         0x150ADA68
    // 0x150DCBA4: nop

    func_150ADA68(rdram, ctx);
        goto after_24;
    // 0x150DCBA4: nop

    after_24:
    // 0x150DCBA8: lwc1        $f8, 0x110($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X110);
    // 0x150DCBAC: lwc1        $f16, 0x10C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x150DCBB0: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150DCBB4: jal         0x150ADA20
    // 0x150DCBB8: add.s       $f20, $f6, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f16.fl;
    func_150ADA20(rdram, ctx);
        goto after_25;
    // 0x150DCBB8: add.s       $f20, $f6, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f16.fl;
    after_25:
    // 0x150DCBBC: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x150DCBC0: beq         $v1, $zero, L_150DCBDC
    if (ctx->r3 == 0) {
        // 0x150DCBC4: addiu       $t0, $zero, 0x1D
        ctx->r8 = ADD32(0, 0X1D);
            goto L_150DCBDC;
    }
    // 0x150DCBC4: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x150DCBC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150DCBCC: beq         $v1, $at, L_150DCBE4
    if (ctx->r3 == ctx->r1) {
        // 0x150DCBD0: addiu       $t1, $zero, 0x1E
        ctx->r9 = ADD32(0, 0X1E);
            goto L_150DCBE4;
    }
    // 0x150DCBD0: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x150DCBD4: b           L_150DCBE8
    // 0x150DCBD8: nop

        goto L_150DCBE8;
    // 0x150DCBD8: nop

L_150DCBDC:
    // 0x150DCBDC: b           L_150DCBE8
    // 0x150DCBE0: sb          $t0, 0xD2($sp)
    MEM_B(0XD2, ctx->r29) = ctx->r8;
        goto L_150DCBE8;
    // 0x150DCBE0: sb          $t0, 0xD2($sp)
    MEM_B(0XD2, ctx->r29) = ctx->r8;
L_150DCBE4:
    // 0x150DCBE4: sb          $t1, 0xD2($sp)
    MEM_B(0XD2, ctx->r29) = ctx->r9;
L_150DCBE8:
    // 0x150DCBE8: jal         0x150ADA20
    // 0x150DCBEC: nop

    func_150ADA20(rdram, ctx);
        goto after_26;
    // 0x150DCBEC: nop

    after_26:
    // 0x150DCBF0: jal         0x150ADA20
    // 0x150DCBF4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_27;
    // 0x150DCBF4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_27:
    // 0x150DCBF8: jal         0x150ADA20
    // 0x150DCBFC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_28;
    // 0x150DCBFC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_28:
    // 0x150DCC00: lwc1        $f18, 0x0($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X0);
    // 0x150DCC04: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x150DCC08: andi        $t4, $s1, 0x1
    ctx->r12 = ctx->r17 & 0X1;
    // 0x150DCC0C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x150DCC10: lwc1        $f4, 0x100($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X100);
    // 0x150DCC14: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x150DCC18: andi        $t2, $s2, 0xFF
    ctx->r10 = ctx->r18 & 0XFF;
    // 0x150DCC1C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x150DCC20: lwc1        $f10, 0x8($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X8);
    // 0x150DCC24: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150DCC28: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x150DCC2C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150DCC30: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150DCC34: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x150DCC38: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x150DCC3C: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x150DCC40: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x150DCC44: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x150DCC48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150DCC4C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x150DCC50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150DCC54: jal         0x1513C5B0
    // 0x150DCC58: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_1513C5B0(rdram, ctx);
        goto after_29;
    // 0x150DCC58: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_29:
    // 0x150DCC5C: bnel        $v0, $zero, L_150DCC6C
    if (ctx->r2 != 0) {
        // 0x150DCC60: lwc1        $f8, 0x108($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X108);
            goto L_150DCC6C;
    }
    goto skip_9;
    // 0x150DCC60: lwc1        $f8, 0x108($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X108);
    skip_9:
    // 0x150DCC64: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x150DCC68: lwc1        $f8, 0x108($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X108);
L_150DCC6C:
    // 0x150DCC6C: sub.s       $f6, $f8, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f30.fl;
    // 0x150DCC70: swc1        $f6, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f6.u32l;
    // 0x150DCC74: lwc1        $f0, 0x108($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X108);
    // 0x150DCC78: c.lt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
    // 0x150DCC7C: nop

    // 0x150DCC80: bc1fl       L_150DCC94
    if (!c1cs) {
        // 0x150DCC84: c.lt.s      $f30, $f0
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
            goto L_150DCC94;
    }
    goto skip_10;
    // 0x150DCC84: c.lt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
    skip_10:
    // 0x150DCC88: bne         $s4, $zero, L_150DCBA0
    if (ctx->r20 != 0) {
        // 0x150DCC8C: nop
    
            goto L_150DCBA0;
    }
    // 0x150DCC8C: nop

    // 0x150DCC90: c.lt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
L_150DCC94:
    // 0x150DCC94: nop

    // 0x150DCC98: bc1fl       L_150DCCC0
    if (!c1cs) {
        // 0x150DCC9C: lb          $v0, 0x2D($s3)
        ctx->r2 = MEM_B(ctx->r19, 0X2D);
            goto L_150DCCC0;
    }
    goto skip_11;
    // 0x150DCC9C: lb          $v0, 0x2D($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2D);
    skip_11:
    // 0x150DCCA0: sub.s       $f16, $f0, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f30.fl;
L_150DCCA4:
    // 0x150DCCA4: swc1        $f16, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f16.u32l;
    // 0x150DCCA8: lwc1        $f0, 0x108($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X108);
    // 0x150DCCAC: c.lt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f30.fl < ctx->f0.fl;
    // 0x150DCCB0: nop

    // 0x150DCCB4: bc1tl       L_150DCCA4
    if (c1cs) {
        // 0x150DCCB8: sub.s       $f16, $f0, $f30
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f30.fl;
            goto L_150DCCA4;
    }
    goto skip_12;
    // 0x150DCCB8: sub.s       $f16, $f0, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f30.fl;
    skip_12:
    // 0x150DCCBC: lb          $v0, 0x2D($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2D);
L_150DCCC0:
    // 0x150DCCC0: beq         $s7, $v0, L_150DCCF4
    if (ctx->r23 == ctx->r2) {
        // 0x150DCCC4: addiu       $t7, $v0, 0x1
        ctx->r15 = ADD32(ctx->r2, 0X1);
            goto L_150DCCF4;
    }
L_150DCCC4:
    // 0x150DCCC4: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x150DCCC8: sb          $t7, 0x2D($s3)
    MEM_B(0X2D, ctx->r19) = ctx->r15;
    // 0x150DCCCC: lb          $v0, 0x2D($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2D);
    // 0x150DCCD0: lbu         $t8, 0x25($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X25);
    // 0x150DCCD4: bnel        $t8, $v0, L_150DCCE8
    if (ctx->r24 != ctx->r2) {
        // 0x150DCCD8: lb          $t9, 0x2C($s3)
        ctx->r25 = MEM_B(ctx->r19, 0X2C);
            goto L_150DCCE8;
    }
    goto skip_13;
    // 0x150DCCD8: lb          $t9, 0x2C($s3)
    ctx->r25 = MEM_B(ctx->r19, 0X2C);
    skip_13:
    // 0x150DCCDC: sb          $zero, 0x2D($s3)
    MEM_B(0X2D, ctx->r19) = 0;
    // 0x150DCCE0: lb          $v0, 0x2D($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2D);
    // 0x150DCCE4: lb          $t9, 0x2C($s3)
    ctx->r25 = MEM_B(ctx->r19, 0X2C);
L_150DCCE8:
    // 0x150DCCE8: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x150DCCEC: bne         $s7, $v0, L_150DCCC4
    if (ctx->r23 != ctx->r2) {
        // 0x150DCCF0: sb          $t0, 0x2C($s3)
        MEM_B(0X2C, ctx->r19) = ctx->r8;
            goto L_150DCCC4;
    }
    // 0x150DCCF0: sb          $t0, 0x2C($s3)
    MEM_B(0X2C, ctx->r19) = ctx->r8;
L_150DCCF4:
    // 0x150DCCF4: multu       $v0, $s6
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DCCF8: lw          $t1, 0x190($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X190);
    // 0x150DCCFC: lwc1        $f18, 0x24($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X24);
    // 0x150DCD00: mflo        $t2
    ctx->r10 = lo;
    // 0x150DCD04: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x150DCD08: swc1        $f18, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f18.u32l;
    // 0x150DCD0C: lb          $v0, 0x2D($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2D);
L_150DCD10:
    // 0x150DCD10: bnel        $s7, $v0, L_150DC5D0
    if (ctx->r23 != ctx->r2) {
        // 0x150DCD14: addiu       $s7, $s7, -0x1
        ctx->r23 = ADD32(ctx->r23, -0X1);
            goto L_150DC5D0;
    }
    goto skip_14;
    // 0x150DCD14: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
    skip_14:
    // 0x150DCD18: addiu       $s6, $zero, 0x18
    ctx->r22 = ADD32(0, 0X18);
L_150DCD1C:
    // 0x150DCD1C: multu       $v0, $s6
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DCD20: lw          $t4, 0x190($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X190);
    // 0x150DCD24: addiu       $s7, $v0, 0x1
    ctx->r23 = ADD32(ctx->r2, 0X1);
    // 0x150DCD28: addiu       $t2, $zero, 0x7F
    ctx->r10 = ADD32(0, 0X7F);
    // 0x150DCD2C: mflo        $t5
    ctx->r13 = lo;
    // 0x150DCD30: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150DCD34: sh          $zero, 0x14($t6)
    MEM_H(0X14, ctx->r14) = 0;
    // 0x150DCD38: lbu         $t7, 0x25($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X25);
    // 0x150DCD3C: addiu       $t4, $zero, 0xBE
    ctx->r12 = ADD32(0, 0XBE);
    // 0x150DCD40: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150DCD44: bne         $s7, $t7, L_150DCD50
    if (ctx->r23 != ctx->r15) {
        // 0x150DCD48: nop
    
            goto L_150DCD50;
    }
    // 0x150DCD48: nop

    // 0x150DCD4C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_150DCD50:
    // 0x150DCD50: multu       $s7, $s6
    result = U64(U32(ctx->r23)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DCD54: lw          $t8, 0x190($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X190);
    // 0x150DCD58: addiu       $t0, $zero, 0x3F
    ctx->r8 = ADD32(0, 0X3F);
    // 0x150DCD5C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x150DCD60: mflo        $t9
    ctx->r25 = lo;
    // 0x150DCD64: addu        $s5, $t8, $t9
    ctx->r21 = ADD32(ctx->r24, ctx->r25);
    // 0x150DCD68: sh          $t0, 0x14($s5)
    MEM_H(0X14, ctx->r21) = ctx->r8;
    // 0x150DCD6C: lbu         $t1, 0x25($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X25);
    // 0x150DCD70: addiu       $s5, $s5, 0x18
    ctx->r21 = ADD32(ctx->r21, 0X18);
    // 0x150DCD74: bnel        $s7, $t1, L_150DCD88
    if (ctx->r23 != ctx->r9) {
        // 0x150DCD78: sh          $t2, 0x14($s5)
        MEM_H(0X14, ctx->r21) = ctx->r10;
            goto L_150DCD88;
    }
    goto skip_15;
    // 0x150DCD78: sh          $t2, 0x14($s5)
    MEM_H(0X14, ctx->r21) = ctx->r10;
    skip_15:
    // 0x150DCD7C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x150DCD80: lw          $s5, 0x190($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X190);
    // 0x150DCD84: sh          $t2, 0x14($s5)
    MEM_H(0X14, ctx->r21) = ctx->r10;
L_150DCD88:
    // 0x150DCD88: lbu         $t3, 0x25($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X25);
    // 0x150DCD8C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x150DCD90: addiu       $s5, $s5, 0x18
    ctx->r21 = ADD32(ctx->r21, 0X18);
    // 0x150DCD94: bnel        $s7, $t3, L_150DCDA4
    if (ctx->r23 != ctx->r11) {
        // 0x150DCD98: sh          $t4, 0x14($s5)
        MEM_H(0X14, ctx->r21) = ctx->r12;
            goto L_150DCDA4;
    }
    goto skip_16;
    // 0x150DCD98: sh          $t4, 0x14($s5)
    MEM_H(0X14, ctx->r21) = ctx->r12;
    skip_16:
    // 0x150DCD9C: lw          $s5, 0x190($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X190);
    // 0x150DCDA0: sh          $t4, 0x14($s5)
    MEM_H(0X14, ctx->r21) = ctx->r12;
L_150DCDA4:
    // 0x150DCDA4: lh          $t5, 0x116($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X116);
    // 0x150DCDA8: beql        $t5, $zero, L_150DCE08
    if (ctx->r13 == 0) {
        // 0x150DCDAC: lb          $t9, 0x2C($s3)
        ctx->r25 = MEM_B(ctx->r19, 0X2C);
            goto L_150DCE08;
    }
    goto skip_17;
    // 0x150DCDAC: lb          $t9, 0x2C($s3)
    ctx->r25 = MEM_B(ctx->r19, 0X2C);
    skip_17:
    // 0x150DCDB0: lbu         $v1, 0x114($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X114);
    // 0x150DCDB4: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x150DCDB8: subu        $v1, $v1, $t6
    ctx->r3 = SUB32(ctx->r3, ctx->r14);
    // 0x150DCDBC: bgtzl       $v1, L_150DCE04
    if (SIGNED(ctx->r3) > 0) {
        // 0x150DCDC0: sb          $v1, 0x114($s0)
        MEM_B(0X114, ctx->r16) = ctx->r3;
            goto L_150DCE04;
    }
    goto skip_18;
    // 0x150DCDC0: sb          $v1, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r3;
    skip_18:
    // 0x150DCDC4: jal         0x150ADA20
    // 0x150DCDC8: nop

    func_150ADA20(rdram, ctx);
        goto after_30;
    // 0x150DCDC8: nop

    after_30:
    // 0x150DCDCC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x150DCDD0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150DCDD4: lh          $t8, 0x116($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X116);
    // 0x150DCDD8: mfhi        $t7
    ctx->r15 = hi;
    // 0x150DCDDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150DCDE0: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x150DCDE4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x150DCDE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150DCDEC: jal         0x10010F30
    // 0x150DCDF0: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_10010F30(rdram, ctx);
        goto after_31;
    // 0x150DCDF0: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_31:
    // 0x150DCDF4: jal         0x150ADA20
    // 0x150DCDF8: nop

    func_150ADA20(rdram, ctx);
        goto after_32;
    // 0x150DCDF8: nop

    after_32:
    // 0x150DCDFC: andi        $v1, $v0, 0xC
    ctx->r3 = ctx->r2 & 0XC;
    // 0x150DCE00: sb          $v1, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r3;
L_150DCE04:
    // 0x150DCE04: lb          $t9, 0x2C($s3)
    ctx->r25 = MEM_B(ctx->r19, 0X2C);
L_150DCE08:
    // 0x150DCE08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150DCE0C: blezl       $t9, L_150DCE48
    if (SIGNED(ctx->r25) <= 0) {
        // 0x150DCE10: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_150DCE48;
    }
    goto skip_19;
    // 0x150DCE10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_19:
    // 0x150DCE14: lb          $t1, 0x2D($s3)
    ctx->r9 = MEM_B(ctx->r19, 0X2D);
    // 0x150DCE18: lw          $t0, 0x190($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X190);
    // 0x150DCE1C: multu       $t1, $s6
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DCE20: mflo        $t2
    ctx->r10 = lo;
    // 0x150DCE24: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x150DCE28: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x150DCE2C: sw          $at, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r1;
    // 0x150DCE30: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x150DCE34: sw          $t5, 0x58($s3)
    MEM_W(0X58, ctx->r19) = ctx->r13;
    // 0x150DCE38: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x150DCE3C: b           L_150DCE58
    // 0x150DCE40: sw          $at, 0x5C($s3)
    MEM_W(0X5C, ctx->r19) = ctx->r1;
        goto L_150DCE58;
    // 0x150DCE40: sw          $at, 0x5C($s3)
    MEM_W(0X5C, ctx->r19) = ctx->r1;
    // 0x150DCE44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_150DCE48:
    // 0x150DCE48: nop

    // 0x150DCE4C: swc1        $f0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->f0.u32l;
    // 0x150DCE50: swc1        $f0, 0x58($s3)
    MEM_W(0X58, ctx->r19) = ctx->f0.u32l;
    // 0x150DCE54: swc1        $f0, 0x5C($s3)
    MEM_W(0X5C, ctx->r19) = ctx->f0.u32l;
L_150DCE58:
    // 0x150DCE58: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x150DCE5C: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x150DCE60: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x150DCE64: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x150DCE68: ldc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X68);
    // 0x150DCE6C: ldc1        $f28, 0x70($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X70);
    // 0x150DCE70: ldc1        $f30, 0x78($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X78);
    // 0x150DCE74: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x150DCE78: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x150DCE7C: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x150DCE80: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x150DCE84: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x150DCE88: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x150DCE8C: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x150DCE90: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x150DCE94: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x150DCE98: jr          $ra
    // 0x150DCE9C: addiu       $sp, $sp, 0x198
    ctx->r29 = ADD32(ctx->r29, 0X198);
    return;
    return;
    // 0x150DCE9C: addiu       $sp, $sp, 0x198
    ctx->r29 = ADD32(ctx->r29, 0X198);
;}
RECOMP_FUNC void func_1500A990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500A990: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x1500A994: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x1500A998: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1500A99C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1500A9A0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x1500A9A4: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x1500A9A8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x1500A9AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500A9B0: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x1500A9B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500A9B8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1500A9BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500A9C0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1500A9C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1500A9C8: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x1500A9CC: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x1500A9D0: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x1500A9D4: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x1500A9D8: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x1500A9DC: jal         0x10024770
    // 0x1500A9E0: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x1500A9E0: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x1500A9E4: jal         0x150ADA20
    // 0x1500A9E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1500A9E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x1500A9EC: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500A9F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500A9F4: mflo        $t6
    ctx->r14 = lo;
    // 0x1500A9F8: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x1500A9FC: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x1500AA00: bgez        $t7, L_1500AA14
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1500AA04: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1500AA14;
    }
    // 0x1500AA04: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1500AA08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500AA0C: nop

    // 0x1500AA10: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_1500AA14:
    // 0x1500AA14: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500AA18: lwc1        $f6, 0x5BB8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5BB8);
    // 0x1500AA1C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500AA20: lwc1        $f10, 0x5BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5BBC);
    // 0x1500AA24: mul.s       $f0, $f18, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1500AA28: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x1500AA2C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1500AA30: jal         0x10024770
    // 0x1500AA34: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_2;
    // 0x1500AA34: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x1500AA38: jal         0x150ADA20
    // 0x1500AA3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1500AA3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_3:
    // 0x1500AA40: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500AA44: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500AA48: mflo        $t8
    ctx->r24 = lo;
    // 0x1500AA4C: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x1500AA50: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1500AA54: bgez        $t9, L_1500AA68
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1500AA58: cvt.s.w     $f18, $f4
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1500AA68;
    }
    // 0x1500AA58: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500AA5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500AA60: nop

    // 0x1500AA64: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
L_1500AA68:
    // 0x1500AA68: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500AA6C: lwc1        $f8, 0x5BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5BC0);
    // 0x1500AA70: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500AA74: lwc1        $f16, 0x5BC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5BC4);
    // 0x1500AA78: mul.s       $f0, $f18, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x1500AA7C: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x1500AA80: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1500AA84: jal         0x10024770
    // 0x1500AA88: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_4;
    // 0x1500AA88: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x1500AA8C: jal         0x150ADA20
    // 0x1500AA90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1500AA90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_5:
    // 0x1500AA94: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500AA98: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500AA9C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1500AAA0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x1500AAA4: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    // 0x1500AAA8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1500AAAC: addiu       $t2, $zero, 0x30
    ctx->r10 = ADD32(0, 0X30);
    // 0x1500AAB0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1500AAB4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1500AAB8: mflo        $t0
    ctx->r8 = lo;
    // 0x1500AABC: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x1500AAC0: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x1500AAC4: bgez        $t1, L_1500AAD8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1500AAC8: cvt.s.w     $f18, $f6
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1500AAD8;
    }
    // 0x1500AAC8: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500AACC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500AAD0: nop

    // 0x1500AAD4: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
L_1500AAD8:
    // 0x1500AAD8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500AADC: lwc1        $f10, 0x5BC8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5BC8);
    // 0x1500AAE0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500AAE4: lwc1        $f4, 0x5BCC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5BCC);
    // 0x1500AAE8: mul.s       $f0, $f18, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x1500AAEC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500AAF0: lwc1        $f8, 0x5BD0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5BD0);
    // 0x1500AAF4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500AAF8: lwc1        $f18, 0x5BD4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5BD4);
    // 0x1500AAFC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500AB00: lwc1        $f10, 0x5BD8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5BD8);
    // 0x1500AB04: add.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x1500AB08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500AB0C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1500AB10: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1500AB14: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x1500AB18: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x1500AB1C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x1500AB20: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x1500AB24: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x1500AB28: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x1500AB2C: jal         0x15149130
    // 0x1500AB30: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    func_15149130(rdram, ctx);
        goto after_6;
    // 0x1500AB30: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x1500AB34: beq         $v0, $zero, L_1500AB48
    if (ctx->r2 == 0) {
        // 0x1500AB38: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1500AB48;
    }
    // 0x1500AB38: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1500AB3C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x1500AB40: jal         0x10022EC0
    // 0x1500AB44: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x1500AB44: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_7:
L_1500AB48:
    // 0x1500AB48: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1500AB4C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x1500AB50: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x1500AB54: jr          $ra
    // 0x1500AB58: nop

    return;
    return;
    // 0x1500AB58: nop

;}
RECOMP_FUNC void func_1518A2E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518A2E8: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x1518A2EC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1518A2F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518A2F4: lbu         $t7, 0x6A($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6A);
    // 0x1518A2F8: beql        $t7, $zero, L_1518A31C
    if (ctx->r15 == 0) {
        // 0x1518A2FC: sb          $t0, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r8;
            goto L_1518A31C;
    }
    goto skip_0;
    // 0x1518A2FC: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
    skip_0:
    // 0x1518A300: lw          $t8, 0x58($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X58);
    // 0x1518A304: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x1518A308: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x1518A30C: sw          $t9, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r25;
    // 0x1518A310: b           L_1518A31C
    // 0x1518A314: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
        goto L_1518A31C;
    // 0x1518A314: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x1518A318: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
L_1518A31C:
    // 0x1518A31C: jr          $ra
    // 0x1518A320: nop

    return;
    return;
    // 0x1518A320: nop

;}
RECOMP_FUNC void func_150106A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150106A0: jr          $ra
    // 0x150106A4: nop

    return;
    return;
    // 0x150106A4: nop

;}
RECOMP_FUNC void func_151A0C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A0C0C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x151A0C10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151A0C14: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x151A0C18: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x151A0C1C: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x151A0C20: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x151A0C24: jal         0x150ADA20
    // 0x151A0C28: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151A0C28: nop

    after_0:
    // 0x151A0C2C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151A0C30: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151A0C34: mfhi        $v1
    ctx->r3 = hi;
    // 0x151A0C38: addiu       $t6, $v1, -0x3F
    ctx->r14 = ADD32(ctx->r3, -0X3F);
    // 0x151A0C3C: sh          $t6, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r14;
    // 0x151A0C40: jal         0x151423D8
    // 0x151A0C44: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x151A0C44: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    after_1:
    // 0x151A0C48: lh          $a0, 0x46($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X46);
    // 0x151A0C4C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x151A0C50: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151A0C54: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x151A0C58: jal         0x151423D8
    // 0x151A0C5C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x151A0C5C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x151A0C60: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x151A0C64: jal         0x151423D8
    // 0x151A0C68: lbu         $a0, 0xA3($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XA3);
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x151A0C68: lbu         $a0, 0xA3($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XA3);
    after_3:
    // 0x151A0C6C: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x151A0C70: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x151A0C74: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151A0C78: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x151A0C7C: jal         0x151423D8
    // 0x151A0C80: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x151A0C80: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_4:
    // 0x151A0C84: jal         0x150ADA68
    // 0x151A0C88: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x151A0C88: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x151A0C8C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A0C90: lwc1        $f4, -0x72EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X72EC);
    // 0x151A0C94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A0C98: lwc1        $f8, -0x72E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X72E8);
    // 0x151A0C9C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151A0CA0: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151A0CA4: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151A0CA8: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151A0CAC: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151A0CB0: mul.s       $f12, $f2, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x151A0CB4: neg.s       $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = -ctx->f2.fl;
    // 0x151A0CB8: mul.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x151A0CBC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151A0CC0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151A0CC4: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x151A0CC8: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x151A0CCC: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x151A0CD0: sh          $t1, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r9;
    // 0x151A0CD4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A0CD8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A0CDC: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x151A0CE0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x151A0CE4: sh          $t3, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r11;
    // 0x151A0CE8: jal         0x150ADA20
    // 0x151A0CEC: sh          $t5, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151A0CEC: sh          $t5, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r13;
    after_6:
    // 0x151A0CF0: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x151A0CF4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151A0CF8: mfhi        $t6
    ctx->r14 = hi;
    // 0x151A0CFC: addiu       $t7, $t6, -0x82
    ctx->r15 = ADD32(ctx->r14, -0X82);
    // 0x151A0D00: jal         0x150ADA20
    // 0x151A0D04: sh          $t7, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151A0D04: sh          $t7, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r15;
    after_7:
    // 0x151A0D08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151A0D0C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151A0D10: mfhi        $t8
    ctx->r24 = hi;
    // 0x151A0D14: addiu       $t9, $t8, 0x6
    ctx->r25 = ADD32(ctx->r24, 0X6);
    // 0x151A0D18: jal         0x150ADA20
    // 0x151A0D1C: sb          $t9, 0x72($sp)
    MEM_B(0X72, ctx->r29) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151A0D1C: sb          $t9, 0x72($sp)
    MEM_B(0X72, ctx->r29) = ctx->r25;
    after_8:
    // 0x151A0D20: addiu       $at, $zero, 0x1C3
    ctx->r1 = ADD32(0, 0X1C3);
    // 0x151A0D24: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151A0D28: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151A0D2C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x151A0D30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151A0D34: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x151A0D38: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x151A0D3C: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x151A0D40: lw          $a2, 0xAC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XAC);
    // 0x151A0D44: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x151A0D48: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151A0D4C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A0D50: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151A0D54: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x151A0D58: lbu         $a0, -0x730($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X730);
    // 0x151A0D5C: mfhi        $a1
    ctx->r5 = hi;
    // 0x151A0D60: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151A0D64: addiu       $t0, $a1, 0xFA
    ctx->r8 = ADD32(ctx->r5, 0XFA);
    // 0x151A0D68: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x151A0D6C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151A0D70: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x151A0D74: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x151A0D78: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151A0D7C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x151A0D80: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151A0D84: sh          $a1, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r5;
    // 0x151A0D88: sb          $zero, 0x78($sp)
    MEM_B(0X78, ctx->r29) = 0;
    // 0x151A0D8C: sb          $zero, 0x79($sp)
    MEM_B(0X79, ctx->r29) = 0;
    // 0x151A0D90: sb          $zero, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = 0;
    // 0x151A0D94: sb          $t0, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r8;
    // 0x151A0D98: sb          $t1, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r9;
    // 0x151A0D9C: sh          $zero, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = 0;
    // 0x151A0DA0: sh          $zero, 0x54($sp)
    MEM_H(0X54, ctx->r29) = 0;
    // 0x151A0DA4: sh          $zero, 0x56($sp)
    MEM_H(0X56, ctx->r29) = 0;
    // 0x151A0DA8: sh          $a1, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r5;
    // 0x151A0DAC: sh          $t3, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r11;
    // 0x151A0DB0: sb          $a0, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r4;
    // 0x151A0DB4: sb          $a0, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r4;
    // 0x151A0DB8: sb          $a0, 0x76($sp)
    MEM_B(0X76, ctx->r29) = ctx->r4;
    // 0x151A0DBC: sh          $t5, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r13;
    // 0x151A0DC0: sh          $t7, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r15;
    // 0x151A0DC4: sb          $t9, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r25;
    // 0x151A0DC8: sb          $t9, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r25;
    // 0x151A0DCC: beq         $a2, $zero, L_151A0DE8
    if (ctx->r6 == 0) {
        // 0x151A0DD0: sb          $t9, 0x66($sp)
        MEM_B(0X66, ctx->r29) = ctx->r25;
            goto L_151A0DE8;
    }
    // 0x151A0DD0: sb          $t9, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r25;
    // 0x151A0DD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151A0DD8: beq         $a2, $at, L_151A0DF8
    if (ctx->r6 == ctx->r1) {
        // 0x151A0DDC: lui         $t3, 0x8009
        ctx->r11 = S32(0X8009 << 16);
            goto L_151A0DF8;
    }
    // 0x151A0DDC: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151A0DE0: b           L_151A0E04
    // 0x151A0DE4: lbu         $t5, 0xBB($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBB);
        goto L_151A0E04;
    // 0x151A0DE4: lbu         $t5, 0xBB($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBB);
L_151A0DE8:
    // 0x151A0DE8: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151A0DEC: addiu       $t2, $t2, 0x18A0
    ctx->r10 = ADD32(ctx->r10, 0X18A0);
    // 0x151A0DF0: b           L_151A0E00
    // 0x151A0DF4: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
        goto L_151A0E00;
    // 0x151A0DF4: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
L_151A0DF8:
    // 0x151A0DF8: addiu       $t3, $t3, 0x187C
    ctx->r11 = ADD32(ctx->r11, 0X187C);
    // 0x151A0DFC: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
L_151A0E00:
    // 0x151A0E00: lbu         $t5, 0xBB($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBB);
L_151A0E04:
    // 0x151A0E04: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x151A0E08: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151A0E0C: sh          $t4, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r12;
    // 0x151A0E10: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151A0E14: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x151A0E18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A0E1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151A0E20: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151A0E24: jal         0x15167D84
    // 0x151A0E28: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_15167D84(rdram, ctx);
        goto after_9;
    // 0x151A0E28: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_9:
    // 0x151A0E2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151A0E30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151A0E34: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x151A0E38: jr          $ra
    // 0x151A0E3C: nop

    return;
    return;
    // 0x151A0E3C: nop

;}
RECOMP_FUNC void func_15154884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15154884: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x15154888: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1515488C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15154890: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15154894: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x15154898: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1515489C: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x151548A0: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    // 0x151548A4: c.le.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl <= ctx->f20.fl;
    // 0x151548A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151548AC: bc1fl       L_151548C0
    if (!c1cs) {
        // 0x151548B0: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_151548C0;
    }
    goto skip_0;
    // 0x151548B0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x151548B4: b           L_15154A74
    // 0x151548B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15154A74;
    // 0x151548B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151548BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_151548C0:
    // 0x151548C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151548C4: lwc1        $f6, 0x601C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X601C);
    // 0x151548C8: lwc1        $f4, 0xCC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151548CC: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x151548D0: div.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151548D4: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x151548D8: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x151548DC: swc1        $f20, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f20.u32l;
    // 0x151548E0: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
    // 0x151548E4: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x151548E8: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x151548EC: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x151548F0: jal         0x150ADA68
    // 0x151548F4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151548F4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x151548F8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x151548FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15154900: nop

    // 0x15154904: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15154908: jal         0x150ADA68
    // 0x1515490C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x1515490C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x15154910: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15154914: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15154918: nop

    // 0x1515491C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15154920: jal         0x150ADA68
    // 0x15154924: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x15154924: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x15154928: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1515492C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15154930: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15154934: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15154938: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x1515493C: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x15154940: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15154944: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x15154948: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x1515494C: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x15154950: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x15154954: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x15154958: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1515495C: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x15154960: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x15154964: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x15154968: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1515496C: swc1        $f20, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f20.u32l;
    // 0x15154970: swc1        $f20, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f20.u32l;
    // 0x15154974: jal         0x150ADA68
    // 0x15154978: swc1        $f20, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f20.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x15154978: swc1        $f20, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f20.u32l;
    after_3:
    // 0x1515497C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15154980: lwc1        $f10, 0x6020($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6020);
    // 0x15154984: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15154988: lwc1        $f18, 0x6024($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6024);
    // 0x1515498C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15154990: swc1        $f20, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f20.u32l;
    // 0x15154994: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15154998: jal         0x150ADA68
    // 0x1515499C: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x1515499C: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x151549A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151549A4: lwc1        $f6, 0x6028($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6028);
    // 0x151549A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151549AC: lwc1        $f10, 0x602C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X602C);
    // 0x151549B0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151549B4: lbu         $t7, 0xD3($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XD3);
    // 0x151549B8: lw          $t0, 0xD4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD4);
    // 0x151549BC: addiu       $t1, $zero, 0x140
    ctx->r9 = ADD32(0, 0X140);
    // 0x151549C0: addiu       $t2, $zero, 0x55
    ctx->r10 = ADD32(0, 0X55);
    // 0x151549C4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151549C8: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x151549CC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151549D0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x151549D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151549D8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151549DC: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x151549E0: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x151549E4: swc1        $f20, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f20.u32l;
    // 0x151549E8: sw          $t1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r9;
    // 0x151549EC: sh          $t2, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r10;
    // 0x151549F0: sb          $zero, 0x98($sp)
    MEM_B(0X98, ctx->r29) = 0;
    // 0x151549F4: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x151549F8: sb          $t3, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r11;
    // 0x151549FC: sb          $t4, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r12;
    // 0x15154A00: sb          $zero, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = 0;
    // 0x15154A04: sb          $zero, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = 0;
    // 0x15154A08: sb          $zero, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = 0;
    // 0x15154A0C: sb          $zero, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = 0;
    // 0x15154A10: sb          $zero, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = 0;
    // 0x15154A14: sb          $zero, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = 0;
    // 0x15154A18: sb          $t5, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r13;
    // 0x15154A1C: sb          $zero, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = 0;
    // 0x15154A20: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x15154A24: sb          $zero, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = 0;
    // 0x15154A28: sh          $t9, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r25;
    // 0x15154A2C: sh          $t8, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r24;
    // 0x15154A30: sh          $t6, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r14;
    // 0x15154A34: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x15154A38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15154A3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15154A40: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x15154A44: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15154A48: jal         0x15132A4C
    // 0x15154A4C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_15132A4C(rdram, ctx);
        goto after_5;
    // 0x15154A4C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_5:
    // 0x15154A50: beq         $v0, $zero, L_15154A70
    if (ctx->r2 == 0) {
        // 0x15154A54: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15154A70;
    }
    // 0x15154A54: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15154A58: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x15154A5C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x15154A60: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x15154A64: jal         0x10022EC0
    // 0x15154A68: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x15154A68: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
    after_6:
    // 0x15154A6C: lw          $v1, 0xBC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XBC);
L_15154A70:
    // 0x15154A70: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15154A74:
    // 0x15154A74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15154A78: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15154A7C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x15154A80: jr          $ra
    // 0x15154A84: nop

    return;
    return;
    // 0x15154A84: nop

;}
RECOMP_FUNC void func_15072DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072DD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15072DDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15072DE0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15072DE4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15072DE8: lw          $a1, 0x1580($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1580);
    // 0x15072DEC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15072DF0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x15072DF4: jal         0x15083568
    // 0x15072DF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15083568(rdram, ctx);
        goto after_0;
    // 0x15072DF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x15072DFC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15072E00: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x15072E04: lw          $v0, 0x31C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X31C);
    // 0x15072E08: beql        $v0, $zero, L_15072E2C
    if (ctx->r2 == 0) {
        // 0x15072E0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15072E2C;
    }
    goto skip_0;
    // 0x15072E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15072E10: lbu         $t7, 0x11A($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X11A);
    // 0x15072E14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15072E18: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x15072E1C: bnel        $t7, $at, L_15072E2C
    if (ctx->r15 != ctx->r1) {
        // 0x15072E20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15072E2C;
    }
    goto skip_1;
    // 0x15072E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15072E24: sb          $t8, 0x11A($v0)
    MEM_B(0X11A, ctx->r2) = ctx->r24;
    // 0x15072E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15072E2C:
    // 0x15072E2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15072E30: jr          $ra
    // 0x15072E34: nop

    return;
    return;
    // 0x15072E34: nop

;}
RECOMP_FUNC void func_15121C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15121C80: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15121C84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15121C88: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15121C8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15121C90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15121C94: lw          $a1, 0x5F0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5F0);
    // 0x15121C98: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15121C9C: andi        $t6, $a1, 0x10
    ctx->r14 = ctx->r5 & 0X10;
    // 0x15121CA0: sltu        $a1, $zero, $t6
    ctx->r5 = 0 < ctx->r14 ? 1 : 0;
    // 0x15121CA4: beq         $a1, $zero, L_15121CBC
    if (ctx->r5 == 0) {
        // 0x15121CA8: nop
    
            goto L_15121CBC;
    }
    // 0x15121CA8: nop

    // 0x15121CAC: lw          $t8, 0x36C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X36C);
    // 0x15121CB0: lhu         $a1, 0x0($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X0);
    // 0x15121CB4: andi        $t9, $a1, 0x10
    ctx->r25 = ctx->r5 & 0X10;
    // 0x15121CB8: sltu        $a1, $zero, $t9
    ctx->r5 = 0 < ctx->r25 ? 1 : 0;
L_15121CBC:
    // 0x15121CBC: bnel        $a1, $zero, L_15121E04
    if (ctx->r5 != 0) {
        // 0x15121CC0: lw          $t5, 0x698($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X698);
            goto L_15121E04;
    }
    goto skip_0;
    // 0x15121CC0: lw          $t5, 0x698($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X698);
    skip_0:
    // 0x15121CC4: lbu         $v1, -0x19EA($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X19EA);
    // 0x15121CC8: bnel        $v1, $zero, L_15121CEC
    if (ctx->r3 != 0) {
        // 0x15121CCC: lw          $t1, 0x3D4($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X3D4);
            goto L_15121CEC;
    }
    goto skip_1;
    // 0x15121CCC: lw          $t1, 0x3D4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3D4);
    skip_1:
    // 0x15121CD0: lbu         $v0, 0x23E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X23E);
    // 0x15121CD4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x15121CD8: beq         $v0, $at, L_15121CE8
    if (ctx->r2 == ctx->r1) {
        // 0x15121CDC: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_15121CE8;
    }
    // 0x15121CDC: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x15121CE0: bnel        $v0, $at, L_15121E04
    if (ctx->r2 != ctx->r1) {
        // 0x15121CE4: lw          $t5, 0x698($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X698);
            goto L_15121E04;
    }
    goto skip_2;
    // 0x15121CE4: lw          $t5, 0x698($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X698);
    skip_2:
L_15121CE8:
    // 0x15121CE8: lw          $t1, 0x3D4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3D4);
L_15121CEC:
    // 0x15121CEC: lbu         $t2, 0x1B3($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X1B3);
    // 0x15121CF0: beql        $t2, $zero, L_15121E04
    if (ctx->r10 == 0) {
        // 0x15121CF4: lw          $t5, 0x698($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X698);
            goto L_15121E04;
    }
    goto skip_3;
    // 0x15121CF4: lw          $t5, 0x698($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X698);
    skip_3:
    // 0x15121CF8: beq         $v1, $zero, L_15121DA8
    if (ctx->r3 == 0) {
        // 0x15121CFC: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_15121DA8;
    }
    // 0x15121CFC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15121D00: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15121D04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15121D08: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x15121D0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15121D10: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15121D14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15121D18: swc1        $f0, 0x97C($s0)
    MEM_W(0X97C, ctx->r16) = ctx->f0.u32l;
    // 0x15121D1C: swc1        $f4, 0x980($s0)
    MEM_W(0X980, ctx->r16) = ctx->f4.u32l;
    // 0x15121D20: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x15121D24: lwc1        $f8, 0x7B4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15121D28: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15121D2C: addiu       $a0, $s0, 0x96C
    ctx->r4 = ADD32(ctx->r16, 0X96C);
    // 0x15121D30: addiu       $a2, $s0, 0x98C
    ctx->r6 = ADD32(ctx->r16, 0X98C);
    // 0x15121D34: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x15121D38: jal         0x150495B0
    // 0x15121D3C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_150495B0(rdram, ctx);
        goto after_0;
    // 0x15121D3C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x15121D40: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15121D44: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15121D48: lw          $a1, 0x980($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X980);
    // 0x15121D4C: addiu       $a0, $s0, 0x970
    ctx->r4 = ADD32(ctx->r16, 0X970);
    // 0x15121D50: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x15121D54: lwc1        $f16, 0x7B4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15121D58: addiu       $a2, $s0, 0x990
    ctx->r6 = ADD32(ctx->r16, 0X990);
    // 0x15121D5C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x15121D60: jal         0x150495B0
    // 0x15121D64: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_150495B0(rdram, ctx);
        goto after_1;
    // 0x15121D64: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x15121D68: lw          $t3, 0x3D0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X3D0);
    // 0x15121D6C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15121D70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15121D74: lwc1        $f18, 0x40($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X40);
    // 0x15121D78: lwc1        $f8, 0x970($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X970);
    // 0x15121D7C: lw          $a3, 0x96C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X96C);
    // 0x15121D80: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x15121D84: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x15121D88: lwc1        $f10, 0x7B4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15121D8C: addiu       $a0, $s0, 0x37C
    ctx->r4 = ADD32(ctx->r16, 0X37C);
    // 0x15121D90: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15121D94: addiu       $a2, $s0, 0x7C8
    ctx->r6 = ADD32(ctx->r16, 0X7C8);
    // 0x15121D98: jal         0x15049688
    // 0x15121D9C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_15049688(rdram, ctx);
        goto after_2;
    // 0x15121D9C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x15121DA0: b           L_15121DE8
    // 0x15121DA4: nop

        goto L_15121DE8;
    // 0x15121DA4: nop

L_15121DA8:
    // 0x15121DA8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15121DAC: lw          $t4, 0x3D0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X3D0);
    // 0x15121DB0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15121DB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15121DB8: lwc1        $f16, 0x40($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X40);
    // 0x15121DBC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x15121DC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15121DC4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x15121DC8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15121DCC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x15121DD0: lwc1        $f8, 0x7B4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15121DD4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x15121DD8: addiu       $a0, $s0, 0x37C
    ctx->r4 = ADD32(ctx->r16, 0X37C);
    // 0x15121DDC: addiu       $a2, $s0, 0x7C8
    ctx->r6 = ADD32(ctx->r16, 0X7C8);
    // 0x15121DE0: jal         0x15049688
    // 0x15121DE4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_15049688(rdram, ctx);
        goto after_3;
    // 0x15121DE4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
L_15121DE8:
    // 0x15121DE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15121DEC: lwc1        $f16, 0x3440($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3440);
    // 0x15121DF0: lwc1        $f10, 0x37C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15121DF4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15121DF8: b           L_15122098
    // 0x15121DFC: swc1        $f18, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f18.u32l;
        goto L_15122098;
    // 0x15121DFC: swc1        $f18, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f18.u32l;
    // 0x15121E00: lw          $t5, 0x698($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X698);
L_15121E04:
    // 0x15121E04: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x15121E08: bne         $t5, $zero, L_15122098
    if (ctx->r13 != 0) {
        // 0x15121E0C: nop
    
            goto L_15122098;
    }
    // 0x15121E0C: nop

    // 0x15121E10: lw          $v0, 0x3D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D0);
    // 0x15121E14: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x15121E18: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15121E1C: lhu         $t6, 0x7C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X7C);
    // 0x15121E20: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15121E24: lwc1        $f4, 0x40($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X40);
    // 0x15121E28: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15121E2C: bgez        $t6, L_15121E40
    if (SIGNED(ctx->r14) >= 0) {
        // 0x15121E30: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_15121E40;
    }
    // 0x15121E30: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15121E34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15121E38: nop

    // 0x15121E3C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_15121E40:
    // 0x15121E40: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15121E44: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15121E48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15121E4C: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x15121E50: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x15121E54: sub.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15121E58: beq         $a1, $zero, L_15121E9C
    if (ctx->r5 == 0) {
        // 0x15121E5C: swc1        $f8, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
            goto L_15121E9C;
    }
    // 0x15121E5C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x15121E60: lbu         $t7, 0x23E($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X23E);
    // 0x15121E64: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x15121E68: beql        $t7, $at, L_15121EA0
    if (ctx->r15 == ctx->r1) {
        // 0x15121E6C: lbu         $v0, 0x23E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X23E);
            goto L_15121EA0;
    }
    goto skip_4;
    // 0x15121E6C: lbu         $v0, 0x23E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X23E);
    skip_4:
    // 0x15121E70: lw          $t8, 0x3D0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3D0);
    // 0x15121E74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15121E78: lwc1        $f18, 0x3444($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3444);
    // 0x15121E7C: lw          $t9, 0x2E4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X2E4);
    // 0x15121E80: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15121E84: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x15121E88: nop

    // 0x15121E8C: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15121E90: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15121E94: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x15121E98: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
L_15121E9C:
    // 0x15121E9C: lbu         $v0, 0x23E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X23E);
L_15121EA0:
    // 0x15121EA0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x15121EA4: beq         $v0, $at, L_15121ED4
    if (ctx->r2 == ctx->r1) {
        // 0x15121EA8: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_15121ED4;
    }
    // 0x15121EA8: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x15121EAC: beq         $v0, $at, L_15121ED4
    if (ctx->r2 == ctx->r1) {
        // 0x15121EB0: addiu       $at, $zero, 0x39
        ctx->r1 = ADD32(0, 0X39);
            goto L_15121ED4;
    }
    // 0x15121EB0: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x15121EB4: beq         $v0, $at, L_15121ED4
    if (ctx->r2 == ctx->r1) {
        // 0x15121EB8: addiu       $at, $zero, 0x37
        ctx->r1 = ADD32(0, 0X37);
            goto L_15121ED4;
    }
    // 0x15121EB8: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x15121EBC: beq         $v0, $at, L_15121ED4
    if (ctx->r2 == ctx->r1) {
        // 0x15121EC0: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_15121ED4;
    }
    // 0x15121EC0: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x15121EC4: beq         $v0, $at, L_15121ED4
    if (ctx->r2 == ctx->r1) {
        // 0x15121EC8: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_15121ED4;
    }
    // 0x15121EC8: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x15121ECC: bne         $v0, $at, L_15121EF8
    if (ctx->r2 != ctx->r1) {
        // 0x15121ED0: nop
    
            goto L_15121EF8;
    }
    // 0x15121ED0: nop

L_15121ED4:
    // 0x15121ED4: lw          $t1, 0x3D4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3D4);
    // 0x15121ED8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15121EDC: lh          $t2, 0x12($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X12);
    // 0x15121EE0: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x15121EE4: nop

    // 0x15121EE8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15121EEC: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15121EF0: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15121EF4: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
L_15121EF8:
    // 0x15121EF8: jal         0x15048758
    // 0x15121EFC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_15048758(rdram, ctx);
        goto after_4;
    // 0x15121EFC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_4:
    // 0x15121F00: lbu         $t3, 0x23C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X23C);
    // 0x15121F04: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x15121F08: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15121F0C: beq         $t3, $zero, L_15121FA4
    if (ctx->r11 == 0) {
        // 0x15121F10: nop
    
            goto L_15121FA4;
    }
    // 0x15121F10: nop

    // 0x15121F14: lw          $v1, 0x3D4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3D4);
    // 0x15121F18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15121F1C: lwc1        $f2, 0x3448($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3448);
    // 0x15121F20: lwc1        $f0, 0x18C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18C);
    // 0x15121F24: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x15121F28: nop

    // 0x15121F2C: bc1tl       L_15121F94
    if (c1cs) {
        // 0x15121F30: lwc1        $f10, 0x4C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_15121F94;
    }
    goto skip_5;
    // 0x15121F30: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    skip_5:
    // 0x15121F34: swc1        $f0, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->f0.u32l;
    // 0x15121F38: lw          $at, 0x160($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X160);
    // 0x15121F3C: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x15121F40: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x15121F44: lw          $t5, 0x164($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X164);
    // 0x15121F48: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x15121F4C: lw          $at, 0x168($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X168);
    // 0x15121F50: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x15121F54: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x15121F58: lw          $t0, 0x3D4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X3D4);
    // 0x15121F5C: sw          $at, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->r1;
    // 0x15121F60: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x15121F64: sw          $t7, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->r15;
    // 0x15121F68: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x15121F6C: sw          $at, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->r1;
    // 0x15121F70: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x15121F74: sw          $at, 0x304($s0)
    MEM_W(0X304, ctx->r16) = ctx->r1;
    // 0x15121F78: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x15121F7C: sw          $t9, 0x308($s0)
    MEM_W(0X308, ctx->r16) = ctx->r25;
    // 0x15121F80: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x15121F84: sw          $at, 0x30C($s0)
    MEM_W(0X30C, ctx->r16) = ctx->r1;
    // 0x15121F88: b           L_15121F98
    // 0x15121F8C: swc1        $f2, 0x18C($t0)
    MEM_W(0X18C, ctx->r8) = ctx->f2.u32l;
        goto L_15121F98;
    // 0x15121F8C: swc1        $f2, 0x18C($t0)
    MEM_W(0X18C, ctx->r8) = ctx->f2.u32l;
    // 0x15121F90: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
L_15121F94:
    // 0x15121F94: swc1        $f10, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->f10.u32l;
L_15121F98:
    // 0x15121F98: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15121F9C: b           L_15122084
    // 0x15121FA0: swc1        $f16, 0x7C8($s0)
    MEM_W(0X7C8, ctx->r16) = ctx->f16.u32l;
        goto L_15122084;
    // 0x15121FA0: swc1        $f16, 0x7C8($s0)
    MEM_W(0X7C8, ctx->r16) = ctx->f16.u32l;
L_15121FA4:
    // 0x15121FA4: bne         $a1, $zero, L_15121FB8
    if (ctx->r5 != 0) {
        // 0x15121FA8: lui         $at, 0x4080
        ctx->r1 = S32(0X4080 << 16);
            goto L_15121FB8;
    }
    // 0x15121FA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15121FAC: lbu         $t1, 0x600($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X600);
    // 0x15121FB0: beql        $t1, $zero, L_15121FD0
    if (ctx->r9 == 0) {
        // 0x15121FB4: lbu         $v0, 0x23E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X23E);
            goto L_15121FD0;
    }
    goto skip_6;
    // 0x15121FB4: lbu         $v0, 0x23E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X23E);
    skip_6:
L_15121FB8:
    // 0x15121FB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15121FBC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x15121FC0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15121FC4: b           L_1512205C
    // 0x15121FC8: nop

        goto L_1512205C;
    // 0x15121FC8: nop

    // 0x15121FCC: lbu         $v0, 0x23E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X23E);
L_15121FD0:
    // 0x15121FD0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x15121FD4: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15121FD8: bnel        $v0, $at, L_15121FEC
    if (ctx->r2 != ctx->r1) {
        // 0x15121FDC: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_15121FEC;
    }
    goto skip_7;
    // 0x15121FDC: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    skip_7:
    // 0x15121FE0: lbu         $t2, -0x19EA($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X19EA);
    // 0x15121FE4: bne         $t2, $zero, L_15122010
    if (ctx->r10 != 0) {
        // 0x15121FE8: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_15122010;
    }
    // 0x15121FE8: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
L_15121FEC:
    // 0x15121FEC: beq         $v0, $at, L_15122010
    if (ctx->r2 == ctx->r1) {
        // 0x15121FF0: addiu       $at, $zero, 0x39
        ctx->r1 = ADD32(0, 0X39);
            goto L_15122010;
    }
    // 0x15121FF0: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x15121FF4: beq         $v0, $at, L_15122010
    if (ctx->r2 == ctx->r1) {
        // 0x15121FF8: addiu       $at, $zero, 0x37
        ctx->r1 = ADD32(0, 0X37);
            goto L_15122010;
    }
    // 0x15121FF8: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x15121FFC: beq         $v0, $at, L_15122010
    if (ctx->r2 == ctx->r1) {
        // 0x15122000: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_15122010;
    }
    // 0x15122000: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x15122004: beq         $v0, $at, L_15122010
    if (ctx->r2 == ctx->r1) {
        // 0x15122008: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_15122010;
    }
    // 0x15122008: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x1512200C: bne         $v0, $at, L_15122028
    if (ctx->r2 != ctx->r1) {
        // 0x15122010: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_15122028;
    }
L_15122010:
    // 0x15122010: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15122014: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15122018: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x1512201C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15122020: b           L_1512205C
    // 0x15122024: nop

        goto L_1512205C;
    // 0x15122024: nop

L_15122028:
    // 0x15122028: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x1512202C: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x15122030: sll         $t4, $t3, 10
    ctx->r12 = S32(ctx->r11 << 10);
    // 0x15122034: bgezl       $t4, L_15122054
    if (SIGNED(ctx->r12) >= 0) {
        // 0x15122038: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_15122054;
    }
    goto skip_8;
    // 0x15122038: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_8:
    // 0x1512203C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15122040: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15122044: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15122048: b           L_1512205C
    // 0x1512204C: lwc1        $f2, 0x344C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X344C);
        goto L_1512205C;
    // 0x1512204C: lwc1        $f2, 0x344C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X344C);
    // 0x15122050: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_15122054:
    // 0x15122054: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15122058: lwc1        $f2, 0x3450($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3450);
L_1512205C:
    // 0x1512205C: lbu         $t5, -0x15F4($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X15F4);
    // 0x15122060: addiu       $a0, $s0, 0x37C
    ctx->r4 = ADD32(ctx->r16, 0X37C);
    // 0x15122064: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x15122068: bne         $t5, $zero, L_15122084
    if (ctx->r13 != 0) {
        // 0x1512206C: addiu       $a2, $s0, 0x7C8
        ctx->r6 = ADD32(ctx->r16, 0X7C8);
            goto L_15122084;
    }
    // 0x1512206C: addiu       $a2, $s0, 0x7C8
    ctx->r6 = ADD32(ctx->r16, 0X7C8);
    // 0x15122070: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x15122074: lwc1        $f18, 0x7B4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15122078: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1512207C: jal         0x15049688
    // 0x15122080: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_15049688(rdram, ctx);
        goto after_5;
    // 0x15122080: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
L_15122084:
    // 0x15122084: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15122088: lwc1        $f8, 0x3454($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3454);
    // 0x1512208C: lwc1        $f4, 0x37C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15122090: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15122094: swc1        $f6, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f6.u32l;
L_15122098:
    // 0x15122098: jal         0x1512A390
    // 0x1512209C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1512A390(rdram, ctx);
        goto after_6;
    // 0x1512209C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x151220A0: jal         0x15123A54
    // 0x151220A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15123A54(rdram, ctx);
        goto after_7;
    // 0x151220A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x151220A8: jal         0x1512E140
    // 0x151220AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1512E140(rdram, ctx);
        goto after_8;
    // 0x151220AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x151220B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151220B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151220B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151220BC: jr          $ra
    // 0x151220C0: nop

    return;
    return;
    // 0x151220C0: nop

;}
RECOMP_FUNC void func_15071A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071A64: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15071A68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15071A6C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x15071A70: jal         0x150ADA20
    // 0x15071A74: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15071A74: nop

    after_0:
    // 0x15071A78: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x15071A7C: bne         $t6, $zero, L_15071B08
    if (ctx->r14 != 0) {
        // 0x15071A80: lui         $a1, 0x800D
        ctx->r5 = S32(0X800D << 16);
            goto L_15071B08;
    }
    // 0x15071A80: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15071A84: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x15071A88: lw          $t7, 0x1D4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X1D4);
    // 0x15071A8C: beql        $t7, $zero, L_15071B0C
    if (ctx->r15 == 0) {
        // 0x15071A90: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15071B0C;
    }
    goto skip_0;
    // 0x15071A90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x15071A94: lbu         $t8, 0x74($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X74);
    // 0x15071A98: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15071A9C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15071AA0: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x15071AA4: beq         $t9, $at, L_15071B08
    if (ctx->r25 == ctx->r1) {
        // 0x15071AA8: addiu       $v0, $v0, -0x3D30
        ctx->r2 = ADD32(ctx->r2, -0X3D30);
            goto L_15071B08;
    }
    // 0x15071AA8: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x15071AAC: lbu         $t0, 0x104($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X104);
    // 0x15071AB0: beql        $t0, $zero, L_15071B0C
    if (ctx->r8 == 0) {
        // 0x15071AB4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15071B0C;
    }
    goto skip_1;
    // 0x15071AB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x15071AB8: lbu         $t1, 0x1CA($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1CA);
    // 0x15071ABC: blezl       $t1, L_15071B0C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x15071AC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15071B0C;
    }
    goto skip_2;
    // 0x15071AC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x15071AC4: jal         0x1504715C
    // 0x15071AC8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x15071AC8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x15071ACC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x15071AD0: lw          $t2, 0x154C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X154C);
    // 0x15071AD4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x15071AD8: addiu       $a0, $a0, -0x6444
    ctx->r4 = ADD32(ctx->r4, -0X6444);
    // 0x15071ADC: lw          $a2, 0x1D4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X1D4);
    // 0x15071AE0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x15071AE4: jal         0x15143134
    // 0x15071AE8: addiu       $a2, $a2, 0x3C0
    ctx->r6 = ADD32(ctx->r6, 0X3C0);
    func_15143134(rdram, ctx);
        goto after_2;
    // 0x15071AE8: addiu       $a2, $a2, 0x3C0
    ctx->r6 = ADD32(ctx->r6, 0X3C0);
    after_2:
    // 0x15071AEC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15071AF0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x15071AF4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x15071AF8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x15071AFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15071B00: jal         0x151DC484
    // 0x15071B04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151DC484(rdram, ctx);
        goto after_3;
    // 0x15071B04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
L_15071B08:
    // 0x15071B08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15071B0C:
    // 0x15071B0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15071B10: jr          $ra
    // 0x15071B14: nop

    return;
    return;
    // 0x15071B14: nop

;}
RECOMP_FUNC void func_151B83CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B83CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B83D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B83D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151B83D8: jal         0x151B8370
    // 0x151B83DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151B8370(rdram, ctx);
        goto after_0;
    // 0x151B83DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151B83E0: jal         0x15147928
    // 0x151B83E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15147928(rdram, ctx);
        goto after_1;
    // 0x151B83E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151B83E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B83EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B83F0: jr          $ra
    // 0x151B83F4: nop

    return;
    return;
    // 0x151B83F4: nop

;}
RECOMP_FUNC void func_150F6B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F6B00: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x150F6B04: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150F6B08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150F6B0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150F6B10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150F6B14: addiu       $a1, $zero, 0x4003
    ctx->r5 = ADD32(0, 0X4003);
    // 0x150F6B18: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150F6B1C: jal         0x1509BE40
    // 0x150F6B20: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x150F6B20: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_0:
    // 0x150F6B24: beql        $v0, $zero, L_150F6D88
    if (ctx->r2 == 0) {
        // 0x150F6B28: lw          $t1, 0x84($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X84);
            goto L_150F6D88;
    }
    goto skip_0;
    // 0x150F6B28: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    skip_0:
    // 0x150F6B2C: lw          $t6, 0x3D0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X3D0);
    // 0x150F6B30: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x150F6B34: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x150F6B38: lbu         $t7, 0x1CA($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1CA);
    // 0x150F6B3C: ori         $at, $at, 0x1000
    ctx->r1 = ctx->r1 | 0X1000;
    // 0x150F6B40: addiu       $a0, $a0, 0x1B80
    ctx->r4 = ADD32(ctx->r4, 0X1B80);
    // 0x150F6B44: beql        $t7, $zero, L_150F6D88
    if (ctx->r15 == 0) {
        // 0x150F6B48: lw          $t1, 0x84($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X84);
            goto L_150F6D88;
    }
    goto skip_1;
    // 0x150F6B48: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    skip_1:
    // 0x150F6B4C: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x150F6B50: addiu       $a1, $s0, 0x2A4
    ctx->r5 = ADD32(ctx->r16, 0X2A4);
    // 0x150F6B54: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x150F6B58: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x150F6B5C: jal         0x15048F90
    // 0x150F6B60: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
    func_15048F90(rdram, ctx);
        goto after_1;
    // 0x150F6B60: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
    after_1:
    // 0x150F6B64: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x150F6B68: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150F6B6C: addiu       $a1, $a1, 0x1B8C
    ctx->r5 = ADD32(ctx->r5, 0X1B8C);
    // 0x150F6B70: addiu       $a0, $a0, 0x1B80
    ctx->r4 = ADD32(ctx->r4, 0X1B80);
    // 0x150F6B74: jal         0x15048F90
    // 0x150F6B78: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_15048F90(rdram, ctx);
        goto after_2;
    // 0x150F6B78: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_2:
    // 0x150F6B7C: jal         0x150AD930
    // 0x150F6B80: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_150AD930(rdram, ctx);
        goto after_3;
    // 0x150F6B80: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x150F6B84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F6B88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F6B8C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x150F6B90: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x150F6B94: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x150F6B98: jal         0x1504917C
    // 0x150F6B9C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    func_1504917C(rdram, ctx);
        goto after_4;
    // 0x150F6B9C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x150F6BA0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x150F6BA4: jal         0x150AD900
    // 0x150F6BA8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_150AD900(rdram, ctx);
        goto after_5;
    // 0x150F6BA8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_5:
    // 0x150F6BAC: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150F6BB0: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x150F6BB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F6BB8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150F6BBC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150F6BC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F6BC4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x150F6BC8: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x150F6BCC: addiu       $a2, $zero, 0xAC
    ctx->r6 = ADD32(0, 0XAC);
    // 0x150F6BD0: addiu       $a3, $zero, 0x4040
    ctx->r7 = ADD32(0, 0X4040);
    // 0x150F6BD4: mul.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150F6BD8: addiu       $t0, $zero, 0x4041
    ctx->r8 = ADD32(0, 0X4041);
    // 0x150F6BDC: addiu       $t1, $zero, 0x4042
    ctx->r9 = ADD32(0, 0X4042);
    // 0x150F6BE0: addiu       $t2, $zero, 0x4043
    ctx->r10 = ADD32(0, 0X4043);
    // 0x150F6BE4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x150F6BE8: nop

    // 0x150F6BEC: bc1fl       L_150F6C00
    if (!c1cs) {
        // 0x150F6BF0: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_150F6C00;
    }
    goto skip_2;
    // 0x150F6BF0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_2:
    // 0x150F6BF4: b           L_150F6C24
    // 0x150F6BF8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_150F6C24;
    // 0x150F6BF8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x150F6BFC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_150F6C00:
    // 0x150F6C00: nop

    // 0x150F6C04: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x150F6C08: nop

    // 0x150F6C0C: bc1fl       L_150F6C20
    if (!c1cs) {
        // 0x150F6C10: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_150F6C20;
    }
    goto skip_3;
    // 0x150F6C10: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
    // 0x150F6C14: b           L_150F6C20
    // 0x150F6C18: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_150F6C20;
    // 0x150F6C18: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x150F6C1C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_150F6C20:
    // 0x150F6C20: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_150F6C24:
    // 0x150F6C24: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150F6C28: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x150F6C2C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150F6C30: jal         0x1509BE40
    // 0x150F6C34: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    func_1509BE40(rdram, ctx);
        goto after_6;
    // 0x150F6C34: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x150F6C38: beq         $v0, $zero, L_150F6C68
    if (ctx->r2 == 0) {
        // 0x150F6C3C: lwc1        $f2, 0x4C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_150F6C68;
    }
    // 0x150F6C3C: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150F6C40: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150F6C44: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x150F6C48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F6C4C: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150F6C50: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x150F6C54: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F6C58: nop

    // 0x150F6C5C: swc1        $f8, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f8.u32l;
    // 0x150F6C60: b           L_150F6CDC
    // 0x150F6C64: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
        goto L_150F6CDC;
    // 0x150F6C64: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
L_150F6C68:
    // 0x150F6C68: addiu       $t3, $zero, 0x4046
    ctx->r11 = ADD32(0, 0X4046);
    // 0x150F6C6C: addiu       $t4, $zero, 0x4045
    ctx->r12 = ADD32(0, 0X4045);
    // 0x150F6C70: addiu       $t5, $zero, 0x4044
    ctx->r13 = ADD32(0, 0X4044);
    // 0x150F6C74: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150F6C78: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150F6C7C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150F6C80: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x150F6C84: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x150F6C88: addiu       $a2, $zero, 0xAC
    ctx->r6 = ADD32(0, 0XAC);
    // 0x150F6C8C: addiu       $a3, $zero, 0x4047
    ctx->r7 = ADD32(0, 0X4047);
    // 0x150F6C90: jal         0x1509BE40
    // 0x150F6C94: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    func_1509BE40(rdram, ctx);
        goto after_7;
    // 0x150F6C94: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    after_7:
    // 0x150F6C98: beq         $v0, $zero, L_150F6CC8
    if (ctx->r2 == 0) {
        // 0x150F6C9C: lwc1        $f2, 0x4C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_150F6CC8;
    }
    // 0x150F6C9C: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150F6CA0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150F6CA4: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x150F6CA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150F6CAC: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x150F6CB0: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x150F6CB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F6CB8: nop

    // 0x150F6CBC: swc1        $f4, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f4.u32l;
    // 0x150F6CC0: b           L_150F6CDC
    // 0x150F6CC4: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
        goto L_150F6CDC;
    // 0x150F6CC4: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
L_150F6CC8:
    // 0x150F6CC8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150F6CCC: lui         $at, 0x4393
    ctx->r1 = S32(0X4393 << 16);
    // 0x150F6CD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F6CD4: mul.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150F6CD8: swc1        $f6, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f6.u32l;
L_150F6CDC:
    // 0x150F6CDC: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x150F6CE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F6CE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F6CE8: lwc1        $f4, 0x1B98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1B98);
    // 0x150F6CEC: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150F6CF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F6CF4: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150F6CF8: lwc1        $f8, 0x1B9C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1B9C);
    // 0x150F6CFC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150F6D00: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x150F6D04: addiu       $a1, $zero, 0x4003
    ctx->r5 = ADD32(0, 0X4003);
    // 0x150F6D08: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x150F6D0C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150F6D10: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150F6D14: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x150F6D18: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150F6D1C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150F6D20: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x150F6D24: jal         0x1509BFB0
    // 0x150F6D28: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_1509BFB0(rdram, ctx);
        goto after_8;
    // 0x150F6D28: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_8:
    // 0x150F6D2C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150F6D30: jal         0x15048FC8
    // 0x150F6D34: addiu       $a0, $a0, -0x65B0
    ctx->r4 = ADD32(ctx->r4, -0X65B0);
    func_15048FC8(rdram, ctx);
        goto after_9;
    // 0x150F6D34: addiu       $a0, $a0, -0x65B0
    ctx->r4 = ADD32(ctx->r4, -0X65B0);
    after_9:
    // 0x150F6D38: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150F6D3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150F6D40: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150F6D44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F6D48: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x150F6D4C: addiu       $a0, $s0, 0x37C
    ctx->r4 = ADD32(ctx->r16, 0X37C);
    // 0x150F6D50: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x150F6D54: lwc1        $f8, 0x7B4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x150F6D58: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x150F6D5C: addiu       $a2, $s0, 0x7C8
    ctx->r6 = ADD32(ctx->r16, 0X7C8);
    // 0x150F6D60: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    // 0x150F6D64: jal         0x15049688
    // 0x150F6D68: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_15049688(rdram, ctx);
        goto after_10;
    // 0x150F6D68: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x150F6D6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F6D70: lwc1        $f16, 0x1BA0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1BA0);
    // 0x150F6D74: lwc1        $f10, 0x37C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x150F6D78: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150F6D7C: b           L_150F6D98
    // 0x150F6D80: swc1        $f18, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f18.u32l;
        goto L_150F6D98;
    // 0x150F6D80: swc1        $f18, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f18.u32l;
    // 0x150F6D84: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
L_150F6D88:
    // 0x150F6D88: lui         $at, 0x3FFF
    ctx->r1 = S32(0X3FFF << 16);
    // 0x150F6D8C: ori         $at, $at, 0xEFFF
    ctx->r1 = ctx->r1 | 0XEFFF;
    // 0x150F6D90: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x150F6D94: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
L_150F6D98:
    // 0x150F6D98: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150F6D9C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150F6DA0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x150F6DA4: jr          $ra
    // 0x150F6DA8: nop

    return;
    return;
    // 0x150F6DA8: nop

    // 0x150F6DAC: nop

;}
RECOMP_FUNC void func_15048720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15048720: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15048724: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x15048728: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x1504872C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15048730: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x15048734: jal         0x15048A70
    // 0x15048738: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    func_15048A70(rdram, ctx);
        goto after_0;
    // 0x15048738: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x1504873C: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x15048740: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x15048744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15048748: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1504874C: add.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15048750: jr          $ra
    // 0x15048754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15048754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151A90C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A90C0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151A90C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151A90C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151A90CC: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x151A90D0: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x151A90D4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x151A90D8: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x151A90DC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x151A90E0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x151A90E4: sb          $t6, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r14;
    // 0x151A90E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A90EC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151A90F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151A90F4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x151A90F8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151A90FC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151A9100: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151A9104: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x151A9108: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151A910C: bc1t        L_151A9124
    if (c1cs) {
        // 0x151A9110: nop
    
            goto L_151A9124;
    }
    // 0x151A9110: nop

    // 0x151A9114: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A9118: lwc1        $f6, -0x70A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X70A8);
    // 0x151A911C: b           L_151A912C
    // 0x151A9120: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
        goto L_151A912C;
    // 0x151A9120: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
L_151A9124:
    // 0x151A9124: lwc1        $f8, -0x70A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X70A4);
    // 0x151A9128: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
L_151A912C:
    // 0x151A912C: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x151A9130: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151A9134: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A9138: bc1t        L_151A9150
    if (c1cs) {
        // 0x151A913C: nop
    
            goto L_151A9150;
    }
    // 0x151A913C: nop

    // 0x151A9140: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A9144: lwc1        $f10, -0x70A0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X70A0);
    // 0x151A9148: b           L_151A9158
    // 0x151A914C: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
        goto L_151A9158;
    // 0x151A914C: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
L_151A9150:
    // 0x151A9150: lwc1        $f16, -0x709C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X709C);
    // 0x151A9154: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
L_151A9158:
    // 0x151A9158: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x151A915C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x151A9160: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x151A9164: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x151A9168: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x151A916C: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x151A9170: sb          $t9, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r25;
    // 0x151A9174: sb          $t0, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r8;
    // 0x151A9178: sb          $zero, 0x56($sp)
    MEM_B(0X56, ctx->r29) = 0;
    // 0x151A917C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151A9180: jal         0x151A8B20
    // 0x151A9184: sb          $t1, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r9;
    func_151A8B20(rdram, ctx);
        goto after_0;
    // 0x151A9184: sb          $t1, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r9;
    after_0:
    // 0x151A9188: beq         $v0, $zero, L_151A919C
    if (ctx->r2 == 0) {
        // 0x151A918C: addiu       $a0, $v0, 0x80
        ctx->r4 = ADD32(ctx->r2, 0X80);
            goto L_151A919C;
    }
    // 0x151A918C: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x151A9190: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x151A9194: jal         0x10022EC0
    // 0x151A9198: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151A9198: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_151A919C:
    // 0x151A919C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151A91A0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151A91A4: jr          $ra
    // 0x151A91A8: nop

    return;
    return;
    // 0x151A91A8: nop

;}
RECOMP_FUNC void func_1518FC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518FC84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1518FC88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518FC8C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x1518FC90: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x1518FC94: lw          $a2, 0x2C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X2C);
    // 0x1518FC98: bnel        $v0, $zero, L_1518FCB4
    if (ctx->r2 != 0) {
        // 0x1518FC9C: lwc1        $f4, 0x0($a3)
        ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
            goto L_1518FCB4;
    }
    goto skip_0;
    // 0x1518FC9C: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x1518FCA0: jal         0x1516972C
    // 0x1518FCA4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x1518FCA4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x1518FCA8: b           L_1518FDB8
    // 0x1518FCAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1518FDB8;
    // 0x1518FCAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1518FCB0: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
L_1518FCB4:
    // 0x1518FCB4: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x1518FCB8: lwc1        $f10, 0x60($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X60);
    // 0x1518FCBC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1518FCC0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1518FCC4: swc1        $f16, 0x148($a2)
    MEM_W(0X148, ctx->r6) = ctx->f16.u32l;
    // 0x1518FCC8: lwc1        $f4, 0x38($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1518FCCC: lwc1        $f18, 0x4($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X4);
    // 0x1518FCD0: lwc1        $f8, 0x60($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X60);
    // 0x1518FCD4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x1518FCD8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1518FCDC: swc1        $f10, 0x14C($a2)
    MEM_W(0X14C, ctx->r6) = ctx->f10.u32l;
    // 0x1518FCE0: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1518FCE4: lwc1        $f16, 0x8($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X8);
    // 0x1518FCE8: lwc1        $f6, 0x60($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X60);
    // 0x1518FCEC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1518FCF0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1518FCF4: swc1        $f8, 0x150($a2)
    MEM_W(0X150, ctx->r6) = ctx->f8.u32l;
    // 0x1518FCF8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x1518FCFC: jal         0x150ADA68
    // 0x1518FD00: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x1518FD00: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x1518FD04: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x1518FD08: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x1518FD0C: addiu       $v1, $a1, 0x30
    ctx->r3 = ADD32(ctx->r5, 0X30);
    // 0x1518FD10: lwc1        $f10, 0x38($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X38);
    // 0x1518FD14: lwc1        $f18, 0x34($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X34);
    // 0x1518FD18: addiu       $v0, $a2, 0x110
    ctx->r2 = ADD32(ctx->r6, 0X110);
    // 0x1518FD1C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1518FD20: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1518FD24: swc1        $f4, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f4.u32l;
    // 0x1518FD28: lwc1        $f6, 0x3C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x1518FD2C: swc1        $f6, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f6.u32l;
    // 0x1518FD30: lh          $t6, 0x40($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X40);
    // 0x1518FD34: sh          $t6, 0x6C($a2)
    MEM_H(0X6C, ctx->r6) = ctx->r14;
    // 0x1518FD38: lh          $t7, 0x42($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X42);
    // 0x1518FD3C: sh          $t7, 0x6E($a2)
    MEM_H(0X6E, ctx->r6) = ctx->r15;
    // 0x1518FD40: jal         0x150ADA20
    // 0x1518FD44: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1518FD44: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x1518FD48: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x1518FD4C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x1518FD50: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x1518FD54: lh          $t8, 0x46($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X46);
    // 0x1518FD58: lh          $t1, 0x44($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X44);
    // 0x1518FD5C: addiu       $t7, $zero, 0x24
    ctx->r15 = ADD32(0, 0X24);
    // 0x1518FD60: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x1518FD64: divu        $zero, $v0, $t9
    lo = S32(U32(ctx->r2) / U32(ctx->r25)); hi = S32(U32(ctx->r2) % U32(ctx->r25));
    // 0x1518FD68: mfhi        $t0
    ctx->r8 = hi;
    // 0x1518FD6C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x1518FD70: sh          $t2, 0x1C($a2)
    MEM_H(0X1C, ctx->r6) = ctx->r10;
    // 0x1518FD74: lbu         $t3, 0x4C($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X4C);
    // 0x1518FD78: bne         $t9, $zero, L_1518FD84
    if (ctx->r25 != 0) {
        // 0x1518FD7C: nop
    
            goto L_1518FD84;
    }
    // 0x1518FD7C: nop

    // 0x1518FD80: break       7
    do_break(353959296);
L_1518FD84:
    // 0x1518FD84: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x1518FD88: beq         $t4, $zero, L_1518FD9C
    if (ctx->r12 == 0) {
        // 0x1518FD8C: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_1518FD9C;
    }
    // 0x1518FD8C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x1518FD90: addiu       $t5, $zero, 0x21
    ctx->r13 = ADD32(0, 0X21);
    // 0x1518FD94: b           L_1518FDA0
    // 0x1518FD98: sb          $t5, 0x70($a2)
    MEM_B(0X70, ctx->r6) = ctx->r13;
        goto L_1518FDA0;
    // 0x1518FD98: sb          $t5, 0x70($a2)
    MEM_B(0X70, ctx->r6) = ctx->r13;
L_1518FD9C:
    // 0x1518FD9C: sb          $t6, 0x70($a2)
    MEM_B(0X70, ctx->r6) = ctx->r14;
L_1518FDA0:
    // 0x1518FDA0: lw          $t8, 0x58($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X58);
    // 0x1518FDA4: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x1518FDA8: sb          $t7, 0x71($a2)
    MEM_B(0X71, ctx->r6) = ctx->r15;
    // 0x1518FDAC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x1518FDB0: sw          $t9, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r25;
    // 0x1518FDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1518FDB8:
    // 0x1518FDB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1518FDBC: jr          $ra
    // 0x1518FDC0: nop

    return;
    return;
    // 0x1518FDC0: nop

;}
RECOMP_FUNC void func_15002724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15002724: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15002728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1500272C: jal         0x150027F8
    // 0x15002730: nop

    func_150027F8(rdram, ctx);
        goto after_0;
    // 0x15002730: nop

    after_0:
    // 0x15002734: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15002738: addiu       $v1, $v1, -0x41C8
    ctx->r3 = ADD32(ctx->r3, -0X41C8);
    // 0x1500273C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15002740: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x15002744: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x15002748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1500274C: jr          $ra
    // 0x15002750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15002750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1506E73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E73C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506E740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E744: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506E748: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506E74C: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506E750: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506E754: jal         0x1506E46C
    // 0x1506E758: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506E758: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x1506E75C: beq         $v0, $zero, L_1506E76C
    if (ctx->r2 == 0) {
        // 0x1506E760: addiu       $a0, $zero, 0xBB8
        ctx->r4 = ADD32(0, 0XBB8);
            goto L_1506E76C;
    }
    // 0x1506E760: addiu       $a0, $zero, 0xBB8
    ctx->r4 = ADD32(0, 0XBB8);
    // 0x1506E764: jal         0x1506BA4C
    // 0x1506E768: addiu       $a1, $zero, 0x1F40
    ctx->r5 = ADD32(0, 0X1F40);
    func_1506BA4C(rdram, ctx);
        goto after_1;
    // 0x1506E768: addiu       $a1, $zero, 0x1F40
    ctx->r5 = ADD32(0, 0X1F40);
    after_1:
L_1506E76C:
    // 0x1506E76C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506E770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506E774: jr          $ra
    // 0x1506E778: nop

    return;
    return;
    // 0x1506E778: nop

;}
RECOMP_FUNC void func_15126138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15126138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1512613C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15126140: jal         0x151247C0
    // 0x15126144: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_151247C0(rdram, ctx);
        goto after_0;
    // 0x15126144: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15126148: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1512614C: lw          $v0, 0x3D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3D0);
    // 0x15126150: lwc1        $f4, 0x2B0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2B0);
    // 0x15126154: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15126158: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x1512615C: nop

    // 0x15126160: bc1fl       L_1512619C
    if (!c1cs) {
        // 0x15126164: lw          $t6, 0x2C($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X2C);
            goto L_1512619C;
    }
    goto skip_0;
    // 0x15126164: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    skip_0:
    // 0x15126168: lwc1        $f8, 0x2B4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2B4);
    // 0x1512616C: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15126170: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x15126174: nop

    // 0x15126178: bc1fl       L_1512619C
    if (!c1cs) {
        // 0x1512617C: lw          $t6, 0x2C($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X2C);
            goto L_1512619C;
    }
    goto skip_1;
    // 0x1512617C: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    skip_1:
    // 0x15126180: lwc1        $f16, 0x2B8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X2B8);
    // 0x15126184: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15126188: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x1512618C: nop

    // 0x15126190: bc1tl       L_151261C4
    if (c1cs) {
        // 0x15126194: sh          $zero, 0x298($a0)
        MEM_H(0X298, ctx->r4) = 0;
            goto L_151261C4;
    }
    goto skip_2;
    // 0x15126194: sh          $zero, 0x298($a0)
    MEM_H(0X298, ctx->r4) = 0;
    skip_2:
    // 0x15126198: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
L_1512619C:
    // 0x1512619C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x151261A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151261A4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x151261A8: beq         $t7, $zero, L_151261C0
    if (ctx->r15 == 0) {
        // 0x151261AC: addiu       $t9, $zero, 0x3C
        ctx->r25 = ADD32(0, 0X3C);
            goto L_151261C0;
    }
    // 0x151261AC: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x151261B0: sh          $t8, 0x298($a0)
    MEM_H(0X298, ctx->r4) = ctx->r24;
    // 0x151261B4: sh          $t9, 0x7E6($a0)
    MEM_H(0X7E6, ctx->r4) = ctx->r25;
    // 0x151261B8: b           L_151261C4
    // 0x151261BC: sb          $zero, 0x8ED($a0)
    MEM_B(0X8ED, ctx->r4) = 0;
        goto L_151261C4;
    // 0x151261BC: sb          $zero, 0x8ED($a0)
    MEM_B(0X8ED, ctx->r4) = 0;
L_151261C0:
    // 0x151261C0: sh          $zero, 0x298($a0)
    MEM_H(0X298, ctx->r4) = 0;
L_151261C4:
    // 0x151261C4: lw          $t0, 0x84($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X84);
    // 0x151261C8: sll         $t1, $t0, 10
    ctx->r9 = S32(ctx->r8 << 10);
    // 0x151261CC: bgez        $t1, L_15126224
    if (SIGNED(ctx->r9) >= 0) {
        // 0x151261D0: nop
    
            goto L_15126224;
    }
    // 0x151261D0: nop

    // 0x151261D4: lw          $v0, 0x3D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3D0);
    // 0x151261D8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x151261DC: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x151261E0: beq         $t2, $at, L_15126224
    if (ctx->r10 == ctx->r1) {
        // 0x151261E4: nop
    
            goto L_15126224;
    }
    // 0x151261E4: nop

    // 0x151261E8: lbu         $t3, 0x102($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X102);
    // 0x151261EC: bne         $t3, $zero, L_15126224
    if (ctx->r11 != 0) {
        // 0x151261F0: nop
    
            goto L_15126224;
    }
    // 0x151261F0: nop

    // 0x151261F4: lw          $t4, 0x36C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X36C);
    // 0x151261F8: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x151261FC: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x15126200: beq         $t6, $zero, L_15126224
    if (ctx->r14 == 0) {
        // 0x15126204: nop
    
            goto L_15126224;
    }
    // 0x15126204: nop

    // 0x15126208: lw          $t7, 0x2C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X2C);
    // 0x1512620C: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x15126210: bne         $t8, $zero, L_15126224
    if (ctx->r24 != 0) {
        // 0x15126214: nop
    
            goto L_15126224;
    }
    // 0x15126214: nop

    // 0x15126218: jal         0x151220D0
    // 0x1512621C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_151220D0(rdram, ctx);
        goto after_1;
    // 0x1512621C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x15126220: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_15126224:
    // 0x15126224: jal         0x15124C38
    // 0x15126228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15124C38(rdram, ctx);
        goto after_2;
    // 0x15126228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x1512622C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15126230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15126234: jr          $ra
    // 0x15126238: nop

    return;
    return;
    // 0x15126238: nop

;}
RECOMP_FUNC void func_15073C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073C48: jr          $ra
    // 0x15073C4C: nop

    return;
    return;
    // 0x15073C4C: nop

;}
RECOMP_FUNC void func_1514F44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F44C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1514F450: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1514F454: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1514F458: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x1514F45C: addiu       $t8, $t8, 0x5988
    ctx->r24 = ADD32(ctx->r24, 0X5988);
    // 0x1514F460: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1514F464: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1514F468: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1514F46C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1514F470: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1514F474: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1514F478: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1514F47C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1514F480: jal         0x1518D1C0
    // 0x1514F484: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_1518D1C0(rdram, ctx);
        goto after_0;
    // 0x1514F484: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1514F488: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514F48C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x1514F490: jal         0x1514EC1C
    // 0x1514F494: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_1514EC1C(rdram, ctx);
        goto after_1;
    // 0x1514F494: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_1:
    // 0x1514F498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1514F49C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1514F4A0: jr          $ra
    // 0x1514F4A4: nop

    return;
    return;
    // 0x1514F4A4: nop

;}
RECOMP_FUNC void func_15158224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15158224: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15158228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515822C: lbu         $t6, 0x10($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X10);
    // 0x15158230: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15158234: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15158238: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x1515823C: beq         $t7, $zero, L_15158264
    if (ctx->r15 == 0) {
        // 0x15158240: nop
    
            goto L_15158264;
    }
    // 0x15158240: nop

    // 0x15158244: lh          $t8, 0x14($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X14);
    // 0x15158248: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x1515824C: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x15158250: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    // 0x15158254: lh          $t1, 0x14($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X14);
    // 0x15158258: bgez        $t1, L_15158264
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1515825C: nop
    
            goto L_15158264;
    }
    // 0x1515825C: nop

    // 0x15158260: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15158264:
    // 0x15158264: bne         $v1, $zero, L_151582A8
    if (ctx->r3 != 0) {
        // 0x15158268: nop
    
            goto L_151582A8;
    }
    // 0x15158268: nop

    // 0x1515826C: lb          $v0, 0x12($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X12);
    // 0x15158270: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15158274: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15158278: beq         $v0, $at, L_151582A8
    if (ctx->r2 == ctx->r1) {
        // 0x1515827C: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_151582A8;
    }
    // 0x1515827C: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x15158280: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x15158284: lw          $t9, -0x5200($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5200);
    // 0x15158288: sb          $v1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r3;
    // 0x1515828C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15158290: jalr        $t9
    // 0x15158294: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15158294: nop

    after_0:
    // 0x15158298: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x1515829C: bne         $v0, $zero, L_151582A8
    if (ctx->r2 != 0) {
        // 0x151582A0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_151582A8;
    }
    // 0x151582A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x151582A4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151582A8:
    // 0x151582A8: beql        $v1, $zero, L_151582BC
    if (ctx->r3 == 0) {
        // 0x151582AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151582BC;
    }
    goto skip_0;
    // 0x151582AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151582B0: jal         0x1516972C
    // 0x151582B4: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x151582B4: nop

    after_1:
    // 0x151582B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151582BC:
    // 0x151582BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151582C0: jr          $ra
    // 0x151582C4: nop

    return;
    return;
    // 0x151582C4: nop

;}
RECOMP_FUNC void func_150C1E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C1E34: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x150C1E38: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150C1E3C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150C1E40: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x150C1E44: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x150C1E48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C1E4C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x150C1E50: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x150C1E54: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x150C1E58: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150C1E5C: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150C1E60: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x150C1E64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C1E68: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x150C1E6C: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x150C1E70: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150C1E74: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x150C1E78: addiu       $t8, $zero, 0x258
    ctx->r24 = ADD32(0, 0X258);
    // 0x150C1E7C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150C1E80: ldc1        $f6, 0x228($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X228);
    // 0x150C1E84: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x150C1E88: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x150C1E8C: sh          $t6, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r14;
    // 0x150C1E90: sh          $t8, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r24;
    // 0x150C1E94: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150C1E98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C1E9C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x150C1EA0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150C1EA4: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x150C1EA8: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150C1EAC: addiu       $a2, $sp, 0x45
    ctx->r6 = ADD32(ctx->r29, 0X45);
    // 0x150C1EB0: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x150C1EB4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x150C1EB8: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150C1EBC: mul.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x150C1EC0: sh          $t7, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r15;
    // 0x150C1EC4: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x150C1EC8: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x150C1ECC: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x150C1ED0: addiu       $a3, $sp, 0x46
    ctx->r7 = ADD32(ctx->r29, 0X46);
    // 0x150C1ED4: sh          $t9, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r25;
    // 0x150C1ED8: sh          $t2, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r10;
    // 0x150C1EDC: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x150C1EE0: sh          $t2, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r10;
    // 0x150C1EE4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x150C1EE8: nop

    // 0x150C1EEC: sh          $t5, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r13;
    // 0x150C1EF0: jal         0x151429E0
    // 0x150C1EF4: sh          $t5, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r13;
    func_151429E0(rdram, ctx);
        goto after_0;
    // 0x150C1EF4: sh          $t5, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r13;
    after_0:
    // 0x150C1EF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C1EFC: addiu       $a1, $sp, 0x47
    ctx->r5 = ADD32(ctx->r29, 0X47);
    // 0x150C1F00: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x150C1F04: jal         0x151429E0
    // 0x150C1F08: addiu       $a3, $sp, 0x49
    ctx->r7 = ADD32(ctx->r29, 0X49);
    func_151429E0(rdram, ctx);
        goto after_1;
    // 0x150C1F08: addiu       $a3, $sp, 0x49
    ctx->r7 = ADD32(ctx->r29, 0X49);
    after_1:
    // 0x150C1F0C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150C1F10: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150C1F14: sb          $t9, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r25;
    // 0x150C1F18: jal         0x150ADA20
    // 0x150C1F1C: sb          $t0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150C1F1C: sb          $t0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r8;
    after_2:
    // 0x150C1F20: andi        $t1, $v0, 0xF
    ctx->r9 = ctx->r2 & 0XF;
    // 0x150C1F24: addiu       $t2, $t1, 0xC
    ctx->r10 = ADD32(ctx->r9, 0XC);
    // 0x150C1F28: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150C1F2C: sb          $t2, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r10;
    // 0x150C1F30: sb          $t3, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r11;
    // 0x150C1F34: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x150C1F38: jal         0x1518CA80
    // 0x150C1F3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1518CA80(rdram, ctx);
        goto after_3;
    // 0x150C1F3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x150C1F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150C1F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C1F48: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x150C1F4C: jr          $ra
    // 0x150C1F50: nop

    return;
    return;
    // 0x150C1F50: nop

;}
RECOMP_FUNC void func_150238D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150238D0: jr          $ra
    // 0x150238D4: nop

    return;
    return;
    // 0x150238D4: nop

;}
RECOMP_FUNC void func_1507A164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A164: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507A168: lb          $t6, 0x1892($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X1892);
    // 0x1507A16C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1507A170: lwc1        $f4, -0x3CF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3CF4);
    // 0x1507A174: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1507A178: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507A17C: lbu         $v1, 0x1891($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1891);
    // 0x1507A180: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1507A184: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1507A188: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1507A18C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x1507A190: nop

    // 0x1507A194: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1507A198: beq         $at, $zero, L_1507A1A8
    if (ctx->r1 == 0) {
        // 0x1507A19C: nop
    
            goto L_1507A1A8;
    }
    // 0x1507A19C: nop

    // 0x1507A1A0: b           L_1507A1C0
    // 0x1507A1A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_1507A1C0;
    // 0x1507A1A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1507A1A8:
    // 0x1507A1A8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507A1AC: lbu         $v1, 0x1890($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1890);
    // 0x1507A1B0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1507A1B4: beql        $at, $zero, L_1507A1C4
    if (ctx->r1 == 0) {
        // 0x1507A1B8: mtc1        $v0, $f18
        ctx->f18.u32l = ctx->r2;
            goto L_1507A1C4;
    }
    goto skip_0;
    // 0x1507A1B8: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    skip_0:
    // 0x1507A1BC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1507A1C0:
    // 0x1507A1C0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
L_1507A1C4:
    // 0x1507A1C4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507A1C8: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x1507A1CC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1507A1D0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x1507A1D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1507A1D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1507A1DC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1507A1E0: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x1507A1E4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x1507A1E8: lwc1        $f8, 0x44($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X44);
    // 0x1507A1EC: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x1507A1F0: nop

    // 0x1507A1F4: bc1f        L_1507A208
    if (!c1cs) {
        // 0x1507A1F8: nop
    
            goto L_1507A208;
    }
    // 0x1507A1F8: nop

    // 0x1507A1FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1507A200: nop

    // 0x1507A204: swc1        $f10, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f10.u32l;
L_1507A208:
    // 0x1507A208: jr          $ra
    // 0x1507A20C: nop

    return;
    return;
    // 0x1507A20C: nop

;}
RECOMP_FUNC void func_151B32C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B32C8: addiu       $sp, $sp, -0x148
    ctx->r29 = ADD32(ctx->r29, -0X148);
    // 0x151B32CC: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x151B32D0: sll         $s2, $a2, 16
    ctx->r18 = S32(ctx->r6 << 16);
    // 0x151B32D4: sra         $t6, $s2, 16
    ctx->r14 = S32(SIGNED(ctx->r18) >> 16);
    // 0x151B32D8: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x151B32DC: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x151B32E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151B32E4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x151B32E8: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x151B32EC: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x151B32F0: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x151B32F4: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x151B32F8: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x151B32FC: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x151B3300: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x151B3304: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x151B3308: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x151B330C: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x151B3310: sw          $a2, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r6;
    // 0x151B3314: lbu         $v0, 0x10($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X10);
    // 0x151B3318: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x151B331C: beq         $t7, $zero, L_151B332C
    if (ctx->r15 == 0) {
        // 0x151B3320: andi        $t8, $v0, 0x8
        ctx->r24 = ctx->r2 & 0X8;
            goto L_151B332C;
    }
    // 0x151B3320: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x151B3324: b           L_151B39FC
    // 0x151B3328: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151B39FC;
    // 0x151B3328: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151B332C:
    // 0x151B332C: beq         $t8, $zero, L_151B333C
    if (ctx->r24 == 0) {
        // 0x151B3330: andi        $t9, $v0, 0x2
        ctx->r25 = ctx->r2 & 0X2;
            goto L_151B333C;
    }
    // 0x151B3330: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x151B3334: b           L_151B39FC
    // 0x151B3338: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151B39FC;
    // 0x151B3338: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151B333C:
    // 0x151B333C: beq         $t9, $zero, L_151B334C
    if (ctx->r25 == 0) {
        // 0x151B3340: addiu       $a0, $s1, 0x140
        ctx->r4 = ADD32(ctx->r17, 0X140);
            goto L_151B334C;
    }
    // 0x151B3340: addiu       $a0, $s1, 0x140
    ctx->r4 = ADD32(ctx->r17, 0X140);
    // 0x151B3344: b           L_151B39FC
    // 0x151B3348: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151B39FC;
    // 0x151B3348: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151B334C:
    // 0x151B334C: sll         $a1, $s2, 16
    ctx->r5 = S32(ctx->r18 << 16);
    // 0x151B3350: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x151B3354: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x151B3358: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x151B335C: addiu       $a3, $sp, 0x140
    ctx->r7 = ADD32(ctx->r29, 0X140);
    // 0x151B3360: jal         0x151D5D60
    // 0x151B3364: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x151B3364: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x151B3368: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x151B336C: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x151B3370: addu        $t8, $t8, $s2
    ctx->r24 = ADD32(ctx->r24, ctx->r18);
    // 0x151B3374: beq         $t7, $zero, L_151B39F8
    if (ctx->r15 == 0) {
        // 0x151B3378: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_151B39F8;
    }
    // 0x151B3378: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151B337C: subu        $t8, $t8, $s2
    ctx->r24 = SUB32(ctx->r24, ctx->r18);
    // 0x151B3380: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151B3384: lw          $t9, -0x4010($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4010);
    // 0x151B3388: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151B338C: addu        $t8, $t8, $s2
    ctx->r24 = ADD32(ctx->r24, ctx->r18);
    // 0x151B3390: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x151B3394: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151B3398: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x151B339C: addiu       $t2, $t2, 0x2F8
    ctx->r10 = ADD32(ctx->r10, 0X2F8);
    // 0x151B33A0: sb          $t6, 0xEF($sp)
    MEM_B(0XEF, ctx->r29) = ctx->r14;
    // 0x151B33A4: addiu       $t7, $sp, 0xDC
    ctx->r15 = ADD32(ctx->r29, 0XDC);
    // 0x151B33A8: addiu       $t8, $sp, 0xD8
    ctx->r24 = ADD32(ctx->r29, 0XD8);
    // 0x151B33AC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151B33B0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151B33B4: addiu       $t7, $sp, 0xCC
    ctx->r15 = ADD32(ctx->r29, 0XCC);
    // 0x151B33B8: addiu       $t8, $sp, 0xC8
    ctx->r24 = ADD32(ctx->r29, 0XC8);
    // 0x151B33BC: addiu       $t9, $sp, 0xD4
    ctx->r25 = ADD32(ctx->r29, 0XD4);
    // 0x151B33C0: addiu       $t6, $sp, 0xD0
    ctx->r14 = ADD32(ctx->r29, 0XD0);
    // 0x151B33C4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x151B33C8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151B33CC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x151B33D0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x151B33D4: addiu       $t7, $sp, 0xBF
    ctx->r15 = ADD32(ctx->r29, 0XBF);
    // 0x151B33D8: addiu       $t8, $sp, 0xBE
    ctx->r24 = ADD32(ctx->r29, 0XBE);
    // 0x151B33DC: addiu       $t9, $sp, 0xC4
    ctx->r25 = ADD32(ctx->r29, 0XC4);
    // 0x151B33E0: addiu       $t6, $sp, 0xC0
    ctx->r14 = ADD32(ctx->r29, 0XC0);
    // 0x151B33E4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x151B33E8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x151B33EC: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x151B33F0: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x151B33F4: sw          $t2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r10;
    // 0x151B33F8: lbu         $t9, 0x2E($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X2E);
    // 0x151B33FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151B3400: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    // 0x151B3404: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x151B3408: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151B340C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x151B3410: lw          $t9, -0x4F0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4F0);
    // 0x151B3414: addiu       $a2, $sp, 0xE4
    ctx->r6 = ADD32(ctx->r29, 0XE4);
    // 0x151B3418: addiu       $a3, $sp, 0xE0
    ctx->r7 = ADD32(ctx->r29, 0XE0);
    // 0x151B341C: jalr        $t9
    // 0x151B3420: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x151B3420: nop

    after_1:
    // 0x151B3424: bne         $v0, $zero, L_151B3434
    if (ctx->r2 != 0) {
        // 0x151B3428: lw          $t2, 0x120($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X120);
            goto L_151B3434;
    }
    // 0x151B3428: lw          $t2, 0x120($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X120);
    // 0x151B342C: b           L_151B39FC
    // 0x151B3430: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151B39FC;
    // 0x151B3430: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151B3434:
    // 0x151B3434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151B3438: lw          $a1, 0xE8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE8);
    // 0x151B343C: lw          $a2, 0xE4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE4);
    // 0x151B3440: jal         0x15142B7C
    // 0x151B3444: sw          $t2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r10;
    func_15142B7C(rdram, ctx);
        goto after_2;
    // 0x151B3444: sw          $t2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r10;
    after_2:
    // 0x151B3448: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x151B344C: addiu       $s0, $sp, 0xEF
    ctx->r16 = ADD32(ctx->r29, 0XEF);
    // 0x151B3450: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151B3454: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B3458: lw          $a1, 0xD0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD0);
    // 0x151B345C: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    // 0x151B3460: lw          $a3, 0xC8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC8);
    // 0x151B3464: jal         0x15142C10
    // 0x151B3468: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_15142C10(rdram, ctx);
        goto after_3;
    // 0x151B3468: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_3:
    // 0x151B346C: lw          $t8, 0xDC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XDC);
    // 0x151B3470: lw          $t6, 0xD8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD8);
    // 0x151B3474: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x151B3478: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B347C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151B3480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151B3484: lw          $a3, 0xE0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE0);
    // 0x151B3488: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x151B348C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151B3490: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151B3494: jal         0x15142CF0
    // 0x151B3498: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_15142CF0(rdram, ctx);
        goto after_4;
    // 0x151B3498: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_4:
    // 0x151B349C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B34A0: lbu         $a1, 0xBE($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBE);
    // 0x151B34A4: jal         0x1513F4E4
    // 0x151B34A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_5;
    // 0x151B34A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x151B34AC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151B34B0: addiu       $t7, $zero, 0x36
    ctx->r15 = ADD32(0, 0X36);
    // 0x151B34B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x151B34B8: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x151B34BC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151B34C0: addiu       $a1, $a1, 0xDE8
    ctx->r5 = ADD32(ctx->r5, 0XDE8);
    // 0x151B34C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B34C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151B34CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B34D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B34D4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151B34D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151B34DC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151B34E0: jal         0x15142E24
    // 0x151B34E4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    func_15142E24(rdram, ctx);
        goto after_6;
    // 0x151B34E4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    after_6:
    // 0x151B34E8: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x151B34EC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x151B34F0: lw          $t7, 0x2C9C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2C9C);
    // 0x151B34F4: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x151B34F8: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x151B34FC: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x151B3500: or          $t9, $t8, $zero
    ctx->r25 = ctx->r24 | 0;
    // 0x151B3504: lbu         $t8, 0xBF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBF);
    // 0x151B3508: ori         $a1, $t9, 0x2CA0
    ctx->r5 = ctx->r25 | 0X2CA0;
    // 0x151B350C: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x151B3510: addiu       $t9, $t9, 0x4AC8
    ctx->r25 = ADD32(ctx->r25, 0X4AC8);
    // 0x151B3514: sll         $t6, $t8, 3
    ctx->r14 = S32(ctx->r24 << 3);
    // 0x151B3518: addu        $v1, $t6, $t9
    ctx->r3 = ADD32(ctx->r14, ctx->r25);
    // 0x151B351C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x151B3520: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x151B3524: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B3528: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x151B352C: jal         0x15142FBC
    // 0x151B3530: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    func_15142FBC(rdram, ctx);
        goto after_7;
    // 0x151B3530: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    after_7:
    // 0x151B3534: lw          $t2, 0x120($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X120);
    // 0x151B3538: addiu       $s3, $sp, 0x134
    ctx->r19 = ADD32(ctx->r29, 0X134);
    // 0x151B353C: addiu       $s4, $sp, 0x128
    ctx->r20 = ADD32(ctx->r29, 0X128);
    // 0x151B3540: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151B3544: addiu       $v1, $s1, 0x48
    ctx->r3 = ADD32(ctx->r17, 0X48);
    // 0x151B3548: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x151B354C: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x151B3550: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x151B3554: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x151B3558: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
    // 0x151B355C: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x151B3560: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x151B3564: lw          $at, 0x18($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X18);
    // 0x151B3568: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x151B356C: lw          $t6, 0x1C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X1C);
    // 0x151B3570: sw          $t6, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r14;
    // 0x151B3574: lw          $at, 0x20($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X20);
    // 0x151B3578: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x151B357C: lwc1        $f4, 0x134($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X134);
    // 0x151B3580: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x151B3584: lwc1        $f10, 0x4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X4);
    // 0x151B3588: lwc1        $f8, 0x138($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X138);
    // 0x151B358C: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B3590: lwc1        $f6, 0x13C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x151B3594: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151B3598: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x151B359C: sub.s       $f24, $f6, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x151B35A0: lwc1        $f10, 0x12C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x151B35A4: sub.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x151B35A8: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x151B35AC: sub.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151B35B0: mul.s       $f8, $f2, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x151B35B4: lwc1        $f6, 0x128($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X128);
    // 0x151B35B8: mul.s       $f10, $f22, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x151B35BC: sub.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x151B35C0: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151B35C4: mul.s       $f8, $f18, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x151B35C8: nop

    // 0x151B35CC: mul.s       $f10, $f24, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x151B35D0: nop

    // 0x151B35D4: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x151B35D8: nop

    // 0x151B35DC: mul.s       $f4, $f20, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x151B35E0: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151B35E4: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151B35E8: nop

    // 0x151B35EC: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x151B35F0: sub.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x151B35F4: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x151B35F8: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151B35FC: lwc1        $f10, 0x134($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X134);
    // 0x151B3600: add.s       $f28, $f6, $f4
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f28.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151B3604: c.eq.s      $f30, $f28
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f30.fl == ctx->f28.fl;
    // 0x151B3608: nop

    // 0x151B360C: bc1f        L_151B3624
    if (!c1cs) {
        // 0x151B3610: nop
    
            goto L_151B3624;
    }
    // 0x151B3610: nop

    // 0x151B3614: mov.s       $f18, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    ctx->f18.fl = ctx->f30.fl;
    // 0x151B3618: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    // 0x151B361C: b           L_151B3648
    // 0x151B3620: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
        goto L_151B3648;
    // 0x151B3620: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
L_151B3624:
    // 0x151B3624: sqrt.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = sqrtf(ctx->f28.fl);
    // 0x151B3628: lwc1        $f8, 0x30($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X30);
    // 0x151B362C: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151B3630: mul.s       $f18, $f12, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x151B3634: nop

    // 0x151B3638: mul.s       $f20, $f14, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x151B363C: nop

    // 0x151B3640: mul.s       $f22, $f16, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151B3644: nop

L_151B3648:
    // 0x151B3648: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x151B364C: lw          $t8, 0x140($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X140);
    // 0x151B3650: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151B3654: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x151B3658: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B365C: addiu       $t3, $zero, 0x3C0
    ctx->r11 = ADD32(0, 0X3C0);
    // 0x151B3660: addiu       $a3, $v1, 0x18
    ctx->r7 = ADD32(ctx->r3, 0X18);
    // 0x151B3664: lui         $ra, 0x502
    ctx->r31 = S32(0X502 << 16);
    // 0x151B3668: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x151B366C: lui         $t5, 0x500
    ctx->r13 = S32(0X500 << 16);
    // 0x151B3670: lui         $t4, 0x100
    ctx->r12 = S32(0X100 << 16);
    // 0x151B3674: sh          $t9, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r25;
    // 0x151B3678: lwc1        $f8, 0x138($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X138);
    // 0x151B367C: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x151B3680: ori         $t4, $t4, 0x4008
    ctx->r12 = ctx->r12 | 0X4008;
    // 0x151B3684: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x151B3688: ori         $t5, $t5, 0x204
    ctx->r13 = ctx->r13 | 0X204;
    // 0x151B368C: ori         $ra, $ra, 0x604
    ctx->r31 = ctx->r31 | 0X604;
    // 0x151B3690: addiu       $t1, $a3, -0x18
    ctx->r9 = ADD32(ctx->r7, -0X18);
    // 0x151B3694: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B3698: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x151B369C: addiu       $s2, $zero, 0xF0
    ctx->r18 = ADD32(0, 0XF0);
    // 0x151B36A0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x151B36A4: nop

    // 0x151B36A8: sh          $t7, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r15;
    // 0x151B36AC: lwc1        $f4, 0x13C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x151B36B0: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x151B36B4: add.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x151B36B8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B36BC: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x151B36C0: nop

    // 0x151B36C4: sh          $t6, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r14;
    // 0x151B36C8: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x151B36CC: sh          $zero, 0x8($t9)
    MEM_H(0X8, ctx->r25) = 0;
    // 0x151B36D0: lw          $t8, 0x140($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X140);
    // 0x151B36D4: sh          $zero, 0xA($t8)
    MEM_H(0XA, ctx->r24) = 0;
    // 0x151B36D8: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x151B36DC: sb          $a0, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r4;
    // 0x151B36E0: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x151B36E4: sb          $a1, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r5;
    // 0x151B36E8: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x151B36EC: sb          $a1, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r5;
    // 0x151B36F0: lw          $t8, 0x140($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X140);
    // 0x151B36F4: sb          $a0, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r4;
    // 0x151B36F8: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x151B36FC: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x151B3700: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x151B3704: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x151B3708: sw          $t7, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r15;
    // 0x151B370C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B3710: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x151B3714: nop

    // 0x151B3718: sh          $t8, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r24;
    // 0x151B371C: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
    // 0x151B3720: lw          $t8, 0x140($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X140);
    // 0x151B3724: sub.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x151B3728: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B372C: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x151B3730: nop

    // 0x151B3734: sh          $t9, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r25;
    // 0x151B3738: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x151B373C: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x151B3740: sub.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x151B3744: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B3748: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x151B374C: nop

    // 0x151B3750: sh          $t6, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r14;
    // 0x151B3754: lw          $t8, 0x140($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X140);
    // 0x151B3758: sh          $t3, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r11;
    // 0x151B375C: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x151B3760: sh          $zero, 0xA($t7)
    MEM_H(0XA, ctx->r15) = 0;
    // 0x151B3764: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x151B3768: sb          $a0, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r4;
    // 0x151B376C: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x151B3770: sb          $a1, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r5;
    // 0x151B3774: lw          $t8, 0x140($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X140);
    // 0x151B3778: sb          $a1, 0xE($t8)
    MEM_B(0XE, ctx->r24) = ctx->r5;
    // 0x151B377C: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x151B3780: sb          $a0, 0xF($t7)
    MEM_B(0XF, ctx->r15) = ctx->r4;
    // 0x151B3784: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x151B3788: addiu       $t9, $t6, 0x10
    ctx->r25 = ADD32(ctx->r14, 0X10);
    // 0x151B378C: sw          $t9, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r25;
    // 0x151B3790: lw          $a2, 0x13C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X13C);
L_151B3794:
    // 0x151B3794: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151B3798: addiu       $t0, $t0, 0x18
    ctx->r8 = ADD32(ctx->r8, 0X18);
    // 0x151B379C: addiu       $a3, $a3, 0x18
    ctx->r7 = ADD32(ctx->r7, 0X18);
    // 0x151B37A0: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x151B37A4: lw          $t6, 0x4($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X4);
    // 0x151B37A8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151B37AC: sw          $t6, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r14;
    // 0x151B37B0: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x151B37B4: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x151B37B8: lw          $at, -0x18($a3)
    ctx->r1 = MEM_W(ctx->r7, -0X18);
    // 0x151B37BC: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x151B37C0: lw          $t8, -0x14($a3)
    ctx->r24 = MEM_W(ctx->r7, -0X14);
    // 0x151B37C4: sw          $t8, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r24;
    // 0x151B37C8: lw          $at, -0x10($a3)
    ctx->r1 = MEM_W(ctx->r7, -0X10);
    // 0x151B37CC: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x151B37D0: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x151B37D4: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x151B37D8: lwc1        $f6, 0x4($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X4);
    // 0x151B37DC: lwc1        $f10, 0x12C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x151B37E0: sub.s       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151B37E4: lwc1        $f8, 0x130($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X130);
    // 0x151B37E8: sub.s       $f22, $f10, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151B37EC: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x151B37F0: sub.s       $f24, $f8, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x151B37F4: lwc1        $f6, 0x138($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X138);
    // 0x151B37F8: sub.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151B37FC: lwc1        $f10, 0x13C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x151B3800: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151B3804: mul.s       $f6, $f2, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x151B3808: lwc1        $f10, 0x134($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X134);
    // 0x151B380C: mul.s       $f8, $f22, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x151B3810: sub.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x151B3814: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151B3818: mul.s       $f6, $f18, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x151B381C: nop

    // 0x151B3820: mul.s       $f8, $f24, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x151B3824: nop

    // 0x151B3828: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x151B382C: nop

    // 0x151B3830: mul.s       $f10, $f20, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x151B3834: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151B3838: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151B383C: nop

    // 0x151B3840: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x151B3844: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x151B3848: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x151B384C: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151B3850: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x151B3854: add.s       $f28, $f4, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x151B3858: c.eq.s      $f30, $f28
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f30.fl == ctx->f28.fl;
    // 0x151B385C: nop

    // 0x151B3860: bc1f        L_151B3878
    if (!c1cs) {
        // 0x151B3864: nop
    
            goto L_151B3878;
    }
    // 0x151B3864: nop

    // 0x151B3868: mov.s       $f18, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    ctx->f18.fl = ctx->f30.fl;
    // 0x151B386C: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    // 0x151B3870: b           L_151B389C
    // 0x151B3874: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
        goto L_151B389C;
    // 0x151B3874: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
L_151B3878:
    // 0x151B3878: sqrt.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = sqrtf(ctx->f28.fl);
    // 0x151B387C: lwc1        $f6, 0x30($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X30);
    // 0x151B3880: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151B3884: mul.s       $f18, $f12, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x151B3888: nop

    // 0x151B388C: mul.s       $f20, $f14, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x151B3890: nop

    // 0x151B3894: mul.s       $f22, $f16, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151B3898: nop

L_151B389C:
    // 0x151B389C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x151B38A0: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x151B38A4: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B38A8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x151B38AC: nop

    // 0x151B38B0: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    // 0x151B38B4: lwc1        $f6, 0x12C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x151B38B8: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x151B38BC: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x151B38C0: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B38C4: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x151B38C8: nop

    // 0x151B38CC: sh          $t6, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r14;
    // 0x151B38D0: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x151B38D4: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x151B38D8: add.s       $f6, $f10, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f22.fl;
    // 0x151B38DC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B38E0: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x151B38E4: nop

    // 0x151B38E8: sh          $t8, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r24;
    // 0x151B38EC: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x151B38F0: sh          $zero, 0x8($t7)
    MEM_H(0X8, ctx->r15) = 0;
    // 0x151B38F4: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x151B38F8: sh          $a2, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r6;
    // 0x151B38FC: lw          $t8, 0x140($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X140);
    // 0x151B3900: sb          $a0, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r4;
    // 0x151B3904: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x151B3908: sb          $a1, 0xD($t6)
    MEM_B(0XD, ctx->r14) = ctx->r5;
    // 0x151B390C: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x151B3910: sb          $a1, 0xE($t7)
    MEM_B(0XE, ctx->r15) = ctx->r5;
    // 0x151B3914: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x151B3918: sb          $a0, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r4;
    // 0x151B391C: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x151B3920: lw          $t8, 0x140($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X140);
    // 0x151B3924: sub.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x151B3928: addiu       $t6, $t8, 0x10
    ctx->r14 = ADD32(ctx->r24, 0X10);
    // 0x151B392C: sw          $t6, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r14;
    // 0x151B3930: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B3934: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x151B3938: nop

    // 0x151B393C: sh          $t9, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r25;
    // 0x151B3940: lwc1        $f8, 0x12C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x151B3944: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x151B3948: sub.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x151B394C: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B3950: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x151B3954: nop

    // 0x151B3958: sh          $t7, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r15;
    // 0x151B395C: lwc1        $f6, 0x130($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X130);
    // 0x151B3960: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x151B3964: sub.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f22.fl;
    // 0x151B3968: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B396C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x151B3970: nop

    // 0x151B3974: sh          $t8, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r24;
    // 0x151B3978: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x151B397C: sh          $t3, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r11;
    // 0x151B3980: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x151B3984: sh          $a2, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r6;
    // 0x151B3988: lw          $t8, 0x140($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X140);
    // 0x151B398C: sb          $a0, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r4;
    // 0x151B3990: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x151B3994: sb          $a1, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r5;
    // 0x151B3998: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x151B399C: sb          $a1, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r5;
    // 0x151B39A0: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x151B39A4: sb          $a0, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r4;
    // 0x151B39A8: lw          $t8, 0x140($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X140);
    // 0x151B39AC: addiu       $t7, $t8, 0x10
    ctx->r15 = ADD32(ctx->r24, 0X10);
    // 0x151B39B0: sw          $t7, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r15;
    // 0x151B39B4: lw          $t9, 0x13C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X13C);
    // 0x151B39B8: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x151B39BC: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x151B39C0: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x151B39C4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151B39C8: addiu       $t8, $t6, -0x40
    ctx->r24 = ADD32(ctx->r14, -0X40);
    // 0x151B39CC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151B39D0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151B39D4: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x151B39D8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151B39DC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151B39E0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151B39E4: sw          $ra, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r31;
    // 0x151B39E8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151B39EC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151B39F0: bne         $t0, $s2, L_151B3794
    if (ctx->r8 != ctx->r18) {
        // 0x151B39F4: addiu       $t1, $t1, 0x18
        ctx->r9 = ADD32(ctx->r9, 0X18);
            goto L_151B3794;
    }
    // 0x151B39F4: addiu       $t1, $t1, 0x18
    ctx->r9 = ADD32(ctx->r9, 0X18);
L_151B39F8:
    // 0x151B39F8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151B39FC:
    // 0x151B39FC: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x151B3A00: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x151B3A04: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x151B3A08: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x151B3A0C: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x151B3A10: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x151B3A14: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x151B3A18: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x151B3A1C: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x151B3A20: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x151B3A24: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x151B3A28: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x151B3A2C: jr          $ra
    // 0x151B3A30: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
    return;
    return;
    // 0x151B3A30: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
;}
RECOMP_FUNC void func_150F9AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F9AB0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x150F9AB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150F9AB8: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x150F9ABC: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x150F9AC0: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x150F9AC4: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x150F9AC8: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150F9ACC: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x150F9AD0: lw          $a0, 0x2FA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2FA4);
    // 0x150F9AD4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x150F9AD8: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x150F9ADC: lw          $a3, 0x8C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X8C);
    // 0x150F9AE0: jal         0x15110360
    // 0x150F9AE4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_15110360(rdram, ctx);
        goto after_0;
    // 0x150F9AE4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x150F9AE8: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x150F9AEC: lw          $t7, 0x2FA4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA4);
    // 0x150F9AF0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150F9AF4: lw          $t6, -0x19D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19D8);
    // 0x150F9AF8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x150F9AFC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150F9B00: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x150F9B04: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x150F9B08: lwc1        $f6, 0x2C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x150F9B0C: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x150F9B10: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F9B14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F9B18: lwc1        $f18, 0x30($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X30);
    // 0x150F9B1C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150F9B20: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x150F9B24: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150F9B28: lwc1        $f10, 0x28($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X28);
    // 0x150F9B2C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x150F9B30: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150F9B34: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x150F9B38: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150F9B3C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150F9B40: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150F9B44: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150F9B48: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150F9B4C: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x150F9B50: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x150F9B54: jal         0x15110544
    // 0x150F9B58: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_15110544(rdram, ctx);
        goto after_1;
    // 0x150F9B58: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_1:
    // 0x150F9B5C: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x150F9B60: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x150F9B64: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x150F9B68: lui         $t5, 0xEF00
    ctx->r13 = S32(0XEF00 << 16);
    // 0x150F9B6C: lui         $t7, 0xF0A
    ctx->r15 = S32(0XF0A << 16);
    // 0x150F9B70: ori         $t7, $t7, 0x4004
    ctx->r15 = ctx->r15 | 0X4004;
    // 0x150F9B74: ori         $t5, $t5, 0x2C0F
    ctx->r13 = ctx->r13 | 0X2C0F;
    // 0x150F9B78: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x150F9B7C: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x150F9B80: lui         $t6, 0xFC35
    ctx->r14 = S32(0XFC35 << 16);
    // 0x150F9B84: ori         $t6, $t6, 0x7E6A
    ctx->r14 = ctx->r14 | 0X7E6A;
    // 0x150F9B88: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150F9B8C: sw          $t8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r24;
    // 0x150F9B90: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x150F9B94: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x150F9B98: jal         0x150FB4C0
    // 0x150F9B9C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_150FB4C0(rdram, ctx);
        goto after_2;
    // 0x150F9B9C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x150F9BA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150F9BA4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x150F9BA8: jr          $ra
    // 0x150F9BAC: nop

    return;
    return;
    // 0x150F9BAC: nop

;}
RECOMP_FUNC void func_1507A2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A2F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1507A2FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507A300: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507A304: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507A308: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1507A30C: addiu       $a1, $a1, 0x1890
    ctx->r5 = ADD32(ctx->r5, 0X1890);
    // 0x1507A310: addiu       $v1, $v1, -0x3D30
    ctx->r3 = ADD32(ctx->r3, -0X3D30);
    // 0x1507A314: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1507A318: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
L_1507A31C:
    // 0x1507A31C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1507A320: beql        $t6, $zero, L_1507A348
    if (ctx->r14 == 0) {
        // 0x1507A324: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_1507A348;
    }
    goto skip_0;
    // 0x1507A324: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x1507A328: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x1507A32C: lbu         $t8, 0x4($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X4);
    // 0x1507A330: addu        $t9, $a2, $a0
    ctx->r25 = ADD32(ctx->r6, ctx->r4);
    // 0x1507A334: bnel        $t7, $t8, L_1507A348
    if (ctx->r15 != ctx->r24) {
        // 0x1507A338: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_1507A348;
    }
    goto skip_1;
    // 0x1507A338: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_1:
    // 0x1507A33C: sb          $v0, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r2;
    // 0x1507A340: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1507A344: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_1507A348:
    // 0x1507A348: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x1507A34C: bne         $at, $zero, L_1507A31C
    if (ctx->r1 != 0) {
        // 0x1507A350: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_1507A31C;
    }
    // 0x1507A350: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x1507A354: beql        $a0, $zero, L_1507A3A8
    if (ctx->r4 == 0) {
        // 0x1507A358: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507A3A8;
    }
    goto skip_2;
    // 0x1507A358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x1507A35C: jal         0x150ADA20
    // 0x1507A360: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1507A360: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x1507A364: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x1507A368: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507A36C: addiu       $a1, $a1, 0x154C
    ctx->r5 = ADD32(ctx->r5, 0X154C);
    // 0x1507A370: divu        $zero, $v0, $a0
    lo = S32(U32(ctx->r2) / U32(ctx->r4)); hi = S32(U32(ctx->r2) % U32(ctx->r4));
    // 0x1507A374: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x1507A378: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x1507A37C: mfhi        $t1
    ctx->r9 = hi;
    // 0x1507A380: lbu         $t0, 0x222($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X222);
    // 0x1507A384: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x1507A388: sb          $t0, 0xA8($v1)
    MEM_B(0XA8, ctx->r3) = ctx->r8;
    // 0x1507A38C: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x1507A390: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x1507A394: bne         $a0, $zero, L_1507A3A0
    if (ctx->r4 != 0) {
        // 0x1507A398: nop
    
            goto L_1507A3A0;
    }
    // 0x1507A398: nop

    // 0x1507A39C: break       7
    do_break(352822172);
L_1507A3A0:
    // 0x1507A3A0: sb          $t3, 0x222($t4)
    MEM_B(0X222, ctx->r12) = ctx->r11;
    // 0x1507A3A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507A3A8:
    // 0x1507A3A8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1507A3AC: jr          $ra
    // 0x1507A3B0: nop

    return;
    return;
    // 0x1507A3B0: nop

;}
RECOMP_FUNC void func_151A55D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A55D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A55D8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151A55DC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151A55E0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151A55E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A55E8: lbu         $t7, 0x19($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X19);
    // 0x151A55EC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151A55F0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151A55F4: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x151A55F8: lw          $v0, -0x6FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6FC);
    // 0x151A55FC: beql        $v0, $zero, L_151A5610
    if (ctx->r2 == 0) {
        // 0x151A5600: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A5610;
    }
    goto skip_0;
    // 0x151A5600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151A5604: jalr        $v0
    // 0x151A5608: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x151A5608: nop

    after_0:
    // 0x151A560C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151A5610:
    // 0x151A5610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A5614: jr          $ra
    // 0x151A5618: nop

    return;
    return;
    // 0x151A5618: nop

;}
RECOMP_FUNC void func_1507B5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B5C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507B5C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B5CC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507B5D0: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507B5D4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507B5D8: lbu         $t6, 0x1891($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1891);
    // 0x1507B5DC: lw          $t8, 0x31C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X31C);
    // 0x1507B5E0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507B5E4: addiu       $v0, $v0, 0x1892
    ctx->r2 = ADD32(ctx->r2, 0X1892);
    // 0x1507B5E8: lbu         $t9, 0x75($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X75);
    // 0x1507B5EC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B5F0: bne         $t6, $t9, L_1507B604
    if (ctx->r14 != ctx->r25) {
        // 0x1507B5F4: nop
    
            goto L_1507B604;
    }
    // 0x1507B5F4: nop

    // 0x1507B5F8: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x1507B5FC: xori        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 ^ 0X1;
    // 0x1507B600: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_1507B604:
    // 0x1507B604: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507B608: addiu       $v0, $v0, 0x1892
    ctx->r2 = ADD32(ctx->r2, 0X1892);
    // 0x1507B60C: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x1507B610: beql        $t2, $zero, L_1507B624
    if (ctx->r10 == 0) {
        // 0x1507B614: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507B624;
    }
    goto skip_0;
    // 0x1507B614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1507B618: jal         0x15075400
    // 0x1507B61C: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x1507B61C: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x1507B620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507B624:
    // 0x1507B624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507B628: jr          $ra
    // 0x1507B62C: nop

    return;
    return;
    // 0x1507B62C: nop

;}
RECOMP_FUNC void func_1516FBCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516FBCC: lbu         $v1, 0x24($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X24);
    // 0x1516FBD0: lbu         $v0, 0x1F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1F);
    // 0x1516FBD4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1516FBD8: beq         $v1, $zero, L_1516FC18
    if (ctx->r3 == 0) {
        // 0x1516FBDC: nop
    
            goto L_1516FC18;
    }
    // 0x1516FBDC: nop

    // 0x1516FBE0: beq         $v0, $at, L_1516FC10
    if (ctx->r2 == ctx->r1) {
        // 0x1516FBE4: lui         $a1, 0x800C
        ctx->r5 = S32(0X800C << 16);
            goto L_1516FC10;
    }
    // 0x1516FBE4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1516FBE8: addiu       $a1, $a1, -0x161C
    ctx->r5 = ADD32(ctx->r5, -0X161C);
    // 0x1516FBEC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x1516FBF0: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x1516FBF4: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1516FBF8: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x1516FBFC: bnel        $at, $zero, L_1516FC0C
    if (ctx->r1 != 0) {
        // 0x1516FC00: sb          $v0, 0x1F($a0)
        MEM_B(0X1F, ctx->r4) = ctx->r2;
            goto L_1516FC0C;
    }
    goto skip_0;
    // 0x1516FC00: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
    skip_0:
    // 0x1516FC04: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x1516FC08: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
L_1516FC0C:
    // 0x1516FC0C: lbu         $v1, 0x24($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X24);
L_1516FC10:
    // 0x1516FC10: b           L_1516FC48
    // 0x1516FC14: nop

        goto L_1516FC48;
    // 0x1516FC14: nop

L_1516FC18:
    // 0x1516FC18: beq         $v0, $zero, L_1516FC48
    if (ctx->r2 == 0) {
        // 0x1516FC1C: lui         $a1, 0x800C
        ctx->r5 = S32(0X800C << 16);
            goto L_1516FC48;
    }
    // 0x1516FC1C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1516FC20: addiu       $a1, $a1, -0x161C
    ctx->r5 = ADD32(ctx->r5, -0X161C);
    // 0x1516FC24: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x1516FC28: lbu         $t9, 0x2F($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X2F);
    // 0x1516FC2C: sllv        $t0, $t8, $t9
    ctx->r8 = S32(ctx->r24 << (ctx->r25 & 31));
    // 0x1516FC30: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x1516FC34: bgezl       $v0, L_1516FC44
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1516FC38: sb          $v0, 0x1F($a0)
        MEM_B(0X1F, ctx->r4) = ctx->r2;
            goto L_1516FC44;
    }
    goto skip_1;
    // 0x1516FC38: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
    skip_1:
    // 0x1516FC3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516FC40: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
L_1516FC44:
    // 0x1516FC44: lbu         $v1, 0x24($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X24);
L_1516FC48:
    // 0x1516FC48: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1516FC4C: bne         $v1, $zero, L_1516FC64
    if (ctx->r3 != 0) {
        // 0x1516FC50: addiu       $a1, $a1, -0x161C
        ctx->r5 = ADD32(ctx->r5, -0X161C);
            goto L_1516FC64;
    }
    // 0x1516FC50: addiu       $a1, $a1, -0x161C
    ctx->r5 = ADD32(ctx->r5, -0X161C);
    // 0x1516FC54: bnel        $v0, $zero, L_1516FC68
    if (ctx->r2 != 0) {
        // 0x1516FC58: lb          $v0, 0x2D($a0)
        ctx->r2 = MEM_B(ctx->r4, 0X2D);
            goto L_1516FC68;
    }
    goto skip_2;
    // 0x1516FC58: lb          $v0, 0x2D($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2D);
    skip_2:
    // 0x1516FC5C: jr          $ra
    // 0x1516FC60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x1516FC60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1516FC64:
    // 0x1516FC64: lb          $v0, 0x2D($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2D);
L_1516FC68:
    // 0x1516FC68: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x1516FC6C: lh          $t2, 0x14($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X14);
    // 0x1516FC70: lh          $t5, 0x16($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X16);
    // 0x1516FC74: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516FC78: mflo        $v0
    ctx->r2 = lo;
    // 0x1516FC7C: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x1516FC80: sh          $t3, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r11;
    // 0x1516FC84: lb          $v0, 0x2E($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2E);
    // 0x1516FC88: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x1516FC8C: lh          $v1, 0x14($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X14);
    // 0x1516FC90: multu       $v0, $t4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516FC94: mflo        $v0
    ctx->r2 = lo;
    // 0x1516FC98: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x1516FC9C: blez        $v1, L_1516FCAC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1516FCA0: sh          $t6, 0x16($a0)
        MEM_H(0X16, ctx->r4) = ctx->r14;
            goto L_1516FCAC;
    }
    // 0x1516FCA0: sh          $t6, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r14;
    // 0x1516FCA4: bgtzl       $v1, L_1516FCC4
    if (SIGNED(ctx->r3) > 0) {
        // 0x1516FCA8: lbu         $v0, 0x2C($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X2C);
            goto L_1516FCC4;
    }
    goto skip_3;
    // 0x1516FCA8: lbu         $v0, 0x2C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2C);
    skip_3:
L_1516FCAC:
    // 0x1516FCAC: sh          $zero, 0x16($a0)
    MEM_H(0X16, ctx->r4) = 0;
    // 0x1516FCB0: lh          $t7, 0x16($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X16);
    // 0x1516FCB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1516FCB8: jr          $ra
    // 0x1516FCBC: sh          $t7, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r15;
    return;
    return;
    // 0x1516FCBC: sh          $t7, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r15;
    // 0x1516FCC0: lbu         $v0, 0x2C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2C);
L_1516FCC4:
    // 0x1516FCC4: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x1516FCC8: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x1516FCCC: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x1516FCD0: bnel        $at, $zero, L_1516FCE0
    if (ctx->r1 != 0) {
        // 0x1516FCD4: lbu         $v1, 0x26($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X26);
            goto L_1516FCE0;
    }
    goto skip_4;
    // 0x1516FCD4: lbu         $v1, 0x26($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X26);
    skip_4:
    // 0x1516FCD8: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x1516FCDC: lbu         $v1, 0x26($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X26);
L_1516FCE0:
    // 0x1516FCE0: lbu         $a1, 0x29($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X29);
    // 0x1516FCE4: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x1516FCE8: sb          $v0, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r2;
    // 0x1516FCEC: subu        $t0, $a1, $v1
    ctx->r8 = SUB32(ctx->r5, ctx->r3);
    // 0x1516FCF0: multu       $t0, $t9
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516FCF4: lbu         $a1, 0x2A($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X2A);
    // 0x1516FCF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516FCFC: mflo        $t1
    ctx->r9 = lo;
    // 0x1516FD00: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x1516FD04: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x1516FD08: lbu         $v1, 0x27($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X27);
    // 0x1516FD0C: sb          $t3, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r11;
    // 0x1516FD10: subu        $t4, $a1, $v1
    ctx->r12 = SUB32(ctx->r5, ctx->r3);
    // 0x1516FD14: multu       $t4, $t9
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516FD18: lbu         $a1, 0x2B($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X2B);
    // 0x1516FD1C: mflo        $t5
    ctx->r13 = lo;
    // 0x1516FD20: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x1516FD24: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1516FD28: lbu         $v1, 0x28($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X28);
    // 0x1516FD2C: sb          $t7, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = ctx->r15;
    // 0x1516FD30: subu        $t8, $a1, $v1
    ctx->r24 = SUB32(ctx->r5, ctx->r3);
    // 0x1516FD34: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516FD38: mflo        $t9
    ctx->r25 = lo;
    // 0x1516FD3C: sra         $t0, $t9, 8
    ctx->r8 = S32(SIGNED(ctx->r25) >> 8);
    // 0x1516FD40: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x1516FD44: sb          $t1, 0x1E($a0)
    MEM_B(0X1E, ctx->r4) = ctx->r9;
    // 0x1516FD48: jr          $ra
    // 0x1516FD4C: nop

    return;
    return;
    // 0x1516FD4C: nop

;}
RECOMP_FUNC void func_1000BF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000BF60: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1000BF64: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1000BF68: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x1000BF6C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x1000BF70: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x1000BF74: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x1000BF78: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x1000BF7C: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x1000BF80: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x1000BF84: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x1000BF88: srl         $t8, $t6, 8
    ctx->r24 = S32(U32(ctx->r14) >> 8);
    // 0x1000BF8C: andi        $t9, $t6, 0x80
    ctx->r25 = ctx->r14 & 0X80;
    // 0x1000BF90: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x1000BF94: bne         $t9, $zero, L_1000BFD4
    if (ctx->r25 != 0) {
        // 0x1000BF98: sw          $t8, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r24;
            goto L_1000BFD4;
    }
    // 0x1000BF98: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x1000BF9C: jal         0x1000E40C
    // 0x1000BFA0: addiu       $a1, $zero, 0x5DC0
    ctx->r5 = ADD32(0, 0X5DC0);
    func_1000E40C(rdram, ctx);
        goto after_0;
    // 0x1000BFA0: addiu       $a1, $zero, 0x5DC0
    ctx->r5 = ADD32(0, 0X5DC0);
    after_0:
    // 0x1000BFA4: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1000BFA8: lbu         $t0, 0x35EA($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X35EA);
    // 0x1000BFAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1000BFB0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x1000BFB4: bne         $t0, $at, L_1000BFC4
    if (ctx->r8 != ctx->r1) {
        // 0x1000BFB8: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_1000BFC4;
    }
    // 0x1000BFB8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x1000BFBC: jal         0x1000DF68
    // 0x1000BFC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1000DF68(rdram, ctx);
        goto after_1;
    // 0x1000BFC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_1000BFC4:
    // 0x1000BFC4: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x1000BFC8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1000BFCC: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x1000BFD0: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
L_1000BFD4:
    // 0x1000BFD4: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1000BFD8: lw          $t3, -0x1610($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1610);
    // 0x1000BFDC: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x1000BFE0: addiu       $a0, $zero, -0x15F
    ctx->r4 = ADD32(0, -0X15F);
    // 0x1000BFE4: beq         $t3, $at, L_1000BFFC
    if (ctx->r11 == ctx->r1) {
        // 0x1000BFE8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_1000BFFC;
    }
    // 0x1000BFE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000BFEC: jal         0x10008F24
    // 0x1000BFF0: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    func_10008F24(rdram, ctx);
        goto after_2;
    // 0x1000BFF0: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    after_2:
    // 0x1000BFF4: b           L_1000C340
    // 0x1000BFF8: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
        goto L_1000C340;
    // 0x1000BFF8: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
L_1000BFFC:
    // 0x1000BFFC: addiu       $t4, $zero, 0xBB8
    ctx->r12 = ADD32(0, 0XBB8);
    // 0x1000C000: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x1000C004: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x1000C008: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x1000C00C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x1000C010: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1000C014: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1000C018: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1000C01C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x1000C020: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1000C024: addiu       $a2, $zero, 0x197
    ctx->r6 = ADD32(0, 0X197);
    // 0x1000C028: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    // 0x1000C02C: jal         0x100114D0
    // 0x1000C030: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_100114D0(rdram, ctx);
        goto after_3;
    // 0x1000C030: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_3:
    // 0x1000C034: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x1000C038: sltiu       $at, $v0, 0x4000
    ctx->r1 = ctx->r2 < 0X4000 ? 1 : 0;
    // 0x1000C03C: beql        $at, $zero, L_1000C050
    if (ctx->r1 == 0) {
        // 0x1000C040: srl         $t6, $v0, 8
        ctx->r14 = S32(U32(ctx->r2) >> 8);
            goto L_1000C050;
    }
    goto skip_0;
    // 0x1000C040: srl         $t6, $v0, 8
    ctx->r14 = S32(U32(ctx->r2) >> 8);
    skip_0:
    // 0x1000C044: b           L_1000C054
    // 0x1000C048: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_1000C054;
    // 0x1000C048: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x1000C04C: srl         $t6, $v0, 8
    ctx->r14 = S32(U32(ctx->r2) >> 8);
L_1000C050:
    // 0x1000C050: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_1000C054:
    // 0x1000C054: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x1000C058: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x1000C05C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1000C060: srl         $t0, $t9, 8
    ctx->r8 = S32(U32(ctx->r25) >> 8);
    // 0x1000C064: beq         $v0, $t0, L_1000C080
    if (ctx->r2 == ctx->r8) {
        // 0x1000C068: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_1000C080;
    }
    // 0x1000C068: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x1000C06C: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x1000C070: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    // 0x1000C074: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x1000C078: jal         0x1000886C
    // 0x1000C07C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_1000886C(rdram, ctx);
        goto after_4;
    // 0x1000C07C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_4:
L_1000C080:
    // 0x1000C080: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x1000C084: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x1000C088: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1000C08C: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x1000C090: beq         $v1, $t3, L_1000C0F8
    if (ctx->r3 == ctx->r11) {
        // 0x1000C094: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_1000C0F8;
    }
    // 0x1000C094: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1000C098: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x1000C09C: andi        $t5, $a2, 0x7F
    ctx->r13 = ctx->r6 & 0X7F;
    // 0x1000C0A0: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x1000C0A4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x1000C0A8: jal         0x10008744
    // 0x1000C0AC: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    func_10008744(rdram, ctx);
        goto after_5;
    // 0x1000C0AC: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    after_5:
    // 0x1000C0B0: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x1000C0B4: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    // 0x1000C0B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1000C0BC: jal         0x10008744
    // 0x1000C0C0: andi        $a2, $t7, 0x7F
    ctx->r6 = ctx->r15 & 0X7F;
    func_10008744(rdram, ctx);
        goto after_6;
    // 0x1000C0C0: andi        $a2, $t7, 0x7F
    ctx->r6 = ctx->r15 & 0X7F;
    after_6:
    // 0x1000C0C4: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x1000C0C8: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    // 0x1000C0CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1000C0D0: srl         $t6, $a2, 7
    ctx->r14 = S32(U32(ctx->r6) >> 7);
    // 0x1000C0D4: jal         0x100086FC
    // 0x1000C0D8: andi        $a2, $t6, 0xFF
    ctx->r6 = ctx->r14 & 0XFF;
    func_100086FC(rdram, ctx);
        goto after_7;
    // 0x1000C0D8: andi        $a2, $t6, 0xFF
    ctx->r6 = ctx->r14 & 0XFF;
    after_7:
    // 0x1000C0DC: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x1000C0E0: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    // 0x1000C0E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1000C0E8: srl         $t0, $a2, 7
    ctx->r8 = S32(U32(ctx->r6) >> 7);
    // 0x1000C0EC: jal         0x100086FC
    // 0x1000C0F0: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    func_100086FC(rdram, ctx);
        goto after_8;
    // 0x1000C0F0: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    after_8:
    // 0x1000C0F4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
L_1000C0F8:
    // 0x1000C0F8: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x1000C0FC: sll         $t2, $v1, 8
    ctx->r10 = S32(ctx->r3 << 8);
    // 0x1000C100: addiu       $t5, $zero, 0xBB8
    ctx->r13 = ADD32(0, 0XBB8);
    // 0x1000C104: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x1000C108: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x1000C10C: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x1000C110: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x1000C114: addiu       $t6, $sp, 0x4C
    ctx->r14 = ADD32(ctx->r29, 0X4C);
    // 0x1000C118: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
    // 0x1000C11C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x1000C120: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1000C124: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1000C128: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1000C12C: addiu       $a0, $zero, -0x40
    ctx->r4 = ADD32(0, -0X40);
    // 0x1000C130: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000C134: addiu       $a2, $zero, 0x21F
    ctx->r6 = ADD32(0, 0X21F);
    // 0x1000C138: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    // 0x1000C13C: jal         0x100114D0
    // 0x1000C140: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_100114D0(rdram, ctx);
        goto after_9;
    // 0x1000C140: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_9:
    // 0x1000C144: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x1000C148: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x1000C14C: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    // 0x1000C150: beq         $t9, $zero, L_1000C178
    if (ctx->r25 == 0) {
        // 0x1000C154: sltiu       $at, $v0, 0x4000
        ctx->r1 = ctx->r2 < 0X4000 ? 1 : 0;
            goto L_1000C178;
    }
    // 0x1000C154: sltiu       $at, $v0, 0x4000
    ctx->r1 = ctx->r2 < 0X4000 ? 1 : 0;
    // 0x1000C158: beq         $at, $zero, L_1000C164
    if (ctx->r1 == 0) {
        // 0x1000C15C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_1000C164;
    }
    // 0x1000C15C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1000C160: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_1000C164:
    // 0x1000C164: srl         $a2, $v0, 8
    ctx->r6 = S32(U32(ctx->r2) >> 8);
    // 0x1000C168: andi        $t0, $a2, 0xFF
    ctx->r8 = ctx->r6 & 0XFF;
    // 0x1000C16C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x1000C170: jal         0x1000886C
    // 0x1000C174: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_1000886C(rdram, ctx);
        goto after_10;
    // 0x1000C174: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_10:
L_1000C178:
    // 0x1000C178: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x1000C17C: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    // 0x1000C180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000C184: beql        $t1, $zero, L_1000C1A8
    if (ctx->r9 == 0) {
        // 0x1000C188: addiu       $t2, $zero, 0xBB8
        ctx->r10 = ADD32(0, 0XBB8);
            goto L_1000C1A8;
    }
    goto skip_1;
    // 0x1000C188: addiu       $t2, $zero, 0xBB8
    ctx->r10 = ADD32(0, 0XBB8);
    skip_1:
    // 0x1000C18C: jal         0x10008744
    // 0x1000C190: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_10008744(rdram, ctx);
        goto after_11;
    // 0x1000C190: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_11:
    // 0x1000C194: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    // 0x1000C198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000C19C: jal         0x100086FC
    // 0x1000C1A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_100086FC(rdram, ctx);
        goto after_12;
    // 0x1000C1A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x1000C1A4: addiu       $t2, $zero, 0xBB8
    ctx->r10 = ADD32(0, 0XBB8);
L_1000C1A8:
    // 0x1000C1A8: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x1000C1AC: addiu       $t4, $sp, 0x48
    ctx->r12 = ADD32(ctx->r29, 0X48);
    // 0x1000C1B0: addiu       $t5, $sp, 0x4C
    ctx->r13 = ADD32(ctx->r29, 0X4C);
    // 0x1000C1B4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x1000C1B8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x1000C1BC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1000C1C0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1000C1C4: addiu       $a0, $zero, -0x126
    ctx->r4 = ADD32(0, -0X126);
    // 0x1000C1C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000C1CC: addiu       $a2, $zero, 0x290
    ctx->r6 = ADD32(0, 0X290);
    // 0x1000C1D0: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    // 0x1000C1D4: jal         0x100114D0
    // 0x1000C1D8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_100114D0(rdram, ctx);
        goto after_13;
    // 0x1000C1D8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_13:
    // 0x1000C1DC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x1000C1E0: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x1000C1E4: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    // 0x1000C1E8: beq         $t7, $zero, L_1000C210
    if (ctx->r15 == 0) {
        // 0x1000C1EC: sltiu       $at, $v0, 0x4000
        ctx->r1 = ctx->r2 < 0X4000 ? 1 : 0;
            goto L_1000C210;
    }
    // 0x1000C1EC: sltiu       $at, $v0, 0x4000
    ctx->r1 = ctx->r2 < 0X4000 ? 1 : 0;
    // 0x1000C1F0: beq         $at, $zero, L_1000C1FC
    if (ctx->r1 == 0) {
        // 0x1000C1F4: addiu       $a1, $zero, 0x18
        ctx->r5 = ADD32(0, 0X18);
            goto L_1000C1FC;
    }
    // 0x1000C1F4: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x1000C1F8: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_1000C1FC:
    // 0x1000C1FC: srl         $a2, $v0, 8
    ctx->r6 = S32(U32(ctx->r2) >> 8);
    // 0x1000C200: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x1000C204: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x1000C208: jal         0x1000886C
    // 0x1000C20C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_1000886C(rdram, ctx);
        goto after_14;
    // 0x1000C20C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_14:
L_1000C210:
    // 0x1000C210: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x1000C214: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x1000C218: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    // 0x1000C21C: beq         $t6, $zero, L_1000C270
    if (ctx->r14 == 0) {
        // 0x1000C220: andi        $a2, $t9, 0x7F
        ctx->r6 = ctx->r25 & 0X7F;
            goto L_1000C270;
    }
    // 0x1000C220: andi        $a2, $t9, 0x7F
    ctx->r6 = ctx->r25 & 0X7F;
    // 0x1000C224: jal         0x10008744
    // 0x1000C228: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_10008744(rdram, ctx);
        goto after_15;
    // 0x1000C228: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_15:
    // 0x1000C22C: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x1000C230: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    // 0x1000C234: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1000C238: jal         0x10008744
    // 0x1000C23C: andi        $a2, $t1, 0x7F
    ctx->r6 = ctx->r9 & 0X7F;
    func_10008744(rdram, ctx);
        goto after_16;
    // 0x1000C23C: andi        $a2, $t1, 0x7F
    ctx->r6 = ctx->r9 & 0X7F;
    after_16:
    // 0x1000C240: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x1000C244: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    // 0x1000C248: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1000C24C: srl         $t3, $a2, 7
    ctx->r11 = S32(U32(ctx->r6) >> 7);
    // 0x1000C250: jal         0x100086FC
    // 0x1000C254: andi        $a2, $t3, 0xFF
    ctx->r6 = ctx->r11 & 0XFF;
    func_100086FC(rdram, ctx);
        goto after_17;
    // 0x1000C254: andi        $a2, $t3, 0xFF
    ctx->r6 = ctx->r11 & 0XFF;
    after_17:
    // 0x1000C258: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x1000C25C: lbu         $a0, 0x67($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X67);
    // 0x1000C260: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1000C264: srl         $t5, $a2, 7
    ctx->r13 = S32(U32(ctx->r6) >> 7);
    // 0x1000C268: jal         0x100086FC
    // 0x1000C26C: andi        $a2, $t5, 0xFF
    ctx->r6 = ctx->r13 & 0XFF;
    func_100086FC(rdram, ctx);
        goto after_18;
    // 0x1000C26C: andi        $a2, $t5, 0xFF
    ctx->r6 = ctx->r13 & 0XFF;
    after_18:
L_1000C270:
    // 0x1000C270: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000C274: lw          $v0, 0x1F08($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1F08);
    // 0x1000C278: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x1000C27C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1000C280: beql        $t8, $v0, L_1000C338
    if (ctx->r24 == ctx->r2) {
        // 0x1000C284: lw          $t5, 0x60($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X60);
            goto L_1000C338;
    }
    goto skip_2;
    // 0x1000C284: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    skip_2:
    // 0x1000C288: beq         $v0, $at, L_1000C2A4
    if (ctx->r2 == ctx->r1) {
        // 0x1000C28C: lw          $v1, 0x60($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X60);
            goto L_1000C2A4;
    }
    // 0x1000C28C: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x1000C290: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1000C294: beq         $v0, $at, L_1000C304
    if (ctx->r2 == ctx->r1) {
        // 0x1000C298: addiu       $t4, $zero, 0xF8
        ctx->r12 = ADD32(0, 0XF8);
            goto L_1000C304;
    }
    // 0x1000C298: addiu       $t4, $zero, 0xF8
    ctx->r12 = ADD32(0, 0XF8);
    // 0x1000C29C: b           L_1000C338
    // 0x1000C2A0: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
        goto L_1000C338;
    // 0x1000C2A0: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
L_1000C2A4:
    // 0x1000C2A4: andi        $t6, $v1, 0x7C
    ctx->r14 = ctx->r3 & 0X7C;
    // 0x1000C2A8: beq         $t6, $zero, L_1000C2E8
    if (ctx->r14 == 0) {
        // 0x1000C2AC: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_1000C2E8;
    }
    // 0x1000C2AC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1000C2B0: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x1000C2B4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x1000C2B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000C2BC: sra         $t0, $t9, 1
    ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
    // 0x1000C2C0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x1000C2C4: subu        $v0, $t6, $t1
    ctx->r2 = SUB32(ctx->r14, ctx->r9);
    // 0x1000C2C8: bgtz        $v0, L_1000C2E4
    if (SIGNED(ctx->r2) > 0) {
        // 0x1000C2CC: ori         $t3, $v0, 0x80
        ctx->r11 = ctx->r2 | 0X80;
            goto L_1000C2E4;
    }
    // 0x1000C2CC: ori         $t3, $v0, 0x80
    ctx->r11 = ctx->r2 | 0X80;
    // 0x1000C2D0: jal         0x1000E704
    // 0x1000C2D4: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    func_1000E704(rdram, ctx);
        goto after_19;
    // 0x1000C2D4: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_19:
    // 0x1000C2D8: addiu       $t2, $zero, 0x81
    ctx->r10 = ADD32(0, 0X81);
    // 0x1000C2DC: b           L_1000C2E8
    // 0x1000C2E0: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
        goto L_1000C2E8;
    // 0x1000C2E0: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
L_1000C2E4:
    // 0x1000C2E4: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
L_1000C2E8:
    // 0x1000C2E8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x1000C2EC: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x1000C2F0: addiu       $a2, $zero, 0xFE0
    ctx->r6 = ADD32(0, 0XFE0);
    // 0x1000C2F4: jal         0x1000E46C
    // 0x1000C2F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1000E46C(rdram, ctx);
        goto after_20;
    // 0x1000C2F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_20:
    // 0x1000C2FC: b           L_1000C338
    // 0x1000C300: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
        goto L_1000C338;
    // 0x1000C300: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
L_1000C304:
    // 0x1000C304: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    // 0x1000C308: jal         0x10011FA0
    // 0x1000C30C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_10011FA0(rdram, ctx);
        goto after_21;
    // 0x1000C30C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_21:
    // 0x1000C310: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x1000C314: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1000C318: jal         0x1000E704
    // 0x1000C31C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    func_1000E704(rdram, ctx);
        goto after_22;
    // 0x1000C31C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_22:
    // 0x1000C320: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x1000C324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000C328: addiu       $a2, $zero, 0xFE0
    ctx->r6 = ADD32(0, 0XFE0);
    // 0x1000C32C: jal         0x1000E46C
    // 0x1000C330: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    func_1000E46C(rdram, ctx);
        goto after_23;
    // 0x1000C330: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    after_23:
    // 0x1000C334: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
L_1000C338:
    // 0x1000C338: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x1000C33C: or          $v0, $t5, $t7
    ctx->r2 = ctx->r13 | ctx->r15;
L_1000C340:
    // 0x1000C340: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1000C344: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x1000C348: jr          $ra
    // 0x1000C34C: nop

    return;
    return;
    // 0x1000C34C: nop

;}
RECOMP_FUNC void func_15077DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077DBC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15077DC0: lbu         $v0, 0x1890($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1890);
    // 0x15077DC4: addiu       $at, $zero, 0xFA
    ctx->r1 = ADD32(0, 0XFA);
    // 0x15077DC8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15077DCC: beq         $v0, $at, L_15077DDC
    if (ctx->r2 == ctx->r1) {
        // 0x15077DD0: addiu       $v1, $v1, 0x154C
        ctx->r3 = ADD32(ctx->r3, 0X154C);
            goto L_15077DDC;
    }
    // 0x15077DD0: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x15077DD4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15077DD8: sb          $v0, 0x21E($t6)
    MEM_B(0X21E, ctx->r14) = ctx->r2;
L_15077DDC:
    // 0x15077DDC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15077DE0: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x15077DE4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x15077DE8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15077DEC: addiu       $a0, $a0, 0x2104
    ctx->r4 = ADD32(ctx->r4, 0X2104);
    // 0x15077DF0: lbu         $t8, 0x13F($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X13F);
    // 0x15077DF4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x15077DF8: lbu         $t2, 0x21E($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X21E);
    // 0x15077DFC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15077E00: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x15077E04: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x15077E08: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x15077E0C: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x15077E10: lh          $t5, 0x8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X8);
    // 0x15077E14: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x15077E18: nop

    // 0x15077E1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15077E20: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x15077E24: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x15077E28: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x15077E2C: lbu         $t8, 0x13F($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X13F);
    // 0x15077E30: lbu         $t2, 0x21E($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X21E);
    // 0x15077E34: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x15077E38: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x15077E3C: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x15077E40: sll         $t1, $t2, 3
    ctx->r9 = S32(ctx->r10 << 3);
    // 0x15077E44: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x15077E48: lh          $t4, 0xA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA);
    // 0x15077E4C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x15077E50: nop

    // 0x15077E54: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15077E58: swc1        $f10, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
    // 0x15077E5C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x15077E60: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x15077E64: lbu         $t8, 0x13F($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X13F);
    // 0x15077E68: lbu         $t2, 0x21E($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X21E);
    // 0x15077E6C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x15077E70: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x15077E74: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x15077E78: sll         $t0, $t2, 3
    ctx->r8 = S32(ctx->r10 << 3);
    // 0x15077E7C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x15077E80: lh          $t3, 0xC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC);
    // 0x15077E84: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x15077E88: nop

    // 0x15077E8C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15077E90: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x15077E94: jr          $ra
    // 0x15077E98: nop

    return;
    return;
    // 0x15077E98: nop

;}
RECOMP_FUNC void func_151C2734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C2734: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x151C2738: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x151C273C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151C2740: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x151C2744: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x151C2748: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x151C274C: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x151C2750: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x151C2754: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x151C2758: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x151C275C: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x151C2760: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151C2764: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    // 0x151C2768: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x151C276C: sb          $t6, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r14;
    // 0x151C2770: lw          $a2, -0x161C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X161C);
    // 0x151C2774: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151C2778: jal         0x151C436C
    // 0x151C277C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_151C436C(rdram, ctx);
        goto after_0;
    // 0x151C277C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x151C2780: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x151C2784: lw          $a2, -0x165C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X165C);
    // 0x151C2788: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151C278C: jal         0x151C43E0
    // 0x151C2790: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_151C43E0(rdram, ctx);
        goto after_1;
    // 0x151C2790: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x151C2794: bne         $v0, $zero, L_151C27A0
    if (ctx->r2 != 0) {
        // 0x151C2798: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_151C27A0;
    }
    // 0x151C2798: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151C279C: sb          $zero, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = 0;
L_151C27A0:
    // 0x151C27A0: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x151C27A4: lw          $a2, -0x165C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X165C);
    // 0x151C27A8: jal         0x151C4510
    // 0x151C27AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_151C4510(rdram, ctx);
        goto after_2;
    // 0x151C27AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x151C27B0: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x151C27B4: lw          $a2, -0x165C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X165C);
    // 0x151C27B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151C27BC: jal         0x151C455C
    // 0x151C27C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_151C455C(rdram, ctx);
        goto after_3;
    // 0x151C27C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x151C27C4: bnel        $v0, $zero, L_151C27D4
    if (ctx->r2 != 0) {
        // 0x151C27C8: lbu         $t7, 0xA0($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0XA0);
            goto L_151C27D4;
    }
    goto skip_0;
    // 0x151C27C8: lbu         $t7, 0xA0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA0);
    skip_0:
    // 0x151C27CC: sb          $zero, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = 0;
    // 0x151C27D0: lbu         $t7, 0xA0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA0);
L_151C27D4:
    // 0x151C27D4: lb          $t8, 0xD7($sp)
    ctx->r24 = MEM_B(ctx->r29, 0XD7);
    // 0x151C27D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151C27DC: beql        $t7, $zero, L_151C2AA4
    if (ctx->r15 == 0) {
        // 0x151C27E0: lb          $v0, 0xD7($sp)
        ctx->r2 = MEM_B(ctx->r29, 0XD7);
            goto L_151C2AA4;
    }
    goto skip_1;
    // 0x151C27E0: lb          $v0, 0xD7($sp)
    ctx->r2 = MEM_B(ctx->r29, 0XD7);
    skip_1:
    // 0x151C27E4: bnel        $t8, $at, L_151C2AA4
    if (ctx->r24 != ctx->r1) {
        // 0x151C27E8: lb          $v0, 0xD7($sp)
        ctx->r2 = MEM_B(ctx->r29, 0XD7);
            goto L_151C2AA4;
    }
    goto skip_2;
    // 0x151C27E8: lb          $v0, 0xD7($sp)
    ctx->r2 = MEM_B(ctx->r29, 0XD7);
    skip_2:
    // 0x151C27EC: sw          $zero, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = 0;
    // 0x151C27F0: lhu         $a0, 0x9E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X9E);
    // 0x151C27F4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151C27F8: bne         $a0, $zero, L_151C2974
    if (ctx->r4 != 0) {
        // 0x151C27FC: nop
    
            goto L_151C2974;
    }
    // 0x151C27FC: nop

    // 0x151C2800: jal         0x150ADA20
    // 0x151C2804: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151C2804: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    after_4:
    // 0x151C2808: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x151C280C: lw          $a1, 0x2FA0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2FA0);
    // 0x151C2810: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x151C2814: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151C2818: bltz        $a1, L_151C29B8
    if (SIGNED(ctx->r5) < 0) {
        // 0x151C281C: lui         $a0, 0x800E
        ctx->r4 = S32(0X800E << 16);
            goto L_151C29B8;
    }
    // 0x151C281C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151C2820: andi        $t9, $v0, 0x7
    ctx->r25 = ctx->r2 & 0X7;
    // 0x151C2824: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151C2828: addiu       $t2, $t2, -0x418
    ctx->r10 = ADD32(ctx->r10, -0X418);
    // 0x151C282C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x151C2830: addu        $a3, $t1, $t2
    ctx->r7 = ADD32(ctx->r9, ctx->r10);
    // 0x151C2834: lhu         $a2, 0x2($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X2);
    // 0x151C2838: lw          $a0, -0x4010($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4010);
    // 0x151C283C: lwc1        $f20, 0x34($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X34);
    // 0x151C2840: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x151C2844: lwc1        $f22, 0x38($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X38);
    // 0x151C2848: lwc1        $f24, 0x3C($s1)
    ctx->f24.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x151C284C: lwc1        $f18, 0x98($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X98);
    // 0x151C2850: lwc1        $f26, 0x60($s0)
    ctx->f26.u32l = MEM_W(ctx->r16, 0X60);
    // 0x151C2854: lwc1        $f28, 0x64($s0)
    ctx->f28.u32l = MEM_W(ctx->r16, 0X64);
    // 0x151C2858: lwc1        $f30, 0x68($s0)
    ctx->f30.u32l = MEM_W(ctx->r16, 0X68);
    // 0x151C285C: bgez        $a2, L_151C2874
    if (SIGNED(ctx->r6) >= 0) {
        // 0x151C2860: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_151C2874;
    }
    // 0x151C2860: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151C2864: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151C2868: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C286C: nop

    // 0x151C2870: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_151C2874:
    // 0x151C2874: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x151C2878: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
L_151C287C:
    // 0x151C287C: lwc1        $f4, 0x2F8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2F8);
    // 0x151C2880: lwc1        $f8, 0x2FC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2FC);
    // 0x151C2884: lwc1        $f6, 0x300($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X300);
    // 0x151C2888: sub.s       $f12, $f4, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x151C288C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x151C2890: addiu       $a0, $a0, 0x9A0
    ctx->r4 = ADD32(ctx->r4, 0X9A0);
    // 0x151C2894: sub.s       $f14, $f8, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x151C2898: mul.s       $f10, $f26, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f26.fl, ctx->f12.fl);
    // 0x151C289C: addiu       $t3, $a2, -0xA
    ctx->r11 = ADD32(ctx->r6, -0XA);
    // 0x151C28A0: sub.s       $f16, $f6, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x151C28A4: mul.s       $f4, $f14, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f28.fl);
    // 0x151C28A8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151C28AC: mul.s       $f6, $f16, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f30.fl);
    // 0x151C28B0: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x151C28B4: add.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151C28B8: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x151C28BC: nop

    // 0x151C28C0: bc1fl       L_151C2960
    if (!c1cs) {
        // 0x151C28C4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_151C2960;
    }
    goto skip_3;
    // 0x151C28C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_3:
    // 0x151C28C8: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x151C28CC: nop

    // 0x151C28D0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151C28D4: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x151C28D8: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x151C28DC: nop

    // 0x151C28E0: bc1fl       L_151C2960
    if (!c1cs) {
        // 0x151C28E4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_151C2960;
    }
    goto skip_4;
    // 0x151C28E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_4:
    // 0x151C28E8: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151C28EC: nop

    // 0x151C28F0: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x151C28F4: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151C28F8: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x151C28FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x151C2900: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151C2904: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151C2908: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x151C290C: nop

    // 0x151C2910: bc1t        L_151C295C
    if (c1cs) {
        // 0x151C2914: nop
    
            goto L_151C295C;
    }
    // 0x151C2914: nop

    // 0x151C2918: lwc1        $f4, 0x8C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x151C291C: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x151C2920: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x151C2924: nop

    // 0x151C2928: bc1fl       L_151C2960
    if (!c1cs) {
        // 0x151C292C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_151C2960;
    }
    goto skip_5;
    // 0x151C292C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_5:
    // 0x151C2930: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x151C2934: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C2938: lwc1        $f6, -0x55C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X55C8);
    // 0x151C293C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x151C2940: nop

    // 0x151C2944: bc1fl       L_151C2960
    if (!c1cs) {
        // 0x151C2948: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_151C2960;
    }
    goto skip_6;
    // 0x151C2948: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_6:
    // 0x151C294C: lhu         $t4, 0x0($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X0);
    // 0x151C2950: sw          $t4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r12;
    // 0x151C2954: b           L_151C29B8
    // 0x151C2958: sb          $v1, 0xA1($s0)
    MEM_B(0XA1, ctx->r16) = ctx->r3;
        goto L_151C29B8;
    // 0x151C2958: sb          $v1, 0xA1($s0)
    MEM_B(0XA1, ctx->r16) = ctx->r3;
L_151C295C:
    // 0x151C295C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_151C2960:
    // 0x151C2960: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151C2964: beq         $at, $zero, L_151C287C
    if (ctx->r1 == 0) {
        // 0x151C2968: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_151C287C;
    }
    // 0x151C2968: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151C296C: b           L_151C29B8
    // 0x151C2970: nop

        goto L_151C29B8;
    // 0x151C2970: nop

L_151C2974:
    // 0x151C2974: jal         0x1000F3D0
    // 0x151C2978: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    func_1000F3D0(rdram, ctx);
        goto after_5;
    // 0x151C2978: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    after_5:
    // 0x151C297C: beq         $v0, $zero, L_151C29B4
    if (ctx->r2 == 0) {
        // 0x151C2980: lw          $t0, 0xCC($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XCC);
            goto L_151C29B4;
    }
    // 0x151C2980: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x151C2984: lbu         $t5, 0xA1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XA1);
    // 0x151C2988: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151C298C: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x151C2990: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x151C2994: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x151C2998: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151C299C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x151C29A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151C29A4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x151C29A8: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x151C29AC: b           L_151C29B8
    // 0x151C29B0: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
        goto L_151C29B8;
    // 0x151C29B0: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
L_151C29B4:
    // 0x151C29B4: sb          $zero, 0xA0($s0)
    MEM_B(0XA0, ctx->r16) = 0;
L_151C29B8:
    // 0x151C29B8: beq         $t0, $zero, L_151C2AA0
    if (ctx->r8 == 0) {
        // 0x151C29BC: addiu       $t8, $zero, 0x40
        ctx->r24 = ADD32(0, 0X40);
            goto L_151C2AA0;
    }
    // 0x151C29BC: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x151C29C0: sw          $t8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r24;
    // 0x151C29C4: lwc1        $f4, 0x2F8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X2F8);
    // 0x151C29C8: lwc1        $f10, 0x34($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X34);
    // 0x151C29CC: lw          $a3, 0x380($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X380);
    // 0x151C29D0: addiu       $t3, $zero, 0x2710
    ctx->r11 = ADD32(0, 0X2710);
    // 0x151C29D4: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151C29D8: lwc1        $f4, 0x2FC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X2FC);
    // 0x151C29DC: lwc1        $f10, 0x38($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X38);
    // 0x151C29E0: addiu       $t4, $zero, 0x270F
    ctx->r12 = ADD32(0, 0X270F);
    // 0x151C29E4: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C29E8: addiu       $t5, $sp, 0xA8
    ctx->r13 = ADD32(ctx->r29, 0XA8);
    // 0x151C29EC: addiu       $t6, $sp, 0xA4
    ctx->r14 = ADD32(ctx->r29, 0XA4);
    // 0x151C29F0: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151C29F4: lwc1        $f4, 0x300($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X300);
    // 0x151C29F8: lwc1        $f10, 0x3C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x151C29FC: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x151C2A00: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C2A04: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151C2A08: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x151C2A0C: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151C2A10: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x151C2A14: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x151C2A18: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x151C2A1C: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C2A20: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x151C2A24: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x151C2A28: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x151C2A2C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x151C2A30: jal         0x1000A420
    // 0x151C2A34: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_1000A420(rdram, ctx);
        goto after_6;
    // 0x151C2A34: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_6:
    // 0x151C2A38: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x151C2A3C: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x151C2A40: lw          $v0, 0xA8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA8);
    // 0x151C2A44: beq         $t7, $zero, L_151C2A78
    if (ctx->r15 == 0) {
        // 0x151C2A48: andi        $t1, $a2, 0x7F
        ctx->r9 = ctx->r6 & 0X7F;
            goto L_151C2A78;
    }
    // 0x151C2A48: andi        $t1, $a2, 0x7F
    ctx->r9 = ctx->r6 & 0X7F;
    // 0x151C2A4C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x151C2A50: andi        $t8, $a2, 0x7F
    ctx->r24 = ctx->r6 & 0X7F;
    // 0x151C2A54: andi        $t9, $v0, 0x80
    ctx->r25 = ctx->r2 & 0X80;
    // 0x151C2A58: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151C2A5C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x151C2A60: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x151C2A64: addiu       $a1, $zero, 0x6590
    ctx->r5 = ADD32(0, 0X6590);
    // 0x151C2A68: jal         0x10010F30
    // 0x151C2A6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_10010F30(rdram, ctx);
        goto after_7;
    // 0x151C2A6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x151C2A70: b           L_151C2AA0
    // 0x151C2A74: sh          $v0, 0x9E($s0)
    MEM_H(0X9E, ctx->r16) = ctx->r2;
        goto L_151C2AA0;
    // 0x151C2A74: sh          $v0, 0x9E($s0)
    MEM_H(0X9E, ctx->r16) = ctx->r2;
L_151C2A78:
    // 0x151C2A78: lhu         $a0, 0x9E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X9E);
    // 0x151C2A7C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x151C2A80: jal         0x1000F85C
    // 0x151C2A84: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    func_1000F85C(rdram, ctx);
        goto after_8;
    // 0x151C2A84: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_8:
    // 0x151C2A88: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x151C2A8C: lhu         $a0, 0x9E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X9E);
    // 0x151C2A90: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x151C2A94: andi        $t2, $a2, 0x80
    ctx->r10 = ctx->r6 & 0X80;
    // 0x151C2A98: jal         0x1000F85C
    // 0x151C2A9C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_1000F85C(rdram, ctx);
        goto after_9;
    // 0x151C2A9C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_9:
L_151C2AA0:
    // 0x151C2AA0: lb          $v0, 0xD7($sp)
    ctx->r2 = MEM_B(ctx->r29, 0XD7);
L_151C2AA4:
    // 0x151C2AA4: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x151C2AA8: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x151C2AAC: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x151C2AB0: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x151C2AB4: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x151C2AB8: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x151C2ABC: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x151C2AC0: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x151C2AC4: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x151C2AC8: jr          $ra
    // 0x151C2ACC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x151C2ACC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_10005C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10005C2C: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x10005C30: lbu         $t0, -0x5520($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X5520);
    // 0x10005C34: bne         $t0, $zero, L_100061F0
    if (ctx->r8 != 0) {
        // 0x10005C38: nop
    
            goto L_100061F0;
    }
    // 0x10005C38: nop

    // 0x10005C3C: mfc0        $t0, Context
    ctx->r8 = 0; // mfc0 cop0 reg 4
    // 0x10005C40: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x10005C44: addiu       $t1, $t1, 0x3B40
    ctx->r9 = ADD32(ctx->r9, 0X3B40);
    // 0x10005C48: lui         $at, 0xA
    ctx->r1 = S32(0XA << 16);
    // 0x10005C4C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x10005C50: subu        $t1, $t1, $at
    ctx->r9 = SUB32(ctx->r9, ctx->r1);
    // 0x10005C54: addu        $s0, $t0, $t1
    ctx->r16 = ADD32(ctx->r8, ctx->r9);
    // 0x10005C58: lui         $fp, 0x1500
    ctx->r30 = S32(0X1500 << 16);
    // 0x10005C5C: sll         $s5, $t0, 9
    ctx->r21 = S32(ctx->r8 << 9);
    // 0x10005C60: slt         $at, $s5, $fp
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x10005C64: bne         $at, $zero, L_100061F0
    if (ctx->r1 != 0) {
        // 0x10005C68: lui         $t1, 0x1F
        ctx->r9 = S32(0X1F << 16);
            goto L_100061F0;
    }
    // 0x10005C68: lui         $t1, 0x1F
    ctx->r9 = S32(0X1F << 16);
    // 0x10005C6C: ori         $t1, $t1, 0xC000
    ctx->r9 = ctx->r9 | 0XC000;
    // 0x10005C70: addu        $t1, $t1, $fp
    ctx->r9 = ADD32(ctx->r9, ctx->r30);
    // 0x10005C74: slt         $at, $s5, $t1
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x10005C78: beq         $at, $zero, L_100061F0
    if (ctx->r1 == 0) {
        // 0x10005C7C: nop
    
            goto L_100061F0;
    }
    // 0x10005C7C: nop

    // 0x10005C80: mfc0        $t9, BadVaddr
    ctx->r25 = cop0_badvaddr_read(ctx);
    // 0x10005C84: srl         $t9, $t9, 12
    ctx->r25 = S32(U32(ctx->r25) >> 12);
    // 0x10005C88: andi        $t9, $t9, 0x1
    ctx->r25 = ctx->r25 & 0X1;
    // 0x10005C8C: beql        $t9, $zero, L_10005C98
    if (ctx->r25 == 0) {
        // 0x10005C90: lw          $s1, 0x0($s0)
        ctx->r17 = MEM_W(ctx->r16, 0X0);
            goto L_10005C98;
    }
    goto skip_0;
    // 0x10005C90: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x10005C94: lw          $s1, 0x8($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X8);
L_10005C98:
    // 0x10005C98: bne         $s1, $zero, L_10006038
    if (ctx->r17 != 0) {
        // 0x10005C9C: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_10006038;
    }
    // 0x10005C9C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x10005CA0: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x10005CA4: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x10005CA8: lw          $t1, -0x4190($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4190);
    // 0x10005CAC: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x10005CB0: lw          $t2, -0x4184($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4184);
L_10005CB4:
    // 0x10005CB4: lbu         $t0, 0x0($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X0);
    // 0x10005CB8: beq         $t0, $zero, L_10005CE4
    if (ctx->r8 == 0) {
        // 0x10005CBC: nop
    
            goto L_10005CE4;
    }
    // 0x10005CBC: nop

    // 0x10005CC0: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x10005CC4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_10005CC8:
    // 0x10005CC8: and         $t8, $t0, $t7
    ctx->r24 = ctx->r8 & ctx->r15;
    // 0x10005CCC: bne         $t8, $zero, L_10005CF4
    if (ctx->r24 != 0) {
        // 0x10005CD0: nop
    
            goto L_10005CF4;
    }
    // 0x10005CD0: nop

    // 0x10005CD4: addiu       $t6, $t6, 0x1
    ctx->r14 = ADD32(ctx->r14, 0X1);
    // 0x10005CD8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x10005CDC: bne         $t6, $at, L_10005CC8
    if (ctx->r14 != ctx->r1) {
        // 0x10005CE0: sll         $t7, $t7, 1
        ctx->r15 = S32(ctx->r15 << 1);
            goto L_10005CC8;
    }
    // 0x10005CE0: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
L_10005CE4:
    // 0x10005CE4: bne         $t1, $t2, L_10005CB4
    if (ctx->r9 != ctx->r10) {
        // 0x10005CE8: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_10005CB4;
    }
    // 0x10005CE8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x10005CEC: j           L_10006138
    // 0x10005CF0: nop

        goto L_10006138;
    // 0x10005CF0: nop

L_10005CF4:
    // 0x10005CF4: xor         $t0, $t0, $t7
    ctx->r8 = ctx->r8 ^ ctx->r15;
    // 0x10005CF8: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
    // 0x10005CFC: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x10005D00: lw          $t2, -0x4190($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4190);
    // 0x10005D04: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x10005D08: lw          $s1, -0x418C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X418C);
    // 0x10005D0C: subu        $t1, $t1, $t2
    ctx->r9 = SUB32(ctx->r9, ctx->r10);
    // 0x10005D10: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x10005D14: addu        $t0, $t6, $t1
    ctx->r8 = ADD32(ctx->r14, ctx->r9);
    // 0x10005D18: sll         $t0, $t0, 12
    ctx->r8 = S32(ctx->r8 << 12);
    // 0x10005D1C: addu        $s1, $s1, $t0
    ctx->r17 = ADD32(ctx->r17, ctx->r8);
L_10005D20:
    // 0x10005D20: mfc0        $t2, BadVaddr
    ctx->r10 = cop0_badvaddr_read(ctx);
    // 0x10005D24: lui         $t0, 0xFF
    ctx->r8 = S32(0XFF << 16);
    // 0x10005D28: ori         $t0, $t0, 0xF000
    ctx->r8 = ctx->r8 | 0XF000;
    // 0x10005D2C: and         $t2, $t2, $t0
    ctx->r10 = ctx->r10 & ctx->r8;
    // 0x10005D30: srl         $t2, $t2, 10
    ctx->r10 = S32(U32(ctx->r10) >> 10);
    // 0x10005D34: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x10005D38: lw          $t1, 0x54FC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X54FC);
    // 0x10005D3C: addu        $t0, $t1, $t2
    ctx->r8 = ADD32(ctx->r9, ctx->r10);
    // 0x10005D40: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x10005D44: lw          $t0, 0x4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4);
    // 0x10005D48: subu        $t0, $t0, $t2
    ctx->r8 = SUB32(ctx->r8, ctx->r10);
    // 0x10005D4C: addiu       $t1, $zero, -0x10
    ctx->r9 = ADD32(0, -0X10);
    // 0x10005D50: addiu       $t0, $t0, 0xF
    ctx->r8 = ADD32(ctx->r8, 0XF);
    // 0x10005D54: and         $t6, $t0, $t1
    ctx->r14 = ctx->r8 & ctx->r9;
    // 0x10005D58: lui         $t0, 0xA460
    ctx->r8 = S32(0XA460 << 16);
    // 0x10005D5C: ori         $t0, $t0, 0x10
    ctx->r8 = ctx->r8 | 0X10;
L_10005D60:
    // 0x10005D60: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x10005D64: andi        $t1, $t1, 0x3
    ctx->r9 = ctx->r9 & 0X3;
    // 0x10005D68: bne         $t1, $zero, L_10005D60
    if (ctx->r9 != 0) {
        // 0x10005D6C: nop
    
            goto L_10005D60;
    }
    // 0x10005D6C: nop

    // 0x10005D70: lui         $s6, 0xA460
    ctx->r22 = S32(0XA460 << 16);
    // 0x10005D74: lw          $s6, 0x10($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X10);
    // 0x10005D78: lui         $t0, 0xA460
    ctx->r8 = S32(0XA460 << 16);
    // 0x10005D7C: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x10005D80: lw          $t1, 0x54F8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X54F8);
    // 0x10005D84: lui         $t7, 0xFFF
    ctx->r15 = S32(0XFFF << 16);
    // 0x10005D88: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x10005D8C: and         $t1, $t1, $t7
    ctx->r9 = ctx->r9 & ctx->r15;
    // 0x10005D90: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x10005D94: lui         $t0, 0xA460
    ctx->r8 = S32(0XA460 << 16);
    // 0x10005D98: ori         $t0, $t0, 0x4
    ctx->r8 = ctx->r8 | 0X4;
    // 0x10005D9C: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x10005DA0: lw          $t1, 0x308($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X308);
    // 0x10005DA4: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x10005DA8: lui         $t2, 0x1FFF
    ctx->r10 = S32(0X1FFF << 16);
    // 0x10005DAC: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x10005DB0: and         $t1, $t1, $t2
    ctx->r9 = ctx->r9 & ctx->r10;
    // 0x10005DB4: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x10005DB8: lui         $t0, 0xA460
    ctx->r8 = S32(0XA460 << 16);
    // 0x10005DBC: ori         $t0, $t0, 0xC
    ctx->r8 = ctx->r8 | 0XC;
    // 0x10005DC0: addiu       $t6, $t6, -0x1
    ctx->r14 = ADD32(ctx->r14, -0X1);
    // 0x10005DC4: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x10005DC8: beql        $t9, $zero, L_10005DD4
    if (ctx->r25 == 0) {
        // 0x10005DCC: sw          $s1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r17;
            goto L_10005DD4;
    }
    goto skip_1;
    // 0x10005DCC: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    skip_1:
    // 0x10005DD0: sw          $s1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r17;
L_10005DD4:
    // 0x10005DD4: lui         $t0, 0xA460
    ctx->r8 = S32(0XA460 << 16);
    // 0x10005DD8: ori         $t0, $t0, 0x10
    ctx->r8 = ctx->r8 | 0X10;
L_10005DDC:
    // 0x10005DDC: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x10005DE0: andi        $t1, $t1, 0x3
    ctx->r9 = ctx->r9 & 0X3;
    // 0x10005DE4: bne         $t1, $zero, L_10005DDC
    if (ctx->r9 != 0) {
        // 0x10005DE8: nop
    
            goto L_10005DDC;
    }
    // 0x10005DE8: nop

    // 0x10005DEC: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x10005DF0: lw          $t0, 0x54F8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X54F8);
    // 0x10005DF4: addiu       $t1, $t0, 0x1000
    ctx->r9 = ADD32(ctx->r8, 0X1000);
L_10005DF8:
    // 0x10005DF8: cache       0x15, 0x0($t0)

    // 0x10005DFC: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x10005E00: bne         $at, $zero, L_10005DF8
    if (ctx->r1 != 0) {
        // 0x10005E04: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_10005DF8;
    }
    // 0x10005E04: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x10005E08: bne         $s6, $zero, L_10005E1C
    if (ctx->r22 != 0) {
        // 0x10005E0C: nop
    
            goto L_10005E1C;
    }
    // 0x10005E0C: nop

    // 0x10005E10: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x10005E14: lui         $at, 0xA460
    ctx->r1 = S32(0XA460 << 16);
    // 0x10005E18: sw          $t0, 0x10($at)
    MEM_W(0X10, ctx->r1) = ctx->r8;
L_10005E1C:
    // 0x10005E1C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10005E20: addiu       $a0, $a0, 0x2B18
    ctx->r4 = ADD32(ctx->r4, 0X2B18);
    // 0x10005E24: sw          $sp, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r29;
    // 0x10005E28: addiu       $sp, $a0, 0x0
    ctx->r29 = ADD32(ctx->r4, 0X0);
    // 0x10005E2C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x10005E30: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x10005E34: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x10005E38: sw          $v0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r2;
    // 0x10005E3C: sw          $v1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r3;
    // 0x10005E40: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x10005E44: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x10005E48: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x10005E4C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x10005E50: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x10005E54: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x10005E58: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x10005E5C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x10005E60: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x10005E64: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x10005E68: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x10005E6C: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x10005E70: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x10005E74: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x10005E78: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x10005E7C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x10005E80: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x10005E84: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x10005E88: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x10005E8C: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x10005E90: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x10005E94: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x10005E98: sw          $gp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r28;
    // 0x10005E9C: sw          $sp, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r29;
    // 0x10005EA0: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x10005EA4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10005EA8: lw          $a0, 0x54F8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F8);
    // 0x10005EAC: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x10005EB0: or          $a1, $s1, $t0
    ctx->r5 = ctx->r17 | ctx->r8;
    // 0x10005EB4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x10005EB8: mfc0        $a3, Status
    ctx->r7 = cop0_status_read(ctx);
    // 0x10005EBC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x10005EC0: and         $a2, $a3, $at
    ctx->r6 = ctx->r7 & ctx->r1;
    // 0x10005EC4: sw          $a3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r7;
    // 0x10005EC8: bne         $a2, $zero, L_10005F24
    if (ctx->r6 != 0) {
        // 0x10005ECC: lui         $at, 0x2000
        ctx->r1 = S32(0X2000 << 16);
            goto L_10005F24;
    }
    // 0x10005ECC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x10005ED0: or          $a2, $a3, $at
    ctx->r6 = ctx->r7 | ctx->r1;
    // 0x10005ED4: mtc0        $a2, Status
    cop0_status_write(ctx, ctx->r6);
    // 0x10005ED8: nop

    // 0x10005EDC: nop

    // 0x10005EE0: nop

    // 0x10005EE4: sdc1        $f0, 0x0($sp)
    CHECK_FR(ctx, 0);
    SD(ctx->f0.u64, 0X0, ctx->r29);
    // 0x10005EE8: sdc1        $f1, 0x8($sp)
    CHECK_FR(ctx, 1);
    SD(ctx->f1.u64, 0X8, ctx->r29);
    // 0x10005EEC: sdc1        $f2, 0x10($sp)
    CHECK_FR(ctx, 2);
    SD(ctx->f2.u64, 0X10, ctx->r29);
    // 0x10005EF0: sdc1        $f3, 0x18($sp)
    CHECK_FR(ctx, 3);
    SD(ctx->f3.u64, 0X18, ctx->r29);
    // 0x10005EF4: sdc1        $f4, 0x20($sp)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X20, ctx->r29);
    // 0x10005EF8: sdc1        $f5, 0x28($sp)
    CHECK_FR(ctx, 5);
    SD(ctx->f5.u64, 0X28, ctx->r29);
    // 0x10005EFC: sdc1        $f6, 0x30($sp)
    CHECK_FR(ctx, 6);
    SD(ctx->f6.u64, 0X30, ctx->r29);
    // 0x10005F00: sdc1        $f7, 0x38($sp)
    CHECK_FR(ctx, 7);
    SD(ctx->f7.u64, 0X38, ctx->r29);
    // 0x10005F04: sdc1        $f8, 0x40($sp)
    CHECK_FR(ctx, 8);
    SD(ctx->f8.u64, 0X40, ctx->r29);
    // 0x10005F08: sdc1        $f9, 0x48($sp)
    CHECK_FR(ctx, 9);
    SD(ctx->f9.u64, 0X48, ctx->r29);
    // 0x10005F0C: sdc1        $f10, 0x50($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X50, ctx->r29);
    // 0x10005F10: sdc1        $f11, 0x58($sp)
    CHECK_FR(ctx, 11);
    SD(ctx->f11.u64, 0X58, ctx->r29);
    // 0x10005F14: sdc1        $f16, 0x60($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X60, ctx->r29);
    // 0x10005F18: sdc1        $f17, 0x68($sp)
    CHECK_FR(ctx, 17);
    SD(ctx->f17.u64, 0X68, ctx->r29);
    // 0x10005F1C: sdc1        $f18, 0x70($sp)
    CHECK_FR(ctx, 18);
    SD(ctx->f18.u64, 0X70, ctx->r29);
    // 0x10005F20: sdc1        $f19, 0x78($sp)
    CHECK_FR(ctx, 19);
    SD(ctx->f19.u64, 0X78, ctx->r29);
L_10005F24:
    // 0x10005F24: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x10005F28: addiu       $a2, $a2, 0x40E8
    ctx->r6 = ADD32(ctx->r6, 0X40E8);
    // 0x10005F2C: jal         0x1000625C
    // 0x10005F30: nop

    func_1000625C(rdram, ctx);
        goto after_0;
    // 0x10005F30: nop

    after_0:
    // 0x10005F34: lw          $a3, 0x80($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X80);
    // 0x10005F38: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x10005F3C: and         $a2, $a3, $at
    ctx->r6 = ctx->r7 & ctx->r1;
    // 0x10005F40: bne         $a2, $zero, L_10005F84
    if (ctx->r6 != 0) {
        // 0x10005F44: ldc1        $f0, 0x0($sp)
        CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r29, 0X0);
            goto L_10005F84;
    }
    // 0x10005F44: ldc1        $f0, 0x0($sp)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r29, 0X0);
    // 0x10005F48: ldc1        $f1, 0x8($sp)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r29, 0X8);
    // 0x10005F4C: ldc1        $f2, 0x10($sp)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r29, 0X10);
    // 0x10005F50: ldc1        $f3, 0x18($sp)
    CHECK_FR(ctx, 3);
    ctx->f3.u64 = LD(ctx->r29, 0X18);
    // 0x10005F54: ldc1        $f4, 0x20($sp)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r29, 0X20);
    // 0x10005F58: ldc1        $f5, 0x28($sp)
    CHECK_FR(ctx, 5);
    ctx->f5.u64 = LD(ctx->r29, 0X28);
    // 0x10005F5C: ldc1        $f6, 0x30($sp)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r29, 0X30);
    // 0x10005F60: ldc1        $f7, 0x38($sp)
    CHECK_FR(ctx, 7);
    ctx->f7.u64 = LD(ctx->r29, 0X38);
    // 0x10005F64: ldc1        $f8, 0x40($sp)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r29, 0X40);
    // 0x10005F68: ldc1        $f9, 0x48($sp)
    CHECK_FR(ctx, 9);
    ctx->f9.u64 = LD(ctx->r29, 0X48);
    // 0x10005F6C: ldc1        $f10, 0x50($sp)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r29, 0X50);
    // 0x10005F70: ldc1        $f11, 0x58($sp)
    CHECK_FR(ctx, 11);
    ctx->f11.u64 = LD(ctx->r29, 0X58);
    // 0x10005F74: ldc1        $f16, 0x60($sp)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r29, 0X60);
    // 0x10005F78: ldc1        $f17, 0x68($sp)
    CHECK_FR(ctx, 17);
    ctx->f17.u64 = LD(ctx->r29, 0X68);
    // 0x10005F7C: ldc1        $f18, 0x70($sp)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r29, 0X70);
    // 0x10005F80: ldc1        $f19, 0x78($sp)
    CHECK_FR(ctx, 19);
    ctx->f19.u64 = LD(ctx->r29, 0X78);
L_10005F84:
    // 0x10005F84: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x10005F88: mtc0        $a3, Status
    cop0_status_write(ctx, ctx->r7);
    // 0x10005F8C: nop

    // 0x10005F90: nop

    // 0x10005F94: nop

    // 0x10005F98: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x10005F9C: lw          $at, 0x4($sp)
    ctx->r1 = MEM_W(ctx->r29, 0X4);
    // 0x10005FA0: lw          $v0, 0x8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8);
    // 0x10005FA4: lw          $v1, 0xC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC);
    // 0x10005FA8: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x10005FAC: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x10005FB0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x10005FB4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x10005FB8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x10005FBC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x10005FC0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x10005FC4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x10005FC8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x10005FCC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x10005FD0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x10005FD4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x10005FD8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x10005FDC: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x10005FE0: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x10005FE4: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x10005FE8: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x10005FEC: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x10005FF0: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x10005FF4: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x10005FF8: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x10005FFC: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x10006000: lw          $gp, 0x70($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X70);
    // 0x10006004: lw          $sp, 0x74($sp)
    ctx->r29 = MEM_W(ctx->r29, 0X74);
    // 0x10006008: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x1000600C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x10006010: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10006014: addiu       $a0, $a0, 0x2B18
    ctx->r4 = ADD32(ctx->r4, 0X2B18);
    // 0x10006018: lw          $sp, 0x0($a0)
    ctx->r29 = MEM_W(ctx->r4, 0X0);
    // 0x1000601C: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x10006020: or          $t0, $s1, $t0
    ctx->r8 = ctx->r17 | ctx->r8;
    // 0x10006024: addiu       $t1, $t0, 0xFF0
    ctx->r9 = ADD32(ctx->r8, 0XFF0);
L_10006028:
    // 0x10006028: cache       0x19, 0x0($t0)

    // 0x1000602C: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x10006030: bne         $at, $zero, L_10006028
    if (ctx->r1 != 0) {
        // 0x10006034: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_10006028;
    }
    // 0x10006034: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
L_10006038:
    // 0x10006038: beql        $t9, $zero, L_10006044
    if (ctx->r25 == 0) {
        // 0x1000603C: sw          $zero, 0x4($s0)
        MEM_W(0X4, ctx->r16) = 0;
            goto L_10006044;
    }
    goto skip_2;
    // 0x1000603C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    skip_2:
    // 0x10006040: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_10006044:
    // 0x10006044: mfc0        $t2, EntryHi
    ctx->r10 = 0; // mfc0 cop0 reg 10
    // 0x10006048: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x1000604C: mtc0        $t0, PageMask
    // mtc0 cop0 reg 5
    // 0x10006050: mtc0        $s5, EntryHi
    // mtc0 cop0 reg 10
    // 0x10006054: nop

    // 0x10006058: nop

    // 0x1000605C: nop

    // 0x10006060: tlbp

    // 0x10006064: nop

    // 0x10006068: nop

    // 0x1000606C: mfc0        $t1, Index
    ctx->r9 = 0; // mfc0 cop0 reg 0
    // 0x10006070: mtc0        $t0, PageMask
    // mtc0 cop0 reg 5
    // 0x10006074: mtc0        $s5, EntryHi
    // mtc0 cop0 reg 10
    // 0x10006078: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x1000607C: srl         $t0, $t0, 12
    ctx->r8 = S32(U32(ctx->r8) >> 12);
    // 0x10006080: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x10006084: bnel        $t0, $zero, L_1000608C
    if (ctx->r8 != 0) {
        // 0x10006088: ori         $t0, $t0, 0x1B
        ctx->r8 = ctx->r8 | 0X1B;
            goto L_1000608C;
    }
    goto skip_3;
    // 0x10006088: ori         $t0, $t0, 0x1B
    ctx->r8 = ctx->r8 | 0X1B;
    skip_3:
L_1000608C:
    // 0x1000608C: ori         $t0, $t0, 0x1
    ctx->r8 = ctx->r8 | 0X1;
    // 0x10006090: mtc0        $t0, EntryLo0
    // mtc0 cop0 reg 2
    // 0x10006094: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x10006098: srl         $t0, $t0, 12
    ctx->r8 = S32(U32(ctx->r8) >> 12);
    // 0x1000609C: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x100060A0: bnel        $t0, $zero, L_100060A8
    if (ctx->r8 != 0) {
        // 0x100060A4: ori         $t0, $t0, 0x1B
        ctx->r8 = ctx->r8 | 0X1B;
            goto L_100060A8;
    }
    goto skip_4;
    // 0x100060A4: ori         $t0, $t0, 0x1B
    ctx->r8 = ctx->r8 | 0X1B;
    skip_4:
L_100060A8:
    // 0x100060A8: ori         $t0, $t0, 0x1
    ctx->r8 = ctx->r8 | 0X1;
    // 0x100060AC: mtc0        $t0, EntryLo1
    // mtc0 cop0 reg 3
    // 0x100060B0: bgez        $t1, L_100060D8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x100060B4: nop
    
            goto L_100060D8;
    }
    // 0x100060B4: nop

    // 0x100060B8: nop

    // 0x100060BC: tlbwr

    // 0x100060C0: nop

    // 0x100060C4: nop

    // 0x100060C8: nop

    // 0x100060CC: nop

    // 0x100060D0: j           L_100060F0
    // 0x100060D4: nop

        goto L_100060F0;
    // 0x100060D4: nop

L_100060D8:
    // 0x100060D8: nop

    // 0x100060DC: tlbwi

    // 0x100060E0: nop

    // 0x100060E4: nop

    // 0x100060E8: nop

    // 0x100060EC: nop

L_100060F0:
    // 0x100060F0: nop

    // 0x100060F4: mtc0        $t2, EntryHi
    // mtc0 cop0 reg 10
    // 0x100060F8: nop

    // 0x100060FC: bne         $t5, $zero, L_10006130
    if (ctx->r13 != 0) {
        // 0x10006100: or          $t0, $s5, $zero
        ctx->r8 = ctx->r21 | 0;
            goto L_10006130;
    }
    // 0x10006100: or          $t0, $s5, $zero
    ctx->r8 = ctx->r21 | 0;
    // 0x10006104: bnel        $t9, $zero, L_1000610C
    if (ctx->r25 != 0) {
        // 0x10006108: addiu       $t0, $t0, 0x1000
        ctx->r8 = ADD32(ctx->r8, 0X1000);
            goto L_1000610C;
    }
    goto skip_5;
    // 0x10006108: addiu       $t0, $t0, 0x1000
    ctx->r8 = ADD32(ctx->r8, 0X1000);
    skip_5:
L_1000610C:
    // 0x1000610C: addiu       $t1, $t0, 0xFE0
    ctx->r9 = ADD32(ctx->r8, 0XFE0);
    // 0x10006110: andi        $t2, $t0, 0x1F
    ctx->r10 = ctx->r8 & 0X1F;
    // 0x10006114: subu        $t0, $t0, $t2
    ctx->r8 = SUB32(ctx->r8, ctx->r10);
L_10006118:
    // 0x10006118: cache       0x10, 0x0($t0)

    // 0x1000611C: cache       0x11, 0x0($t0)

    // 0x10006120: cache       0x11, 0x10($t0)

    // 0x10006124: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x10006128: bne         $at, $zero, L_10006118
    if (ctx->r1 != 0) {
        // 0x1000612C: addiu       $t0, $t0, 0x20
        ctx->r8 = ADD32(ctx->r8, 0X20);
            goto L_10006118;
    }
    // 0x1000612C: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
L_10006130:
    // 0x10006130: jr          $ra
    // 0x10006134: nop

    return;
    return;
    // 0x10006134: nop

L_10006138:
    // 0x10006138: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1000613C: lui         $s4, 0x8004
    ctx->r20 = S32(0X8004 << 16);
    // 0x10006140: addiu       $s4, $s4, 0x3B40
    ctx->r20 = ADD32(ctx->r20, 0X3B40);
    // 0x10006144: or          $t6, $s4, $zero
    ctx->r14 = ctx->r20 | 0;
    // 0x10006148: addiu       $gp, $s4, 0xFD8
    ctx->r28 = ADD32(ctx->r20, 0XFD8);
L_1000614C:
    // 0x1000614C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x10006150: lw          $t2, 0x4($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X4);
    // 0x10006154: beq         $t7, $zero, L_10006170
    if (ctx->r15 == 0) {
        // 0x10006158: slt         $at, $t0, $t2
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_10006170;
    }
    // 0x10006158: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1000615C: beq         $at, $zero, L_10006170
    if (ctx->r1 == 0) {
        // 0x10006160: nop
    
            goto L_10006170;
    }
    // 0x10006160: nop

    // 0x10006164: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
    // 0x10006168: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x1000616C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_10006170:
    // 0x10006170: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x10006174: sw          $t2, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r10;
    // 0x10006178: bne         $t6, $gp, L_1000614C
    if (ctx->r14 != ctx->r28) {
        // 0x1000617C: addiu       $t6, $t6, 0x8
        ctx->r14 = ADD32(ctx->r14, 0X8);
            goto L_1000614C;
    }
    // 0x1000617C: addiu       $t6, $t6, 0x8
    ctx->r14 = ADD32(ctx->r14, 0X8);
    // 0x10006180: subu        $t0, $t1, $s4
    ctx->r8 = SUB32(ctx->r9, ctx->r20);
    // 0x10006184: srl         $t0, $t0, 3
    ctx->r8 = S32(U32(ctx->r8) >> 3);
    // 0x10006188: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x1000618C: sll         $t0, $t0, 12
    ctx->r8 = S32(ctx->r8 << 12);
    // 0x10006190: addu        $t0, $t0, $fp
    ctx->r8 = ADD32(ctx->r8, ctx->r30);
    // 0x10006194: addiu       $t2, $zero, -0x1000
    ctx->r10 = ADD32(0, -0X1000);
    // 0x10006198: and         $t0, $t0, $t2
    ctx->r8 = ctx->r8 & ctx->r10;
    // 0x1000619C: mtc0        $t0, EntryHi
    // mtc0 cop0 reg 10
    // 0x100061A0: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x100061A4: mtc0        $t0, PageMask
    // mtc0 cop0 reg 5
    // 0x100061A8: nop

    // 0x100061AC: nop

    // 0x100061B0: nop

    // 0x100061B4: tlbp

    // 0x100061B8: nop

    // 0x100061BC: nop

    // 0x100061C0: mfc0        $t1, Index
    ctx->r9 = 0; // mfc0 cop0 reg 0
    // 0x100061C4: mfc0        $t0, EntryHi
    ctx->r8 = 0; // mfc0 cop0 reg 10
    // 0x100061C8: bltz        $t1, L_100061E8
    if (SIGNED(ctx->r9) < 0) {
        // 0x100061CC: nop
    
            goto L_100061E8;
    }
    // 0x100061CC: nop

    // 0x100061D0: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x100061D4: mtc0        $t1, EntryHi
    // mtc0 cop0 reg 10
    // 0x100061D8: mtc0        $zero, EntryLo0
    // mtc0 cop0 reg 2
    // 0x100061DC: mtc0        $zero, EntryLo1
    // mtc0 cop0 reg 3
    // 0x100061E0: nop

    // 0x100061E4: tlbwi

L_100061E8:
    // 0x100061E8: j           L_10005D20
    // 0x100061EC: nop

        goto L_10005D20;
    // 0x100061EC: nop

L_100061F0:
    // 0x100061F0: j           L_1000777C
    // 0x100061F4: nop

    static_3_1000777C(rdram, ctx);
    return;
    // 0x100061F4: nop

;}
RECOMP_FUNC void func_150774B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150774B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150774B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150774BC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150774C0: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x150774C4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150774C8: lbu         $v1, 0x211($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X211);
    // 0x150774CC: lbu         $t6, 0x20F($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X20F);
    // 0x150774D0: beql        $v1, $t6, L_150774E4
    if (ctx->r3 == ctx->r14) {
        // 0x150774D4: lw          $t7, 0x25C($v0)
        ctx->r15 = MEM_W(ctx->r2, 0X25C);
            goto L_150774E4;
    }
    goto skip_0;
    // 0x150774D4: lw          $t7, 0x25C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X25C);
    skip_0:
    // 0x150774D8: bnel        $v1, $at, L_150774FC
    if (ctx->r3 != ctx->r1) {
        // 0x150774DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150774FC;
    }
    goto skip_1;
    // 0x150774DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150774E0: lw          $t7, 0x25C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X25C);
L_150774E4:
    // 0x150774E4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150774E8: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x150774EC: sw          $t8, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r24;
    // 0x150774F0: jal         0x15075400
    // 0x150774F4: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x150774F4: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x150774F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150774FC:
    // 0x150774FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15077500: jr          $ra
    // 0x15077504: nop

    return;
    return;
    // 0x15077504: nop

;}
RECOMP_FUNC void func_15199928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15199928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1519992C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15199930: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15199934: jal         0x15199980
    // 0x15199938: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15199980(rdram, ctx);
        goto after_0;
    // 0x15199938: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x1519993C: jal         0x151478F4
    // 0x15199940: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151478F4(rdram, ctx);
        goto after_1;
    // 0x15199940: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x15199944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15199948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1519994C: jr          $ra
    // 0x15199950: nop

    return;
    return;
    // 0x15199950: nop

;}
RECOMP_FUNC void func_151C5280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C5280: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x151C5284: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x151C5288: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151C528C: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x151C5290: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
    // 0x151C5294: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x151C5298: beq         $s0, $zero, L_151C5574
    if (ctx->r16 == 0) {
        // 0x151C529C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_151C5574;
    }
    // 0x151C529C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C52A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x151C52A4: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x151C52A8: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x151C52AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151C52B0: jal         0x15145740
    // 0x151C52B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_15145740(rdram, ctx);
        goto after_0;
    // 0x151C52B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x151C52B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C52BC: lwc1        $f0, -0x554C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X554C);
    // 0x151C52C0: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x151C52C4: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x151C52C8: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x151C52CC: mul.s       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151C52D0: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151C52D4: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x151C52D8: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151C52DC: addiu       $t1, $t1, -0x5570
    ctx->r9 = ADD32(ctx->r9, -0X5570);
    // 0x151C52E0: addiu       $t2, $t2, -0x5558
    ctx->r10 = ADD32(ctx->r10, -0X5558);
    // 0x151C52E4: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151C52E8: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    // 0x151C52EC: addiu       $t3, $sp, 0xD4
    ctx->r11 = ADD32(ctx->r29, 0XD4);
    // 0x151C52F0: addiu       $t4, $sp, 0xC8
    ctx->r12 = ADD32(ctx->r29, 0XC8);
    // 0x151C52F4: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x151C52F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C52FC: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x151C5300: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x151C5304: lw          $t9, 0x1D4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1D4);
    // 0x151C5308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151C530C: lui         $at, 0xC2A4
    ctx->r1 = S32(0XC2A4 << 16);
    // 0x151C5310: beql        $t9, $zero, L_151C53A0
    if (ctx->r25 == 0) {
        // 0x151C5314: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_151C53A0;
    }
    goto skip_0;
    // 0x151C5314: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x151C5318: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x151C531C: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x151C5320: sw          $t3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r11;
    // 0x151C5324: jal         0x1503195C
    // 0x151C5328: sw          $t4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r12;
    func_1503195C(rdram, ctx);
        goto after_1;
    // 0x151C5328: sw          $t4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r12;
    after_1:
    // 0x151C532C: beq         $v0, $zero, L_151C5574
    if (ctx->r2 == 0) {
        // 0x151C5330: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_151C5574;
    }
    // 0x151C5330: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x151C5334: addiu       $t5, $sp, 0x9C
    ctx->r13 = ADD32(ctx->r29, 0X9C);
    // 0x151C5338: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x151C533C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151C5340: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151C5344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C5348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151C534C: jal         0x1514654C
    // 0x151C5350: addiu       $a3, $sp, 0xA4
    ctx->r7 = ADD32(ctx->r29, 0XA4);
    func_1514654C(rdram, ctx);
        goto after_2;
    // 0x151C5350: addiu       $a3, $sp, 0xA4
    ctx->r7 = ADD32(ctx->r29, 0XA4);
    after_2:
    // 0x151C5354: beq         $v0, $zero, L_151C5574
    if (ctx->r2 == 0) {
        // 0x151C5358: addiu       $a0, $sp, 0xD4
        ctx->r4 = ADD32(ctx->r29, 0XD4);
            goto L_151C5574;
    }
    // 0x151C5358: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x151C535C: lbu         $a1, 0xE7($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XE7);
    // 0x151C5360: jal         0x151C56A4
    // 0x151C5364: lw          $a2, 0xE8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE8);
    func_151C56A4(rdram, ctx);
        goto after_3;
    // 0x151C5364: lw          $a2, 0xE8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE8);
    after_3:
    // 0x151C5368: jal         0x150ADA20
    // 0x151C536C: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151C536C: nop

    after_4:
    // 0x151C5370: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x151C5374: beq         $t7, $zero, L_151C5438
    if (ctx->r15 == 0) {
        // 0x151C5378: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_151C5438;
    }
    // 0x151C5378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C537C: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    // 0x151C5380: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x151C5384: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    // 0x151C5388: lbu         $a3, 0xE7($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XE7);
    // 0x151C538C: jal         0x151C5588
    // 0x151C5390: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_151C5588(rdram, ctx);
        goto after_5;
    // 0x151C5390: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_5:
    // 0x151C5394: b           L_151C5438
    // 0x151C5398: nop

        goto L_151C5438;
    // 0x151C5398: nop

    // 0x151C539C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_151C53A0:
    // 0x151C53A0: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151C53A4: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x151C53A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151C53AC: lui         $at, 0x42D4
    ctx->r1 = S32(0X42D4 << 16);
    // 0x151C53B0: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    // 0x151C53B4: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151C53B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C53BC: lwc1        $f18, 0xBC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x151C53C0: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x151C53C4: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151C53C8: lwc1        $f16, 0xD4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151C53CC: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x151C53D0: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151C53D4: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x151C53D8: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x151C53DC: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x151C53E0: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151C53E4: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151C53E8: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151C53EC: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151C53F0: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x151C53F4: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151C53F8: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x151C53FC: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    // 0x151C5400: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151C5404: add.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x151C5408: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    // 0x151C540C: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151C5410: mul.s       $f6, $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151C5414: sub.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x151C5418: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151C541C: nop

    // 0x151C5420: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151C5424: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    // 0x151C5428: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151C542C: sub.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x151C5430: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    // 0x151C5434: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
L_151C5438:
    // 0x151C5438: jal         0x150ADA68
    // 0x151C543C: nop

    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151C543C: nop

    after_6:
    // 0x151C5440: jal         0x150ADA68
    // 0x151C5444: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x151C5444: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x151C5448: jal         0x150ADA20
    // 0x151C544C: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151C544C: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x151C5450: lw          $t9, 0x1D4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1D4);
    // 0x151C5454: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x151C5458: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x151C545C: beq         $t9, $zero, L_151C546C
    if (ctx->r25 == 0) {
        // 0x151C5460: addiu       $a0, $sp, 0xD4
        ctx->r4 = ADD32(ctx->r29, 0XD4);
            goto L_151C546C;
    }
    // 0x151C5460: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x151C5464: b           L_151C5470
    // 0x151C5468: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
        goto L_151C5470;
    // 0x151C5468: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151C546C:
    // 0x151C546C: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
L_151C5470:
    // 0x151C5470: lbu         $t1, -0x19EA($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X19EA);
    // 0x151C5474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151C5478: addiu       $a2, $sp, 0xC8
    ctx->r6 = ADD32(ctx->r29, 0XC8);
    // 0x151C547C: beq         $t1, $zero, L_151C548C
    if (ctx->r9 == 0) {
        // 0x151C5480: addiu       $a3, $sp, 0xBC
        ctx->r7 = ADD32(ctx->r29, 0XBC);
            goto L_151C548C;
    }
    // 0x151C5480: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    // 0x151C5484: b           L_151C5490
    // 0x151C5488: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_151C5490;
    // 0x151C5488: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_151C548C:
    // 0x151C548C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151C5490:
    // 0x151C5490: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151C5494: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C5498: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C549C: lwc1        $f16, -0x5548($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5548);
    // 0x151C54A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151C54A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151C54A8: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151C54AC: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151C54B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C54B4: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x151C54B8: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x151C54BC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x151C54C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C54C4: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x151C54C8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x151C54CC: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x151C54D0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151C54D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151C54D8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x151C54DC: mul.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x151C54E0: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x151C54E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C54E8: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151C54EC: divu        $zero, $t0, $at
    lo = S32(U32(ctx->r8) / U32(ctx->r1)); hi = S32(U32(ctx->r8) % U32(ctx->r1));
    // 0x151C54F0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151C54F4: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x151C54F8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x151C54FC: lw          $t2, 0xE8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE8);
    // 0x151C5500: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151C5504: lbu         $t1, 0xE7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XE7);
    // 0x151C5508: mfhi        $t3
    ctx->r11 = hi;
    // 0x151C550C: addiu       $t4, $t3, 0xC8
    ctx->r12 = ADD32(ctx->r11, 0XC8);
    // 0x151C5510: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151C5514: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151C5518: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151C551C: addiu       $t8, $zero, 0x1A
    ctx->r24 = ADD32(0, 0X1A);
    // 0x151C5520: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C5524: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x151C5528: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x151C552C: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x151C5530: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x151C5534: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x151C5538: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x151C553C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x151C5540: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151C5544: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x151C5548: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x151C554C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x151C5550: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x151C5554: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x151C5558: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x151C555C: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x151C5560: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x151C5564: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x151C5568: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x151C556C: jal         0x151C229C
    // 0x151C5570: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    func_151C229C(rdram, ctx);
        goto after_9;
    // 0x151C5570: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    after_9:
L_151C5574:
    // 0x151C5574: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x151C5578: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x151C557C: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x151C5580: jr          $ra
    // 0x151C5584: nop

    return;
    return;
    // 0x151C5584: nop

;}
RECOMP_FUNC void func_15055260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15055260: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15055264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15055268: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x1505526C: addiu       $a2, $zero, 0x4D
    ctx->r6 = ADD32(0, 0X4D);
    // 0x15055270: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15055274: jal         0x150335C8
    // 0x15055278: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_150335C8(rdram, ctx);
        goto after_0;
    // 0x15055278: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x1505527C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15055280: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15055284: jr          $ra
    // 0x15055288: nop

    return;
    return;
    // 0x15055288: nop

;}
RECOMP_FUNC void func_10007D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10007D28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x10007D2C: or          $t7, $t1, $zero
    ctx->r15 = ctx->r9 | 0;
    // 0x10007D30: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x10007D34: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x10007D38: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
L_10007D3C:
    // 0x10007D3C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x10007D40: lbu         $t5, 0x0($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X0);
L_10007D44:
    // 0x10007D44: andi        $at, $t5, 0x80
    ctx->r1 = ctx->r13 & 0X80;
    // 0x10007D48: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x10007D4C: bne         $at, $zero, L_10007D5C
    if (ctx->r1 != 0) {
        // 0x10007D50: nop
    
            goto L_10007D5C;
    }
    // 0x10007D50: nop

    // 0x10007D54: lui         $t3, 0x1
    ctx->r11 = S32(0X1 << 16);
    // 0x10007D58: ori         $t3, $t3, 0x1
    ctx->r11 = ctx->r11 | 0X1;
L_10007D5C:
    // 0x10007D5C: sh          $t3, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r11;
    // 0x10007D60: sh          $t3, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r11;
    // 0x10007D64: addiu       $t7, $t7, 0x2
    ctx->r15 = ADD32(ctx->r15, 0X2);
    // 0x10007D68: addiu       $t8, $t8, 0x2
    ctx->r24 = ADD32(ctx->r24, 0X2);
    // 0x10007D6C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x10007D70: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x10007D74: bne         $a3, $zero, L_10007D44
    if (ctx->r7 != 0) {
        // 0x10007D78: nop
    
            goto L_10007D44;
    }
    // 0x10007D78: nop

    // 0x10007D7C: addiu       $t6, $t6, 0x1
    ctx->r14 = ADD32(ctx->r14, 0X1);
    // 0x10007D80: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x10007D84: addiu       $t7, $t7, 0x238
    ctx->r15 = ADD32(ctx->r15, 0X238);
    // 0x10007D88: addiu       $t8, $t8, 0x238
    ctx->r24 = ADD32(ctx->r24, 0X238);
    // 0x10007D8C: bne         $a2, $zero, L_10007D3C
    if (ctx->r6 != 0) {
        // 0x10007D90: nop
    
            goto L_10007D3C;
    }
    // 0x10007D90: nop

    // 0x10007D94: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x10007D98: jr          $ra
    // 0x10007D9C: nop

    return;
    return;
    // 0x10007D9C: nop

;}
RECOMP_FUNC void func_150634E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150634E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150634E8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150634EC: addiu       $v1, $v1, -0x3D30
    ctx->r3 = ADD32(ctx->r3, -0X3D30);
    // 0x150634F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150634F4: subu        $t6, $a0, $v1
    ctx->r14 = SUB32(ctx->r4, ctx->r3);
    // 0x150634F8: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x150634FC: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x15063500: mflo        $t7
    ctx->r15 = lo;
    // 0x15063504: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15063508: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1506350C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15063510: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x15063514: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15063518: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1506351C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15063520: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15063524: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15063528: addu        $v0, $v1, $t8
    ctx->r2 = ADD32(ctx->r3, ctx->r24);
    // 0x1506352C: lw          $t9, 0x31C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X31C);
    // 0x15063530: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x15063534: sb          $zero, 0x78($t9)
    MEM_B(0X78, ctx->r25) = 0;
    // 0x15063538: lw          $t0, 0x31C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X31C);
    // 0x1506353C: sb          $zero, 0x11A($t0)
    MEM_B(0X11A, ctx->r8) = 0;
    // 0x15063540: jal         0x150836CC
    // 0x15063544: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150836CC(rdram, ctx);
        goto after_0;
    // 0x15063544: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15063548: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1506354C: jal         0x150836CC
    // 0x15063550: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_150836CC(rdram, ctx);
        goto after_1;
    // 0x15063550: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_1:
    // 0x15063554: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15063558: sb          $zero, 0x8A($a0)
    MEM_B(0X8A, ctx->r4) = 0;
    // 0x1506355C: sb          $zero, 0x89($a0)
    MEM_B(0X89, ctx->r4) = 0;
    // 0x15063560: sb          $zero, 0x83($a0)
    MEM_B(0X83, ctx->r4) = 0;
    // 0x15063564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15063568: jr          $ra
    // 0x1506356C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1506356C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1502F9FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502F9FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1502FA00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1502FA04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1502FA08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1502FA0C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x1502FA10: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x1502FA14: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x1502FA18: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502FA1C: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x1502FA20: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502FA24: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x1502FA28: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502FA2C: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x1502FA30: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1502FA34: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1502FA38: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502FA3C: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x1502FA40: lbu         $v0, 0x4($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X4);
    // 0x1502FA44: addiu       $at, $zero, 0x89
    ctx->r1 = ADD32(0, 0X89);
    // 0x1502FA48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502FA4C: beq         $v0, $at, L_1502FA5C
    if (ctx->r2 == ctx->r1) {
        // 0x1502FA50: addiu       $at, $zero, 0xBA
        ctx->r1 = ADD32(0, 0XBA);
            goto L_1502FA5C;
    }
    // 0x1502FA50: addiu       $at, $zero, 0xBA
    ctx->r1 = ADD32(0, 0XBA);
    // 0x1502FA54: bne         $v0, $at, L_1502FA6C
    if (ctx->r2 != ctx->r1) {
        // 0x1502FA58: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_1502FA6C;
    }
    // 0x1502FA58: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
L_1502FA5C:
    // 0x1502FA5C: jal         0x150C3160
    // 0x1502FA60: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_150C3160(rdram, ctx);
        goto after_0;
    // 0x1502FA60: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x1502FA64: b           L_1502FBD8
    // 0x1502FA68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1502FBD8;
    // 0x1502FA68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1502FA6C:
    // 0x1502FA6C: bne         $v0, $zero, L_1502FA80
    if (ctx->r2 != 0) {
        // 0x1502FA70: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_1502FA80;
    }
    // 0x1502FA70: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1502FA74: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x1502FA78: b           L_1502FAD8
    // 0x1502FA7C: addiu       $ra, $zero, 0x2
    ctx->r31 = ADD32(0, 0X2);
        goto L_1502FAD8;
    // 0x1502FA7C: addiu       $ra, $zero, 0x2
    ctx->r31 = ADD32(0, 0X2);
L_1502FA80:
    // 0x1502FA80: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x1502FA84: bne         $v0, $at, L_1502FA94
    if (ctx->r2 != ctx->r1) {
        // 0x1502FA88: addiu       $v1, $zero, 0x7
        ctx->r3 = ADD32(0, 0X7);
            goto L_1502FA94;
    }
    // 0x1502FA88: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x1502FA8C: b           L_1502FAD8
    // 0x1502FA90: addiu       $ra, $zero, 0x2
    ctx->r31 = ADD32(0, 0X2);
        goto L_1502FAD8;
    // 0x1502FA90: addiu       $ra, $zero, 0x2
    ctx->r31 = ADD32(0, 0X2);
L_1502FA94:
    // 0x1502FA94: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x1502FA98: bne         $v0, $at, L_1502FAA8
    if (ctx->r2 != ctx->r1) {
        // 0x1502FA9C: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_1502FAA8;
    }
    // 0x1502FA9C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x1502FAA0: b           L_1502FAD8
    // 0x1502FAA4: addiu       $ra, $zero, 0x2
    ctx->r31 = ADD32(0, 0X2);
        goto L_1502FAD8;
    // 0x1502FAA4: addiu       $ra, $zero, 0x2
    ctx->r31 = ADD32(0, 0X2);
L_1502FAA8:
    // 0x1502FAA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1502FAAC: beq         $v0, $at, L_1502FACC
    if (ctx->r2 == ctx->r1) {
        // 0x1502FAB0: addiu       $ra, $zero, 0x2
        ctx->r31 = ADD32(0, 0X2);
            goto L_1502FACC;
    }
    // 0x1502FAB0: addiu       $ra, $zero, 0x2
    ctx->r31 = ADD32(0, 0X2);
    // 0x1502FAB4: beq         $v0, $ra, L_1502FACC
    if (ctx->r2 == ctx->r31) {
        // 0x1502FAB8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1502FACC;
    }
    // 0x1502FAB8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1502FABC: beq         $v0, $at, L_1502FACC
    if (ctx->r2 == ctx->r1) {
        // 0x1502FAC0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_1502FACC;
    }
    // 0x1502FAC0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1502FAC4: bne         $v0, $at, L_1502FAD8
    if (ctx->r2 != ctx->r1) {
        // 0x1502FAC8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1502FAD8;
    }
    // 0x1502FAC8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1502FACC:
    // 0x1502FACC: addiu       $ra, $zero, 0x2
    ctx->r31 = ADD32(0, 0X2);
    // 0x1502FAD0: b           L_1502FAD8
    // 0x1502FAD4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_1502FAD8;
    // 0x1502FAD4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_1502FAD8:
    // 0x1502FAD8: addiu       $t9, $t9, 0x5338
    ctx->r25 = ADD32(ctx->r25, 0X5338);
    // 0x1502FADC: addu        $t4, $t8, $t9
    ctx->r12 = ADD32(ctx->r24, ctx->r25);
    // 0x1502FAE0: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x1502FAE4: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x1502FAE8: subu        $t5, $t5, $v1
    ctx->r13 = SUB32(ctx->r13, ctx->r3);
    // 0x1502FAEC: beq         $t6, $zero, L_1502FBD0
    if (ctx->r14 == 0) {
        // 0x1502FAF0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_1502FBD0;
    }
    // 0x1502FAF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1502FAF4: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x1502FAF8: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x1502FAFC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502FB00: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x1502FB04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502FB08: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x1502FB0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502FB10: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x1502FB14: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1502FB18: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1502FB1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502FB20: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x1502FB24: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1502FB28: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x1502FB2C: lui         $t2, 0xF200
    ctx->r10 = S32(0XF200 << 16);
L_1502FB30:
    // 0x1502FB30: lw          $t9, 0x0($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X0);
    // 0x1502FB34: lh          $a2, 0x27A($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X27A);
    // 0x1502FB38: lh          $a3, 0x27E($a1)
    ctx->r7 = MEM_H(ctx->r5, 0X27E);
    // 0x1502FB3C: addu        $v0, $t9, $t5
    ctx->r2 = ADD32(ctx->r25, ctx->r13);
    // 0x1502FB40: lhu         $t0, 0x8($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X8);
    // 0x1502FB44: lhu         $t1, 0xA($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XA);
    // 0x1502FB48: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x1502FB4C: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x1502FB50: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1502FB54: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x1502FB58: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x1502FB5C: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x1502FB60: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x1502FB64: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x1502FB68: addiu       $t0, $t8, -0x2
    ctx->r8 = ADD32(ctx->r24, -0X2);
    // 0x1502FB6C: addiu       $t1, $t6, -0x2
    ctx->r9 = ADD32(ctx->r14, -0X2);
    // 0x1502FB70: andi        $t9, $t0, 0xFFFF
    ctx->r25 = ctx->r8 & 0XFFFF;
    // 0x1502FB74: andi        $t7, $t1, 0xFFFF
    ctx->r15 = ctx->r9 & 0XFFFF;
    // 0x1502FB78: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x1502FB7C: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x1502FB80: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x1502FB84: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x1502FB88: or          $t7, $t6, $t2
    ctx->r15 = ctx->r14 | ctx->r10;
    // 0x1502FB8C: andi        $t9, $a3, 0xFFF
    ctx->r25 = ctx->r7 & 0XFFF;
    // 0x1502FB90: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x1502FB94: subu        $t8, $t3, $a0
    ctx->r24 = SUB32(ctx->r11, ctx->r4);
    // 0x1502FB98: andi        $t7, $t8, 0x7
    ctx->r15 = ctx->r24 & 0X7;
    // 0x1502FB9C: sll         $t9, $t7, 24
    ctx->r25 = S32(ctx->r15 << 24);
    // 0x1502FBA0: andi        $t8, $t0, 0xFFF
    ctx->r24 = ctx->r8 & 0XFFF;
    // 0x1502FBA4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1502FBA8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x1502FBAC: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x1502FBB0: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x1502FBB4: andi        $t9, $t1, 0xFFF
    ctx->r25 = ctx->r9 & 0XFFF;
    // 0x1502FBB8: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x1502FBBC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x1502FBC0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502FBC4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1502FBC8: bne         $a0, $ra, L_1502FB30
    if (ctx->r4 != ctx->r31) {
        // 0x1502FBCC: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_1502FB30;
    }
    // 0x1502FBCC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_1502FBD0:
    // 0x1502FBD0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502FBD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1502FBD8:
    // 0x1502FBD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1502FBDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1502FBE0: jr          $ra
    // 0x1502FBE4: nop

    return;
    return;
    // 0x1502FBE4: nop

;}
RECOMP_FUNC void func_151A4D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A4D88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A4D8C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151A4D90: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151A4D94: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151A4D98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A4D9C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151A4DA0: bne         $a2, $zero, L_151A4DDC
    if (ctx->r6 != 0) {
        // 0x151A4DA4: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_151A4DDC;
    }
    // 0x151A4DA4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151A4DA8: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x151A4DAC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x151A4DB0: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x151A4DB4: beq         $t7, $t8, L_151A4DCC
    if (ctx->r15 == ctx->r24) {
        // 0x151A4DB8: nop
    
            goto L_151A4DCC;
    }
    // 0x151A4DB8: nop

    // 0x151A4DBC: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x151A4DC0: lbu         $t0, 0x4($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X4);
    // 0x151A4DC4: bnel        $t9, $t0, L_151A4E28
    if (ctx->r25 != ctx->r8) {
        // 0x151A4DC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A4E28;
    }
    goto skip_0;
    // 0x151A4DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_151A4DCC:
    // 0x151A4DCC: jal         0x1516972C
    // 0x151A4DD0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151A4DD0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x151A4DD4: b           L_151A4E28
    // 0x151A4DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151A4E28;
    // 0x151A4DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151A4DDC:
    // 0x151A4DDC: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x151A4DE0: bne         $v0, $at, L_151A4E24
    if (ctx->r2 != ctx->r1) {
        // 0x151A4DE4: addiu       $v0, $a3, 0x28
        ctx->r2 = ADD32(ctx->r7, 0X28);
            goto L_151A4E24;
    }
    // 0x151A4DE4: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x151A4DE8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x151A4DEC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151A4DF0: bnel        $v1, $a0, L_151A4E10
    if (ctx->r3 != ctx->r4) {
        // 0x151A4DF4: lw          $t3, 0x4($a1)
        ctx->r11 = MEM_W(ctx->r5, 0X4);
            goto L_151A4E10;
    }
    goto skip_1;
    // 0x151A4DF4: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    skip_1:
    // 0x151A4DF8: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x151A4DFC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x151A4E00: lbu         $t2, 0x9($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X9);
    // 0x151A4E04: b           L_151A4E24
    // 0x151A4E08: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
        goto L_151A4E24;
    // 0x151A4E08: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
    // 0x151A4E0C: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
L_151A4E10:
    // 0x151A4E10: bnel        $t3, $a0, L_151A4E28
    if (ctx->r11 != ctx->r4) {
        // 0x151A4E14: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A4E28;
    }
    goto skip_2;
    // 0x151A4E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x151A4E18: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x151A4E1C: lbu         $t4, 0x8($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X8);
    // 0x151A4E20: sb          $t4, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r12;
L_151A4E24:
    // 0x151A4E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151A4E28:
    // 0x151A4E28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A4E2C: jr          $ra
    // 0x151A4E30: nop

    return;
    return;
    // 0x151A4E30: nop

;}
RECOMP_FUNC void func_150FE794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FE794: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150FE798: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150FE79C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150FE7A0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x150FE7A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150FE7A8: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150FE7AC: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x150FE7B0: lbu         $a3, -0x746C($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X746C);
    // 0x150FE7B4: addiu       $a2, $a2, 0x1FC8
    ctx->r6 = ADD32(ctx->r6, 0X1FC8);
    // 0x150FE7B8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x150FE7BC: jal         0x151D3E04
    // 0x150FE7C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_151D3E04(rdram, ctx);
        goto after_0;
    // 0x150FE7C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x150FE7C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150FE7C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150FE7CC: jr          $ra
    // 0x150FE7D0: nop

    return;
    return;
    // 0x150FE7D0: nop

;}
RECOMP_FUNC void func_150AA678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AA678: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150AA67C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150AA680: or          $t8, $ra, $zero
    ctx->r24 = ctx->r31 | 0;
    // 0x150AA684: andi        $t0, $v1, 0x3
    ctx->r8 = ctx->r3 & 0X3;
    // 0x150AA688: beq         $t0, $zero, L_150AA6D0
    if (ctx->r8 == 0) {
        // 0x150AA68C: andi        $t0, $v1, 0x1
        ctx->r8 = ctx->r3 & 0X1;
            goto L_150AA6D0;
    }
    // 0x150AA68C: andi        $t0, $v1, 0x1
    ctx->r8 = ctx->r3 & 0X1;
    // 0x150AA690: sub.s       $f15, $f6, $f9
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f15.fl = ctx->f6.fl - ctx->f9.fl;
    // 0x150AA694: beq         $t0, $zero, L_150AA6B8
    if (ctx->r8 == 0) {
        // 0x150AA698: div.s       $f15, $f14, $f15
        CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f15.fl = DIV_S(ctx->f14.fl, ctx->f15.fl);
            goto L_150AA6B8;
    }
    // 0x150AA698: div.s       $f15, $f14, $f15
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f15.fl = DIV_S(ctx->f14.fl, ctx->f15.fl);
    // 0x150AA69C: sub.s       $f12, $f0, $f9
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f9.fl;
    // 0x150AA6A0: mul.s       $f12, $f12, $f15
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f15.fl);
    // 0x150AA6A4: jal         0x150AA644
    // 0x150AA6A8: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    func_150AA644(rdram, ctx);
        goto after_0;
    // 0x150AA6A8: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_0:
    // 0x150AA6AC: beq         $v0, $zero, L_150AA770
    if (ctx->r2 == 0) {
        // 0x150AA6B0: andi        $t0, $v1, 0x2
        ctx->r8 = ctx->r3 & 0X2;
            goto L_150AA770;
    }
    // 0x150AA6B0: andi        $t0, $v1, 0x2
    ctx->r8 = ctx->r3 & 0X2;
    // 0x150AA6B4: beq         $t0, $zero, L_150AA6D0
    if (ctx->r8 == 0) {
        // 0x150AA6B8: add.s       $f12, $f0, $f9
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f9.fl;
            goto L_150AA6D0;
    }
L_150AA6B8:
    // 0x150AA6B8: add.s       $f12, $f0, $f9
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f9.fl;
    // 0x150AA6BC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x150AA6C0: mul.s       $f12, $f12, $f15
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f15.fl);
    // 0x150AA6C4: jal         0x150AA644
    // 0x150AA6C8: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    func_150AA644(rdram, ctx);
        goto after_1;
    // 0x150AA6C8: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_1:
    // 0x150AA6CC: beq         $v0, $zero, L_150AA770
    if (ctx->r2 == 0) {
        // 0x150AA6D0: andi        $t0, $v1, 0xC
        ctx->r8 = ctx->r3 & 0XC;
            goto L_150AA770;
    }
L_150AA6D0:
    // 0x150AA6D0: andi        $t0, $v1, 0xC
    ctx->r8 = ctx->r3 & 0XC;
    // 0x150AA6D4: beq         $t0, $zero, L_150AA71C
    if (ctx->r8 == 0) {
        // 0x150AA6D8: andi        $t0, $v1, 0x4
        ctx->r8 = ctx->r3 & 0X4;
            goto L_150AA71C;
    }
    // 0x150AA6D8: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
    // 0x150AA6DC: sub.s       $f15, $f7, $f10
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f15.fl = ctx->f7.fl - ctx->f10.fl;
    // 0x150AA6E0: beq         $t0, $zero, L_150AA704
    if (ctx->r8 == 0) {
        // 0x150AA6E4: div.s       $f15, $f14, $f15
        CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f15.fl = DIV_S(ctx->f14.fl, ctx->f15.fl);
            goto L_150AA704;
    }
    // 0x150AA6E4: div.s       $f15, $f14, $f15
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f15.fl = DIV_S(ctx->f14.fl, ctx->f15.fl);
    // 0x150AA6E8: sub.s       $f12, $f1, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f1.fl - ctx->f10.fl;
    // 0x150AA6EC: mul.s       $f12, $f12, $f15
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f15.fl);
    // 0x150AA6F0: jal         0x150AA644
    // 0x150AA6F4: addiu       $a0, $zero, 0x3B
    ctx->r4 = ADD32(0, 0X3B);
    func_150AA644(rdram, ctx);
        goto after_2;
    // 0x150AA6F4: addiu       $a0, $zero, 0x3B
    ctx->r4 = ADD32(0, 0X3B);
    after_2:
    // 0x150AA6F8: beq         $v0, $zero, L_150AA770
    if (ctx->r2 == 0) {
        // 0x150AA6FC: andi        $t0, $v1, 0x8
        ctx->r8 = ctx->r3 & 0X8;
            goto L_150AA770;
    }
    // 0x150AA6FC: andi        $t0, $v1, 0x8
    ctx->r8 = ctx->r3 & 0X8;
    // 0x150AA700: beq         $t0, $zero, L_150AA71C
    if (ctx->r8 == 0) {
        // 0x150AA704: add.s       $f12, $f1, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f10.fl;
            goto L_150AA71C;
    }
L_150AA704:
    // 0x150AA704: add.s       $f12, $f1, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f10.fl;
    // 0x150AA708: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x150AA70C: mul.s       $f12, $f12, $f15
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f15.fl);
    // 0x150AA710: jal         0x150AA644
    // 0x150AA714: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_150AA644(rdram, ctx);
        goto after_3;
    // 0x150AA714: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_3:
    // 0x150AA718: beq         $v0, $zero, L_150AA770
    if (ctx->r2 == 0) {
        // 0x150AA71C: andi        $t0, $v1, 0x30
        ctx->r8 = ctx->r3 & 0X30;
            goto L_150AA770;
    }
L_150AA71C:
    // 0x150AA71C: andi        $t0, $v1, 0x30
    ctx->r8 = ctx->r3 & 0X30;
    // 0x150AA720: beq         $t0, $zero, L_150AA76C
    if (ctx->r8 == 0) {
        // 0x150AA724: andi        $t0, $v1, 0x10
        ctx->r8 = ctx->r3 & 0X10;
            goto L_150AA76C;
    }
    // 0x150AA724: andi        $t0, $v1, 0x10
    ctx->r8 = ctx->r3 & 0X10;
    // 0x150AA728: sub.s       $f15, $f8, $f11
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f15.fl = ctx->f8.fl - ctx->f11.fl;
    // 0x150AA72C: beq         $t0, $zero, L_150AA750
    if (ctx->r8 == 0) {
        // 0x150AA730: div.s       $f15, $f14, $f15
        CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f15.fl = DIV_S(ctx->f14.fl, ctx->f15.fl);
            goto L_150AA750;
    }
    // 0x150AA730: div.s       $f15, $f14, $f15
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f15.fl = DIV_S(ctx->f14.fl, ctx->f15.fl);
    // 0x150AA734: sub.s       $f12, $f2, $f11
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f11.fl;
    // 0x150AA738: mul.s       $f12, $f12, $f15
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f15.fl);
    // 0x150AA73C: jal         0x150AA644
    // 0x150AA740: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    func_150AA644(rdram, ctx);
        goto after_4;
    // 0x150AA740: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_4:
    // 0x150AA744: beq         $v0, $zero, L_150AA770
    if (ctx->r2 == 0) {
        // 0x150AA748: andi        $t0, $v1, 0x20
        ctx->r8 = ctx->r3 & 0X20;
            goto L_150AA770;
    }
    // 0x150AA748: andi        $t0, $v1, 0x20
    ctx->r8 = ctx->r3 & 0X20;
    // 0x150AA74C: beq         $t0, $zero, L_150AA76C
    if (ctx->r8 == 0) {
        // 0x150AA750: add.s       $f12, $f2, $f11
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f11.fl;
            goto L_150AA76C;
    }
L_150AA750:
    // 0x150AA750: add.s       $f12, $f2, $f11
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f11.fl;
    // 0x150AA754: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x150AA758: mul.s       $f12, $f12, $f15
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f15.fl);
    // 0x150AA75C: jal         0x150AA644
    // 0x150AA760: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_150AA644(rdram, ctx);
        goto after_5;
    // 0x150AA760: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_5:
    // 0x150AA764: beq         $v0, $zero, L_150AA770
    if (ctx->r2 == 0) {
        // 0x150AA768: nop
    
            goto L_150AA770;
    }
    // 0x150AA768: nop

L_150AA76C:
    // 0x150AA76C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150AA770:
    // 0x150AA770: jr          $t8
    // 0x150AA774: nop

    LOOKUP_FUNC(ctx->r24)(rdram, ctx);
    return;
    // 0x150AA774: nop

;}
RECOMP_FUNC void func_150AEEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AEEB0: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x150AEEB4: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x150AEEB8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150AEEBC: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x150AEEC0: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x150AEEC4: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x150AEEC8: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x150AEECC: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x150AEED0: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x150AEED4: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x150AEED8: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x150AEEDC: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x150AEEE0: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x150AEEE4: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x150AEEE8: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x150AEEEC: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x150AEEF0: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x150AEEF4: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x150AEEF8: sw          $a1, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r5;
    // 0x150AEEFC: addiu       $s3, $zero, 0x1E
    ctx->r19 = ADD32(0, 0X1E);
    // 0x150AEF00: beq         $s2, $zero, L_150AF178
    if (ctx->r18 == 0) {
        // 0x150AEF04: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_150AF178;
    }
    // 0x150AEF04: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x150AEF08: lui         $t7, 0x16
    ctx->r15 = S32(0X16 << 16);
    // 0x150AEF0C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150AEF10: ori         $t7, $t7, 0x600
    ctx->r15 = ctx->r15 | 0X600;
    // 0x150AEF14: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x150AEF18: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x150AEF1C: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x150AEF20: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x150AEF24: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x150AEF28: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150AEF2C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150AEF30: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x150AEF34: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x150AEF38: sw          $t6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r14;
    // 0x150AEF3C: sw          $t7, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r15;
    // 0x150AEF40: sw          $t8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r24;
    // 0x150AEF44: sw          $t9, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r25;
    // 0x150AEF48: sw          $t0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r8;
    // 0x150AEF4C: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
    // 0x150AEF50: sb          $zero, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = 0;
    // 0x150AEF54: sb          $t2, 0xD9($sp)
    MEM_B(0XD9, ctx->r29) = ctx->r10;
    // 0x150AEF58: sw          $t3, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r11;
    // 0x150AEF5C: sh          $t4, 0x112($sp)
    MEM_H(0X112, ctx->r29) = ctx->r12;
    // 0x150AEF60: sb          $t5, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = ctx->r13;
    // 0x150AEF64: lw          $t6, 0x184($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X184);
    // 0x150AEF68: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150AEF6C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150AEF70: srl         $t8, $t6, 5
    ctx->r24 = S32(U32(ctx->r14) >> 5);
    // 0x150AEF74: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x150AEF78: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x150AEF7C: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x150AEF80: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150AEF84: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150AEF88: sb          $t1, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = ctx->r9;
    // 0x150AEF8C: sb          $t2, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r10;
    // 0x150AEF90: sb          $t3, 0xFF($sp)
    MEM_B(0XFF, ctx->r29) = ctx->r11;
    // 0x150AEF94: addiu       $fp, $sp, 0x104
    ctx->r30 = ADD32(ctx->r29, 0X104);
    // 0x150AEF98: addiu       $s7, $zero, 0x1A
    ctx->r23 = ADD32(0, 0X1A);
    // 0x150AEF9C: addiu       $s6, $zero, 0x7
    ctx->r22 = ADD32(0, 0X7);
    // 0x150AEFA0: addiu       $s5, $zero, 0x15
    ctx->r21 = ADD32(0, 0X15);
L_150AEFA4:
    // 0x150AEFA4: jal         0x150ADA20
    // 0x150AEFA8: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150AEFA8: nop

    after_0:
    // 0x150AEFAC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150AEFB0: andi        $t4, $s0, 0xFF
    ctx->r12 = ctx->r16 & 0XFF;
    // 0x150AEFB4: jal         0x150ADA20
    // 0x150AEFB8: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150AEFB8: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    after_1:
    // 0x150AEFBC: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150AEFC0: mfhi        $t5
    ctx->r13 = hi;
    // 0x150AEFC4: addiu       $t6, $zero, -0x28
    ctx->r14 = ADD32(0, -0X28);
    // 0x150AEFC8: subu        $v1, $t6, $t5
    ctx->r3 = SUB32(ctx->r14, ctx->r13);
    // 0x150AEFCC: bne         $s5, $zero, L_150AEFD8
    if (ctx->r21 != 0) {
        // 0x150AEFD0: nop
    
            goto L_150AEFD8;
    }
    // 0x150AEFD0: nop

    // 0x150AEFD4: break       7
    do_break(353038292);
L_150AEFD8:
    // 0x150AEFD8: andi        $s1, $v1, 0xFF
    ctx->r17 = ctx->r3 & 0XFF;
    // 0x150AEFDC: jal         0x151423D8
    // 0x150AEFE0: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x150AEFE0: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    after_2:
    // 0x150AEFE4: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x150AEFE8: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x150AEFEC: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    // 0x150AEFF0: jal         0x151423D8
    // 0x150AEFF4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x150AEFF4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_3:
    // 0x150AEFF8: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x150AEFFC: jal         0x151423D8
    // 0x150AF000: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x150AF000: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_4:
    // 0x150AF004: addiu       $a0, $s0, -0x40
    ctx->r4 = ADD32(ctx->r16, -0X40);
    // 0x150AF008: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x150AF00C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150AF010: jal         0x151423D8
    // 0x150AF014: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x150AF014: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_5:
    // 0x150AF018: jal         0x150ADA68
    // 0x150AF01C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150AF01C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_6:
    // 0x150AF020: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150AF024: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150AF028: lwc1        $f10, 0x14($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X14);
    // 0x150AF02C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150AF030: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150AF034: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150AF038: mul.s       $f16, $f30, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f30.fl, ctx->f22.fl);
    // 0x150AF03C: add.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150AF040: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150AF044: jal         0x150ADA68
    // 0x150AF048: swc1        $f18, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150AF048: swc1        $f18, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x150AF04C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150AF050: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150AF054: lwc1        $f8, 0x18($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X18);
    // 0x150AF058: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150AF05C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150AF060: mul.s       $f18, $f30, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f30.fl, ctx->f20.fl);
    // 0x150AF064: swc1        $f10, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f10.u32l;
    // 0x150AF068: lwc1        $f16, 0x1C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x150AF06C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150AF070: jal         0x150ADA20
    // 0x150AF074: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150AF074: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x150AF078: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x150AF07C: mfhi        $t0
    ctx->r8 = hi;
    // 0x150AF080: addiu       $t9, $t0, 0x3
    ctx->r25 = ADD32(ctx->r8, 0X3);
    // 0x150AF084: bne         $s6, $zero, L_150AF090
    if (ctx->r22 != 0) {
        // 0x150AF088: nop
    
            goto L_150AF090;
    }
    // 0x150AF088: nop

    // 0x150AF08C: break       7
    do_break(353038476);
L_150AF090:
    // 0x150AF090: sb          $t9, 0x119($sp)
    MEM_B(0X119, ctx->r29) = ctx->r25;
    // 0x150AF094: jal         0x150ADA20
    // 0x150AF098: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150AF098: nop

    after_9:
    // 0x150AF09C: divu        $zero, $v0, $s7
    lo = S32(U32(ctx->r2) / U32(ctx->r23)); hi = S32(U32(ctx->r2) % U32(ctx->r23));
    // 0x150AF0A0: mfhi        $t1
    ctx->r9 = hi;
    // 0x150AF0A4: addiu       $t2, $t1, 0x23
    ctx->r10 = ADD32(ctx->r9, 0X23);
    // 0x150AF0A8: bne         $s7, $zero, L_150AF0B4
    if (ctx->r23 != 0) {
        // 0x150AF0AC: nop
    
            goto L_150AF0B4;
    }
    // 0x150AF0AC: nop

    // 0x150AF0B0: break       7
    do_break(353038512);
L_150AF0B4:
    // 0x150AF0B4: sh          $t2, 0x110($sp)
    MEM_H(0X110, ctx->r29) = ctx->r10;
    // 0x150AF0B8: jal         0x150ADA68
    // 0x150AF0BC: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150AF0BC: nop

    after_10:
    // 0x150AF0C0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150AF0C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150AF0C8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150AF0CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150AF0D0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150AF0D4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150AF0D8: jal         0x150ADA68
    // 0x150AF0DC: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150AF0DC: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x150AF0E0: mul.s       $f2, $f24, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x150AF0E4: neg.s       $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = -ctx->f24.fl;
    // 0x150AF0E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150AF0EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150AF0F0: lbu         $t6, 0x127($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X127);
    // 0x150AF0F4: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150AF0F8: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x150AF0FC: mul.s       $f6, $f2, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x150AF100: addiu       $t4, $sp, 0xBC
    ctx->r12 = ADD32(ctx->r29, 0XBC);
    // 0x150AF104: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x150AF108: mul.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x150AF10C: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x150AF110: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150AF114: mul.s       $f16, $f2, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x150AF118: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    // 0x150AF11C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x150AF120: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    // 0x150AF124: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x150AF128: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150AF12C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150AF130: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x150AF134: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150AF138: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150AF13C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150AF140: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150AF144: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150AF148: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150AF14C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150AF150: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x150AF154: jal         0x15147DA0
    // 0x150AF158: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    func_15147DA0(rdram, ctx);
        goto after_12;
    // 0x150AF158: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    after_12:
    // 0x150AF15C: bne         $v0, $zero, L_150AF168
    if (ctx->r2 != 0) {
        // 0x150AF160: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_150AF168;
    }
    // 0x150AF160: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x150AF164: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_150AF168:
    // 0x150AF168: beql        $s4, $zero, L_150AF17C
    if (ctx->r20 == 0) {
        // 0x150AF16C: lw          $ra, 0x9C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X9C);
            goto L_150AF17C;
    }
    goto skip_0;
    // 0x150AF16C: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    skip_0:
    // 0x150AF170: bne         $s3, $zero, L_150AEFA4
    if (ctx->r19 != 0) {
        // 0x150AF174: nop
    
            goto L_150AEFA4;
    }
    // 0x150AF174: nop

L_150AF178:
    // 0x150AF178: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
L_150AF17C:
    // 0x150AF17C: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x150AF180: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x150AF184: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x150AF188: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x150AF18C: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x150AF190: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x150AF194: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x150AF198: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x150AF19C: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x150AF1A0: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x150AF1A4: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x150AF1A8: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x150AF1AC: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x150AF1B0: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x150AF1B4: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x150AF1B8: jr          $ra
    // 0x150AF1BC: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    return;
    // 0x150AF1BC: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void n_alFxNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001D124: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1001D128: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1001D12C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1001D130: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1001D134: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1001D138: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x1001D13C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1001D140: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x1001D144: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1001D148: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D14C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D150: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x1001D154: jal         0x10012844
    // 0x1001D158: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x1001D158: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1001D15C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x1001D160: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1001D164: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x1001D168: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x1001D16C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1001D170: lh          $t0, 0x42($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X42);
    // 0x1001D174: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1001D178: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x1001D17C: lbu         $t2, 0x30($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X30);
    // 0x1001D180: bne         $t2, $at, L_1001D1B0
    if (ctx->r10 != ctx->r1) {
        // 0x1001D184: nop
    
            goto L_1001D1B0;
    }
    // 0x1001D184: nop

    // 0x1001D188: b           L_1001D190
    // 0x1001D18C: nop

        goto L_1001D190;
    // 0x1001D18C: nop

L_1001D190:
    // 0x1001D190: lh          $t4, 0x42($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X42);
    // 0x1001D194: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x1001D198: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x1001D19C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x1001D1A0: lw          $t7, 0x34($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X34);
    // 0x1001D1A4: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x1001D1A8: b           L_1001D1C4
    // 0x1001D1AC: nop

        goto L_1001D1C4;
    // 0x1001D1AC: nop

L_1001D1B0:
    // 0x1001D1B0: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x1001D1B4: addiu       $t8, $t8, -0x4420
    ctx->r24 = ADD32(ctx->r24, -0X4420);
    // 0x1001D1B8: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x1001D1BC: b           L_1001D1C4
    // 0x1001D1C0: nop

        goto L_1001D1C4;
    // 0x1001D1C0: nop

L_1001D1C4:
    // 0x1001D1C4: sh          $zero, 0x34($sp)
    MEM_H(0X34, ctx->r29) = 0;
    // 0x1001D1C8: lhu         $t0, 0x34($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D1CC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x1001D1D0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1001D1D4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x1001D1D8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x1001D1DC: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x1001D1E0: sb          $t4, 0x8($t3)
    MEM_B(0X8, ctx->r11) = ctx->r12;
    // 0x1001D1E4: lhu         $t5, 0x34($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D1E8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x1001D1EC: sh          $t6, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r14;
    // 0x1001D1F0: lhu         $t8, 0x34($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D1F4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1001D1F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001D1FC: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x1001D200: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x1001D204: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x1001D208: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x1001D20C: lhu         $t4, 0x34($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D210: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x1001D214: sh          $t3, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r11;
    // 0x1001D218: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1001D21C: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x1001D220: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D224: lbu         $a3, 0x8($t5)
    ctx->r7 = MEM_BU(ctx->r13, 0X8);
    // 0x1001D228: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1001D22C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D230: jal         0x10012844
    // 0x1001D234: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x1001D234: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_1:
    // 0x1001D238: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x1001D23C: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x1001D240: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1001D244: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1001D248: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D24C: lw          $a3, 0x0($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X0);
    // 0x1001D250: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1001D254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D258: jal         0x10012844
    // 0x1001D25C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x1001D25C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_2:
    // 0x1001D260: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x1001D264: sw          $v0, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->r2;
    // 0x1001D268: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1001D26C: lw          $t2, 0x20($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X20);
    // 0x1001D270: sw          $t2, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->r10;
    // 0x1001D274: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x1001D278: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1001D27C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D280: lw          $a3, 0x0($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X0);
    // 0x1001D284: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1001D288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D28C: jal         0x10012844
    // 0x1001D290: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x1001D290: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_3:
    // 0x1001D294: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1001D298: sw          $v0, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->r2;
    // 0x1001D29C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x1001D2A0: lw          $t8, 0x24($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X24);
    // 0x1001D2A4: sw          $t8, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->r24;
    // 0x1001D2A8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1001D2AC: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
    // 0x1001D2B0: lw          $t0, 0x0($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X0);
    // 0x1001D2B4: beq         $t0, $zero, L_1001D31C
    if (ctx->r8 == 0) {
        // 0x1001D2B8: nop
    
            goto L_1001D31C;
    }
    // 0x1001D2B8: nop

L_1001D2BC:
    // 0x1001D2BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x1001D2C0: lhu         $t1, 0x32($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X32);
    // 0x1001D2C4: lw          $t2, 0x24($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X24);
    // 0x1001D2C8: sll         $t4, $t1, 1
    ctx->r12 = S32(ctx->r9 << 1);
    // 0x1001D2CC: addu        $t3, $t2, $t4
    ctx->r11 = ADD32(ctx->r10, ctx->r12);
    // 0x1001D2D0: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    // 0x1001D2D4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1001D2D8: lhu         $t6, 0x32($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X32);
    // 0x1001D2DC: lw          $t8, 0x24($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X24);
    // 0x1001D2E0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x1001D2E4: lw          $t1, 0x20($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X20);
    // 0x1001D2E8: addu        $t0, $t8, $t7
    ctx->r8 = ADD32(ctx->r24, ctx->r15);
    // 0x1001D2EC: lh          $t9, 0x0($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X0);
    // 0x1001D2F0: addu        $t2, $t1, $t7
    ctx->r10 = ADD32(ctx->r9, ctx->r15);
    // 0x1001D2F4: sh          $t9, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r25;
    // 0x1001D2F8: lhu         $t4, 0x32($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X32);
    // 0x1001D2FC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x1001D300: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x1001D304: sh          $t3, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r11;
    // 0x1001D308: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x1001D30C: andi        $t6, $t3, 0xFFFF
    ctx->r14 = ctx->r11 & 0XFFFF;
    // 0x1001D310: sltu        $at, $t6, $t0
    ctx->r1 = ctx->r14 < ctx->r8 ? 1 : 0;
    // 0x1001D314: bne         $at, $zero, L_1001D2BC
    if (ctx->r1 != 0) {
        // 0x1001D318: nop
    
            goto L_1001D2BC;
    }
    // 0x1001D318: nop

L_1001D31C:
    // 0x1001D31C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1001D320: sh          $zero, 0x36($sp)
    MEM_H(0X36, ctx->r29) = 0;
    // 0x1001D324: lbu         $t1, 0x8($t5)
    ctx->r9 = MEM_BU(ctx->r13, 0X8);
    // 0x1001D328: blez        $t1, L_1001D6D0
    if (SIGNED(ctx->r9) <= 0) {
        // 0x1001D32C: nop
    
            goto L_1001D6D0;
    }
    // 0x1001D32C: nop

L_1001D330:
    // 0x1001D330: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1001D334: lhu         $t2, 0x36($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X36);
    // 0x1001D338: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x1001D33C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x1001D340: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x1001D344: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x1001D348: addu        $t3, $t9, $t4
    ctx->r11 = ADD32(ctx->r25, ctx->r12);
    // 0x1001D34C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x1001D350: lhu         $t6, 0x34($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D354: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1001D358: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1001D35C: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x1001D360: addu        $t5, $t8, $t0
    ctx->r13 = ADD32(ctx->r24, ctx->r8);
    // 0x1001D364: lw          $t1, 0x0($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X0);
    // 0x1001D368: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    // 0x1001D36C: lhu         $t2, 0x34($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D370: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x1001D374: sh          $t9, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r25;
    // 0x1001D378: lhu         $t3, 0x34($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D37C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1001D380: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001D384: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x1001D388: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x1001D38C: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x1001D390: sw          $t0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r8;
    // 0x1001D394: lhu         $t1, 0x34($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D398: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x1001D39C: sh          $t7, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r15;
    // 0x1001D3A0: lhu         $t9, 0x34($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D3A4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x1001D3A8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x1001D3AC: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x1001D3B0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x1001D3B4: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x1001D3B8: sh          $t6, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r14;
    // 0x1001D3BC: lhu         $t0, 0x34($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D3C0: addiu       $t5, $t0, 0x1
    ctx->r13 = ADD32(ctx->r8, 0X1);
    // 0x1001D3C4: sh          $t5, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r13;
    // 0x1001D3C8: lhu         $t7, 0x34($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D3CC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x1001D3D0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x1001D3D4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x1001D3D8: addu        $t2, $t1, $t9
    ctx->r10 = ADD32(ctx->r9, ctx->r25);
    // 0x1001D3DC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1001D3E0: sh          $t3, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r11;
    // 0x1001D3E4: lhu         $t6, 0x34($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D3E8: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x1001D3EC: sh          $t8, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r24;
    // 0x1001D3F0: lhu         $t5, 0x34($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D3F4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1001D3F8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1001D3FC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x1001D400: addu        $t1, $t0, $t7
    ctx->r9 = ADD32(ctx->r8, ctx->r15);
    // 0x1001D404: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x1001D408: sh          $t9, 0xC($t2)
    MEM_H(0XC, ctx->r10) = ctx->r25;
    // 0x1001D40C: lhu         $t3, 0x34($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D410: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x1001D414: sh          $t4, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r12;
    // 0x1001D418: lhu         $t8, 0x34($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D41C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x1001D420: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x1001D424: addu        $t0, $t6, $t5
    ctx->r8 = ADD32(ctx->r14, ctx->r13);
    // 0x1001D428: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x1001D42C: beq         $t7, $zero, L_1001D5A8
    if (ctx->r15 == 0) {
        // 0x1001D430: nop
    
            goto L_1001D5A8;
    }
    // 0x1001D430: nop

    // 0x1001D434: lhu         $t9, 0x34($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D438: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x1001D43C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x1001D440: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x1001D444: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x1001D448: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1001D44C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1001D450: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x1001D454: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1001D458: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1001D45C: lw          $t6, 0x2C($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X2C);
    // 0x1001D460: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1001D464: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1001D468: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1001D46C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001D470: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1001D474: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1001D478: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1001D47C: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1001D480: swc1        $f8, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f8.u32l;
    // 0x1001D484: lhu         $t0, 0x34($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D488: addiu       $t7, $t0, 0x1
    ctx->r15 = ADD32(ctx->r8, 0X1);
    // 0x1001D48C: sh          $t7, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r15;
    // 0x1001D490: lhu         $t1, 0x34($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D494: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x1001D498: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x1001D49C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x1001D4A0: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x1001D4A4: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1001D4A8: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x1001D4AC: lw          $t5, 0x0($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X0);
    // 0x1001D4B0: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x1001D4B4: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1001D4B8: subu        $t0, $t6, $t5
    ctx->r8 = SUB32(ctx->r14, ctx->r13);
    // 0x1001D4BC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1001D4C0: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x1001D4C4: lwc1        $f4, -0x3878($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3878);
    // 0x1001D4C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1001D4CC: bgez        $t0, L_1001D4E4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1001D4D0: div.s       $f18, $f16, $f4
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
            goto L_1001D4E4;
    }
    // 0x1001D4D0: div.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x1001D4D4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1001D4D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1001D4DC: nop

    // 0x1001D4E0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_1001D4E4:
    // 0x1001D4E4: mul.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x1001D4E8: swc1        $f16, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f16.u32l;
    // 0x1001D4EC: lhu         $t7, 0x34($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D4F0: addiu       $t1, $t7, 0x1
    ctx->r9 = ADD32(ctx->r15, 0X1);
    // 0x1001D4F4: sh          $t1, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r9;
    // 0x1001D4F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1001D4FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1001D500: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x1001D504: swc1        $f4, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f4.u32l;
    // 0x1001D508: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1001D50C: sw          $zero, 0x18($t2)
    MEM_W(0X18, ctx->r10) = 0;
    // 0x1001D510: addiu       $t3, $zero, 0x38
    ctx->r11 = ADD32(0, 0X38);
    // 0x1001D514: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1001D518: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D51C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D520: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x1001D524: jal         0x10012844
    // 0x1001D528: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x1001D528: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x1001D52C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x1001D530: sw          $v0, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->r2;
    // 0x1001D534: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x1001D538: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1001D53C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D544: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x1001D548: jal         0x10012844
    // 0x1001D54C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x1001D54C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x1001D550: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001D554: lw          $t0, 0x24($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X24);
    // 0x1001D558: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
    // 0x1001D55C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x1001D560: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1001D564: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D56C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x1001D570: jal         0x10012844
    // 0x1001D574: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x1001D574: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x1001D578: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1001D57C: lw          $t1, 0x24($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X24);
    // 0x1001D580: sw          $v0, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r2;
    // 0x1001D584: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x1001D588: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1001D58C: lw          $t2, 0x24($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X24);
    // 0x1001D590: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
    // 0x1001D594: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x1001D598: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1001D59C: lw          $t6, 0x24($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X24);
    // 0x1001D5A0: b           L_1001D5C8
    // 0x1001D5A4: sw          $t3, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->r11;
        goto L_1001D5C8;
    // 0x1001D5A4: sw          $t3, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->r11;
L_1001D5A8:
    // 0x1001D5A8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001D5AC: sw          $zero, 0x24($t5)
    MEM_W(0X24, ctx->r13) = 0;
    // 0x1001D5B0: lhu         $t0, 0x34($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D5B4: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x1001D5B8: sh          $t8, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r24;
    // 0x1001D5BC: lhu         $t7, 0x34($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D5C0: addiu       $t1, $t7, 0x1
    ctx->r9 = ADD32(ctx->r15, 0X1);
    // 0x1001D5C4: sh          $t1, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r9;
L_1001D5C8:
    // 0x1001D5C8: lhu         $t2, 0x34($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D5CC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x1001D5D0: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x1001D5D4: addu        $t3, $t9, $t4
    ctx->r11 = ADD32(ctx->r25, ctx->r12);
    // 0x1001D5D8: lw          $t6, 0x0($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X0);
    // 0x1001D5DC: beq         $t6, $zero, L_1001D698
    if (ctx->r14 == 0) {
        // 0x1001D5E0: nop
    
            goto L_1001D698;
    }
    // 0x1001D5E0: nop

    // 0x1001D5E4: addiu       $t5, $zero, 0x38
    ctx->r13 = ADD32(0, 0X38);
    // 0x1001D5E8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1001D5EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D5F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D5F4: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x1001D5F8: jal         0x10012844
    // 0x1001D5FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_7;
    // 0x1001D5FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x1001D600: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1001D604: sw          $v0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r2;
    // 0x1001D608: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x1001D60C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1001D610: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D618: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x1001D61C: jal         0x10012844
    // 0x1001D620: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_8;
    // 0x1001D620: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x1001D624: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1001D628: lw          $t1, 0x20($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X20);
    // 0x1001D62C: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
    // 0x1001D630: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x1001D634: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1001D638: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D63C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D640: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x1001D644: jal         0x10012844
    // 0x1001D648: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_9;
    // 0x1001D648: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x1001D64C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x1001D650: lw          $t4, 0x20($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X20);
    // 0x1001D654: sw          $v0, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r2;
    // 0x1001D658: lhu         $t6, 0x34($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D65C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x1001D660: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1001D664: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x1001D668: addu        $t0, $t3, $t5
    ctx->r8 = ADD32(ctx->r11, ctx->r13);
    // 0x1001D66C: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x1001D670: lw          $t1, 0x20($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X20);
    // 0x1001D674: sh          $t8, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r24;
    // 0x1001D678: lhu         $t2, 0x34($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D67C: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x1001D680: sh          $t9, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r25;
    // 0x1001D684: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x1001D688: jal         0x1001CD54
    // 0x1001D68C: lw          $a0, 0x20($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X20);
    init_lpfilter(rdram, ctx);
        goto after_10;
    // 0x1001D68C: lw          $a0, 0x20($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X20);
    after_10:
    // 0x1001D690: b           L_1001D6AC
    // 0x1001D694: nop

        goto L_1001D6AC;
    // 0x1001D694: nop

L_1001D698:
    // 0x1001D698: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1001D69C: sw          $zero, 0x20($t6)
    MEM_W(0X20, ctx->r14) = 0;
    // 0x1001D6A0: lhu         $t3, 0x34($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X34);
    // 0x1001D6A4: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x1001D6A8: sh          $t5, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r13;
L_1001D6AC:
    // 0x1001D6AC: lhu         $t0, 0x36($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X36);
    // 0x1001D6B0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1001D6B4: addiu       $t7, $t0, 0x1
    ctx->r15 = ADD32(ctx->r8, 0X1);
    // 0x1001D6B8: sh          $t7, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r15;
    // 0x1001D6BC: lbu         $t2, 0x8($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X8);
    // 0x1001D6C0: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x1001D6C4: slt         $at, $t8, $t2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1001D6C8: bne         $at, $zero, L_1001D330
    if (ctx->r1 != 0) {
        // 0x1001D6CC: nop
    
            goto L_1001D330;
    }
    // 0x1001D6CC: nop

L_1001D6D0:
    // 0x1001D6D0: b           L_1001D6D8
    // 0x1001D6D4: nop

        goto L_1001D6D8;
    // 0x1001D6D4: nop

L_1001D6D8:
    // 0x1001D6D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1001D6DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1001D6E0: jr          $ra
    // 0x1001D6E4: nop

    return;
    return;
    // 0x1001D6E4: nop

;}
RECOMP_FUNC void func_150C5F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5F94: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150C5F98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150C5F9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C5FA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150C5FA4: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x150C5FA8: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x150C5FAC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150C5FB0: sb          $t7, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r15;
    // 0x150C5FB4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x150C5FB8: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C5FBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C5FC0: lwc1        $f8, 0x410($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X410);
    // 0x150C5FC4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x150C5FC8: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C5FCC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150C5FD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C5FD4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150C5FD8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x150C5FDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150C5FE0: addiu       $a3, $t6, 0x34
    ctx->r7 = ADD32(ctx->r14, 0X34);
    // 0x150C5FE4: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x150C5FE8: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C5FEC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x150C5FF0: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C5FF4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150C5FF8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150C5FFC: jal         0x15045800
    // 0x150C6000: nop

    func_15045800(rdram, ctx);
        goto after_0;
    // 0x150C6000: nop

    after_0:
    // 0x150C6004: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150C6008: beq         $v0, $zero, L_150C6020
    if (ctx->r2 == 0) {
        // 0x150C600C: addiu       $t0, $zero, 0x12C
        ctx->r8 = ADD32(0, 0X12C);
            goto L_150C6020;
    }
    // 0x150C600C: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x150C6010: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x150C6014: lwc1        $f8, 0x34($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X34);
    // 0x150C6018: b           L_150C6034
    // 0x150C601C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
        goto L_150C6034;
    // 0x150C601C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
L_150C6020:
    // 0x150C6020: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C6024: lwc1        $f16, 0x414($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X414);
    // 0x150C6028: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C602C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150C6030: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
L_150C6034:
    // 0x150C6034: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x150C6038: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x150C603C: lbu         $t9, 0x3B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3B);
    // 0x150C6040: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150C6044: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C6048: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C604C: lwc1        $f6, 0x418($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418);
    // 0x150C6050: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x150C6054: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x150C6058: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150C605C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x150C6060: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x150C6064: sb          $zero, 0x50($sp)
    MEM_B(0X50, ctx->r29) = 0;
    // 0x150C6068: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x150C606C: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x150C6070: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x150C6074: sh          $t0, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r8;
    // 0x150C6078: sb          $t1, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r9;
    // 0x150C607C: sb          $t2, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r10;
    // 0x150C6080: sb          $t3, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r11;
    // 0x150C6084: sb          $t4, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r12;
    // 0x150C6088: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x150C608C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x150C6090: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150C6094: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150C6098: sb          $t9, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r25;
    // 0x150C609C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x150C60A0: jal         0x1513418C
    // 0x150C60A4: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    func_1513418C(rdram, ctx);
        goto after_1;
    // 0x150C60A4: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x150C60A8: beq         $v0, $zero, L_150C60C0
    if (ctx->r2 == 0) {
        // 0x150C60AC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_150C60C0;
    }
    // 0x150C60AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150C60B0: addiu       $a0, $v0, 0x58
    ctx->r4 = ADD32(ctx->r2, 0X58);
    // 0x150C60B4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x150C60B8: jal         0x10022EC0
    // 0x150C60BC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x150C60BC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_150C60C0:
    // 0x150C60C0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150C60C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150C60C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150C60CC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x150C60D0: jr          $ra
    // 0x150C60D4: nop

    return;
    return;
    // 0x150C60D4: nop

;}
RECOMP_FUNC void func_1511575C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511575C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x15115760: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x15115764: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15115768: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1511576C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x15115770: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x15115774: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x15115778: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1511577C: sll         $t7, $v0, 24
    ctx->r15 = S32(ctx->r2 << 24);
    // 0x15115780: sra         $t8, $t7, 24
    ctx->r24 = S32(SIGNED(ctx->r15) >> 24);
    // 0x15115784: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x15115788: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x1511578C: sb          $t6, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r14;
    // 0x15115790: sh          $t9, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r25;
    // 0x15115794: lw          $v1, 0x84($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X84);
    // 0x15115798: sra         $a1, $v0, 24
    ctx->r5 = S32(SIGNED(ctx->r2) >> 24);
    // 0x1511579C: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x151157A0: sh          $v1, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r3;
    // 0x151157A4: lh          $t0, 0x10($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X10);
    // 0x151157A8: sra         $t8, $t6, 24
    ctx->r24 = S32(SIGNED(ctx->r14) >> 24);
    // 0x151157AC: sll         $t9, $t8, 22
    ctx->r25 = S32(ctx->r24 << 22);
    // 0x151157B0: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x151157B4: lh          $t1, 0x12($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X12);
    // 0x151157B8: sra         $a2, $v0, 8
    ctx->r6 = S32(SIGNED(ctx->r2) >> 8);
    // 0x151157BC: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x151157C0: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    // 0x151157C4: lh          $t2, 0x14($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X14);
    // 0x151157C8: sll         $t7, $a2, 24
    ctx->r15 = S32(ctx->r6 << 24);
    // 0x151157CC: sra         $t9, $t7, 24
    ctx->r25 = S32(SIGNED(ctx->r15) >> 24);
    // 0x151157D0: sll         $t6, $t9, 22
    ctx->r14 = S32(ctx->r25 << 22);
    // 0x151157D4: sw          $t2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r10;
    // 0x151157D8: lbu         $t9, 0x4F($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X4F);
    // 0x151157DC: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151157E0: sra         $s1, $v1, 16
    ctx->r17 = S32(SIGNED(ctx->r3) >> 16);
    // 0x151157E4: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x151157E8: andi        $t6, $t9, 0x4
    ctx->r14 = ctx->r25 & 0X4;
    // 0x151157EC: bne         $t6, $at, L_151157F8
    if (ctx->r14 != ctx->r1) {
        // 0x151157F0: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_151157F8;
    }
    // 0x151157F0: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x151157F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_151157F8:
    // 0x151157F8: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x151157FC: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x15115800: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x15115804: bne         $v1, $zero, L_15115818
    if (ctx->r3 != 0) {
        // 0x15115808: andi        $t6, $t2, 0xFFFF
        ctx->r14 = ctx->r10 & 0XFFFF;
            goto L_15115818;
    }
    // 0x15115808: andi        $t6, $t2, 0xFFFF
    ctx->r14 = ctx->r10 & 0XFFFF;
    // 0x1511580C: or          $v1, $t7, $t8
    ctx->r3 = ctx->r15 | ctx->r24;
    // 0x15115810: sw          $v1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r3;
    // 0x15115814: sw          $t6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r14;
L_15115818:
    // 0x15115818: sll         $ra, $v1, 16
    ctx->r31 = S32(ctx->r3 << 16);
    // 0x1511581C: sra         $t9, $ra, 16
    ctx->r25 = S32(SIGNED(ctx->r31) >> 16);
    // 0x15115820: or          $ra, $t9, $zero
    ctx->r31 = ctx->r25 | 0;
    // 0x15115824: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
    // 0x15115828: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x1511582C: sll         $t7, $t4, 16
    ctx->r15 = S32(ctx->r12 << 16);
    // 0x15115830: sra         $t5, $t9, 16
    ctx->r13 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15115834: sll         $t6, $t5, 24
    ctx->r14 = S32(ctx->r13 << 24);
    // 0x15115838: sra         $t4, $t7, 16
    ctx->r12 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1511583C: sra         $t5, $t6, 24
    ctx->r13 = S32(SIGNED(ctx->r14) >> 24);
    // 0x15115840: sra         $t3, $t9, 24
    ctx->r11 = S32(SIGNED(ctx->r25) >> 24);
    // 0x15115844: andi        $t8, $t3, 0xFF
    ctx->r24 = ctx->r11 & 0XFF;
    // 0x15115848: addu        $t7, $v1, $a1
    ctx->r15 = ADD32(ctx->r3, ctx->r5);
    // 0x1511584C: addu        $t6, $t9, $a2
    ctx->r14 = ADD32(ctx->r25, ctx->r6);
    // 0x15115850: or          $t3, $t8, $zero
    ctx->r11 = ctx->r24 | 0;
    // 0x15115854: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x15115858: sh          $t6, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r14;
    // 0x1511585C: bne         $t5, $zero, L_15115AE4
    if (ctx->r13 != 0) {
        // 0x15115860: sh          $t9, 0x76($sp)
        MEM_H(0X76, ctx->r29) = ctx->r25;
            goto L_15115AE4;
    }
    // 0x15115860: sh          $t9, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r25;
    // 0x15115864: bne         $t4, $t0, L_1511588C
    if (ctx->r12 != ctx->r8) {
        // 0x15115868: lbu         $t8, 0x97($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X97);
            goto L_1511588C;
    }
    // 0x15115868: lbu         $t8, 0x97($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X97);
    // 0x1511586C: bne         $ra, $t1, L_1511588C
    if (ctx->r31 != ctx->r9) {
        // 0x15115870: lh          $t7, 0x76($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X76);
            goto L_1511588C;
    }
    // 0x15115870: lh          $t7, 0x76($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X76);
    // 0x15115874: bnel        $t7, $t2, L_15115890
    if (ctx->r15 != ctx->r10) {
        // 0x15115878: mtc1        $t8, $f6
        ctx->f6.u32l = ctx->r24;
            goto L_15115890;
    }
    goto skip_0;
    // 0x15115878: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    skip_0:
    // 0x1511587C: beql        $a3, $zero, L_15115AE8
    if (ctx->r7 == 0) {
        // 0x15115880: lhu         $v0, 0x62($sp)
        ctx->r2 = MEM_HU(ctx->r29, 0X62);
            goto L_15115AE8;
    }
    goto skip_1;
    // 0x15115880: lhu         $v0, 0x62($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X62);
    skip_1:
    // 0x15115884: b           L_15115AE4
    // 0x15115888: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
        goto L_15115AE4;
    // 0x15115888: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
L_1511588C:
    // 0x1511588C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
L_15115890:
    // 0x15115890: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x15115894: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15115898: bgez        $t8, L_151158B0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1511589C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_151158B0;
    }
    // 0x1511589C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151158A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151158A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151158A8: nop

    // 0x151158AC: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_151158B0:
    // 0x151158B0: div.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x151158B4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151158B8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151158BC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x151158C0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x151158C4: nop

    // 0x151158C8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x151158CC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x151158D0: nop

    // 0x151158D4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x151158D8: beql        $t6, $zero, L_15115928
    if (ctx->r14 == 0) {
        // 0x151158DC: mfc1        $t6, $f18
        ctx->r14 = (int32_t)ctx->f18.u32l;
            goto L_15115928;
    }
    goto skip_2;
    // 0x151158DC: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    skip_2:
    // 0x151158E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151158E4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151158E8: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151158EC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x151158F0: nop

    // 0x151158F4: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x151158F8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x151158FC: nop

    // 0x15115900: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x15115904: bne         $t6, $zero, L_1511591C
    if (ctx->r14 != 0) {
        // 0x15115908: nop
    
            goto L_1511591C;
    }
    // 0x15115908: nop

    // 0x1511590C: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x15115910: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15115914: b           L_15115934
    // 0x15115918: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_15115934;
    // 0x15115918: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_1511591C:
    // 0x1511591C: b           L_15115934
    // 0x15115920: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_15115934;
    // 0x15115920: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x15115924: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
L_15115928:
    // 0x15115928: nop

    // 0x1511592C: bltz        $t6, L_1511591C
    if (SIGNED(ctx->r14) < 0) {
        // 0x15115930: nop
    
            goto L_1511591C;
    }
    // 0x15115930: nop

L_15115934:
    // 0x15115934: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x15115938: subu        $t3, $t3, $t7
    ctx->r11 = SUB32(ctx->r11, ctx->r15);
    // 0x1511593C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x15115940: bgtz        $t3, L_151159C4
    if (SIGNED(ctx->r11) > 0) {
        // 0x15115944: lhu         $t9, 0x62($sp)
        ctx->r25 = MEM_HU(ctx->r29, 0X62);
            goto L_151159C4;
    }
    // 0x15115944: lhu         $t9, 0x62($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X62);
    // 0x15115948: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x1511594C: beq         $s1, $zero, L_15115A2C
    if (ctx->r17 == 0) {
        // 0x15115950: addiu       $t5, $zero, -0x64
        ctx->r13 = ADD32(0, -0X64);
            goto L_15115A2C;
    }
    // 0x15115950: addiu       $t5, $zero, -0x64
    ctx->r13 = ADD32(0, -0X64);
    // 0x15115954: sh          $ra, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r31;
    // 0x15115958: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x1511595C: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x15115960: sh          $t4, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r12;
    // 0x15115964: jal         0x100111C8
    // 0x15115968: sh          $t5, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r13;
    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x15115968: sh          $t5, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r13;
    after_0:
    // 0x1511596C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15115970: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x15115974: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x15115978: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1511597C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15115980: lh          $t9, 0x12($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X12);
    // 0x15115984: addiu       $t8, $zero, 0x3E8
    ctx->r24 = ADD32(0, 0X3E8);
    // 0x15115988: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x1511598C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15115990: lh          $t6, 0x14($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X14);
    // 0x15115994: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x15115998: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1511599C: addiu       $a1, $zero, 0x5000
    ctx->r5 = ADD32(0, 0X5000);
    // 0x151159A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151159A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151159A8: jal         0x10010F88
    // 0x151159AC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_10010F88(rdram, ctx);
        goto after_1;
    // 0x151159AC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_1:
    // 0x151159B0: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x151159B4: lh          $t4, 0x7A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X7A);
    // 0x151159B8: lh          $t5, 0x72($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X72);
    // 0x151159BC: b           L_15115A2C
    // 0x151159C0: lh          $ra, 0x78($sp)
    ctx->r31 = MEM_H(ctx->r29, 0X78);
        goto L_15115A2C;
    // 0x151159C0: lh          $ra, 0x78($sp)
    ctx->r31 = MEM_H(ctx->r29, 0X78);
L_151159C4:
    // 0x151159C4: beql        $t9, $zero, L_15115A30
    if (ctx->r25 == 0) {
        // 0x151159C8: mtc1        $t3, $f6
        ctx->f6.u32l = ctx->r11;
            goto L_15115A30;
    }
    goto skip_3;
    // 0x151159C8: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    skip_3:
    // 0x151159CC: bne         $s1, $zero, L_15115A2C
    if (ctx->r17 != 0) {
        // 0x151159D0: andi        $a0, $s1, 0xFFFF
        ctx->r4 = ctx->r17 & 0XFFFF;
            goto L_15115A2C;
    }
    // 0x151159D0: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x151159D4: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x151159D8: addiu       $t7, $zero, 0x3E8
    ctx->r15 = ADD32(0, 0X3E8);
    // 0x151159DC: sh          $ra, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r31;
    // 0x151159E0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x151159E4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x151159E8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x151159EC: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    // 0x151159F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151159F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151159F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151159FC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15115A00: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x15115A04: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x15115A08: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x15115A0C: sh          $t4, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r12;
    // 0x15115A10: jal         0x10010E78
    // 0x15115A14: sh          $t5, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r13;
    func_10010E78(rdram, ctx);
        goto after_2;
    // 0x15115A14: sh          $t5, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r13;
    after_2:
    // 0x15115A18: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x15115A1C: lh          $t4, 0x7A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X7A);
    // 0x15115A20: lh          $t5, 0x72($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X72);
    // 0x15115A24: lh          $ra, 0x78($sp)
    ctx->r31 = MEM_H(ctx->r29, 0X78);
    // 0x15115A28: andi        $s1, $v0, 0xFFFF
    ctx->r17 = ctx->r2 & 0XFFFF;
L_15115A2C:
    // 0x15115A2C: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
L_15115A30:
    // 0x15115A30: lh          $t8, 0x94($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X94);
    // 0x15115A34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15115A38: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15115A3C: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x15115A40: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x15115A44: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15115A48: lwc1        $f4, 0x2F98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2F98);
    // 0x15115A4C: subu        $t8, $t7, $t4
    ctx->r24 = SUB32(ctx->r15, ctx->r12);
    // 0x15115A50: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15115A54: mul.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15115A58: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x15115A5C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15115A60: mtc1        $ra, $f18
    ctx->f18.u32l = ctx->r31;
    // 0x15115A64: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15115A68: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15115A6C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15115A70: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x15115A74: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15115A78: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x15115A7C: nop

    // 0x15115A80: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x15115A84: lh          $t7, 0x8A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X8A);
    // 0x15115A88: subu        $t8, $t7, $ra
    ctx->r24 = SUB32(ctx->r15, ctx->r31);
    // 0x15115A8C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x15115A90: nop

    // 0x15115A94: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15115A98: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15115A9C: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15115AA0: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15115AA4: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x15115AA8: nop

    // 0x15115AAC: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x15115AB0: lh          $t8, 0x76($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X76);
    // 0x15115AB4: lh          $t7, 0x88($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X88);
    // 0x15115AB8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15115ABC: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x15115AC0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x15115AC4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15115AC8: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15115ACC: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15115AD0: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15115AD4: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15115AD8: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x15115ADC: nop

    // 0x15115AE0: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
L_15115AE4:
    // 0x15115AE4: lhu         $v0, 0x62($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X62);
L_15115AE8:
    // 0x15115AE8: blez        $t5, L_15115D84
    if (SIGNED(ctx->r13) <= 0) {
        // 0x15115AEC: sw          $v0, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r2;
            goto L_15115D84;
    }
    // 0x15115AEC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x15115AF0: lh          $t9, 0x8A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X8A);
    // 0x15115AF4: lh          $t6, 0x76($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X76);
    // 0x15115AF8: lh          $t7, 0x88($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X88);
    // 0x15115AFC: subu        $t8, $t9, $ra
    ctx->r24 = SUB32(ctx->r25, ctx->r31);
    // 0x15115B00: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15115B04: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x15115B08: mtc1        $ra, $f8
    ctx->f8.u32l = ctx->r31;
    // 0x15115B0C: lh          $t8, 0x94($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X94);
    // 0x15115B10: subu        $t9, $t7, $t6
    ctx->r25 = SUB32(ctx->r15, ctx->r14);
    // 0x15115B14: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15115B18: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15115B1C: addu        $t7, $t4, $t8
    ctx->r15 = ADD32(ctx->r12, ctx->r24);
    // 0x15115B20: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x15115B24: addiu       $t5, $t5, -0x1
    ctx->r13 = ADD32(ctx->r13, -0X1);
    // 0x15115B28: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15115B2C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x15115B30: sra         $t9, $t6, 16
    ctx->r25 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15115B34: subu        $t8, $t9, $t4
    ctx->r24 = SUB32(ctx->r25, ctx->r12);
    // 0x15115B38: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x15115B3C: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15115B40: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15115B44: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x15115B48: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x15115B4C: slti        $at, $t3, 0xFF
    ctx->r1 = SIGNED(ctx->r11) < 0XFF ? 1 : 0;
    // 0x15115B50: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15115B54: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x15115B58: sra         $t9, $t6, 16
    ctx->r25 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15115B5C: lbu         $t7, 0x97($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X97);
    // 0x15115B60: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x15115B64: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15115B68: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x15115B6C: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15115B70: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x15115B74: beq         $at, $zero, L_15115CA8
    if (ctx->r1 == 0) {
        // 0x15115B78: swc1        $f16, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
            goto L_15115CA8;
    }
    // 0x15115B78: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x15115B7C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15115B80: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x15115B84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15115B88: bgez        $t7, L_15115BA0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x15115B8C: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15115BA0;
    }
    // 0x15115B8C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15115B90: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15115B94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15115B98: nop

    // 0x15115B9C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_15115BA0:
    // 0x15115BA0: div.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x15115BA4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15115BA8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15115BAC: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x15115BB0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x15115BB4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x15115BB8: nop

    // 0x15115BBC: cvt.w.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_S(ctx->f18.fl);
    // 0x15115BC0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x15115BC4: nop

    // 0x15115BC8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x15115BCC: beql        $t9, $zero, L_15115C1C
    if (ctx->r25 == 0) {
        // 0x15115BD0: mfc1        $t9, $f16
        ctx->r25 = (int32_t)ctx->f16.u32l;
            goto L_15115C1C;
    }
    goto skip_4;
    // 0x15115BD0: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    skip_4:
    // 0x15115BD4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15115BD8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15115BDC: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x15115BE0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x15115BE4: nop

    // 0x15115BE8: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x15115BEC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x15115BF0: nop

    // 0x15115BF4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x15115BF8: bne         $t9, $zero, L_15115C10
    if (ctx->r25 != 0) {
        // 0x15115BFC: nop
    
            goto L_15115C10;
    }
    // 0x15115BFC: nop

    // 0x15115C00: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x15115C04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15115C08: b           L_15115C28
    // 0x15115C0C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_15115C28;
    // 0x15115C0C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_15115C10:
    // 0x15115C10: b           L_15115C28
    // 0x15115C14: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_15115C28;
    // 0x15115C14: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x15115C18: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
L_15115C1C:
    // 0x15115C1C: nop

    // 0x15115C20: bltz        $t9, L_15115C10
    if (SIGNED(ctx->r25) < 0) {
        // 0x15115C24: nop
    
            goto L_15115C10;
    }
    // 0x15115C24: nop

L_15115C28:
    // 0x15115C28: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x15115C2C: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x15115C30: beq         $v0, $zero, L_15115C94
    if (ctx->r2 == 0) {
        // 0x15115C34: addu        $t3, $t3, $t8
        ctx->r11 = ADD32(ctx->r11, ctx->r24);
            goto L_15115C94;
    }
    // 0x15115C34: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x15115C38: bne         $s1, $zero, L_15115C94
    if (ctx->r17 != 0) {
        // 0x15115C3C: andi        $a0, $s1, 0xFFFF
        ctx->r4 = ctx->r17 & 0XFFFF;
            goto L_15115C94;
    }
    // 0x15115C3C: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x15115C40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15115C44: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15115C48: lh          $t7, 0x10($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X10);
    // 0x15115C4C: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x15115C50: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x15115C54: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15115C58: lh          $t6, 0x12($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X12);
    // 0x15115C5C: addiu       $t7, $zero, 0x3E8
    ctx->r15 = ADD32(0, 0X3E8);
    // 0x15115C60: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    // 0x15115C64: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x15115C68: lh          $t9, 0x14($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X14);
    // 0x15115C6C: sh          $t5, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r13;
    // 0x15115C70: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x15115C74: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x15115C78: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x15115C7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15115C80: jal         0x10010E78
    // 0x15115C84: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_10010E78(rdram, ctx);
        goto after_3;
    // 0x15115C84: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_3:
    // 0x15115C88: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x15115C8C: lh          $t5, 0x72($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X72);
    // 0x15115C90: andi        $s1, $v0, 0xFFFF
    ctx->r17 = ctx->r2 & 0XFFFF;
L_15115C94:
    // 0x15115C94: slti        $at, $t3, 0x100
    ctx->r1 = SIGNED(ctx->r11) < 0X100 ? 1 : 0;
    // 0x15115C98: bnel        $at, $zero, L_15115D10
    if (ctx->r1 != 0) {
        // 0x15115C9C: mtc1        $t3, $f4
        ctx->f4.u32l = ctx->r11;
            goto L_15115D10;
    }
    goto skip_5;
    // 0x15115C9C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    skip_5:
    // 0x15115CA0: b           L_15115D0C
    // 0x15115CA4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
        goto L_15115D0C;
    // 0x15115CA4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
L_15115CA8:
    // 0x15115CA8: beq         $s1, $zero, L_15115D0C
    if (ctx->r17 == 0) {
        // 0x15115CAC: addiu       $t3, $zero, 0xFF
        ctx->r11 = ADD32(0, 0XFF);
            goto L_15115D0C;
    }
    // 0x15115CAC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15115CB0: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x15115CB4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15115CB8: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x15115CBC: jal         0x100111C8
    // 0x15115CC0: sh          $t9, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r25;
    func_100111C8(rdram, ctx);
        goto after_4;
    // 0x15115CC0: sh          $t9, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r25;
    after_4:
    // 0x15115CC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15115CC8: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x15115CCC: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x15115CD0: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x15115CD4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15115CD8: lh          $t7, 0x12($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X12);
    // 0x15115CDC: addiu       $t8, $zero, 0x3E8
    ctx->r24 = ADD32(0, 0X3E8);
    // 0x15115CE0: addiu       $a1, $zero, 0x5000
    ctx->r5 = ADD32(0, 0X5000);
    // 0x15115CE4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15115CE8: lh          $t6, 0x14($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X14);
    // 0x15115CEC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x15115CF0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x15115CF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15115CF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15115CFC: jal         0x10010F88
    // 0x15115D00: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_10010F88(rdram, ctx);
        goto after_5;
    // 0x15115D00: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_5:
    // 0x15115D04: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x15115D08: lh          $t5, 0x72($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X72);
L_15115D0C:
    // 0x15115D0C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
L_15115D10:
    // 0x15115D10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15115D14: lwc1        $f10, 0x2F9C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2F9C);
    // 0x15115D18: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15115D1C: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15115D20: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15115D24: mul.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15115D28: nop

    // 0x15115D2C: mul.s       $f16, $f18, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15115D30: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x15115D34: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15115D38: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x15115D3C: nop

    // 0x15115D40: sh          $t6, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r14;
    // 0x15115D44: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15115D48: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15115D4C: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15115D50: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15115D54: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15115D58: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x15115D5C: nop

    // 0x15115D60: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x15115D64: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15115D68: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x15115D6C: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15115D70: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15115D74: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15115D78: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x15115D7C: nop

    // 0x15115D80: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
L_15115D84:
    // 0x15115D84: lh          $t0, 0x10($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X10);
    // 0x15115D88: lh          $t1, 0x12($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X12);
    // 0x15115D8C: lh          $t2, 0x14($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X14);
    // 0x15115D90: bgez        $t5, L_15115DA4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x15115D94: lw          $v0, 0x80($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X80);
            goto L_15115DA4;
    }
    // 0x15115D94: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x15115D98: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x15115D9C: sll         $t9, $t5, 16
    ctx->r25 = S32(ctx->r13 << 16);
    // 0x15115DA0: sra         $t5, $t9, 16
    ctx->r13 = S32(SIGNED(ctx->r25) >> 16);
L_15115DA4:
    // 0x15115DA4: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x15115DA8: andi        $t9, $t5, 0xFF
    ctx->r25 = ctx->r13 & 0XFF;
    // 0x15115DAC: sw          $t7, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r15;
    // 0x15115DB0: sll         $t8, $t9, 16
    ctx->r24 = S32(ctx->r25 << 16);
    // 0x15115DB4: or          $t7, $t7, $t8
    ctx->r15 = ctx->r15 | ctx->r24;
    // 0x15115DB8: sll         $t6, $t3, 24
    ctx->r14 = S32(ctx->r11 << 24);
    // 0x15115DBC: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x15115DC0: sw          $t8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r24;
    // 0x15115DC4: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x15115DC8: subu        $t7, $t0, $t9
    ctx->r15 = SUB32(ctx->r8, ctx->r25);
    // 0x15115DCC: sh          $t7, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r15;
    // 0x15115DD0: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x15115DD4: subu        $t8, $t1, $t6
    ctx->r24 = SUB32(ctx->r9, ctx->r14);
    // 0x15115DD8: sh          $t8, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r24;
    // 0x15115DDC: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x15115DE0: sll         $t6, $s1, 16
    ctx->r14 = S32(ctx->r17 << 16);
    // 0x15115DE4: subu        $t7, $t2, $t9
    ctx->r15 = SUB32(ctx->r10, ctx->r25);
    // 0x15115DE8: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x15115DEC: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x15115DF0: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x15115DF4: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
    // 0x15115DF8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15115DFC: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x15115E00: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x15115E04: jr          $ra
    // 0x15115E08: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x15115E08: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_150C0A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C0A1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C0A20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C0A24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150C0A28: jal         0x150C0A48
    // 0x150C0A2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150C0A48(rdram, ctx);
        goto after_0;
    // 0x150C0A2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150C0A30: jal         0x15169824
    // 0x150C0A34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_1;
    // 0x150C0A34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150C0A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C0A3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C0A40: jr          $ra
    // 0x150C0A44: nop

    return;
    return;
    // 0x150C0A44: nop

;}
RECOMP_FUNC void func_151D5B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D5B6C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x151D5B70: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x151D5B74: sll         $s3, $a3, 24
    ctx->r19 = S32(ctx->r7 << 24);
    // 0x151D5B78: sra         $t6, $s3, 24
    ctx->r14 = S32(SIGNED(ctx->r19) >> 24);
    // 0x151D5B7C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x151D5B80: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x151D5B84: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x151D5B88: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x151D5B8C: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x151D5B90: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x151D5B94: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x151D5B98: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151D5B9C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x151D5BA0: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x151D5BA4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x151D5BA8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x151D5BAC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151D5BB0: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x151D5BB4: lui         $fp, 0x800D
    ctx->r30 = S32(0X800D << 16);
    // 0x151D5BB8: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x151D5BBC: addiu       $fp, $fp, -0x3D30
    ctx->r30 = ADD32(ctx->r30, -0X3D30);
    // 0x151D5BC0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151D5BC4: lw          $s5, 0xA8($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA8);
L_151D5BC8:
    // 0x151D5BC8: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x151D5BCC: subu        $t7, $t7, $s1
    ctx->r15 = SUB32(ctx->r15, ctx->r17);
    // 0x151D5BD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151D5BD4: addu        $t7, $t7, $s1
    ctx->r15 = ADD32(ctx->r15, ctx->r17);
    // 0x151D5BD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151D5BDC: subu        $t7, $t7, $s1
    ctx->r15 = SUB32(ctx->r15, ctx->r17);
    // 0x151D5BE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151D5BE4: subu        $t7, $t7, $s1
    ctx->r15 = SUB32(ctx->r15, ctx->r17);
    // 0x151D5BE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151D5BEC: addu        $s0, $fp, $t7
    ctx->r16 = ADD32(ctx->r30, ctx->r15);
    // 0x151D5BF0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x151D5BF4: beql        $t8, $zero, L_151D5D1C
    if (ctx->r24 == 0) {
        // 0x151D5BF8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_151D5D1C;
    }
    goto skip_0;
    // 0x151D5BF8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x151D5BFC: lbu         $t9, 0x5($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X5);
    // 0x151D5C00: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151D5C04: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151D5C08: beql        $t9, $at, L_151D5D1C
    if (ctx->r25 == ctx->r1) {
        // 0x151D5C0C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_151D5D1C;
    }
    goto skip_1;
    // 0x151D5C0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x151D5C10: lw          $t0, -0x1610($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1610);
    // 0x151D5C14: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x151D5C18: beq         $t0, $at, L_151D5C30
    if (ctx->r8 == ctx->r1) {
        // 0x151D5C1C: nop
    
            goto L_151D5C30;
    }
    // 0x151D5C1C: nop

    // 0x151D5C20: lbu         $t1, 0x4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X4);
    // 0x151D5C24: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151D5C28: beql        $t1, $at, L_151D5D1C
    if (ctx->r9 == ctx->r1) {
        // 0x151D5C2C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_151D5D1C;
    }
    goto skip_2;
    // 0x151D5C2C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
L_151D5C30:
    // 0x151D5C30: beql        $s0, $s2, L_151D5D1C
    if (ctx->r16 == ctx->r18) {
        // 0x151D5C34: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_151D5D1C;
    }
    goto skip_3;
    // 0x151D5C34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x151D5C38: lw          $t2, 0xF8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XF8);
    // 0x151D5C3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151D5C40: andi        $t3, $t2, 0x40
    ctx->r11 = ctx->r10 & 0X40;
    // 0x151D5C44: beql        $t3, $zero, L_151D5D1C
    if (ctx->r11 == 0) {
        // 0x151D5C48: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_151D5D1C;
    }
    goto skip_4;
    // 0x151D5C48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x151D5C4C: beq         $s3, $at, L_151D5C78
    if (ctx->r19 == ctx->r1) {
        // 0x151D5C50: sll         $t4, $s3, 2
        ctx->r12 = S32(ctx->r19 << 2);
            goto L_151D5C78;
    }
    // 0x151D5C50: sll         $t4, $s3, 2
    ctx->r12 = S32(ctx->r19 << 2);
    // 0x151D5C54: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x151D5C58: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x151D5C5C: lw          $t9, 0x6C90($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6C90);
    // 0x151D5C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D5C64: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151D5C68: jalr        $t9
    // 0x151D5C6C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151D5C6C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_0:
    // 0x151D5C70: beql        $v0, $zero, L_151D5D1C
    if (ctx->r2 == 0) {
        // 0x151D5C74: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_151D5D1C;
    }
    goto skip_5;
    // 0x151D5C74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
L_151D5C78:
    // 0x151D5C78: lh          $v0, 0xD2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XD2);
    // 0x151D5C7C: lh          $v1, 0xD4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XD4);
    // 0x151D5C80: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151D5C84: beql        $at, $zero, L_151D5C9C
    if (ctx->r1 == 0) {
        // 0x151D5C88: mtc1        $v0, $f6
        ctx->f6.u32l = ctx->r2;
            goto L_151D5C9C;
    }
    goto skip_6;
    // 0x151D5C88: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    skip_6:
    // 0x151D5C8C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x151D5C90: b           L_151D5CA4
    // 0x151D5C94: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
        goto L_151D5CA4;
    // 0x151D5C94: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151D5C98: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
L_151D5C9C:
    // 0x151D5C9C: nop

    // 0x151D5CA0: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
L_151D5CA4:
    // 0x151D5CA4: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151D5CA8: addiu       $t6, $sp, 0x74
    ctx->r14 = ADD32(ctx->r29, 0X74);
    // 0x151D5CAC: addiu       $t7, $sp, 0x68
    ctx->r15 = ADD32(ctx->r29, 0X68);
    // 0x151D5CB0: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x151D5CB4: lh          $t5, 0xD6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XD6);
    // 0x151D5CB8: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151D5CBC: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x151D5CC0: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x151D5CC4: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x151D5CC8: addiu       $t0, $sp, 0x60
    ctx->r8 = ADD32(ctx->r29, 0X60);
    // 0x151D5CCC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151D5CD0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x151D5CD4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x151D5CD8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151D5CDC: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x151D5CE0: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x151D5CE4: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x151D5CE8: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151D5CEC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151D5CF0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151D5CF4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151D5CF8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151D5CFC: jal         0x151452C4
    // 0x151D5D00: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    func_151452C4(rdram, ctx);
        goto after_1;
    // 0x151D5D00: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x151D5D04: beq         $v0, $zero, L_151D5D18
    if (ctx->r2 == 0) {
        // 0x151D5D08: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_151D5D18;
    }
    // 0x151D5D08: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151D5D0C: sllv        $t2, $t1, $s1
    ctx->r10 = S32(ctx->r9 << (ctx->r17 & 31));
    // 0x151D5D10: nor         $t3, $t2, $zero
    ctx->r11 = ~(ctx->r10 | 0);
    // 0x151D5D14: and         $s4, $s4, $t3
    ctx->r20 = ctx->r20 & ctx->r11;
L_151D5D18:
    // 0x151D5D18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_151D5D1C:
    // 0x151D5D1C: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x151D5D20: slti        $at, $t4, 0x19
    ctx->r1 = SIGNED(ctx->r12) < 0X19 ? 1 : 0;
    // 0x151D5D24: bne         $at, $zero, L_151D5BC8
    if (ctx->r1 != 0) {
        // 0x151D5D28: or          $s1, $t4, $zero
        ctx->r17 = ctx->r12 | 0;
            goto L_151D5BC8;
    }
    // 0x151D5D28: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x151D5D2C: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x151D5D30: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x151D5D34: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151D5D38: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x151D5D3C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x151D5D40: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x151D5D44: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x151D5D48: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x151D5D4C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x151D5D50: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x151D5D54: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x151D5D58: jr          $ra
    // 0x151D5D5C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x151D5D5C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_1506D2E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506D2E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1506D2EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506D2F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1506D2F4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506D2F8: lw          $t6, 0x1580($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1580);
    // 0x1506D2FC: jal         0x15083E0C
    // 0x1506D300: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    func_15083E0C(rdram, ctx);
        goto after_0;
    // 0x1506D300: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    after_0:
    // 0x1506D304: jal         0x1505EEF4
    // 0x1506D308: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_1505EEF4(rdram, ctx);
        goto after_1;
    // 0x1506D308: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x1506D30C: beq         $v0, $zero, L_1506D4D8
    if (ctx->r2 == 0) {
        // 0x1506D310: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_1506D4D8;
    }
    // 0x1506D310: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1506D314: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506D318: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1506D31C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1506D320: jal         0x151A3390
    // 0x1506D324: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_151A3390(rdram, ctx);
        goto after_2;
    // 0x1506D324: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x1506D328: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506D32C: lw          $t7, 0x1580($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1580);
    // 0x1506D330: lui         $a1, 0x459C
    ctx->r5 = S32(0X459C << 16);
    // 0x1506D334: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1506D338: andi        $t8, $t7, 0xFF00
    ctx->r24 = ctx->r15 & 0XFF00;
    // 0x1506D33C: beq         $t8, $zero, L_1506D364
    if (ctx->r24 == 0) {
        // 0x1506D340: ori         $a1, $a1, 0x4000
        ctx->r5 = ctx->r5 | 0X4000;
            goto L_1506D364;
    }
    // 0x1506D340: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x1506D344: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506D348: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x1506D34C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1506D350: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1506D354: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506D358: lw          $t0, 0x318($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X318);
    // 0x1506D35C: lwc1        $f4, 0x780($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X780);
    // 0x1506D360: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
L_1506D364:
    // 0x1506D364: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506D368: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x1506D36C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x1506D370: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1506D374: addiu       $t2, $sp, 0x3C
    ctx->r10 = ADD32(ctx->r29, 0X3C);
    // 0x1506D378: lhu         $v0, 0x7A($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X7A);
    // 0x1506D37C: addiu       $t3, $sp, 0x38
    ctx->r11 = ADD32(ctx->r29, 0X38);
    // 0x1506D380: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x1506D384: sh          $v0, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r2;
    // 0x1506D388: sh          $v0, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r2;
    // 0x1506D38C: sh          $v0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r2;
    // 0x1506D390: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1506D394: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1506D398: jal         0x1505A184
    // 0x1506D39C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    func_1505A184(rdram, ctx);
        goto after_3;
    // 0x1506D39C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_3:
    // 0x1506D3A0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506D3A4: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x1506D3A8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x1506D3AC: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1506D3B0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506D3B4: lwc1        $f8, 0x14($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X14);
    // 0x1506D3B8: lbu         $t8, 0x13F($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X13F);
    // 0x1506D3BC: addiu       $v0, $v0, 0x2104
    ctx->r2 = ADD32(ctx->r2, 0X2104);
    // 0x1506D3C0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1506D3C4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1506D3C8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1506D3CC: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1506D3D0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1506D3D4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x1506D3D8: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1506D3DC: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x1506D3E0: nop

    // 0x1506D3E4: sh          $t6, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r14;
    // 0x1506D3E8: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x1506D3EC: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1506D3F0: lbu         $t8, 0x13F($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X13F);
    // 0x1506D3F4: lwc1        $f4, 0x1C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x1506D3F8: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x1506D3FC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x1506D400: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1506D404: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x1506D408: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1506D40C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1506D410: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x1506D414: nop

    // 0x1506D418: sh          $t4, 0xC($t0)
    MEM_H(0XC, ctx->r8) = ctx->r12;
    // 0x1506D41C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1506D420: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1506D424: lbu         $t8, 0x13F($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X13F);
    // 0x1506D428: lwc1        $f16, 0x18($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X18);
    // 0x1506D42C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x1506D430: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x1506D434: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1506D438: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x1506D43C: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x1506D440: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1506D444: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1506D448: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x1506D44C: nop

    // 0x1506D450: sh          $t2, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r10;
    // 0x1506D454: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x1506D458: sw          $zero, 0x218($s0)
    MEM_W(0X218, ctx->r16) = 0;
    // 0x1506D45C: lw          $t4, 0x1580($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1580);
    // 0x1506D460: andi        $t0, $t4, 0xFF00
    ctx->r8 = ctx->r12 & 0XFF00;
    // 0x1506D464: beql        $t0, $zero, L_1506D4A0
    if (ctx->r8 == 0) {
        // 0x1506D468: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_1506D4A0;
    }
    goto skip_0;
    // 0x1506D468: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_0:
    // 0x1506D46C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1506D470: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1506D474: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x1506D478: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506D47C: lwc1        $f8, 0x18($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X18);
    // 0x1506D480: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x1506D484: sb          $t1, 0x232($s0)
    MEM_B(0X232, ctx->r16) = ctx->r9;
    // 0x1506D488: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1506D48C: swc1        $f0, 0x14C($s0)
    MEM_W(0X14C, ctx->r16) = ctx->f0.u32l;
    // 0x1506D490: swc1        $f0, 0x150($s0)
    MEM_W(0X150, ctx->r16) = ctx->f0.u32l;
    // 0x1506D494: b           L_1506D4D8
    // 0x1506D498: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
        goto L_1506D4D8;
    // 0x1506D498: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
    // 0x1506D49C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_1506D4A0:
    // 0x1506D4A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1506D4A4: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x1506D4A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1506D4AC: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x1506D4B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506D4B4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x1506D4B8: sb          $t8, 0x232($s0)
    MEM_B(0X232, ctx->r16) = ctx->r24;
    // 0x1506D4BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506D4C0: swc1        $f18, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f18.u32l;
    // 0x1506D4C4: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x1506D4C8: lwc1        $f6, -0x62BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X62BC);
    // 0x1506D4CC: swc1        $f0, 0x14C($s0)
    MEM_W(0X14C, ctx->r16) = ctx->f0.u32l;
    // 0x1506D4D0: swc1        $f0, 0x150($s0)
    MEM_W(0X150, ctx->r16) = ctx->f0.u32l;
    // 0x1506D4D4: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
L_1506D4D8:
    // 0x1506D4D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1506D4DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1506D4E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1506D4E4: jr          $ra
    // 0x1506D4E8: nop

    return;
    return;
    // 0x1506D4E8: nop

    // 0x1506D4EC: jr          $ra
    // 0x1506D4F0: nop

    return;
    return;
    // 0x1506D4F0: nop

;}
RECOMP_FUNC void func_150333A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150333A8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150333AC: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x150333B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150333B4: bnel        $t6, $at, L_150333C8
    if (ctx->r14 != ctx->r1) {
        // 0x150333B8: lbu         $t7, 0xAD($a1)
        ctx->r15 = MEM_BU(ctx->r5, 0XAD);
            goto L_150333C8;
    }
    goto skip_0;
    // 0x150333B8: lbu         $t7, 0xAD($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0XAD);
    skip_0:
    // 0x150333BC: jr          $ra
    // 0x150333C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150333C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150333C4: lbu         $t7, 0xAD($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0XAD);
L_150333C8:
    // 0x150333C8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150333CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150333D0: beql        $t7, $zero, L_150333F4
    if (ctx->r15 == 0) {
        // 0x150333D4: lwc1        $f0, 0x118($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X118);
            goto L_150333F4;
    }
    goto skip_1;
    // 0x150333D4: lwc1        $f0, 0x118($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X118);
    skip_1:
    // 0x150333D8: lw          $v0, 0x31C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X31C);
    // 0x150333DC: beq         $v0, $zero, L_150333E8
    if (ctx->r2 == 0) {
        // 0x150333E0: nop
    
            goto L_150333E8;
    }
    // 0x150333E0: nop

    // 0x150333E4: sb          $zero, 0x11A($v0)
    MEM_B(0X11A, ctx->r2) = 0;
L_150333E8:
    // 0x150333E8: jr          $ra
    // 0x150333EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x150333EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150333F0: lwc1        $f0, 0x118($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X118);
L_150333F4:
    // 0x150333F4: lwc1        $f4, 0x7B68($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7B68);
    // 0x150333F8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150333FC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15033400: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x15033404: nop

    // 0x15033408: bc1tl       L_15033438
    if (c1cs) {
        // 0x1503340C: sb          $t8, 0x3($a0)
        MEM_B(0X3, ctx->r4) = ctx->r24;
            goto L_15033438;
    }
    goto skip_2;
    // 0x1503340C: sb          $t8, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r24;
    skip_2:
    // 0x15033410: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15033414: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x15033418: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1503341C: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x15033420: nop

    // 0x15033424: bc1fl       L_15033438
    if (!c1cs) {
        // 0x15033428: sb          $t8, 0x3($a0)
        MEM_B(0X3, ctx->r4) = ctx->r24;
            goto L_15033438;
    }
    goto skip_3;
    // 0x15033428: sb          $t8, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r24;
    skip_3:
    // 0x1503342C: b           L_15033438
    // 0x15033430: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
        goto L_15033438;
    // 0x15033430: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x15033434: sb          $t8, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r24;
L_15033438:
    // 0x15033438: jr          $ra
    // 0x1503343C: nop

    return;
    return;
    // 0x1503343C: nop

;}
RECOMP_FUNC void func_150B1DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B1DB0: lui         $t0, 0xA000
    ctx->r8 = S32(0XA000 << 16);
    // 0x150B1DB4: or          $t0, $t0, $a0
    ctx->r8 = ctx->r8 | ctx->r4;
    // 0x150B1DB8: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x150B1DBC: ld          $t1, -0x730($t1)
    ctx->r9 = LD(ctx->r9, -0X730);
    // 0x150B1DC0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x150B1DC4: ld          $t6, -0x728($t6)
    ctx->r14 = LD(ctx->r14, -0X728);
L_150B1DC8:
    // 0x150B1DC8: ld          $t2, 0x0($a0)
    ctx->r10 = LD(ctx->r4, 0X0);
    // 0x150B1DCC: ld          $t3, 0x8($a0)
    ctx->r11 = LD(ctx->r4, 0X8);
    // 0x150B1DD0: and         $t7, $t2, $t6
    ctx->r15 = ctx->r10 & ctx->r14;
    // 0x150B1DD4: and         $t2, $t2, $t1
    ctx->r10 = ctx->r10 & ctx->r9;
    // 0x150B1DD8: dsll        $t4, $t2, 5
    ctx->r12 = ctx->r10 << 5;
    // 0x150B1DDC: or          $t4, $t7, $t4
    ctx->r12 = ctx->r15 | ctx->r12;
    // 0x150B1DE0: dsrl        $t2, $t2, 5
    ctx->r10 = ctx->r10 >> 5;
    // 0x150B1DE4: or          $t2, $t2, $t4
    ctx->r10 = ctx->r10 | ctx->r12;
    // 0x150B1DE8: sd          $t2, 0x0($a0)
    SD(ctx->r10, 0X0, ctx->r4);
    // 0x150B1DEC: and         $t8, $t3, $t6
    ctx->r24 = ctx->r11 & ctx->r14;
    // 0x150B1DF0: and         $t3, $t3, $t1
    ctx->r11 = ctx->r11 & ctx->r9;
    // 0x150B1DF4: dsll        $t5, $t3, 5
    ctx->r13 = ctx->r11 << 5;
    // 0x150B1DF8: or          $t5, $t8, $t5
    ctx->r13 = ctx->r24 | ctx->r13;
    // 0x150B1DFC: dsrl        $t3, $t3, 5
    ctx->r11 = ctx->r11 >> 5;
    // 0x150B1E00: or          $t3, $t3, $t5
    ctx->r11 = ctx->r11 | ctx->r13;
    // 0x150B1E04: sd          $t3, 0x8($a0)
    SD(ctx->r11, 0X8, ctx->r4);
    // 0x150B1E08: addi        $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x150B1E0C: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x150B1E10: bne         $at, $zero, L_150B1DC8
    if (ctx->r1 != 0) {
        // 0x150B1E14: addi        $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_150B1DC8;
    }
    // 0x150B1E14: addi        $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x150B1E18: jr          $ra
    // 0x150B1E1C: nop

    return;
    return;
    // 0x150B1E1C: nop

;}
RECOMP_FUNC void func_151600D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151600D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151600DC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151600E0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x151600E4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x151600E8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x151600EC: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x151600F0: addiu       $t6, $t6, 0x6548
    ctx->r14 = ADD32(ctx->r14, 0X6548);
    // 0x151600F4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x151600F8: addiu       $t7, $zero, 0x1C4
    ctx->r15 = ADD32(0, 0X1C4);
    // 0x151600FC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15160100: addiu       $a1, $a1, 0x6540
    ctx->r5 = ADD32(ctx->r5, 0X6540);
    // 0x15160104: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15160108: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1516010C: addiu       $a2, $zero, -0x7D0
    ctx->r6 = ADD32(0, -0X7D0);
    // 0x15160110: addiu       $a3, $zero, 0x7D0
    ctx->r7 = ADD32(0, 0X7D0);
    // 0x15160114: jal         0x151422DC
    // 0x15160118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_151422DC(rdram, ctx);
        goto after_0;
    // 0x15160118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x1516011C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15160120: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15160124: lwc1        $f8, 0x6674($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6674);
    // 0x15160128: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1516012C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x15160130: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x15160134: addiu       $t8, $t8, 0x6584
    ctx->r24 = ADD32(ctx->r24, 0X6584);
    // 0x15160138: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x1516013C: addiu       $t9, $zero, 0x1C9
    ctx->r25 = ADD32(0, 0X1C9);
    // 0x15160140: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15160144: addiu       $a1, $a1, 0x657C
    ctx->r5 = ADD32(ctx->r5, 0X657C);
    // 0x15160148: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1516014C: addiu       $a2, $zero, -0x7D0
    ctx->r6 = ADD32(0, -0X7D0);
    // 0x15160150: addiu       $a3, $zero, 0x7D0
    ctx->r7 = ADD32(0, 0X7D0);
    // 0x15160154: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x15160158: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    // 0x1516015C: swc1        $f10, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f10.u32l;
    // 0x15160160: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15160164: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15160168: jal         0x151422DC
    // 0x1516016C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_151422DC(rdram, ctx);
        goto after_1;
    // 0x1516016C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x15160170: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x15160174: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15160178: lwc1        $f4, 0x6678($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6678);
    // 0x1516017C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15160180: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x15160184: addiu       $t1, $t1, 0x65C0
    ctx->r9 = ADD32(ctx->r9, 0X65C0);
    // 0x15160188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1516018C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x15160190: addiu       $t0, $zero, 0x1F4
    ctx->r8 = ADD32(0, 0X1F4);
    // 0x15160194: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15160198: addiu       $t2, $zero, 0x1CE
    ctx->r10 = ADD32(0, 0X1CE);
    // 0x1516019C: addiu       $a1, $a1, 0x65B8
    ctx->r5 = ADD32(ctx->r5, 0X65B8);
    // 0x151601A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151601A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151601A8: addiu       $a3, $zero, 0x7D0
    ctx->r7 = ADD32(0, 0X7D0);
    // 0x151601AC: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x151601B0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151601B4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151601B8: jal         0x151422DC
    // 0x151601BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_151422DC(rdram, ctx);
        goto after_2;
    // 0x151601BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_2:
    // 0x151601C0: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x151601C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151601C8: lwc1        $f16, 0x667C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X667C);
    // 0x151601CC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151601D0: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x151601D4: addiu       $t4, $t4, 0x65FC
    ctx->r12 = ADD32(ctx->r12, 0X65FC);
    // 0x151601D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151601DC: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x151601E0: addiu       $t3, $zero, 0x1F4
    ctx->r11 = ADD32(0, 0X1F4);
    // 0x151601E4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151601E8: addiu       $t5, $zero, 0x1D3
    ctx->r13 = ADD32(0, 0X1D3);
    // 0x151601EC: addiu       $a1, $a1, 0x65F4
    ctx->r5 = ADD32(ctx->r5, 0X65F4);
    // 0x151601F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151601F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151601F8: addiu       $a3, $zero, 0x7D0
    ctx->r7 = ADD32(0, 0X7D0);
    // 0x151601FC: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x15160200: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15160204: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x15160208: jal         0x151422DC
    // 0x1516020C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_151422DC(rdram, ctx);
        goto after_3;
    // 0x1516020C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_3:
    // 0x15160210: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15160214: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15160218: lwc1        $f8, 0x6680($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6680);
    // 0x1516021C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15160220: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x15160224: lui         $a3, 0x1
    ctx->r7 = S32(0X1 << 16);
    // 0x15160228: addiu       $t6, $t6, 0x663C
    ctx->r14 = ADD32(ctx->r14, 0X663C);
    // 0x1516022C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x15160230: addiu       $t7, $zero, 0x1D9
    ctx->r15 = ADD32(0, 0X1D9);
    // 0x15160234: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15160238: addiu       $a1, $a1, 0x6630
    ctx->r5 = ADD32(ctx->r5, 0X6630);
    // 0x1516023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15160240: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15160244: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x15160248: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1516024C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15160250: jal         0x151422DC
    // 0x15160254: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    func_151422DC(rdram, ctx);
        goto after_4;
    // 0x15160254: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    after_4:
    // 0x15160258: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x1516025C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15160260: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15160264: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x15160268: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x1516026C: jr          $ra
    // 0x15160270: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15160270: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_150F6400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F6400: lw          $t6, 0x160($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X160);
    // 0x150F6404: beq         $t6, $zero, L_150F6418
    if (ctx->r14 == 0) {
        // 0x150F6408: nop
    
            goto L_150F6418;
    }
    // 0x150F6408: nop

    // 0x150F640C: lw          $v0, 0x160($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X160);
    // 0x150F6410: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x150F6414: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
L_150F6418:
    // 0x150F6418: jr          $ra
    // 0x150F641C: nop

    return;
    return;
    // 0x150F641C: nop

;}
RECOMP_FUNC void func_150535F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150535F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150535F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150535FC: lbu         $t6, 0x1CA($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1CA);
    // 0x15053600: bnel        $t6, $zero, L_15053684
    if (ctx->r14 != 0) {
        // 0x15053604: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15053684;
    }
    goto skip_0;
    // 0x15053604: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x15053608: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x1505360C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15053610: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15053614: bne         $v1, $at, L_1505362C
    if (ctx->r3 != ctx->r1) {
        // 0x15053618: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_1505362C;
    }
    // 0x15053618: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x1505361C: jal         0x15060F28
    // 0x15053620: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15060F28(rdram, ctx);
        goto after_0;
    // 0x15053620: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x15053624: b           L_15053684
    // 0x15053628: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15053684;
    // 0x15053628: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1505362C:
    // 0x1505362C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x15053630: lw          $t8, 0x1C90($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1C90);
    // 0x15053634: lbu         $v0, 0x28($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X28);
    // 0x15053638: andi        $t9, $v0, 0x10
    ctx->r25 = ctx->r2 & 0X10;
    // 0x1505363C: bne         $t9, $zero, L_15053670
    if (ctx->r25 != 0) {
        // 0x15053640: andi        $t0, $v0, 0x8
        ctx->r8 = ctx->r2 & 0X8;
            goto L_15053670;
    }
    // 0x15053640: andi        $t0, $v0, 0x8
    ctx->r8 = ctx->r2 & 0X8;
    // 0x15053644: beql        $t0, $zero, L_15053668
    if (ctx->r8 == 0) {
        // 0x15053648: lbu         $t1, 0x10F($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0X10F);
            goto L_15053668;
    }
    goto skip_1;
    // 0x15053648: lbu         $t1, 0x10F($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X10F);
    skip_1:
    // 0x1505364C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15053650: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x15053654: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x15053658: nop

    // 0x1505365C: bc1t        L_15053670
    if (c1cs) {
        // 0x15053660: nop
    
            goto L_15053670;
    }
    // 0x15053660: nop

    // 0x15053664: lbu         $t1, 0x10F($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X10F);
L_15053668:
    // 0x15053668: bnel        $t1, $zero, L_15053684
    if (ctx->r9 != 0) {
        // 0x1505366C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15053684;
    }
    goto skip_2;
    // 0x1505366C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
L_15053670:
    // 0x15053670: jal         0x15053430
    // 0x15053674: nop

    func_15053430(rdram, ctx);
        goto after_1;
    // 0x15053674: nop

    after_1:
    // 0x15053678: b           L_15053688
    // 0x1505367C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15053688;
    // 0x1505367C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15053680: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15053684:
    // 0x15053684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15053688:
    // 0x15053688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1505368C: jr          $ra
    // 0x15053690: nop

    return;
    return;
    // 0x15053690: nop

;}
RECOMP_FUNC void func_15135BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15135BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15135BFC: lh          $t6, 0x70($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X70);
    // 0x15135C00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15135C04: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15135C08: blez        $t6, L_15135C94
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15135C0C: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_15135C94;
    }
    // 0x15135C0C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15135C10: addiu       $v0, $a0, 0x70
    ctx->r2 = ADD32(ctx->r4, 0X70);
    // 0x15135C14: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15135C18: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x15135C1C: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x15135C20: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15135C24: addiu       $a1, $a1, -0x165C
    ctx->r5 = ADD32(ctx->r5, -0X165C);
    // 0x15135C28: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x15135C2C: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x15135C30: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15135C34: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15135C38: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x15135C3C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15135C40: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15135C44: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x15135C48: swc1        $f16, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f16.u32l;
    // 0x15135C4C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15135C50: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15135C54: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15135C58: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15135C5C: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15135C60: swc1        $f8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f8.u32l;
    // 0x15135C64: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15135C68: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15135C6C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15135C70: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15135C74: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x15135C78: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    // 0x15135C7C: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15135C80: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15135C84: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x15135C88: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x15135C8C: b           L_15135D64
    // 0x15135C90: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
        goto L_15135D64;
    // 0x15135C90: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
L_15135C94:
    // 0x15135C94: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15135C98: addiu       $a1, $a1, -0x165C
    ctx->r5 = ADD32(ctx->r5, -0X165C);
    // 0x15135C9C: addiu       $v0, $a0, 0x70
    ctx->r2 = ADD32(ctx->r4, 0X70);
    // 0x15135CA0: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x15135CA4: addiu       $t0, $sp, 0x8
    ctx->r8 = ADD32(ctx->r29, 0X8);
    // 0x15135CA8: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x15135CAC: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x15135CB0: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x15135CB4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15135CB8: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15135CBC: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15135CC0: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x15135CC4: nop

    // 0x15135CC8: mul.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x15135CCC: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x15135CD0: mul.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x15135CD4: nop

    // 0x15135CD8: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x15135CDC: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x15135CE0: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x15135CE4: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x15135CE8: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15135CEC: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15135CF0: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15135CF4: mul.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x15135CF8: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15135CFC: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x15135D00: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x15135D04: lwc1        $f10, 0x8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8);
    // 0x15135D08: lwc1        $f16, 0xC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC);
    // 0x15135D0C: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x15135D10: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x15135D14: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15135D18: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15135D1C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x15135D20: mul.s       $f18, $f6, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x15135D24: swc1        $f6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f6.u32l;
    // 0x15135D28: swc1        $f10, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f10.u32l;
    // 0x15135D2C: swc1        $f18, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f18.u32l;
    // 0x15135D30: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15135D34: abs.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = fabsf(ctx->f10.fl);
    // 0x15135D38: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15135D3C: mul.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15135D40: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15135D44: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x15135D48: mul.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x15135D4C: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15135D50: swc1        $f18, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f18.u32l;
    // 0x15135D54: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15135D58: mul.s       $f8, $f12, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x15135D5C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15135D60: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
L_15135D64:
    // 0x15135D64: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x15135D68: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15135D6C: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x15135D70: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x15135D74: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x15135D78: nop

    // 0x15135D7C: bc1tl       L_15135DC4
    if (c1cs) {
        // 0x15135D80: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15135DC4;
    }
    goto skip_0;
    // 0x15135D80: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_0:
    // 0x15135D84: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x15135D88: nop

    // 0x15135D8C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x15135D90: nop

    // 0x15135D94: bc1tl       L_15135DC4
    if (c1cs) {
        // 0x15135D98: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15135DC4;
    }
    goto skip_1;
    // 0x15135D98: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_1:
    // 0x15135D9C: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x15135DA0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x15135DA4: nop

    // 0x15135DA8: bc1tl       L_15135DC4
    if (c1cs) {
        // 0x15135DAC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15135DC4;
    }
    goto skip_2;
    // 0x15135DAC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_2:
    // 0x15135DB0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x15135DB4: nop

    // 0x15135DB8: bc1fl       L_15135DC8
    if (!c1cs) {
        // 0x15135DBC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15135DC8;
    }
    goto skip_3;
    // 0x15135DBC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_3:
    // 0x15135DC0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15135DC4:
    // 0x15135DC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15135DC8:
    // 0x15135DC8: jr          $ra
    // 0x15135DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15135DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}

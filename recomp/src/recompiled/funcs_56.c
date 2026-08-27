#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_1506B8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B8B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506B8B8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506B8BC: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1506B8C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506B8C4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1506B8C8: lw          $t7, 0x31C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X31C);
    // 0x1506B8CC: sb          $zero, 0x78($t7)
    MEM_B(0X78, ctx->r15) = 0;
    // 0x1506B8D0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x1506B8D4: sb          $zero, 0x89($t8)
    MEM_B(0X89, ctx->r24) = 0;
    // 0x1506B8D8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1506B8DC: jal         0x1507F640
    // 0x1506B8E0: sb          $zero, 0x83($t9)
    MEM_B(0X83, ctx->r25) = 0;
    func_1507F640(rdram, ctx);
        goto after_0;
    // 0x1506B8E0: sb          $zero, 0x83($t9)
    MEM_B(0X83, ctx->r25) = 0;
    after_0:
    // 0x1506B8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506B8E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506B8EC: jr          $ra
    // 0x1506B8F0: nop

    return;
    return;
    // 0x1506B8F0: nop

;}
RECOMP_FUNC void func_1514F3CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F3CC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1514F3D0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1514F3D4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1514F3D8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x1514F3DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1514F3E0: addiu       $t8, $zero, 0x2B
    ctx->r24 = ADD32(0, 0X2B);
    // 0x1514F3E4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x1514F3E8: lbu         $t7, 0x3B($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3B);
    // 0x1514F3EC: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x1514F3F0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514F3F4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1514F3F8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x1514F3FC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1514F400: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1514F404: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1514F408: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1514F40C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1514F410: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x1514F414: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x1514F418: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1514F41C: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x1514F420: jal         0x15149130
    // 0x1514F424: sb          $t7, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r15;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x1514F424: sb          $t7, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r15;
    after_0:
    // 0x1514F428: beq         $v0, $zero, L_1514F43C
    if (ctx->r2 == 0) {
        // 0x1514F42C: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1514F43C;
    }
    // 0x1514F42C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1514F430: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x1514F434: jal         0x10022EC0
    // 0x1514F438: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1514F438: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
L_1514F43C:
    // 0x1514F43C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1514F440: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1514F444: jr          $ra
    // 0x1514F448: nop

    return;
    return;
    // 0x1514F448: nop

;}
RECOMP_FUNC void func_1500FE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500FE30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1500FE34: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1500FE38: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x1500FE3C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x1500FE40: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1500FE44: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1500FE48: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1500FE4C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1500FE50: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x1500FE54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1500FE58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1500FE5C: jal         0x10003C40
    // 0x1500FE60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1500FE60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1500FE64: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x1500FE68: addiu       $s1, $s1, -0x1B20
    ctx->r17 = ADD32(ctx->r17, -0X1B20);
    // 0x1500FE6C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x1500FE70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1500FE74: jal         0x100226F0
    // 0x1500FE78: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x1500FE78: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_1:
    // 0x1500FE7C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1500FE80: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1500FE84: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
    // 0x1500FE88: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x1500FE8C: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
L_1500FE90:
    // 0x1500FE90: div         $zero, $s2, $s3
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r19)));
    // 0x1500FE94: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1500FE98: mflo        $t6
    ctx->r14 = lo;
    // 0x1500FE9C: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x1500FEA0: sb          $t6, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r14;
    // 0x1500FEA4: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1500FEA8: bne         $s3, $zero, L_1500FEB4
    if (ctx->r19 != 0) {
        // 0x1500FEAC: nop
    
            goto L_1500FEB4;
    }
    // 0x1500FEAC: nop

    // 0x1500FEB0: break       7
    do_break(352386736);
L_1500FEB4:
    // 0x1500FEB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1500FEB8: bne         $s3, $at, L_1500FECC
    if (ctx->r19 != ctx->r1) {
        // 0x1500FEBC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1500FECC;
    }
    // 0x1500FEBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1500FEC0: bne         $s2, $at, L_1500FECC
    if (ctx->r18 != ctx->r1) {
        // 0x1500FEC4: nop
    
            goto L_1500FECC;
    }
    // 0x1500FEC4: nop

    // 0x1500FEC8: break       6
    do_break(352386760);
L_1500FECC:
    // 0x1500FECC: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x1500FED0: jal         0x150ADA20
    // 0x1500FED4: sb          $s4, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r20;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1500FED4: sb          $s4, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r20;
    after_2:
    // 0x1500FED8: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x1500FEDC: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x1500FEE0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1500FEE4: slti        $at, $s2, 0xA
    ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x1500FEE8: mfhi        $t1
    ctx->r9 = hi;
    // 0x1500FEEC: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x1500FEF0: bne         $s5, $zero, L_1500FEFC
    if (ctx->r21 != 0) {
        // 0x1500FEF4: nop
    
            goto L_1500FEFC;
    }
    // 0x1500FEF4: nop

    // 0x1500FEF8: break       7
    do_break(352386808);
L_1500FEFC:
    // 0x1500FEFC: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x1500FF00: bne         $at, $zero, L_1500FE90
    if (ctx->r1 != 0) {
        // 0x1500FF04: sh          $t1, 0x4($t3)
        MEM_H(0X4, ctx->r11) = ctx->r9;
            goto L_1500FE90;
    }
    // 0x1500FF04: sh          $t1, 0x4($t3)
    MEM_H(0X4, ctx->r11) = ctx->r9;
    // 0x1500FF08: jal         0x150C851C
    // 0x1500FF0C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_150C851C(rdram, ctx);
        goto after_3;
    // 0x1500FF0C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_3:
    // 0x1500FF10: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x1500FF14: addiu       $s0, $zero, 0x14
    ctx->r16 = ADD32(0, 0X14);
    // 0x1500FF18: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x1500FF1C: lh          $t4, 0x8($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X8);
    // 0x1500FF20: sh          $t4, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r12;
    // 0x1500FF24: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x1500FF28: lh          $t5, 0x12($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X12);
    // 0x1500FF2C: sh          $t5, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r13;
L_1500FF30:
    // 0x1500FF30: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1500FF34: addu        $v0, $t7, $s0
    ctx->r2 = ADD32(ctx->r15, ctx->r16);
    // 0x1500FF38: lh          $t6, 0x8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8);
    // 0x1500FF3C: sh          $t6, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r14;
    // 0x1500FF40: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x1500FF44: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x1500FF48: lh          $t9, 0x12($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X12);
    // 0x1500FF4C: sh          $t9, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r25;
    // 0x1500FF50: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x1500FF54: addu        $v0, $t0, $s0
    ctx->r2 = ADD32(ctx->r8, ctx->r16);
    // 0x1500FF58: lh          $t2, 0x1C($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X1C);
    // 0x1500FF5C: sh          $t2, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r10;
    // 0x1500FF60: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x1500FF64: addu        $v0, $t1, $s0
    ctx->r2 = ADD32(ctx->r9, ctx->r16);
    // 0x1500FF68: lh          $t3, 0x26($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X26);
    // 0x1500FF6C: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x1500FF70: bne         $s0, $v1, L_1500FF30
    if (ctx->r16 != ctx->r3) {
        // 0x1500FF74: sh          $t3, 0x24($v0)
        MEM_H(0X24, ctx->r2) = ctx->r11;
            goto L_1500FF30;
    }
    // 0x1500FF74: sh          $t3, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r11;
    // 0x1500FF78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1500FF7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1500FF80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1500FF84: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1500FF88: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1500FF8C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x1500FF90: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x1500FF94: jr          $ra
    // 0x1500FF98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1500FF98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15052408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15052408: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
    // 0x1505240C: sh          $zero, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = 0;
    // 0x15052410: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15052414: sb          $zero, 0x95($t6)
    MEM_B(0X95, ctx->r14) = 0;
    // 0x15052418: lbu         $t7, 0x1CA($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1CA);
    // 0x1505241C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15052420: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15052424: beq         $t7, $zero, L_1505243C
    if (ctx->r15 == 0) {
        // 0x15052428: lui         $at, 0x4170
        ctx->r1 = S32(0X4170 << 16);
            goto L_1505243C;
    }
    // 0x15052428: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1505242C: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x15052430: sb          $zero, 0x81($a0)
    MEM_B(0X81, ctx->r4) = 0;
    // 0x15052434: sb          $zero, 0x83($a0)
    MEM_B(0X83, ctx->r4) = 0;
    // 0x15052438: sb          $t8, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r24;
L_1505243C:
    // 0x1505243C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15052440: sb          $zero, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = 0;
    // 0x15052444: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x15052448: swc1        $f6, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f6.u32l;
    // 0x1505244C: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
    // 0x15052450: jr          $ra
    // 0x15052454: nop

    return;
    return;
    // 0x15052454: nop

;}
RECOMP_FUNC void func_151AC408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AC408: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x151AC40C: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x151AC410: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151AC414: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151AC418: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x151AC41C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x151AC420: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x151AC424: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x151AC428: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x151AC42C: lb          $t6, 0x2D($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2D);
    // 0x151AC430: lw          $v0, 0x94($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X94);
    // 0x151AC434: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x151AC438: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151AC43C: lw          $s1, 0x98($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X98);
    // 0x151AC440: mflo        $t7
    ctx->r15 = lo;
    // 0x151AC444: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x151AC448: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x151AC44C: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x151AC450: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x151AC454: lb          $t9, 0x2D($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X2D);
    // 0x151AC458: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151AC45C: mflo        $t0
    ctx->r8 = lo;
    // 0x151AC460: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x151AC464: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x151AC468: jal         0x151D8E20
    // 0x151AC46C: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    func_151D8E20(rdram, ctx);
        goto after_0;
    // 0x151AC46C: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x151AC470: jal         0x150ADA20
    // 0x151AC474: sb          $v0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151AC474: sb          $v0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r2;
    after_1:
    // 0x151AC478: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x151AC47C: beq         $t2, $zero, L_151AC4F8
    if (ctx->r10 == 0) {
        // 0x151AC480: lui         $at, 0x3FC0
        ctx->r1 = S32(0X3FC0 << 16);
            goto L_151AC4F8;
    }
    // 0x151AC480: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x151AC484: jal         0x150ADA20
    // 0x151AC488: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151AC488: nop

    after_2:
    // 0x151AC48C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x151AC490: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151AC494: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x151AC498: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AC49C: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151AC4A0: lbu         $a2, 0x1B($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X1B);
    // 0x151AC4A4: mfhi        $t4
    ctx->r12 = hi;
    // 0x151AC4A8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151AC4AC: addiu       $t5, $t4, 0x50
    ctx->r13 = ADD32(ctx->r12, 0X50);
    // 0x151AC4B0: addiu       $t3, $sp, 0x4C
    ctx->r11 = ADD32(ctx->r29, 0X4C);
    // 0x151AC4B4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151AC4B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151AC4BC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x151AC4C0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151AC4C4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151AC4C8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151AC4CC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151AC4D0: lbu         $t8, 0xC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XC);
    // 0x151AC4D4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x151AC4D8: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    // 0x151AC4DC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x151AC4E0: lbu         $t9, 0x1($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1);
    // 0x151AC4E4: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x151AC4E8: jal         0x151D9B8C
    // 0x151AC4EC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    func_151D9B8C(rdram, ctx);
        goto after_3;
    // 0x151AC4EC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    after_3:
    // 0x151AC4F0: b           L_151AC534
    // 0x151AC4F4: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
        goto L_151AC534;
    // 0x151AC4F4: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
L_151AC4F8:
    // 0x151AC4F8: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151AC4FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151AC500: lbu         $a2, 0x1B($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X1B);
    // 0x151AC504: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151AC508: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151AC50C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151AC510: lbu         $t1, 0xC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XC);
    // 0x151AC514: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    // 0x151AC518: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x151AC51C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151AC520: lbu         $t2, 0x1($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1);
    // 0x151AC524: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x151AC528: jal         0x151DAB58
    // 0x151AC52C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_151DAB58(rdram, ctx);
        goto after_4;
    // 0x151AC52C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_4:
    // 0x151AC530: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
L_151AC534:
    // 0x151AC534: sb          $t3, 0x20($s1)
    MEM_B(0X20, ctx->r17) = ctx->r11;
    // 0x151AC538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151AC53C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151AC540: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x151AC544: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x151AC548: jr          $ra
    // 0x151AC54C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x151AC54C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_1501C53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501C53C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1501C540: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1501C544: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1501C548: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1501C54C:
    // 0x1501C54C: jal         0x1501C17C
    // 0x1501C550: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_1501C17C(rdram, ctx);
        goto after_0;
    // 0x1501C550: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x1501C554: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501C558: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x1501C55C: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x1501C560: bne         $at, $zero, L_1501C54C
    if (ctx->r1 != 0) {
        // 0x1501C564: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_1501C54C;
    }
    // 0x1501C564: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x1501C568: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1501C56C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1501C570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1501C574: jr          $ra
    // 0x1501C578: nop

    return;
    return;
    // 0x1501C578: nop

;}
RECOMP_FUNC void func_150091D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150091D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150091D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150091D8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150091DC: sw          $zero, -0x3288($at)
    MEM_W(-0X3288, ctx->r1) = 0;
    // 0x150091E0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150091E4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150091E8: sw          $t6, -0x3284($at)
    MEM_W(-0X3284, ctx->r1) = ctx->r14;
    // 0x150091EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150091F0: sw          $zero, -0x3280($at)
    MEM_W(-0X3280, ctx->r1) = 0;
    // 0x150091F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150091F8: sw          $zero, -0x327C($at)
    MEM_W(-0X327C, ctx->r1) = 0;
    // 0x150091FC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x15009200: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15009204: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15009208: jal         0x1515D4D4
    // 0x1500920C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1515D4D4(rdram, ctx);
        goto after_0;
    // 0x1500920C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x15009210: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15009214: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15009218: addiu       $v1, $v1, -0x32D8
    ctx->r3 = ADD32(ctx->r3, -0X32D8);
    // 0x1500921C: addiu       $v0, $v0, -0x32DC
    ctx->r2 = ADD32(ctx->r2, -0X32DC);
    // 0x15009220: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x15009224: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x15009228: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x1500922C: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x15009230: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    // 0x15009234: sb          $a0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r4;
    // 0x15009238: sb          $a0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r4;
    // 0x1500923C: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x15009240: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15009244: sb          $t7, -0x32D0($at)
    MEM_B(-0X32D0, ctx->r1) = ctx->r15;
    // 0x15009248: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500924C: sb          $zero, -0x32CF($at)
    MEM_B(-0X32CF, ctx->r1) = 0;
    // 0x15009250: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15009254: sb          $zero, -0x32CE($at)
    MEM_B(-0X32CE, ctx->r1) = 0;
    // 0x15009258: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500925C: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x15009260: sb          $t8, -0x32CD($at)
    MEM_B(-0X32CD, ctx->r1) = ctx->r24;
    // 0x15009264: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15009268: sb          $zero, -0x32CC($at)
    MEM_B(-0X32CC, ctx->r1) = 0;
    // 0x1500926C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15009270: sb          $zero, -0x32CB($at)
    MEM_B(-0X32CB, ctx->r1) = 0;
    // 0x15009274: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15009278: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x1500927C: sb          $t9, -0x32CA($at)
    MEM_B(-0X32CA, ctx->r1) = ctx->r25;
    // 0x15009280: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15009284: sb          $zero, -0x32C9($at)
    MEM_B(-0X32C9, ctx->r1) = 0;
    // 0x15009288: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500928C: sb          $zero, -0x32C8($at)
    MEM_B(-0X32C8, ctx->r1) = 0;
    // 0x15009290: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15009294: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x15009298: sb          $t0, -0x32C7($at)
    MEM_B(-0X32C7, ctx->r1) = ctx->r8;
    // 0x1500929C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150092A0: sb          $zero, -0x32C6($at)
    MEM_B(-0X32C6, ctx->r1) = 0;
    // 0x150092A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150092A8: sb          $zero, -0x32C5($at)
    MEM_B(-0X32C5, ctx->r1) = 0;
    // 0x150092AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150092B0: sb          $zero, -0x32C4($at)
    MEM_B(-0X32C4, ctx->r1) = 0;
    // 0x150092B4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150092B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150092BC: sb          $zero, -0x32C3($at)
    MEM_B(-0X32C3, ctx->r1) = 0;
    // 0x150092C0: addiu       $a0, $a0, -0x32C0
    ctx->r4 = ADD32(ctx->r4, -0X32C0);
    // 0x150092C4: jal         0x100226F0
    // 0x150092C8: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x150092C8: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_1:
    // 0x150092CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150092D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150092D4: jr          $ra
    // 0x150092D8: nop

    return;
    return;
    // 0x150092D8: nop

;}
RECOMP_FUNC void func_1517E1AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517E1AC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1517E1B0: lw          $v0, -0x229C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X229C);
    // 0x1517E1B4: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1517E1B8: addiu       $a2, $a2, -0x163C
    ctx->r6 = ADD32(ctx->r6, -0X163C);
    // 0x1517E1BC: beq         $v0, $zero, L_1517E284
    if (ctx->r2 == 0) {
        // 0x1517E1C0: lui         $a1, 0x800C
        ctx->r5 = S32(0X800C << 16);
            goto L_1517E284;
    }
    // 0x1517E1C0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1517E1C4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1517E1C8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1517E1CC: addiu       $a0, $a0, -0x19E0
    ctx->r4 = ADD32(ctx->r4, -0X19E0);
    // 0x1517E1D0: addiu       $a1, $a1, -0x19DC
    ctx->r5 = ADD32(ctx->r5, -0X19DC);
    // 0x1517E1D4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_1517E1D8:
    // 0x1517E1D8: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x1517E1DC: nop

    // 0x1517E1E0: bc1fl       L_1517E27C
    if (!c1cs) {
        // 0x1517E1E4: lw          $v0, 0x24($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X24);
            goto L_1517E27C;
    }
    goto skip_0;
    // 0x1517E1E4: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    skip_0:
    // 0x1517E1E8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x1517E1EC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x1517E1F0: nop

    // 0x1517E1F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1517E1F8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x1517E1FC: nop

    // 0x1517E200: bc1fl       L_1517E27C
    if (!c1cs) {
        // 0x1517E204: lw          $v0, 0x24($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X24);
            goto L_1517E27C;
    }
    goto skip_1;
    // 0x1517E204: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    skip_1:
    // 0x1517E208: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1517E20C: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x1517E210: nop

    // 0x1517E214: bc1fl       L_1517E27C
    if (!c1cs) {
        // 0x1517E218: lw          $v0, 0x24($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X24);
            goto L_1517E27C;
    }
    goto skip_2;
    // 0x1517E218: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    skip_2:
    // 0x1517E21C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x1517E220: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1517E224: nop

    // 0x1517E228: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1517E22C: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x1517E230: nop

    // 0x1517E234: bc1fl       L_1517E27C
    if (!c1cs) {
        // 0x1517E238: lw          $v0, 0x24($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X24);
            goto L_1517E27C;
    }
    goto skip_3;
    // 0x1517E238: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    skip_3:
    // 0x1517E23C: trunc.w.s   $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x1517E240: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x1517E244: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x1517E248: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x1517E24C: nop

    // 0x1517E250: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1517E254: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x1517E258: nop

    // 0x1517E25C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x1517E260: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x1517E264: mflo        $t4
    ctx->r12 = lo;
    // 0x1517E268: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x1517E26C: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x1517E270: lhu         $t8, 0x0($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X0);
    // 0x1517E274: sh          $t8, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = ctx->r24;
    // 0x1517E278: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
L_1517E27C:
    // 0x1517E27C: bnel        $v0, $zero, L_1517E1D8
    if (ctx->r2 != 0) {
        // 0x1517E280: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_1517E1D8;
    }
    goto skip_4;
    // 0x1517E280: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_4:
L_1517E284:
    // 0x1517E284: jr          $ra
    // 0x1517E288: nop

    return;
    return;
    // 0x1517E288: nop

;}
RECOMP_FUNC void func_15005D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005D60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15005D64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15005D68: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x15005D6C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x15005D70: sh          $t6, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r14;
    // 0x15005D74: sh          $t7, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r15;
    // 0x15005D78: jal         0x15124B18
    // 0x15005D7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15124B18(rdram, ctx);
        goto after_0;
    // 0x15005D7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15005D80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15005D84: lw          $t8, 0x84($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X84);
    // 0x15005D88: sw          $zero, 0x134($a0)
    MEM_W(0X134, ctx->r4) = 0;
    // 0x15005D8C: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x15005D90: sw          $t9, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r25;
    // 0x15005D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15005D98: jr          $ra
    // 0x15005D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15005D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1000F6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000F6B8: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x1000F6BC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x1000F6C0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x1000F6C4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x1000F6C8: sll         $s0, $a1, 16
    ctx->r16 = S32(ctx->r5 << 16);
    // 0x1000F6CC: sll         $s1, $a2, 16
    ctx->r17 = S32(ctx->r6 << 16);
    // 0x1000F6D0: sll         $s2, $a3, 16
    ctx->r18 = S32(ctx->r7 << 16);
    // 0x1000F6D4: sra         $t8, $s2, 16
    ctx->r24 = S32(SIGNED(ctx->r18) >> 16);
    // 0x1000F6D8: sra         $t7, $s1, 16
    ctx->r15 = S32(SIGNED(ctx->r17) >> 16);
    // 0x1000F6DC: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x1000F6E0: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x1000F6E4: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x1000F6E8: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x1000F6EC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1000F6F0: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x1000F6F4: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x1000F6F8: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x1000F6FC: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x1000F700: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1000F704: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
    // 0x1000F708: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000F70C: addiu       $t1, $v0, 0x1F68
    ctx->r9 = ADD32(ctx->r2, 0X1F68);
    // 0x1000F710: beql        $v1, $zero, L_1000F7C4
    if (ctx->r3 == 0) {
        // 0x1000F714: lw          $t9, 0xC($t1)
        ctx->r25 = MEM_W(ctx->r9, 0XC);
            goto L_1000F7C4;
    }
    goto skip_0;
    // 0x1000F714: lw          $t9, 0xC($t1)
    ctx->r25 = MEM_W(ctx->r9, 0XC);
    skip_0:
    // 0x1000F718: bltz        $v1, L_1000F7B4
    if (SIGNED(ctx->r3) < 0) {
        // 0x1000F71C: addiu       $a3, $zero, -0x1
        ctx->r7 = ADD32(0, -0X1);
            goto L_1000F7B4;
    }
    // 0x1000F71C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1000F720: sll         $t2, $v1, 3
    ctx->r10 = S32(ctx->r3 << 3);
    // 0x1000F724: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x1000F728: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x1000F72C: addiu       $v0, $t9, 0x1F68
    ctx->r2 = ADD32(ctx->r25, 0X1F68);
    // 0x1000F730: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1000F734: addu        $t0, $t2, $v0
    ctx->r8 = ADD32(ctx->r10, ctx->r2);
    // 0x1000F738: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x1000F73C: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
L_1000F740:
    // 0x1000F740: lw          $t4, 0x10($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X10);
    // 0x1000F744: lw          $t5, 0x14($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X14);
    // 0x1000F748: subu        $v1, $s0, $t3
    ctx->r3 = SUB32(ctx->r16, ctx->r11);
    // 0x1000F74C: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000F750: subu        $a0, $s1, $t4
    ctx->r4 = SUB32(ctx->r17, ctx->r12);
    // 0x1000F754: subu        $a1, $s2, $t5
    ctx->r5 = SUB32(ctx->r18, ctx->r13);
    // 0x1000F758: mflo        $t6
    ctx->r14 = lo;
    // 0x1000F75C: nop

    // 0x1000F760: nop

    // 0x1000F764: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000F768: mflo        $t7
    ctx->r15 = lo;
    // 0x1000F76C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1000F770: nop

    // 0x1000F774: multu       $a1, $a1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000F778: mflo        $t2
    ctx->r10 = lo;
    // 0x1000F77C: addu        $a2, $t8, $t2
    ctx->r6 = ADD32(ctx->r24, ctx->r10);
    // 0x1000F780: sltu        $at, $a2, $a3
    ctx->r1 = ctx->r6 < ctx->r7 ? 1 : 0;
    // 0x1000F784: beql        $at, $zero, L_1000F7A4
    if (ctx->r1 == 0) {
        // 0x1000F788: addiu       $v0, $v0, 0x1C
        ctx->r2 = ADD32(ctx->r2, 0X1C);
            goto L_1000F7A4;
    }
    goto skip_1;
    // 0x1000F788: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
    skip_1:
    // 0x1000F78C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x1000F790: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x1000F794: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    // 0x1000F798: sw          $a0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r4;
    // 0x1000F79C: sw          $a1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r5;
    // 0x1000F7A0: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
L_1000F7A4:
    // 0x1000F7A4: sltu        $at, $t0, $v0
    ctx->r1 = ctx->r8 < ctx->r2 ? 1 : 0;
    // 0x1000F7A8: beql        $at, $zero, L_1000F740
    if (ctx->r1 == 0) {
        // 0x1000F7AC: lw          $t3, 0xC($v0)
        ctx->r11 = MEM_W(ctx->r2, 0XC);
            goto L_1000F740;
    }
    goto skip_2;
    // 0x1000F7AC: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    skip_2:
    // 0x1000F7B0: sw          $t1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r9;
L_1000F7B4:
    // 0x1000F7B4: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x1000F7B8: b           L_1000F7E8
    // 0x1000F7BC: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
        goto L_1000F7E8;
    // 0x1000F7BC: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x1000F7C0: lw          $t9, 0xC($t1)
    ctx->r25 = MEM_W(ctx->r9, 0XC);
L_1000F7C4:
    // 0x1000F7C4: subu        $t3, $s0, $t9
    ctx->r11 = SUB32(ctx->r16, ctx->r25);
    // 0x1000F7C8: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x1000F7CC: lw          $t4, 0x10($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X10);
    // 0x1000F7D0: subu        $t5, $s1, $t4
    ctx->r13 = SUB32(ctx->r17, ctx->r12);
    // 0x1000F7D4: sw          $t5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r13;
    // 0x1000F7D8: lw          $t6, 0x14($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X14);
    // 0x1000F7DC: subu        $t7, $s2, $t6
    ctx->r15 = SUB32(ctx->r18, ctx->r14);
    // 0x1000F7E0: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x1000F7E4: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
L_1000F7E8:
    // 0x1000F7E8: lw          $a3, 0x18($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X18);
    // 0x1000F7EC: lh          $t6, 0x9A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X9A);
    // 0x1000F7F0: subu        $t2, $s0, $t8
    ctx->r10 = SUB32(ctx->r16, ctx->r24);
    // 0x1000F7F4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1000F7F8: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x1000F7FC: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x1000F800: lh          $t7, 0x96($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X96);
    // 0x1000F804: subu        $t3, $s1, $t9
    ctx->r11 = SUB32(ctx->r17, ctx->r25);
    // 0x1000F808: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1000F80C: lw          $t4, 0x8($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X8);
    // 0x1000F810: addiu       $t2, $sp, 0x7C
    ctx->r10 = ADD32(ctx->r29, 0X7C);
    // 0x1000F814: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x1000F818: subu        $t5, $s2, $t4
    ctx->r13 = SUB32(ctx->r18, ctx->r12);
    // 0x1000F81C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x1000F820: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1000F824: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x1000F828: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x1000F82C: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x1000F830: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x1000F834: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x1000F838: jal         0x1000A420
    // 0x1000F83C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_1000A420(rdram, ctx);
        goto after_0;
    // 0x1000F83C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_0:
    // 0x1000F840: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x1000F844: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1000F848: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x1000F84C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x1000F850: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x1000F854: jr          $ra
    // 0x1000F858: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x1000F858: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_150C88D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C88D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150C88D4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x150C88D8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x150C88DC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150C88E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C88E4: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x150C88E8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x150C88EC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150C88F0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150C88F4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x150C88F8: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x150C88FC: lbu         $t0, 0x43($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X43);
    // 0x150C8900: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150C8904: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x150C8908: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x150C890C: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x150C8910: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x150C8914: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x150C8918: addu        $a2, $t7, $t9
    ctx->r6 = ADD32(ctx->r15, ctx->r25);
    // 0x150C891C: addiu       $a2, $a2, 0x408
    ctx->r6 = ADD32(ctx->r6, 0X408);
    // 0x150C8920: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x150C8924: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x150C8928: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x150C892C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150C8930: jal         0x15167A68
    // 0x150C8934: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x150C8934: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x150C8938: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
    // 0x150C893C: bne         $v0, $zero, L_150C894C
    if (ctx->r2 != 0) {
        // 0x150C8940: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_150C894C;
    }
    // 0x150C8940: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x150C8944: b           L_150C8A4C
    // 0x150C8948: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150C8A4C;
    // 0x150C8948: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C894C:
    // 0x150C894C: addiu       $a0, $s2, 0x10
    ctx->r4 = ADD32(ctx->r18, 0X10);
    // 0x150C8950: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150C8954: jal         0x10022EC0
    // 0x150C8958: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150C8958: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_1:
    // 0x150C895C: addiu       $t2, $s2, 0x368
    ctx->r10 = ADD32(ctx->r18, 0X368);
    // 0x150C8960: sw          $t2, 0x360($s2)
    MEM_W(0X360, ctx->r18) = ctx->r10;
    // 0x150C8964: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x150C8968: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x150C896C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150C8970: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x150C8974: addu        $t5, $s2, $t4
    ctx->r13 = ADD32(ctx->r18, ctx->r12);
    // 0x150C8978: addiu       $t6, $t5, 0x368
    ctx->r14 = ADD32(ctx->r13, 0X368);
    // 0x150C897C: sw          $t6, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->r14;
    // 0x150C8980: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x150C8984: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x150C8988: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C898C: multu       $v1, $s1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150C8990: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x150C8994: addu        $t7, $s2, $t8
    ctx->r15 = ADD32(ctx->r18, ctx->r24);
    // 0x150C8998: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150C899C: mflo        $t9
    ctx->r25 = lo;
    // 0x150C89A0: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x150C89A4: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x150C89A8: addiu       $t2, $t1, 0x3B8
    ctx->r10 = ADD32(ctx->r9, 0X3B8);
    // 0x150C89AC: sw          $t2, 0x58($s2)
    MEM_W(0X58, ctx->r18) = ctx->r10;
    // 0x150C89B0: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x150C89B4: swc1        $f0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->f0.u32l;
    // 0x150C89B8: swc1        $f0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->f0.u32l;
    // 0x150C89BC: multu       $v1, $s1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150C89C0: sll         $t3, $v1, 3
    ctx->r11 = S32(ctx->r3 << 3);
    // 0x150C89C4: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x150C89C8: lh          $t7, 0x28($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X28);
    // 0x150C89CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150C89D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150C89D4: mflo        $t5
    ctx->r13 = lo;
    // 0x150C89D8: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x150C89DC: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x150C89E0: addiu       $t9, $t8, 0x408
    ctx->r25 = ADD32(ctx->r24, 0X408);
    // 0x150C89E4: sw          $t9, 0x364($s2)
    MEM_W(0X364, ctx->r18) = ctx->r25;
    // 0x150C89E8: lwc1        $f4, 0x528($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X528);
    // 0x150C89EC: swc1        $f0, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f0.u32l;
    // 0x150C89F0: sh          $t7, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = ctx->r15;
    // 0x150C89F4: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x150C89F8: swc1        $f10, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->f10.u32l;
    // 0x150C89FC: blez        $a0, L_150C8A48
    if (SIGNED(ctx->r4) <= 0) {
        // 0x150C8A00: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_150C8A48;
    }
    // 0x150C8A00: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_150C8A04:
    // 0x150C8A04: jal         0x15047D60
    // 0x150C8A08: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x150C8A08: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x150C8A0C: lw          $t0, 0x360($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X360);
    // 0x150C8A10: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x150C8A14: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x150C8A18: jal         0x15047C00
    // 0x150C8A1C: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x150C8A1C: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    after_3:
    // 0x150C8A20: lw          $t2, 0x360($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X360);
    // 0x150C8A24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x150C8A28: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x150C8A2C: swc1        $f0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f0.u32l;
    // 0x150C8A30: lw          $t5, 0x24($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X24);
    // 0x150C8A34: lwc1        $f16, 0x48($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X48);
    // 0x150C8A38: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150C8A3C: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x150C8A40: bne         $at, $zero, L_150C8A04
    if (ctx->r1 != 0) {
        // 0x150C8A44: add.s       $f20, $f20, $f16
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f16.fl;
            goto L_150C8A04;
    }
    // 0x150C8A44: add.s       $f20, $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f16.fl;
L_150C8A48:
    // 0x150C8A48: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_150C8A4C:
    // 0x150C8A4C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150C8A50: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150C8A54: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150C8A58: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x150C8A5C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x150C8A60: jr          $ra
    // 0x150C8A64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x150C8A64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_1514F194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F194: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1514F198: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x1514F19C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1514F1A0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1514F1A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1514F1A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1514F1AC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1514F1B0: jal         0x151D0F60
    // 0x1514F1B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151D0F60(rdram, ctx);
        goto after_0;
    // 0x1514F1B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1514F1B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1514F1BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1514F1C0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1514F1C4: jal         0x151D0F60
    // 0x1514F1C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151D0F60(rdram, ctx);
        goto after_1;
    // 0x1514F1C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x1514F1CC: jal         0x151BB044
    // 0x1514F1D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151BB044(rdram, ctx);
        goto after_2;
    // 0x1514F1D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x1514F1D4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1514F1D8: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x1514F1DC: bnel        $t6, $zero, L_1514F1F0
    if (ctx->r14 != 0) {
        // 0x1514F1E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1514F1F0;
    }
    goto skip_0;
    // 0x1514F1E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x1514F1E4: jal         0x151BC074
    // 0x1514F1E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151BC074(rdram, ctx);
        goto after_3;
    // 0x1514F1E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x1514F1EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_1514F1F0:
    // 0x1514F1F0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1514F1F4: jal         0x151BD2F8
    // 0x1514F1F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151BD2F8(rdram, ctx);
        goto after_4;
    // 0x1514F1F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x1514F1FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1514F200: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1514F204: jal         0x151B9F00
    // 0x1514F208: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151B9F00(rdram, ctx);
        goto after_5;
    // 0x1514F208: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x1514F20C: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x1514F210: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x1514F214: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x1514F218: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514F21C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514F220: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514F224: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x1514F228: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x1514F22C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x1514F230: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1514F234: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x1514F238: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x1514F23C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x1514F240: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x1514F244: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x1514F248: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1514F24C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1514F250: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1514F254: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1514F258: addiu       $a2, $a2, 0x5958
    ctx->r6 = ADD32(ctx->r6, 0X5958);
    // 0x1514F25C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1514F260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1514F264: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1514F268: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1514F26C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1514F270: jal         0x15160A58
    // 0x1514F274: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_15160A58(rdram, ctx);
        goto after_6;
    // 0x1514F274: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_6:
    // 0x1514F278: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x1514F27C: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x1514F280: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x1514F284: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514F288: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514F28C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1514F290: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1514F294: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1514F298: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1514F29C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x1514F2A0: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x1514F2A4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x1514F2A8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x1514F2AC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x1514F2B0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1514F2B4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1514F2B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1514F2BC: addiu       $a2, $a2, 0x5964
    ctx->r6 = ADD32(ctx->r6, 0X5964);
    // 0x1514F2C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1514F2C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1514F2C8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1514F2CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1514F2D0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1514F2D4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1514F2D8: jal         0x15160A58
    // 0x1514F2DC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_15160A58(rdram, ctx);
        goto after_7;
    // 0x1514F2DC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_7:
    // 0x1514F2E0: beq         $v0, $zero, L_1514F2F4
    if (ctx->r2 == 0) {
        // 0x1514F2E4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1514F2F4;
    }
    // 0x1514F2E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514F2E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1514F2EC: jal         0x1514EC1C
    // 0x1514F2F0: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    func_1514EC1C(rdram, ctx);
        goto after_8;
    // 0x1514F2F0: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_8:
L_1514F2F4:
    // 0x1514F2F4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1514F2F8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x1514F2FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1514F300: jr          $ra
    // 0x1514F304: nop

    return;
    return;
    // 0x1514F304: nop

;}
RECOMP_FUNC void func_1519C4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519C4E4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1519C4E8: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x1519C4EC: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x1519C4F0: blezl       $v1, L_1519C52C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1519C4F4: addiu       $v0, $a0, 0x110
        ctx->r2 = ADD32(ctx->r4, 0X110);
            goto L_1519C52C;
    }
    goto skip_0;
    // 0x1519C4F4: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    skip_0:
L_1519C4F8:
    // 0x1519C4F8: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x1519C4FC: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x1519C500: lwc1        $f2, 0x30($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X30);
    // 0x1519C504: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1519C508: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1519C50C: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x1519C510: swc1        $f8, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f8.u32l;
    // 0x1519C514: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x1519C518: mul.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x1519C51C: sub.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x1519C520: bgtz        $v1, L_1519C4F8
    if (SIGNED(ctx->r3) > 0) {
        // 0x1519C524: swc1        $f18, 0x30($a0)
        MEM_W(0X30, ctx->r4) = ctx->f18.u32l;
            goto L_1519C4F8;
    }
    // 0x1519C524: swc1        $f18, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f18.u32l;
    // 0x1519C528: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
L_1519C52C:
    // 0x1519C52C: lh          $t6, 0x28($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X28);
    // 0x1519C530: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x1519C534: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1519C538: beql        $at, $zero, L_1519C564
    if (ctx->r1 == 0) {
        // 0x1519C53C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1519C564;
    }
    goto skip_1;
    // 0x1519C53C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x1519C540: lh          $t7, 0x2A($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2A);
    // 0x1519C544: lbu         $t8, 0x5C($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X5C);
    // 0x1519C548: multu       $v1, $t7
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519C54C: mflo        $a1
    ctx->r5 = lo;
    // 0x1519C550: slt         $at, $a1, $t8
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x1519C554: beql        $at, $zero, L_1519C564
    if (ctx->r1 == 0) {
        // 0x1519C558: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1519C564;
    }
    goto skip_2;
    // 0x1519C558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x1519C55C: sb          $a1, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r5;
    // 0x1519C560: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519C564:
    // 0x1519C564: jr          $ra
    // 0x1519C568: nop

    return;
    return;
    // 0x1519C568: nop

;}
RECOMP_FUNC void func_1506E6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E6BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506E6C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E6C4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506E6C8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506E6CC: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506E6D0: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506E6D4: jal         0x1506E46C
    // 0x1506E6D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506E6D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x1506E6DC: beq         $v0, $zero, L_1506E6EC
    if (ctx->r2 == 0) {
        // 0x1506E6E0: addiu       $a0, $zero, 0x12C
        ctx->r4 = ADD32(0, 0X12C);
            goto L_1506E6EC;
    }
    // 0x1506E6E0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1506E6E4: jal         0x1506BA4C
    // 0x1506E6E8: addiu       $a1, $zero, 0xBB8
    ctx->r5 = ADD32(0, 0XBB8);
    func_1506BA4C(rdram, ctx);
        goto after_1;
    // 0x1506E6E8: addiu       $a1, $zero, 0xBB8
    ctx->r5 = ADD32(0, 0XBB8);
    after_1:
L_1506E6EC:
    // 0x1506E6EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506E6F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506E6F4: jr          $ra
    // 0x1506E6F8: nop

    return;
    return;
    // 0x1506E6F8: nop

;}
RECOMP_FUNC void func_150156F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150156F4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x150156F8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150156FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15015700: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15015704: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15015708: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x1501570C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x15015710: bnel        $v0, $at, L_15015734
    if (ctx->r2 != ctx->r1) {
        // 0x15015714: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_15015734;
    }
    goto skip_0;
    // 0x15015714: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    skip_0:
    // 0x15015718: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x1501571C: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x15015720: beql        $at, $zero, L_1501577C
    if (ctx->r1 == 0) {
        // 0x15015724: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_1501577C;
    }
    goto skip_1;
    // 0x15015724: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    skip_1:
    // 0x15015728: b           L_150158F8
    // 0x1501572C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150158F8;
    // 0x1501572C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15015730: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
L_15015734:
    // 0x15015734: bnel        $v0, $at, L_15015758
    if (ctx->r2 != ctx->r1) {
        // 0x15015738: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_15015758;
    }
    goto skip_2;
    // 0x15015738: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    skip_2:
    // 0x1501573C: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x15015740: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x15015744: beql        $at, $zero, L_1501577C
    if (ctx->r1 == 0) {
        // 0x15015748: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_1501577C;
    }
    goto skip_3;
    // 0x15015748: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    skip_3:
    // 0x1501574C: b           L_150158F8
    // 0x15015750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150158F8;
    // 0x15015750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15015754: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
L_15015758:
    // 0x15015758: bnel        $v0, $at, L_1501577C
    if (ctx->r2 != ctx->r1) {
        // 0x1501575C: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_1501577C;
    }
    goto skip_4;
    // 0x1501575C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    skip_4:
    // 0x15015760: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x15015764: sltiu       $at, $t8, 0x2
    ctx->r1 = ctx->r24 < 0X2 ? 1 : 0;
    // 0x15015768: beql        $at, $zero, L_1501577C
    if (ctx->r1 == 0) {
        // 0x1501576C: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_1501577C;
    }
    goto skip_5;
    // 0x1501576C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    skip_5:
    // 0x15015770: b           L_150158F8
    // 0x15015774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150158F8;
    // 0x15015774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15015778: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
L_1501577C:
    // 0x1501577C: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x15015780: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x15015784: jal         0x150A8050
    // 0x15015788: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x15015788: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x1501578C: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x15015790: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15015794: addiu       $t3, $sp, 0xA4
    ctx->r11 = ADD32(ctx->r29, 0XA4);
    // 0x15015798: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1501579C: addiu       $t4, $sp, 0xA8
    ctx->r12 = ADD32(ctx->r29, 0XA8);
    // 0x150157A0: addiu       $t5, $sp, 0xAC
    ctx->r13 = ADD32(ctx->r29, 0XAC);
    // 0x150157A4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150157A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x150157AC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150157B0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x150157B4: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x150157B8: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    // 0x150157BC: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x150157C0: nop

    // 0x150157C4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150157C8: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x150157CC: lh          $t1, 0x4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4);
    // 0x150157D0: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x150157D4: nop

    // 0x150157D8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150157DC: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x150157E0: lh          $t2, 0x8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8);
    // 0x150157E4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150157E8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150157EC: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x150157F0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150157F4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150157F8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x150157FC: jal         0x150A7960
    // 0x15015800: nop

    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15015800: nop

    after_1:
    // 0x15015804: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x15015808: addiu       $v0, $sp, 0x98
    ctx->r2 = ADD32(ctx->r29, 0X98);
    // 0x1501580C: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x15015810: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15015814: addiu       $t0, $sp, 0x38
    ctx->r8 = ADD32(ctx->r29, 0X38);
    // 0x15015818: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x1501581C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15015820: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x15015824: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x15015828: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x1501582C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15015830: nop

    // 0x15015834: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15015838: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    // 0x1501583C: lh          $t8, 0x4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4);
    // 0x15015840: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x15015844: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15015848: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x1501584C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15015850: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    // 0x15015854: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x15015858: bc1f        L_15015864
    if (!c1cs) {
        // 0x1501585C: sb          $t9, 0x34($sp)
        MEM_B(0X34, ctx->r29) = ctx->r25;
            goto L_15015864;
    }
    // 0x1501585C: sb          $t9, 0x34($sp)
    MEM_B(0X34, ctx->r29) = ctx->r25;
    // 0x15015860: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_15015864:
    // 0x15015864: multu       $t1, $v1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15015868: addiu       $t7, $sp, 0x44
    ctx->r15 = ADD32(ctx->r29, 0X44);
    // 0x1501586C: or          $t8, $zero, $zero
    ctx->r24 = 0 | 0;
    // 0x15015870: mflo        $t2
    ctx->r10 = lo;
    // 0x15015874: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x15015878: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x1501587C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x15015880: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x15015884: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x15015888: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x1501588C: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x15015890: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x15015894: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x15015898: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x1501589C: nop

    // 0x150158A0: bc1f        L_150158AC
    if (!c1cs) {
        // 0x150158A4: nop
    
            goto L_150158AC;
    }
    // 0x150158A4: nop

    // 0x150158A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_150158AC:
    // 0x150158AC: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150158B0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x150158B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150158B8: mflo        $t9
    ctx->r25 = lo;
    // 0x150158BC: addu        $t1, $v0, $t9
    ctx->r9 = ADD32(ctx->r2, ctx->r25);
    // 0x150158C0: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x150158C4: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150158C8: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x150158CC: sw          $t4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r12;
    // 0x150158D0: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x150158D4: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150158D8: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x150158DC: lwc1        $f18, 0xA8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150158E0: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x150158E4: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150158E8: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x150158EC: jal         0x151ACBD4
    // 0x150158F0: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    func_151ACBD4(rdram, ctx);
        goto after_2;
    // 0x150158F0: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x150158F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150158F8:
    // 0x150158F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150158FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15015900: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x15015904: jr          $ra
    // 0x15015908: nop

    return;
    return;
    // 0x15015908: nop

    // 0x1501590C: nop

;}
RECOMP_FUNC void func_1507C370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507C370: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1507C374: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1507C378: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1507C37C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1507C380: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1507C384: lb          $v1, -0x274($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X274);
    // 0x1507C388: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x1507C38C: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x1507C390: blez        $v1, L_1507C3CC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1507C394: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_1507C3CC;
    }
    // 0x1507C394: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_1507C398:
    // 0x1507C398: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x1507C39C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507C3A0: beq         $v0, $zero, L_1507C3BC
    if (ctx->r2 == 0) {
        // 0x1507C3A4: addiu       $a1, $v0, 0x114
        ctx->r5 = ADD32(ctx->r2, 0X114);
            goto L_1507C3BC;
    }
    // 0x1507C3A4: addiu       $a1, $v0, 0x114
    ctx->r5 = ADD32(ctx->r2, 0X114);
    // 0x1507C3A8: addiu       $a2, $v0, 0x116
    ctx->r6 = ADD32(ctx->r2, 0X116);
    // 0x1507C3AC: jal         0x1507C3E0
    // 0x1507C3B0: addiu       $a3, $v0, 0x118
    ctx->r7 = ADD32(ctx->r2, 0X118);
    func_1507C3E0(rdram, ctx);
        goto after_0;
    // 0x1507C3B0: addiu       $a3, $v0, 0x118
    ctx->r7 = ADD32(ctx->r2, 0X118);
    after_0:
    // 0x1507C3B4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1507C3B8: lb          $v1, -0x274($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X274);
L_1507C3BC:
    // 0x1507C3BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1507C3C0: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1507C3C4: bne         $at, $zero, L_1507C398
    if (ctx->r1 != 0) {
        // 0x1507C3C8: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_1507C398;
    }
    // 0x1507C3C8: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
L_1507C3CC:
    // 0x1507C3CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1507C3D0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1507C3D4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1507C3D8: jr          $ra
    // 0x1507C3DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1507C3DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_15040968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040968: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1504096C: jr          $ra
    // 0x15040970: nop

    return;
    return;
    // 0x15040970: nop

;}
RECOMP_FUNC void func_150A81A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A81A0: addiu       $a3, $a1, 0x40
    ctx->r7 = ADD32(ctx->r5, 0X40);
L_150A81A4:
    // 0x150A81A4: ld          $a2, 0x0($a1)
    ctx->r6 = LD(ctx->r5, 0X0);
    // 0x150A81A8: sd          $a2, 0x0($a0)
    SD(ctx->r6, 0X0, ctx->r4);
    // 0x150A81AC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150A81B0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x150A81B4: bne         $a1, $a3, L_150A81A4
    if (ctx->r5 != ctx->r7) {
        // 0x150A81B8: nop
    
            goto L_150A81A4;
    }
    // 0x150A81B8: nop

    // 0x150A81BC: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x150A81C0: lw          $a2, -0x7ABC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X7ABC);
    // 0x150A81C4: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x150A81C8: jr          $ra
    // 0x150A81CC: nop

    return;
    return;
    // 0x150A81CC: nop

;}
RECOMP_FUNC void func_1506F8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506F8C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506F8C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506F8C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506F8CC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506F8D0: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506F8D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1506F8D8: jal         0x1519EF70
    // 0x1506F8DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1519EF70(rdram, ctx);
        goto after_0;
    // 0x1506F8DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x1506F8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506F8E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506F8E8: jr          $ra
    // 0x1506F8EC: nop

    return;
    return;
    // 0x1506F8EC: nop

;}
RECOMP_FUNC void func_1502CCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502CCFC: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x1502CD00: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x1502CD04: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x1502CD08: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x1502CD0C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x1502CD10: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1502CD14: lw          $s1, 0x168($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X168);
    // 0x1502CD18: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x1502CD1C: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x1502CD20: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x1502CD24: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x1502CD28: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x1502CD2C: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x1502CD30: sw          $a2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r6;
    // 0x1502CD34: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x1502CD38: subu        $t6, $t6, $s2
    ctx->r14 = SUB32(ctx->r14, ctx->r18);
    // 0x1502CD3C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502CD40: addu        $t6, $t6, $s2
    ctx->r14 = ADD32(ctx->r14, ctx->r18);
    // 0x1502CD44: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502CD48: subu        $t6, $t6, $s2
    ctx->r14 = SUB32(ctx->r14, ctx->r18);
    // 0x1502CD4C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502CD50: subu        $t6, $t6, $s2
    ctx->r14 = SUB32(ctx->r14, ctx->r18);
    // 0x1502CD54: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1502CD58: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1502CD5C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502CD60: addu        $s5, $t6, $t7
    ctx->r21 = ADD32(ctx->r14, ctx->r15);
    // 0x1502CD64: lbu         $t8, 0x4($s5)
    ctx->r24 = MEM_BU(ctx->r21, 0X4);
    // 0x1502CD68: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1502CD6C: beq         $s1, $at, L_1502CD84
    if (ctx->r17 == ctx->r1) {
        // 0x1502CD70: sw          $t8, 0x140($sp)
        MEM_W(0X140, ctx->r29) = ctx->r24;
            goto L_1502CD84;
    }
    // 0x1502CD70: sw          $t8, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r24;
    // 0x1502CD74: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1502CD78: beq         $s1, $at, L_1502CD84
    if (ctx->r17 == ctx->r1) {
        // 0x1502CD7C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_1502CD84;
    }
    // 0x1502CD7C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1502CD80: bne         $s1, $at, L_1502CD9C
    if (ctx->r17 != ctx->r1) {
        // 0x1502CD84: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_1502CD9C;
    }
L_1502CD84:
    // 0x1502CD84: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1502CD88: jal         0x150849CC
    // 0x1502CD8C: addiu       $a1, $sp, 0x144
    ctx->r5 = ADD32(ctx->r29, 0X144);
    func_150849CC(rdram, ctx);
        goto after_0;
    // 0x1502CD8C: addiu       $a1, $sp, 0x144
    ctx->r5 = ADD32(ctx->r29, 0X144);
    after_0:
    // 0x1502CD90: sw          $v0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r2;
    // 0x1502CD94: b           L_1502CDA4
    // 0x1502CD98: lw          $s1, 0x168($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X168);
        goto L_1502CDA4;
    // 0x1502CD98: lw          $s1, 0x168($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X168);
L_1502CD9C:
    // 0x1502CD9C: lbu         $t9, 0x1C8($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X1C8);
    // 0x1502CDA0: sw          $t9, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r25;
L_1502CDA4:
    // 0x1502CDA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1502CDA8: bne         $s1, $at, L_1502CDB8
    if (ctx->r17 != ctx->r1) {
        // 0x1502CDAC: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_1502CDB8;
    }
    // 0x1502CDAC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1502CDB0: b           L_1502CDBC
    // 0x1502CDB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_1502CDBC;
    // 0x1502CDB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_1502CDB8:
    // 0x1502CDB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_1502CDBC:
    // 0x1502CDBC: lw          $a1, 0x140($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X140);
    // 0x1502CDC0: jal         0x1503DA9C
    // 0x1502CDC4: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    func_1503DA9C(rdram, ctx);
        goto after_1;
    // 0x1502CDC4: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    after_1:
    // 0x1502CDC8: beq         $v0, $zero, L_1502CDD8
    if (ctx->r2 == 0) {
        // 0x1502CDCC: lui         $s4, 0x800C
        ctx->r20 = S32(0X800C << 16);
            goto L_1502CDD8;
    }
    // 0x1502CDCC: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x1502CDD0: b           L_1502D524
    // 0x1502CDD4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1502D524;
    // 0x1502CDD4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1502CDD8:
    // 0x1502CDD8: lw          $t6, 0x144($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X144);
    // 0x1502CDDC: addiu       $s4, $s4, -0x1640
    ctx->r20 = ADD32(ctx->r20, -0X1640);
    // 0x1502CDE0: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x1502CDE4: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x1502CDE8: addu        $t8, $s5, $t7
    ctx->r24 = ADD32(ctx->r21, ctx->r15);
    // 0x1502CDEC: sll         $s1, $v0, 2
    ctx->r17 = S32(ctx->r2 << 2);
    // 0x1502CDF0: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x1502CDF4: lw          $t6, 0x28C($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X28C);
    // 0x1502CDF8: lw          $t7, 0x16C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X16C);
    // 0x1502CDFC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x1502CE00: bne         $t6, $zero, L_1502CE10
    if (ctx->r14 != 0) {
        // 0x1502CE04: nop
    
            goto L_1502CE10;
    }
    // 0x1502CE04: nop

    // 0x1502CE08: b           L_1502D524
    // 0x1502CE0C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1502D524;
    // 0x1502CE0C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1502CE10:
    // 0x1502CE10: beq         $t7, $zero, L_1502CE38
    if (ctx->r15 == 0) {
        // 0x1502CE14: lui         $s6, 0xDE00
        ctx->r22 = S32(0XDE00 << 16);
            goto L_1502CE38;
    }
    // 0x1502CE14: lui         $s6, 0xDE00
    ctx->r22 = S32(0XDE00 << 16);
    // 0x1502CE18: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502CE1C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x1502CE20: addiu       $t8, $t8, 0x4160
    ctx->r24 = ADD32(ctx->r24, 0X4160);
    // 0x1502CE24: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1502CE28: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x1502CE2C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502CE30: b           L_1502CE50
    // 0x1502CE34: nop

        goto L_1502CE50;
    // 0x1502CE34: nop

L_1502CE38:
    // 0x1502CE38: lui         $ra, 0xE700
    ctx->r31 = S32(0XE700 << 16);
    // 0x1502CE3C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502CE40: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x1502CE44: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1502CE48: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502CE4C: lui         $s6, 0xDE00
    ctx->r22 = S32(0XDE00 << 16);
L_1502CE50:
    // 0x1502CE50: jal         0x1502F01C
    // 0x1502CE54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1502F01C(rdram, ctx);
        goto after_2;
    // 0x1502CE54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x1502CE58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1502CE5C: jal         0x1502F9FC
    // 0x1502CE60: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_1502F9FC(rdram, ctx);
        goto after_3;
    // 0x1502CE60: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x1502CE64: lui         $t9, 0xDB06
    ctx->r25 = S32(0XDB06 << 16);
    // 0x1502CE68: ori         $t9, $t9, 0xC
    ctx->r25 = ctx->r25 | 0XC;
    // 0x1502CE6C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1502CE70: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x1502CE74: lui         $t6, 0xDB06
    ctx->r14 = S32(0XDB06 << 16);
    // 0x1502CE78: ori         $t6, $t6, 0x4
    ctx->r14 = ctx->r14 | 0X4;
    // 0x1502CE7C: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    // 0x1502CE80: lw          $t7, 0x144($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X144);
    // 0x1502CE84: addiu       $s0, $v0, 0x10
    ctx->r16 = ADD32(ctx->r2, 0X10);
    // 0x1502CE88: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1502CE8C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x1502CE90: addu        $t9, $s5, $t8
    ctx->r25 = ADD32(ctx->r21, ctx->r24);
    // 0x1502CE94: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x1502CE98: lw          $t7, 0x28C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X28C);
    // 0x1502CE9C: addiu       $t6, $sp, 0x124
    ctx->r14 = ADD32(ctx->r29, 0X124);
    // 0x1502CEA0: addiu       $t9, $sp, 0x128
    ctx->r25 = ADD32(ctx->r29, 0X128);
    // 0x1502CEA4: addiu       $t8, $t7, -0x38
    ctx->r24 = ADD32(ctx->r15, -0X38);
    // 0x1502CEA8: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
    // 0x1502CEAC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1502CEB0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1502CEB4: addiu       $t6, $sp, 0x114
    ctx->r14 = ADD32(ctx->r29, 0X114);
    // 0x1502CEB8: addiu       $t9, $sp, 0x118
    ctx->r25 = ADD32(ctx->r29, 0X118);
    // 0x1502CEBC: addiu       $t7, $sp, 0x120
    ctx->r15 = ADD32(ctx->r29, 0X120);
    // 0x1502CEC0: addiu       $t8, $sp, 0x11C
    ctx->r24 = ADD32(ctx->r29, 0X11C);
    // 0x1502CEC4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1502CEC8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1502CECC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x1502CED0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1502CED4: addiu       $t6, $sp, 0x104
    ctx->r14 = ADD32(ctx->r29, 0X104);
    // 0x1502CED8: addiu       $t9, $sp, 0x108
    ctx->r25 = ADD32(ctx->r29, 0X108);
    // 0x1502CEDC: addiu       $t7, $sp, 0x110
    ctx->r15 = ADD32(ctx->r29, 0X110);
    // 0x1502CEE0: addiu       $t8, $sp, 0x10C
    ctx->r24 = ADD32(ctx->r29, 0X10C);
    // 0x1502CEE4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x1502CEE8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x1502CEEC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x1502CEF0: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x1502CEF4: lw          $a1, 0x158($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X158);
    // 0x1502CEF8: lw          $a2, 0x160($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X160);
    // 0x1502CEFC: jal         0x1502CC34
    // 0x1502CF00: lw          $a3, 0x164($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X164);
    func_1502CC34(rdram, ctx);
        goto after_4;
    // 0x1502CF00: lw          $a3, 0x164($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X164);
    after_4:
    // 0x1502CF04: lw          $a2, 0x168($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X168);
    // 0x1502CF08: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1502CF0C: lui         $ra, 0xE700
    ctx->r31 = S32(0XE700 << 16);
    // 0x1502CF10: bne         $a2, $at, L_1502CF3C
    if (ctx->r6 != ctx->r1) {
        // 0x1502CF14: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1502CF3C;
    }
    // 0x1502CF14: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502CF18: lui         $t7, 0xDB06
    ctx->r15 = S32(0XDB06 << 16);
    // 0x1502CF1C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x1502CF20: addiu       $t8, $t8, 0x32C0
    ctx->r24 = ADD32(ctx->r24, 0X32C0);
    // 0x1502CF24: ori         $t7, $t7, 0x20
    ctx->r15 = ctx->r15 | 0X20;
    // 0x1502CF28: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1502CF2C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1502CF30: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502CF34: b           L_1502CFC4
    // 0x1502CF38: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1502CFC4;
    // 0x1502CF38: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1502CF3C:
    // 0x1502CF3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1502CF40: bne         $a2, $at, L_1502CF70
    if (ctx->r6 != ctx->r1) {
        // 0x1502CF44: lw          $t7, 0x160($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X160);
            goto L_1502CF70;
    }
    // 0x1502CF44: lw          $t7, 0x160($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X160);
    // 0x1502CF48: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502CF4C: lui         $t9, 0xDB06
    ctx->r25 = S32(0XDB06 << 16);
    // 0x1502CF50: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x1502CF54: addiu       $t6, $t6, 0x32C0
    ctx->r14 = ADD32(ctx->r14, 0X32C0);
    // 0x1502CF58: ori         $t9, $t9, 0x20
    ctx->r25 = ctx->r25 | 0X20;
    // 0x1502CF5C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1502CF60: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1502CF64: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502CF68: b           L_1502CFC4
    // 0x1502CF6C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1502CFC4;
    // 0x1502CF6C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1502CF70:
    // 0x1502CF70: slti        $at, $t7, 0xFF
    ctx->r1 = SIGNED(ctx->r15) < 0XFF ? 1 : 0;
    // 0x1502CF74: beq         $at, $zero, L_1502CFA4
    if (ctx->r1 == 0) {
        // 0x1502CF78: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1502CFA4;
    }
    // 0x1502CF78: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502CF7C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502CF80: lui         $t8, 0xDB06
    ctx->r24 = S32(0XDB06 << 16);
    // 0x1502CF84: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x1502CF88: addiu       $t9, $t9, 0x2FC0
    ctx->r25 = ADD32(ctx->r25, 0X2FC0);
    // 0x1502CF8C: ori         $t8, $t8, 0x20
    ctx->r24 = ctx->r24 | 0X20;
    // 0x1502CF90: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1502CF94: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x1502CF98: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502CF9C: b           L_1502CFC4
    // 0x1502CFA0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1502CFC4;
    // 0x1502CFA0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1502CFA4:
    // 0x1502CFA4: lui         $t6, 0xDB06
    ctx->r14 = S32(0XDB06 << 16);
    // 0x1502CFA8: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1502CFAC: addiu       $t7, $t7, 0x3140
    ctx->r15 = ADD32(ctx->r15, 0X3140);
    // 0x1502CFB0: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x1502CFB4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1502CFB8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x1502CFBC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502CFC0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1502CFC4:
    // 0x1502CFC4: lui         $t8, 0xD9FF
    ctx->r24 = S32(0XD9FF << 16);
    // 0x1502CFC8: ori         $t8, $t8, 0xF9FF
    ctx->r24 = ctx->r24 | 0XF9FF;
    // 0x1502CFCC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1502CFD0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1502CFD4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502CFD8: bne         $a2, $zero, L_1502D004
    if (ctx->r6 != 0) {
        // 0x1502CFDC: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_1502D004;
    }
    // 0x1502CFDC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x1502CFE0: lui         $a1, 0xD9FF
    ctx->r5 = S32(0XD9FF << 16);
    // 0x1502CFE4: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x1502CFE8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502CFEC: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x1502CFF0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x1502CFF4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x1502CFF8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502CFFC: b           L_1502D020
    // 0x1502D000: nop

        goto L_1502D020;
    // 0x1502D000: nop

L_1502D004:
    // 0x1502D004: lui         $a1, 0xD9FF
    ctx->r5 = S32(0XD9FF << 16);
    // 0x1502D008: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x1502D00C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D010: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x1502D014: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1502D018: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x1502D01C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_1502D020:
    // 0x1502D020: lw          $t7, 0xDF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XDF0);
    // 0x1502D024: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x1502D028: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1502D02C: lh          $t8, 0x3E($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X3E);
    // 0x1502D030: lui         $t7, 0xD9BF
    ctx->r15 = S32(0XD9BF << 16);
    // 0x1502D034: lui         $t6, 0x2
    ctx->r14 = S32(0X2 << 16);
    // 0x1502D038: sw          $t8, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r24;
    // 0x1502D03C: lbu         $v0, 0x66($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X66);
    // 0x1502D040: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x1502D044: andi        $t9, $v0, 0xC
    ctx->r25 = ctx->r2 & 0XC;
    // 0x1502D048: bne         $t9, $at, L_1502D078
    if (ctx->r25 != ctx->r1) {
        // 0x1502D04C: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_1502D078;
    }
    // 0x1502D04C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x1502D050: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D054: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x1502D058: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1502D05C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D060: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1502D064: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x1502D068: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1502D06C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D070: b           L_1502D0E8
    // 0x1502D074: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
        goto L_1502D0E8;
    // 0x1502D074: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_1502D078:
    // 0x1502D078: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x1502D07C: beq         $v0, $at, L_1502D0A4
    if (ctx->r2 == ctx->r1) {
        // 0x1502D080: lui         $t9, 0x800E
        ctx->r25 = S32(0X800E << 16);
            goto L_1502D0A4;
    }
    // 0x1502D080: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1502D084: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D088: lui         $t8, 0xD9BD
    ctx->r24 = S32(0XD9BD << 16);
    // 0x1502D08C: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x1502D090: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1502D094: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1502D098: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D09C: b           L_1502D0E4
    // 0x1502D0A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_1502D0E4;
    // 0x1502D0A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1502D0A4:
    // 0x1502D0A4: lw          $t9, -0x3284($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3284);
    // 0x1502D0A8: lui         $t7, 0xD9BD
    ctx->r15 = S32(0XD9BD << 16);
    // 0x1502D0AC: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x1502D0B0: beq         $t9, $zero, L_1502D0D4
    if (ctx->r25 == 0) {
        // 0x1502D0B4: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1502D0D4;
    }
    // 0x1502D0B4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D0B8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D0BC: lui         $t6, 0x42
    ctx->r14 = S32(0X42 << 16);
    // 0x1502D0C0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1502D0C4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x1502D0C8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D0CC: b           L_1502D0E8
    // 0x1502D0D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
        goto L_1502D0E8;
    // 0x1502D0D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_1502D0D4:
    // 0x1502D0D4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D0D8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1502D0DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1502D0E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1502D0E4:
    // 0x1502D0E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_1502D0E8:
    // 0x1502D0E8: bne         $a2, $at, L_1502D108
    if (ctx->r6 != ctx->r1) {
        // 0x1502D0EC: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1502D108;
    }
    // 0x1502D0EC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D0F0: lui         $t8, 0xD9BD
    ctx->r24 = S32(0XD9BD << 16);
    // 0x1502D0F4: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x1502D0F8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1502D0FC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D100: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1502D104: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1502D108:
    // 0x1502D108: beq         $a0, $zero, L_1502D1D4
    if (ctx->r4 == 0) {
        // 0x1502D10C: lui         $t6, 0x800E
        ctx->r14 = S32(0X800E << 16);
            goto L_1502D1D4;
    }
    // 0x1502D10C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1502D110: lbu         $t9, 0x2FE($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X2FE);
    // 0x1502D114: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x1502D118: bne         $t9, $zero, L_1502D128
    if (ctx->r25 != 0) {
        // 0x1502D11C: nop
    
            goto L_1502D128;
    }
    // 0x1502D11C: nop

    // 0x1502D120: b           L_1502D128
    // 0x1502D124: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_1502D128;
    // 0x1502D124: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_1502D128:
    // 0x1502D128: lbu         $t6, -0x6700($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X6700);
    // 0x1502D12C: ori         $t7, $v0, 0x8
    ctx->r15 = ctx->r2 | 0X8;
    // 0x1502D130: beql        $t6, $zero, L_1502D140
    if (ctx->r14 == 0) {
        // 0x1502D134: lwc1        $f16, 0x1C($s5)
        ctx->f16.u32l = MEM_W(ctx->r21, 0X1C);
            goto L_1502D140;
    }
    goto skip_0;
    // 0x1502D134: lwc1        $f16, 0x1C($s5)
    ctx->f16.u32l = MEM_W(ctx->r21, 0X1C);
    skip_0:
    // 0x1502D138: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x1502D13C: lwc1        $f16, 0x1C($s5)
    ctx->f16.u32l = MEM_W(ctx->r21, 0X1C);
L_1502D140:
    // 0x1502D140: lwc1        $f4, 0x14($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X14);
    // 0x1502D144: lwc1        $f8, 0x18($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X18);
    // 0x1502D148: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1502D14C: lw          $a1, 0x158($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X158);
    // 0x1502D150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502D154: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1502D158: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x1502D15C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x1502D160: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1502D164: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1502D168: lw          $t6, 0x184($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X184);
    // 0x1502D16C: addu        $t9, $s5, $t7
    ctx->r25 = ADD32(ctx->r21, ctx->r15);
    // 0x1502D170: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x1502D174: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1502D178: lw          $t6, 0x304($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X304);
    // 0x1502D17C: lbu         $t9, 0x0($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X0);
    // 0x1502D180: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x1502D184: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x1502D188: lbu         $t8, 0x301($s5)
    ctx->r24 = MEM_BU(ctx->r21, 0X301);
    // 0x1502D18C: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x1502D190: addiu       $t9, $s5, 0x302
    ctx->r25 = ADD32(ctx->r21, 0X302);
    // 0x1502D194: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1502D198: lw          $t7, 0x314($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X314);
    // 0x1502D19C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x1502D1A0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x1502D1A4: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x1502D1A8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x1502D1AC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1502D1B0: addiu       $t8, $t8, -0x61D8
    ctx->r24 = ADD32(ctx->r24, -0X61D8);
    // 0x1502D1B4: addiu       $t6, $s5, 0x1DD
    ctx->r14 = ADD32(ctx->r21, 0X1DD);
    // 0x1502D1B8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1502D1BC: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x1502D1C0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x1502D1C4: jal         0x1515D914
    // 0x1502D1C8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    func_1515D914(rdram, ctx);
        goto after_5;
    // 0x1502D1C8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    after_5:
    // 0x1502D1CC: lui         $ra, 0xE700
    ctx->r31 = S32(0XE700 << 16);
    // 0x1502D1D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1502D1D4:
    // 0x1502D1D4: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x1502D1D8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1502D1DC: addiu       $t6, $t6, 0x4778
    ctx->r14 = ADD32(ctx->r14, 0X4778);
    // 0x1502D1E0: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x1502D1E4: addu        $t0, $t7, $t6
    ctx->r8 = ADD32(ctx->r15, ctx->r14);
    // 0x1502D1E8: lhu         $a0, 0x0($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X0);
    // 0x1502D1EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1502D1F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1502D1F4: blez        $a0, L_1502D4AC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x1502D1F8: addiu       $t5, $zero, 0xFF
        ctx->r13 = ADD32(0, 0XFF);
            goto L_1502D4AC;
    }
    // 0x1502D1F8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1502D1FC: lui         $t3, 0xFA00
    ctx->r11 = S32(0XFA00 << 16);
    // 0x1502D200: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1502D204: addiu       $t2, $t2, -0x2D1C
    ctx->r10 = ADD32(ctx->r10, -0X2D1C);
    // 0x1502D208: ori         $t3, $t3, 0xF200
    ctx->r11 = ctx->r11 | 0XF200;
    // 0x1502D20C: lui         $t4, 0xFB00
    ctx->r12 = S32(0XFB00 << 16);
    // 0x1502D210: lui         $t1, 0xF800
    ctx->r9 = S32(0XF800 << 16);
    // 0x1502D214: lw          $t9, 0x94($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X94);
L_1502D218:
    // 0x1502D218: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1502D21C: sllv        $v0, $t8, $s1
    ctx->r2 = S32(ctx->r24 << (ctx->r17 & 31));
    // 0x1502D220: and         $t7, $t9, $v0
    ctx->r15 = ctx->r25 & ctx->r2;
    // 0x1502D224: bne         $t7, $zero, L_1502D49C
    if (ctx->r15 != 0) {
        // 0x1502D228: lw          $a2, 0x140($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X140);
            goto L_1502D49C;
    }
    // 0x1502D228: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x1502D22C: lw          $t8, 0x98($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X98);
    // 0x1502D230: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x1502D234: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1502D238: and         $t9, $t8, $v0
    ctx->r25 = ctx->r24 & ctx->r2;
    // 0x1502D23C: bne         $t9, $zero, L_1502D374
    if (ctx->r25 != 0) {
        // 0x1502D240: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1502D374;
    }
    // 0x1502D240: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1502D244: beq         $a3, $zero, L_1502D3BC
    if (ctx->r7 == 0) {
        // 0x1502D248: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1502D3BC;
    }
    // 0x1502D248: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D24C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D250: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x1502D254: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1502D258: lw          $a0, 0x160($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X160);
    // 0x1502D25C: lw          $t6, 0x130($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X130);
    // 0x1502D260: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1502D264: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x1502D268: bne         $t6, $zero, L_1502D2BC
    if (ctx->r14 != 0) {
        // 0x1502D26C: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_1502D2BC;
    }
    // 0x1502D26C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x1502D270: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D274: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x1502D278: lw          $t6, 0x10C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10C);
    // 0x1502D27C: lw          $t9, 0x110($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X110);
    // 0x1502D280: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D284: andi        $t8, $t6, 0xFF
    ctx->r24 = ctx->r14 & 0XFF;
    // 0x1502D288: sll         $t7, $t9, 24
    ctx->r15 = S32(ctx->r25 << 24);
    // 0x1502D28C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x1502D290: lw          $t8, 0x108($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X108);
    // 0x1502D294: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x1502D298: andi        $t7, $t8, 0xFF
    ctx->r15 = ctx->r24 & 0XFF;
    // 0x1502D29C: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x1502D2A0: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x1502D2A4: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x1502D2A8: andi        $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 & 0XFF;
    // 0x1502D2AC: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x1502D2B0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x1502D2B4: b           L_1502D2FC
    // 0x1502D2B8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1502D2FC;
    // 0x1502D2B8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1502D2BC:
    // 0x1502D2BC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D2C0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x1502D2C4: lbu         $t8, 0x2($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X2);
    // 0x1502D2C8: lbu         $t7, 0x0($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X0);
    // 0x1502D2CC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D2D0: sll         $t6, $t8, 8
    ctx->r14 = S32(ctx->r24 << 8);
    // 0x1502D2D4: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x1502D2D8: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x1502D2DC: lbu         $t6, 0x1($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X1);
    // 0x1502D2E0: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x1502D2E4: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x1502D2E8: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x1502D2EC: andi        $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 & 0XFF;
    // 0x1502D2F0: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x1502D2F4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1502D2F8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1502D2FC:
    // 0x1502D2FC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x1502D300: lw          $t8, 0x124($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X124);
    // 0x1502D304: lw          $t7, 0x128($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X128);
    // 0x1502D308: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D30C: andi        $t6, $t8, 0xFF
    ctx->r14 = ctx->r24 & 0XFF;
    // 0x1502D310: sll         $t9, $t7, 24
    ctx->r25 = S32(ctx->r15 << 24);
    // 0x1502D314: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x1502D318: lw          $t6, 0x120($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X120);
    // 0x1502D31C: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x1502D320: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1502D324: andi        $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 & 0XFF;
    // 0x1502D328: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x1502D32C: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x1502D330: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1502D334: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x1502D338: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x1502D33C: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x1502D340: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D344: andi        $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 & 0XFF;
    // 0x1502D348: sll         $t7, $t8, 24
    ctx->r15 = S32(ctx->r24 << 24);
    // 0x1502D34C: sll         $t8, $t9, 16
    ctx->r24 = S32(ctx->r25 << 16);
    // 0x1502D350: lw          $t9, 0x114($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X114);
    // 0x1502D354: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x1502D358: andi        $t7, $t9, 0xFF
    ctx->r15 = ctx->r25 & 0XFF;
    // 0x1502D35C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x1502D360: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x1502D364: or          $t7, $t9, $a0
    ctx->r15 = ctx->r25 | ctx->r4;
    // 0x1502D368: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x1502D36C: b           L_1502D3C0
    // 0x1502D370: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
        goto L_1502D3C0;
    // 0x1502D370: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
L_1502D374:
    // 0x1502D374: beq         $a3, $at, L_1502D3BC
    if (ctx->r7 == ctx->r1) {
        // 0x1502D378: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1502D3BC;
    }
    // 0x1502D378: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D37C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D380: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x1502D384: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1502D388: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1502D38C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x1502D390: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x1502D394: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502D39C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x1502D3A0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x1502D3A4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D3A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1502D3AC: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x1502D3B0: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x1502D3B4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D3B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_1502D3BC:
    // 0x1502D3BC: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
L_1502D3C0:
    // 0x1502D3C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1502D3C4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1502D3C8: bne         $t6, $at, L_1502D418
    if (ctx->r14 != ctx->r1) {
        // 0x1502D3CC: addiu       $a0, $a0, 0x3E98
        ctx->r4 = ADD32(ctx->r4, 0X3E98);
            goto L_1502D418;
    }
    // 0x1502D3CC: addiu       $a0, $a0, 0x3E98
    ctx->r4 = ADD32(ctx->r4, 0X3E98);
    // 0x1502D3D0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1502D3D4: addiu       $t8, $t8, 0x48F0
    ctx->r24 = ADD32(ctx->r24, 0X48F0);
    // 0x1502D3D8: addu        $v1, $a2, $t8
    ctx->r3 = ADD32(ctx->r6, ctx->r24);
    // 0x1502D3DC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1502D3E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D3E4: beq         $t9, $zero, L_1502D410
    if (ctx->r25 == 0) {
        // 0x1502D3E8: nop
    
            goto L_1502D410;
    }
    // 0x1502D3E8: nop

    // 0x1502D3EC: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x1502D3F0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1502D3F4: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x1502D3F8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D3FC: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x1502D400: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1502D404: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x1502D408: b           L_1502D49C
    // 0x1502D40C: lhu         $a0, 0x0($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X0);
        goto L_1502D49C;
    // 0x1502D40C: lhu         $a0, 0x0($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X0);
L_1502D410:
    // 0x1502D410: b           L_1502D49C
    // 0x1502D414: lhu         $a0, 0x0($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X0);
        goto L_1502D49C;
    // 0x1502D414: lhu         $a0, 0x0($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X0);
L_1502D418:
    // 0x1502D418: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1502D41C: addiu       $t7, $t7, 0x4488
    ctx->r15 = ADD32(ctx->r15, 0X4488);
    // 0x1502D420: lui         $s3, 0xC
    ctx->r19 = S32(0XC << 16);
    // 0x1502D424: addiu       $s3, $s3, 0x3E98
    ctx->r19 = ADD32(ctx->r19, 0X3E98);
    // 0x1502D428: addu        $s4, $a2, $t7
    ctx->r20 = ADD32(ctx->r6, ctx->r15);
    // 0x1502D42C: sll         $s2, $s1, 2
    ctx->r18 = S32(ctx->r17 << 2);
    // 0x1502D430: sw          $a3, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r7;
    // 0x1502D434: jal         0x151EFE88
    // 0x1502D438: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    func_151EFE88(rdram, ctx);
        goto after_6;
    // 0x1502D438: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    after_6:
    // 0x1502D43C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1502D440: lui         $t3, 0xFA00
    ctx->r11 = S32(0XFA00 << 16);
    // 0x1502D444: ori         $t3, $t3, 0xF200
    ctx->r11 = ctx->r11 | 0XF200;
    // 0x1502D448: addiu       $t2, $t2, -0x2D1C
    ctx->r10 = ADD32(ctx->r10, -0X2D1C);
    // 0x1502D44C: lw          $a3, 0x13C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X13C);
    // 0x1502D450: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x1502D454: lui         $t1, 0xF800
    ctx->r9 = S32(0XF800 << 16);
    // 0x1502D458: lui         $t4, 0xFB00
    ctx->r12 = S32(0XFB00 << 16);
    // 0x1502D45C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1502D460: lui         $ra, 0xE700
    ctx->r31 = S32(0XE700 << 16);
    // 0x1502D464: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D468: lui         $t6, 0xDA38
    ctx->r14 = S32(0XDA38 << 16);
    // 0x1502D46C: ori         $t6, $t6, 0x3
    ctx->r14 = ctx->r14 | 0X3;
    // 0x1502D470: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1502D474: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x1502D478: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D47C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1502D480: sw          $s6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r22;
    // 0x1502D484: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x1502D488: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D48C: addu        $t9, $t8, $s2
    ctx->r25 = ADD32(ctx->r24, ctx->r18);
    // 0x1502D490: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x1502D494: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x1502D498: lhu         $a0, 0x0($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X0);
L_1502D49C:
    // 0x1502D49C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1502D4A0: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1502D4A4: bnel        $at, $zero, L_1502D218
    if (ctx->r1 != 0) {
        // 0x1502D4A8: lw          $t9, 0x94($s5)
        ctx->r25 = MEM_W(ctx->r21, 0X94);
            goto L_1502D218;
    }
    goto skip_1;
    // 0x1502D4A8: lw          $t9, 0x94($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X94);
    skip_1:
L_1502D4AC:
    // 0x1502D4AC: jal         0x1502FD70
    // 0x1502D4B0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_1502FD70(rdram, ctx);
        goto after_7;
    // 0x1502D4B0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_7:
    // 0x1502D4B4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1502D4B8: sb          $t6, 0x2FE($s5)
    MEM_B(0X2FE, ctx->r21) = ctx->r14;
    // 0x1502D4BC: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x1502D4C0: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x1502D4C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502D4C8: bne         $t8, $zero, L_1502D4DC
    if (ctx->r24 != 0) {
        // 0x1502D4CC: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_1502D4DC;
    }
    // 0x1502D4CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x1502D4D0: jal         0x15030F94
    // 0x1502D4D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15030F94(rdram, ctx);
        goto after_8;
    // 0x1502D4D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x1502D4D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1502D4DC:
    // 0x1502D4DC: lw          $t9, 0x16C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X16C);
    // 0x1502D4E0: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1502D4E4: addiu       $t7, $t7, 0x4190
    ctx->r15 = ADD32(ctx->r15, 0X4190);
    // 0x1502D4E8: beq         $t9, $zero, L_1502D4FC
    if (ctx->r25 == 0) {
        // 0x1502D4EC: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1502D4FC;
    }
    // 0x1502D4EC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D4F0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D4F4: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x1502D4F8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_1502D4FC:
    // 0x1502D4FC: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x1502D500: lui         $t8, 0xD9FF
    ctx->r24 = S32(0XD9FF << 16);
    // 0x1502D504: ori         $t8, $t8, 0xFDFF
    ctx->r24 = ctx->r24 | 0XFDFF;
    // 0x1502D508: bne         $t6, $zero, L_1502D520
    if (ctx->r14 != 0) {
        // 0x1502D50C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1502D520;
    }
    // 0x1502D50C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502D510: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x1502D514: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x1502D518: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502D51C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_1502D520:
    // 0x1502D520: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1502D524:
    // 0x1502D524: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x1502D528: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x1502D52C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x1502D530: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x1502D534: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x1502D538: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x1502D53C: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x1502D540: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x1502D544: jr          $ra
    // 0x1502D548: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    return;
    // 0x1502D548: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void ldiv_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10023060: div         $zero, $a1, $a2
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r6)));
    // 0x10023064: mflo        $v0
    ctx->r2 = lo;
    // 0x10023068: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1002306C: bne         $a2, $zero, L_10023078
    if (ctx->r6 != 0) {
        // 0x10023070: nop
    
            goto L_10023078;
    }
    // 0x10023070: nop

    // 0x10023074: break       7
    do_break(268578932);
L_10023078:
    // 0x10023078: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1002307C: bne         $a2, $at, L_10023090
    if (ctx->r6 != ctx->r1) {
        // 0x10023080: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_10023090;
    }
    // 0x10023080: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x10023084: bne         $a1, $at, L_10023090
    if (ctx->r5 != ctx->r1) {
        // 0x10023088: nop
    
            goto L_10023090;
    }
    // 0x10023088: nop

    // 0x1002308C: break       6
    do_break(268578956);
L_10023090:
    // 0x10023090: multu       $a2, $v0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10023094: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x10023098: addiu       $t7, $sp, 0x0
    ctx->r15 = ADD32(ctx->r29, 0X0);
    // 0x1002309C: mflo        $t6
    ctx->r14 = lo;
    // 0x100230A0: subu        $v1, $a1, $t6
    ctx->r3 = SUB32(ctx->r5, ctx->r14);
    // 0x100230A4: bgez        $v0, L_100230C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x100230A8: sw          $v1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r3;
            goto L_100230C8;
    }
    // 0x100230A8: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x100230AC: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x100230B0: blez        $v1, L_100230C8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x100230B4: sw          $v1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r3;
            goto L_100230C8;
    }
    // 0x100230B4: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x100230B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x100230BC: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x100230C0: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x100230C4: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
L_100230C8:
    // 0x100230C8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x100230CC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x100230D0: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x100230D4: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x100230D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x100230DC: jr          $ra
    // 0x100230E0: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    return;
    return;
    // 0x100230E0: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_150C6410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C6410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C6414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C6418: lw          $v0, 0x58($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X58);
    // 0x150C641C: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x150C6420: jal         0x151346EC
    // 0x150C6424: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    func_151346EC(rdram, ctx);
        goto after_0;
    // 0x150C6424: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    after_0:
    // 0x150C6428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C642C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C6430: jr          $ra
    // 0x150C6434: nop

    return;
    return;
    // 0x150C6434: nop

;}
RECOMP_FUNC void func_150FDCAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FDCAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150FDCB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150FDCB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150FDCB8: jal         0x150FDC2C
    // 0x150FDCBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150FDC2C(rdram, ctx);
        goto after_0;
    // 0x150FDCBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150FDCC0: jal         0x1513CA6C
    // 0x150FDCC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1513CA6C(rdram, ctx);
        goto after_1;
    // 0x150FDCC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150FDCC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150FDCCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150FDCD0: jr          $ra
    // 0x150FDCD4: nop

    return;
    return;
    // 0x150FDCD4: nop

;}
RECOMP_FUNC void func_151635A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151635A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151635AC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151635B0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151635B4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151635B8: addiu       $v0, $v0, -0x4C90
    ctx->r2 = ADD32(ctx->r2, -0X4C90);
    // 0x151635BC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151635C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151635C4: lbu         $t7, 0x25($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X25);
    // 0x151635C8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151635CC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x151635D0: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x151635D4: beql        $t0, $zero, L_151635F8
    if (ctx->r8 == 0) {
        // 0x151635D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151635F8;
    }
    goto skip_0;
    // 0x151635D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151635DC: lbu         $t1, 0x25($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X25);
    // 0x151635E0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151635E4: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x151635E8: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x151635EC: jalr        $t9
    // 0x151635F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151635F0: nop

    after_0:
    // 0x151635F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151635F8:
    // 0x151635F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151635FC: jr          $ra
    // 0x15163600: nop

    return;
    return;
    // 0x15163600: nop

;}
RECOMP_FUNC void func_150F2230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F2230: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150F2234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F2238: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x150F223C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x150F2240: lw          $t6, 0x1D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1D4);
    // 0x150F2244: beql        $t6, $zero, L_150F22C0
    if (ctx->r14 == 0) {
        // 0x150F2248: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150F22C0;
    }
    goto skip_0;
    // 0x150F2248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150F224C: lbu         $t7, 0x74($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X74);
    // 0x150F2250: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x150F2254: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x150F2258: beql        $t8, $at, L_150F22C0
    if (ctx->r24 == ctx->r1) {
        // 0x150F225C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150F22C0;
    }
    goto skip_1;
    // 0x150F225C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150F2260: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150F2264: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x150F2268: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x150F226C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x150F2270: jal         0x150ADA20
    // 0x150F2274: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150F2274: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x150F2278: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x150F227C: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x150F2280: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x150F2284: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x150F2288: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x150F228C: jal         0x15143874
    // 0x150F2290: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_15143874(rdram, ctx);
        goto after_1;
    // 0x150F2290: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x150F2294: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x150F2298: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x150F229C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x150F22A0: lw          $a2, 0x1D4($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X1D4);
    // 0x150F22A4: jal         0x15143134
    // 0x150F22A8: addiu       $a2, $a2, 0x4C0
    ctx->r6 = ADD32(ctx->r6, 0X4C0);
    func_15143134(rdram, ctx);
        goto after_2;
    // 0x150F22A8: addiu       $a2, $a2, 0x4C0
    ctx->r6 = ADD32(ctx->r6, 0X4C0);
    after_2:
    // 0x150F22AC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x150F22B0: lbu         $a1, 0x3F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3F);
    // 0x150F22B4: jal         0x151C329C
    // 0x150F22B8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_151C329C(rdram, ctx);
        goto after_3;
    // 0x150F22B8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x150F22BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150F22C0:
    // 0x150F22C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150F22C4: jr          $ra
    // 0x150F22C8: nop

    return;
    return;
    // 0x150F22C8: nop

;}
RECOMP_FUNC void func_1506D6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506D6B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506D6B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506D6BC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506D6C0: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506D6C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506D6C8: lwc1        $f4, -0x62B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X62B4);
    // 0x1506D6CC: lwc1        $f0, 0x118($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X118);
    // 0x1506D6D0: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x1506D6D4: nop

    // 0x1506D6D8: bc1tl       L_1506D740
    if (c1cs) {
        // 0x1506D6DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1506D740;
    }
    goto skip_0;
    // 0x1506D6DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1506D6E0: lh          $t6, 0x1A6($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X1A6);
    // 0x1506D6E4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506D6E8: addiu       $v1, $v1, 0x1580
    ctx->r3 = ADD32(ctx->r3, 0X1580);
    // 0x1506D6EC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1506D6F0: nop

    // 0x1506D6F4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1506D6F8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x1506D6FC: nop

    // 0x1506D700: bc1tl       L_1506D740
    if (c1cs) {
        // 0x1506D704: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1506D740;
    }
    goto skip_1;
    // 0x1506D704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1506D708: lbu         $t7, 0x1CA($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1CA);
    // 0x1506D70C: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
    // 0x1506D710: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x1506D714: bne         $at, $zero, L_1506D724
    if (ctx->r1 != 0) {
        // 0x1506D718: nop
    
            goto L_1506D724;
    }
    // 0x1506D718: nop

    // 0x1506D71C: b           L_1506D724
    // 0x1506D720: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
        goto L_1506D724;
    // 0x1506D720: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
L_1506D724:
    // 0x1506D724: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x1506D728: sll         $t9, $v0, 24
    ctx->r25 = S32(ctx->r2 << 24);
    // 0x1506D72C: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x1506D730: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x1506D734: jal         0x1506D584
    // 0x1506D738: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    func_1506D584(rdram, ctx);
        goto after_0;
    // 0x1506D738: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    after_0:
    // 0x1506D73C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1506D740:
    // 0x1506D740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506D744: jr          $ra
    // 0x1506D748: nop

    return;
    return;
    // 0x1506D748: nop

;}
RECOMP_FUNC void func_15007360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15007360: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15007364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15007368: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1500736C: lbu         $v0, -0x1D0E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1D0E);
    // 0x15007370: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15007374: lbu         $t8, -0x1D0D($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1D0D);
    // 0x15007378: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1500737C: addiu       $t7, $t6, 0xCC
    ctx->r15 = ADD32(ctx->r14, 0XCC);
    // 0x15007380: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x15007384: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x15007388: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x1500738C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007390: addiu       $a0, $a0, -0x1D0C
    ctx->r4 = ADD32(ctx->r4, -0X1D0C);
    // 0x15007394: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x15007398: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x1500739C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
L_150073A0:
    // 0x150073A0: lbu         $t1, 0x0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X0);
    // 0x150073A4: lbu         $t5, 0x1($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X1);
    // 0x150073A8: andi        $t2, $v1, 0x3
    ctx->r10 = ctx->r3 & 0X3;
    // 0x150073AC: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x150073B0: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x150073B4: sllv        $t3, $t1, $t2
    ctx->r11 = S32(ctx->r9 << (ctx->r10 & 31));
    // 0x150073B8: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x150073BC: sllv        $t8, $t5, $t7
    ctx->r24 = S32(ctx->r13 << (ctx->r15 & 31));
    // 0x150073C0: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x150073C4: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x150073C8: addiu       $t1, $v1, 0x2
    ctx->r9 = ADD32(ctx->r3, 0X2);
    // 0x150073CC: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x150073D0: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x150073D4: addiu       $t5, $v1, 0x3
    ctx->r13 = ADD32(ctx->r3, 0X3);
    // 0x150073D8: andi        $t7, $t5, 0x3
    ctx->r15 = ctx->r13 & 0X3;
    // 0x150073DC: sllv        $t3, $t0, $t2
    ctx->r11 = S32(ctx->r8 << (ctx->r10 & 31));
    // 0x150073E0: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x150073E4: sllv        $t8, $t6, $t7
    ctx->r24 = S32(ctx->r14 << (ctx->r15 & 31));
    // 0x150073E8: addu        $v0, $t4, $t8
    ctx->r2 = ADD32(ctx->r12, ctx->r24);
    // 0x150073EC: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x150073F0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x150073F4: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x150073F8: bne         $v1, $a1, L_150073A0
    if (ctx->r3 != ctx->r5) {
        // 0x150073FC: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_150073A0;
    }
    // 0x150073FC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x15007400: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15007404: addiu       $a2, $a2, -0x1D10
    ctx->r6 = ADD32(ctx->r6, -0X1D10);
    // 0x15007408: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x1500740C: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x15007410: lbu         $t1, -0x53A4($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X53A4);
    // 0x15007414: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007418: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    // 0x1500741C: bne         $t1, $zero, L_15007430
    if (ctx->r9 != 0) {
        // 0x15007420: addiu       $a1, $zero, 0x44
        ctx->r5 = ADD32(0, 0X44);
            goto L_15007430;
    }
    // 0x15007420: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    // 0x15007424: jal         0x151DCEF0
    // 0x15007428: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_151DCEF0(rdram, ctx);
        goto after_0;
    // 0x15007428: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x1500742C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_15007430:
    // 0x15007430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15007434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15007438: jr          $ra
    // 0x1500743C: nop

    return;
    return;
    // 0x1500743C: nop

;}
RECOMP_FUNC void func_151DD710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DD710: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151DD714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151DD718: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x151DD71C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x151DD720: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151DD724: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151DD728: addiu       $v1, $v1, 0xA70
    ctx->r3 = ADD32(ctx->r3, 0XA70);
    // 0x151DD72C: addiu       $v0, $v0, 0xA30
    ctx->r2 = ADD32(ctx->r2, 0XA30);
L_151DD730:
    // 0x151DD730: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x151DD734: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x151DD738: bne         $at, $zero, L_151DD730
    if (ctx->r1 != 0) {
        // 0x151DD73C: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_151DD730;
    }
    // 0x151DD73C: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x151DD740: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151DD744: addiu       $a1, $a1, 0xA30
    ctx->r5 = ADD32(ctx->r5, 0XA30);
    // 0x151DD748: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151DD74C: sw          $t6, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r14;
    // 0x151DD750: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x151DD754: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_151DD758:
    // 0x151DD758: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x151DD75C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x151DD760: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x151DD764: bne         $at, $zero, L_151DD758
    if (ctx->r1 != 0) {
        // 0x151DD768: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_151DD758;
    }
    // 0x151DD768: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x151DD76C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151DD770: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151DD774: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x151DD778: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151DD77C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151DD780: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151DD784: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151DD788: sb          $t7, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r15;
    // 0x151DD78C: sb          $t8, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r24;
    // 0x151DD790: sb          $t9, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r25;
    // 0x151DD794: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x151DD798: sb          $t0, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r8;
    // 0x151DD79C: sb          $t1, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r9;
    // 0x151DD7A0: sb          $t2, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r10;
    // 0x151DD7A4: sb          $t3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r11;
    // 0x151DD7A8: addiu       $t4, $sp, 0x1C
    ctx->r12 = ADD32(ctx->r29, 0X1C);
    // 0x151DD7AC: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151DD7B0: addiu       $t8, $zero, 0xFE
    ctx->r24 = ADD32(0, 0XFE);
    // 0x151DD7B4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x151DD7B8: swl         $at, -0x8($v1)
    do_swl(rdram, -0X8, ctx->r3, ctx->r1);
    // 0x151DD7BC: swr         $at, -0x5($v1)
    do_swr(rdram, -0X5, ctx->r3, ctx->r1);
    // 0x151DD7C0: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x151DD7C4: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x151DD7C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151DD7CC: swl         $t7, -0x4($v1)
    do_swl(rdram, -0X4, ctx->r3, ctx->r15);
    // 0x151DD7D0: jal         0x100257C0
    // 0x151DD7D4: swr         $t7, -0x1($v1)
    do_swr(rdram, -0X1, ctx->r3, ctx->r15);
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_0;
    // 0x151DD7D4: swr         $t7, -0x1($v1)
    do_swr(rdram, -0X1, ctx->r3, ctx->r15);
    after_0:
    // 0x151DD7D8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x151DD7DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DD7E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151DD7E4: jal         0x10023440
    // 0x151DD7E8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x151DD7E8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x151DD7EC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x151DD7F0: addiu       $t9, $zero, 0xFE
    ctx->r25 = ADD32(0, 0XFE);
    // 0x151DD7F4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151DD7F8: beq         $v1, $zero, L_151DD808
    if (ctx->r3 == 0) {
        // 0x151DD7FC: sb          $t9, 0x2A50($at)
        MEM_B(0X2A50, ctx->r1) = ctx->r25;
            goto L_151DD808;
    }
    // 0x151DD7FC: sb          $t9, 0x2A50($at)
    MEM_B(0X2A50, ctx->r1) = ctx->r25;
    // 0x151DD800: b           L_151DD8B0
    // 0x151DD804: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_151DD8B0;
    // 0x151DD804: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151DD808:
    // 0x151DD808: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151DD80C: addiu       $a1, $a1, 0xA30
    ctx->r5 = ADD32(ctx->r5, 0XA30);
    // 0x151DD810: jal         0x100257C0
    // 0x151DD814: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x151DD814: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x151DD818: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x151DD81C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DD820: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151DD824: jal         0x10023440
    // 0x151DD828: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x151DD828: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x151DD82C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x151DD830: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DD834: addiu       $t0, $sp, 0x1C
    ctx->r8 = ADD32(ctx->r29, 0X1C);
    // 0x151DD838: beq         $v1, $zero, L_151DD848
    if (ctx->r3 == 0) {
        // 0x151DD83C: nop
    
            goto L_151DD848;
    }
    // 0x151DD83C: nop

    // 0x151DD840: b           L_151DD8B0
    // 0x151DD844: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_151DD8B0;
    // 0x151DD844: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151DD848:
    // 0x151DD848: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151DD84C: addiu       $v1, $v1, 0xA31
    ctx->r3 = ADD32(ctx->r3, 0XA31);
    // 0x151DD850: sb          $zero, 0xA30($at)
    MEM_B(0XA30, ctx->r1) = 0;
    // 0x151DD854: lwl         $at, 0x3($v1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r3, 0X3);
    // 0x151DD858: lwr         $at, 0x6($v1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r3, 0X6);
    // 0x151DD85C: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x151DD860: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x151DD864: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x151DD868: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x151DD86C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151DD870: lwl         $t2, 0x7($v1)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r3, 0X7);
    // 0x151DD874: lwr         $t2, 0xA($v1)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r3, 0XA);
    // 0x151DD878: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x151DD87C: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x151DD880: lbu         $t3, 0x1E($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1E);
    // 0x151DD884: andi        $t6, $t3, 0xC0
    ctx->r14 = ctx->r11 & 0XC0;
    // 0x151DD888: sra         $t5, $t6, 4
    ctx->r13 = S32(SIGNED(ctx->r14) >> 4);
    // 0x151DD88C: sb          $t5, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r13;
    // 0x151DD890: lbu         $t4, 0x21($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X21);
    // 0x151DD894: lbu         $t8, 0x20($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X20);
    // 0x151DD898: andi        $v0, $t5, 0xFF
    ctx->r2 = ctx->r13 & 0XFF;
    // 0x151DD89C: sll         $t7, $t4, 8
    ctx->r15 = S32(ctx->r12 << 8);
    // 0x151DD8A0: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x151DD8A4: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    // 0x151DD8A8: lbu         $t1, 0x22($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X22);
    // 0x151DD8AC: sb          $t1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r9;
L_151DD8B0:
    // 0x151DD8B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151DD8B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151DD8B8: jr          $ra
    // 0x151DD8BC: nop

    return;
    return;
    // 0x151DD8BC: nop

;}
RECOMP_FUNC void func_15056258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15056258: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x1505625C: lwc1        $f0, 0x118($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X118);
    // 0x15056260: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15056264: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x15056268: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505626C: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x15056270: lwc1        $f14, 0x18($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15056274: lwc1        $f4, 0x11C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X11C);
    // 0x15056278: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1505627C: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15056280: swc1        $f0, 0x11C($a0)
    MEM_W(0X11C, ctx->r4) = ctx->f0.u32l;
    // 0x15056284: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x15056288: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1505628C: sub.s       $f16, $f14, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x15056290: add.s       $f12, $f16, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f16.fl;
    // 0x15056294: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x15056298: nop

    // 0x1505629C: bc1t        L_150562F4
    if (c1cs) {
        // 0x150562A0: nop
    
            goto L_150562F4;
    }
    // 0x150562A0: nop

    // 0x150562A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150562A8: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x150562AC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150562B0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x150562B4: nop

    // 0x150562B8: bc1t        L_150562F4
    if (c1cs) {
        // 0x150562BC: nop
    
            goto L_150562F4;
    }
    // 0x150562BC: nop

    // 0x150562C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150562C4: nop

    // 0x150562C8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x150562CC: nop

    // 0x150562D0: bc1f        L_150562DC
    if (!c1cs) {
        // 0x150562D4: nop
    
            goto L_150562DC;
    }
    // 0x150562D4: nop

    // 0x150562D8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_150562DC:
    // 0x150562DC: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x150562E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150562E4: lwc1        $f10, -0x6BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6BBC);
    // 0x150562E8: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150562EC: add.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f18.fl;
    // 0x150562F0: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
L_150562F4:
    // 0x150562F4: jr          $ra
    // 0x150562F8: nop

    return;
    return;
    // 0x150562F8: nop

;}
RECOMP_FUNC void func_1509CB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509CB68: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x1509CB6C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x1509CB70: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1509CB74: addiu       $v0, $v0, -0x7BE0
    ctx->r2 = ADD32(ctx->r2, -0X7BE0);
    // 0x1509CB78: addiu       $a0, $a0, 0x7430
    ctx->r4 = ADD32(ctx->r4, 0X7430);
    // 0x1509CB7C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
L_1509CB80:
    // 0x1509CB80: beql        $t6, $zero, L_1509CB90
    if (ctx->r14 == 0) {
        // 0x1509CB84: lw          $t7, 0x14($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X14);
            goto L_1509CB90;
    }
    goto skip_0;
    // 0x1509CB84: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    skip_0:
    // 0x1509CB88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1509CB8C: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
L_1509CB90:
    // 0x1509CB90: beql        $t7, $zero, L_1509CBA0
    if (ctx->r15 == 0) {
        // 0x1509CB94: lw          $t8, 0x28($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X28);
            goto L_1509CBA0;
    }
    goto skip_1;
    // 0x1509CB94: lw          $t8, 0x28($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X28);
    skip_1:
    // 0x1509CB98: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1509CB9C: lw          $t8, 0x28($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X28);
L_1509CBA0:
    // 0x1509CBA0: beql        $t8, $zero, L_1509CBB0
    if (ctx->r24 == 0) {
        // 0x1509CBA4: lw          $t9, 0x3C($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X3C);
            goto L_1509CBB0;
    }
    goto skip_2;
    // 0x1509CBA4: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    skip_2:
    // 0x1509CBA8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1509CBAC: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
L_1509CBB0:
    // 0x1509CBB0: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    // 0x1509CBB4: beq         $t9, $zero, L_1509CBC0
    if (ctx->r25 == 0) {
        // 0x1509CBB8: nop
    
            goto L_1509CBC0;
    }
    // 0x1509CBB8: nop

    // 0x1509CBBC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_1509CBC0:
    // 0x1509CBC0: bnel        $a0, $v0, L_1509CB80
    if (ctx->r4 != ctx->r2) {
        // 0x1509CBC4: lw          $t6, 0x0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X0);
            goto L_1509CB80;
    }
    goto skip_3;
    // 0x1509CBC4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    skip_3:
    // 0x1509CBC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1509CBCC: jr          $ra
    // 0x1509CBD0: nop

    return;
    return;
    // 0x1509CBD0: nop

;}
RECOMP_FUNC void func_1519C06C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519C06C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1519C070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519C074: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x1519C078: lhu         $a1, 0x130($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X130);
    // 0x1519C07C: beql        $a1, $zero, L_1519C090
    if (ctx->r5 == 0) {
        // 0x1519C080: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1519C090;
    }
    goto skip_0;
    // 0x1519C080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1519C084: jal         0x100111C8
    // 0x1519C088: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x1519C088: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    after_0:
    // 0x1519C08C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1519C090:
    // 0x1519C090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1519C094: jr          $ra
    // 0x1519C098: nop

    return;
    return;
    // 0x1519C098: nop

;}
RECOMP_FUNC void func_1514DA38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DA38: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1514DA3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DA40: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1514DA44: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1514DA48: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1514DA4C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1514DA50: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1514DA54: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1514DA58: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1514DA5C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x1514DA60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1514DA64: jal         0x15158BD0
    // 0x1514DA68: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    func_15158BD0(rdram, ctx);
        goto after_0;
    // 0x1514DA68: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_0:
    // 0x1514DA6C: beq         $v0, $zero, L_1514DA94
    if (ctx->r2 == 0) {
        // 0x1514DA70: addiu       $a0, $v0, 0x58
        ctx->r4 = ADD32(ctx->r2, 0X58);
            goto L_1514DA94;
    }
    // 0x1514DA70: addiu       $a0, $v0, 0x58
    ctx->r4 = ADD32(ctx->r2, 0X58);
    // 0x1514DA74: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x1514DA78: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x1514DA7C: jal         0x10022EC0
    // 0x1514DA80: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1514DA80: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x1514DA84: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x1514DA88: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x1514DA8C: jal         0x1514EC1C
    // 0x1514DA90: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_1514EC1C(rdram, ctx);
        goto after_2;
    // 0x1514DA90: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_2:
L_1514DA94:
    // 0x1514DA94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DA98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1514DA9C: jr          $ra
    // 0x1514DAA0: nop

    return;
    return;
    // 0x1514DAA0: nop

;}
RECOMP_FUNC void func_150B538C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B538C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150B5390: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150B5394: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150B5398: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150B539C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150B53A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150B53A4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150B53A8: bnel        $a2, $at, L_150B53BC
    if (ctx->r6 != ctx->r1) {
        // 0x150B53AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150B53BC;
    }
    goto skip_0;
    // 0x150B53AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150B53B0: jal         0x150B5060
    // 0x150B53B4: nop

    func_150B5060(rdram, ctx);
        goto after_0;
    // 0x150B53B4: nop

    after_0:
    // 0x150B53B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150B53BC:
    // 0x150B53BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150B53C0: jr          $ra
    // 0x150B53C4: nop

    return;
    return;
    // 0x150B53C4: nop

;}
RECOMP_FUNC void func_1000CBF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000CBF0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1000CBF4: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x1000CBF8: addiu       $t0, $t0, 0x17B0
    ctx->r8 = ADD32(ctx->r8, 0X17B0);
    // 0x1000CBFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1000CC00: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x1000CC04: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_1000CC08:
    // 0x1000CC08: sllv        $t7, $t6, $v0
    ctx->r15 = S32(ctx->r14 << (ctx->r2 & 31));
    // 0x1000CC0C: and         $t8, $t7, $a2
    ctx->r24 = ctx->r15 & ctx->r6;
    // 0x1000CC10: beq         $t8, $zero, L_1000CC40
    if (ctx->r24 == 0) {
        // 0x1000CC14: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_1000CC40;
    }
    // 0x1000CC14: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x1000CC18: addu        $v1, $t0, $t9
    ctx->r3 = ADD32(ctx->r8, ctx->r25);
    // 0x1000CC1C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x1000CC20: beql        $a0, $zero, L_1000CC44
    if (ctx->r4 == 0) {
        // 0x1000CC24: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_1000CC44;
    }
    goto skip_0;
    // 0x1000CC24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x1000CC28: sh          $a3, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = ctx->r7;
    // 0x1000CC2C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x1000CC30: bne         $a1, $zero, L_1000CC40
    if (ctx->r5 != 0) {
        // 0x1000CC34: sh          $a1, 0x5C($t2)
        MEM_H(0X5C, ctx->r10) = ctx->r5;
            goto L_1000CC40;
    }
    // 0x1000CC34: sh          $a1, 0x5C($t2)
    MEM_H(0X5C, ctx->r10) = ctx->r5;
    // 0x1000CC38: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x1000CC3C: sh          $a3, 0x58($t3)
    MEM_H(0X58, ctx->r11) = ctx->r7;
L_1000CC40:
    // 0x1000CC40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_1000CC44:
    // 0x1000CC44: bnel        $v0, $t1, L_1000CC08
    if (ctx->r2 != ctx->r9) {
        // 0x1000CC48: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_1000CC08;
    }
    goto skip_1;
    // 0x1000CC48: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    skip_1:
    // 0x1000CC4C: jr          $ra
    // 0x1000CC50: nop

    return;
    return;
    // 0x1000CC50: nop

;}
RECOMP_FUNC void func_1506FF24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FF24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FF28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FF2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FF30: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FF34: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FF38: jal         0x151AB920
    // 0x1506FF3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_151AB920(rdram, ctx);
        goto after_0;
    // 0x1506FF3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x1506FF40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FF44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FF48: jr          $ra
    // 0x1506FF4C: nop

    return;
    return;
    // 0x1506FF4C: nop

;}
RECOMP_FUNC void func_150487E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150487E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150487E4: lwc1        $f4, -0x7000($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7000);
    // 0x150487E8: abs.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = fabsf(ctx->f12.fl);
    // 0x150487EC: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x150487F0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150487F4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150487F8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150487FC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x15048800: nop

    // 0x15048804: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x15048808: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1504880C: lhu         $t9, -0x7200($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X7200);
    // 0x15048810: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x15048814: bgez        $t9, L_15048828
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15048818: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_15048828;
    }
    // 0x15048818: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1504881C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15048820: nop

    // 0x15048824: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_15048828:
    // 0x15048828: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504882C: lwc1        $f4, -0x6FFC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6FFC);
    // 0x15048830: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15048834: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x15048838: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x1504883C: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x15048840: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15048844: bc1f        L_15048854
    if (!c1cs) {
        // 0x15048848: div.s       $f14, $f6, $f8
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
            goto L_15048854;
    }
    // 0x15048848: div.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1504884C: b           L_15048858
    // 0x15048850: neg.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
        goto L_15048858;
    // 0x15048850: neg.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
L_15048854:
    // 0x15048854: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_15048858:
    // 0x15048858: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x1504885C: jr          $ra
    // 0x15048860: nop

    return;
    return;
    // 0x15048860: nop

;}
RECOMP_FUNC void func_15031E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15031E2C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15031E30: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x15031E34: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x15031E38: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x15031E3C: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x15031E40: bne         $at, $zero, L_15031E4C
    if (ctx->r1 != 0) {
        // 0x15031E44: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15031E4C;
    }
    // 0x15031E44: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15031E48: subu        $v0, $t6, $v0
    ctx->r2 = SUB32(ctx->r14, ctx->r2);
L_15031E4C:
    // 0x15031E4C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15031E50: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x15031E54: lw          $t8, 0x2BC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2BC);
    // 0x15031E58: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x15031E5C: slti        $at, $t9, 0x6
    ctx->r1 = SIGNED(ctx->r25) < 0X6 ? 1 : 0;
    // 0x15031E60: sw          $t9, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r25;
    // 0x15031E64: bne         $at, $zero, L_15031E70
    if (ctx->r1 != 0) {
        // 0x15031E68: sh          $t8, 0x18($a0)
        MEM_H(0X18, ctx->r4) = ctx->r24;
            goto L_15031E70;
    }
    // 0x15031E68: sh          $t8, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r24;
    // 0x15031E6C: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
L_15031E70:
    // 0x15031E70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15031E74: jr          $ra
    // 0x15031E78: nop

    return;
    return;
    // 0x15031E78: nop

;}
RECOMP_FUNC void func_150D20B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D20B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D20B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D20B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150D20BC: jal         0x150D2054
    // 0x150D20C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150D2054(rdram, ctx);
        goto after_0;
    // 0x150D20C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150D20C4: jal         0x15149368
    // 0x150D20C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15149368(rdram, ctx);
        goto after_1;
    // 0x150D20C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150D20CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D20D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D20D4: jr          $ra
    // 0x150D20D8: nop

    return;
    return;
    // 0x150D20D8: nop

;}
RECOMP_FUNC void func_15150178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15150178: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x1515017C: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x15150180: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x15150184: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x15150188: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x1515018C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15150190: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x15150194: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x15150198: andi        $fp, $a3, 0xFF
    ctx->r30 = ctx->r7 & 0XFF;
    // 0x1515019C: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x151501A0: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x151501A4: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x151501A8: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x151501AC: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x151501B0: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x151501B4: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x151501B8: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x151501BC: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x151501C0: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x151501C4: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x151501C8: jal         0x150ADA20
    // 0x151501CC: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151501CC: nop

    after_0:
    // 0x151501D0: lh          $t6, 0xE($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE);
    // 0x151501D4: lh          $t9, 0xC($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XC);
    // 0x151501D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151501DC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151501E0: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x151501E4: mfhi        $t8
    ctx->r24 = hi;
    // 0x151501E8: addu        $s4, $t8, $t9
    ctx->r20 = ADD32(ctx->r24, ctx->r25);
    // 0x151501EC: bne         $t7, $zero, L_151501F8
    if (ctx->r15 != 0) {
        // 0x151501F0: nop
    
            goto L_151501F8;
    }
    // 0x151501F0: nop

    // 0x151501F4: break       7
    do_break(353698292);
L_151501F8:
    // 0x151501F8: lw          $s6, 0xC8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XC8);
    // 0x151501FC: beq         $s4, $zero, L_151503C0
    if (ctx->r20 == 0) {
        // 0x15150200: addiu       $s5, $sp, 0xA8
        ctx->r21 = ADD32(ctx->r29, 0XA8);
            goto L_151503C0;
    }
    // 0x15150200: addiu       $s5, $sp, 0xA8
    ctx->r21 = ADD32(ctx->r29, 0XA8);
    // 0x15150204: lwc1        $f26, 0x5FF4($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X5FF4);
L_15150208:
    // 0x15150208: jal         0x150ADA20
    // 0x1515020C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1515020C: nop

    after_1:
    // 0x15150210: jal         0x150ADA20
    // 0x15150214: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15150214: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_2:
    // 0x15150218: jal         0x150ADA68
    // 0x1515021C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1515021C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_3:
    // 0x15150220: lh          $t0, 0x2($s3)
    ctx->r8 = MEM_H(ctx->r19, 0X2);
    // 0x15150224: lh          $t6, 0x6($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X6);
    // 0x15150228: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1515022C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x15150230: divu        $zero, $s1, $t1
    lo = S32(U32(ctx->r17) / U32(ctx->r9)); hi = S32(U32(ctx->r17) % U32(ctx->r9));
    // 0x15150234: mfhi        $t2
    ctx->r10 = hi;
    // 0x15150238: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x1515023C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15150240: divu        $zero, $s2, $t7
    lo = S32(U32(ctx->r18) / U32(ctx->r15)); hi = S32(U32(ctx->r18) % U32(ctx->r15));
    // 0x15150244: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15150248: lh          $t3, 0x0($s3)
    ctx->r11 = MEM_H(ctx->r19, 0X0);
    // 0x1515024C: lh          $t9, 0x4($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X4);
    // 0x15150250: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15150254: mfhi        $t8
    ctx->r24 = hi;
    // 0x15150258: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x1515025C: sll         $t4, $a0, 16
    ctx->r12 = S32(ctx->r4 << 16);
    // 0x15150260: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x15150264: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x15150268: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x1515026C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15150270: bne         $t1, $zero, L_1515027C
    if (ctx->r9 != 0) {
        // 0x15150274: nop
    
            goto L_1515027C;
    }
    // 0x15150274: nop

    // 0x15150278: break       7
    do_break(353698424);
L_1515027C:
    // 0x1515027C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x15150280: bne         $t7, $zero, L_1515028C
    if (ctx->r15 != 0) {
        // 0x15150284: nop
    
            goto L_1515028C;
    }
    // 0x15150284: nop

    // 0x15150288: break       7
    do_break(353698440);
L_1515028C:
    // 0x1515028C: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    // 0x15150290: jal         0x15143794
    // 0x15150294: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_15143794(rdram, ctx);
        goto after_4;
    // 0x15150294: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_4:
    // 0x15150298: jal         0x150ADA68
    // 0x1515029C: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x1515029C: nop

    after_5:
    // 0x151502A0: jal         0x150ADA20
    // 0x151502A4: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151502A4: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    after_6:
    // 0x151502A8: jal         0x150ADA20
    // 0x151502AC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151502AC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_7:
    // 0x151502B0: jal         0x150ADA68
    // 0x151502B4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x151502B4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_8:
    // 0x151502B8: jal         0x150ADA68
    // 0x151502BC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x151502BC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_9:
    // 0x151502C0: jal         0x150ADA68
    // 0x151502C4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x151502C4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_10:
    // 0x151502C8: lh          $t2, 0x1A($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X1A);
    // 0x151502CC: lh          $t5, 0x18($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X18);
    // 0x151502D0: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x151502D4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x151502D8: divu        $zero, $s1, $t3
    lo = S32(U32(ctx->r17) / U32(ctx->r11)); hi = S32(U32(ctx->r17) % U32(ctx->r11));
    // 0x151502DC: mfhi        $t4
    ctx->r12 = hi;
    // 0x151502E0: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151502E4: lbu         $a2, 0x31($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X31);
    // 0x151502E8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x151502EC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151502F0: lbu         $t7, 0x25($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X25);
    // 0x151502F4: lbu         $t0, 0x24($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X24);
    // 0x151502F8: mul.s       $f18, $f24, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f24.fl, ctx->f16.fl);
    // 0x151502FC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x15150300: divu        $zero, $s2, $t8
    lo = S32(U32(ctx->r18) / U32(ctx->r24)); hi = S32(U32(ctx->r18) % U32(ctx->r24));
    // 0x15150304: mfhi        $t9
    ctx->r25 = hi;
    // 0x15150308: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x1515030C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15150310: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15150314: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15150318: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1515031C: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x15150320: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x15150324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15150328: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x1515032C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x15150330: bne         $t3, $zero, L_1515033C
    if (ctx->r11 != 0) {
        // 0x15150334: nop
    
            goto L_1515033C;
    }
    // 0x15150334: nop

    // 0x15150338: break       7
    do_break(353698616);
L_1515033C:
    // 0x1515033C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15150340: bne         $t8, $zero, L_1515034C
    if (ctx->r24 != 0) {
        // 0x15150344: nop
    
            goto L_1515034C;
    }
    // 0x15150344: nop

    // 0x15150348: break       7
    do_break(353698632);
L_1515034C:
    // 0x1515034C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x15150350: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15150354: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15150358: c.lt.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl < ctx->f4.fl;
    // 0x1515035C: nop

    // 0x15150360: bc1fl       L_15150370
    if (!c1cs) {
        // 0x15150364: sw          $t2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r10;
            goto L_15150370;
    }
    goto skip_0;
    // 0x15150364: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    skip_0:
    // 0x15150368: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1515036C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_15150370:
    // 0x15150370: swc1        $f26, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f26.u32l;
    // 0x15150374: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x15150378: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x1515037C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x15150380: lbu         $t4, 0x38($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X38);
    // 0x15150384: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x15150388: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x1515038C: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15150390: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x15150394: nop

    // 0x15150398: bc1fl       L_151503A8
    if (!c1cs) {
        // 0x1515039C: sw          $t5, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r13;
            goto L_151503A8;
    }
    goto skip_1;
    // 0x1515039C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    skip_1:
    // 0x151503A0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151503A4: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
L_151503A8:
    // 0x151503A8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x151503AC: jal         0x151D9014
    // 0x151503B0: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    func_151D9014(rdram, ctx);
        goto after_11;
    // 0x151503B0: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    after_11:
    // 0x151503B4: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x151503B8: bne         $s4, $zero, L_15150208
    if (ctx->r20 != 0) {
        // 0x151503BC: nop
    
            goto L_15150208;
    }
    // 0x151503BC: nop

L_151503C0:
    // 0x151503C0: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x151503C4: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x151503C8: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x151503CC: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x151503D0: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x151503D4: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x151503D8: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x151503DC: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x151503E0: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x151503E4: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x151503E8: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x151503EC: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x151503F0: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x151503F4: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x151503F8: jr          $ra
    // 0x151503FC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x151503FC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_15011330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15011330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15011334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15011338: jal         0x150E8854
    // 0x1501133C: nop

    func_150E8854(rdram, ctx);
        goto after_0;
    // 0x1501133C: nop

    after_0:
    // 0x15011340: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x15011344: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x15011348: sb          $t6, 0x1FD8($at)
    MEM_B(0X1FD8, ctx->r1) = ctx->r14;
    // 0x1501134C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15011350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15011354: jr          $ra
    // 0x15011358: nop

    return;
    return;
    // 0x15011358: nop

;}
RECOMP_FUNC void func_150064E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150064E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150064E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150064E8: jal         0x15017790
    // 0x150064EC: nop

    func_15017790(rdram, ctx);
        goto after_0;
    // 0x150064EC: nop

    after_0:
    // 0x150064F0: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x150064F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150064F8: sw          $t6, 0x3A60($at)
    MEM_W(0X3A60, ctx->r1) = ctx->r14;
    // 0x150064FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15006500: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x15006504: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15006508: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1500650C: addiu       $v1, $v1, 0x3C88
    ctx->r3 = ADD32(ctx->r3, 0X3C88);
    // 0x15006510: addiu       $v0, $v0, 0x3A68
    ctx->r2 = ADD32(ctx->r2, 0X3A68);
    // 0x15006514: sw          $t7, 0x3A64($at)
    MEM_W(0X3A64, ctx->r1) = ctx->r15;
L_15006518:
    // 0x15006518: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x1500651C: addiu       $t9, $zero, 0x0
    ctx->r25 = ADD32(0, 0X0);
    // 0x15006520: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x15006524: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x15006528: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x1500652C: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x15006530: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x15006534: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x15006538: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x1500653C: sw          $t5, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r13;
    // 0x15006540: sw          $t4, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r12;
    // 0x15006544: sw          $t3, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->r11;
    // 0x15006548: sw          $t2, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->r10;
    // 0x1500654C: sw          $t1, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->r9;
    // 0x15006550: sw          $t0, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->r8;
    // 0x15006554: sw          $t9, -0x1C($v0)
    MEM_W(-0X1C, ctx->r2) = ctx->r25;
    // 0x15006558: bne         $v0, $v1, L_15006518
    if (ctx->r2 != ctx->r3) {
        // 0x1500655C: sw          $t8, -0x20($v0)
        MEM_W(-0X20, ctx->r2) = ctx->r24;
            goto L_15006518;
    }
    // 0x1500655C: sw          $t8, -0x20($v0)
    MEM_W(-0X20, ctx->r2) = ctx->r24;
    // 0x15006560: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x15006564: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15006568: sb          $t6, -0x1C21($at)
    MEM_B(-0X1C21, ctx->r1) = ctx->r14;
    // 0x1500656C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15006570: sw          $zero, -0x1C18($at)
    MEM_W(-0X1C18, ctx->r1) = 0;
    // 0x15006574: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15006578: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500657C: sb          $t7, 0x2E45($at)
    MEM_B(0X2E45, ctx->r1) = ctx->r15;
    // 0x15006580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15006584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15006588: jr          $ra
    // 0x1500658C: nop

    return;
    return;
    // 0x1500658C: nop

;}
RECOMP_FUNC void func_1508B9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508B9BC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1508B9C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1508B9C4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1508B9C8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1508B9CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1508B9D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1508B9D4: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x1508B9D8: lw          $s3, 0x23B0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X23B0);
    // 0x1508B9DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1508B9E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1508B9E4: lw          $s0, 0x10($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X10);
    // 0x1508B9E8: lw          $t1, 0x4($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X4);
    // 0x1508B9EC: addiu       $t6, $s3, 0x39C
    ctx->r14 = ADD32(ctx->r19, 0X39C);
    // 0x1508B9F0: slti        $at, $s0, 0x9
    ctx->r1 = SIGNED(ctx->r16) < 0X9 ? 1 : 0;
    // 0x1508B9F4: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x1508B9F8: addiu       $t0, $s3, 0x5DC
    ctx->r8 = ADD32(ctx->r19, 0X5DC);
    // 0x1508B9FC: addiu       $t2, $s3, 0x9DC
    ctx->r10 = ADD32(ctx->r19, 0X9DC);
    // 0x1508BA00: bne         $at, $zero, L_1508BA0C
    if (ctx->r1 != 0) {
        // 0x1508BA04: addiu       $s2, $s3, 0x11C
        ctx->r18 = ADD32(ctx->r19, 0X11C);
            goto L_1508BA0C;
    }
    // 0x1508BA04: addiu       $s2, $s3, 0x11C
    ctx->r18 = ADD32(ctx->r19, 0X11C);
    // 0x1508BA08: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_1508BA0C:
    // 0x1508BA0C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x1508BA10: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x1508BA14: jal         0x1508C5B8
    // 0x1508BA18: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    func_1508C5B8(rdram, ctx);
        goto after_0;
    // 0x1508BA18: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    after_0:
    // 0x1508BA1C: jal         0x1508A1BC
    // 0x1508BA20: nop

    func_1508A1BC(rdram, ctx);
        goto after_1;
    // 0x1508BA20: nop

    after_1:
    // 0x1508BA24: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x1508BA28: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x1508BA2C: lw          $s3, 0x23B0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X23B0);
    // 0x1508BA30: sll         $t7, $t1, 4
    ctx->r15 = S32(ctx->r9 << 4);
    // 0x1508BA34: lui         $t5, 0x98
    ctx->r13 = S32(0X98 << 16);
    // 0x1508BA38: addu        $s1, $s3, $t7
    ctx->r17 = ADD32(ctx->r19, ctx->r15);
    // 0x1508BA3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1508BA40: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1508BA44: addiu       $s1, $s1, 0x15B4
    ctx->r17 = ADD32(ctx->r17, 0X15B4);
    // 0x1508BA48: addiu       $ra, $zero, -0x1
    ctx->r31 = ADD32(0, -0X1);
    // 0x1508BA4C: ori         $t5, $t5, 0x9680
    ctx->r13 = ctx->r13 | 0X9680;
    // 0x1508BA50: blez        $s0, L_1508BB68
    if (SIGNED(ctx->r16) <= 0) {
        // 0x1508BA54: or          $t3, $zero, $zero
        ctx->r11 = 0 | 0;
            goto L_1508BB68;
    }
    // 0x1508BA54: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x1508BA58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508BA5C: lwc1        $f12, -0x25A0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X25A0);
    // 0x1508BA60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508BA64: lwc1        $f2, -0x259C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X259C);
    // 0x1508BA68: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x1508BA6C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_1508BA70:
    // 0x1508BA70: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x1508BA74: blezl       $t8, L_1508BB60
    if (SIGNED(ctx->r24) <= 0) {
        // 0x1508BA78: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_1508BB60;
    }
    goto skip_0;
    // 0x1508BA78: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_0:
    // 0x1508BA7C: beq         $t3, $t1, L_1508BB5C
    if (ctx->r11 == ctx->r9) {
        // 0x1508BA80: or          $a2, $a3, $zero
        ctx->r6 = ctx->r7 | 0;
            goto L_1508BB5C;
    }
    // 0x1508BA80: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x1508BA84: sll         $v1, $t3, 4
    ctx->r3 = S32(ctx->r11 << 4);
    // 0x1508BA88: addiu       $a1, $v1, 0x10
    ctx->r5 = ADD32(ctx->r3, 0X10);
    // 0x1508BA8C: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1508BA90: beq         $at, $zero, L_1508BAEC
    if (ctx->r1 == 0) {
        // 0x1508BA94: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1508BAEC;
    }
    // 0x1508BA94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1508BA98: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x1508BA9C: addu        $t6, $t0, $t9
    ctx->r14 = ADD32(ctx->r8, ctx->r25);
    // 0x1508BAA0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1508BAA4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x1508BAA8: addu        $t8, $t0, $v1
    ctx->r24 = ADD32(ctx->r8, ctx->r3);
    // 0x1508BAAC: beq         $a3, $t7, L_1508BAEC
    if (ctx->r7 == ctx->r15) {
        // 0x1508BAB0: nop
    
            goto L_1508BAEC;
    }
    // 0x1508BAB0: nop

    // 0x1508BAB4: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
L_1508BAB8:
    // 0x1508BAB8: bne         $t1, $a0, L_1508BAD0
    if (ctx->r9 != ctx->r4) {
        // 0x1508BABC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_1508BAD0;
    }
    // 0x1508BABC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1508BAC0: addu        $t9, $t2, $v1
    ctx->r25 = ADD32(ctx->r10, ctx->r3);
    // 0x1508BAC4: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x1508BAC8: b           L_1508BAD0
    // 0x1508BACC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_1508BAD0;
    // 0x1508BACC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_1508BAD0:
    // 0x1508BAD0: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1508BAD4: beq         $at, $zero, L_1508BAEC
    if (ctx->r1 == 0) {
        // 0x1508BAD8: sll         $v1, $v0, 2
        ctx->r3 = S32(ctx->r2 << 2);
            goto L_1508BAEC;
    }
    // 0x1508BAD8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x1508BADC: addu        $t6, $t0, $v1
    ctx->r14 = ADD32(ctx->r8, ctx->r3);
    // 0x1508BAE0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x1508BAE4: bne         $a3, $a0, L_1508BAB8
    if (ctx->r7 != ctx->r4) {
        // 0x1508BAE8: nop
    
            goto L_1508BAB8;
    }
    // 0x1508BAE8: nop

L_1508BAEC:
    // 0x1508BAEC: beq         $a2, $a3, L_1508BB5C
    if (ctx->r6 == ctx->r7) {
        // 0x1508BAF0: addu        $t7, $s1, $t3
        ctx->r15 = ADD32(ctx->r17, ctx->r11);
            goto L_1508BB5C;
    }
    // 0x1508BAF0: addu        $t7, $s1, $t3
    ctx->r15 = ADD32(ctx->r17, ctx->r11);
    // 0x1508BAF4: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x1508BAF8: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x1508BAFC: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x1508BB00: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1508BB04: addu        $t6, $s2, $t9
    ctx->r14 = ADD32(ctx->r18, ctx->r25);
    // 0x1508BB08: bgez        $t8, L_1508BB20
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1508BB0C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1508BB20;
    }
    // 0x1508BB0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508BB10: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1508BB14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1508BB18: nop

    // 0x1508BB1C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1508BB20:
    // 0x1508BB20: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1508BB24: mul.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1508BB28: bne         $t3, $t7, L_1508BB38
    if (ctx->r11 != ctx->r15) {
        // 0x1508BB2C: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1508BB38;
    }
    // 0x1508BB2C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508BB30: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x1508BB34: nop

L_1508BB38:
    // 0x1508BB38: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1508BB3C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1508BB40: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x1508BB44: nop

    // 0x1508BB48: slt         $at, $a2, $t5
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x1508BB4C: beql        $at, $zero, L_1508BB60
    if (ctx->r1 == 0) {
        // 0x1508BB50: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_1508BB60;
    }
    goto skip_1;
    // 0x1508BB50: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_1:
    // 0x1508BB54: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x1508BB58: or          $ra, $t3, $zero
    ctx->r31 = ctx->r11 | 0;
L_1508BB5C:
    // 0x1508BB5C: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
L_1508BB60:
    // 0x1508BB60: bne         $t3, $s0, L_1508BA70
    if (ctx->r11 != ctx->r16) {
        // 0x1508BB64: addiu       $t4, $t4, 0x4
        ctx->r12 = ADD32(ctx->r12, 0X4);
            goto L_1508BA70;
    }
    // 0x1508BB64: addiu       $t4, $t4, 0x4
    ctx->r12 = ADD32(ctx->r12, 0X4);
L_1508BB68:
    // 0x1508BB68: sll         $a0, $t1, 2
    ctx->r4 = S32(ctx->r9 << 2);
    // 0x1508BB6C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1508BB70: addu        $t9, $s3, $a0
    ctx->r25 = ADD32(ctx->r19, ctx->r4);
    // 0x1508BB74: beq         $ra, $a3, L_1508BBF0
    if (ctx->r31 == ctx->r7) {
        // 0x1508BB78: sw          $ra, 0x49C($t9)
        MEM_W(0X49C, ctx->r25) = ctx->r31;
            goto L_1508BBF0;
    }
    // 0x1508BB78: sw          $ra, 0x49C($t9)
    MEM_W(0X49C, ctx->r25) = ctx->r31;
    // 0x1508BB7C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1508BB80: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x1508BB84: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
    // 0x1508BB88: multu       $t1, $a2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1508BB8C: mflo        $t6
    ctx->r14 = lo;
    // 0x1508BB90: addu        $v0, $a1, $t6
    ctx->r2 = ADD32(ctx->r5, ctx->r14);
    // 0x1508BB94: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1508BB98: multu       $ra, $a2
    result = U64(U32(ctx->r31)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1508BB9C: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1508BBA0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1508BBA4: lw          $t6, 0x23B0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X23B0);
    // 0x1508BBA8: mflo        $t7
    ctx->r15 = lo;
    // 0x1508BBAC: addu        $v1, $a1, $t7
    ctx->r3 = ADD32(ctx->r5, ctx->r15);
    // 0x1508BBB0: lwc1        $f6, 0x14($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1508BBB4: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1508BBB8: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x1508BBBC: sub.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x1508BBC0: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1508BBC4: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1508BBC8: nop

    // 0x1508BBCC: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1508BBD0: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1508BBD4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1508BBD8: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x1508BBDC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x1508BBE0: nop

    // 0x1508BBE4: sw          $t9, 0x45C($t7)
    MEM_W(0X45C, ctx->r15) = ctx->r25;
    // 0x1508BBE8: b           L_1508BC04
    // 0x1508BBEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1508BC04;
    // 0x1508BBEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1508BBF0:
    // 0x1508BBF0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1508BBF4: lw          $t8, 0x23B0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X23B0);
    // 0x1508BBF8: addu        $t6, $t8, $a0
    ctx->r14 = ADD32(ctx->r24, ctx->r4);
    // 0x1508BBFC: sw          $t5, 0x45C($t6)
    MEM_W(0X45C, ctx->r14) = ctx->r13;
    // 0x1508BC00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1508BC04:
    // 0x1508BC04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1508BC08: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1508BC0C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1508BC10: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1508BC14: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1508BC18: jr          $ra
    // 0x1508BC1C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x1508BC1C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_15117770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15117770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15117774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15117778: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x1511777C: jal         0x15117518
    // 0x15117780: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15117518(rdram, ctx);
        goto after_0;
    // 0x15117780: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15117784: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15117788: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x1511778C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15117790: jr          $ra
    // 0x15117794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15117794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1513BAD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513BAD4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1513BAD8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1513BADC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1513BAE0: jr          $ra
    // 0x1513BAE4: nop

    return;
    return;
    // 0x1513BAE4: nop

;}
RECOMP_FUNC void func_151B2974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B2974: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x151B2978: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x151B297C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151B2980: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151B2984: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x151B2988: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x151B298C: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x151B2990: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x151B2994: sb          $zero, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = 0;
    // 0x151B2998: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151B299C: lw          $t7, 0x28($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X28);
    // 0x151B29A0: addiu       $s1, $t6, 0x28
    ctx->r17 = ADD32(ctx->r14, 0X28);
    // 0x151B29A4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x151B29A8: beql        $t8, $zero, L_151B29C8
    if (ctx->r24 == 0) {
        // 0x151B29AC: sb          $t2, 0xB3($sp)
        MEM_B(0XB3, ctx->r29) = ctx->r10;
            goto L_151B29C8;
    }
    goto skip_0;
    // 0x151B29AC: sb          $t2, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r10;
    skip_0:
    // 0x151B29B0: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x151B29B4: lbu         $t9, 0x4($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X4);
    // 0x151B29B8: lbu         $t1, 0x3B($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X3B);
    // 0x151B29BC: beql        $t9, $t1, L_151B29CC
    if (ctx->r25 == ctx->r9) {
        // 0x151B29C0: lbu         $t3, 0xB3($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0XB3);
            goto L_151B29CC;
    }
    goto skip_1;
    // 0x151B29C0: lbu         $t3, 0xB3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XB3);
    skip_1:
    // 0x151B29C4: sb          $t2, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r10;
L_151B29C8:
    // 0x151B29C8: lbu         $t3, 0xB3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XB3);
L_151B29CC:
    // 0x151B29CC: lw          $t4, 0xBC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XBC);
    // 0x151B29D0: bne         $t3, $zero, L_151B2E98
    if (ctx->r11 != 0) {
        // 0x151B29D4: addiu       $s1, $t4, 0x28
        ctx->r17 = ADD32(ctx->r12, 0X28);
            goto L_151B2E98;
    }
    // 0x151B29D4: addiu       $s1, $t4, 0x28
    ctx->r17 = ADD32(ctx->r12, 0X28);
    // 0x151B29D8: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x151B29DC: addiu       $a0, $t4, 0x14
    ctx->r4 = ADD32(ctx->r12, 0X14);
    // 0x151B29E0: lh          $a1, 0xC2($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XC2);
    // 0x151B29E4: lw          $t7, 0x1D4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X1D4);
    // 0x151B29E8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151B29EC: addiu       $a3, $sp, 0xAC
    ctx->r7 = ADD32(ctx->r29, 0XAC);
    // 0x151B29F0: beql        $t7, $zero, L_151B2E9C
    if (ctx->r15 == 0) {
        // 0x151B29F4: lbu         $t4, 0xB3($sp)
        ctx->r12 = MEM_BU(ctx->r29, 0XB3);
            goto L_151B2E9C;
    }
    goto skip_2;
    // 0x151B29F4: lbu         $t4, 0xB3($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XB3);
    skip_2:
    // 0x151B29F8: jal         0x151D5D60
    // 0x151B29FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x151B29FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x151B2A00: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2A04: bnel        $t8, $zero, L_151B2A18
    if (ctx->r24 != 0) {
        // 0x151B2A08: lw          $t6, 0x0($s1)
        ctx->r14 = MEM_W(ctx->r17, 0X0);
            goto L_151B2A18;
    }
    goto skip_3;
    // 0x151B2A08: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    skip_3:
    // 0x151B2A0C: b           L_151B2EB0
    // 0x151B2A10: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151B2EB0;
    // 0x151B2A10: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151B2A14: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
L_151B2A18:
    // 0x151B2A18: lbu         $t9, 0x5($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X5);
    // 0x151B2A1C: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    // 0x151B2A20: lw          $t0, 0x1D4($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X1D4);
    // 0x151B2A24: sll         $t1, $t9, 6
    ctx->r9 = S32(ctx->r25 << 6);
    // 0x151B2A28: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x151B2A2C: addu        $a2, $t0, $t1
    ctx->r6 = ADD32(ctx->r8, ctx->r9);
    // 0x151B2A30: jal         0x15143134
    // 0x151B2A34: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    func_15143134(rdram, ctx);
        goto after_1;
    // 0x151B2A34: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    after_1:
    // 0x151B2A38: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x151B2A3C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x151B2A40: jal         0x15143134
    // 0x151B2A44: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    func_15143134(rdram, ctx);
        goto after_2;
    // 0x151B2A44: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    after_2:
    // 0x151B2A48: lh          $t3, 0xC2($sp)
    ctx->r11 = MEM_H(ctx->r29, 0XC2);
    // 0x151B2A4C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151B2A50: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x151B2A54: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x151B2A58: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x151B2A5C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x151B2A60: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x151B2A64: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x151B2A68: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x151B2A6C: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x151B2A70: addu        $t4, $t5, $t7
    ctx->r12 = ADD32(ctx->r13, ctx->r15);
    // 0x151B2A74: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151B2A78: addiu       $t8, $t4, 0x2F8
    ctx->r24 = ADD32(ctx->r12, 0X2F8);
    // 0x151B2A7C: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x151B2A80: lui         $a2, 0x6
    ctx->r6 = S32(0X6 << 16);
    // 0x151B2A84: sb          $t2, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r10;
    // 0x151B2A88: sw          $t8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r24;
    // 0x151B2A8C: ori         $a2, $a2, 0x600
    ctx->r6 = ctx->r6 | 0X600;
    // 0x151B2A90: ori         $a1, $a1, 0x5
    ctx->r5 = ctx->r5 | 0X5;
    // 0x151B2A94: jal         0x15142B7C
    // 0x151B2A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15142B7C(rdram, ctx);
        goto after_3;
    // 0x151B2A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x151B2A9C: addiu       $s0, $sp, 0xB2
    ctx->r16 = ADD32(ctx->r29, 0XB2);
    // 0x151B2AA0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151B2AA4: addiu       $t6, $zero, 0x36
    ctx->r14 = ADD32(0, 0X36);
    // 0x151B2AA8: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x151B2AAC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x151B2AB0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151B2AB4: addiu       $a1, $a1, 0xDE8
    ctx->r5 = ADD32(ctx->r5, 0XDE8);
    // 0x151B2AB8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x151B2ABC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B2AC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151B2AC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B2AC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B2ACC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151B2AD0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151B2AD4: jal         0x15142E24
    // 0x151B2AD8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15142E24(rdram, ctx);
        goto after_4;
    // 0x151B2AD8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_4:
    // 0x151B2ADC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151B2AE0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151B2AE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B2AE8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151B2AEC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151B2AF0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151B2AF4: jal         0x15142C10
    // 0x151B2AF8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_15142C10(rdram, ctx);
        goto after_5;
    // 0x151B2AF8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_5:
    // 0x151B2AFC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151B2B00: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151B2B04: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151B2B08: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151B2B0C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151B2B10: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151B2B14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B2B18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151B2B1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151B2B20: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151B2B24: jal         0x15142CF0
    // 0x151B2B28: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_15142CF0(rdram, ctx);
        goto after_6;
    // 0x151B2B28: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_6:
    // 0x151B2B2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B2B30: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    // 0x151B2B34: jal         0x1513F4E4
    // 0x151B2B38: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_7;
    // 0x151B2B38: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x151B2B3C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x151B2B40: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x151B2B44: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x151B2B48: addiu       $v1, $v1, 0x4AC8
    ctx->r3 = ADD32(ctx->r3, 0X4AC8);
    // 0x151B2B4C: lw          $t9, 0x2C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X2C);
    // 0x151B2B50: lw          $t0, 0x28($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X28);
    // 0x151B2B54: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x151B2B58: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x151B2B5C: ori         $a1, $t8, 0x2CA0
    ctx->r5 = ctx->r24 | 0X2CA0;
    // 0x151B2B60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B2B64: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x151B2B68: jal         0x15142FBC
    // 0x151B2B6C: or          $a2, $t9, $t0
    ctx->r6 = ctx->r25 | ctx->r8;
    func_15142FBC(rdram, ctx);
        goto after_8;
    // 0x151B2B6C: or          $a2, $t9, $t0
    ctx->r6 = ctx->r25 | ctx->r8;
    after_8:
    // 0x151B2B70: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151B2B74: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151B2B78: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151B2B7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151B2B80: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B2B84: lw          $v1, 0xA8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA8);
    // 0x151B2B88: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151B2B8C: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151B2B90: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x151B2B94: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x151B2B98: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151B2B9C: sub.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151B2BA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B2BA4: sub.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151B2BA8: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x151B2BAC: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151B2BB0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151B2BB4: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151B2BB8: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151B2BBC: sub.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151B2BC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151B2BC4: sub.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x151B2BC8: mul.s       $f4, $f12, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x151B2BCC: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151B2BD0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151B2BD4: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151B2BD8: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x151B2BDC: nop

    // 0x151B2BE0: mul.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x151B2BE4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B2BE8: mul.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x151B2BEC: nop

    // 0x151B2BF0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151B2BF4: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x151B2BF8: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151B2BFC: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151B2C00: nop

    // 0x151B2C04: mul.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x151B2C08: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x151B2C0C: sub.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151B2C10: mul.s       $f4, $f8, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x151B2C14: nop

    // 0x151B2C18: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x151B2C1C: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x151B2C20: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151B2C24: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x151B2C28: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151B2C2C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151B2C30: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x151B2C34: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151B2C38: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151B2C3C: c.eq.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl == ctx->f4.fl;
    // 0x151B2C40: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x151B2C44: lwc1        $f0, 0x8C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x151B2C48: bc1f        L_151B2C64
    if (!c1cs) {
        // 0x151B2C4C: nop
    
            goto L_151B2C64;
    }
    // 0x151B2C4C: nop

    // 0x151B2C50: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x151B2C54: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x151B2C58: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151B2C5C: b           L_151B2C98
    // 0x151B2C60: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
        goto L_151B2C98;
    // 0x151B2C60: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
L_151B2C64:
    // 0x151B2C64: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151B2C68: lwc1        $f8, 0x20($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X20);
    // 0x151B2C6C: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151B2C70: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151B2C74: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151B2C78: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151B2C7C: mul.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151B2C80: nop

    // 0x151B2C84: mul.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151B2C88: nop

    // 0x151B2C8C: mul.s       $f16, $f4, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x151B2C90: nop

    // 0x151B2C94: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
L_151B2C98:
    // 0x151B2C98: lw          $t3, 0xAC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2C9C: addiu       $a2, $zero, 0x3C0
    ctx->r6 = ADD32(0, 0X3C0);
    // 0x151B2CA0: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x151B2CA4: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B2CA8: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x151B2CAC: nop

    // 0x151B2CB0: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
    // 0x151B2CB4: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151B2CB8: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2CBC: add.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x151B2CC0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B2CC4: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x151B2CC8: nop

    // 0x151B2CCC: sh          $t7, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r15;
    // 0x151B2CD0: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151B2CD4: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2CD8: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151B2CDC: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B2CE0: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x151B2CE4: nop

    // 0x151B2CE8: sh          $t6, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r14;
    // 0x151B2CEC: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2CF0: sh          $zero, 0x8($t0)
    MEM_H(0X8, ctx->r8) = 0;
    // 0x151B2CF4: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2CF8: sh          $zero, 0xA($t1)
    MEM_H(0XA, ctx->r9) = 0;
    // 0x151B2CFC: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151B2D00: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2D04: sub.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x151B2D08: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x151B2D0C: sw          $t3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r11;
    // 0x151B2D10: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B2D14: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x151B2D18: nop

    // 0x151B2D1C: sh          $t7, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r15;
    // 0x151B2D20: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151B2D24: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2D28: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x151B2D2C: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B2D30: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x151B2D34: nop

    // 0x151B2D38: sh          $t8, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r24;
    // 0x151B2D3C: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151B2D40: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2D44: sub.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x151B2D48: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B2D4C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x151B2D50: nop

    // 0x151B2D54: sh          $t0, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r8;
    // 0x151B2D58: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2D5C: sh          $a2, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r6;
    // 0x151B2D60: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2D64: sh          $zero, 0xA($t5)
    MEM_H(0XA, ctx->r13) = 0;
    // 0x151B2D68: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151B2D6C: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2D70: sub.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x151B2D74: addiu       $t3, $t7, 0x10
    ctx->r11 = ADD32(ctx->r15, 0X10);
    // 0x151B2D78: sw          $t3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r11;
    // 0x151B2D7C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B2D80: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x151B2D84: nop

    // 0x151B2D88: sh          $t8, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r24;
    // 0x151B2D8C: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x151B2D90: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2D94: sub.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x151B2D98: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B2D9C: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x151B2DA0: nop

    // 0x151B2DA4: sh          $t9, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r25;
    // 0x151B2DA8: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151B2DAC: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2DB0: lui         $t0, 0x100
    ctx->r8 = S32(0X100 << 16);
    // 0x151B2DB4: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x151B2DB8: ori         $t0, $t0, 0x4008
    ctx->r8 = ctx->r8 | 0X4008;
    // 0x151B2DBC: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B2DC0: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x151B2DC4: nop

    // 0x151B2DC8: sh          $t2, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r10;
    // 0x151B2DCC: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2DD0: lui         $t5, 0x500
    ctx->r13 = S32(0X500 << 16);
    // 0x151B2DD4: ori         $t5, $t5, 0x204
    ctx->r13 = ctx->r13 | 0X204;
    // 0x151B2DD8: sh          $a2, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r6;
    // 0x151B2DDC: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2DE0: sh          $a2, 0xA($t4)
    MEM_H(0XA, ctx->r12) = ctx->r6;
    // 0x151B2DE4: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151B2DE8: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2DEC: add.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x151B2DF0: addiu       $t3, $t8, 0x10
    ctx->r11 = ADD32(ctx->r24, 0X10);
    // 0x151B2DF4: sw          $t3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r11;
    // 0x151B2DF8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B2DFC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x151B2E00: nop

    // 0x151B2E04: sh          $t9, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r25;
    // 0x151B2E08: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x151B2E0C: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2E10: add.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x151B2E14: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B2E18: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x151B2E1C: nop

    // 0x151B2E20: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
    // 0x151B2E24: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151B2E28: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2E2C: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151B2E30: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B2E34: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x151B2E38: nop

    // 0x151B2E3C: sh          $t7, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r15;
    // 0x151B2E40: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2E44: lui         $t7, 0x500
    ctx->r15 = S32(0X500 << 16);
    // 0x151B2E48: ori         $t7, $t7, 0x406
    ctx->r15 = ctx->r15 | 0X406;
    // 0x151B2E4C: sh          $zero, 0x8($t8)
    MEM_H(0X8, ctx->r24) = 0;
    // 0x151B2E50: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2E54: sh          $a2, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r6;
    // 0x151B2E58: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2E5C: addiu       $t3, $t9, 0x10
    ctx->r11 = ADD32(ctx->r25, 0X10);
    // 0x151B2E60: sw          $t3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r11;
    // 0x151B2E64: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x151B2E68: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x151B2E6C: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x151B2E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151B2E74: addiu       $t2, $t1, -0x40
    ctx->r10 = ADD32(ctx->r9, -0X40);
    // 0x151B2E78: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x151B2E7C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151B2E80: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x151B2E84: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x151B2E88: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151B2E8C: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x151B2E90: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x151B2E94: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_151B2E98:
    // 0x151B2E98: lbu         $t4, 0xB3($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XB3);
L_151B2E9C:
    // 0x151B2E9C: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x151B2EA0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151B2EA4: beq         $t4, $zero, L_151B2EB0
    if (ctx->r12 == 0) {
        // 0x151B2EA8: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_151B2EB0;
    }
    // 0x151B2EA8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151B2EAC: sh          $t8, 0xE($t6)
    MEM_H(0XE, ctx->r14) = ctx->r24;
L_151B2EB0:
    // 0x151B2EB0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151B2EB4: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x151B2EB8: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x151B2EBC: jr          $ra
    // 0x151B2EC0: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x151B2EC0: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_1501A490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501A490: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1501A494: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1501A498: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1501A49C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x1501A4A0: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1501A4A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1501A4A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1501A4AC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1501A4B0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x1501A4B4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1501A4B8: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x1501A4BC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1501A4C0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1501A4C4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1501A4C8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1501A4CC: bne         $a1, $at, L_1501A55C
    if (ctx->r5 != ctx->r1) {
        // 0x1501A4D0: lw          $v1, 0x58($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X58);
            goto L_1501A55C;
    }
    // 0x1501A4D0: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x1501A4D4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1501A4D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1501A4DC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1501A4E0: lui         $t9, 0xED00
    ctx->r25 = S32(0XED00 << 16);
    // 0x1501A4E4: ori         $t9, $t9, 0x8000
    ctx->r25 = ctx->r25 | 0X8000;
    // 0x1501A4E8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1501A4EC: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x1501A4F0: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1501A4F4: lw          $t3, -0x19E0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X19E0);
    // 0x1501A4F8: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x1501A4FC: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1501A500: addiu       $t4, $t3, -0x2
    ctx->r12 = ADD32(ctx->r11, -0X2);
    // 0x1501A504: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1501A508: lw          $t0, -0x19DC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X19DC);
    // 0x1501A50C: sll         $t2, $t1, 24
    ctx->r10 = S32(ctx->r9 << 24);
    // 0x1501A510: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1501A514: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x1501A518: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1501A51C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1501A520: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1501A524: nop

    // 0x1501A528: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1501A52C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1501A530: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1501A534: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x1501A538: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x1501A53C: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x1501A540: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x1501A544: or          $t9, $t2, $t8
    ctx->r25 = ctx->r10 | ctx->r24;
    // 0x1501A548: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x1501A54C: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x1501A550: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x1501A554: b           L_1501A66C
    // 0x1501A558: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1501A66C;
    // 0x1501A558: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1501A55C:
    // 0x1501A55C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501A560: lw          $t6, -0x19D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19D8);
    // 0x1501A564: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x1501A568: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x1501A56C: sll         $t7, $t7, 7
    ctx->r15 = S32(ctx->r15 << 7);
    // 0x1501A570: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1501A574: lwc1        $f8, 0x2C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x1501A578: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x1501A57C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1501A580: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x1501A584: lwc1        $f10, 0x30($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1501A588: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x1501A58C: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x1501A590: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x1501A594: beq         $v1, $zero, L_1501A5C8
    if (ctx->r3 == 0) {
        // 0x1501A598: swc1        $f16, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
            goto L_1501A5C8;
    }
    // 0x1501A598: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x1501A59C: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x1501A5A0: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x1501A5A4: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1501A5A8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1501A5AC: nop

    // 0x1501A5B0: bc1f        L_1501A5C0
    if (!c1cs) {
        // 0x1501A5B4: nop
    
            goto L_1501A5C0;
    }
    // 0x1501A5B4: nop

    // 0x1501A5B8: b           L_1501A5D0
    // 0x1501A5BC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
        goto L_1501A5D0;
    // 0x1501A5BC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
L_1501A5C0:
    // 0x1501A5C0: b           L_1501A5D0
    // 0x1501A5C4: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
        goto L_1501A5D0;
    // 0x1501A5C4: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
L_1501A5C8:
    // 0x1501A5C8: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x1501A5CC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
L_1501A5D0:
    // 0x1501A5D0: jal         0x1501AF44
    // 0x1501A5D4: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_1501AF44(rdram, ctx);
        goto after_0;
    // 0x1501A5D4: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x1501A5D8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1501A5DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1501A5E0: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1501A5E4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1501A5E8: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1501A5EC: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x1501A5F0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1501A5F4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1501A5F8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1501A5FC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1501A600: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1501A604: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x1501A608: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x1501A60C: andi        $t0, $t8, 0xFFF
    ctx->r8 = ctx->r24 & 0XFFF;
    // 0x1501A610: sll         $t1, $t0, 12
    ctx->r9 = S32(ctx->r8 << 12);
    // 0x1501A614: or          $t3, $t1, $at
    ctx->r11 = ctx->r9 | ctx->r1;
    // 0x1501A618: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x1501A61C: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x1501A620: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1501A624: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1501A628: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1501A62C: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x1501A630: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1501A634: andi        $t2, $t7, 0x3
    ctx->r10 = ctx->r15 & 0X3;
    // 0x1501A638: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1501A63C: sll         $t8, $t2, 24
    ctx->r24 = S32(ctx->r10 << 24);
    // 0x1501A640: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1501A644: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1501A648: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1501A64C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x1501A650: andi        $t9, $t1, 0xFFF
    ctx->r25 = ctx->r9 & 0XFFF;
    // 0x1501A654: sll         $t4, $t9, 12
    ctx->r12 = S32(ctx->r25 << 12);
    // 0x1501A658: or          $t3, $t8, $t4
    ctx->r11 = ctx->r24 | ctx->r12;
    // 0x1501A65C: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x1501A660: or          $t2, $t3, $t7
    ctx->r10 = ctx->r11 | ctx->r15;
    // 0x1501A664: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x1501A668: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1501A66C:
    // 0x1501A66C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1501A670: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1501A674: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1501A678: jr          $ra
    // 0x1501A67C: nop

    return;
    return;
    // 0x1501A67C: nop

;}
RECOMP_FUNC void func_15128680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15128680: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15128684: jr          $ra
    // 0x15128688: nop

    return;
    return;
    // 0x15128688: nop

;}
RECOMP_FUNC void func_1503D984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503D984: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1503D988: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1503D98C: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x1503D990: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1503D994: lw          $a2, 0x4488($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4488);
    // 0x1503D998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1503D99C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1503D9A0: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x1503D9A4: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x1503D9A8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x1503D9AC: addiu       $t1, $zero, -0x21
    ctx->r9 = ADD32(0, -0X21);
L_1503D9B0:
    // 0x1503D9B0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x1503D9B4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x1503D9B8: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x1503D9BC: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x1503D9C0: srl         $t7, $t0, 24
    ctx->r15 = S32(U32(ctx->r8) >> 24);
    // 0x1503D9C4: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x1503D9C8: sra         $t0, $t8, 24
    ctx->r8 = S32(SIGNED(ctx->r24) >> 24);
    // 0x1503D9CC: beq         $t0, $t1, L_1503DA1C
    if (ctx->r8 == ctx->r9) {
        // 0x1503D9D0: nop
    
            goto L_1503DA1C;
    }
    // 0x1503D9D0: nop

L_1503D9D4:
    // 0x1503D9D4: bne         $t0, $t2, L_1503D9E4
    if (ctx->r8 != ctx->r10) {
        // 0x1503D9D8: nop
    
            goto L_1503D9E4;
    }
    // 0x1503D9D8: nop

    // 0x1503D9DC: b           L_1503DA00
    // 0x1503D9E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_1503DA00;
    // 0x1503D9E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_1503D9E4:
    // 0x1503D9E4: bne         $t0, $t4, L_1503D9F4
    if (ctx->r8 != ctx->r12) {
        // 0x1503D9E8: sra         $t6, $t0, 4
        ctx->r14 = S32(SIGNED(ctx->r8) >> 4);
            goto L_1503D9F4;
    }
    // 0x1503D9E8: sra         $t6, $t0, 4
    ctx->r14 = S32(SIGNED(ctx->r8) >> 4);
    // 0x1503D9EC: b           L_1503DA00
    // 0x1503D9F0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_1503DA00;
    // 0x1503D9F0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_1503D9F4:
    // 0x1503D9F4: bnel        $t5, $t6, L_1503DA04
    if (ctx->r13 != ctx->r14) {
        // 0x1503D9F8: lw          $t0, 0x8($a3)
        ctx->r8 = MEM_W(ctx->r7, 0X8);
            goto L_1503DA04;
    }
    goto skip_0;
    // 0x1503D9F8: lw          $t0, 0x8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X8);
    skip_0:
    // 0x1503D9FC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_1503DA00:
    // 0x1503DA00: lw          $t0, 0x8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X8);
L_1503DA04:
    // 0x1503DA04: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x1503DA08: srl         $t7, $t0, 24
    ctx->r15 = S32(U32(ctx->r8) >> 24);
    // 0x1503DA0C: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x1503DA10: sra         $t0, $t8, 24
    ctx->r8 = S32(SIGNED(ctx->r24) >> 24);
    // 0x1503DA14: bne         $t0, $t1, L_1503D9D4
    if (ctx->r8 != ctx->r9) {
        // 0x1503DA18: nop
    
            goto L_1503D9D4;
    }
    // 0x1503DA18: nop

L_1503DA1C:
    // 0x1503DA1C: bne         $a1, $t3, L_1503D9B0
    if (ctx->r5 != ctx->r11) {
        // 0x1503DA20: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_1503D9B0;
    }
    // 0x1503DA20: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x1503DA24: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x1503DA28: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1503DA2C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1503DA30: sh          $v0, 0x5918($at)
    MEM_H(0X5918, ctx->r1) = ctx->r2;
    // 0x1503DA34: jr          $ra
    // 0x1503DA38: nop

    return;
    return;
    // 0x1503DA38: nop

;}
RECOMP_FUNC void func_151993B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151993B4: lhu         $t6, 0x1E($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1E);
    // 0x151993B8: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x151993BC: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x151993C0: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x151993C4: sh          $t7, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r15;
    // 0x151993C8: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x151993CC: ori         $t0, $t8, 0x1
    ctx->r8 = ctx->r24 | 0X1;
    // 0x151993D0: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x151993D4: sb          $t0, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r8;
    // 0x151993D8: sb          $t1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r9;
    // 0x151993DC: jr          $ra
    // 0x151993E0: nop

    return;
    return;
    // 0x151993E0: nop

;}
RECOMP_FUNC void func_151D08F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D08F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D08F4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151D08F8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151D08FC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151D0900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D0904: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151D0908: beq         $a2, $zero, L_151D091C
    if (ctx->r6 == 0) {
        // 0x151D090C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_151D091C;
    }
    // 0x151D090C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151D0910: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x151D0914: bnel        $a2, $at, L_151D0954
    if (ctx->r6 != ctx->r1) {
        // 0x151D0918: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_151D0954;
    }
    goto skip_0;
    // 0x151D0918: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    skip_0:
L_151D091C:
    // 0x151D091C: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x151D0920: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151D0924: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x151D0928: beq         $v1, $t7, L_151D0940
    if (ctx->r3 == ctx->r15) {
        // 0x151D092C: nop
    
            goto L_151D0940;
    }
    // 0x151D092C: nop

    // 0x151D0930: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x151D0934: lbu         $t9, 0x4($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X4);
    // 0x151D0938: bnel        $t8, $t9, L_151D099C
    if (ctx->r24 != ctx->r25) {
        // 0x151D093C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151D099C;
    }
    goto skip_1;
    // 0x151D093C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_151D0940:
    // 0x151D0940: jal         0x1516972C
    // 0x151D0944: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151D0944: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x151D0948: b           L_151D099C
    // 0x151D094C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151D099C;
    // 0x151D094C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D0950: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
L_151D0954:
    // 0x151D0954: bne         $v0, $at, L_151D0998
    if (ctx->r2 != ctx->r1) {
        // 0x151D0958: addiu       $v0, $a3, 0x28
        ctx->r2 = ADD32(ctx->r7, 0X28);
            goto L_151D0998;
    }
    // 0x151D0958: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x151D095C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x151D0960: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151D0964: bnel        $v1, $a0, L_151D0984
    if (ctx->r3 != ctx->r4) {
        // 0x151D0968: lw          $t2, 0x4($a1)
        ctx->r10 = MEM_W(ctx->r5, 0X4);
            goto L_151D0984;
    }
    goto skip_2;
    // 0x151D0968: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
    skip_2:
    // 0x151D096C: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x151D0970: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x151D0974: lbu         $t1, 0x9($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X9);
    // 0x151D0978: b           L_151D0998
    // 0x151D097C: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
        goto L_151D0998;
    // 0x151D097C: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x151D0980: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
L_151D0984:
    // 0x151D0984: bnel        $t2, $a0, L_151D099C
    if (ctx->r10 != ctx->r4) {
        // 0x151D0988: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151D099C;
    }
    goto skip_3;
    // 0x151D0988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x151D098C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x151D0990: lbu         $t3, 0x8($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X8);
    // 0x151D0994: sb          $t3, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r11;
L_151D0998:
    // 0x151D0998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D099C:
    // 0x151D099C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D09A0: jr          $ra
    // 0x151D09A4: nop

    return;
    return;
    // 0x151D09A4: nop

;}
RECOMP_FUNC void func_151D3220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D3220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D3224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D3228: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D322C: jal         0x151D3130
    // 0x151D3230: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D3130(rdram, ctx);
        goto after_0;
    // 0x151D3230: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D3234: jal         0x15169824
    // 0x151D3238: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_1;
    // 0x151D3238: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151D323C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D3240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D3244: jr          $ra
    // 0x151D3248: nop

    return;
    return;
    // 0x151D3248: nop

;}
RECOMP_FUNC void func_1516F984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516F984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1516F988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516F98C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1516F990: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x1516F994: jal         0x1516F94C
    // 0x1516F998: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1516F94C(rdram, ctx);
        goto after_0;
    // 0x1516F998: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1516F99C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1516F9A0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x1516F9A4: lh          $v0, 0x18($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X18);
    // 0x1516F9A8: multu       $v0, $t6
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516F9AC: mflo        $v0
    ctx->r2 = lo;
    // 0x1516F9B0: sra         $t7, $v0, 8
    ctx->r15 = S32(SIGNED(ctx->r2) >> 8);
    // 0x1516F9B4: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
    // 0x1516F9B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1516F9BC: jr          $ra
    // 0x1516F9C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1516F9C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_150A7A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A7960:
    // 0x150A7A00: or          $t9, $ra, $zero
    ctx->r25 = ctx->r31 | 0;
    // 0x150A7A04: lui         $ra, 0x150A
    ctx->r31 = S32(0X150A << 16);
    // 0x150A7A08: addiu       $ra, $ra, 0x7A14
    ctx->r31 = ADD32(ctx->r31, 0X7A14);
    // 0x150A7A0C: j           L_150A7960
    // 0x150A7A10: nop

    func_150A7960(rdram, ctx);
    return;
    // 0x150A7A10: nop

;}
RECOMP_FUNC void func_1506F0C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506F0C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506F0C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506F0CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506F0D0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506F0D4: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506F0D8: jal         0x150C1260
    // 0x1506F0DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150C1260(rdram, ctx);
        goto after_0;
    // 0x1506F0DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x1506F0E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506F0E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506F0E8: jr          $ra
    // 0x1506F0EC: nop

    return;
    return;
    // 0x1506F0EC: nop

;}
RECOMP_FUNC void func_150A5AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A5AB8: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x150A5ABC: mtc1        $t1, $f30
    ctx->f30.u32l = ctx->r9;
    // 0x150A5AC0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150A5AC4: cvt.s.w     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.fl = CVT_S_W(ctx->f30.u32l);
    // 0x150A5AC8: mul.s       $f12, $f18, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150A5ACC: mtc1        $t2, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r10;
    // 0x150A5AD0: mul.s       $f11, $f18, $f20
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f11.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x150A5AD4: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x150A5AD8: mul.s       $f14, $f30, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f30.fl, ctx->f4.fl);
    // 0x150A5ADC: cvt.s.w     $f9, $f9
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    ctx->f9.fl = CVT_S_W(ctx->f_odd[(9 - 1) * 2]);
    // 0x150A5AE0: mul.s       $f13, $f30, $f22
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f13.fl = MUL_S(ctx->f30.fl, ctx->f22.fl);
    // 0x150A5AE4: add.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x150A5AE8: mul.s       $f14, $f9, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f9.fl, ctx->f6.fl);
    // 0x150A5AEC: add.s       $f11, $f11, $f26
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f26.fl;
    // 0x150A5AF0: add.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x150A5AF4: mul.s       $f10, $f9, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f9.fl, ctx->f24.fl);
    // 0x150A5AF8: c.ole.s     $f16, $f29
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 29);
    c1cs = ctx->f16.fl <= ctx->f29.fl;
    // 0x150A5AFC: bc1tl       L_150A5B14
    if (c1cs) {
        // 0x150A5B00: addiu       $t3, $zero, 0x10
        ctx->r11 = ADD32(0, 0X10);
            goto L_150A5B14;
    }
    goto skip_0;
    // 0x150A5B00: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    skip_0:
    // 0x150A5B04: c.ole.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x150A5B08: bc1tl       L_150A5B14
    if (c1cs) {
        // 0x150A5B0C: addiu       $t3, $zero, 0x20
        ctx->r11 = ADD32(0, 0X20);
            goto L_150A5B14;
    }
    goto skip_1;
    // 0x150A5B0C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    skip_1:
    // 0x150A5B10: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
L_150A5B14:
    // 0x150A5B14: add.s       $f13, $f11, $f13
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f13.fl = ctx->f11.fl + ctx->f13.fl;
    // 0x150A5B18: mul.s       $f12, $f18, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f1.fl);
    // 0x150A5B1C: add.s       $f14, $f13, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f13.fl + ctx->f10.fl;
    // 0x150A5B20: mul.s       $f11, $f30, $f3
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f11.fl = MUL_S(ctx->f30.fl, ctx->f3.fl);
    // 0x150A5B24: mfc1        $at, $f14
    ctx->r1 = (int32_t)ctx->f14.u32l;
    // 0x150A5B28: add.s       $f12, $f12, $f7
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f7.fl;
    // 0x150A5B2C: mul.s       $f10, $f9, $f5
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f10.fl = MUL_S(ctx->f9.fl, ctx->f5.fl);
    // 0x150A5B30: add.s       $f12, $f12, $f11
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f11.fl;
    // 0x150A5B34: abs.s       $f13, $f14
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f13.fl = fabsf(ctx->f14.fl);
    // 0x150A5B38: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x150A5B3C: mul.s       $f13, $f13, $f28
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f13.fl = MUL_S(ctx->f13.fl, ctx->f28.fl);
    // 0x150A5B40: abs.s       $f11, $f12
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f11.fl = fabsf(ctx->f12.fl);
    // 0x150A5B44: c.ole.s     $f16, $f13
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 13);
    c1cs = ctx->f16.fl <= ctx->f13.fl;
    // 0x150A5B48: mul.s       $f11, $f11, $f27
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f11.fl = MUL_S(ctx->f11.fl, ctx->f27.fl);
    // 0x150A5B4C: bc1t        L_150A5B60
    if (c1cs) {
        // 0x150A5B50: c.ole.s     $f16, $f11
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 11);
    c1cs = ctx->f16.fl <= ctx->f11.fl;
            goto L_150A5B60;
    }
    // 0x150A5B50: c.ole.s     $f16, $f11
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 11);
    c1cs = ctx->f16.fl <= ctx->f11.fl;
    // 0x150A5B54: bltzl       $at, L_150A5B60
    if (SIGNED(ctx->r1) < 0) {
        // 0x150A5B58: ori         $t3, $t3, 0x8
        ctx->r11 = ctx->r11 | 0X8;
            goto L_150A5B60;
    }
    goto skip_2;
    // 0x150A5B58: ori         $t3, $t3, 0x8
    ctx->r11 = ctx->r11 | 0X8;
    skip_2:
    // 0x150A5B5C: ori         $t3, $t3, 0x2
    ctx->r11 = ctx->r11 | 0X2;
L_150A5B60:
    // 0x150A5B60: bc1t        L_150A5B74
    if (c1cs) {
        // 0x150A5B64: mfc1        $at, $f12
        ctx->r1 = (int32_t)ctx->f12.u32l;
            goto L_150A5B74;
    }
    // 0x150A5B64: mfc1        $at, $f12
    ctx->r1 = (int32_t)ctx->f12.u32l;
    // 0x150A5B68: bltzl       $at, L_150A5B74
    if (SIGNED(ctx->r1) < 0) {
        // 0x150A5B6C: ori         $t3, $t3, 0x1
        ctx->r11 = ctx->r11 | 0X1;
            goto L_150A5B74;
    }
    goto skip_3;
    // 0x150A5B6C: ori         $t3, $t3, 0x1
    ctx->r11 = ctx->r11 | 0X1;
    skip_3:
    // 0x150A5B70: ori         $t3, $t3, 0x4
    ctx->r11 = ctx->r11 | 0X4;
L_150A5B74:
    // 0x150A5B74: bne         $t9, $zero, L_150A5B7C
    if (ctx->r25 != 0) {
        // 0x150A5B78: nop
    
            goto L_150A5B7C;
    }
    // 0x150A5B78: nop

L_150A5B7C:
    // 0x150A5B7C: jr          $ra
    // 0x150A5B80: nop

    return;
    return;
    // 0x150A5B80: nop

;}
RECOMP_FUNC void func_150619A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150619A8: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x150619AC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150619B0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x150619B4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x150619B8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150619BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150619C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150619C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150619C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150619CC: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x150619D0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x150619D4: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x150619D8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x150619DC: addiu       $s2, $sp, 0x5C
    ctx->r18 = ADD32(ctx->r29, 0X5C);
    // 0x150619E0: addiu       $s1, $zero, -0x2
    ctx->r17 = ADD32(0, -0X2);
L_150619E4:
    // 0x150619E4: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x150619E8: beql        $t6, $zero, L_15061A70
    if (ctx->r14 == 0) {
        // 0x150619EC: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_15061A70;
    }
    goto skip_0;
    // 0x150619EC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x150619F0: lbu         $v0, 0x2FD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2FD);
    // 0x150619F4: beq         $v0, $zero, L_15061A00
    if (ctx->r2 == 0) {
        // 0x150619F8: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_15061A00;
    }
    // 0x150619F8: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x150619FC: sb          $t7, 0x2FD($s0)
    MEM_B(0X2FD, ctx->r16) = ctx->r15;
L_15061A00:
    // 0x15061A00: jal         0x150617BC
    // 0x15061A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150617BC(rdram, ctx);
        goto after_0;
    // 0x15061A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15061A08: jal         0x150623F4
    // 0x15061A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150623F4(rdram, ctx);
        goto after_1;
    // 0x15061A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x15061A10: beql        $v0, $zero, L_15061A2C
    if (ctx->r2 == 0) {
        // 0x15061A14: lbu         $t0, 0x2FA($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X2FA);
            goto L_15061A2C;
    }
    goto skip_1;
    // 0x15061A14: lbu         $t0, 0x2FA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2FA);
    skip_1:
    // 0x15061A18: lbu         $t8, 0x2FA($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2FA);
    // 0x15061A1C: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x15061A20: b           L_15061A6C
    // 0x15061A24: sb          $t9, 0x2FA($s0)
    MEM_B(0X2FA, ctx->r16) = ctx->r25;
        goto L_15061A6C;
    // 0x15061A24: sb          $t9, 0x2FA($s0)
    MEM_B(0X2FA, ctx->r16) = ctx->r25;
    // 0x15061A28: lbu         $t0, 0x2FA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2FA);
L_15061A2C:
    // 0x15061A2C: lbu         $t2, 0x20B($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X20B);
    // 0x15061A30: addu        $t6, $s2, $s6
    ctx->r14 = ADD32(ctx->r18, ctx->r22);
    // 0x15061A34: and         $t1, $t0, $s1
    ctx->r9 = ctx->r8 & ctx->r17;
    // 0x15061A38: bne         $t2, $zero, L_15061A64
    if (ctx->r10 != 0) {
        // 0x15061A3C: sb          $t1, 0x2FA($s0)
        MEM_B(0X2FA, ctx->r16) = ctx->r9;
            goto L_15061A64;
    }
    // 0x15061A3C: sb          $t1, 0x2FA($s0)
    MEM_B(0X2FA, ctx->r16) = ctx->r9;
    // 0x15061A40: lbu         $t3, 0x20C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X20C);
    // 0x15061A44: bnel        $t3, $zero, L_15061A68
    if (ctx->r11 != 0) {
        // 0x15061A48: sb          $s4, 0x0($t6)
        MEM_B(0X0, ctx->r14) = ctx->r20;
            goto L_15061A68;
    }
    goto skip_2;
    // 0x15061A48: sb          $s4, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r20;
    skip_2:
    // 0x15061A4C: lbu         $t4, 0x20D($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X20D);
    // 0x15061A50: bnel        $t4, $zero, L_15061A68
    if (ctx->r12 != 0) {
        // 0x15061A54: sb          $s4, 0x0($t6)
        MEM_B(0X0, ctx->r14) = ctx->r20;
            goto L_15061A68;
    }
    goto skip_3;
    // 0x15061A54: sb          $s4, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r20;
    skip_3:
    // 0x15061A58: lbu         $t5, 0x20E($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X20E);
    // 0x15061A5C: beql        $t5, $zero, L_15061A70
    if (ctx->r13 == 0) {
        // 0x15061A60: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_15061A70;
    }
    goto skip_4;
    // 0x15061A60: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_4:
L_15061A64:
    // 0x15061A64: sb          $s4, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r20;
L_15061A68:
    // 0x15061A68: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_15061A6C:
    // 0x15061A6C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_15061A70:
    // 0x15061A70: slti        $at, $s4, 0x19
    ctx->r1 = SIGNED(ctx->r20) < 0X19 ? 1 : 0;
    // 0x15061A74: bne         $at, $zero, L_150619E4
    if (ctx->r1 != 0) {
        // 0x15061A78: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_150619E4;
    }
    // 0x15061A78: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    // 0x15061A7C: beql        $s6, $zero, L_15061B28
    if (ctx->r22 == 0) {
        // 0x15061A80: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_15061B28;
    }
    goto skip_5;
    // 0x15061A80: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_5:
    // 0x15061A84: blez        $s6, L_15061B24
    if (SIGNED(ctx->r22) <= 0) {
        // 0x15061A88: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_15061B24;
    }
    // 0x15061A88: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15061A8C: addiu       $s5, $sp, 0x5C
    ctx->r21 = ADD32(ctx->r29, 0X5C);
    // 0x15061A90: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_15061A94:
    // 0x15061A94: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x15061A98: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15061A9C: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x15061AA0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15061AA4: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x15061AA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15061AAC: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x15061AB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15061AB4: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x15061AB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15061ABC: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x15061AC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15061AC4: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x15061AC8: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x15061ACC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_15061AD0:
    // 0x15061AD0: lbu         $a0, 0x20B($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X20B);
    // 0x15061AD4: beql        $a0, $zero, L_15061B10
    if (ctx->r4 == 0) {
        // 0x15061AD8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15061B10;
    }
    goto skip_6;
    // 0x15061AD8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_6:
    // 0x15061ADC: jal         0x15083E90
    // 0x15061AE0: nop

    func_15083E90(rdram, ctx);
        goto after_2;
    // 0x15061AE0: nop

    after_2:
    // 0x15061AE4: beql        $v0, $zero, L_15061B10
    if (ctx->r2 == 0) {
        // 0x15061AE8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15061B10;
    }
    goto skip_7;
    // 0x15061AE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_7:
    // 0x15061AEC: lbu         $t9, 0x2FA($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2FA);
    // 0x15061AF0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x15061AF4: beql        $t0, $zero, L_15061B10
    if (ctx->r8 == 0) {
        // 0x15061AF8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15061B10;
    }
    goto skip_8;
    // 0x15061AF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_8:
    // 0x15061AFC: lbu         $t1, 0x2FA($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X2FA);
    // 0x15061B00: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x15061B04: b           L_15061B18
    // 0x15061B08: sb          $t2, 0x2FA($s3)
    MEM_B(0X2FA, ctx->r19) = ctx->r10;
        goto L_15061B18;
    // 0x15061B08: sb          $t2, 0x2FA($s3)
    MEM_B(0X2FA, ctx->r19) = ctx->r10;
    // 0x15061B0C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_15061B10:
    // 0x15061B10: bne         $s0, $s2, L_15061AD0
    if (ctx->r16 != ctx->r18) {
        // 0x15061B14: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15061AD0;
    }
    // 0x15061B14: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_15061B18:
    // 0x15061B18: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x15061B1C: bne         $s4, $s6, L_15061A94
    if (ctx->r20 != ctx->r22) {
        // 0x15061B20: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_15061A94;
    }
    // 0x15061B20: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_15061B24:
    // 0x15061B24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15061B28:
    // 0x15061B28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15061B2C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15061B30: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15061B34: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15061B38: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15061B3C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15061B40: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15061B44: jr          $ra
    // 0x15061B48: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x15061B48: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_15104A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15104A80: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15104A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15104A88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15104A8C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15104A90: lw          $t6, -0x410C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X410C);
    // 0x15104A94: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x15104A98: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15104A9C: subu        $v0, $a0, $t6
    ctx->r2 = SUB32(ctx->r4, ctx->r14);
    // 0x15104AA0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x15104AA4: lw          $t8, -0x406C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X406C);
    // 0x15104AA8: mflo        $t7
    ctx->r15 = lo;
    // 0x15104AAC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x15104AB0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x15104AB4: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x15104AB8: sll         $t1, $zero, 2
    ctx->r9 = S32(0 << 2);
    // 0x15104ABC: subu        $t1, $t1, $zero
    ctx->r9 = SUB32(ctx->r9, 0);
    // 0x15104AC0: beq         $a1, $zero, L_15104B20
    if (ctx->r5 == 0) {
        // 0x15104AC4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15104B20;
    }
    // 0x15104AC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15104AC8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x15104ACC: subu        $t1, $t1, $zero
    ctx->r9 = SUB32(ctx->r9, 0);
    // 0x15104AD0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x15104AD4: subu        $t1, $t1, $zero
    ctx->r9 = SUB32(ctx->r9, 0);
    // 0x15104AD8: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x15104ADC: addiu       $t2, $t2, -0x3D30
    ctx->r10 = ADD32(ctx->r10, -0X3D30);
    // 0x15104AE0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x15104AE4: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x15104AE8: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
L_15104AEC:
    // 0x15104AEC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15104AF0: sllv        $t5, $t4, $v0
    ctx->r13 = S32(ctx->r12 << (ctx->r2 & 31));
    // 0x15104AF4: beq         $t3, $zero, L_15104B08
    if (ctx->r11 == 0) {
        // 0x15104AF8: and         $t6, $a1, $t5
        ctx->r14 = ctx->r5 & ctx->r13;
            goto L_15104B08;
    }
    // 0x15104AF8: and         $t6, $a1, $t5
    ctx->r14 = ctx->r5 & ctx->r13;
    // 0x15104AFC: beql        $t6, $zero, L_15104B0C
    if (ctx->r14 == 0) {
        // 0x15104B00: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_15104B0C;
    }
    goto skip_0;
    // 0x15104B00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x15104B04: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_15104B08:
    // 0x15104B08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_15104B0C:
    // 0x15104B0C: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x15104B10: beq         $at, $zero, L_15104B20
    if (ctx->r1 == 0) {
        // 0x15104B14: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_15104B20;
    }
    // 0x15104B14: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x15104B18: beql        $a2, $zero, L_15104AEC
    if (ctx->r6 == 0) {
        // 0x15104B1C: lw          $t3, 0x0($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X0);
            goto L_15104AEC;
    }
    goto skip_1;
    // 0x15104B1C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    skip_1:
L_15104B20:
    // 0x15104B20: addiu       $v1, $zero, 0xF9
    ctx->r3 = ADD32(0, 0XF9);
    // 0x15104B24: lbu         $v0, 0x72($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X72);
    // 0x15104B28: addiu       $at, $zero, 0xF8
    ctx->r1 = ADD32(0, 0XF8);
    // 0x15104B2C: beql        $v1, $v0, L_15104B48
    if (ctx->r3 == ctx->r2) {
        // 0x15104B30: sw          $a2, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r6;
            goto L_15104B48;
    }
    goto skip_2;
    // 0x15104B30: sw          $a2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r6;
    skip_2:
    // 0x15104B34: beq         $v0, $at, L_15104B44
    if (ctx->r2 == ctx->r1) {
        // 0x15104B38: addiu       $at, $zero, 0xF7
        ctx->r1 = ADD32(0, 0XF7);
            goto L_15104B44;
    }
    // 0x15104B38: addiu       $at, $zero, 0xF7
    ctx->r1 = ADD32(0, 0XF7);
    // 0x15104B3C: bnel        $v0, $at, L_15104C20
    if (ctx->r2 != ctx->r1) {
        // 0x15104B40: addiu       $at, $zero, 0xF6
        ctx->r1 = ADD32(0, 0XF6);
            goto L_15104C20;
    }
    goto skip_3;
    // 0x15104B40: addiu       $at, $zero, 0xF6
    ctx->r1 = ADD32(0, 0XF6);
    skip_3:
L_15104B44:
    // 0x15104B44: sw          $a2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r6;
L_15104B48:
    // 0x15104B48: lbu         $v0, 0x72($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X72);
    // 0x15104B4C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x15104B50: addiu       $t7, $t7, 0x2380
    ctx->r15 = ADD32(ctx->r15, 0X2380);
    // 0x15104B54: bnel        $v1, $v0, L_15104B90
    if (ctx->r3 != ctx->r2) {
        // 0x15104B58: addiu       $at, $zero, 0xF8
        ctx->r1 = ADD32(0, 0XF8);
            goto L_15104B90;
    }
    goto skip_4;
    // 0x15104B58: addiu       $at, $zero, 0xF8
    ctx->r1 = ADD32(0, 0XF8);
    skip_4:
    // 0x15104B5C: addiu       $v0, $sp, 0x40
    ctx->r2 = ADD32(ctx->r29, 0X40);
    // 0x15104B60: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x15104B64: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x15104B68: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x15104B6C: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x15104B70: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x15104B74: lbu         $at, 0x8($t7)
    ctx->r1 = MEM_BU(ctx->r15, 0X8);
    // 0x15104B78: sb          $at, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r1;
    // 0x15104B7C: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x15104B80: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x15104B84: b           L_15104C0C
    // 0x15104B88: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
        goto L_15104C0C;
    // 0x15104B88: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x15104B8C: addiu       $at, $zero, 0xF8
    ctx->r1 = ADD32(0, 0XF8);
L_15104B90:
    // 0x15104B90: bnel        $v0, $at, L_15104BD4
    if (ctx->r2 != ctx->r1) {
        // 0x15104B94: addiu       $at, $zero, 0xF7
        ctx->r1 = ADD32(0, 0XF7);
            goto L_15104BD4;
    }
    goto skip_5;
    // 0x15104B94: addiu       $at, $zero, 0xF7
    ctx->r1 = ADD32(0, 0XF7);
    skip_5:
    // 0x15104B98: addiu       $v0, $sp, 0x34
    ctx->r2 = ADD32(ctx->r29, 0X34);
    // 0x15104B9C: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x15104BA0: addiu       $t1, $t1, 0x238C
    ctx->r9 = ADD32(ctx->r9, 0X238C);
    // 0x15104BA4: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x15104BA8: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x15104BAC: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x15104BB0: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x15104BB4: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x15104BB8: lbu         $at, 0x8($t1)
    ctx->r1 = MEM_BU(ctx->r9, 0X8);
    // 0x15104BBC: sb          $at, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r1;
    // 0x15104BC0: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x15104BC4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x15104BC8: b           L_15104C0C
    // 0x15104BCC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
        goto L_15104C0C;
    // 0x15104BCC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x15104BD0: addiu       $at, $zero, 0xF7
    ctx->r1 = ADD32(0, 0XF7);
L_15104BD4:
    // 0x15104BD4: bne         $v0, $at, L_15104C08
    if (ctx->r2 != ctx->r1) {
        // 0x15104BD8: addiu       $v0, $sp, 0x28
        ctx->r2 = ADD32(ctx->r29, 0X28);
            goto L_15104C08;
    }
    // 0x15104BD8: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x15104BDC: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x15104BE0: addiu       $t5, $t5, 0x2398
    ctx->r13 = ADD32(ctx->r13, 0X2398);
    // 0x15104BE4: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x15104BE8: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x15104BEC: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x15104BF0: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x15104BF4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x15104BF8: lbu         $at, 0x8($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X8);
    // 0x15104BFC: sb          $at, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r1;
    // 0x15104C00: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x15104C04: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
L_15104C08:
    // 0x15104C08: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
L_15104C0C:
    // 0x15104C0C: jal         0x151494E0
    // 0x15104C10: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    func_151494E0(rdram, ctx);
        goto after_0;
    // 0x15104C10: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_0:
    // 0x15104C14: b           L_15104C38
    // 0x15104C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15104C38;
    // 0x15104C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15104C1C: addiu       $at, $zero, 0xF6
    ctx->r1 = ADD32(0, 0XF6);
L_15104C20:
    // 0x15104C20: bne         $v0, $at, L_15104C34
    if (ctx->r2 != ctx->r1) {
        // 0x15104C24: addiu       $a0, $sp, 0x24
        ctx->r4 = ADD32(ctx->r29, 0X24);
            goto L_15104C34;
    }
    // 0x15104C24: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x15104C28: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x15104C2C: jal         0x151494E0
    // 0x15104C30: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_151494E0(rdram, ctx);
        goto after_1;
    // 0x15104C30: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_1:
L_15104C34:
    // 0x15104C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15104C38:
    // 0x15104C38: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x15104C3C: jr          $ra
    // 0x15104C40: nop

    return;
    return;
    // 0x15104C40: nop

;}
RECOMP_FUNC void func_150807F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150807F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150807F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150807FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15080800: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15080804: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x15080808: bnel        $a2, $at, L_1508081C
    if (ctx->r6 != ctx->r1) {
        // 0x1508080C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1508081C;
    }
    goto skip_0;
    // 0x1508080C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15080810: jal         0x15080784
    // 0x15080814: nop

    func_15080784(rdram, ctx);
        goto after_0;
    // 0x15080814: nop

    after_0:
    // 0x15080818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1508081C:
    // 0x1508081C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15080820: jr          $ra
    // 0x15080824: nop

    return;
    return;
    // 0x15080824: nop

;}
RECOMP_FUNC void func_151C5F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C5F44: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x151C5F48: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x151C5F4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151C5F50: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x151C5F54: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x151C5F58: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x151C5F5C: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x151C5F60: addiu       $t6, $zero, 0x6C
    ctx->r14 = ADD32(0, 0X6C);
    // 0x151C5F64: addiu       $t7, $zero, 0x5103
    ctx->r15 = ADD32(0, 0X5103);
    // 0x151C5F68: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x151C5F6C: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x151C5F70: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x151C5F74: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    // 0x151C5F78: sb          $t6, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r14;
    // 0x151C5F7C: sh          $t7, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r15;
    // 0x151C5F80: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x151C5F84: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x151C5F88: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x151C5F8C: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x151C5F90: sh          $t9, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r25;
    // 0x151C5F94: jal         0x150ADA20
    // 0x151C5F98: sh          $t0, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151C5F98: sh          $t0, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r8;
    after_0:
    // 0x151C5F9C: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x151C5FA0: beq         $t1, $zero, L_151C5FB0
    if (ctx->r9 == 0) {
        // 0x151C5FA4: lh          $a1, 0xC6($sp)
        ctx->r5 = MEM_H(ctx->r29, 0XC6);
            goto L_151C5FB0;
    }
    // 0x151C5FA4: lh          $a1, 0xC6($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XC6);
    // 0x151C5FA8: b           L_151C5FB4
    // 0x151C5FAC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
        goto L_151C5FB4;
    // 0x151C5FAC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
L_151C5FB0:
    // 0x151C5FB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_151C5FB4:
    // 0x151C5FB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151C5FB8: bne         $a1, $at, L_151C5FC8
    if (ctx->r5 != ctx->r1) {
        // 0x151C5FBC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_151C5FC8;
    }
    // 0x151C5FBC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151C5FC0: b           L_151C5FC8
    // 0x151C5FC4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151C5FC8;
    // 0x151C5FC4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151C5FC8:
    // 0x151C5FC8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x151C5FCC: jal         0x150ADA20
    // 0x151C5FD0: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151C5FD0: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_1:
    // 0x151C5FD4: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x151C5FD8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x151C5FDC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x151C5FE0: beq         $t2, $zero, L_151C5FF0
    if (ctx->r10 == 0) {
        // 0x151C5FE4: lh          $a1, 0xC6($sp)
        ctx->r5 = MEM_H(ctx->r29, 0XC6);
            goto L_151C5FF0;
    }
    // 0x151C5FE4: lh          $a1, 0xC6($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XC6);
    // 0x151C5FE8: b           L_151C5FF4
    // 0x151C5FEC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_151C5FF4;
    // 0x151C5FEC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_151C5FF0:
    // 0x151C5FF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C5FF4:
    // 0x151C5FF4: or          $t4, $v0, $v1
    ctx->r12 = ctx->r2 | ctx->r3;
    // 0x151C5FF8: ori         $t5, $t4, 0x6
    ctx->r13 = ctx->r12 | 0X6;
    // 0x151C5FFC: lbu         $t3, 0xCF($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XCF);
    // 0x151C6000: or          $t8, $t5, $a0
    ctx->r24 = ctx->r13 | ctx->r4;
    // 0x151C6004: ori         $t9, $t8, 0xC200
    ctx->r25 = ctx->r24 | 0XC200;
    // 0x151C6008: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x151C600C: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x151C6010: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x151C6014: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x151C6018: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
    // 0x151C601C: sb          $t1, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r9;
    // 0x151C6020: beq         $t3, $zero, L_151C6034
    if (ctx->r11 == 0) {
        // 0x151C6024: sb          $t2, 0xA1($sp)
        MEM_B(0XA1, ctx->r29) = ctx->r10;
            goto L_151C6034;
    }
    // 0x151C6024: sb          $t2, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r10;
    // 0x151C6028: addiu       $t4, $zero, 0x1D
    ctx->r12 = ADD32(0, 0X1D);
    // 0x151C602C: b           L_151C603C
    // 0x151C6030: sb          $t4, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r12;
        goto L_151C603C;
    // 0x151C6030: sb          $t4, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r12;
L_151C6034:
    // 0x151C6034: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x151C6038: sb          $t5, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r13;
L_151C603C:
    // 0x151C603C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C6040: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C6044: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151C6048: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C604C: lwc1        $f6, -0x5510($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5510);
    // 0x151C6050: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x151C6054: sh          $t8, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r24;
    // 0x151C6058: lw          $t8, 0xB0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB0);
    // 0x151C605C: sb          $t6, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r14;
    // 0x151C6060: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151C6064: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151C6068: addiu       $t0, $zero, 0xE2
    ctx->r8 = ADD32(0, 0XE2);
    // 0x151C606C: addiu       $t1, $zero, 0xB2
    ctx->r9 = ADD32(0, 0XB2);
    // 0x151C6070: addiu       $t2, $zero, 0x60
    ctx->r10 = ADD32(0, 0X60);
    // 0x151C6074: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151C6078: addiu       $t4, $zero, 0x39
    ctx->r12 = ADD32(0, 0X39);
    // 0x151C607C: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x151C6080: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151C6084: sb          $t7, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r15;
    // 0x151C6088: sb          $zero, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = 0;
    // 0x151C608C: sb          $t9, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r25;
    // 0x151C6090: sb          $zero, 0x31($sp)
    MEM_B(0X31, ctx->r29) = 0;
    // 0x151C6094: sb          $t0, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r8;
    // 0x151C6098: sb          $t1, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r9;
    // 0x151C609C: sb          $t2, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r10;
    // 0x151C60A0: sb          $t3, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r11;
    // 0x151C60A4: sb          $t4, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r12;
    // 0x151C60A8: sb          $t5, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r13;
    // 0x151C60AC: sb          $zero, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = 0;
    // 0x151C60B0: sb          $t6, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r14;
    // 0x151C60B4: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x151C60B8: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x151C60BC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151C60C0: addiu       $t7, $sp, 0x70
    ctx->r15 = ADD32(ctx->r29, 0X70);
    // 0x151C60C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151C60C8: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151C60CC: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x151C60D0: addiu       $t2, $sp, 0x88
    ctx->r10 = ADD32(ctx->r29, 0X88);
    // 0x151C60D4: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x151C60D8: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x151C60DC: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x151C60E0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x151C60E4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x151C60E8: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x151C60EC: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x151C60F0: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x151C60F4: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x151C60F8: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x151C60FC: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x151C6100: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151C6104: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x151C6108: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x151C610C: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x151C6110: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151C6114: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x151C6118: lbu         $t0, 0xC3($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XC3);
    // 0x151C611C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151C6120: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x151C6124: bne         $a1, $at, L_151C6134
    if (ctx->r5 != ctx->r1) {
        // 0x151C6128: sb          $t0, 0x5B($sp)
        MEM_B(0X5B, ctx->r29) = ctx->r8;
            goto L_151C6134;
    }
    // 0x151C6128: sb          $t0, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r8;
    // 0x151C612C: b           L_151C6138
    // 0x151C6130: sh          $t9, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r25;
        goto L_151C6138;
    // 0x151C6130: sh          $t9, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r25;
L_151C6134:
    // 0x151C6134: sh          $a1, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r5;
L_151C6138:
    // 0x151C6138: lwc1        $f0, 0xC8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x151C613C: lbu         $t7, 0xD7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XD7);
    // 0x151C6140: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x151C6144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151C6148: lw          $a2, 0xD0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD0);
    // 0x151C614C: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x151C6150: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x151C6154: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151C6158: jal         0x15130280
    // 0x151C615C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_15130280(rdram, ctx);
        goto after_2;
    // 0x151C615C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_2:
    // 0x151C6160: beq         $v0, $zero, L_151C618C
    if (ctx->r2 == 0) {
        // 0x151C6164: sw          $v0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r2;
            goto L_151C618C;
    }
    // 0x151C6164: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x151C6168: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x151C616C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x151C6170: jal         0x10022EC0
    // 0x151C6174: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151C6174: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x151C6178: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x151C617C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x151C6180: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x151C6184: jal         0x10022EC0
    // 0x151C6188: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x151C6188: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    after_4:
L_151C618C:
    // 0x151C618C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x151C6190: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151C6194: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x151C6198: jr          $ra
    // 0x151C619C: nop

    return;
    return;
    // 0x151C619C: nop

;}
RECOMP_FUNC void func_151639D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151639D0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151639D4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151639D8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151639DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151639E0: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x151639E4: bne         $a2, $at, L_151639FC
    if (ctx->r6 != ctx->r1) {
        // 0x151639E8: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_151639FC;
    }
    // 0x151639E8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151639EC: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x151639F0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151639F4: jr          $ra
    // 0x151639F8: sb          $t7, 0x9($t8)
    MEM_B(0X9, ctx->r24) = ctx->r15;
    return;
    return;
    // 0x151639F8: sb          $t7, 0x9($t8)
    MEM_B(0X9, ctx->r24) = ctx->r15;
L_151639FC:
    // 0x151639FC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x15163A00: bne         $v0, $at, L_15163A10
    if (ctx->r2 != ctx->r1) {
        // 0x15163A04: nop
    
            goto L_15163A10;
    }
    // 0x15163A04: nop

    // 0x15163A08: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x15163A0C: sb          $zero, 0x9($t9)
    MEM_B(0X9, ctx->r25) = 0;
L_15163A10:
    // 0x15163A10: jr          $ra
    // 0x15163A14: nop

    return;
    return;
    // 0x15163A14: nop

;}
RECOMP_FUNC void func_1506FFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FFAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FFB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FFB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FFB8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FFBC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FFC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1506FFC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1506FFC8: jal         0x150CBF80
    // 0x1506FFCC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_150CBF80(rdram, ctx);
        goto after_0;
    // 0x1506FFCC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x1506FFD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FFD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FFD8: jr          $ra
    // 0x1506FFDC: nop

    return;
    return;
    // 0x1506FFDC: nop

;}
RECOMP_FUNC void func_1519BF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519BF8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1519BF90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1519BF94: addiu       $a0, $zero, 0x1AA
    ctx->r4 = ADD32(0, 0X1AA);
    // 0x1519BF98: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x1519BF9C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1519BFA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1519BFA4: jal         0x10010F30
    // 0x1519BFA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_0;
    // 0x1519BFA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x1519BFAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1519BFB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1519BFB4: jr          $ra
    // 0x1519BFB8: nop

    return;
    return;
    // 0x1519BFB8: nop

;}
RECOMP_FUNC void func_15111858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15111858: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x1511185C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x15111860: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x15111864: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x15111868: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x1511186C: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x15111870: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x15111874: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x15111878: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x1511187C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x15111880: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x15111884: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x15111888: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x1511188C: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x15111890: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x15111894: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x15111898: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1511189C: ori         $a0, $zero, 0xFA00
    ctx->r4 = 0 | 0XFA00;
    // 0x151118A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151118A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151118A8: jal         0x10003C40
    // 0x151118AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x151118AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x151118B0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151118B4: lui         $at, 0x42B2
    ctx->r1 = S32(0X42B2 << 16);
    // 0x151118B8: addiu       $a0, $a0, -0x4180
    ctx->r4 = ADD32(ctx->r4, -0X4180);
    // 0x151118BC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x151118C0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x151118C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151118C8: lwc1        $f26, 0x2F24($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X2F24);
    // 0x151118CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151118D0: lui         $s5, 0xC
    ctx->r21 = S32(0XC << 16);
    // 0x151118D4: lui         $s4, 0x18
    ctx->r20 = S32(0X18 << 16);
    // 0x151118D8: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x151118DC: ori         $s4, $s4, 0x2D10
    ctx->r20 = ctx->r20 | 0X2D10;
    // 0x151118E0: ori         $s5, $s5, 0x1624
    ctx->r21 = ctx->r21 | 0X1624;
    // 0x151118E4: lwc1        $f24, 0x2F28($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X2F28);
    // 0x151118E8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151118EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151118F0: addiu       $fp, $zero, 0x5
    ctx->r30 = ADD32(0, 0X5);
    // 0x151118F4: addiu       $s7, $zero, 0xBF
    ctx->r23 = ADD32(0, 0XBF);
    // 0x151118F8: lui         $s6, 0x1
    ctx->r22 = S32(0X1 << 16);
    // 0x151118FC: ori         $s3, $zero, 0x8CA0
    ctx->r19 = 0 | 0X8CA0;
    // 0x15111900: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
L_15111904:
    // 0x15111904: jal         0x150ADA20
    // 0x15111908: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15111908: nop

    after_1:
    // 0x1511190C: divu        $zero, $v0, $s3
    lo = S32(U32(ctx->r2) / U32(ctx->r19)); hi = S32(U32(ctx->r2) % U32(ctx->r19));
    // 0x15111910: mfhi        $t6
    ctx->r14 = hi;
    // 0x15111914: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15111918: bne         $s3, $zero, L_15111924
    if (ctx->r19 != 0) {
        // 0x1511191C: nop
    
            goto L_15111924;
    }
    // 0x1511191C: nop

    // 0x15111920: break       7
    do_break(353442080);
L_15111924:
    // 0x15111924: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15111928: bgez        $t6, L_1511193C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1511192C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1511193C;
    }
    // 0x1511192C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15111930: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15111934: nop

    // 0x15111938: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1511193C:
    // 0x1511193C: mul.s       $f22, $f6, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x15111940: jal         0x150ADA20
    // 0x15111944: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15111944: nop

    after_2:
    // 0x15111948: divu        $zero, $v0, $s4
    lo = S32(U32(ctx->r2) / U32(ctx->r20)); hi = S32(U32(ctx->r2) % U32(ctx->r20));
    // 0x1511194C: mfhi        $t7
    ctx->r15 = hi;
    // 0x15111950: subu        $t8, $t7, $s5
    ctx->r24 = SUB32(ctx->r15, ctx->r21);
    // 0x15111954: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15111958: bne         $s4, $zero, L_15111964
    if (ctx->r20 != 0) {
        // 0x1511195C: nop
    
            goto L_15111964;
    }
    // 0x1511195C: nop

    // 0x15111960: break       7
    do_break(353442144);
L_15111964:
    // 0x15111964: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15111968: mul.s       $f2, $f16, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f26.fl);
    // 0x1511196C: c.le.s      $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl <= ctx->f2.fl;
    // 0x15111970: nop

    // 0x15111974: bc1fl       L_1511198C
    if (!c1cs) {
        // 0x15111978: neg.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
            goto L_1511198C;
    }
    goto skip_0;
    // 0x15111978: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    skip_0:
    // 0x1511197C: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
    // 0x15111980: b           L_151119A0
    // 0x15111984: sub.s       $f12, $f30, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f30.fl - ctx->f0.fl;
        goto L_151119A0;
    // 0x15111984: sub.s       $f12, $f30, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f30.fl - ctx->f0.fl;
    // 0x15111988: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_1511198C:
    // 0x1511198C: lui         $at, 0xC2B2
    ctx->r1 = S32(0XC2B2 << 16);
    // 0x15111990: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15111994: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15111998: nop

    // 0x1511199C: add.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f18.fl;
L_151119A0:
    // 0x151119A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151119A4: lwc1        $f4, 0x2F2C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2F2C);
    // 0x151119A8: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x151119AC: jal         0x150AD78C
    // 0x151119B0: nop

    func_150AD78C(rdram, ctx);
        goto after_3;
    // 0x151119B0: nop

    after_3:
    // 0x151119B4: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x151119B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151119BC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x151119C0: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151119C4: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151119C8: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x151119CC: nop

    // 0x151119D0: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151119D4: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x151119D8: nop

    // 0x151119DC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151119E0: mflo        $t1
    ctx->r9 = lo;
    // 0x151119E4: subu        $t2, $s6, $t1
    ctx->r10 = SUB32(ctx->r22, ctx->r9);
    // 0x151119E8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x151119EC: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x151119F0: lhu         $t0, 0x0($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X0);
    // 0x151119F4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151119F8: sh          $t0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r8;
    // 0x151119FC: jal         0x150AD78C
    // 0x15111A00: sqrt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = sqrtf(ctx->f0.fl);
    func_150AD78C(rdram, ctx);
        goto after_4;
    // 0x15111A00: sqrt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = sqrtf(ctx->f0.fl);
    after_4:
    // 0x15111A04: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x15111A08: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x15111A0C: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15111A10: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x15111A14: nop

    // 0x15111A18: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x15111A1C: nop

    // 0x15111A20: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15111A24: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x15111A28: lhu         $t5, 0x0($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X0);
    // 0x15111A2C: jal         0x150AD780
    // 0x15111A30: sh          $t5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r13;
    func_150AD780(rdram, ctx);
        goto after_5;
    // 0x15111A30: sh          $t5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r13;
    after_5:
    // 0x15111A34: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x15111A38: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15111A3C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x15111A40: nop

    // 0x15111A44: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x15111A48: nop

    // 0x15111A4C: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15111A50: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x15111A54: lhu         $t8, 0x0($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X0);
    // 0x15111A58: jal         0x150ADA20
    // 0x15111A5C: sh          $t8, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x15111A5C: sh          $t8, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r24;
    after_6:
    // 0x15111A60: divu        $zero, $v0, $s7
    lo = S32(U32(ctx->r2) / U32(ctx->r23)); hi = S32(U32(ctx->r2) % U32(ctx->r23));
    // 0x15111A64: mfhi        $t9
    ctx->r25 = hi;
    // 0x15111A68: addiu       $t0, $t9, 0x40
    ctx->r8 = ADD32(ctx->r25, 0X40);
    // 0x15111A6C: bne         $s7, $zero, L_15111A78
    if (ctx->r23 != 0) {
        // 0x15111A70: nop
    
            goto L_15111A78;
    }
    // 0x15111A70: nop

    // 0x15111A74: break       7
    do_break(353442420);
L_15111A78:
    // 0x15111A78: sb          $t0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r8;
    // 0x15111A7C: jal         0x150ADA20
    // 0x15111A80: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15111A80: nop

    after_7:
    // 0x15111A84: divu        $zero, $v0, $fp
    lo = S32(U32(ctx->r2) / U32(ctx->r30)); hi = S32(U32(ctx->r2) % U32(ctx->r30));
    // 0x15111A88: mfhi        $t1
    ctx->r9 = hi;
    // 0x15111A8C: sb          $t1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r9;
    // 0x15111A90: bne         $fp, $zero, L_15111A9C
    if (ctx->r30 != 0) {
        // 0x15111A94: nop
    
            goto L_15111A9C;
    }
    // 0x15111A94: nop

    // 0x15111A98: break       7
    do_break(353442456);
L_15111A9C:
    // 0x15111A9C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15111AA0: addiu       $at, $zero, 0x1F40
    ctx->r1 = ADD32(0, 0X1F40);
    // 0x15111AA4: bne         $s1, $at, L_15111904
    if (ctx->r17 != ctx->r1) {
        // 0x15111AA8: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_15111904;
    }
    // 0x15111AA8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15111AAC: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x15111AB0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15111AB4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15111AB8: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x15111ABC: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x15111AC0: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x15111AC4: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x15111AC8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x15111ACC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x15111AD0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x15111AD4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x15111AD8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x15111ADC: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x15111AE0: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x15111AE4: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x15111AE8: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x15111AEC: jr          $ra
    // 0x15111AF0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x15111AF0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_151E22BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E22BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151E22C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151E22C4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x151E22C8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151E22CC: lw          $t6, -0x22C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X22C);
    // 0x151E22D0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x151E22D4: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x151E22D8: lb          $t7, 0x42($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X42);
    // 0x151E22DC: lw          $t0, 0x2BBC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2BBC);
    // 0x151E22E0: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x151E22E4: multu       $t7, $a0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E22E8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151E22EC: mflo        $t8
    ctx->r24 = lo;
    // 0x151E22F0: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x151E22F4: lb          $a1, -0x4970($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X4970);
    // 0x151E22F8: multu       $a1, $a0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E22FC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x151E2300: mflo        $t9
    ctx->r25 = lo;
    // 0x151E2304: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x151E2308: lbu         $v1, 0x3($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3);
    // 0x151E230C: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x151E2310: bne         $at, $zero, L_151E2320
    if (ctx->r1 != 0) {
        // 0x151E2314: nop
    
            goto L_151E2320;
    }
    // 0x151E2314: nop

    // 0x151E2318: sb          $t1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r9;
    // 0x151E231C: andi        $v1, $t1, 0xFF
    ctx->r3 = ctx->r9 & 0XFF;
L_151E2320:
    // 0x151E2320: bgezl       $v1, L_151E2330
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151E2324: lb          $a0, 0x1($v0)
        ctx->r4 = MEM_B(ctx->r2, 0X1);
            goto L_151E2330;
    }
    goto skip_0;
    // 0x151E2324: lb          $a0, 0x1($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X1);
    skip_0:
    // 0x151E2328: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x151E232C: lb          $a0, 0x1($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X1);
L_151E2330:
    // 0x151E2330: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E2334: addiu       $v1, $v1, 0xBE0
    ctx->r3 = ADD32(ctx->r3, 0XBE0);
    // 0x151E2338: bgtzl       $a0, L_151E234C
    if (SIGNED(ctx->r4) > 0) {
        // 0x151E233C: sb          $a0, 0x2($v1)
        MEM_B(0X2, ctx->r3) = ctx->r4;
            goto L_151E234C;
    }
    goto skip_1;
    // 0x151E233C: sb          $a0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r4;
    skip_1:
    // 0x151E2340: sb          $t2, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r10;
    // 0x151E2344: lb          $a0, 0x1($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X1);
    // 0x151E2348: sb          $a0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r4;
L_151E234C:
    // 0x151E234C: lb          $t3, 0x2($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X2);
    // 0x151E2350: sb          $zero, 0xB($v1)
    MEM_B(0XB, ctx->r3) = 0;
    // 0x151E2354: sltiu       $at, $a1, 0xA
    ctx->r1 = ctx->r5 < 0XA ? 1 : 0;
    // 0x151E2358: sb          $t3, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r11;
    // 0x151E235C: lbu         $t4, 0x3($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X3);
    // 0x151E2360: sb          $t4, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r12;
    // 0x151E2364: lbu         $t5, 0x4($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X4);
    // 0x151E2368: beq         $at, $zero, L_151E23E0
    if (ctx->r1 == 0) {
        // 0x151E236C: sb          $t5, 0x11($v1)
        MEM_B(0X11, ctx->r3) = ctx->r13;
            goto L_151E23E0;
    }
    // 0x151E236C: sb          $t5, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r13;
    // 0x151E2370: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151E2374: addu        $at, $at, $t6
    gpr jr_addend_151E237C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x151E2378: lw          $t6, -0x466C($at)
    ctx->r14 = ADD32(ctx->r1, -0X466C);
    // 0x151E237C: jr          $t6
    // 0x151E2380: nop

    switch (jr_addend_151E237C >> 2) {
        case 0: goto L_151E2384; break;
        case 1: goto L_151E2390; break;
        case 2: goto L_151E2390; break;
        case 3: goto L_151E23E0; break;
        case 4: goto L_151E23E0; break;
        case 5: goto L_151E23B0; break;
        case 6: goto L_151E23E0; break;
        case 7: goto L_151E23A4; break;
        case 8: goto L_151E23C0; break;
        case 9: goto L_151E23C0; break;
        default: switch_error(__func__, 0x151E237C, 0x800AB994);
    }
    // 0x151E2380: nop

L_151E2384:
    // 0x151E2384: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
    // 0x151E2388: b           L_151E23E0
    // 0x151E238C: sb          $t7, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r15;
        goto L_151E23E0;
    // 0x151E238C: sb          $t7, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r15;
L_151E2390:
    // 0x151E2390: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x151E2394: sb          $t8, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r24;
    // 0x151E2398: lbu         $t9, 0x6($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X6);
    // 0x151E239C: b           L_151E23E0
    // 0x151E23A0: sb          $t9, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r25;
        goto L_151E23E0;
    // 0x151E23A0: sb          $t9, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r25;
L_151E23A4:
    // 0x151E23A4: lbu         $t0, 0x5($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X5);
    // 0x151E23A8: b           L_151E23E0
    // 0x151E23AC: sb          $t0, 0x12($v1)
    MEM_B(0X12, ctx->r3) = ctx->r8;
        goto L_151E23E0;
    // 0x151E23AC: sb          $t0, 0x12($v1)
    MEM_B(0X12, ctx->r3) = ctx->r8;
L_151E23B0:
    // 0x151E23B0: sb          $zero, 0x11($v1)
    MEM_B(0X11, ctx->r3) = 0;
    // 0x151E23B4: lbu         $t1, 0x5($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X5);
    // 0x151E23B8: b           L_151E23E0
    // 0x151E23BC: sb          $t1, 0x12($v1)
    MEM_B(0X12, ctx->r3) = ctx->r9;
        goto L_151E23E0;
    // 0x151E23BC: sb          $t1, 0x12($v1)
    MEM_B(0X12, ctx->r3) = ctx->r9;
L_151E23C0:
    // 0x151E23C0: lbu         $t2, 0x5($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X5);
    // 0x151E23C4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151E23C8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x151E23CC: sb          $t2, 0x7($v1)
    MEM_B(0X7, ctx->r3) = ctx->r10;
    // 0x151E23D0: lbu         $t3, 0x6($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X6);
    // 0x151E23D4: sb          $t4, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r12;
    // 0x151E23D8: sb          $t5, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r13;
    // 0x151E23DC: sb          $t3, 0x13($v1)
    MEM_B(0X13, ctx->r3) = ctx->r11;
L_151E23E0:
    // 0x151E23E0: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x151E23E4: sb          $t6, 0x16($v1)
    MEM_B(0X16, ctx->r3) = ctx->r14;
    // 0x151E23E8: lbu         $t7, 0x9($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X9);
    // 0x151E23EC: jal         0x151DD9E4
    // 0x151E23F0: sb          $t7, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r15;
    func_151DD9E4(rdram, ctx);
        goto after_0;
    // 0x151E23F0: sb          $t7, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r15;
    after_0:
    // 0x151E23F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151E23F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151E23FC: jr          $ra
    // 0x151E2400: nop

    return;
    return;
    // 0x151E2400: nop

;}
RECOMP_FUNC void func_151B8CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B8CFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151B8D00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B8D04: lwc1        $f12, 0x118($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X118);
    // 0x151B8D08: jal         0x15047D60
    // 0x151B8D0C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x151B8D0C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x151B8D10: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x151B8D14: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151B8D18: addiu       $v1, $a0, 0x110
    ctx->r3 = ADD32(ctx->r4, 0X110);
    // 0x151B8D1C: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151B8D20: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151B8D24: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151B8D28: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151B8D2C: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x151B8D30: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151B8D34: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151B8D38: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151B8D3C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151B8D40: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151B8D44: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x151B8D48: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151B8D4C: jal         0x15144B68
    // 0x151B8D50: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_15144B68(rdram, ctx);
        goto after_1;
    // 0x151B8D50: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x151B8D54: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x151B8D58: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x151B8D5C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x151B8D60: addiu       $a1, $a1, -0x165C
    ctx->r5 = ADD32(ctx->r5, -0X165C);
    // 0x151B8D64: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x151B8D68: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151B8D6C: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x151B8D70: lwc1        $f6, 0x40($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X40);
    // 0x151B8D74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151B8D78: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B8D7C: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x151B8D80: lwc1        $f6, 0x48($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X48);
    // 0x151B8D84: swc1        $f4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f4.u32l;
    // 0x151B8D88: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151B8D8C: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x151B8D90: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151B8D94: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151B8D98: swc1        $f18, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f18.u32l;
    // 0x151B8D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B8DA0: jr          $ra
    // 0x151B8DA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151B8DA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_15076250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076250: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15076254: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15076258: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507625C: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15076260: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15076264: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15076268: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x1507626C: lbu         $t1, 0x1892($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1892);
    // 0x15076270: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15076274: addiu       $t9, $zero, 0x1F4
    ctx->r25 = ADD32(0, 0X1F4);
    // 0x15076278: addiu       $t0, $zero, 0x9C4
    ctx->r8 = ADD32(0, 0X9C4);
    // 0x1507627C: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x15076280: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x15076284: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15076288: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x1507628C: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x15076290: addiu       $a3, $zero, -0x64
    ctx->r7 = ADD32(0, -0X64);
    // 0x15076294: or          $a0, $t7, $t8
    ctx->r4 = ctx->r15 | ctx->r24;
    // 0x15076298: jal         0x15060778
    // 0x1507629C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_15060778(rdram, ctx);
        goto after_0;
    // 0x1507629C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_0:
    // 0x150762A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150762A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150762A8: jr          $ra
    // 0x150762AC: nop

    return;
    return;
    // 0x150762AC: nop

;}
RECOMP_FUNC void func_1514DD6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DD6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DD70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DD74: jal         0x1514DCAC
    // 0x1514DD78: nop

    func_1514DCAC(rdram, ctx);
        goto after_0;
    // 0x1514DD78: nop

    after_0:
    // 0x1514DD7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DD80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DD84: jr          $ra
    // 0x1514DD88: nop

    return;
    return;
    // 0x1514DD88: nop

;}
RECOMP_FUNC void func_151A87F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A87F8: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x151A87FC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x151A8800: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151A8804: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151A8808: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x151A880C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x151A8810: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151A8814: beq         $t6, $zero, L_151A883C
    if (ctx->r14 == 0) {
        // 0x151A8818: nop
    
            goto L_151A883C;
    }
    // 0x151A8818: nop

    // 0x151A881C: lbu         $t7, 0x4($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4);
    // 0x151A8820: lbu         $t8, 0x3B($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3B);
    // 0x151A8824: bne         $t7, $t8, L_151A883C
    if (ctx->r15 != ctx->r24) {
        // 0x151A8828: nop
    
            goto L_151A883C;
    }
    // 0x151A8828: nop

    // 0x151A882C: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x151A8830: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151A8834: bnel        $t9, $at, L_151A8848
    if (ctx->r25 != ctx->r1) {
        // 0x151A8838: lw          $a3, 0x1D4($v0)
        ctx->r7 = MEM_W(ctx->r2, 0X1D4);
            goto L_151A8848;
    }
    goto skip_0;
    // 0x151A8838: lw          $a3, 0x1D4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1D4);
    skip_0:
L_151A883C:
    // 0x151A883C: b           L_151A8A0C
    // 0x151A8840: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151A8A0C;
    // 0x151A8840: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151A8844: lw          $a3, 0x1D4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1D4);
L_151A8848:
    // 0x151A8848: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x151A884C: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    // 0x151A8850: beql        $a3, $zero, L_151A8A00
    if (ctx->r7 == 0) {
        // 0x151A8854: lbu         $t8, 0x1C($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X1C);
            goto L_151A8A00;
    }
    goto skip_1;
    // 0x151A8854: lbu         $t8, 0x1C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1C);
    skip_1:
    // 0x151A8858: lbu         $t0, 0x14($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X14);
    // 0x151A885C: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    // 0x151A8860: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x151A8864: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x151A8868: jal         0x15143134
    // 0x151A886C: addu        $a2, $a3, $t1
    ctx->r6 = ADD32(ctx->r7, ctx->r9);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x151A886C: addu        $a2, $a3, $t1
    ctx->r6 = ADD32(ctx->r7, ctx->r9);
    after_0:
    // 0x151A8870: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x151A8874: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x151A8878: addiu       $t4, $s0, 0x3C
    ctx->r12 = ADD32(ctx->r16, 0X3C);
    // 0x151A887C: lbu         $t2, 0x25($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X25);
    // 0x151A8880: addiu       $t5, $s0, 0x40
    ctx->r13 = ADD32(ctx->r16, 0X40);
    // 0x151A8884: addiu       $t6, $s0, 0x44
    ctx->r14 = ADD32(ctx->r16, 0X44);
    // 0x151A8888: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x151A888C: bne         $t3, $zero, L_151A8964
    if (ctx->r11 != 0) {
        // 0x151A8890: addiu       $t7, $sp, 0x78
        ctx->r15 = ADD32(ctx->r29, 0X78);
            goto L_151A8964;
    }
    // 0x151A8890: addiu       $t7, $sp, 0x78
    ctx->r15 = ADD32(ctx->r29, 0X78);
    // 0x151A8894: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151A8898: lwc1        $f6, 0x18($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X18);
    // 0x151A889C: lwc1        $f12, 0x30($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151A88A0: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151A88A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151A88A8: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x151A88AC: lwc1        $f0, 0x38($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151A88B0: lwc1        $f14, 0x34($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A88B4: sub.s       $f2, $f12, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x151A88B8: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151A88BC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x151A88C0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151A88C4: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x151A88C8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x151A88CC: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    // 0x151A88D0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151A88D4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151A88D8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x151A88DC: sub.s       $f16, $f14, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x151A88E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151A88E4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151A88E8: sub.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x151A88EC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x151A88F0: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x151A88F4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x151A88F8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x151A88FC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x151A8900: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151A8904: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151A8908: jal         0x150AC9C0
    // 0x151A890C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    func_150AC9C0(rdram, ctx);
        goto after_1;
    // 0x151A890C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x151A8910: beq         $v0, $zero, L_151A8950
    if (ctx->r2 == 0) {
        // 0x151A8914: lw          $v1, 0x8C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X8C);
            goto L_151A8950;
    }
    // 0x151A8914: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x151A8918: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x151A891C: jal         0x15145C90
    // 0x151A8920: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    func_15145C90(rdram, ctx);
        goto after_2;
    // 0x151A8920: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    after_2:
    // 0x151A8924: beq         $v0, $zero, L_151A893C
    if (ctx->r2 == 0) {
        // 0x151A8928: lw          $v1, 0x8C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X8C);
            goto L_151A893C;
    }
    // 0x151A8928: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x151A892C: lbu         $t8, 0x25($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X25);
    // 0x151A8930: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x151A8934: b           L_151A8964
    // 0x151A8938: sb          $t9, 0x25($v1)
    MEM_B(0X25, ctx->r3) = ctx->r25;
        goto L_151A8964;
    // 0x151A8938: sb          $t9, 0x25($v1)
    MEM_B(0X25, ctx->r3) = ctx->r25;
L_151A893C:
    // 0x151A893C: lbu         $t0, 0x1C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1C);
    // 0x151A8940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151A8944: andi        $t1, $t0, 0xFFFD
    ctx->r9 = ctx->r8 & 0XFFFD;
    // 0x151A8948: b           L_151A8A0C
    // 0x151A894C: sb          $t1, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r9;
        goto L_151A8A0C;
    // 0x151A894C: sb          $t1, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r9;
L_151A8950:
    // 0x151A8950: lbu         $t2, 0x1C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1C);
    // 0x151A8954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151A8958: andi        $t3, $t2, 0xFFFD
    ctx->r11 = ctx->r10 & 0XFFFD;
    // 0x151A895C: b           L_151A8A0C
    // 0x151A8960: sb          $t3, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r11;
        goto L_151A8A0C;
    // 0x151A8960: sb          $t3, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r11;
L_151A8964:
    // 0x151A8964: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151A8968: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151A896C: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x151A8970: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151A8974: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x151A8978: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A897C: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151A8980: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151A8984: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x151A8988: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151A898C: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151A8990: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151A8994: jal         0x15143E64
    // 0x151A8998: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    func_15143E64(rdram, ctx);
        goto after_3;
    // 0x151A8998: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x151A899C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x151A89A0: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x151A89A4: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x151A89A8: nop

    // 0x151A89AC: bc1t        L_151A89E8
    if (c1cs) {
        // 0x151A89B0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_151A89E8;
    }
    // 0x151A89B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A89B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151A89B8: lwc1        $f6, 0x54($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X54);
    // 0x151A89BC: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x151A89C0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x151A89C4: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151A89C8: addiu       $a2, $s0, 0x48
    ctx->r6 = ADD32(ctx->r16, 0X48);
    // 0x151A89CC: jal         0x15146078
    // 0x151A89D0: swc1        $f8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f8.u32l;
    func_15146078(rdram, ctx);
        goto after_4;
    // 0x151A89D0: swc1        $f8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f8.u32l;
    after_4:
    // 0x151A89D4: lbu         $t4, 0x1C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1C);
    // 0x151A89D8: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x151A89DC: sb          $t5, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r13;
    // 0x151A89E0: b           L_151A8A0C
    // 0x151A89E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151A8A0C;
    // 0x151A89E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151A89E8:
    // 0x151A89E8: lbu         $t6, 0x1C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1C);
    // 0x151A89EC: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x151A89F0: sb          $t7, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r15;
    // 0x151A89F4: b           L_151A8A0C
    // 0x151A89F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151A8A0C;
    // 0x151A89F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151A89FC: lbu         $t8, 0x1C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1C);
L_151A8A00:
    // 0x151A8A00: andi        $t9, $t8, 0xFFFD
    ctx->r25 = ctx->r24 & 0XFFFD;
    // 0x151A8A04: sb          $t9, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r25;
    // 0x151A8A08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151A8A0C:
    // 0x151A8A0C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x151A8A10: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x151A8A14: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x151A8A18: jr          $ra
    // 0x151A8A1C: nop

    return;
    return;
    // 0x151A8A1C: nop

;}
RECOMP_FUNC void func_150D0650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D0650: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150D0654: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150D0658: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150D065C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150D0660: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150D0664: lw          $t6, 0x2E4C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2E4C);
    // 0x150D0668: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150D066C: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x150D0670: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x150D0674: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x150D0678: bnel        $t8, $zero, L_150D0714
    if (ctx->r24 != 0) {
        // 0x150D067C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150D0714;
    }
    goto skip_0;
    // 0x150D067C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x150D0680: jal         0x1509BE40
    // 0x150D0684: addiu       $a2, $zero, 0xBB
    ctx->r6 = ADD32(0, 0XBB);
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x150D0684: addiu       $a2, $zero, 0xBB
    ctx->r6 = ADD32(0, 0XBB);
    after_0:
    // 0x150D0688: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150D068C: beq         $v0, $at, L_150D06EC
    if (ctx->r2 == ctx->r1) {
        // 0x150D0690: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150D06EC;
    }
    // 0x150D0690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D0694: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x150D0698: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x150D069C: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x150D06A0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150D06A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D06A8: jal         0x15123934
    // 0x150D06AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_1;
    // 0x150D06AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x150D06B0: beql        $v0, $zero, L_150D0714
    if (ctx->r2 == 0) {
        // 0x150D06B4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150D0714;
    }
    goto skip_1;
    // 0x150D06B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x150D06B8: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    // 0x150D06BC: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x150D06C0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150D06C4: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x150D06C8: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    // 0x150D06CC: lbu         $a1, -0x3CCB($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X3CCB);
    // 0x150D06D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D06D4: jal         0x151254F4
    // 0x150D06D8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_151254F4(rdram, ctx);
        goto after_2;
    // 0x150D06D8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_2:
    // 0x150D06DC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150D06E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D06E4: b           L_150D0710
    // 0x150D06E8: swc1        $f4, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f4.u32l;
        goto L_150D0710;
    // 0x150D06E8: swc1        $f4, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f4.u32l;
L_150D06EC:
    // 0x150D06EC: jal         0x151239CC
    // 0x150D06F0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_151239CC(rdram, ctx);
        goto after_3;
    // 0x150D06F0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x150D06F4: beq         $v0, $zero, L_150D0710
    if (ctx->r2 == 0) {
        // 0x150D06F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150D0710;
    }
    // 0x150D06F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D06FC: jal         0x151254F4
    // 0x150D0700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151254F4(rdram, ctx);
        goto after_4;
    // 0x150D0700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x150D0704: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150D0708: nop

    // 0x150D070C: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
L_150D0710:
    // 0x150D0710: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150D0714:
    // 0x150D0714: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150D0718: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150D071C: jr          $ra
    // 0x150D0720: nop

    return;
    return;
    // 0x150D0720: nop

;}
RECOMP_FUNC void func_1500969C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500969C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150096A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150096A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150096A8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150096AC: jal         0x15161408
    // 0x150096B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15161408(rdram, ctx);
        goto after_0;
    // 0x150096B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x150096B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150096B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150096BC: jr          $ra
    // 0x150096C0: nop

    return;
    return;
    // 0x150096C0: nop

;}
RECOMP_FUNC void func_15005B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005B00: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15005B04: jr          $ra
    // 0x15005B08: nop

    return;
    return;
    // 0x15005B08: nop

;}
RECOMP_FUNC void func_150CAC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CAC28: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150CAC2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150CAC30: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x150CAC34: beq         $v1, $zero, L_150CADC4
    if (ctx->r3 == 0) {
        // 0x150CAC38: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_150CADC4;
    }
    // 0x150CAC38: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x150CAC3C: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x150CAC40: beq         $a2, $zero, L_150CACA8
    if (ctx->r6 == 0) {
        // 0x150CAC44: addu        $a1, $a2, $v1
        ctx->r5 = ADD32(ctx->r6, ctx->r3);
            goto L_150CACA8;
    }
    // 0x150CAC44: addu        $a1, $a2, $v1
    ctx->r5 = ADD32(ctx->r6, ctx->r3);
    // 0x150CAC48: addiu       $v0, $a0, 0xA8
    ctx->r2 = ADD32(ctx->r4, 0XA8);
    // 0x150CAC4C: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CAC50: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAC54: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x150CAC58: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CAC5C: beql        $a1, $v1, L_150CAC94
    if (ctx->r5 == ctx->r3) {
        // 0x150CAC60: swc1        $f18, 0x58($a0)
        MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
            goto L_150CAC94;
    }
    goto skip_0;
    // 0x150CAC60: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
    skip_0:
    // 0x150CAC64: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
L_150CAC68:
    // 0x150CAC68: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
    // 0x150CAC6C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAC70: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CAC74: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x150CAC78: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CAC7C: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CAC80: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAC84: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CAC88: bnel        $a1, $v1, L_150CAC68
    if (ctx->r5 != ctx->r3) {
        // 0x150CAC8C: lwc1        $f16, 0x60($a0)
        ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
            goto L_150CAC68;
    }
    goto skip_1;
    // 0x150CAC8C: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    skip_1:
    // 0x150CAC90: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
L_150CAC94:
    // 0x150CAC94: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAC98: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CAC9C: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CACA0: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CACA4: beq         $v1, $zero, L_150CADC4
    if (ctx->r3 == 0) {
        // 0x150CACA8: addiu       $v0, $a0, 0xA8
        ctx->r2 = ADD32(ctx->r4, 0XA8);
            goto L_150CADC4;
    }
L_150CACA8:
    // 0x150CACA8: addiu       $v0, $a0, 0xA8
    ctx->r2 = ADD32(ctx->r4, 0XA8);
    // 0x150CACAC: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CACB0: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CACB4: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x150CACB8: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CACBC: beql        $v1, $zero, L_150CAD54
    if (ctx->r3 == 0) {
        // 0x150CACC0: swc1        $f18, 0x58($a0)
        MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
            goto L_150CAD54;
    }
    goto skip_2;
    // 0x150CACC0: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
    skip_2:
    // 0x150CACC4: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
L_150CACC8:
    // 0x150CACC8: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
    // 0x150CACCC: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CACD0: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CACD4: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x150CACD8: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CACDC: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CACE0: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CACE4: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CACE8: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CACEC: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150CACF0: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CACF4: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CACF8: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CACFC: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CAD00: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAD04: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CAD08: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CAD0C: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150CAD10: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAD14: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CAD18: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CAD1C: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CAD20: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAD24: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CAD28: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CAD2C: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150CAD30: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAD34: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CAD38: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CAD3C: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CAD40: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAD44: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CAD48: bnel        $v1, $zero, L_150CACC8
    if (ctx->r3 != 0) {
        // 0x150CAD4C: lwc1        $f16, 0x60($a0)
        ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
            goto L_150CACC8;
    }
    goto skip_3;
    // 0x150CAD4C: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    skip_3:
    // 0x150CAD50: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
L_150CAD54:
    // 0x150CAD54: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAD58: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CAD5C: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CAD60: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CAD64: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CAD68: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAD6C: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CAD70: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CAD74: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150CAD78: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAD7C: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CAD80: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CAD84: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CAD88: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAD8C: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CAD90: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CAD94: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150CAD98: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CAD9C: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CADA0: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CADA4: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CADA8: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CADAC: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CADB0: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CADB4: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150CADB8: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CADBC: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CADC0: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
L_150CADC4:
    // 0x150CADC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CADC8: jr          $ra
    // 0x150CADCC: nop

    return;
    return;
    // 0x150CADCC: nop

;}
RECOMP_FUNC void func_150D11B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D11B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D11B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D11BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150D11C0: jal         0x150ADA68
    // 0x150D11C4: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150D11C4: nop

    after_0:
    // 0x150D11C8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150D11CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D11D0: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x150D11D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150D11D8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150D11DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D11E0: lwc1        $f16, 0x894($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X894);
    // 0x150D11E4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x150D11E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150D11EC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150D11F0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150D11F4: swc1        $f18, 0x74($t6)
    MEM_W(0X74, ctx->r14) = ctx->f18.u32l;
    // 0x150D11F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D11FC: jr          $ra
    // 0x150D1200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x150D1200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151E4EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E4EE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151E4EEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151E4EF0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151E4EF4: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x151E4EF8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x151E4EFC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151E4F00: addiu       $t0, $t0, -0x28C
    ctx->r8 = ADD32(ctx->r8, -0X28C);
    // 0x151E4F04: addiu       $a3, $a3, -0x230
    ctx->r7 = ADD32(ctx->r7, -0X230);
    // 0x151E4F08: addiu       $a1, $a1, 0xB96
    ctx->r5 = ADD32(ctx->r5, 0XB96);
    // 0x151E4F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151E4F10: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151E4F14: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x151E4F18: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151E4F1C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x151E4F20: bgez        $v0, L_151E4F34
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151E4F24: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_151E4F34;
    }
    // 0x151E4F24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151E4F28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151E4F2C: nop

    // 0x151E4F30: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_151E4F34:
    // 0x151E4F34: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x151E4F38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151E4F3C: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x151E4F40: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4F44: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x151E4F48: sub.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x151E4F4C: bne         $a2, $v1, L_151E4FD0
    if (ctx->r6 != ctx->r3) {
        // 0x151E4F50: swc1        $f18, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
            goto L_151E4FD0;
    }
    // 0x151E4F50: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
    // 0x151E4F54: lwc1        $f0, -0x2238($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2238);
    // 0x151E4F58: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151E4F5C: lwc1        $f4, -0x45D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X45D4);
    // 0x151E4F60: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151E4F64: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x151E4F68: nop

    // 0x151E4F6C: bc1fl       L_151E4FB4
    if (!c1cs) {
        // 0x151E4F70: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_151E4FB4;
    }
    goto skip_0;
    // 0x151E4F70: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_0:
    // 0x151E4F74: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x151E4F78: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x151E4F7C: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x151E4F80: slti        $at, $v0, 0x55
    ctx->r1 = SIGNED(ctx->r2) < 0X55 ? 1 : 0;
    // 0x151E4F84: beq         $at, $zero, L_151E4FA0
    if (ctx->r1 == 0) {
        // 0x151E4F88: sb          $t7, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r15;
            goto L_151E4FA0;
    }
    // 0x151E4F88: sb          $t7, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r15;
    // 0x151E4F8C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151E4F90: lwc1        $f8, -0x45D0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X45D0);
    // 0x151E4F94: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4F98: b           L_151E4FB0
    // 0x151E4F9C: swc1        $f8, -0x2228($at)
    MEM_W(-0X2228, ctx->r1) = ctx->f8.u32l;
        goto L_151E4FB0;
    // 0x151E4F9C: swc1        $f8, -0x2228($at)
    MEM_W(-0X2228, ctx->r1) = ctx->f8.u32l;
L_151E4FA0:
    // 0x151E4FA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151E4FA4: lwc1        $f6, -0x45CC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X45CC);
    // 0x151E4FA8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4FAC: swc1        $f6, -0x2228($at)
    MEM_W(-0X2228, ctx->r1) = ctx->f6.u32l;
L_151E4FB0:
    // 0x151E4FB0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_151E4FB4:
    // 0x151E4FB4: slti        $at, $v0, 0x6E
    ctx->r1 = SIGNED(ctx->r2) < 0X6E ? 1 : 0;
    // 0x151E4FB8: bc1tl       L_151E5028
    if (c1cs) {
        // 0x151E4FBC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151E5028;
    }
    goto skip_1;
    // 0x151E4FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151E4FC0: beql        $at, $zero, L_151E5004
    if (ctx->r1 == 0) {
        // 0x151E4FC4: addiu       $t1, $zero, 0xFF
        ctx->r9 = ADD32(0, 0XFF);
            goto L_151E5004;
    }
    goto skip_2;
    // 0x151E4FC4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    skip_2:
    // 0x151E4FC8: b           L_151E5028
    // 0x151E4FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151E5028;
    // 0x151E4FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151E4FD0:
    // 0x151E4FD0: beq         $a2, $v0, L_151E5000
    if (ctx->r6 == ctx->r2) {
        // 0x151E4FD4: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_151E5000;
    }
    // 0x151E4FD4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151E4FD8: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x151E4FDC: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E4FE0: mflo        $t9
    ctx->r25 = lo;
    // 0x151E4FE4: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x151E4FE8: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x151E4FEC: bne         $at, $zero, L_151E4FF8
    if (ctx->r1 != 0) {
        // 0x151E4FF0: nop
    
            goto L_151E4FF8;
    }
    // 0x151E4FF0: nop

    // 0x151E4FF4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_151E4FF8:
    // 0x151E4FF8: b           L_151E5024
    // 0x151E4FFC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
        goto L_151E5024;
    // 0x151E4FFC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_151E5000:
    // 0x151E5000: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
L_151E5004:
    // 0x151E5004: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x151E5008: sb          $t1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r9;
    // 0x151E500C: sb          $t2, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r10;
    // 0x151E5010: swc1        $f2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f2.u32l;
    // 0x151E5014: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151E5018: lw          $t9, 0xA88($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XA88);
    // 0x151E501C: jalr        $t9
    // 0x151E5020: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151E5020: nop

    after_0:
L_151E5024:
    // 0x151E5024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151E5028:
    // 0x151E5028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151E502C: jr          $ra
    // 0x151E5030: nop

    return;
    return;
    // 0x151E5030: nop

;}
RECOMP_FUNC void func_1519F1C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519F1C8: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x1519F1CC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1519F1D0: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x1519F1D4: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x1519F1D8: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x1519F1DC: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x1519F1E0: jal         0x151D8E20
    // 0x1519F1E4: sw          $v1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r3;
    func_151D8E20(rdram, ctx);
        goto after_0;
    // 0x1519F1E4: sw          $v1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r3;
    after_0:
    // 0x1519F1E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519F1EC: lwc1        $f4, -0x7318($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7318);
    // 0x1519F1F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519F1F4: lwc1        $f6, -0x7314($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7314);
    // 0x1519F1F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1519F1FC: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x1519F200: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1519F204: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1519F208: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x1519F20C: lbu         $a3, 0xBF($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XBF);
    // 0x1519F210: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1519F214: addiu       $t8, $zero, 0x42
    ctx->r24 = ADD32(0, 0X42);
    // 0x1519F218: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x1519F21C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x1519F220: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x1519F224: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x1519F228: lw          $v1, 0xB4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XB4);
    // 0x1519F22C: sh          $t8, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r24;
    // 0x1519F230: sh          $t9, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r25;
    // 0x1519F234: sb          $t0, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r8;
    // 0x1519F238: sh          $t1, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r9;
    // 0x1519F23C: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x1519F240: sb          $t3, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r11;
    // 0x1519F244: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x1519F248: addiu       $t4, $zero, 0x55
    ctx->r12 = ADD32(0, 0X55);
    // 0x1519F24C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x1519F250: addiu       $t6, $zero, 0x55
    ctx->r14 = ADD32(0, 0X55);
    // 0x1519F254: addiu       $t7, $zero, 0x88
    ctx->r15 = ADD32(0, 0X88);
    // 0x1519F258: addiu       $t8, $zero, 0xC4
    ctx->r24 = ADD32(0, 0XC4);
    // 0x1519F25C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1519F260: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x1519F264: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x1519F268: addiu       $t3, $zero, 0x325
    ctx->r11 = ADD32(0, 0X325);
    // 0x1519F26C: sb          $v0, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r2;
    // 0x1519F270: sb          $t2, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r10;
    // 0x1519F274: sb          $t4, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r12;
    // 0x1519F278: sb          $t5, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = ctx->r13;
    // 0x1519F27C: sb          $t6, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = ctx->r14;
    // 0x1519F280: sb          $t7, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r15;
    // 0x1519F284: sb          $t8, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = ctx->r24;
    // 0x1519F288: sh          $zero, 0x70($sp)
    MEM_H(0X70, ctx->r29) = 0;
    // 0x1519F28C: sh          $zero, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = 0;
    // 0x1519F290: sh          $t9, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r25;
    // 0x1519F294: sh          $t0, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r8;
    // 0x1519F298: sh          $t1, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r9;
    // 0x1519F29C: sh          $t2, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r10;
    // 0x1519F2A0: sh          $t3, 0x92($sp)
    MEM_H(0X92, ctx->r29) = ctx->r11;
    // 0x1519F2A4: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x1519F2A8: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x1519F2AC: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x1519F2B0: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x1519F2B4: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x1519F2B8: sw          $a3, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r7;
    // 0x1519F2BC: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x1519F2C0: lwc1        $f16, 0x14($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1519F2C4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x1519F2C8: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    // 0x1519F2CC: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x1519F2D0: lwc1        $f18, 0x1C($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1519F2D4: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    // 0x1519F2D8: jal         0x1519EF90
    // 0x1519F2DC: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    func_1519EF90(rdram, ctx);
        goto after_1;
    // 0x1519F2DC: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x1519F2E0: beq         $v0, $zero, L_1519F310
    if (ctx->r2 == 0) {
        // 0x1519F2E4: addiu       $a0, $sp, 0x98
        ctx->r4 = ADD32(ctx->r29, 0X98);
            goto L_1519F310;
    }
    // 0x1519F2E4: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x1519F2E8: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x1519F2EC: addiu       $t4, $sp, 0x58
    ctx->r12 = ADD32(ctx->r29, 0X58);
    // 0x1519F2F0: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x1519F2F4: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x1519F2F8: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x1519F2FC: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x1519F300: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x1519F304: lhu         $t7, 0xA6($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XA6);
    // 0x1519F308: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x1519F30C: sh          $t8, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r24;
L_1519F310:
    // 0x1519F310: lbu         $t9, 0x43($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X43);
    // 0x1519F314: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x1519F318: addiu       $t1, $t1, -0x4BEC
    ctx->r9 = ADD32(ctx->r9, -0X4BEC);
    // 0x1519F31C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1519F320: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x1519F324: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x1519F328: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x1519F32C: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x1519F330: lbu         $t3, 0x1($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X1);
    // 0x1519F334: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x1519F338: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1519F33C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1519F340: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x1519F344: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x1519F348: addiu       $t8, $t7, 0x34
    ctx->r24 = ADD32(ctx->r15, 0X34);
    // 0x1519F34C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x1519F350: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1519F354: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1519F358: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x1519F35C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x1519F360: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x1519F364: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x1519F368: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x1519F36C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1519F370: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1519F374: sb          $t2, 0x72($sp)
    MEM_B(0X72, ctx->r29) = ctx->r10;
    // 0x1519F378: sb          $t3, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r11;
    // 0x1519F37C: jal         0x15147A80
    // 0x1519F380: sb          $t5, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r13;
    func_15147A80(rdram, ctx);
        goto after_2;
    // 0x1519F380: sb          $t5, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r13;
    after_2:
    // 0x1519F384: beq         $v0, $zero, L_1519F3A4
    if (ctx->r2 == 0) {
        // 0x1519F388: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1519F3A4;
    }
    // 0x1519F388: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1519F38C: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x1519F390: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x1519F394: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x1519F398: jal         0x10022EC0
    // 0x1519F39C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x1519F39C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_3:
    // 0x1519F3A0: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
L_1519F3A4:
    // 0x1519F3A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1519F3A8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1519F3AC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x1519F3B0: jr          $ra
    // 0x1519F3B4: nop

    return;
    return;
    // 0x1519F3B4: nop

;}
RECOMP_FUNC void func_150076A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150076A0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x150076A4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x150076A8: sb          $t6, 0x2BB4($at)
    MEM_B(0X2BB4, ctx->r1) = ctx->r14;
    // 0x150076AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150076B0: sb          $zero, -0x1C14($at)
    MEM_B(-0X1C14, ctx->r1) = 0;
    // 0x150076B4: jr          $ra
    // 0x150076B8: nop

    return;
    return;
    // 0x150076B8: nop

;}
RECOMP_FUNC void func_150472C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150472C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150472C4: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x150472C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150472CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150472D0: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x150472D4: lwl         $at, 0x44($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X44);
    // 0x150472D8: lwr         $at, 0x47($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X47);
    // 0x150472DC: swl         $at, 0x4($a0)
    do_swl(rdram, 0X4, ctx->r4, ctx->r1);
    // 0x150472E0: swr         $at, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r1);
    // 0x150472E4: lwl         $t7, 0x48($a1)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r5, 0X48);
    // 0x150472E8: lwr         $t7, 0x4B($a1)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r5, 0X4B);
    // 0x150472EC: swl         $t7, 0x8($a0)
    do_swl(rdram, 0X8, ctx->r4, ctx->r15);
    // 0x150472F0: swr         $t7, 0xB($a0)
    do_swr(rdram, 0XB, ctx->r4, ctx->r15);
    // 0x150472F4: lwl         $at, 0x4C($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X4C);
    // 0x150472F8: lwr         $at, 0x4F($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X4F);
    // 0x150472FC: swl         $at, 0xC($a0)
    do_swl(rdram, 0XC, ctx->r4, ctx->r1);
    // 0x15047300: swr         $at, 0xF($a0)
    do_swr(rdram, 0XF, ctx->r4, ctx->r1);
    // 0x15047304: lwl         $t7, 0x50($a1)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r5, 0X50);
    // 0x15047308: lwr         $t7, 0x53($a1)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r5, 0X53);
    // 0x1504730C: swl         $t7, 0x10($a0)
    do_swl(rdram, 0X10, ctx->r4, ctx->r15);
    // 0x15047310: swr         $t7, 0x13($a0)
    do_swr(rdram, 0X13, ctx->r4, ctx->r15);
    // 0x15047314: lhu         $at, 0x54($a1)
    ctx->r1 = MEM_HU(ctx->r5, 0X54);
    // 0x15047318: sh          $at, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r1;
    // 0x1504731C: lw          $t8, 0x60($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X60);
    // 0x15047320: sw          $t8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r24;
    // 0x15047324: lbu         $v0, 0x59($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X59);
    // 0x15047328: bne         $a3, $v0, L_15047338
    if (ctx->r7 != ctx->r2) {
        // 0x1504732C: nop
    
            goto L_15047338;
    }
    // 0x1504732C: nop

    // 0x15047330: b           L_15047338
    // 0x15047334: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_15047338;
    // 0x15047334: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_15047338:
    // 0x15047338: bne         $a3, $v0, L_15047348
    if (ctx->r7 != ctx->r2) {
        // 0x1504733C: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_15047348;
    }
    // 0x1504733C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15047340: b           L_15047348
    // 0x15047344: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
        goto L_15047348;
    // 0x15047344: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
L_15047348:
    // 0x15047348: bnel        $a3, $v0, L_1504735C
    if (ctx->r7 != ctx->r2) {
        // 0x1504734C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1504735C;
    }
    goto skip_0;
    // 0x1504734C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x15047350: b           L_1504735C
    // 0x15047354: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_1504735C;
    // 0x15047354: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x15047358: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1504735C:
    // 0x1504735C: or          $t9, $v0, $a2
    ctx->r25 = ctx->r2 | ctx->r6;
    // 0x15047360: or          $t0, $t9, $v1
    ctx->r8 = ctx->r25 | ctx->r3;
    // 0x15047364: sb          $t0, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r8;
    // 0x15047368: lbu         $t1, 0x59($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X59);
    // 0x1504736C: bnel        $a3, $t1, L_15047380
    if (ctx->r7 != ctx->r9) {
        // 0x15047370: sb          $zero, 0x1D($a0)
        MEM_B(0X1D, ctx->r4) = 0;
            goto L_15047380;
    }
    goto skip_1;
    // 0x15047370: sb          $zero, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = 0;
    skip_1:
    // 0x15047374: b           L_15047380
    // 0x15047378: sb          $t2, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = ctx->r10;
        goto L_15047380;
    // 0x15047378: sb          $t2, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = ctx->r10;
    // 0x1504737C: sb          $zero, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = 0;
L_15047380:
    // 0x15047380: lw          $t3, 0x5C($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X5C);
    // 0x15047384: sw          $t3, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r11;
    // 0x15047388: jr          $ra
    // 0x1504738C: nop

    return;
    return;
    // 0x1504738C: nop

;}
RECOMP_FUNC void func_100210C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100210C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x100210C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100210C8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x100210CC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x100210D0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x100210D4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x100210D8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x100210DC: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x100210E0: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x100210E4: lw          $t7, -0x45BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45BC);
    // 0x100210E8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x100210EC: lw          $t8, 0x48($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X48);
    // 0x100210F0: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x100210F4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x100210F8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x100210FC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x10021100: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x10021104: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x10021108: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1002110C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x10021110: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x10021114: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    // 0x10021118: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x1002111C: lw          $t5, 0x14($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X14);
    // 0x10021120: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x10021124: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x10021128: beq         $t6, $zero, L_100211E4
    if (ctx->r14 == 0) {
        // 0x1002112C: nop
    
            goto L_100211E4;
    }
    // 0x1002112C: nop

L_10021130:
    // 0x10021130: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x10021134: addiu       $t9, $t7, -0x8
    ctx->r25 = ADD32(ctx->r15, -0X8);
    // 0x10021138: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x1002113C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x10021140: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x10021144: beq         $t0, $zero, L_100211CC
    if (ctx->r8 == 0) {
        // 0x10021148: nop
    
            goto L_100211CC;
    }
    // 0x10021148: nop

    // 0x1002114C: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x10021150: beq         $t1, $zero, L_100211CC
    if (ctx->r9 == 0) {
        // 0x10021154: nop
    
            goto L_100211CC;
    }
    // 0x10021154: nop

    // 0x10021158: lbu         $t2, 0x99($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X99);
    // 0x1002115C: slti        $at, $t2, 0x40
    ctx->r1 = SIGNED(ctx->r10) < 0X40 ? 1 : 0;
    // 0x10021160: bne         $at, $zero, L_100211CC
    if (ctx->r1 != 0) {
        // 0x10021164: nop
    
            goto L_100211CC;
    }
    // 0x10021164: nop

    // 0x10021168: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x1002116C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x10021170: jal         0x10020000
    // 0x10021174: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    func_10020000(rdram, ctx);
        goto after_0;
    // 0x10021174: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_0:
    // 0x10021178: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x1002117C: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x10021180: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x10021184: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x10021188: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x1002118C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10021190: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x10021194: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x10021198: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x1002119C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x100211A0: lw          $t8, 0x10($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X10);
    // 0x100211A4: lw          $t0, 0x8($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X8);
    // 0x100211A8: lbu         $t1, 0x99($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X99);
    // 0x100211AC: sltu        $at, $t2, $t1
    ctx->r1 = ctx->r10 < ctx->r9 ? 1 : 0;
    // 0x100211B0: beq         $at, $zero, L_100211CC
    if (ctx->r1 == 0) {
        // 0x100211B4: nop
    
            goto L_100211CC;
    }
    // 0x100211B4: nop

    // 0x100211B8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x100211BC: lw          $t5, 0x10($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X10);
    // 0x100211C0: lw          $t3, 0x8($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X8);
    // 0x100211C4: lbu         $t6, 0x99($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X99);
    // 0x100211C8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_100211CC:
    // 0x100211CC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x100211D0: lw          $t9, 0x8($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X8);
    // 0x100211D4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x100211D8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x100211DC: bne         $t8, $zero, L_10021130
    if (ctx->r24 != 0) {
        // 0x100211E0: nop
    
            goto L_10021130;
    }
    // 0x100211E0: nop

L_100211E4:
    // 0x100211E4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x100211E8: beq         $t0, $zero, L_1002140C
    if (ctx->r8 == 0) {
        // 0x100211EC: nop
    
            goto L_1002140C;
    }
    // 0x100211EC: nop

    // 0x100211F0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x100211F4: addiu       $t2, $t1, -0x3E
    ctx->r10 = ADD32(ctx->r9, -0X3E);
    // 0x100211F8: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x100211FC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x10021200: sltiu       $at, $t4, 0x7
    ctx->r1 = ctx->r12 < 0X7 ? 1 : 0;
    // 0x10021204: bne         $at, $zero, L_100212D4
    if (ctx->r1 != 0) {
        // 0x10021208: nop
    
            goto L_100212D4;
    }
    // 0x10021208: nop

    // 0x1002120C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x10021210: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x10021214: bgez        $t5, L_1002122C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x10021218: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1002122C;
    }
    // 0x10021218: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1002121C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x10021220: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x10021224: nop

    // 0x10021228: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_1002122C:
    // 0x1002122C: jal         0x10026530
    // 0x10021230: nop

    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x10021230: nop

    after_1:
    // 0x10021234: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10021238: lwc1        $f8, -0x37E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X37E0);
    // 0x1002123C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x10021240: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x10021244: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x10021248: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x1002124C: nop

    // 0x10021250: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x10021254: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x10021258: nop

    // 0x1002125C: andi        $at, $t6, 0x4
    ctx->r1 = ctx->r14 & 0X4;
    // 0x10021260: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x10021264: beq         $t6, $zero, L_100212B8
    if (ctx->r14 == 0) {
        // 0x10021268: nop
    
            goto L_100212B8;
    }
    // 0x10021268: nop

    // 0x1002126C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x10021270: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x10021274: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x10021278: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1002127C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x10021280: nop

    // 0x10021284: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x10021288: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x1002128C: nop

    // 0x10021290: andi        $at, $t6, 0x4
    ctx->r1 = ctx->r14 & 0X4;
    // 0x10021294: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x10021298: bne         $t6, $zero, L_100212B0
    if (ctx->r14 != 0) {
        // 0x1002129C: nop
    
            goto L_100212B0;
    }
    // 0x1002129C: nop

    // 0x100212A0: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x100212A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x100212A8: b           L_100212C8
    // 0x100212AC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_100212C8;
    // 0x100212AC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_100212B0:
    // 0x100212B0: b           L_100212C8
    // 0x100212B4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_100212C8;
    // 0x100212B4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
L_100212B8:
    // 0x100212B8: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x100212BC: nop

    // 0x100212C0: bltz        $t6, L_100212B0
    if (SIGNED(ctx->r14) < 0) {
        // 0x100212C4: nop
    
            goto L_100212B0;
    }
    // 0x100212C4: nop

L_100212C8:
    // 0x100212C8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x100212CC: b           L_10021394
    // 0x100212D0: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
        goto L_10021394;
    // 0x100212D0: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_100212D4:
    // 0x100212D4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x100212D8: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x100212DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x100212E0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x100212E4: bgez        $t7, L_100212FC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x100212E8: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_100212FC;
    }
    // 0x100212E8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x100212EC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x100212F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x100212F4: nop

    // 0x100212F8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_100212FC:
    // 0x100212FC: div.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x10021300: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x10021304: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x10021308: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x1002130C: nop

    // 0x10021310: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x10021314: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x10021318: nop

    // 0x1002131C: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x10021320: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x10021324: beq         $t8, $zero, L_10021378
    if (ctx->r24 == 0) {
        // 0x10021328: nop
    
            goto L_10021378;
    }
    // 0x10021328: nop

    // 0x1002132C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x10021330: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x10021334: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x10021338: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1002133C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x10021340: nop

    // 0x10021344: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x10021348: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x1002134C: nop

    // 0x10021350: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x10021354: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x10021358: bne         $t8, $zero, L_10021370
    if (ctx->r24 != 0) {
        // 0x1002135C: nop
    
            goto L_10021370;
    }
    // 0x1002135C: nop

    // 0x10021360: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x10021364: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x10021368: b           L_10021388
    // 0x1002136C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_10021388;
    // 0x1002136C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_10021370:
    // 0x10021370: b           L_10021388
    // 0x10021374: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_10021388;
    // 0x10021374: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_10021378:
    // 0x10021378: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x1002137C: nop

    // 0x10021380: bltz        $t8, L_10021370
    if (SIGNED(ctx->r24) < 0) {
        // 0x10021384: nop
    
            goto L_10021370;
    }
    // 0x10021384: nop

L_10021388:
    // 0x10021388: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x1002138C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x10021390: nop

L_10021394:
    // 0x10021394: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x10021398: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x1002139C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x100213A0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x100213A4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x100213A8: addiu       $t2, $zero, 0x4E0
    ctx->r10 = ADD32(0, 0X4E0);
    // 0x100213AC: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x100213B0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x100213B4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x100213B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x100213BC: andi        $t3, $t5, 0xFFFF
    ctx->r11 = ctx->r13 & 0XFFFF;
    // 0x100213C0: sll         $t6, $t3, 16
    ctx->r14 = S32(ctx->r11 << 16);
    // 0x100213C4: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x100213C8: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x100213CC: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x100213D0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x100213D4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x100213D8: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x100213DC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x100213E0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x100213E4: addiu       $t4, $zero, 0x650
    ctx->r12 = ADD32(0, 0X650);
    // 0x100213E8: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x100213EC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x100213F0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x100213F4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x100213F8: andi        $t7, $t3, 0xFFFF
    ctx->r15 = ctx->r11 & 0XFFFF;
    // 0x100213FC: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x10021400: andi        $t8, $t9, 0xFFFF
    ctx->r24 = ctx->r25 & 0XFFFF;
    // 0x10021404: or          $t0, $t6, $t8
    ctx->r8 = ctx->r14 | ctx->r24;
    // 0x10021408: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
L_1002140C:
    // 0x1002140C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x10021410: lw          $t4, 0x14($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X14);
    // 0x10021414: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x10021418: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x1002141C: beq         $t5, $zero, L_100214CC
    if (ctx->r13 == 0) {
        // 0x10021420: nop
    
            goto L_100214CC;
    }
    // 0x10021420: nop

L_10021424:
    // 0x10021424: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x10021428: addiu       $t7, $t3, -0x8
    ctx->r15 = ADD32(ctx->r11, -0X8);
    // 0x1002142C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x10021430: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x10021434: lw          $t6, 0x10($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X10);
    // 0x10021438: beq         $t6, $zero, L_1002145C
    if (ctx->r14 == 0) {
        // 0x1002143C: nop
    
            goto L_1002145C;
    }
    // 0x1002143C: nop

    // 0x10021440: lw          $t8, 0x8($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X8);
    // 0x10021444: beq         $t8, $zero, L_10021478
    if (ctx->r24 == 0) {
        // 0x10021448: nop
    
            goto L_10021478;
    }
    // 0x10021448: nop

    // 0x1002144C: lbu         $t0, 0x99($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X99);
    // 0x10021450: slti        $at, $t0, 0x40
    ctx->r1 = SIGNED(ctx->r8) < 0X40 ? 1 : 0;
    // 0x10021454: bne         $at, $zero, L_10021478
    if (ctx->r1 != 0) {
        // 0x10021458: nop
    
            goto L_10021478;
    }
    // 0x10021458: nop

L_1002145C:
    // 0x1002145C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x10021460: lw          $t2, 0x10($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X10);
    // 0x10021464: bne         $t2, $zero, L_100214B4
    if (ctx->r10 != 0) {
        // 0x10021468: nop
    
            goto L_100214B4;
    }
    // 0x10021468: nop

    // 0x1002146C: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x10021470: bne         $t4, $zero, L_100214B4
    if (ctx->r12 != 0) {
        // 0x10021474: nop
    
            goto L_100214B4;
    }
    // 0x10021474: nop

L_10021478:
    // 0x10021478: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x1002147C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x10021480: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x10021484: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x10021488: jal         0x10020000
    // 0x1002148C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    func_10020000(rdram, ctx);
        goto after_2;
    // 0x1002148C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_2:
    // 0x10021490: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x10021494: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x10021498: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x1002149C: beq         $t3, $t7, L_100214B4
    if (ctx->r11 == ctx->r15) {
        // 0x100214A0: nop
    
            goto L_100214B4;
    }
    // 0x100214A0: nop

    // 0x100214A4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x100214A8: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x100214AC: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x100214B0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_100214B4:
    // 0x100214B4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x100214B8: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x100214BC: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x100214C0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x100214C4: bne         $t2, $zero, L_10021424
    if (ctx->r10 != 0) {
        // 0x100214C8: nop
    
            goto L_10021424;
    }
    // 0x100214C8: nop

L_100214CC:
    // 0x100214CC: b           L_100214DC
    // 0x100214D0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
        goto L_100214DC;
    // 0x100214D0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x100214D4: b           L_100214DC
    // 0x100214D8: nop

        goto L_100214DC;
    // 0x100214D8: nop

L_100214DC:
    // 0x100214DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x100214E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x100214E4: jr          $ra
    // 0x100214E8: nop

    return;
    return;
    // 0x100214E8: nop

    // 0x100214EC: nop

;}
RECOMP_FUNC void func_151C05A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C05A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151C05A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151C05AC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151C05B0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151C05B4: lbu         $t7, 0x2F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2F);
    // 0x151C05B8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x151C05BC: lui         $a3, 0x3A03
    ctx->r7 = S32(0X3A03 << 16);
    // 0x151C05C0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x151C05C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151C05C8: ori         $a3, $a3, 0x126F
    ctx->r7 = ctx->r7 | 0X126F;
    // 0x151C05CC: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    // 0x151C05D0: lui         $a2, 0x44FA
    ctx->r6 = S32(0X44FA << 16);
    // 0x151C05D4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151C05D8: jal         0x151D5334
    // 0x151C05DC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_151D5334(rdram, ctx);
        goto after_0;
    // 0x151C05DC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x151C05E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151C05E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151C05E8: jr          $ra
    // 0x151C05EC: nop

    return;
    return;
    // 0x151C05EC: nop

;}
RECOMP_FUNC void func_1517F488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517F488: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x1517F48C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1517F490: addiu       $t8, $t8, -0x2270
    ctx->r24 = ADD32(ctx->r24, -0X2270);
    // 0x1517F494: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1517F498: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1517F49C: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x1517F4A0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x1517F4A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517F4A8: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x1517F4AC: sb          $a1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r5;
    // 0x1517F4B0: sb          $a2, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r6;
    // 0x1517F4B4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x1517F4B8: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x1517F4BC: sb          $a3, -0x2264($at)
    MEM_B(-0X2264, ctx->r1) = ctx->r7;
    // 0x1517F4C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517F4C4: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x1517F4C8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x1517F4CC: sh          $t0, -0x21F0($at)
    MEM_H(-0X21F0, ctx->r1) = ctx->r8;
    // 0x1517F4D0: jr          $ra
    // 0x1517F4D4: nop

    return;
    return;
    // 0x1517F4D4: nop

;}
RECOMP_FUNC void func_151B863C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B863C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B8640: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151B8644: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x151B8648: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151B864C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B8650: jal         0x1513FA70
    // 0x151B8654: nop

    func_1513FA70(rdram, ctx);
        goto after_0;
    // 0x151B8654: nop

    after_0:
    // 0x151B8658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B865C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B8660: jr          $ra
    // 0x151B8664: nop

    return;
    return;
    // 0x151B8664: nop

;}
RECOMP_FUNC void func_1517B89C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517B89C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1517B8A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1517B8A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1517B8A8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1517B8AC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1517B8B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1517B8B4: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x1517B8B8: beq         $at, $zero, L_1517BB98
    if (ctx->r1 == 0) {
        // 0x1517B8BC: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_1517BB98;
    }
    // 0x1517B8BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x1517B8C0: sll         $t5, $s0, 3
    ctx->r13 = S32(ctx->r16 << 3);
    // 0x1517B8C4: sll         $t0, $s1, 3
    ctx->r8 = S32(ctx->r17 << 3);
    // 0x1517B8C8: sll         $a3, $s0, 3
    ctx->r7 = S32(ctx->r16 << 3);
    // 0x1517B8CC: subu        $a3, $a3, $s0
    ctx->r7 = SUB32(ctx->r7, ctx->r16);
    // 0x1517B8D0: subu        $t0, $t0, $s1
    ctx->r8 = SUB32(ctx->r8, ctx->r17);
    // 0x1517B8D4: subu        $t5, $t5, $s0
    ctx->r13 = SUB32(ctx->r13, ctx->r16);
    // 0x1517B8D8: lui         $ra, 0x8009
    ctx->r31 = S32(0X8009 << 16);
    // 0x1517B8DC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x1517B8E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1517B8E4: addiu       $t3, $t3, -0x22E8
    ctx->r11 = ADD32(ctx->r11, -0X22E8);
    // 0x1517B8E8: addiu       $ra, $ra, -0x314C
    ctx->r31 = ADD32(ctx->r31, -0X314C);
    // 0x1517B8EC: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x1517B8F0: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x1517B8F4: sll         $a3, $a3, 1
    ctx->r7 = S32(ctx->r7 << 1);
    // 0x1517B8F8: addiu       $t4, $sp, 0x4C
    ctx->r12 = ADD32(ctx->r29, 0X4C);
L_1517B8FC:
    // 0x1517B8FC: lw          $t6, 0x0($ra)
    ctx->r14 = MEM_W(ctx->r31, 0X0);
    // 0x1517B900: bnel        $t6, $zero, L_1517B9A0
    if (ctx->r14 != 0) {
        // 0x1517B904: lw          $t1, 0x0($t3)
        ctx->r9 = MEM_W(ctx->r11, 0X0);
            goto L_1517B9A0;
    }
    goto skip_0;
    // 0x1517B904: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    skip_0:
    // 0x1517B908: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    // 0x1517B90C: addu        $t2, $t1, $t5
    ctx->r10 = ADD32(ctx->r9, ctx->r13);
    // 0x1517B910: addu        $v1, $t1, $t0
    ctx->r3 = ADD32(ctx->r9, ctx->r8);
    // 0x1517B914: lh          $a1, 0x0($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X0);
    // 0x1517B918: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x1517B91C: addu        $v0, $t1, $a3
    ctx->r2 = ADD32(ctx->r9, ctx->r7);
    // 0x1517B920: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1517B924: beq         $at, $zero, L_1517B958
    if (ctx->r1 == 0) {
        // 0x1517B928: slt         $at, $a2, $s0
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_1517B958;
    }
    // 0x1517B928: slt         $at, $a2, $s0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x1517B92C: beql        $at, $zero, L_1517B95C
    if (ctx->r1 == 0) {
        // 0x1517B930: lh          $t9, 0x0($v0)
        ctx->r25 = MEM_H(ctx->r2, 0X0);
            goto L_1517B95C;
    }
    goto skip_1;
    // 0x1517B930: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    skip_1:
    // 0x1517B934: lh          $t8, 0xE($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XE);
L_1517B938:
    // 0x1517B938: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x1517B93C: addiu       $t0, $t0, 0xE
    ctx->r8 = ADD32(ctx->r8, 0XE);
    // 0x1517B940: slt         $at, $t8, $a1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1517B944: beq         $at, $zero, L_1517B958
    if (ctx->r1 == 0) {
        // 0x1517B948: addiu       $v1, $v1, 0xE
        ctx->r3 = ADD32(ctx->r3, 0XE);
            goto L_1517B958;
    }
    // 0x1517B948: addiu       $v1, $v1, 0xE
    ctx->r3 = ADD32(ctx->r3, 0XE);
    // 0x1517B94C: slt         $at, $a2, $s0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x1517B950: bnel        $at, $zero, L_1517B938
    if (ctx->r1 != 0) {
        // 0x1517B954: lh          $t8, 0xE($v1)
        ctx->r24 = MEM_H(ctx->r3, 0XE);
            goto L_1517B938;
    }
    goto skip_2;
    // 0x1517B954: lh          $t8, 0xE($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XE);
    skip_2:
L_1517B958:
    // 0x1517B958: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
L_1517B95C:
    // 0x1517B95C: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1517B960: beq         $at, $zero, L_1517BA28
    if (ctx->r1 == 0) {
        // 0x1517B964: slt         $at, $s1, $a0
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_1517BA28;
    }
    // 0x1517B964: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1517B968: beql        $at, $zero, L_1517BA2C
    if (ctx->r1 == 0) {
        // 0x1517B96C: slt         $at, $a2, $a0
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_1517BA2C;
    }
    goto skip_3;
    // 0x1517B96C: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    skip_3:
    // 0x1517B970: lh          $t6, -0xE($v0)
    ctx->r14 = MEM_H(ctx->r2, -0XE);
L_1517B974:
    // 0x1517B974: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x1517B978: addiu       $a3, $a3, -0xE
    ctx->r7 = ADD32(ctx->r7, -0XE);
    // 0x1517B97C: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1517B980: beq         $at, $zero, L_1517BA28
    if (ctx->r1 == 0) {
        // 0x1517B984: addiu       $v0, $v0, -0xE
        ctx->r2 = ADD32(ctx->r2, -0XE);
            goto L_1517BA28;
    }
    // 0x1517B984: addiu       $v0, $v0, -0xE
    ctx->r2 = ADD32(ctx->r2, -0XE);
    // 0x1517B988: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1517B98C: bnel        $at, $zero, L_1517B974
    if (ctx->r1 != 0) {
        // 0x1517B990: lh          $t6, -0xE($v0)
        ctx->r14 = MEM_H(ctx->r2, -0XE);
            goto L_1517B974;
    }
    goto skip_4;
    // 0x1517B990: lh          $t6, -0xE($v0)
    ctx->r14 = MEM_H(ctx->r2, -0XE);
    skip_4:
    // 0x1517B994: b           L_1517BA2C
    // 0x1517B998: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
        goto L_1517BA2C;
    // 0x1517B998: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1517B99C: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
L_1517B9A0:
    // 0x1517B9A0: addu        $t2, $t1, $t5
    ctx->r10 = ADD32(ctx->r9, ctx->r13);
    // 0x1517B9A4: addu        $v1, $t1, $t0
    ctx->r3 = ADD32(ctx->r9, ctx->r8);
    // 0x1517B9A8: lh          $a1, 0x4($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X4);
    // 0x1517B9AC: lh          $t7, 0x4($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X4);
    // 0x1517B9B0: addu        $v0, $t1, $a3
    ctx->r2 = ADD32(ctx->r9, ctx->r7);
    // 0x1517B9B4: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1517B9B8: beq         $at, $zero, L_1517B9EC
    if (ctx->r1 == 0) {
        // 0x1517B9BC: slt         $at, $a2, $s0
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_1517B9EC;
    }
    // 0x1517B9BC: slt         $at, $a2, $s0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x1517B9C0: beql        $at, $zero, L_1517B9F0
    if (ctx->r1 == 0) {
        // 0x1517B9C4: lh          $t9, 0x4($v0)
        ctx->r25 = MEM_H(ctx->r2, 0X4);
            goto L_1517B9F0;
    }
    goto skip_5;
    // 0x1517B9C4: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    skip_5:
    // 0x1517B9C8: lh          $t8, 0x12($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X12);
L_1517B9CC:
    // 0x1517B9CC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x1517B9D0: addiu       $t0, $t0, 0xE
    ctx->r8 = ADD32(ctx->r8, 0XE);
    // 0x1517B9D4: slt         $at, $t8, $a1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1517B9D8: beq         $at, $zero, L_1517B9EC
    if (ctx->r1 == 0) {
        // 0x1517B9DC: addiu       $v1, $v1, 0xE
        ctx->r3 = ADD32(ctx->r3, 0XE);
            goto L_1517B9EC;
    }
    // 0x1517B9DC: addiu       $v1, $v1, 0xE
    ctx->r3 = ADD32(ctx->r3, 0XE);
    // 0x1517B9E0: slt         $at, $a2, $s0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x1517B9E4: bnel        $at, $zero, L_1517B9CC
    if (ctx->r1 != 0) {
        // 0x1517B9E8: lh          $t8, 0x12($v1)
        ctx->r24 = MEM_H(ctx->r3, 0X12);
            goto L_1517B9CC;
    }
    goto skip_6;
    // 0x1517B9E8: lh          $t8, 0x12($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X12);
    skip_6:
L_1517B9EC:
    // 0x1517B9EC: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
L_1517B9F0:
    // 0x1517B9F0: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1517B9F4: beq         $at, $zero, L_1517BA28
    if (ctx->r1 == 0) {
        // 0x1517B9F8: slt         $at, $s1, $a0
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_1517BA28;
    }
    // 0x1517B9F8: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1517B9FC: beql        $at, $zero, L_1517BA2C
    if (ctx->r1 == 0) {
        // 0x1517BA00: slt         $at, $a2, $a0
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_1517BA2C;
    }
    goto skip_7;
    // 0x1517BA00: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    skip_7:
    // 0x1517BA04: lh          $t6, -0xA($v0)
    ctx->r14 = MEM_H(ctx->r2, -0XA);
L_1517BA08:
    // 0x1517BA08: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x1517BA0C: addiu       $a3, $a3, -0xE
    ctx->r7 = ADD32(ctx->r7, -0XE);
    // 0x1517BA10: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1517BA14: beq         $at, $zero, L_1517BA28
    if (ctx->r1 == 0) {
        // 0x1517BA18: addiu       $v0, $v0, -0xE
        ctx->r2 = ADD32(ctx->r2, -0XE);
            goto L_1517BA28;
    }
    // 0x1517BA18: addiu       $v0, $v0, -0xE
    ctx->r2 = ADD32(ctx->r2, -0XE);
    // 0x1517BA1C: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1517BA20: bnel        $at, $zero, L_1517BA08
    if (ctx->r1 != 0) {
        // 0x1517BA24: lh          $t6, -0xA($v0)
        ctx->r14 = MEM_H(ctx->r2, -0XA);
            goto L_1517BA08;
    }
    goto skip_8;
    // 0x1517BA24: lh          $t6, -0xA($v0)
    ctx->r14 = MEM_H(ctx->r2, -0XA);
    skip_8:
L_1517BA28:
    // 0x1517BA28: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
L_1517BA2C:
    // 0x1517BA2C: beq         $at, $zero, L_1517BADC
    if (ctx->r1 == 0) {
        // 0x1517BA30: addiu       $t0, $t0, 0xE
        ctx->r8 = ADD32(ctx->r8, 0XE);
            goto L_1517BADC;
    }
    // 0x1517BA30: addiu       $t0, $t0, 0xE
    ctx->r8 = ADD32(ctx->r8, 0XE);
    // 0x1517BA34: lwl         $at, 0x0($v1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r3, 0X0);
    // 0x1517BA38: lwr         $at, 0x3($v1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r3, 0X3);
    // 0x1517BA3C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x1517BA40: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x1517BA44: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x1517BA48: lwl         $t8, 0x4($v1)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r3, 0X4);
    // 0x1517BA4C: lwr         $t8, 0x7($v1)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r3, 0X7);
    // 0x1517BA50: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x1517BA54: lwl         $at, 0x8($v1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r3, 0X8);
    // 0x1517BA58: lwr         $at, 0xB($v1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r3, 0XB);
    // 0x1517BA5C: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x1517BA60: lhu         $at, 0xC($v1)
    ctx->r1 = MEM_HU(ctx->r3, 0XC);
    // 0x1517BA64: sh          $at, 0xC($t4)
    MEM_H(0XC, ctx->r12) = ctx->r1;
    // 0x1517BA68: lwl         $at, 0x0($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X0);
    // 0x1517BA6C: lwr         $at, 0x3($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X3);
    // 0x1517BA70: swl         $at, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r1);
    // 0x1517BA74: swr         $at, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r1);
    // 0x1517BA78: lwl         $t6, 0x4($v0)
    ctx->r14 = do_lwl(rdram, ctx->r14, ctx->r2, 0X4);
    // 0x1517BA7C: lwr         $t6, 0x7($v0)
    ctx->r14 = do_lwr(rdram, ctx->r14, ctx->r2, 0X7);
    // 0x1517BA80: swl         $t6, 0x4($v1)
    do_swl(rdram, 0X4, ctx->r3, ctx->r14);
    // 0x1517BA84: swr         $t6, 0x7($v1)
    do_swr(rdram, 0X7, ctx->r3, ctx->r14);
    // 0x1517BA88: lwl         $at, 0x8($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X8);
    // 0x1517BA8C: lwr         $at, 0xB($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0XB);
    // 0x1517BA90: swl         $at, 0x8($v1)
    do_swl(rdram, 0X8, ctx->r3, ctx->r1);
    // 0x1517BA94: swr         $at, 0xB($v1)
    do_swr(rdram, 0XB, ctx->r3, ctx->r1);
    // 0x1517BA98: lhu         $at, 0xC($v0)
    ctx->r1 = MEM_HU(ctx->r2, 0XC);
    // 0x1517BA9C: sh          $at, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r1;
    // 0x1517BAA0: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x1517BAA4: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x1517BAA8: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x1517BAAC: swl         $at, 0x0($t8)
    do_swl(rdram, 0X0, ctx->r24, ctx->r1);
    // 0x1517BAB0: swr         $at, 0x3($t8)
    do_swr(rdram, 0X3, ctx->r24, ctx->r1);
    // 0x1517BAB4: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x1517BAB8: swl         $t6, 0x4($t8)
    do_swl(rdram, 0X4, ctx->r24, ctx->r14);
    // 0x1517BABC: swr         $t6, 0x7($t8)
    do_swr(rdram, 0X7, ctx->r24, ctx->r14);
    // 0x1517BAC0: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x1517BAC4: swl         $at, 0x8($t8)
    do_swl(rdram, 0X8, ctx->r24, ctx->r1);
    // 0x1517BAC8: swr         $at, 0xB($t8)
    do_swr(rdram, 0XB, ctx->r24, ctx->r1);
    // 0x1517BACC: lhu         $at, 0xC($t4)
    ctx->r1 = MEM_HU(ctx->r12, 0XC);
    // 0x1517BAD0: sh          $at, 0xC($t8)
    MEM_H(0XC, ctx->r24) = ctx->r1;
    // 0x1517BAD4: b           L_1517B8FC
    // 0x1517BAD8: addiu       $a3, $a3, -0xE
    ctx->r7 = ADD32(ctx->r7, -0XE);
        goto L_1517B8FC;
    // 0x1517BAD8: addiu       $a3, $a3, -0xE
    ctx->r7 = ADD32(ctx->r7, -0XE);
L_1517BADC:
    // 0x1517BADC: addiu       $v0, $sp, 0x3C
    ctx->r2 = ADD32(ctx->r29, 0X3C);
    // 0x1517BAE0: lwl         $at, 0x0($v1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r3, 0X0);
    // 0x1517BAE4: lwr         $at, 0x3($v1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r3, 0X3);
    // 0x1517BAE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1517BAEC: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    // 0x1517BAF0: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x1517BAF4: lwl         $t9, 0x4($v1)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r3, 0X4);
    // 0x1517BAF8: lwr         $t9, 0x7($v1)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r3, 0X7);
    // 0x1517BAFC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x1517BB00: lwl         $at, 0x8($v1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r3, 0X8);
    // 0x1517BB04: lwr         $at, 0xB($v1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r3, 0XB);
    // 0x1517BB08: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x1517BB0C: lhu         $at, 0xC($v1)
    ctx->r1 = MEM_HU(ctx->r3, 0XC);
    // 0x1517BB10: sh          $at, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r1;
    // 0x1517BB14: lwl         $at, 0x0($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X0);
    // 0x1517BB18: lwr         $at, 0x3($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0X3);
    // 0x1517BB1C: swl         $at, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r1);
    // 0x1517BB20: swr         $at, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r1);
    // 0x1517BB24: lwl         $t6, 0x4($t2)
    ctx->r14 = do_lwl(rdram, ctx->r14, ctx->r10, 0X4);
    // 0x1517BB28: lwr         $t6, 0x7($t2)
    ctx->r14 = do_lwr(rdram, ctx->r14, ctx->r10, 0X7);
    // 0x1517BB2C: swl         $t6, 0x4($v1)
    do_swl(rdram, 0X4, ctx->r3, ctx->r14);
    // 0x1517BB30: swr         $t6, 0x7($v1)
    do_swr(rdram, 0X7, ctx->r3, ctx->r14);
    // 0x1517BB34: lwl         $at, 0x8($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X8);
    // 0x1517BB38: lwr         $at, 0xB($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0XB);
    // 0x1517BB3C: swl         $at, 0x8($v1)
    do_swl(rdram, 0X8, ctx->r3, ctx->r1);
    // 0x1517BB40: swr         $at, 0xB($v1)
    do_swr(rdram, 0XB, ctx->r3, ctx->r1);
    // 0x1517BB44: lhu         $at, 0xC($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0XC);
    // 0x1517BB48: sh          $at, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r1;
    // 0x1517BB4C: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x1517BB50: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x1517BB54: addu        $t9, $t7, $t5
    ctx->r25 = ADD32(ctx->r15, ctx->r13);
    // 0x1517BB58: swl         $at, 0x0($t9)
    do_swl(rdram, 0X0, ctx->r25, ctx->r1);
    // 0x1517BB5C: swr         $at, 0x3($t9)
    do_swr(rdram, 0X3, ctx->r25, ctx->r1);
    // 0x1517BB60: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x1517BB64: swl         $t6, 0x4($t9)
    do_swl(rdram, 0X4, ctx->r25, ctx->r14);
    // 0x1517BB68: swr         $t6, 0x7($t9)
    do_swr(rdram, 0X7, ctx->r25, ctx->r14);
    // 0x1517BB6C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x1517BB70: swl         $at, 0x8($t9)
    do_swl(rdram, 0X8, ctx->r25, ctx->r1);
    // 0x1517BB74: swr         $at, 0xB($t9)
    do_swr(rdram, 0XB, ctx->r25, ctx->r1);
    // 0x1517BB78: lhu         $at, 0xC($v0)
    ctx->r1 = MEM_HU(ctx->r2, 0XC);
    // 0x1517BB7C: sh          $at, 0xC($t9)
    MEM_H(0XC, ctx->r25) = ctx->r1;
    // 0x1517BB80: jal         0x1517B89C
    // 0x1517BB84: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    func_1517B89C(rdram, ctx);
        goto after_0;
    // 0x1517BB84: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    after_0:
    // 0x1517BB88: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x1517BB8C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1517BB90: jal         0x1517B89C
    // 0x1517BB94: addiu       $a0, $a2, 0x1
    ctx->r4 = ADD32(ctx->r6, 0X1);
    func_1517B89C(rdram, ctx);
        goto after_1;
    // 0x1517BB94: addiu       $a0, $a2, 0x1
    ctx->r4 = ADD32(ctx->r6, 0X1);
    after_1:
L_1517BB98:
    // 0x1517BB98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1517BB9C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1517BBA0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1517BBA4: jr          $ra
    // 0x1517BBA8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x1517BBA8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_15146D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15146D60: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15146D64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15146D68: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x15146D6C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x15146D70: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x15146D74: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x15146D78: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x15146D7C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x15146D80: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x15146D84: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x15146D88: beq         $t7, $zero, L_15146E74
    if (ctx->r15 == 0) {
        // 0x15146D8C: addiu       $a2, $sp, 0x28
        ctx->r6 = ADD32(ctx->r29, 0X28);
            goto L_15146E74;
    }
    // 0x15146D8C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x15146D90: jal         0x15146890
    // 0x15146D94: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_15146890(rdram, ctx);
        goto after_0;
    // 0x15146D94: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x15146D98: beq         $v0, $zero, L_15146E74
    if (ctx->r2 == 0) {
        // 0x15146D9C: lw          $t8, 0x60($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X60);
            goto L_15146E74;
    }
    // 0x15146D9C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x15146DA0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15146DA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15146DA8: lwc1        $f8, 0x5728($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5728);
    // 0x15146DAC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15146DB0: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x15146DB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15146DB8: lwc1        $f18, 0x572C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X572C);
    // 0x15146DBC: lwc1        $f16, 0x40($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X40);
    // 0x15146DC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15146DC4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15146DC8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15146DCC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x15146DD0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15146DD4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x15146DD8: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x15146DDC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15146DE0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x15146DE4: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x15146DE8: nop

    // 0x15146DEC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15146DF0: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x15146DF4: nop

    // 0x15146DF8: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x15146DFC: beql        $a3, $zero, L_15146E4C
    if (ctx->r7 == 0) {
        // 0x15146E00: mfc1        $a3, $f6
        ctx->r7 = (int32_t)ctx->f6.u32l;
            goto L_15146E4C;
    }
    goto skip_0;
    // 0x15146E00: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x15146E04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15146E08: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15146E0C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15146E10: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x15146E14: nop

    // 0x15146E18: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x15146E1C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x15146E20: nop

    // 0x15146E24: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x15146E28: bne         $a3, $zero, L_15146E40
    if (ctx->r7 != 0) {
        // 0x15146E2C: nop
    
            goto L_15146E40;
    }
    // 0x15146E2C: nop

    // 0x15146E30: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x15146E34: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15146E38: b           L_15146E58
    // 0x15146E3C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_15146E58;
    // 0x15146E3C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_15146E40:
    // 0x15146E40: b           L_15146E58
    // 0x15146E44: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_15146E58;
    // 0x15146E44: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15146E48: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
L_15146E4C:
    // 0x15146E4C: nop

    // 0x15146E50: bltz        $a3, L_15146E40
    if (SIGNED(ctx->r7) < 0) {
        // 0x15146E54: nop
    
            goto L_15146E40;
    }
    // 0x15146E54: nop

L_15146E58:
    // 0x15146E58: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x15146E5C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x15146E60: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x15146E64: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x15146E68: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15146E6C: jal         0x15141F78
    // 0x15146E70: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_15141F78(rdram, ctx);
        goto after_1;
    // 0x15146E70: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_1:
L_15146E74:
    // 0x15146E74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15146E78: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15146E7C: jr          $ra
    // 0x15146E80: nop

    return;
    return;
    // 0x15146E80: nop

;}
RECOMP_FUNC void func_1510CE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510CE60: addiu       $sp, $sp, -0x430
    ctx->r29 = ADD32(ctx->r29, -0X430);
    // 0x1510CE64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1510CE68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1510CE6C: sw          $a0, 0x430($sp)
    MEM_W(0X430, ctx->r29) = ctx->r4;
    // 0x1510CE70: sw          $a1, 0x434($sp)
    MEM_W(0X434, ctx->r29) = ctx->r5;
    // 0x1510CE74: sw          $a2, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r6;
    // 0x1510CE78: sw          $a3, 0x43C($sp)
    MEM_W(0X43C, ctx->r29) = ctx->r7;
    // 0x1510CE7C: lw          $t6, 0x440($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X440);
    // 0x1510CE80: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x1510CE84: addiu       $v0, $sp, 0x33
    ctx->r2 = ADD32(ctx->r29, 0X33);
    // 0x1510CE88: beq         $t6, $zero, L_1510CEB8
    if (ctx->r14 == 0) {
        // 0x1510CE8C: addiu       $v1, $sp, 0x3FB
        ctx->r3 = ADD32(ctx->r29, 0X3FB);
            goto L_1510CEB8;
    }
    // 0x1510CE8C: addiu       $v1, $sp, 0x3FB
    ctx->r3 = ADD32(ctx->r29, 0X3FB);
    // 0x1510CE90: sb          $zero, 0x30($sp)
    MEM_B(0X30, ctx->r29) = 0;
    // 0x1510CE94: sb          $zero, 0x31($sp)
    MEM_B(0X31, ctx->r29) = 0;
    // 0x1510CE98: sb          $zero, 0x32($sp)
    MEM_B(0X32, ctx->r29) = 0;
L_1510CE9C:
    // 0x1510CE9C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1510CEA0: sb          $zero, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = 0;
    // 0x1510CEA4: sb          $zero, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = 0;
    // 0x1510CEA8: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x1510CEAC: bne         $v0, $v1, L_1510CE9C
    if (ctx->r2 != ctx->r3) {
        // 0x1510CEB0: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_1510CE9C;
    }
    // 0x1510CEB0: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
    // 0x1510CEB4: sw          $zero, 0x40C($sp)
    MEM_W(0X40C, ctx->r29) = 0;
L_1510CEB8:
    // 0x1510CEB8: lw          $t7, 0x430($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X430);
    // 0x1510CEBC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x1510CEC0: lw          $t4, 0x40C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40C);
    // 0x1510CEC4: lb          $t8, 0x0($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X0);
    // 0x1510CEC8: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x1510CECC: lui         $t3, 0xFF00
    ctx->r11 = S32(0XFF00 << 16);
    // 0x1510CED0: beq         $t8, $at, L_1510D034
    if (ctx->r24 == ctx->r1) {
        // 0x1510CED4: or          $t0, $t7, $zero
        ctx->r8 = ctx->r15 | 0;
            goto L_1510D034;
    }
    // 0x1510CED4: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x1510CED8: lb          $v0, 0x0($t7)
    ctx->r2 = MEM_B(ctx->r15, 0X0);
    // 0x1510CEDC: lw          $a1, 0x414($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X414);
    // 0x1510CEE0: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
L_1510CEE4:
    // 0x1510CEE4: bne         $v0, $at, L_1510D010
    if (ctx->r2 != ctx->r1) {
        // 0x1510CEE8: lw          $t9, 0x434($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X434);
            goto L_1510D010;
    }
    // 0x1510CEE8: lw          $t9, 0x434($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X434);
    // 0x1510CEEC: beq         $t9, $zero, L_1510CEFC
    if (ctx->r25 == 0) {
        // 0x1510CEF0: lw          $s0, 0x4($t0)
        ctx->r16 = MEM_W(ctx->r8, 0X4);
            goto L_1510CEFC;
    }
    // 0x1510CEF0: lw          $s0, 0x4($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X4);
    // 0x1510CEF4: and         $t6, $s0, $t3
    ctx->r14 = ctx->r16 & ctx->r11;
    // 0x1510CEF8: bne         $t6, $zero, L_1510D010
    if (ctx->r14 != 0) {
        // 0x1510CEFC: and         $t8, $s0, $t3
        ctx->r24 = ctx->r16 & ctx->r11;
            goto L_1510D010;
    }
L_1510CEFC:
    // 0x1510CEFC: and         $t8, $s0, $t3
    ctx->r24 = ctx->r16 & ctx->r11;
    // 0x1510CF00: lui         $at, 0x600
    ctx->r1 = S32(0X600 << 16);
    // 0x1510CF04: sltu        $at, $t8, $at
    ctx->r1 = ctx->r24 < ctx->r1 ? 1 : 0;
    // 0x1510CF08: beq         $at, $zero, L_1510D010
    if (ctx->r1 == 0) {
        // 0x1510CF0C: sra         $t1, $s0, 22
        ctx->r9 = S32(SIGNED(ctx->r16) >> 22);
            goto L_1510D010;
    }
    // 0x1510CF0C: sra         $t1, $s0, 22
    ctx->r9 = S32(SIGNED(ctx->r16) >> 22);
    // 0x1510CF10: lui         $at, 0xF00
    ctx->r1 = S32(0XF00 << 16);
    // 0x1510CF14: and         $v0, $s0, $at
    ctx->r2 = ctx->r16 & ctx->r1;
    // 0x1510CF18: lui         $at, 0xF03F
    ctx->r1 = S32(0XF03F << 16);
    // 0x1510CF1C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x1510CF20: and         $t7, $s0, $at
    ctx->r15 = ctx->r16 & ctx->r1;
    // 0x1510CF24: bne         $v0, $zero, L_1510CFB0
    if (ctx->r2 != 0) {
        // 0x1510CF28: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_1510CFB0;
    }
    // 0x1510CF28: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x1510CF2C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x1510CF30: addiu       $a1, $sp, 0x424
    ctx->r5 = ADD32(ctx->r29, 0X424);
    // 0x1510CF34: lw          $a2, 0x43C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X43C);
    // 0x1510CF38: lw          $a3, 0x438($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X438);
    // 0x1510CF3C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x1510CF40: sw          $t1, 0x420($sp)
    MEM_W(0X420, ctx->r29) = ctx->r9;
    // 0x1510CF44: sw          $t2, 0x428($sp)
    MEM_W(0X428, ctx->r29) = ctx->r10;
    // 0x1510CF48: sw          $t4, 0x40C($sp)
    MEM_W(0X40C, ctx->r29) = ctx->r12;
    // 0x1510CF4C: jal         0x1510D0EC
    // 0x1510CF50: sw          $t5, 0x418($sp)
    MEM_W(0X418, ctx->r29) = ctx->r13;
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x1510CF50: sw          $t5, 0x418($sp)
    MEM_W(0X418, ctx->r29) = ctx->r13;
    after_0:
    // 0x1510CF54: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1510CF58: lw          $t1, 0x420($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X420);
    // 0x1510CF5C: lw          $t2, 0x428($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X428);
    // 0x1510CF60: lw          $t4, 0x40C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40C);
    // 0x1510CF64: lw          $t5, 0x418($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X418);
    // 0x1510CF68: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x1510CF6C: lw          $t9, 0x440($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X440);
    // 0x1510CF70: lui         $t3, 0xFF00
    ctx->r11 = S32(0XFF00 << 16);
    // 0x1510CF74: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1510CF78: beq         $t9, $zero, L_1510CFB4
    if (ctx->r25 == 0) {
        // 0x1510CF7C: sra         $t6, $s0, 3
        ctx->r14 = S32(SIGNED(ctx->r16) >> 3);
            goto L_1510CFB4;
    }
    // 0x1510CF7C: sra         $t6, $s0, 3
    ctx->r14 = S32(SIGNED(ctx->r16) >> 3);
    // 0x1510CF80: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x1510CF84: addu        $v1, $t6, $t8
    ctx->r3 = ADD32(ctx->r14, ctx->r24);
    // 0x1510CF88: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x1510CF8C: andi        $t7, $s0, 0x7
    ctx->r15 = ctx->r16 & 0X7;
    // 0x1510CF90: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1510CF94: sllv        $v0, $t9, $t7
    ctx->r2 = S32(ctx->r25 << (ctx->r15 & 31));
    // 0x1510CF98: and         $t6, $a0, $v0
    ctx->r14 = ctx->r4 & ctx->r2;
    // 0x1510CF9C: bne         $t6, $zero, L_1510CFB4
    if (ctx->r14 != 0) {
        // 0x1510CFA0: or          $t8, $a0, $v0
        ctx->r24 = ctx->r4 | ctx->r2;
            goto L_1510CFB4;
    }
    // 0x1510CFA0: or          $t8, $a0, $v0
    ctx->r24 = ctx->r4 | ctx->r2;
    // 0x1510CFA4: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x1510CFA8: b           L_1510CFB4
    // 0x1510CFAC: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
        goto L_1510CFB4;
    // 0x1510CFAC: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
L_1510CFB0:
    // 0x1510CFB0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_1510CFB4:
    // 0x1510CFB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1510CFB8: bne         $a1, $at, L_1510CFC4
    if (ctx->r5 != ctx->r1) {
        // 0x1510CFBC: andi        $t9, $t1, 0x1
        ctx->r25 = ctx->r9 & 0X1;
            goto L_1510CFC4;
    }
    // 0x1510CFBC: andi        $t9, $t1, 0x1
    ctx->r25 = ctx->r9 & 0X1;
    // 0x1510CFC0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
L_1510CFC4:
    // 0x1510CFC4: beql        $t1, $zero, L_1510D014
    if (ctx->r9 == 0) {
        // 0x1510CFC8: lw          $t9, 0x430($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X430);
            goto L_1510D014;
    }
    goto skip_0;
    // 0x1510CFC8: lw          $t9, 0x430($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X430);
    skip_0:
    // 0x1510CFCC: beq         $t9, $zero, L_1510CFE8
    if (ctx->r25 == 0) {
        // 0x1510CFD0: lw          $v0, 0x4($t0)
        ctx->r2 = MEM_W(ctx->r8, 0X4);
            goto L_1510CFE8;
    }
    // 0x1510CFD0: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x1510CFD4: lw          $t7, 0x424($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X424);
    // 0x1510CFD8: addu        $t6, $v0, $t7
    ctx->r14 = ADD32(ctx->r2, ctx->r15);
    // 0x1510CFDC: addiu       $v0, $t6, -0x200
    ctx->r2 = ADD32(ctx->r14, -0X200);
    // 0x1510CFE0: b           L_1510D000
    // 0x1510CFE4: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
        goto L_1510D000;
    // 0x1510CFE4: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
L_1510CFE8:
    // 0x1510CFE8: andi        $t9, $t1, 0x2
    ctx->r25 = ctx->r9 & 0X2;
    // 0x1510CFEC: beq         $t9, $zero, L_1510D000
    if (ctx->r25 == 0) {
        // 0x1510CFF0: lw          $t7, 0x424($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X424);
            goto L_1510D000;
    }
    // 0x1510CFF0: lw          $t7, 0x424($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X424);
    // 0x1510CFF4: addu        $t6, $v0, $t7
    ctx->r14 = ADD32(ctx->r2, ctx->r15);
    // 0x1510CFF8: addiu       $v0, $t6, -0x20
    ctx->r2 = ADD32(ctx->r14, -0X20);
    // 0x1510CFFC: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
L_1510D000:
    // 0x1510D000: andi        $t9, $t1, 0x3C
    ctx->r25 = ctx->r9 & 0X3C;
    // 0x1510D004: sll         $t7, $t9, 22
    ctx->r15 = S32(ctx->r25 << 22);
    // 0x1510D008: or          $t6, $v0, $t7
    ctx->r14 = ctx->r2 | ctx->r15;
    // 0x1510D00C: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
L_1510D010:
    // 0x1510D010: lw          $t9, 0x430($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X430);
L_1510D014:
    // 0x1510D014: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x1510D018: sll         $t8, $t2, 3
    ctx->r24 = S32(ctx->r10 << 3);
    // 0x1510D01C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x1510D020: lb          $v0, 0x0($t0)
    ctx->r2 = MEM_B(ctx->r8, 0X0);
    // 0x1510D024: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x1510D028: bnel        $v0, $at, L_1510CEE4
    if (ctx->r2 != ctx->r1) {
        // 0x1510D02C: addiu       $at, $zero, -0x3
        ctx->r1 = ADD32(0, -0X3);
            goto L_1510CEE4;
    }
    goto skip_1;
    // 0x1510D02C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    skip_1:
    // 0x1510D030: sw          $a1, 0x414($sp)
    MEM_W(0X414, ctx->r29) = ctx->r5;
L_1510D034:
    // 0x1510D034: lw          $t7, 0x440($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X440);
    // 0x1510D038: addiu       $s0, $t4, 0x1
    ctx->r16 = ADD32(ctx->r12, 0X1);
    // 0x1510D03C: sll         $a0, $s0, 1
    ctx->r4 = S32(ctx->r16 << 1);
    // 0x1510D040: beq         $t7, $zero, L_1510D0D4
    if (ctx->r15 == 0) {
        // 0x1510D044: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_1510D0D4;
    }
    // 0x1510D044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1510D048: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1510D04C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1510D050: sw          $t4, 0x40C($sp)
    MEM_W(0X40C, ctx->r29) = ctx->r12;
    // 0x1510D054: jal         0x10003C40
    // 0x1510D058: sw          $t5, 0x418($sp)
    MEM_W(0X418, ctx->r29) = ctx->r13;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x1510D058: sw          $t5, 0x418($sp)
    MEM_W(0X418, ctx->r29) = ctx->r13;
    after_1:
    // 0x1510D05C: lw          $t6, 0x440($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X440);
    // 0x1510D060: lw          $t4, 0x40C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40C);
    // 0x1510D064: lw          $t5, 0x418($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X418);
    // 0x1510D068: beq         $v0, $zero, L_1510D0D4
    if (ctx->r2 == 0) {
        // 0x1510D06C: sw          $v0, 0x0($t6)
        MEM_W(0X0, ctx->r14) = ctx->r2;
            goto L_1510D0D4;
    }
    // 0x1510D06C: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x1510D070: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1510D074: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x1510D078: addiu       $a2, $v0, 0x2
    ctx->r6 = ADD32(ctx->r2, 0X2);
    // 0x1510D07C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1510D080: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x1510D084: beq         $s0, $at, L_1510D0D4
    if (ctx->r16 == ctx->r1) {
        // 0x1510D088: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_1510D0D4;
    }
    // 0x1510D088: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1510D08C: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x1510D090: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
L_1510D094:
    // 0x1510D094: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x1510D098: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
    // 0x1510D09C: addu        $t6, $a2, $t7
    ctx->r14 = ADD32(ctx->r6, ctx->r15);
    // 0x1510D0A0: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x1510D0A4: beq         $t9, $zero, L_1510D0B4
    if (ctx->r25 == 0) {
        // 0x1510D0A8: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_1510D0B4;
    }
    // 0x1510D0A8: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x1510D0AC: sh          $a0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r4;
    // 0x1510D0B0: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
L_1510D0B4:
    // 0x1510D0B4: beq         $v1, $a3, L_1510D0C4
    if (ctx->r3 == ctx->r7) {
        // 0x1510D0B8: addiu       $a1, $t2, 0x1
        ctx->r5 = ADD32(ctx->r10, 0X1);
            goto L_1510D0C4;
    }
    // 0x1510D0B8: addiu       $a1, $t2, 0x1
    ctx->r5 = ADD32(ctx->r10, 0X1);
    // 0x1510D0BC: b           L_1510D0CC
    // 0x1510D0C0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_1510D0CC;
    // 0x1510D0C0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_1510D0C4:
    // 0x1510D0C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1510D0C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_1510D0CC:
    // 0x1510D0CC: bne         $a1, $s0, L_1510D094
    if (ctx->r5 != ctx->r16) {
        // 0x1510D0D0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_1510D094;
    }
    // 0x1510D0D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_1510D0D4:
    // 0x1510D0D4: sltiu       $v0, $t5, 0x1
    ctx->r2 = ctx->r13 < 0X1 ? 1 : 0;
    // 0x1510D0D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1510D0DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1510D0E0: addiu       $sp, $sp, 0x430
    ctx->r29 = ADD32(ctx->r29, 0X430);
    // 0x1510D0E4: jr          $ra
    // 0x1510D0E8: nop

    return;
    return;
    // 0x1510D0E8: nop

;}
RECOMP_FUNC void func_151EFE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EFE00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EFE04: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151EFE08: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151EFE0C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151EFE10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151EFE14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151EFE18: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x151EFE1C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151EFE20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_151EFE24:
    // 0x151EFE24: bnel        $v0, $zero, L_151EFE38
    if (ctx->r2 != 0) {
        // 0x151EFE28: swc1        $f2, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
            goto L_151EFE38;
    }
    goto skip_0;
    // 0x151EFE28: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    skip_0:
    // 0x151EFE2C: b           L_151EFE38
    // 0x151EFE30: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
        goto L_151EFE38;
    // 0x151EFE30: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x151EFE34: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
L_151EFE38:
    // 0x151EFE38: bnel        $v0, $a0, L_151EFE4C
    if (ctx->r2 != ctx->r4) {
        // 0x151EFE3C: swc1        $f2, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
            goto L_151EFE4C;
    }
    goto skip_1;
    // 0x151EFE3C: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
    skip_1:
    // 0x151EFE40: b           L_151EFE4C
    // 0x151EFE44: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
        goto L_151EFE4C;
    // 0x151EFE44: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x151EFE48: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
L_151EFE4C:
    // 0x151EFE4C: bnel        $v0, $a1, L_151EFE60
    if (ctx->r2 != ctx->r5) {
        // 0x151EFE50: swc1        $f2, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
            goto L_151EFE60;
    }
    goto skip_2;
    // 0x151EFE50: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    skip_2:
    // 0x151EFE54: b           L_151EFE60
    // 0x151EFE58: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
        goto L_151EFE60;
    // 0x151EFE58: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x151EFE5C: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
L_151EFE60:
    // 0x151EFE60: bnel        $v0, $a2, L_151EFE74
    if (ctx->r2 != ctx->r6) {
        // 0x151EFE64: swc1        $f2, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
            goto L_151EFE74;
    }
    goto skip_3;
    // 0x151EFE64: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
    skip_3:
    // 0x151EFE68: b           L_151EFE74
    // 0x151EFE6C: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
        goto L_151EFE74;
    // 0x151EFE6C: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x151EFE70: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
L_151EFE74:
    // 0x151EFE74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151EFE78: bne         $v0, $a3, L_151EFE24
    if (ctx->r2 != ctx->r7) {
        // 0x151EFE7C: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_151EFE24;
    }
    // 0x151EFE7C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x151EFE80: jr          $ra
    // 0x151EFE84: nop

    return;
    return;
    // 0x151EFE84: nop

;}
RECOMP_FUNC void func_1513B968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513B968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513B96C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1513B970: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1513B974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513B978: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1513B97C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1513B980: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x1513B984: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x1513B988: addu        $a0, $a1, $t7
    ctx->r4 = ADD32(ctx->r5, ctx->r15);
    // 0x1513B98C: jal         0x150A7B80
    // 0x1513B990: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_150A7B80(rdram, ctx);
        goto after_0;
    // 0x1513B990: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_0:
    // 0x1513B994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1513B998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513B99C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513B9A0: jr          $ra
    // 0x1513B9A4: nop

    return;
    return;
    // 0x1513B9A4: nop

;}
RECOMP_FUNC void func_150870D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150870D0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x150870D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150870D8: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x150870DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150870E0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x150870E4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x150870E8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x150870EC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x150870F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150870F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150870F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150870FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15087100: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x15087104: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x15087108: jal         0x15086D48
    // 0x1508710C: sw          $zero, 0x72A0($at)
    MEM_W(0X72A0, ctx->r1) = 0;
    func_15086D48(rdram, ctx);
        goto after_0;
    // 0x1508710C: sw          $zero, 0x72A0($at)
    MEM_W(0X72A0, ctx->r1) = 0;
    after_0:
    // 0x15087110: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
    // 0x15087114: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x15087118: beq         $s0, $v1, L_15087320
    if (ctx->r16 == ctx->r3) {
        // 0x1508711C: sb          $v0, 0x4B($sp)
        MEM_B(0X4B, ctx->r29) = ctx->r2;
            goto L_15087320;
    }
    // 0x1508711C: sb          $v0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r2;
    // 0x15087120: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x15087124: lb          $a3, 0x23A8($a3)
    ctx->r7 = MEM_B(ctx->r7, 0X23A8);
    // 0x15087128: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1508712C: lw          $t0, 0x2350($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2350);
    // 0x15087130: multu       $a3, $s0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15087134: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x15087138: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x1508713C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15087140: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x15087144: addu        $a2, $t6, $t0
    ctx->r6 = ADD32(ctx->r14, ctx->r8);
    // 0x15087148: mflo        $a1
    ctx->r5 = lo;
    // 0x1508714C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x15087150: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_15087154:
    // 0x15087154: lbu         $v1, 0x9($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X9);
    // 0x15087158: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1508715C: beq         $s0, $v1, L_150871AC
    if (ctx->r16 == ctx->r3) {
        // 0x15087160: sll         $t8, $v1, 4
        ctx->r24 = S32(ctx->r3 << 4);
            goto L_150871AC;
    }
    // 0x15087160: sll         $t8, $v1, 4
    ctx->r24 = S32(ctx->r3 << 4);
    // 0x15087164: addu        $a0, $t8, $t0
    ctx->r4 = ADD32(ctx->r24, ctx->r8);
    // 0x15087168: lbu         $t9, 0xE($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XE);
    // 0x1508716C: bne         $t9, $zero, L_150871AC
    if (ctx->r25 != 0) {
        // 0x15087170: nop
    
            goto L_150871AC;
    }
    // 0x15087170: nop

    // 0x15087174: bne         $a3, $zero, L_1508718C
    if (ctx->r7 != 0) {
        // 0x15087178: nop
    
            goto L_1508718C;
    }
    // 0x15087178: nop

    // 0x1508717C: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x15087180: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15087184: beql        $at, $zero, L_150871A8
    if (ctx->r1 == 0) {
        // 0x15087188: andi        $a1, $v0, 0xFF
        ctx->r5 = ctx->r2 & 0XFF;
            goto L_150871A8;
    }
    goto skip_0;
    // 0x15087188: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    skip_0:
L_1508718C:
    // 0x1508718C: beq         $a3, $zero, L_150871AC
    if (ctx->r7 == 0) {
        // 0x15087190: nop
    
            goto L_150871AC;
    }
    // 0x15087190: nop

    // 0x15087194: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x15087198: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1508719C: bne         $at, $zero, L_150871AC
    if (ctx->r1 != 0) {
        // 0x150871A0: nop
    
            goto L_150871AC;
    }
    // 0x150871A0: nop

    // 0x150871A4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
L_150871A8:
    // 0x150871A8: andi        $s6, $v1, 0xFF
    ctx->r22 = ctx->r3 & 0XFF;
L_150871AC:
    // 0x150871AC: bne         $s1, $t1, L_15087154
    if (ctx->r17 != ctx->r9) {
        // 0x150871B0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_15087154;
    }
    // 0x150871B0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x150871B4: beq         $s0, $s6, L_150871E8
    if (ctx->r16 == ctx->r22) {
        // 0x150871B8: or          $s1, $s6, $zero
        ctx->r17 = ctx->r22 | 0;
            goto L_150871E8;
    }
    // 0x150871B8: or          $s1, $s6, $zero
    ctx->r17 = ctx->r22 | 0;
    // 0x150871BC: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    // 0x150871C0: andi        $a1, $s6, 0xFF
    ctx->r5 = ctx->r22 & 0XFF;
    // 0x150871C4: jal         0x150888A8
    // 0x150871C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_150888A8(rdram, ctx);
        goto after_1;
    // 0x150871C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x150871CC: andi        $s7, $v0, 0xFF
    ctx->r23 = ctx->r2 & 0XFF;
    // 0x150871D0: andi        $a0, $s6, 0xFF
    ctx->r4 = ctx->r22 & 0XFF;
    // 0x150871D4: lbu         $a1, 0x4B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X4B);
    // 0x150871D8: jal         0x150888A8
    // 0x150871DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_150888A8(rdram, ctx);
        goto after_2;
    // 0x150871DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x150871E0: sb          $s7, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r23;
    // 0x150871E4: sb          $v0, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r2;
L_150871E8:
    // 0x150871E8: lbu         $s7, 0x49($sp)
    ctx->r23 = MEM_BU(ctx->r29, 0X49);
    // 0x150871EC: beq         $s0, $s1, L_15087320
    if (ctx->r16 == ctx->r17) {
        // 0x150871F0: lbu         $fp, 0x48($sp)
        ctx->r30 = MEM_BU(ctx->r29, 0X48);
            goto L_15087320;
    }
    // 0x150871F0: lbu         $fp, 0x48($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0X48);
    // 0x150871F4: beql        $s0, $fp, L_15087324
    if (ctx->r16 == ctx->r30) {
        // 0x150871F8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15087324;
    }
    goto skip_1;
    // 0x150871F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x150871FC: beq         $s0, $s7, L_15087320
    if (ctx->r16 == ctx->r23) {
        // 0x15087200: andi        $s1, $s7, 0xFF
        ctx->r17 = ctx->r23 & 0XFF;
            goto L_15087320;
    }
    // 0x15087200: andi        $s1, $s7, 0xFF
    ctx->r17 = ctx->r23 & 0XFF;
    // 0x15087204: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x15087208: lbu         $s0, 0x4B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X4B);
    // 0x1508720C: sb          $s6, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r22;
    // 0x15087210: lbu         $a0, 0x45($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X45);
L_15087214:
    // 0x15087214: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x15087218: sb          $a1, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r5;
    // 0x1508721C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15087220: sb          $s1, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r17;
    // 0x15087224: jal         0x150888A8
    // 0x15087228: sb          $a0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r4;
    func_150888A8(rdram, ctx);
        goto after_3;
    // 0x15087228: sb          $a0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r4;
    after_3:
    // 0x1508722C: lbu         $a0, 0x44($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X44);
    // 0x15087230: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x15087234: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x15087238: bnel        $s0, $a0, L_15087214
    if (ctx->r16 != ctx->r4) {
        // 0x1508723C: lbu         $a0, 0x45($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X45);
            goto L_15087214;
    }
    goto skip_2;
    // 0x1508723C: lbu         $a0, 0x45($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X45);
    skip_2:
    // 0x15087240: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x15087244: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x15087248: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508724C: addiu       $s5, $s5, 0x2398
    ctx->r21 = ADD32(ctx->r21, 0X2398);
    // 0x15087250: sb          $s2, 0x2399($at)
    MEM_B(0X2399, ctx->r1) = ctx->r18;
    // 0x15087254: sb          $v0, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r2;
    // 0x15087258: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x1508725C: sll         $a0, $v0, 5
    ctx->r4 = S32(ctx->r2 << 5);
    // 0x15087260: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15087264: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x15087268: sb          $s1, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r17;
    // 0x1508726C: sw          $zero, 0x2394($at)
    MEM_W(0X2394, ctx->r1) = 0;
    // 0x15087270: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x15087274: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x15087278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1508727C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15087280: jal         0x10003C40
    // 0x15087284: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_4;
    // 0x15087284: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x15087288: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x1508728C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15087290: addiu       $v1, $v1, 0x72A0
    ctx->r3 = ADD32(ctx->r3, 0X72A0);
    // 0x15087294: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x15087298: blez        $t2, L_15087314
    if (SIGNED(ctx->r10) <= 0) {
        // 0x1508729C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_15087314;
    }
    // 0x1508729C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150872A0: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x150872A4: addiu       $s4, $s4, -0x270
    ctx->r20 = ADD32(ctx->r20, -0X270);
    // 0x150872A8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_150872AC:
    // 0x150872AC: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x150872B0: addiu       $v1, $v1, 0x72A0
    ctx->r3 = ADD32(ctx->r3, 0X72A0);
    // 0x150872B4: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x150872B8: addu        $s0, $s2, $t3
    ctx->r16 = ADD32(ctx->r18, ctx->r11);
    // 0x150872BC: jal         0x15088824
    // 0x150872C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15088824(rdram, ctx);
        goto after_5;
    // 0x150872C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x150872C4: sb          $fp, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r30;
    // 0x150872C8: lbu         $t4, 0x4B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4B);
    // 0x150872CC: sb          $s6, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r22;
    // 0x150872D0: sb          $s7, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r23;
    // 0x150872D4: sb          $t4, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r12;
    // 0x150872D8: lb          $t5, 0x0($s5)
    ctx->r13 = MEM_B(ctx->r21, 0X0);
    // 0x150872DC: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x150872E0: beql        $at, $zero, L_150872F0
    if (ctx->r1 == 0) {
        // 0x150872E4: lb          $t6, 0x0($s4)
        ctx->r14 = MEM_B(ctx->r20, 0X0);
            goto L_150872F0;
    }
    goto skip_3;
    // 0x150872E4: lb          $t6, 0x0($s4)
    ctx->r14 = MEM_B(ctx->r20, 0X0);
    skip_3:
    // 0x150872E8: sb          $s1, 0x31($s0)
    MEM_B(0X31, ctx->r16) = ctx->r17;
    // 0x150872EC: lb          $t6, 0x0($s4)
    ctx->r14 = MEM_B(ctx->r20, 0X0);
L_150872F0:
    // 0x150872F0: sb          $s3, 0x26($s0)
    MEM_B(0X26, ctx->r16) = ctx->r19;
    // 0x150872F4: addiu       $s2, $s2, 0x84
    ctx->r18 = ADD32(ctx->r18, 0X84);
    // 0x150872F8: slt         $t7, $s1, $t6
    ctx->r15 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x150872FC: xori        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 ^ 0X1;
    // 0x15087300: sb          $t7, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r15;
    // 0x15087304: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x15087308: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1508730C: bne         $s1, $t8, L_150872AC
    if (ctx->r17 != ctx->r24) {
        // 0x15087310: nop
    
            goto L_150872AC;
    }
    // 0x15087310: nop

L_15087314:
    // 0x15087314: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15087318: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508731C: sb          $t9, 0x239A($at)
    MEM_B(0X239A, ctx->r1) = ctx->r25;
L_15087320:
    // 0x15087320: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_15087324:
    // 0x15087324: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15087328: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1508732C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15087330: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15087334: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15087338: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1508733C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15087340: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15087344: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15087348: jr          $ra
    // 0x1508734C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x1508734C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_151C5588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C5588: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151C558C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151C5590: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x151C5594: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x151C5598: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x151C559C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x151C55A0: jal         0x150ADA68
    // 0x151C55A4: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151C55A4: nop

    after_0:
    // 0x151C55A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C55AC: lwc1        $f4, -0x5544($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5544);
    // 0x151C55B0: lui         $at, 0x4417
    ctx->r1 = S32(0X4417 << 16);
    // 0x151C55B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C55B8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151C55BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C55C0: lwc1        $f16, -0x5540($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5540);
    // 0x151C55C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C55C8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151C55CC: jal         0x150ADA68
    // 0x151C55D0: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151C55D0: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x151C55D4: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x151C55D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C55DC: lui         $at, 0x430D
    ctx->r1 = S32(0X430D << 16);
    // 0x151C55E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C55E4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151C55E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C55EC: lwc1        $f16, -0x553C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X553C);
    // 0x151C55F0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C55F4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151C55F8: jal         0x150ADA20
    // 0x151C55FC: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151C55FC: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x151C5600: jal         0x150ADA20
    // 0x151C5604: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151C5604: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_3:
    // 0x151C5608: jal         0x150ADA68
    // 0x151C560C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151C560C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_4:
    // 0x151C5610: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x151C5614: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C5618: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C561C: lwc1        $f8, -0x5538($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5538);
    // 0x151C5620: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151C5624: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x151C5628: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x151C562C: lh          $t3, 0x62($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X62);
    // 0x151C5630: lbu         $t4, 0x67($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X67);
    // 0x151C5634: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x151C5638: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x151C563C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C5640: addiu       $t9, $t8, 0x6
    ctx->r25 = ADD32(ctx->r24, 0X6);
    // 0x151C5644: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x151C5648: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151C564C: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x151C5650: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151C5654: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151C5658: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x151C565C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151C5660: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151C5664: addiu       $a3, $a3, -0x5564
    ctx->r7 = ADD32(ctx->r7, -0X5564);
    // 0x151C5668: addiu       $a2, $a2, -0x5570
    ctx->r6 = ADD32(ctx->r6, -0X5570);
    // 0x151C566C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151C5670: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x151C5674: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x151C5678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151C567C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151C5680: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x151C5684: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x151C5688: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x151C568C: jal         0x15102B38
    // 0x151C5690: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    func_15102B38(rdram, ctx);
        goto after_5;
    // 0x151C5690: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    after_5:
    // 0x151C5694: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151C5698: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151C569C: jr          $ra
    // 0x151C56A0: nop

    return;
    return;
    // 0x151C56A0: nop

;}
RECOMP_FUNC void func_150C0648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C0648: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x150C064C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150C0650: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C0654: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150C0658: sw          $a1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r5;
    // 0x150C065C: sw          $a2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r6;
    // 0x150C0660: sw          $a3, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r7;
    // 0x150C0664: jal         0x150ADA68
    // 0x150C0668: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150C0668: nop

    after_0:
    // 0x150C066C: lwc1        $f4, 0x170($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X170);
    // 0x150C0670: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x150C0674: addiu       $t6, $t6, 0x10C
    ctx->r14 = ADD32(ctx->r14, 0X10C);
    // 0x150C0678: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x150C067C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C0680: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x150C0684: lw          $a2, 0x120($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X120);
    // 0x150C0688: bc1f        L_150C097C
    if (!c1cs) {
        // 0x150C068C: lwc1        $f16, 0x128($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X128);
            goto L_150C097C;
    }
    // 0x150C068C: lwc1        $f16, 0x128($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X128);
    // 0x150C0690: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150C0694: addiu       $v0, $sp, 0xA0
    ctx->r2 = ADD32(ctx->r29, 0XA0);
    // 0x150C0698: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x150C069C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x150C06A0: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x150C06A4: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x150C06A8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150C06AC: lhu         $t9, 0x66($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X66);
    // 0x150C06B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C06B4: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x150C06B8: sw          $t0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r8;
    // 0x150C06BC: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x150C06C0: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150C06C4: sw          $t9, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r25;
    // 0x150C06C8: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150C06CC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150C06D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C06D4: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x150C06D8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150C06DC: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x150C06E0: lwc1        $f16, 0x40($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X40);
    // 0x150C06E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C06E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C06EC: lwc1        $f6, 0x194($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X194);
    // 0x150C06F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C06F4: lwc1        $f8, 0x198($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X198);
    // 0x150C06F8: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x150C06FC: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    // 0x150C0700: sh          $t1, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = ctx->r9;
    // 0x150C0704: sh          $t2, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r10;
    // 0x150C0708: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C070C: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x150C0710: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x150C0714: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    // 0x150C0718: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
    // 0x150C071C: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C0720: lwc1        $f16, 0x19C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X19C);
    // 0x150C0724: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C0728: lwc1        $f6, 0x1A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1A0);
    // 0x150C072C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150C0730: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C0734: lwc1        $f10, 0x1A4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1A4);
    // 0x150C0738: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C073C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C0740: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150C0744: addiu       $t3, $s0, 0x110
    ctx->r11 = ADD32(ctx->r16, 0X110);
    // 0x150C0748: swc1        $f18, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f18.u32l;
    // 0x150C074C: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C0750: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C0754: addiu       $t4, $sp, 0xA4
    ctx->r12 = ADD32(ctx->r29, 0XA4);
    // 0x150C0758: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150C075C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150C0760: sw          $t3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r11;
    // 0x150C0764: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x150C0768: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x150C076C: sw          $t4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r12;
    // 0x150C0770: sw          $v0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r2;
    // 0x150C0774: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x150C0778: sw          $t5, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r13;
    // 0x150C077C: swc1        $f0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f0.u32l;
    // 0x150C0780: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x150C0784: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x150C0788: swc1        $f18, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f18.u32l;
    // 0x150C078C: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x150C0790: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x150C0794: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150C0798: andi        $t6, $t7, 0x800
    ctx->r14 = ctx->r15 & 0X800;
    // 0x150C079C: beq         $t6, $zero, L_150C07AC
    if (ctx->r14 == 0) {
        // 0x150C07A0: addiu       $t0, $zero, -0x2A
        ctx->r8 = ADD32(0, -0X2A);
            goto L_150C07AC;
    }
    // 0x150C07A0: addiu       $t0, $zero, -0x2A
    ctx->r8 = ADD32(0, -0X2A);
    // 0x150C07A4: b           L_150C07B0
    // 0x150C07A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150C07B0;
    // 0x150C07A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150C07AC:
    // 0x150C07AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C07B0:
    // 0x150C07B0: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x150C07B4: sb          $v0, 0x108($sp)
    MEM_B(0X108, ctx->r29) = ctx->r2;
    // 0x150C07B8: sb          $t8, 0x109($sp)
    MEM_B(0X109, ctx->r29) = ctx->r24;
    // 0x150C07BC: sw          $zero, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = 0;
    // 0x150C07C0: sw          $zero, 0x110($sp)
    MEM_W(0X110, ctx->r29) = 0;
    // 0x150C07C4: sh          $zero, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = 0;
    // 0x150C07C8: sh          $t9, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r25;
    // 0x150C07CC: sh          $t0, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r8;
    // 0x150C07D0: sh          $t1, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r9;
    // 0x150C07D4: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x150C07D8: lbu         $a2, 0xC($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XC);
    // 0x150C07DC: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x150C07E0: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x150C07E4: jal         0x15150400
    // 0x150C07E8: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    func_15150400(rdram, ctx);
        goto after_1;
    // 0x150C07E8: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    after_1:
    // 0x150C07EC: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150C07F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C07F4: lwc1        $f4, 0x1A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1A8);
    // 0x150C07F8: lui         $at, 0x4332
    ctx->r1 = S32(0X4332 << 16);
    // 0x150C07FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C0800: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x150C0804: lui         $at, 0x42B6
    ctx->r1 = S32(0X42B6 << 16);
    // 0x150C0808: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C080C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150C0810: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150C0814: addiu       $t4, $zero, 0x6C
    ctx->r12 = ADD32(0, 0X6C);
    // 0x150C0818: addiu       $t5, $zero, 0x5103
    ctx->r13 = ADD32(0, 0X5103);
    // 0x150C081C: ori         $t7, $t7, 0x5
    ctx->r15 = ctx->r15 | 0X5;
    // 0x150C0820: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x150C0824: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x150C0828: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150C082C: addiu       $t0, $zero, 0x4E
    ctx->r8 = ADD32(0, 0X4E);
    // 0x150C0830: addiu       $t1, $zero, 0x54
    ctx->r9 = ADD32(0, 0X54);
    // 0x150C0834: sh          $t2, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r10;
    // 0x150C0838: sh          $t3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r11;
    // 0x150C083C: sb          $t4, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r12;
    // 0x150C0840: sh          $t5, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r13;
    // 0x150C0844: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x150C0848: sh          $t6, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r14;
    // 0x150C084C: sh          $t8, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r24;
    // 0x150C0850: sb          $t9, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r25;
    // 0x150C0854: sb          $t0, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r8;
    // 0x150C0858: sb          $t1, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r9;
    // 0x150C085C: addiu       $t2, $zero, 0x7B
    ctx->r10 = ADD32(0, 0X7B);
    // 0x150C0860: addiu       $t3, $zero, 0xA4
    ctx->r11 = ADD32(0, 0XA4);
    // 0x150C0864: addiu       $t4, $zero, 0xA1
    ctx->r12 = ADD32(0, 0XA1);
    // 0x150C0868: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x150C086C: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x150C0870: addiu       $t6, $zero, 0x37
    ctx->r14 = ADD32(0, 0X37);
    // 0x150C0874: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150C0878: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x150C087C: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x150C0880: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x150C0884: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x150C0888: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x150C088C: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x150C0890: sb          $t2, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r10;
    // 0x150C0894: sb          $t3, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r11;
    // 0x150C0898: sb          $t4, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r12;
    // 0x150C089C: sb          $t5, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r13;
    // 0x150C08A0: sb          $t7, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r15;
    // 0x150C08A4: sb          $t6, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r14;
    // 0x150C08A8: sb          $t8, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r24;
    // 0x150C08AC: sh          $t9, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r25;
    // 0x150C08B0: sh          $t0, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r8;
    // 0x150C08B4: sh          $t1, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r9;
    // 0x150C08B8: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x150C08BC: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x150C08C0: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x150C08C4: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150C08C8: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x150C08CC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150C08D0: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x150C08D4: lwc1        $f16, 0x40($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X40);
    // 0x150C08D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C08DC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150C08E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C08E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C08E8: lwc1        $f6, 0x1AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1AC);
    // 0x150C08EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C08F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150C08F4: lwc1        $f10, 0x1B0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1B0);
    // 0x150C08F8: lui         $t5, 0x4004
    ctx->r13 = S32(0X4004 << 16);
    // 0x150C08FC: addiu       $t2, $zero, -0x12
    ctx->r10 = ADD32(0, -0X12);
    // 0x150C0900: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150C0904: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x150C0908: ori         $t5, $t5, 0xE07
    ctx->r13 = ctx->r13 | 0XE07;
    // 0x150C090C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x150C0910: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150C0914: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x150C0918: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x150C091C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150C0920: sh          $zero, 0x78($sp)
    MEM_H(0X78, ctx->r29) = 0;
    // 0x150C0924: sh          $t2, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r10;
    // 0x150C0928: sh          $t3, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r11;
    // 0x150C092C: sh          $t4, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r12;
    // 0x150C0930: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
    // 0x150C0934: sb          $t7, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r15;
    // 0x150C0938: sb          $t6, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r14;
    // 0x150C093C: sb          $t8, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r24;
    // 0x150C0940: sb          $t9, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r25;
    // 0x150C0944: sb          $t0, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r8;
    // 0x150C0948: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x150C094C: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x150C0950: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x150C0954: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x150C0958: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x150C095C: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x150C0960: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x150C0964: lbu         $a2, 0xC($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XC);
    // 0x150C0968: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x150C096C: jal         0x15153634
    // 0x150C0970: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_15153634(rdram, ctx);
        goto after_2;
    // 0x150C0970: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_2:
    // 0x150C0974: b           L_150C0990
    // 0x150C0978: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150C0990;
    // 0x150C0978: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C097C:
    // 0x150C097C: lw          $t1, 0x12C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X12C);
    // 0x150C0980: lw          $a3, 0x124($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X124);
    // 0x150C0984: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x150C0988: jal         0x15133B98
    // 0x150C098C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_15133B98(rdram, ctx);
        goto after_3;
    // 0x150C098C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_3:
L_150C0990:
    // 0x150C0990: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150C0994: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150C0998: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    // 0x150C099C: jr          $ra
    // 0x150C09A0: nop

    return;
    return;
    // 0x150C09A0: nop

;}
RECOMP_FUNC void func_151D22B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D22B0: addiu       $sp, $sp, -0x198
    ctx->r29 = ADD32(ctx->r29, -0X198);
    // 0x151D22B4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x151D22B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D22BC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151D22C0: sw          $a1, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r5;
    // 0x151D22C4: sw          $a2, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r6;
    // 0x151D22C8: beq         $s0, $zero, L_151D26A8
    if (ctx->r16 == 0) {
        // 0x151D22CC: addiu       $a0, $zero, 0xAA
        ctx->r4 = ADD32(0, 0XAA);
            goto L_151D26A8;
    }
    // 0x151D22CC: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    // 0x151D22D0: addiu       $t6, $zero, 0xBB8
    ctx->r14 = ADD32(0, 0XBB8);
    // 0x151D22D4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151D22D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151D22DC: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    // 0x151D22E0: jal         0x10010154
    // 0x151D22E4: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    func_10010154(rdram, ctx);
        goto after_0;
    // 0x151D22E4: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    after_0:
    // 0x151D22E8: jal         0x10010A3C
    // 0x151D22EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_10010A3C(rdram, ctx);
        goto after_1;
    // 0x151D22EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x151D22F0: lwc1        $f4, 0x14C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x151D22F4: lwc1        $f6, 0x150($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X150);
    // 0x151D22F8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151D22FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151D2300: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151D2304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D2308: addiu       $a1, $sp, 0x18C
    ctx->r5 = ADD32(ctx->r29, 0X18C);
    // 0x151D230C: addiu       $a2, $sp, 0x188
    ctx->r6 = ADD32(ctx->r29, 0X188);
    // 0x151D2310: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151D2314: addiu       $a3, $sp, 0x184
    ctx->r7 = ADD32(ctx->r29, 0X184);
    // 0x151D2318: jal         0x1515C244
    // 0x151D231C: swc1        $f16, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f16.u32l;
    func_1515C244(rdram, ctx);
        goto after_2;
    // 0x151D231C: swc1        $f16, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x151D2320: addiu       $a0, $sp, 0x15C
    ctx->r4 = ADD32(ctx->r29, 0X15C);
    // 0x151D2324: jal         0x1504715C
    // 0x151D2328: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1504715C(rdram, ctx);
        goto after_3;
    // 0x151D2328: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x151D232C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x151D2330: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151D2334: lwc1        $f2, 0x180($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X180);
    // 0x151D2338: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x151D233C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x151D2340: sw          $t7, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r15;
    // 0x151D2344: sw          $t8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r24;
    // 0x151D2348: addiu       $t0, $sp, 0x18C
    ctx->r8 = ADD32(ctx->r29, 0X18C);
    // 0x151D234C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x151D2350: addiu       $t9, $sp, 0x120
    ctx->r25 = ADD32(ctx->r29, 0X120);
    // 0x151D2354: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151D2358: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151D235C: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x151D2360: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151D2364: addiu       $t5, $zero, -0x3C
    ctx->r13 = ADD32(0, -0X3C);
    // 0x151D2368: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x151D236C: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x151D2370: addiu       $t6, $zero, 0x34
    ctx->r14 = ADD32(0, 0X34);
    // 0x151D2374: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x151D2378: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151D237C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x151D2380: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151D2384: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D2388: lwc1        $f4, -0x4EE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4EE8);
    // 0x151D238C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D2390: lwc1        $f6, -0x4EE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4EE4);
    // 0x151D2394: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151D2398: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151D239C: swc1        $f18, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f18.u32l;
    // 0x151D23A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D23A4: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151D23A8: swc1        $f4, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f4.u32l;
    // 0x151D23AC: lwc1        $f4, -0x4EE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4EE0);
    // 0x151D23B0: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151D23B4: sh          $t4, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r12;
    // 0x151D23B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151D23BC: swc1        $f6, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f6.u32l;
    // 0x151D23C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151D23C4: lw          $t4, 0x1A0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1A0);
    // 0x151D23C8: lbu         $t3, 0x19F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X19F);
    // 0x151D23CC: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x151D23D0: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x151D23D4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x151D23D8: addiu       $t0, $sp, 0x15C
    ctx->r8 = ADD32(ctx->r29, 0X15C);
    // 0x151D23DC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x151D23E0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x151D23E4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151D23E8: sh          $zero, 0x12C($sp)
    MEM_H(0X12C, ctx->r29) = 0;
    // 0x151D23EC: sh          $t5, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r13;
    // 0x151D23F0: sh          $t6, 0x132($sp)
    MEM_H(0X132, ctx->r29) = ctx->r14;
    // 0x151D23F4: swc1        $f0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f0.u32l;
    // 0x151D23F8: sh          $t7, 0x144($sp)
    MEM_H(0X144, ctx->r29) = ctx->r15;
    // 0x151D23FC: sh          $t8, 0x146($sp)
    MEM_H(0X146, ctx->r29) = ctx->r24;
    // 0x151D2400: swc1        $f10, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f10.u32l;
    // 0x151D2404: swc1        $f18, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f18.u32l;
    // 0x151D2408: sb          $t2, 0x158($sp)
    MEM_B(0X158, ctx->r29) = ctx->r10;
    // 0x151D240C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151D2410: addiu       $a2, $a2, -0x4F20
    ctx->r6 = ADD32(ctx->r6, -0X4F20);
    // 0x151D2414: addiu       $a1, $a1, -0x4F50
    ctx->r5 = ADD32(ctx->r5, -0X4F50);
    // 0x151D2418: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x151D241C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x151D2420: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x151D2424: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151D2428: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x151D242C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151D2430: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151D2434: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151D2438: addiu       $a0, $sp, 0x118
    ctx->r4 = ADD32(ctx->r29, 0X118);
    // 0x151D243C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x151D2440: swc1        $f4, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f4.u32l;
    // 0x151D2444: swc1        $f6, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f6.u32l;
    // 0x151D2448: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x151D244C: jal         0x1515080C
    // 0x151D2450: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    func_1515080C(rdram, ctx);
        goto after_4;
    // 0x151D2450: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    after_4:
    // 0x151D2454: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x151D2458: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x151D245C: sw          $t5, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r13;
    // 0x151D2460: sw          $t6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r14;
    // 0x151D2464: addiu       $t8, $sp, 0x18C
    ctx->r24 = ADD32(ctx->r29, 0X18C);
    // 0x151D2468: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151D246C: addiu       $t7, $sp, 0xE4
    ctx->r15 = ADD32(ctx->r29, 0XE4);
    // 0x151D2470: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151D2474: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151D2478: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x151D247C: addiu       $t3, $zero, -0x1D
    ctx->r11 = ADD32(0, -0X1D);
    // 0x151D2480: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x151D2484: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x151D2488: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x151D248C: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x151D2490: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x151D2494: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x151D2498: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x151D249C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151D24A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151D24A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151D24A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D24AC: lwc1        $f16, -0x4EDC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4EDC);
    // 0x151D24B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D24B4: lwc1        $f18, -0x4ED8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4ED8);
    // 0x151D24B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D24BC: lwc1        $f4, -0x4ED4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4ED4);
    // 0x151D24C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D24C4: lwc1        $f6, -0x4ED0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4ED0);
    // 0x151D24C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D24CC: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    // 0x151D24D0: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    // 0x151D24D4: lwc1        $f8, -0x4ECC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4ECC);
    // 0x151D24D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x151D24DC: lw          $t2, 0x1A0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1A0);
    // 0x151D24E0: lbu         $t1, 0x19F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X19F);
    // 0x151D24E4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x151D24E8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x151D24EC: sh          $zero, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = 0;
    // 0x151D24F0: sh          $t0, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r8;
    // 0x151D24F4: sh          $t3, 0xF4($sp)
    MEM_H(0XF4, ctx->r29) = ctx->r11;
    // 0x151D24F8: sh          $t4, 0xF6($sp)
    MEM_H(0XF6, ctx->r29) = ctx->r12;
    // 0x151D24FC: sh          $t5, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r13;
    // 0x151D2500: sh          $t6, 0x10A($sp)
    MEM_H(0X10A, ctx->r29) = ctx->r14;
    // 0x151D2504: addiu       $a2, $a2, -0x4EEC
    ctx->r6 = ADD32(ctx->r6, -0X4EEC);
    // 0x151D2508: addiu       $a1, $a1, -0x4EF0
    ctx->r5 = ADD32(ctx->r5, -0X4EF0);
    // 0x151D250C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151D2510: addiu       $a0, $sp, 0xDC
    ctx->r4 = ADD32(ctx->r29, 0XDC);
    // 0x151D2514: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151D2518: swc1        $f16, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f16.u32l;
    // 0x151D251C: swc1        $f18, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f18.u32l;
    // 0x151D2520: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    // 0x151D2524: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    // 0x151D2528: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    // 0x151D252C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x151D2530: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x151D2534: jal         0x15152190
    // 0x151D2538: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_15152190(rdram, ctx);
        goto after_5;
    // 0x151D2538: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_5:
    // 0x151D253C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x151D2540: addiu       $t7, $sp, 0x18C
    ctx->r15 = ADD32(ctx->r29, 0X18C);
    // 0x151D2544: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151D2548: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x151D254C: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x151D2550: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x151D2554: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x151D2558: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151D255C: addiu       $t6, $zero, -0x32
    ctx->r14 = ADD32(0, -0X32);
    // 0x151D2560: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x151D2564: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151D2568: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x151D256C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x151D2570: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x151D2574: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151D2578: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151D257C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151D2580: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151D2584: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D2588: lwc1        $f4, -0x4EC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4EC8);
    // 0x151D258C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D2590: lwc1        $f6, -0x4EC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4EC4);
    // 0x151D2594: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x151D2598: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151D259C: sh          $t3, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r11;
    // 0x151D25A0: sh          $t4, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r12;
    // 0x151D25A4: sh          $t5, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r13;
    // 0x151D25A8: sh          $t6, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r14;
    // 0x151D25AC: sh          $t1, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r9;
    // 0x151D25B0: addiu       $t8, $zero, 0x23
    ctx->r24 = ADD32(0, 0X23);
    // 0x151D25B4: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151D25B8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x151D25BC: sh          $t9, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r25;
    // 0x151D25C0: sh          $t8, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r24;
    // 0x151D25C4: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x151D25C8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151D25CC: addiu       $t3, $zero, 0x48
    ctx->r11 = ADD32(0, 0X48);
    // 0x151D25D0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151D25D4: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x151D25D8: addiu       $t6, $zero, 0x37
    ctx->r14 = ADD32(0, 0X37);
    // 0x151D25DC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151D25E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151D25E4: sh          $t2, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r10;
    // 0x151D25E8: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x151D25EC: sb          $t0, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = ctx->r8;
    // 0x151D25F0: sb          $t3, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = ctx->r11;
    // 0x151D25F4: sw          $t4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r12;
    // 0x151D25F8: sb          $t5, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r13;
    // 0x151D25FC: sb          $t6, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r14;
    // 0x151D2600: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    // 0x151D2604: lui         $t9, 0x22
    ctx->r25 = S32(0X22 << 16);
    // 0x151D2608: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x151D260C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151D2610: ori         $t9, $t9, 0x5
    ctx->r25 = ctx->r25 | 0X5;
    // 0x151D2614: ori         $t8, $t8, 0x600
    ctx->r24 = ctx->r24 | 0X600;
    // 0x151D2618: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x151D261C: addiu       $t0, $zero, 0x3B
    ctx->r8 = ADD32(0, 0X3B);
    // 0x151D2620: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x151D2624: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x151D2628: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x151D262C: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x151D2630: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x151D2634: sh          $zero, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = 0;
    // 0x151D2638: sb          $zero, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = 0;
    // 0x151D263C: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x151D2640: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x151D2644: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x151D2648: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x151D264C: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x151D2650: sb          $zero, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = 0;
    // 0x151D2654: sw          $t2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r10;
    // 0x151D2658: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x151D265C: sw          $t9, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r25;
    // 0x151D2660: sw          $t8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r24;
    // 0x151D2664: sw          $t7, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r15;
    // 0x151D2668: sw          $t0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r8;
    // 0x151D266C: sw          $t3, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r11;
    // 0x151D2670: sw          $t4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r12;
    // 0x151D2674: sb          $zero, 0xD0($sp)
    MEM_B(0XD0, ctx->r29) = 0;
    // 0x151D2678: sb          $t5, 0xD1($sp)
    MEM_B(0XD1, ctx->r29) = ctx->r13;
    // 0x151D267C: sh          $t6, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = ctx->r14;
    // 0x151D2680: sh          $t1, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r9;
    // 0x151D2684: lw          $a2, 0x1A0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1A0);
    // 0x151D2688: lbu         $a1, 0x19F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X19F);
    // 0x151D268C: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x151D2690: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x151D2694: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x151D2698: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x151D269C: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x151D26A0: jal         0x15151A38
    // 0x151D26A4: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    func_15151A38(rdram, ctx);
        goto after_6;
    // 0x151D26A4: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    after_6:
L_151D26A8:
    // 0x151D26A8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x151D26AC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x151D26B0: addiu       $sp, $sp, 0x198
    ctx->r29 = ADD32(ctx->r29, 0X198);
    // 0x151D26B4: jr          $ra
    // 0x151D26B8: nop

    return;
    return;
    // 0x151D26B8: nop

;}
RECOMP_FUNC void func_1000F248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000F248: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1000F24C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1000F250: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1000F254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1000F258: jal         0x1000F1A8
    // 0x1000F25C: nop

    func_1000F1A8(rdram, ctx);
        goto after_0;
    // 0x1000F25C: nop

    after_0:
    // 0x1000F260: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1000F264: bne         $s0, $at, L_1000F288
    if (ctx->r16 != ctx->r1) {
        // 0x1000F268: addiu       $a0, $zero, 0x6E2
        ctx->r4 = ADD32(0, 0X6E2);
            goto L_1000F288;
    }
    // 0x1000F268: addiu       $a0, $zero, 0x6E2
    ctx->r4 = ADD32(0, 0X6E2);
    // 0x1000F26C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F270: sw          $zero, 0x1F54($at)
    MEM_W(0X1F54, ctx->r1) = 0;
    // 0x1000F274: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1000F278: lwc1        $f4, -0x3C08($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3C08);
    // 0x1000F27C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F280: b           L_1000F2A4
    // 0x1000F284: swc1        $f4, 0x1F58($at)
    MEM_W(0X1F58, ctx->r1) = ctx->f4.u32l;
        goto L_1000F2A4;
    // 0x1000F284: swc1        $f4, 0x1F58($at)
    MEM_W(0X1F58, ctx->r1) = ctx->f4.u32l;
L_1000F288:
    // 0x1000F288: addiu       $t6, $zero, 0x59D8
    ctx->r14 = ADD32(0, 0X59D8);
    // 0x1000F28C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F290: sw          $t6, 0x1F54($at)
    MEM_W(0X1F54, ctx->r1) = ctx->r14;
    // 0x1000F294: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1000F298: lwc1        $f6, -0x3C04($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3C04);
    // 0x1000F29C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F2A0: swc1        $f6, 0x1F58($at)
    MEM_W(0X1F58, ctx->r1) = ctx->f6.u32l;
L_1000F2A4:
    // 0x1000F2A4: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x1000F2A8: bne         $s0, $at, L_1000F2BC
    if (ctx->r16 != ctx->r1) {
        // 0x1000F2AC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_1000F2BC;
    }
    // 0x1000F2AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1000F2B0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F2B4: b           L_1000F32C
    // 0x1000F2B8: sb          $zero, 0x1FD9($at)
    MEM_B(0X1FD9, ctx->r1) = 0;
        goto L_1000F32C;
    // 0x1000F2B8: sb          $zero, 0x1FD9($at)
    MEM_B(0X1FD9, ctx->r1) = 0;
L_1000F2BC:
    // 0x1000F2BC: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x1000F2C0: bne         $s0, $at, L_1000F2D4
    if (ctx->r16 != ctx->r1) {
        // 0x1000F2C4: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_1000F2D4;
    }
    // 0x1000F2C4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x1000F2C8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F2CC: b           L_1000F32C
    // 0x1000F2D0: sb          $zero, 0x1FD9($at)
    MEM_B(0X1FD9, ctx->r1) = 0;
        goto L_1000F32C;
    // 0x1000F2D0: sb          $zero, 0x1FD9($at)
    MEM_B(0X1FD9, ctx->r1) = 0;
L_1000F2D4:
    // 0x1000F2D4: bne         $s0, $v0, L_1000F2F0
    if (ctx->r16 != ctx->r2) {
        // 0x1000F2D8: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_1000F2F0;
    }
    // 0x1000F2D8: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x1000F2DC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F2E0: sb          $zero, 0x1FD9($at)
    MEM_B(0X1FD9, ctx->r1) = 0;
    // 0x1000F2E4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F2E8: b           L_1000F32C
    // 0x1000F2EC: sb          $v0, 0x1FD8($at)
    MEM_B(0X1FD8, ctx->r1) = ctx->r2;
        goto L_1000F32C;
    // 0x1000F2EC: sb          $v0, 0x1FD8($at)
    MEM_B(0X1FD8, ctx->r1) = ctx->r2;
L_1000F2F0:
    // 0x1000F2F0: bne         $s0, $at, L_1000F30C
    if (ctx->r16 != ctx->r1) {
        // 0x1000F2F4: addiu       $t7, $zero, 0x28
        ctx->r15 = ADD32(0, 0X28);
            goto L_1000F30C;
    }
    // 0x1000F2F4: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x1000F2F8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F2FC: sb          $zero, 0x1FD9($at)
    MEM_B(0X1FD9, ctx->r1) = 0;
    // 0x1000F300: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F304: b           L_1000F32C
    // 0x1000F308: sb          $t7, 0x1FD8($at)
    MEM_B(0X1FD8, ctx->r1) = ctx->r15;
        goto L_1000F32C;
    // 0x1000F308: sb          $t7, 0x1FD8($at)
    MEM_B(0X1FD8, ctx->r1) = ctx->r15;
L_1000F30C:
    // 0x1000F30C: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x1000F310: beq         $s0, $at, L_1000F31C
    if (ctx->r16 == ctx->r1) {
        // 0x1000F314: addiu       $at, $zero, 0x40
        ctx->r1 = ADD32(0, 0X40);
            goto L_1000F31C;
    }
    // 0x1000F314: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x1000F318: bne         $s0, $at, L_1000F32C
    if (ctx->r16 != ctx->r1) {
        // 0x1000F31C: lui         $at, 0x8004
        ctx->r1 = S32(0X8004 << 16);
            goto L_1000F32C;
    }
L_1000F31C:
    // 0x1000F31C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F320: sb          $zero, 0x1FD9($at)
    MEM_B(0X1FD9, ctx->r1) = 0;
    // 0x1000F324: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F328: sb          $v0, 0x1FD8($at)
    MEM_B(0X1FD8, ctx->r1) = ctx->r2;
L_1000F32C:
    // 0x1000F32C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1000F330: jal         0x10003C40
    // 0x1000F334: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x1000F334: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x1000F338: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000F33C: addiu       $v1, $v1, 0x1F5C
    ctx->r3 = ADD32(ctx->r3, 0X1F5C);
    // 0x1000F340: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x1000F344: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1000F348: jal         0x100226F0
    // 0x1000F34C: addiu       $a1, $zero, 0x6E2
    ctx->r5 = ADD32(0, 0X6E2);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x1000F34C: addiu       $a1, $zero, 0x6E2
    ctx->r5 = ADD32(0, 0X6E2);
    after_2:
    // 0x1000F350: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x1000F354: bne         $s0, $at, L_1000F36C
    if (ctx->r16 != ctx->r1) {
        // 0x1000F358: addiu       $t9, $zero, 0x59D8
        ctx->r25 = ADD32(0, 0X59D8);
            goto L_1000F36C;
    }
    // 0x1000F358: addiu       $t9, $zero, 0x59D8
    ctx->r25 = ADD32(0, 0X59D8);
    // 0x1000F35C: addiu       $t8, $zero, 0x36B0
    ctx->r24 = ADD32(0, 0X36B0);
    // 0x1000F360: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F364: b           L_1000F374
    // 0x1000F368: sw          $t8, 0x1FDC($at)
    MEM_W(0X1FDC, ctx->r1) = ctx->r24;
        goto L_1000F374;
    // 0x1000F368: sw          $t8, 0x1FDC($at)
    MEM_W(0X1FDC, ctx->r1) = ctx->r24;
L_1000F36C:
    // 0x1000F36C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F370: sw          $t9, 0x1FDC($at)
    MEM_W(0X1FDC, ctx->r1) = ctx->r25;
L_1000F374:
    // 0x1000F374: jal         0x10011E88
    // 0x1000F378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_10011E88(rdram, ctx);
        goto after_3;
    // 0x1000F378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x1000F37C: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000F380: addiu       $v0, $v0, 0x1F61
    ctx->r2 = ADD32(ctx->r2, 0X1F61);
    // 0x1000F384: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x1000F388: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F38C: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x1000F390: sb          $zero, 0x1F60($at)
    MEM_B(0X1F60, ctx->r1) = 0;
    // 0x1000F394: lhu         $a1, 0x1F56($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X1F56);
    // 0x1000F398: jal         0x10017780
    // 0x1000F39C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_10017780(rdram, ctx);
        goto after_4;
    // 0x1000F39C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x1000F3A0: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x1000F3A4: lhu         $a1, 0x1F56($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X1F56);
    // 0x1000F3A8: jal         0x10017780
    // 0x1000F3AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_10017780(rdram, ctx);
        goto after_5;
    // 0x1000F3AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x1000F3B0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1000F3B4: jal         0x10017780
    // 0x1000F3B8: addiu       $a1, $zero, 0x59D8
    ctx->r5 = ADD32(0, 0X59D8);
    func_10017780(rdram, ctx);
        goto after_6;
    // 0x1000F3B8: addiu       $a1, $zero, 0x59D8
    ctx->r5 = ADD32(0, 0X59D8);
    after_6:
    // 0x1000F3BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1000F3C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1000F3C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1000F3C8: jr          $ra
    // 0x1000F3CC: nop

    return;
    return;
    // 0x1000F3CC: nop

;}
RECOMP_FUNC void func_1514DB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DB18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DB1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DB20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1514DB24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1514DB28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1514DB2C: jal         0x15158BD0
    // 0x1514DB30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15158BD0(rdram, ctx);
        goto after_0;
    // 0x1514DB30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x1514DB34: beq         $v0, $zero, L_1514DB48
    if (ctx->r2 == 0) {
        // 0x1514DB38: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1514DB48;
    }
    // 0x1514DB38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514DB3C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x1514DB40: jal         0x1514EC1C
    // 0x1514DB44: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_1514EC1C(rdram, ctx);
        goto after_1;
    // 0x1514DB44: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_1:
L_1514DB48:
    // 0x1514DB48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DB4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DB50: jr          $ra
    // 0x1514DB54: nop

    return;
    return;
    // 0x1514DB54: nop

;}
RECOMP_FUNC void func_150D5A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D5A4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D5A50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D5A54: jal         0x15149368
    // 0x150D5A58: nop

    func_15149368(rdram, ctx);
        goto after_0;
    // 0x150D5A58: nop

    after_0:
    // 0x150D5A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D5A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D5A64: jr          $ra
    // 0x150D5A68: nop

    return;
    return;
    // 0x150D5A68: nop

;}
RECOMP_FUNC void func_1510B128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510B128: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1510B12C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x1510B130: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x1510B134: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1510B138: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x1510B13C: addiu       $v1, $v1, 0x3648
    ctx->r3 = ADD32(ctx->r3, 0X3648);
    // 0x1510B140: addiu       $s1, $s1, -0x19D8
    ctx->r17 = ADD32(ctx->r17, -0X19D8);
    // 0x1510B144: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1510B148: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x1510B14C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1510B150: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1510B154: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x1510B158: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x1510B15C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1510B160: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1510B164: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1510B168: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x1510B16C: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x1510B170: sll         $s0, $t6, 7
    ctx->r16 = S32(ctx->r14 << 7);
    // 0x1510B174: addu        $v0, $t7, $s0
    ctx->r2 = ADD32(ctx->r15, ctx->r16);
    // 0x1510B178: lwc1        $f4, 0x6C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X6C);
    // 0x1510B17C: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x1510B180: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1510B184: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x1510B188: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x1510B18C: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1510B190: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1510B194: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x1510B198: lwc1        $f18, 0x70($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X70);
    // 0x1510B19C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1510B1A0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1510B1A4: swc1        $f10, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f10.u32l;
    // 0x1510B1A8: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1510B1AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510B1B0: lwc1        $f4, 0x2C24($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2C24);
    // 0x1510B1B4: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x1510B1B8: lwc1        $f18, 0x74($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X74);
    // 0x1510B1BC: mul.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1510B1C0: jal         0x15047C00
    // 0x1510B1C4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x1510B1C4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x1510B1C8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x1510B1CC: jal         0x15047D60
    // 0x1510B1D0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x1510B1D0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x1510B1D4: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x1510B1D8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1510B1DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510B1E0: addu        $v0, $t1, $s0
    ctx->r2 = ADD32(ctx->r9, ctx->r16);
    // 0x1510B1E4: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1510B1E8: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1510B1EC: lwc1        $f18, 0x7C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X7C);
    // 0x1510B1F0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1510B1F4: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1510B1F8: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1510B1FC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1510B200: nop

    // 0x1510B204: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1510B208: nop

    // 0x1510B20C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1510B210: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x1510B214: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x1510B218: lwc1        $f6, 0x2C28($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2C28);
    // 0x1510B21C: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x1510B220: lwc1        $f18, 0x78($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X78);
    // 0x1510B224: mul.s       $f20, $f18, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1510B228: jal         0x15047C00
    // 0x1510B22C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x1510B22C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x1510B230: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x1510B234: jal         0x15047D60
    // 0x1510B238: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x1510B238: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x1510B23C: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x1510B240: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1510B244: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1510B248: addu        $v0, $t4, $s0
    ctx->r2 = ADD32(ctx->r12, ctx->r16);
    // 0x1510B24C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1510B250: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1510B254: lwc1        $f18, 0x80($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X80);
    // 0x1510B258: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1510B25C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1510B260: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1510B264: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1510B268: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1510B26C: nop

    // 0x1510B270: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x1510B274: nop

    // 0x1510B278: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1510B27C: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x1510B280: lwc1        $f12, 0x364C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X364C);
    // 0x1510B284: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1510B288: c.eq.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl == ctx->f12.fl;
    // 0x1510B28C: nop

    // 0x1510B290: bc1tl       L_1510B2A4
    if (c1cs) {
        // 0x1510B294: c.eq.s      $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
            goto L_1510B2A4;
    }
    goto skip_0;
    // 0x1510B294: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    skip_0:
    // 0x1510B298: b           L_1510B2BC
    // 0x1510B29C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
        goto L_1510B2BC;
    // 0x1510B29C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x1510B2A0: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
L_1510B2A4:
    // 0x1510B2A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510B2A8: bc1t        L_1510B2B8
    if (c1cs) {
        // 0x1510B2AC: nop
    
            goto L_1510B2B8;
    }
    // 0x1510B2AC: nop

    // 0x1510B2B0: b           L_1510B2BC
    // 0x1510B2B4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_1510B2BC;
    // 0x1510B2B4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_1510B2B8:
    // 0x1510B2B8: lwc1        $f14, -0x64E0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X64E0);
L_1510B2BC:
    // 0x1510B2BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1510B2C0: lwc1        $f0, 0x3650($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3650);
    // 0x1510B2C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510B2C8: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x1510B2CC: nop

    // 0x1510B2D0: bc1t        L_1510B2E0
    if (c1cs) {
        // 0x1510B2D4: nop
    
            goto L_1510B2E0;
    }
    // 0x1510B2D4: nop

    // 0x1510B2D8: b           L_1510B2E4
    // 0x1510B2DC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_1510B2E4;
    // 0x1510B2DC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_1510B2E0:
    // 0x1510B2E0: lwc1        $f2, -0x64E4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X64E4);
L_1510B2E4:
    // 0x1510B2E4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x1510B2E8: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1510B2EC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x1510B2F0: addu        $v0, $v1, $s0
    ctx->r2 = ADD32(ctx->r3, ctx->r16);
    // 0x1510B2F4: lw          $a2, 0x78($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X78);
    // 0x1510B2F8: lw          $a3, 0x74($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X74);
    // 0x1510B2FC: addu        $a1, $s0, $v1
    ctx->r5 = ADD32(ctx->r16, ctx->r3);
    // 0x1510B300: addiu       $a1, $a1, 0xB8
    ctx->r5 = ADD32(ctx->r5, 0XB8);
    // 0x1510B304: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x1510B308: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x1510B30C: jal         0x1510B5F8
    // 0x1510B310: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_1510B5F8(rdram, ctx);
        goto after_4;
    // 0x1510B310: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x1510B314: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1510B318: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1510B31C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x1510B320: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x1510B324: jr          $ra
    // 0x1510B328: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1510B328: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_150DFCA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DFCA8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150DFCAC: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x150DFCB0: lwc1        $f2, 0x64($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X64);
    // 0x150DFCB4: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x150DFCB8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x150DFCBC: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x150DFCC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150DFCC4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150DFCC8: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x150DFCCC: mul.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x150DFCD0: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x150DFCD4: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x150DFCD8: lwc1        $f12, 0x4($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4);
    // 0x150DFCDC: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x150DFCE0: nop

    // 0x150DFCE4: bc1fl       L_150DFD04
    if (!c1cs) {
        // 0x150DFCE8: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_150DFD04;
    }
    goto skip_0;
    // 0x150DFCE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_0:
    // 0x150DFCEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DFCF0: lwc1        $f0, 0xFA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XFA0);
    // 0x150DFCF4: lwc1        $f2, 0x64($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X64);
    // 0x150DFCF8: b           L_150DFD30
    // 0x150DFCFC: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
        goto L_150DFD30;
    // 0x150DFCFC: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x150DFD00: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_150DFD04:
    // 0x150DFD04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DFD08: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x150DFD0C: nop

    // 0x150DFD10: bc1fl       L_150DFD30
    if (!c1cs) {
        // 0x150DFD14: lwc1        $f0, 0x7C($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
            goto L_150DFD30;
    }
    goto skip_1;
    // 0x150DFD14: lwc1        $f0, 0x7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
    skip_1:
    // 0x150DFD18: lwc1        $f14, 0xFA4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0XFA4);
    // 0x150DFD1C: lwc1        $f2, 0x64($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X64);
    // 0x150DFD20: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x150DFD24: b           L_150DFD30
    // 0x150DFD28: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
        goto L_150DFD30;
    // 0x150DFD28: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x150DFD2C: lwc1        $f0, 0x7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
L_150DFD30:
    // 0x150DFD30: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150DFD34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DFD38: bc1fl       L_150DFD6C
    if (!c1cs) {
        // 0x150DFD3C: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_150DFD6C;
    }
    goto skip_2;
    // 0x150DFD3C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_2:
    // 0x150DFD40: lwc1        $f4, 0xFA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XFA8);
    // 0x150DFD44: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x150DFD48: swc1        $f6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f6.u32l;
    // 0x150DFD4C: lwc1        $f8, 0x64($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X64);
    // 0x150DFD50: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x150DFD54: nop

    // 0x150DFD58: bc1f        L_150DFD9C
    if (!c1cs) {
        // 0x150DFD5C: nop
    
            goto L_150DFD9C;
    }
    // 0x150DFD5C: nop

    // 0x150DFD60: jr          $ra
    // 0x150DFD64: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    return;
    return;
    // 0x150DFD64: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x150DFD68: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_150DFD6C:
    // 0x150DFD6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DFD70: bc1f        L_150DFD9C
    if (!c1cs) {
        // 0x150DFD74: nop
    
            goto L_150DFD9C;
    }
    // 0x150DFD74: nop

    // 0x150DFD78: lwc1        $f10, 0xFAC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XFAC);
    // 0x150DFD7C: sub.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x150DFD80: swc1        $f16, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f16.u32l;
    // 0x150DFD84: lwc1        $f18, 0x64($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X64);
    // 0x150DFD88: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x150DFD8C: nop

    // 0x150DFD90: bc1f        L_150DFD9C
    if (!c1cs) {
        // 0x150DFD94: nop
    
            goto L_150DFD9C;
    }
    // 0x150DFD94: nop

    // 0x150DFD98: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
L_150DFD9C:
    // 0x150DFD9C: jr          $ra
    // 0x150DFDA0: nop

    return;
    return;
    // 0x150DFDA0: nop

;}
RECOMP_FUNC void func_1518F45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518F45C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1518F460: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1518F464: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x1518F468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518F46C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1518F470: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x1518F474: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x1518F478: addiu       $t6, $t6, 0x74D4
    ctx->r14 = ADD32(ctx->r14, 0X74D4);
    // 0x1518F47C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x1518F480: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1518F484: jal         0x15169260
    // 0x1518F488: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    func_15169260(rdram, ctx);
        goto after_0;
    // 0x1518F488: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    after_0:
    // 0x1518F48C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1518F490: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1518F494: jr          $ra
    // 0x1518F498: nop

    return;
    return;
    // 0x1518F498: nop

;}
RECOMP_FUNC void func_151918BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151918BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151918C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151918C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151918C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151918CC: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x151918D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151918D4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x151918D8: bnel        $t6, $zero, L_151918EC
    if (ctx->r14 != 0) {
        // 0x151918DC: lbu         $t7, 0x2C($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X2C);
            goto L_151918EC;
    }
    goto skip_0;
    // 0x151918DC: lbu         $t7, 0x2C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2C);
    skip_0:
    // 0x151918E0: b           L_151918FC
    // 0x151918E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151918FC;
    // 0x151918E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151918E8: lbu         $t7, 0x2C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2C);
L_151918EC:
    // 0x151918EC: lbu         $t8, 0x3B($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X3B);
    // 0x151918F0: beq         $t7, $t8, L_151918FC
    if (ctx->r15 == ctx->r24) {
        // 0x151918F4: nop
    
            goto L_151918FC;
    }
    // 0x151918F4: nop

    // 0x151918F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151918FC:
    // 0x151918FC: bne         $v0, $zero, L_1519195C
    if (ctx->r2 != 0) {
        // 0x15191900: nop
    
            goto L_1519195C;
    }
    // 0x15191900: nop

    // 0x15191904: lw          $t9, 0x1D4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X1D4);
    // 0x15191908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1519190C: beq         $t9, $zero, L_1519195C
    if (ctx->r25 == 0) {
        // 0x15191910: nop
    
            goto L_1519195C;
    }
    // 0x15191910: nop

    // 0x15191914: lbu         $t0, 0xD($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XD);
    // 0x15191918: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    // 0x1519191C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15191920: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x15191924: beq         $t1, $zero, L_15191944
    if (ctx->r9 == 0) {
        // 0x15191928: addiu       $t5, $zero, 0x12C
        ctx->r13 = ADD32(0, 0X12C);
            goto L_15191944;
    }
    // 0x15191928: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x1519192C: lbu         $t3, 0x8($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X8);
    // 0x15191930: lh          $t2, 0xE($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XE);
    // 0x15191934: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x15191938: sb          $t4, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r12;
    // 0x1519193C: b           L_15191948
    // 0x15191940: sh          $t2, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r10;
        goto L_15191948;
    // 0x15191940: sh          $t2, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r10;
L_15191944:
    // 0x15191944: sh          $t5, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r13;
L_15191948:
    // 0x15191948: lbu         $a2, 0xC($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XC);
    // 0x1519194C: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x15191950: jal         0x15190770
    // 0x15191954: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_15190770(rdram, ctx);
        goto after_0;
    // 0x15191954: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_0:
    // 0x15191958: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
L_1519195C:
    // 0x1519195C: beql        $v0, $zero, L_15191970
    if (ctx->r2 == 0) {
        // 0x15191960: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15191970;
    }
    goto skip_1;
    // 0x15191960: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x15191964: jal         0x1516972C
    // 0x15191968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x15191968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x1519196C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15191970:
    // 0x15191970: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15191974: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15191978: jr          $ra
    // 0x1519197C: nop

    return;
    return;
    // 0x1519197C: nop

;}
RECOMP_FUNC void func_150195A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150195A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150195A4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x150195A8: sll         $s1, $a1, 16
    ctx->r17 = S32(ctx->r5 << 16);
    // 0x150195AC: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x150195B0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x150195B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150195B8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x150195BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150195C0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x150195C4: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x150195C8: addu        $t7, $t7, $s1
    ctx->r15 = ADD32(ctx->r15, ctx->r17);
    // 0x150195CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150195D0: subu        $t7, $t7, $s1
    ctx->r15 = SUB32(ctx->r15, ctx->r17);
    // 0x150195D4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x150195D8: lw          $t8, -0x4010($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4010);
    // 0x150195DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150195E0: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150195E4: lbu         $t0, -0x1540($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1540);
    // 0x150195E8: addu        $t7, $t7, $s1
    ctx->r15 = ADD32(ctx->r15, ctx->r17);
    // 0x150195EC: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x150195F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x150195F4: beq         $t0, $zero, L_15019604
    if (ctx->r8 == 0) {
        // 0x150195F8: sw          $t9, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r25;
            goto L_15019604;
    }
    // 0x150195F8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x150195FC: b           L_150198E8
    // 0x15019600: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_150198E8;
    // 0x15019600: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15019604:
    // 0x15019604: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x15019608: lh          $t1, 0x4480($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4480);
    // 0x1501960C: beq         $t1, $zero, L_1501961C
    if (ctx->r9 == 0) {
        // 0x15019610: nop
    
            goto L_1501961C;
    }
    // 0x15019610: nop

    // 0x15019614: b           L_150198E8
    // 0x15019618: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_150198E8;
    // 0x15019618: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1501961C:
    // 0x1501961C: jal         0x1517EFAC
    // 0x15019620: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_1517EFAC(rdram, ctx);
        goto after_0;
    // 0x15019620: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x15019624: bne         $v0, $zero, L_15019644
    if (ctx->r2 != 0) {
        // 0x15019628: lui         $t2, 0x800D
        ctx->r10 = S32(0X800D << 16);
            goto L_15019644;
    }
    // 0x15019628: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1501962C: lhu         $t2, 0x18A0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X18A0);
    // 0x15019630: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15019634: sllv        $t4, $t3, $s1
    ctx->r12 = S32(ctx->r11 << (ctx->r17 & 31));
    // 0x15019638: and         $t5, $t2, $t4
    ctx->r13 = ctx->r10 & ctx->r12;
    // 0x1501963C: beq         $t5, $zero, L_1501964C
    if (ctx->r13 == 0) {
        // 0x15019640: lui         $t6, 0x8008
        ctx->r14 = S32(0X8008 << 16);
            goto L_1501964C;
    }
    // 0x15019640: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
L_15019644:
    // 0x15019644: b           L_150198E8
    // 0x15019648: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_150198E8;
    // 0x15019648: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1501964C:
    // 0x1501964C: lw          $t6, 0x2FA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA0);
    // 0x15019650: blez        $t6, L_150196E4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15019654: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150196E4;
    }
    // 0x15019654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15019658: jal         0x1510B7B4
    // 0x1501965C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_1510B7B4(rdram, ctx);
        goto after_1;
    // 0x1501965C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x15019660: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15019664: jal         0x1515D6D0
    // 0x15019668: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_1515D6D0(rdram, ctx);
        goto after_2;
    // 0x15019668: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x1501966C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15019670: jal         0x1510B958
    // 0x15019674: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_1510B958(rdram, ctx);
        goto after_3;
    // 0x15019674: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x15019678: lui         $t7, 0xDC08
    ctx->r15 = S32(0XDC08 << 16);
    // 0x1501967C: ori         $t7, $t7, 0x8
    ctx->r15 = ctx->r15 | 0X8;
    // 0x15019680: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15019684: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15019688: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501968C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15019690: lbu         $t1, -0x1640($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1640);
    // 0x15019694: lw          $t8, -0x19D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X19D8);
    // 0x15019698: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x1501969C: subu        $t9, $t9, $s1
    ctx->r25 = SUB32(ctx->r25, ctx->r17);
    // 0x150196A0: sll         $t9, $t9, 7
    ctx->r25 = S32(ctx->r25 << 7);
    // 0x150196A4: sll         $t3, $t1, 4
    ctx->r11 = S32(ctx->r9 << 4);
    // 0x150196A8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x150196AC: addu        $t2, $t0, $t3
    ctx->r10 = ADD32(ctx->r8, ctx->r11);
    // 0x150196B0: addiu       $t4, $t2, 0x40
    ctx->r12 = ADD32(ctx->r10, 0X40);
    // 0x150196B4: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x150196B8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150196BC: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x150196C0: sra         $t5, $a1, 16
    ctx->r13 = S32(SIGNED(ctx->r5) >> 16);
    // 0x150196C4: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x150196C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150196CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150196D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150196D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150196D8: jal         0x1501A490
    // 0x150196DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1501A490(rdram, ctx);
        goto after_4;
    // 0x150196DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x150196E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_150196E4:
    // 0x150196E4: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x150196E8: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x150196EC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150196F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150196F4: jal         0x151135C4
    // 0x150196F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_151135C4(rdram, ctx);
        goto after_5;
    // 0x150196F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x150196FC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15019700: lbu         $t7, -0x1A8B($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1A8B);
    // 0x15019704: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15019708: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1501970C: bnel        $t7, $at, L_15019724
    if (ctx->r15 != ctx->r1) {
        // 0x15019710: sll         $a2, $s1, 16
        ctx->r6 = S32(ctx->r17 << 16);
            goto L_15019724;
    }
    goto skip_0;
    // 0x15019710: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    skip_0:
    // 0x15019714: jal         0x151D6778
    // 0x15019718: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_151D6778(rdram, ctx);
        goto after_6;
    // 0x15019718: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x1501971C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15019720: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
L_15019724:
    // 0x15019724: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x15019728: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x1501972C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15019730: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x15019734: jal         0x151674F8
    // 0x15019738: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151674F8(rdram, ctx);
        goto after_7;
    // 0x15019738: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x1501973C: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x15019740: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x15019744: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x15019748: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1501974C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x15019750: jal         0x151674F8
    // 0x15019754: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151674F8(rdram, ctx);
        goto after_8;
    // 0x15019754: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x15019758: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1501975C: jal         0x15186794
    // 0x15019760: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_15186794(rdram, ctx);
        goto after_9;
    // 0x15019760: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x15019764: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x15019768: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1501976C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x15019770: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15019774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15019778: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1501977C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15019780: jal         0x1501A490
    // 0x15019784: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1501A490(rdram, ctx);
        goto after_10;
    // 0x15019784: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_10:
    // 0x15019788: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x1501978C: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x15019790: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x15019794: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15019798: jal         0x1502BAD0
    // 0x1501979C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1502BAD0(rdram, ctx);
        goto after_11;
    // 0x1501979C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x150197A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150197A4: jal         0x15035FE8
    // 0x150197A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_15035FE8(rdram, ctx);
        goto after_12;
    // 0x150197A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x150197AC: lui         $t3, 0xDA38
    ctx->r11 = S32(0XDA38 << 16);
    // 0x150197B0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x150197B4: addiu       $t2, $t2, -0x6B90
    ctx->r10 = ADD32(ctx->r10, -0X6B90);
    // 0x150197B8: ori         $t3, $t3, 0x3
    ctx->r11 = ctx->r11 | 0X3;
    // 0x150197BC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x150197C0: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x150197C4: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x150197C8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x150197CC: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x150197D0: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x150197D4: lw          $t5, 0x5F0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X5F0);
    // 0x150197D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150197DC: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x150197E0: beq         $t6, $zero, L_15019830
    if (ctx->r14 == 0) {
        // 0x150197E4: nop
    
            goto L_15019830;
    }
    // 0x150197E4: nop

    // 0x150197E8: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x150197EC: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x150197F0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x150197F4: jal         0x15018E88
    // 0x150197F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15018E88(rdram, ctx);
        goto after_13;
    // 0x150197F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x150197FC: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x15019800: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x15019804: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x15019808: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1501980C: jal         0x151135C4
    // 0x15019810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151135C4(rdram, ctx);
        goto after_14;
    // 0x15019810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x15019814: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x15019818: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1501981C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x15019820: jal         0x15018F08
    // 0x15019824: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15018F08(rdram, ctx);
        goto after_15;
    // 0x15019824: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_15:
    // 0x15019828: b           L_15019868
    // 0x1501982C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_15019868;
    // 0x1501982C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_15019830:
    // 0x15019830: jal         0x15018F08
    // 0x15019834: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_15018F08(rdram, ctx);
        goto after_16;
    // 0x15019834: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_16:
    // 0x15019838: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x1501983C: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x15019840: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x15019844: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15019848: jal         0x151135C4
    // 0x1501984C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151135C4(rdram, ctx);
        goto after_17;
    // 0x1501984C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x15019850: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x15019854: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x15019858: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x1501985C: jal         0x15018E88
    // 0x15019860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15018E88(rdram, ctx);
        goto after_18;
    // 0x15019860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_18:
    // 0x15019864: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_15019868:
    // 0x15019868: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x1501986C: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x15019870: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x15019874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15019878: jal         0x15188D00
    // 0x1501987C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15188D00(rdram, ctx);
        goto after_19;
    // 0x1501987C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x15019880: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x15019884: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x15019888: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x1501988C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15019890: jal         0x15188D00
    // 0x15019894: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15188D00(rdram, ctx);
        goto after_20;
    // 0x15019894: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x15019898: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x1501989C: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x150198A0: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x150198A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150198A8: jal         0x1502BAD0
    // 0x150198AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_1502BAD0(rdram, ctx);
        goto after_21;
    // 0x150198AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x150198B0: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x150198B4: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x150198B8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150198BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150198C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x150198C4: jal         0x151674F8
    // 0x150198C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151674F8(rdram, ctx);
        goto after_22;
    // 0x150198C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_22:
    // 0x150198CC: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x150198D0: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x150198D4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x150198D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150198DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x150198E0: jal         0x151674F8
    // 0x150198E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151674F8(rdram, ctx);
        goto after_23;
    // 0x150198E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_23:
L_150198E8:
    // 0x150198E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150198EC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x150198F0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x150198F4: jr          $ra
    // 0x150198F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x150198F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1512E8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512E8E0: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x1512E8E4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x1512E8E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1512E8EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1512E8F0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x1512E8F4: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    // 0x1512E8F8: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x1512E8FC: bnel        $t7, $zero, L_1512FDF0
    if (ctx->r15 != 0) {
        // 0x1512E900: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1512FDF0;
    }
    goto skip_0;
    // 0x1512E900: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x1512E904: lh          $t8, 0x73C($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X73C);
    // 0x1512E908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512E90C: bnel        $t8, $zero, L_1512FDF0
    if (ctx->r24 != 0) {
        // 0x1512E910: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1512FDF0;
    }
    goto skip_1;
    // 0x1512E910: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x1512E914: jal         0x151239CC
    // 0x1512E918: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_151239CC(rdram, ctx);
        goto after_0;
    // 0x1512E918: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_0:
    // 0x1512E91C: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
    // 0x1512E920: addiu       $s1, $s0, 0x6FC
    ctx->r17 = ADD32(ctx->r16, 0X6FC);
    // 0x1512E924: addiu       $v1, $s0, 0x6CC
    ctx->r3 = ADD32(ctx->r16, 0X6CC);
    // 0x1512E928: sll         $t1, $t9, 13
    ctx->r9 = S32(ctx->r25 << 13);
    // 0x1512E92C: bltzl       $t1, L_1512FDF0
    if (SIGNED(ctx->r9) < 0) {
        // 0x1512E930: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1512FDF0;
    }
    goto skip_2;
    // 0x1512E930: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x1512E934: lh          $t2, 0x4($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X4);
    // 0x1512E938: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x1512E93C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512E940: beql        $t2, $t3, L_1512E990
    if (ctx->r10 == ctx->r11) {
        // 0x1512E944: lw          $t5, 0x0($s1)
        ctx->r13 = MEM_W(ctx->r17, 0X0);
            goto L_1512E990;
    }
    goto skip_3;
    // 0x1512E944: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    skip_3:
    // 0x1512E948: sb          $zero, 0x92C($s0)
    MEM_B(0X92C, ctx->r16) = 0;
    // 0x1512E94C: lh          $t4, 0x4($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X4);
    // 0x1512E950: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x1512E954: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x1512E958: sh          $t4, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r12;
    // 0x1512E95C: jal         0x151239CC
    // 0x1512E960: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_151239CC(rdram, ctx);
        goto after_1;
    // 0x1512E960: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_1:
    // 0x1512E964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512E968: jal         0x151239CC
    // 0x1512E96C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_151239CC(rdram, ctx);
        goto after_2;
    // 0x1512E96C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_2:
    // 0x1512E970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512E974: jal         0x151239CC
    // 0x1512E978: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_151239CC(rdram, ctx);
        goto after_3;
    // 0x1512E978: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x1512E97C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512E980: jal         0x151239CC
    // 0x1512E984: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_151239CC(rdram, ctx);
        goto after_4;
    // 0x1512E984: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_4:
    // 0x1512E988: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512E98C: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
L_1512E990:
    // 0x1512E990: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1512E994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512E998: beq         $t5, $at, L_1512E9C4
    if (ctx->r13 == ctx->r1) {
        // 0x1512E99C: addiu       $a1, $zero, 0xC
        ctx->r5 = ADD32(0, 0XC);
            goto L_1512E9C4;
    }
    // 0x1512E99C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x1512E9A0: lw          $t6, 0x3D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X3D4);
    // 0x1512E9A4: lbu         $t7, 0x120($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X120);
    // 0x1512E9A8: beql        $t7, $zero, L_1512E9C8
    if (ctx->r15 == 0) {
        // 0x1512E9AC: lh          $t9, 0x6($v1)
        ctx->r25 = MEM_H(ctx->r3, 0X6);
            goto L_1512E9C8;
    }
    goto skip_4;
    // 0x1512E9AC: lh          $t9, 0x6($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X6);
    skip_4:
    // 0x1512E9B0: lbu         $t8, 0x92C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X92C);
    // 0x1512E9B4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1512E9B8: bnel        $t8, $zero, L_1512E9C8
    if (ctx->r24 != 0) {
        // 0x1512E9BC: lh          $t9, 0x6($v1)
        ctx->r25 = MEM_H(ctx->r3, 0X6);
            goto L_1512E9C8;
    }
    goto skip_5;
    // 0x1512E9BC: lh          $t9, 0x6($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X6);
    skip_5:
    // 0x1512E9C0: sh          $t0, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r8;
L_1512E9C4:
    // 0x1512E9C4: lh          $t9, 0x6($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X6);
L_1512E9C8:
    // 0x1512E9C8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1512E9CC: beql        $t9, $zero, L_1512E9E8
    if (ctx->r25 == 0) {
        // 0x1512E9D0: lh          $t1, 0x6CC($s0)
        ctx->r9 = MEM_H(ctx->r16, 0X6CC);
            goto L_1512E9E8;
    }
    goto skip_6;
    // 0x1512E9D0: lh          $t1, 0x6CC($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6CC);
    skip_6:
    // 0x1512E9D4: jal         0x151239CC
    // 0x1512E9D8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_151239CC(rdram, ctx);
        goto after_5;
    // 0x1512E9D8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_5:
    // 0x1512E9DC: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512E9E0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1512E9E4: lh          $t1, 0x6CC($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6CC);
L_1512E9E8:
    // 0x1512E9E8: beql        $t1, $zero, L_1512FB64
    if (ctx->r9 == 0) {
        // 0x1512E9EC: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_1512FB64;
    }
    goto skip_7;
    // 0x1512E9EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_7:
    // 0x1512E9F0: lh          $t2, 0x6($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X6);
    // 0x1512E9F4: bnel        $t2, $zero, L_1512FB64
    if (ctx->r10 != 0) {
        // 0x1512E9F8: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_1512FB64;
    }
    goto skip_8;
    // 0x1512E9F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_8:
    // 0x1512E9FC: lh          $t3, 0x8($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X8);
    // 0x1512EA00: bnel        $t3, $zero, L_1512FB64
    if (ctx->r11 != 0) {
        // 0x1512EA04: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_1512FB64;
    }
    goto skip_9;
    // 0x1512EA04: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_9:
    // 0x1512EA08: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x1512EA0C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x1512EA10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512EA14: sh          $t4, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r12;
    // 0x1512EA18: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x1512EA1C: beql        $v0, $at, L_1512EA40
    if (ctx->r2 == ctx->r1) {
        // 0x1512EA20: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_1512EA40;
    }
    goto skip_10;
    // 0x1512EA20: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_10:
    // 0x1512EA24: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x1512EA28: jal         0x1512FE00
    // 0x1512EA2C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_1512FE00(rdram, ctx);
        goto after_6;
    // 0x1512EA2C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_6:
    // 0x1512EA30: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512EA34: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x1512EA38: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1512EA3C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_1512EA40:
    // 0x1512EA40: bne         $v0, $at, L_1512EA64
    if (ctx->r2 != ctx->r1) {
        // 0x1512EA44: addiu       $t5, $zero, -0x1
        ctx->r13 = ADD32(0, -0X1);
            goto L_1512EA64;
    }
    // 0x1512EA44: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x1512EA48: lh          $t6, 0x1B4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1B4);
    // 0x1512EA4C: lh          $t7, 0x1E0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1E0);
    // 0x1512EA50: sh          $t5, 0x272($s0)
    MEM_H(0X272, ctx->r16) = ctx->r13;
    // 0x1512EA54: sw          $t0, 0x6C8($s0)
    MEM_W(0X6C8, ctx->r16) = ctx->r8;
    // 0x1512EA58: sh          $t6, 0x1C4($s0)
    MEM_H(0X1C4, ctx->r16) = ctx->r14;
    // 0x1512EA5C: b           L_1512FDEC
    // 0x1512EA60: sh          $t7, 0x1F0($s0)
    MEM_H(0X1F0, ctx->r16) = ctx->r15;
        goto L_1512FDEC;
    // 0x1512EA60: sh          $t7, 0x1F0($s0)
    MEM_H(0X1F0, ctx->r16) = ctx->r15;
L_1512EA64:
    // 0x1512EA64: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x1512EA68: bne         $v0, $at, L_1512F01C
    if (ctx->r2 != ctx->r1) {
        // 0x1512EA6C: addiu       $a3, $zero, 0x7
        ctx->r7 = ADD32(0, 0X7);
            goto L_1512F01C;
    }
    // 0x1512EA6C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x1512EA70: lwc1        $f12, 0x2F8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x1512EA74: lwc1        $f14, 0x2FC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x1512EA78: lw          $a2, 0x300($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X300);
    // 0x1512EA7C: jal         0x15085DF8
    // 0x1512EA80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_15085DF8(rdram, ctx);
        goto after_7;
    // 0x1512EA80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x1512EA84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512EA88: lwc1        $f4, 0x3740($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3740);
    // 0x1512EA8C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1512EA90: lw          $t9, 0x2350($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2350);
    // 0x1512EA94: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x1512EA98: lw          $t1, 0x2C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X2C);
    // 0x1512EA9C: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x1512EAA0: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x1512EAA4: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x1512EAA8: bnel        $t2, $zero, L_1512FDF0
    if (ctx->r10 != 0) {
        // 0x1512EAAC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1512FDF0;
    }
    goto skip_11;
    // 0x1512EAAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_11:
    // 0x1512EAB0: lh          $t3, 0x0($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X0);
    // 0x1512EAB4: addiu       $a1, $s0, 0x2F8
    ctx->r5 = ADD32(ctx->r16, 0X2F8);
    // 0x1512EAB8: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x1512EABC: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x1512EAC0: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    // 0x1512EAC4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1512EAC8: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x1512EACC: lh          $t4, 0x2($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X2);
    // 0x1512EAD0: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x1512EAD4: nop

    // 0x1512EAD8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512EADC: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x1512EAE0: lh          $t5, 0x4($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X4);
    // 0x1512EAE4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1512EAE8: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    // 0x1512EAEC: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x1512EAF0: nop

    // 0x1512EAF4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1512EAF8: jal         0x15048F90
    // 0x1512EAFC: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    func_15048F90(rdram, ctx);
        goto after_8;
    // 0x1512EAFC: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x1512EB00: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x1512EB04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_1512EB08:
    // 0x1512EB08: lbu         $v1, 0x9($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X9);
    // 0x1512EB0C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1512EB10: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1512EB14: beq         $v1, $at, L_1512EC1C
    if (ctx->r3 == ctx->r1) {
        // 0x1512EB18: sw          $a3, 0xC8($sp)
        MEM_W(0XC8, ctx->r29) = ctx->r7;
            goto L_1512EC1C;
    }
    // 0x1512EB18: sw          $a3, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r7;
    // 0x1512EB1C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1512EB20: lw          $t6, 0x2350($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2350);
    // 0x1512EB24: sll         $t7, $v1, 4
    ctx->r15 = S32(ctx->r3 << 4);
    // 0x1512EB28: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x1512EB2C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1512EB30: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x1512EB34: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x1512EB38: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x1512EB3C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1512EB40: nop

    // 0x1512EB44: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512EB48: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x1512EB4C: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x1512EB50: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1512EB54: nop

    // 0x1512EB58: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1512EB5C: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x1512EB60: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x1512EB64: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1512EB68: sw          $a3, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r7;
    // 0x1512EB6C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1512EB70: nop

    // 0x1512EB74: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512EB78: jal         0x150491EC
    // 0x1512EB7C: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    func_150491EC(rdram, ctx);
        goto after_9;
    // 0x1512EB7C: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x1512EB80: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x1512EB84: jal         0x150AD900
    // 0x1512EB88: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    func_150AD900(rdram, ctx);
        goto after_10;
    // 0x1512EB88: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    after_10:
    // 0x1512EB8C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x1512EB90: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x1512EB94: jal         0x15049148
    // 0x1512EB98: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_15049148(rdram, ctx);
        goto after_11;
    // 0x1512EB98: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_11:
    // 0x1512EB9C: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x1512EBA0: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x1512EBA4: jal         0x15048F20
    // 0x1512EBA8: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    func_15048F20(rdram, ctx);
        goto after_12;
    // 0x1512EBA8: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_12:
    // 0x1512EBAC: lwc1        $f6, 0x2F8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x1512EBB0: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1512EBB4: lwc1        $f10, 0x2FC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x1512EBB8: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1512EBBC: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1512EBC0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1512EBC4: lwc1        $f6, 0x300($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X300);
    // 0x1512EBC8: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1512EBCC: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1512EBD0: addiu       $t3, $sp, 0x70
    ctx->r11 = ADD32(ctx->r29, 0X70);
    // 0x1512EBD4: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1512EBD8: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1512EBDC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1512EBE0: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1512EBE4: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x1512EBE8: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1512EBEC: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x1512EBF0: nop

    // 0x1512EBF4: bc1fl       L_1512EC20
    if (!c1cs) {
        // 0x1512EBF8: lw          $a3, 0xC8($sp)
        ctx->r7 = MEM_W(ctx->r29, 0XC8);
            goto L_1512EC20;
    }
    goto skip_12;
    // 0x1512EBF8: lw          $a3, 0xC8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC8);
    skip_12:
    // 0x1512EBFC: swc1        $f14, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f14.u32l;
    // 0x1512EC00: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x1512EC04: addiu       $t2, $sp, 0x7C
    ctx->r10 = ADD32(ctx->r29, 0X7C);
    // 0x1512EC08: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x1512EC0C: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x1512EC10: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x1512EC14: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x1512EC18: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
L_1512EC1C:
    // 0x1512EC1C: lw          $a3, 0xC8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC8);
L_1512EC20:
    // 0x1512EC20: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1512EC24: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x1512EC28: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1512EC2C: bne         $a3, $at, L_1512EB08
    if (ctx->r7 != ctx->r1) {
        // 0x1512EC30: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_1512EB08;
    }
    // 0x1512EC30: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1512EC34: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1512EC38: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512EC3C: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x1512EC40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1512EC44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512EC48: jal         0x15123934
    // 0x1512EC4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_13;
    // 0x1512EC4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x1512EC50: beq         $v0, $zero, L_1512ED1C
    if (ctx->r2 == 0) {
        // 0x1512EC54: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_1512ED1C;
    }
    // 0x1512EC54: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1512EC58: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x1512EC5C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x1512EC60: ori         $at, $at, 0xFFF9
    ctx->r1 = ctx->r1 | 0XFFF9;
    // 0x1512EC64: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x1512EC68: sw          $t8, 0x6C8($s0)
    MEM_W(0X6C8, ctx->r16) = ctx->r24;
    // 0x1512EC6C: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    // 0x1512EC70: lw          $t5, 0x8($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X8);
    // 0x1512EC74: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512EC78: sh          $t5, 0x920($s0)
    MEM_H(0X920, ctx->r16) = ctx->r13;
    // 0x1512EC7C: lw          $t4, 0x1C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X1C);
    // 0x1512EC80: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1512EC84: bgez        $t4, L_1512EC98
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1512EC88: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1512EC98;
    }
    // 0x1512EC88: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512EC8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512EC90: nop

    // 0x1512EC94: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1512EC98:
    // 0x1512EC98: swc1        $f6, 0x924($s0)
    MEM_W(0X924, ctx->r16) = ctx->f6.u32l;
    // 0x1512EC9C: lw          $t2, 0x20($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X20);
    // 0x1512ECA0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512ECA4: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x1512ECA8: bgez        $t2, L_1512ECBC
    if (SIGNED(ctx->r10) >= 0) {
        // 0x1512ECAC: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1512ECBC;
    }
    // 0x1512ECAC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512ECB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512ECB4: nop

    // 0x1512ECB8: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_1512ECBC:
    // 0x1512ECBC: lhu         $v0, 0x920($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X920);
    // 0x1512ECC0: swc1        $f4, 0x928($s0)
    MEM_W(0X928, ctx->r16) = ctx->f4.u32l;
    // 0x1512ECC4: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x1512ECC8: beql        $t3, $zero, L_1512ECE4
    if (ctx->r11 == 0) {
        // 0x1512ECCC: andi        $t8, $v0, 0x2
        ctx->r24 = ctx->r2 & 0X2;
            goto L_1512ECE4;
    }
    goto skip_13;
    // 0x1512ECCC: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    skip_13:
    // 0x1512ECD0: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x1512ECD4: lhu         $v0, 0x920($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X920);
    // 0x1512ECD8: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x1512ECDC: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x1512ECE0: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
L_1512ECE4:
    // 0x1512ECE4: beq         $t8, $zero, L_1512ECFC
    if (ctx->r24 == 0) {
        // 0x1512ECE8: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_1512ECFC;
    }
    // 0x1512ECE8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1512ECEC: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x1512ECF0: lhu         $v0, 0x920($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X920);
    // 0x1512ECF4: ori         $t1, $t9, 0x2
    ctx->r9 = ctx->r25 | 0X2;
    // 0x1512ECF8: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
L_1512ECFC:
    // 0x1512ECFC: andi        $t5, $v0, 0x7
    ctx->r13 = ctx->r2 & 0X7;
    // 0x1512ED00: beql        $t5, $zero, L_1512ED1C
    if (ctx->r13 == 0) {
        // 0x1512ED04: sb          $t3, 0x92C($s0)
        MEM_B(0X92C, ctx->r16) = ctx->r11;
            goto L_1512ED1C;
    }
    goto skip_14;
    // 0x1512ED04: sb          $t3, 0x92C($s0)
    MEM_B(0X92C, ctx->r16) = ctx->r11;
    skip_14:
    // 0x1512ED08: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    // 0x1512ED0C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x1512ED10: or          $t2, $t4, $at
    ctx->r10 = ctx->r12 | ctx->r1;
    // 0x1512ED14: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
    // 0x1512ED18: sb          $t3, 0x92C($s0)
    MEM_B(0X92C, ctx->r16) = ctx->r11;
L_1512ED1C:
    // 0x1512ED1C: lhu         $t6, 0x920($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X920);
    // 0x1512ED20: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x1512ED24: beql        $t7, $zero, L_1512ED40
    if (ctx->r15 == 0) {
        // 0x1512ED28: lw          $t1, 0x84($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X84);
            goto L_1512ED40;
    }
    goto skip_15;
    // 0x1512ED28: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    skip_15:
    // 0x1512ED2C: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x1512ED30: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x1512ED34: b           L_1512ED4C
    // 0x1512ED38: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
        goto L_1512ED4C;
    // 0x1512ED38: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
    // 0x1512ED3C: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
L_1512ED40:
    // 0x1512ED40: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x1512ED44: and         $t5, $t1, $at
    ctx->r13 = ctx->r9 & ctx->r1;
    // 0x1512ED48: sw          $t5, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r13;
L_1512ED4C:
    // 0x1512ED4C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x1512ED50: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1512ED54: lhu         $v0, 0x920($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X920);
    // 0x1512ED58: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x1512ED5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512ED60: andi        $t4, $v0, 0x2
    ctx->r12 = ctx->r2 & 0X2;
    // 0x1512ED64: swc1        $f2, 0x910($s0)
    MEM_W(0X910, ctx->r16) = ctx->f2.u32l;
    // 0x1512ED68: beq         $t4, $zero, L_1512EDB4
    if (ctx->r12 == 0) {
        // 0x1512ED6C: swc1        $f6, 0x914($s0)
        MEM_W(0X914, ctx->r16) = ctx->f6.u32l;
            goto L_1512EDB4;
    }
    // 0x1512ED6C: swc1        $f6, 0x914($s0)
    MEM_W(0X914, ctx->r16) = ctx->f6.u32l;
    // 0x1512ED70: lw          $t2, 0x36C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X36C);
    // 0x1512ED74: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1512ED78: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x1512ED7C: andi        $t6, $t3, 0x7
    ctx->r14 = ctx->r11 & 0X7;
    // 0x1512ED80: beql        $t6, $zero, L_1512EDB8
    if (ctx->r14 == 0) {
        // 0x1512ED84: andi        $t9, $v0, 0x40
        ctx->r25 = ctx->r2 & 0X40;
            goto L_1512EDB8;
    }
    goto skip_16;
    // 0x1512ED84: andi        $t9, $v0, 0x40
    ctx->r25 = ctx->r2 & 0X40;
    skip_16:
    // 0x1512ED88: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1512ED8C: lwc1        $f10, 0x910($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X910);
    // 0x1512ED90: lwc1        $f4, 0x914($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X914);
    // 0x1512ED94: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
    // 0x1512ED98: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1512ED9C: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x1512EDA0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1512EDA4: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
    // 0x1512EDA8: swc1        $f8, 0x910($s0)
    MEM_W(0X910, ctx->r16) = ctx->f8.u32l;
    // 0x1512EDAC: b           L_1512EE3C
    // 0x1512EDB0: swc1        $f6, 0x914($s0)
    MEM_W(0X914, ctx->r16) = ctx->f6.u32l;
        goto L_1512EE3C;
    // 0x1512EDB0: swc1        $f6, 0x914($s0)
    MEM_W(0X914, ctx->r16) = ctx->f6.u32l;
L_1512EDB4:
    // 0x1512EDB4: andi        $t9, $v0, 0x40
    ctx->r25 = ctx->r2 & 0X40;
L_1512EDB8:
    // 0x1512EDB8: beql        $t9, $zero, L_1512EE40
    if (ctx->r25 == 0) {
        // 0x1512EDBC: lbu         $t2, 0x23C($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X23C);
            goto L_1512EE40;
    }
    goto skip_17;
    // 0x1512EDBC: lbu         $t2, 0x23C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X23C);
    skip_17:
    // 0x1512EDC0: lw          $t1, 0x3D0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3D0);
    // 0x1512EDC4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1512EDC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1512EDCC: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x1512EDD0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1512EDD4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x1512EDD8: nop

    // 0x1512EDDC: bc1fl       L_1512EE10
    if (!c1cs) {
        // 0x1512EDE0: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_1512EE10;
    }
    goto skip_18;
    // 0x1512EDE0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_18:
    // 0x1512EDE4: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x1512EDE8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1512EDEC: lwc1        $f4, 0x910($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X910);
    // 0x1512EDF0: lwc1        $f10, 0x914($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X914);
    // 0x1512EDF4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1512EDF8: nop

    // 0x1512EDFC: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1512EE00: swc1        $f6, 0x910($s0)
    MEM_W(0X910, ctx->r16) = ctx->f6.u32l;
    // 0x1512EE04: b           L_1512EE2C
    // 0x1512EE08: swc1        $f8, 0x914($s0)
    MEM_W(0X914, ctx->r16) = ctx->f8.u32l;
        goto L_1512EE2C;
    // 0x1512EE08: swc1        $f8, 0x914($s0)
    MEM_W(0X914, ctx->r16) = ctx->f8.u32l;
    // 0x1512EE0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_1512EE10:
    // 0x1512EE10: lwc1        $f4, 0x910($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X910);
    // 0x1512EE14: lwc1        $f10, 0x914($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X914);
    // 0x1512EE18: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1512EE1C: nop

    // 0x1512EE20: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1512EE24: swc1        $f6, 0x910($s0)
    MEM_W(0X910, ctx->r16) = ctx->f6.u32l;
    // 0x1512EE28: swc1        $f8, 0x914($s0)
    MEM_W(0X914, ctx->r16) = ctx->f8.u32l;
L_1512EE2C:
    // 0x1512EE2C: lw          $t5, 0x84($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X84);
    // 0x1512EE30: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x1512EE34: or          $t4, $t5, $at
    ctx->r12 = ctx->r13 | ctx->r1;
    // 0x1512EE38: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
L_1512EE3C:
    // 0x1512EE3C: lbu         $t2, 0x23C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X23C);
L_1512EE40:
    // 0x1512EE40: addiu       $a0, $s0, 0x908
    ctx->r4 = ADD32(ctx->r16, 0X908);
    // 0x1512EE44: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1512EE48: beql        $t2, $zero, L_1512EE74
    if (ctx->r10 == 0) {
        // 0x1512EE4C: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_1512EE74;
    }
    goto skip_19;
    // 0x1512EE4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_19:
    // 0x1512EE50: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1512EE54: lwc1        $f4, 0x910($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X910);
    // 0x1512EE58: lwc1        $f6, 0x914($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X914);
    // 0x1512EE5C: swc1        $f16, 0x918($s0)
    MEM_W(0X918, ctx->r16) = ctx->f16.u32l;
    // 0x1512EE60: swc1        $f4, 0x908($s0)
    MEM_W(0X908, ctx->r16) = ctx->f4.u32l;
    // 0x1512EE64: swc1        $f16, 0x91C($s0)
    MEM_W(0X91C, ctx->r16) = ctx->f16.u32l;
    // 0x1512EE68: b           L_1512EEC0
    // 0x1512EE6C: swc1        $f6, 0x90C($s0)
    MEM_W(0X90C, ctx->r16) = ctx->f6.u32l;
        goto L_1512EEC0;
    // 0x1512EE6C: swc1        $f6, 0x90C($s0)
    MEM_W(0X90C, ctx->r16) = ctx->f6.u32l;
    // 0x1512EE70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_1512EE74:
    // 0x1512EE74: lw          $a1, 0x910($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X910);
    // 0x1512EE78: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x1512EE7C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x1512EE80: lwc1        $f8, 0x7B4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x1512EE84: addiu       $a2, $s0, 0x918
    ctx->r6 = ADD32(ctx->r16, 0X918);
    // 0x1512EE88: jal         0x150495B0
    // 0x1512EE8C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_150495B0(rdram, ctx);
        goto after_14;
    // 0x1512EE8C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x1512EE90: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1512EE94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1512EE98: lw          $a1, 0x914($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X914);
    // 0x1512EE9C: addiu       $a0, $s0, 0x90C
    ctx->r4 = ADD32(ctx->r16, 0X90C);
    // 0x1512EEA0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1512EEA4: lwc1        $f6, 0x7B4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x1512EEA8: addiu       $a2, $s0, 0x91C
    ctx->r6 = ADD32(ctx->r16, 0X91C);
    // 0x1512EEAC: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    // 0x1512EEB0: jal         0x150495B0
    // 0x1512EEB4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_150495B0(rdram, ctx);
        goto after_15;
    // 0x1512EEB4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x1512EEB8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1512EEBC: nop

L_1512EEC0:
    // 0x1512EEC0: lhu         $v0, 0x920($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X920);
    // 0x1512EEC4: andi        $t3, $v0, 0x10
    ctx->r11 = ctx->r2 & 0X10;
    // 0x1512EEC8: bnel        $t3, $zero, L_1512EF50
    if (ctx->r11 != 0) {
        // 0x1512EECC: andi        $t7, $v0, 0x8
        ctx->r15 = ctx->r2 & 0X8;
            goto L_1512EF50;
    }
    goto skip_20;
    // 0x1512EECC: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    skip_20:
    // 0x1512EED0: lbu         $t6, 0x23C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X23C);
    // 0x1512EED4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x1512EED8: beql        $t6, $zero, L_1512EF04
    if (ctx->r14 == 0) {
        // 0x1512EEDC: lwc1        $f4, 0x90C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X90C);
            goto L_1512EF04;
    }
    goto skip_21;
    // 0x1512EEDC: lwc1        $f4, 0x90C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90C);
    skip_21:
    // 0x1512EEE0: swc1        $f16, 0x8F4($s0)
    MEM_W(0X8F4, ctx->r16) = ctx->f16.u32l;
    // 0x1512EEE4: swc1        $f16, 0x904($s0)
    MEM_W(0X904, ctx->r16) = ctx->f16.u32l;
    // 0x1512EEE8: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1512EEEC: lhu         $v0, 0x920($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X920);
    // 0x1512EEF0: swc1        $f10, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f10.u32l;
    // 0x1512EEF4: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1512EEF8: b           L_1512EF4C
    // 0x1512EEFC: swc1        $f8, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f8.u32l;
        goto L_1512EF4C;
    // 0x1512EEFC: swc1        $f8, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f8.u32l;
    // 0x1512EF00: lwc1        $f4, 0x90C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90C);
L_1512EF04:
    // 0x1512EF04: lw          $a3, 0x908($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X908);
    // 0x1512EF08: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x1512EF0C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1512EF10: lwc1        $f6, 0x7B4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x1512EF14: addiu       $a2, $s0, 0x8F4
    ctx->r6 = ADD32(ctx->r16, 0X8F4);
    // 0x1512EF18: jal         0x150495B0
    // 0x1512EF1C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_150495B0(rdram, ctx);
        goto after_16;
    // 0x1512EF1C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_16:
    // 0x1512EF20: lwc1        $f10, 0x90C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X90C);
    // 0x1512EF24: lw          $a3, 0x908($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X908);
    // 0x1512EF28: addiu       $a0, $s0, 0x300
    ctx->r4 = ADD32(ctx->r16, 0X300);
    // 0x1512EF2C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x1512EF30: lwc1        $f8, 0x7B4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x1512EF34: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x1512EF38: addiu       $a2, $s0, 0x904
    ctx->r6 = ADD32(ctx->r16, 0X904);
    // 0x1512EF3C: jal         0x150495B0
    // 0x1512EF40: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_150495B0(rdram, ctx);
        goto after_17;
    // 0x1512EF40: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x1512EF44: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1512EF48: lhu         $v0, 0x920($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X920);
L_1512EF4C:
    // 0x1512EF4C: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
L_1512EF50:
    // 0x1512EF50: bne         $t7, $zero, L_1512EF98
    if (ctx->r15 != 0) {
        // 0x1512EF54: nop
    
            goto L_1512EF98;
    }
    // 0x1512EF54: nop

    // 0x1512EF58: lbu         $t8, 0x23C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X23C);
    // 0x1512EF5C: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1512EF60: addiu       $a0, $s0, 0x2FC
    ctx->r4 = ADD32(ctx->r16, 0X2FC);
    // 0x1512EF64: beql        $t8, $zero, L_1512EF7C
    if (ctx->r24 == 0) {
        // 0x1512EF68: lwc1        $f6, 0x90C($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X90C);
            goto L_1512EF7C;
    }
    goto skip_22;
    // 0x1512EF68: lwc1        $f6, 0x90C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90C);
    skip_22:
    // 0x1512EF6C: swc1        $f4, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->f4.u32l;
    // 0x1512EF70: b           L_1512EF98
    // 0x1512EF74: swc1        $f16, 0x8FC($s0)
    MEM_W(0X8FC, ctx->r16) = ctx->f16.u32l;
        goto L_1512EF98;
    // 0x1512EF74: swc1        $f16, 0x8FC($s0)
    MEM_W(0X8FC, ctx->r16) = ctx->f16.u32l;
    // 0x1512EF78: lwc1        $f6, 0x90C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90C);
L_1512EF7C:
    // 0x1512EF7C: lw          $a3, 0x908($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X908);
    // 0x1512EF80: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x1512EF84: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x1512EF88: lwc1        $f10, 0x7B4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x1512EF8C: addiu       $a2, $s0, 0x8FC
    ctx->r6 = ADD32(ctx->r16, 0X8FC);
    // 0x1512EF90: jal         0x150495B0
    // 0x1512EF94: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_150495B0(rdram, ctx);
        goto after_18;
    // 0x1512EF94: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_18:
L_1512EF98:
    // 0x1512EF98: jal         0x15125594
    // 0x1512EF9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15125594(rdram, ctx);
        goto after_19;
    // 0x1512EF9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x1512EFA0: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x1512EFA4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512EFA8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x1512EFAC: bgez        $t9, L_1512EFC0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1512EFB0: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1512EFC0;
    }
    // 0x1512EFB0: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1512EFB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512EFB8: nop

    // 0x1512EFBC: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_1512EFC0:
    // 0x1512EFC0: swc1        $f4, 0x924($s0)
    MEM_W(0X924, ctx->r16) = ctx->f4.u32l;
    // 0x1512EFC4: lw          $t1, 0x20($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X20);
    // 0x1512EFC8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512EFCC: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1512EFD0: bgez        $t1, L_1512EFE4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1512EFD4: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1512EFE4;
    }
    // 0x1512EFD4: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512EFD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512EFDC: nop

    // 0x1512EFE0: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_1512EFE4:
    // 0x1512EFE4: lhu         $t5, 0x920($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X920);
    // 0x1512EFE8: swc1        $f8, 0x928($s0)
    MEM_W(0X928, ctx->r16) = ctx->f8.u32l;
    // 0x1512EFEC: lwc1        $f4, 0x924($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X924);
    // 0x1512EFF0: lwc1        $f10, 0x928($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X928);
    // 0x1512EFF4: andi        $t4, $t5, 0x4
    ctx->r12 = ctx->r13 & 0X4;
    // 0x1512EFF8: swc1        $f4, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f4.u32l;
    // 0x1512EFFC: beq         $t4, $zero, L_1512FDEC
    if (ctx->r12 == 0) {
        // 0x1512F000: swc1        $f10, 0x348($s0)
        MEM_W(0X348, ctx->r16) = ctx->f10.u32l;
            goto L_1512FDEC;
    }
    // 0x1512F000: swc1        $f10, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f10.u32l;
    // 0x1512F004: lh          $t2, 0x4($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X4);
    // 0x1512F008: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1512F00C: sw          $t6, 0x738($s0)
    MEM_W(0X738, ctx->r16) = ctx->r14;
    // 0x1512F010: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x1512F014: b           L_1512FDEC
    // 0x1512F018: sw          $t3, 0x734($s0)
    MEM_W(0X734, ctx->r16) = ctx->r11;
        goto L_1512FDEC;
    // 0x1512F018: sw          $t3, 0x734($s0)
    MEM_W(0X734, ctx->r16) = ctx->r11;
L_1512F01C:
    // 0x1512F01C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1512F020: bne         $v0, $at, L_1512F234
    if (ctx->r2 != ctx->r1) {
        // 0x1512F024: addiu       $t7, $zero, 0xC
        ctx->r15 = ADD32(0, 0XC);
            goto L_1512F234;
    }
    // 0x1512F024: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x1512F028: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1512F02C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512F030: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x1512F034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1512F038: jal         0x15123934
    // 0x1512F03C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_20;
    // 0x1512F03C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_20:
    // 0x1512F040: beql        $v0, $zero, L_1512F07C
    if (ctx->r2 == 0) {
        // 0x1512F044: lw          $v1, 0x8($s1)
        ctx->r3 = MEM_W(ctx->r17, 0X8);
            goto L_1512F07C;
    }
    goto skip_23;
    // 0x1512F044: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    skip_23:
    // 0x1512F048: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x1512F04C: addiu       $at, $zero, -0xF
    ctx->r1 = ADD32(0, -0XF);
    // 0x1512F050: lw          $t2, 0x2FC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X2FC);
    // 0x1512F054: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x1512F058: lw          $at, 0x2F8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X2F8);
    // 0x1512F05C: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
    // 0x1512F060: ori         $t5, $t9, 0x200
    ctx->r13 = ctx->r25 | 0X200;
    // 0x1512F064: sw          $at, 0x27C($s0)
    MEM_W(0X27C, ctx->r16) = ctx->r1;
    // 0x1512F068: lw          $at, 0x300($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X300);
    // 0x1512F06C: sw          $t5, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r13;
    // 0x1512F070: sw          $t2, 0x280($s0)
    MEM_W(0X280, ctx->r16) = ctx->r10;
    // 0x1512F074: sw          $at, 0x284($s0)
    MEM_W(0X284, ctx->r16) = ctx->r1;
    // 0x1512F078: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
L_1512F07C:
    // 0x1512F07C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1512F080: beq         $v1, $at, L_1512F090
    if (ctx->r3 == ctx->r1) {
        // 0x1512F084: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_1512F090;
    }
    // 0x1512F084: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x1512F088: bnel        $v1, $at, L_1512F188
    if (ctx->r3 != ctx->r1) {
        // 0x1512F08C: lw          $t4, 0x1C($s1)
        ctx->r12 = MEM_W(ctx->r17, 0X1C);
            goto L_1512F188;
    }
    goto skip_24;
    // 0x1512F08C: lw          $t4, 0x1C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X1C);
    skip_24:
L_1512F090:
    // 0x1512F090: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x1512F094: lh          $t3, 0x272($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X272);
    // 0x1512F098: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1512F09C: beql        $a0, $t3, L_1512F228
    if (ctx->r4 == ctx->r11) {
        // 0x1512F0A0: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_1512F228;
    }
    goto skip_25;
    // 0x1512F0A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    skip_25:
    // 0x1512F0A4: sh          $a0, 0x272($s0)
    MEM_H(0X272, ctx->r16) = ctx->r4;
    // 0x1512F0A8: lw          $t6, -0x3FE0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3FE0);
    // 0x1512F0AC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1512F0B0: addiu       $v0, $v0, -0x3FDC
    ctx->r2 = ADD32(ctx->r2, -0X3FDC);
    // 0x1512F0B4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1512F0B8: lh          $t7, 0x272($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X272);
    // 0x1512F0BC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F0C0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1512F0C4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1512F0C8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1512F0CC: addu        $t1, $t8, $t6
    ctx->r9 = ADD32(ctx->r24, ctx->r14);
    // 0x1512F0D0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x1512F0D4: lw          $t5, 0x20($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X20);
    // 0x1512F0D8: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x1512F0DC: bgez        $t5, L_1512F0F0
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1512F0E0: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1512F0F0;
    }
    // 0x1512F0E0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1512F0E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1512F0E8: nop

    // 0x1512F0EC: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_1512F0F0:
    // 0x1512F0F0: swc1        $f8, 0x278($s0)
    MEM_W(0X278, ctx->r16) = ctx->f8.u32l;
    // 0x1512F0F4: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x1512F0F8: lw          $t9, 0x5F0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5F0);
    // 0x1512F0FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512F100: lh          $t2, 0x0($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X0);
    // 0x1512F104: ori         $t1, $t9, 0x4
    ctx->r9 = ctx->r25 | 0X4;
    // 0x1512F108: lw          $a1, 0x3D0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3D0);
    // 0x1512F10C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x1512F110: nop

    // 0x1512F114: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512F118: swc1        $f6, 0x288($s0)
    MEM_W(0X288, ctx->r16) = ctx->f6.u32l;
    // 0x1512F11C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x1512F120: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x1512F124: lh          $t6, 0x2($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X2);
    // 0x1512F128: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1512F12C: nop

    // 0x1512F130: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512F134: swc1        $f8, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f8.u32l;
    // 0x1512F138: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1512F13C: lwc1        $f2, 0x28C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28C);
    // 0x1512F140: lh          $t8, 0x4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X4);
    // 0x1512F144: sw          $t1, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r9;
    // 0x1512F148: swc1        $f0, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f0.u32l;
    // 0x1512F14C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1512F150: swc1        $f0, 0x27C($s0)
    MEM_W(0X27C, ctx->r16) = ctx->f0.u32l;
    // 0x1512F154: swc1        $f2, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->f2.u32l;
    // 0x1512F158: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512F15C: swc1        $f2, 0x280($s0)
    MEM_W(0X280, ctx->r16) = ctx->f2.u32l;
    // 0x1512F160: swc1        $f6, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f6.u32l;
    // 0x1512F164: lwc1        $f12, 0x290($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X290);
    // 0x1512F168: swc1        $f12, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f12.u32l;
    // 0x1512F16C: jal         0x15128774
    // 0x1512F170: swc1        $f12, 0x284($s0)
    MEM_W(0X284, ctx->r16) = ctx->f12.u32l;
    func_15128774(rdram, ctx);
        goto after_21;
    // 0x1512F170: swc1        $f12, 0x284($s0)
    MEM_W(0X284, ctx->r16) = ctx->f12.u32l;
    after_21:
    // 0x1512F174: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1512F178: sb          $t5, 0x23C($s0)
    MEM_B(0X23C, ctx->r16) = ctx->r13;
    // 0x1512F17C: b           L_1512F224
    // 0x1512F180: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
        goto L_1512F224;
    // 0x1512F180: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x1512F184: lw          $t4, 0x1C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X1C);
L_1512F188:
    // 0x1512F188: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1512F18C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1512F190: sh          $t4, 0x272($s0)
    MEM_H(0X272, ctx->r16) = ctx->r12;
    // 0x1512F194: lw          $t2, -0x3FE0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3FE0);
    // 0x1512F198: addiu       $v0, $v0, -0x3FDC
    ctx->r2 = ADD32(ctx->r2, -0X3FDC);
    // 0x1512F19C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F1A0: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x1512F1A4: lh          $t3, 0x272($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X272);
    // 0x1512F1A8: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x1512F1AC: subu        $t6, $t6, $t3
    ctx->r14 = SUB32(ctx->r14, ctx->r11);
    // 0x1512F1B0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x1512F1B4: addu        $t8, $t6, $t2
    ctx->r24 = ADD32(ctx->r14, ctx->r10);
    // 0x1512F1B8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1512F1BC: lh          $t1, 0x0($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X0);
    // 0x1512F1C0: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x1512F1C4: nop

    // 0x1512F1C8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512F1CC: swc1        $f8, 0x288($s0)
    MEM_W(0X288, ctx->r16) = ctx->f8.u32l;
    // 0x1512F1D0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x1512F1D4: lh          $t4, 0x2($t5)
    ctx->r12 = MEM_H(ctx->r13, 0X2);
    // 0x1512F1D8: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x1512F1DC: nop

    // 0x1512F1E0: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512F1E4: swc1        $f6, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f6.u32l;
    // 0x1512F1E8: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x1512F1EC: lh          $t3, 0x4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X4);
    // 0x1512F1F0: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1512F1F4: nop

    // 0x1512F1F8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512F1FC: swc1        $f8, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f8.u32l;
    // 0x1512F200: lw          $t6, 0x20($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X20);
    // 0x1512F204: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x1512F208: bgez        $t6, L_1512F21C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1512F20C: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1512F21C;
    }
    // 0x1512F20C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512F210: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1512F214: nop

    // 0x1512F218: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_1512F21C:
    // 0x1512F21C: swc1        $f6, 0x278($s0)
    MEM_W(0X278, ctx->r16) = ctx->f6.u32l;
    // 0x1512F220: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
L_1512F224:
    // 0x1512F224: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_1512F228:
    // 0x1512F228: sh          $v1, 0x274($s0)
    MEM_H(0X274, ctx->r16) = ctx->r3;
    // 0x1512F22C: b           L_1512FDEC
    // 0x1512F230: sw          $t7, 0x6C8($s0)
    MEM_W(0X6C8, ctx->r16) = ctx->r15;
        goto L_1512FDEC;
    // 0x1512F230: sw          $t7, 0x6C8($s0)
    MEM_W(0X6C8, ctx->r16) = ctx->r15;
L_1512F234:
    // 0x1512F234: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x1512F238: bnel        $v0, $at, L_1512F2B4
    if (ctx->r2 != ctx->r1) {
        // 0x1512F23C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_1512F2B4;
    }
    goto skip_26;
    // 0x1512F23C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    skip_26:
    // 0x1512F240: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
    // 0x1512F244: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F248: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1512F24C: bgez        $t8, L_1512F260
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1512F250: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1512F260;
    }
    // 0x1512F250: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1512F254: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1512F258: nop

    // 0x1512F25C: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_1512F260:
    // 0x1512F260: swc1        $f10, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f10.u32l;
    // 0x1512F264: lw          $t9, 0x20($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X20);
    // 0x1512F268: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F26C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1512F270: bgez        $t9, L_1512F284
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1512F274: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1512F284;
    }
    // 0x1512F274: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1512F278: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1512F27C: nop

    // 0x1512F280: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_1512F284:
    // 0x1512F284: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
    // 0x1512F288: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x1512F28C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F290: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1512F294: bgez        $t1, L_1512F2A8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1512F298: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1512F2A8;
    }
    // 0x1512F298: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512F29C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1512F2A0: nop

    // 0x1512F2A4: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_1512F2A8:
    // 0x1512F2A8: b           L_1512FDEC
    // 0x1512F2AC: swc1        $f6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f6.u32l;
        goto L_1512FDEC;
    // 0x1512F2AC: swc1        $f6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f6.u32l;
    // 0x1512F2B0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_1512F2B4:
    // 0x1512F2B4: beq         $v0, $at, L_1512F2C4
    if (ctx->r2 == ctx->r1) {
        // 0x1512F2B8: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_1512F2C4;
    }
    // 0x1512F2B8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x1512F2BC: bnel        $v0, $at, L_1512F560
    if (ctx->r2 != ctx->r1) {
        // 0x1512F2C0: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_1512F560;
    }
    goto skip_27;
    // 0x1512F2C0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    skip_27:
L_1512F2C4:
    // 0x1512F2C4: jal         0x15083E0C
    // 0x1512F2C8: lbu         $a0, 0x1F($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X1F);
    func_15083E0C(rdram, ctx);
        goto after_22;
    // 0x1512F2C8: lbu         $a0, 0x1F($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X1F);
    after_22:
    // 0x1512F2CC: jal         0x1505EEF4
    // 0x1512F2D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_1505EEF4(rdram, ctx);
        goto after_23;
    // 0x1512F2D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_23:
    // 0x1512F2D4: beq         $v0, $zero, L_1512FDEC
    if (ctx->r2 == 0) {
        // 0x1512F2D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1512FDEC;
    }
    // 0x1512F2D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512F2DC: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512F2E0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x1512F2E4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1512F2E8: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x1512F2EC: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x1512F2F0: jal         0x15123934
    // 0x1512F2F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_24;
    // 0x1512F2F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_24:
    // 0x1512F2F8: beq         $v0, $zero, L_1512F408
    if (ctx->r2 == 0) {
        // 0x1512F2FC: lw          $v1, 0x5C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X5C);
            goto L_1512F408;
    }
    // 0x1512F2FC: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x1512F300: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x1512F304: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x1512F308: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1512F30C: bne         $t4, $at, L_1512F334
    if (ctx->r12 != ctx->r1) {
        // 0x1512F310: addiu       $t2, $t2, -0x3D30
        ctx->r10 = ADD32(ctx->r10, -0X3D30);
            goto L_1512F334;
    }
    // 0x1512F310: addiu       $t2, $t2, -0x3D30
    ctx->r10 = ADD32(ctx->r10, -0X3D30);
    // 0x1512F314: subu        $a1, $v1, $t2
    ctx->r5 = SUB32(ctx->r3, ctx->r10);
    // 0x1512F318: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1512F31C: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x1512F320: mflo        $a1
    ctx->r5 = lo;
    // 0x1512F324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512F328: jal         0x151254F4
    // 0x1512F32C: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    func_151254F4(rdram, ctx);
        goto after_25;
    // 0x1512F32C: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_25:
    // 0x1512F330: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
L_1512F334:
    // 0x1512F334: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1512F338: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x1512F33C: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x1512F340: addiu       $t8, $s0, 0x618
    ctx->r24 = ADD32(ctx->r16, 0X618);
    // 0x1512F344: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1512F348: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x1512F34C: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x1512F350: sw          $zero, 0x628($s0)
    MEM_W(0X628, ctx->r16) = 0;
    // 0x1512F354: sw          $t8, 0x614($s0)
    MEM_W(0X614, ctx->r16) = ctx->r24;
    // 0x1512F358: sw          $t9, 0x6C8($s0)
    MEM_W(0X6C8, ctx->r16) = ctx->r25;
    // 0x1512F35C: swc1        $f16, 0x62C($s0)
    MEM_W(0X62C, ctx->r16) = ctx->f16.u32l;
    // 0x1512F360: swc1        $f16, 0x5DC($s0)
    MEM_W(0X5DC, ctx->r16) = ctx->f16.u32l;
    // 0x1512F364: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1512F368: lwc1        $f8, 0x2F8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x1512F36C: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1512F370: lwc1        $f4, 0x300($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X300);
    // 0x1512F374: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1512F378: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512F37C: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1512F380: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1512F384: lwc1        $f6, 0x3744($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3744);
    // 0x1512F388: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1512F38C: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1512F390: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1512F394: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x1512F398: lwc1        $f4, 0x37C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x1512F39C: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    // 0x1512F3A0: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1512F3A4: jal         0x15047D60
    // 0x1512F3A8: nop

    sinf_recomp(rdram, ctx);
        goto after_26;
    // 0x1512F3A8: nop

    after_26:
    // 0x1512F3AC: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1512F3B0: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x1512F3B4: lwc1        $f6, 0x2A4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2A4);
    // 0x1512F3B8: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1512F3BC: lwc1        $f10, 0x2A8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2A8);
    // 0x1512F3C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512F3C4: swc1        $f10, 0x61C($s0)
    MEM_W(0X61C, ctx->r16) = ctx->f10.u32l;
    // 0x1512F3C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1512F3CC: lwc1        $f4, 0x37C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x1512F3D0: swc1        $f8, 0x618($s0)
    MEM_W(0X618, ctx->r16) = ctx->f8.u32l;
    // 0x1512F3D4: lwc1        $f6, 0x3748($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3748);
    // 0x1512F3D8: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1512F3DC: jal         0x15047C00
    // 0x1512F3E0: nop

    cosf_recomp(rdram, ctx);
        goto after_27;
    // 0x1512F3E0: nop

    after_27:
    // 0x1512F3E4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1512F3E8: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x1512F3EC: lwc1        $f6, 0x2AC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x1512F3F0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1512F3F4: lwc1        $f10, 0x37C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x1512F3F8: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x1512F3FC: swc1        $f10, 0x384($s0)
    MEM_W(0X384, ctx->r16) = ctx->f10.u32l;
    // 0x1512F400: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1512F404: swc1        $f8, 0x620($s0)
    MEM_W(0X620, ctx->r16) = ctx->f8.u32l;
L_1512F408:
    // 0x1512F408: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x1512F40C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x1512F410: bnel        $t1, $at, L_1512F46C
    if (ctx->r9 != ctx->r1) {
        // 0x1512F414: lbu         $t3, 0x23C($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X23C);
            goto L_1512F46C;
    }
    goto skip_28;
    // 0x1512F414: lbu         $t3, 0x23C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X23C);
    skip_28:
    // 0x1512F418: lbu         $t5, 0x23D($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X23D);
    // 0x1512F41C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1512F420: addiu       $t2, $t2, -0x3D30
    ctx->r10 = ADD32(ctx->r10, -0X3D30);
    // 0x1512F424: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x1512F428: subu        $t4, $t4, $t5
    ctx->r12 = SUB32(ctx->r12, ctx->r13);
    // 0x1512F42C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1512F430: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x1512F434: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1512F438: subu        $t4, $t4, $t5
    ctx->r12 = SUB32(ctx->r12, ctx->r13);
    // 0x1512F43C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1512F440: subu        $t4, $t4, $t5
    ctx->r12 = SUB32(ctx->r12, ctx->r13);
    // 0x1512F444: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1512F448: addu        $v0, $t4, $t2
    ctx->r2 = ADD32(ctx->r12, ctx->r10);
    // 0x1512F44C: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1512F450: swc1        $f4, 0x618($s0)
    MEM_W(0X618, ctx->r16) = ctx->f4.u32l;
    // 0x1512F454: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1512F458: swc1        $f6, 0x61C($s0)
    MEM_W(0X61C, ctx->r16) = ctx->f6.u32l;
    // 0x1512F45C: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1512F460: b           L_1512F4E0
    // 0x1512F464: swc1        $f8, 0x620($s0)
    MEM_W(0X620, ctx->r16) = ctx->f8.u32l;
        goto L_1512F4E0;
    // 0x1512F464: swc1        $f8, 0x620($s0)
    MEM_W(0X620, ctx->r16) = ctx->f8.u32l;
    // 0x1512F468: lbu         $t3, 0x23C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X23C);
L_1512F46C:
    // 0x1512F46C: beql        $t3, $zero, L_1512F494
    if (ctx->r11 == 0) {
        // 0x1512F470: lwc1        $f0, 0x618($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X618);
            goto L_1512F494;
    }
    goto skip_29;
    // 0x1512F470: lwc1        $f0, 0x618($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X618);
    skip_29:
    // 0x1512F474: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1512F478: swc1        $f10, 0x618($s0)
    MEM_W(0X618, ctx->r16) = ctx->f10.u32l;
    // 0x1512F47C: lwc1        $f4, 0x18($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1512F480: swc1        $f4, 0x61C($s0)
    MEM_W(0X61C, ctx->r16) = ctx->f4.u32l;
    // 0x1512F484: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1512F488: b           L_1512F4E0
    // 0x1512F48C: swc1        $f6, 0x620($s0)
    MEM_W(0X620, ctx->r16) = ctx->f6.u32l;
        goto L_1512F4E0;
    // 0x1512F48C: swc1        $f6, 0x620($s0)
    MEM_W(0X620, ctx->r16) = ctx->f6.u32l;
    // 0x1512F490: lwc1        $f0, 0x618($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X618);
L_1512F494:
    // 0x1512F494: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1512F498: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512F49C: lwc1        $f16, 0x374C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X374C);
    // 0x1512F4A0: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x1512F4A4: lwc1        $f2, 0x61C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X61C);
    // 0x1512F4A8: lwc1        $f12, 0x620($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X620);
    // 0x1512F4AC: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1512F4B0: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x1512F4B4: swc1        $f6, 0x618($s0)
    MEM_W(0X618, ctx->r16) = ctx->f6.u32l;
    // 0x1512F4B8: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1512F4BC: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x1512F4C0: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1512F4C4: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1512F4C8: swc1        $f6, 0x61C($s0)
    MEM_W(0X61C, ctx->r16) = ctx->f6.u32l;
    // 0x1512F4CC: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1512F4D0: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x1512F4D4: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1512F4D8: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x1512F4DC: swc1        $f6, 0x620($s0)
    MEM_W(0X620, ctx->r16) = ctx->f6.u32l;
L_1512F4E0:
    // 0x1512F4E0: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x1512F4E4: beq         $v1, $zero, L_1512F514
    if (ctx->r3 == 0) {
        // 0x1512F4E8: nop
    
            goto L_1512F514;
    }
    // 0x1512F4E8: nop

    // 0x1512F4EC: lw          $t6, 0x20($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X20);
    // 0x1512F4F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F4F4: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1512F4F8: bgez        $t6, L_1512F50C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1512F4FC: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1512F50C;
    }
    // 0x1512F4FC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1512F500: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1512F504: nop

    // 0x1512F508: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_1512F50C:
    // 0x1512F50C: swc1        $f10, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f10.u32l;
    // 0x1512F510: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
L_1512F514:
    // 0x1512F514: beql        $v1, $zero, L_1512FDF0
    if (ctx->r3 == 0) {
        // 0x1512F518: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1512FDF0;
    }
    goto skip_30;
    // 0x1512F518: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_30:
    // 0x1512F51C: lwc1        $f6, 0x2A8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2A8);
    // 0x1512F520: lwc1        $f8, 0x61C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X61C);
    // 0x1512F524: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x1512F528: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F52C: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1512F530: bgez        $v1, L_1512F544
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1512F534: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1512F544;
    }
    // 0x1512F534: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512F538: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512F53C: nop

    // 0x1512F540: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1512F544:
    // 0x1512F544: sub.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x1512F548: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x1512F54C: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x1512F550: sh          $t7, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r15;
    // 0x1512F554: b           L_1512FDF0
    // 0x1512F558: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1512FDF0;
    // 0x1512F558: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1512F55C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
L_1512F560:
    // 0x1512F560: bnel        $v0, $at, L_1512F5B8
    if (ctx->r2 != ctx->r1) {
        // 0x1512F564: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1512F5B8;
    }
    goto skip_31;
    // 0x1512F564: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_31:
    // 0x1512F568: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512F56C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x1512F570: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1512F574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512F578: lui         $a1, 0x80
    ctx->r5 = S32(0X80 << 16);
    // 0x1512F57C: jal         0x15123934
    // 0x1512F580: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_28;
    // 0x1512F580: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_28:
    // 0x1512F584: beq         $v0, $zero, L_1512FDEC
    if (ctx->r2 == 0) {
        // 0x1512F588: addiu       $at, $zero, -0x9
        ctx->r1 = ADD32(0, -0X9);
            goto L_1512FDEC;
    }
    // 0x1512F588: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x1512F58C: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x1512F590: sw          $zero, 0x134($s0)
    MEM_W(0X134, ctx->r16) = 0;
    // 0x1512F594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512F598: ori         $t1, $t9, 0x200
    ctx->r9 = ctx->r25 | 0X200;
    // 0x1512F59C: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    // 0x1512F5A0: and         $t4, $t1, $at
    ctx->r12 = ctx->r9 & ctx->r1;
    // 0x1512F5A4: jal         0x1512DD50
    // 0x1512F5A8: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
    func_1512DD50(rdram, ctx);
        goto after_29;
    // 0x1512F5A8: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
    after_29:
    // 0x1512F5AC: b           L_1512FDF0
    // 0x1512F5B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1512FDF0;
    // 0x1512F5B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1512F5B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_1512F5B8:
    // 0x1512F5B8: bne         $v0, $at, L_1512F6BC
    if (ctx->r2 != ctx->r1) {
        // 0x1512F5BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1512F6BC;
    }
    // 0x1512F5BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512F5C0: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512F5C4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x1512F5C8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1512F5CC: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x1512F5D0: jal         0x15123934
    // 0x1512F5D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_30;
    // 0x1512F5D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_30:
    // 0x1512F5D8: beq         $v0, $zero, L_1512F658
    if (ctx->r2 == 0) {
        // 0x1512F5DC: addiu       $t7, $s0, 0x618
        ctx->r15 = ADD32(ctx->r16, 0X618);
            goto L_1512F658;
    }
    // 0x1512F5DC: addiu       $t7, $s0, 0x618
    ctx->r15 = ADD32(ctx->r16, 0X618);
    // 0x1512F5E0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1512F5E4: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x1512F5E8: sw          $zero, 0x628($s0)
    MEM_W(0X628, ctx->r16) = 0;
    // 0x1512F5EC: sw          $t7, 0x614($s0)
    MEM_W(0X614, ctx->r16) = ctx->r15;
    // 0x1512F5F0: ori         $t6, $t3, 0x8
    ctx->r14 = ctx->r11 | 0X8;
    // 0x1512F5F4: sw          $t6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r14;
    // 0x1512F5F8: swc1        $f16, 0x62C($s0)
    MEM_W(0X62C, ctx->r16) = ctx->f16.u32l;
    // 0x1512F5FC: swc1        $f16, 0x5DC($s0)
    MEM_W(0X5DC, ctx->r16) = ctx->f16.u32l;
    // 0x1512F600: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
    // 0x1512F604: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F608: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1512F60C: bgez        $t8, L_1512F620
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1512F610: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1512F620;
    }
    // 0x1512F610: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512F614: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512F618: nop

    // 0x1512F61C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_1512F620:
    // 0x1512F620: swc1        $f8, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f8.u32l;
    // 0x1512F624: lw          $t9, 0x20($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X20);
    // 0x1512F628: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F62C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1512F630: bgez        $t9, L_1512F644
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1512F634: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1512F644;
    }
    // 0x1512F634: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512F638: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512F63C: nop

    // 0x1512F640: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_1512F644:
    // 0x1512F644: swc1        $f10, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f10.u32l;
    // 0x1512F648: lw          $t1, 0x20($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X20);
    // 0x1512F64C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1512F650: sh          $t1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r9;
    // 0x1512F654: sw          $t5, 0x6C8($s0)
    MEM_W(0X6C8, ctx->r16) = ctx->r13;
L_1512F658:
    // 0x1512F658: lh          $t4, 0x10($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X10);
    // 0x1512F65C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F660: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x1512F664: nop

    // 0x1512F668: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1512F66C: swc1        $f4, 0x618($s0)
    MEM_W(0X618, ctx->r16) = ctx->f4.u32l;
    // 0x1512F670: lh          $t2, 0x12($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X12);
    // 0x1512F674: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x1512F678: nop

    // 0x1512F67C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1512F680: swc1        $f10, 0x61C($s0)
    MEM_W(0X61C, ctx->r16) = ctx->f10.u32l;
    // 0x1512F684: lh          $t3, 0x14($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X14);
    // 0x1512F688: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x1512F68C: nop

    // 0x1512F690: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1512F694: swc1        $f4, 0x620($s0)
    MEM_W(0X620, ctx->r16) = ctx->f4.u32l;
    // 0x1512F698: lw          $t6, 0x1C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X1C);
    // 0x1512F69C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1512F6A0: bgez        $t6, L_1512F6B4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1512F6A4: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1512F6B4;
    }
    // 0x1512F6A4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1512F6A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512F6AC: nop

    // 0x1512F6B0: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_1512F6B4:
    // 0x1512F6B4: b           L_1512FDEC
    // 0x1512F6B8: swc1        $f10, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f10.u32l;
        goto L_1512FDEC;
    // 0x1512F6B8: swc1        $f10, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f10.u32l;
L_1512F6BC:
    // 0x1512F6BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1512F6C0: bne         $v0, $at, L_1512F848
    if (ctx->r2 != ctx->r1) {
        // 0x1512F6C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1512F848;
    }
    // 0x1512F6C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512F6C8: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512F6CC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1512F6D0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1512F6D4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x1512F6D8: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x1512F6DC: jal         0x15123934
    // 0x1512F6E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_31;
    // 0x1512F6E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_31:
    // 0x1512F6E4: beq         $v0, $zero, L_1512F73C
    if (ctx->r2 == 0) {
        // 0x1512F6E8: lw          $v1, 0x3C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X3C);
            goto L_1512F73C;
    }
    // 0x1512F6E8: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512F6EC: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
    // 0x1512F6F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F6F4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1512F6F8: bgez        $t8, L_1512F70C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1512F6FC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1512F70C;
    }
    // 0x1512F6FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512F700: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512F704: nop

    // 0x1512F708: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1512F70C:
    // 0x1512F70C: swc1        $f6, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f6.u32l;
    // 0x1512F710: lw          $t9, 0x20($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X20);
    // 0x1512F714: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F718: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1512F71C: bgez        $t9, L_1512F730
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1512F720: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1512F730;
    }
    // 0x1512F720: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512F724: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512F728: nop

    // 0x1512F72C: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_1512F730:
    // 0x1512F730: swc1        $f4, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f4.u32l;
    // 0x1512F734: lw          $t1, 0x20($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X20);
    // 0x1512F738: sh          $t1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r9;
L_1512F73C:
    // 0x1512F73C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1512F740: sw          $t5, 0x6C8($s0)
    MEM_W(0X6C8, ctx->r16) = ctx->r13;
    // 0x1512F744: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x1512F748: jal         0x1512E140
    // 0x1512F74C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1512E140(rdram, ctx);
        goto after_32;
    // 0x1512F74C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x1512F750: lwc1        $f6, 0x2F8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x1512F754: lwc1        $f10, 0x2A4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2A4);
    // 0x1512F758: lwc1        $f8, 0x300($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X300);
    // 0x1512F75C: lwc1        $f4, 0x2AC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x1512F760: sub.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x1512F764: lwc1        $f14, 0x374($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X374);
    // 0x1512F768: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512F76C: sub.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1512F770: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1512F774: nop

    // 0x1512F778: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1512F77C: add.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1512F780: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1512F784: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x1512F788: swc1        $f0, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->f0.u32l;
    // 0x1512F78C: bc1f        L_1512F830
    if (!c1cs) {
        // 0x1512F790: nop
    
            goto L_1512F830;
    }
    // 0x1512F790: nop

    // 0x1512F794: lwc1        $f8, 0x370($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X370);
    // 0x1512F798: sub.s       $f4, $f14, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x1512F79C: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x1512F7A0: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    // 0x1512F7A4: jal         0x150AD78C
    // 0x1512F7A8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_150AD78C(rdram, ctx);
        goto after_33;
    // 0x1512F7A8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_33:
    // 0x1512F7AC: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512F7B0: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1512F7B4: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    // 0x1512F7B8: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1512F7BC: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1512F7C0: lwc1        $f6, 0x2F8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x1512F7C4: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1512F7C8: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1512F7CC: jal         0x150AD780
    // 0x1512F7D0: swc1        $f10, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f10.u32l;
    func_150AD780(rdram, ctx);
        goto after_34;
    // 0x1512F7D0: swc1        $f10, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f10.u32l;
    after_34:
    // 0x1512F7D4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512F7D8: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1512F7DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512F7E0: lwc1        $f6, 0x14($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1512F7E4: lwc1        $f16, 0x3750($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3750);
    // 0x1512F7E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512F7EC: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1512F7F0: lwc1        $f8, 0x300($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X300);
    // 0x1512F7F4: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1512F7F8: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1512F7FC: swc1        $f6, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f6.u32l;
    // 0x1512F800: lwc1        $f8, 0x3754($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3754);
    // 0x1512F804: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1512F808: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1512F80C: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    // 0x1512F810: lwc1        $f2, 0x14($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1512F814: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x1512F818: nop

    // 0x1512F81C: bc1fl       L_1512F830
    if (!c1cs) {
        // 0x1512F820: swc1        $f2, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f2.u32l;
            goto L_1512F830;
    }
    goto skip_32;
    // 0x1512F820: swc1        $f2, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f2.u32l;
    skip_32:
    // 0x1512F824: b           L_1512F830
    // 0x1512F828: swc1        $f16, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f16.u32l;
        goto L_1512F830;
    // 0x1512F828: swc1        $f16, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f16.u32l;
    // 0x1512F82C: swc1        $f2, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f2.u32l;
L_1512F830:
    // 0x1512F830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512F834: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1512F838: jal         0x151287E0
    // 0x1512F83C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_151287E0(rdram, ctx);
        goto after_35;
    // 0x1512F83C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_35:
    // 0x1512F840: b           L_1512FDF0
    // 0x1512F844: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1512FDF0;
    // 0x1512F844: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1512F848:
    // 0x1512F848: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1512F84C: beql        $v0, $at, L_1512F860
    if (ctx->r2 == ctx->r1) {
        // 0x1512F850: lh          $t4, 0x10($s1)
        ctx->r12 = MEM_H(ctx->r17, 0X10);
            goto L_1512F860;
    }
    goto skip_33;
    // 0x1512F850: lh          $t4, 0x10($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X10);
    skip_33:
    // 0x1512F854: bnel        $v0, $zero, L_1512FB34
    if (ctx->r2 != 0) {
        // 0x1512F858: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_1512FB34;
    }
    goto skip_34;
    // 0x1512F858: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    skip_34:
    // 0x1512F85C: lh          $t4, 0x10($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X10);
L_1512F860:
    // 0x1512F860: lh          $t2, 0x14($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X14);
    // 0x1512F864: lwc1        $f6, 0x2F8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x1512F868: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1512F86C: lwc1        $f10, 0x300($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X300);
    // 0x1512F870: lw          $t3, 0x6C8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X6C8);
    // 0x1512F874: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512F878: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x1512F87C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512F880: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1512F884: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1512F888: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1512F88C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512F890: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1512F894: sub.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1512F898: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1512F89C: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1512F8A0: beq         $t3, $zero, L_1512F8B0
    if (ctx->r11 == 0) {
        // 0x1512F8A4: sqrt.s      $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = sqrtf(ctx->f0.fl);
            goto L_1512F8B0;
    }
    // 0x1512F8A4: sqrt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = sqrtf(ctx->f0.fl);
    // 0x1512F8A8: bnel        $v0, $zero, L_1512F960
    if (ctx->r2 != 0) {
        // 0x1512F8AC: lw          $t8, 0x1C($s1)
        ctx->r24 = MEM_W(ctx->r17, 0X1C);
            goto L_1512F960;
    }
    goto skip_35;
    // 0x1512F8AC: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
    skip_35:
L_1512F8B0:
    // 0x1512F8B0: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1512F8B4: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512F8B8: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x1512F8BC: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x1512F8C0: jal         0x15123934
    // 0x1512F8C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15123934(rdram, ctx);
        goto after_36;
    // 0x1512F8C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_36:
    // 0x1512F8C8: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512F8CC: beq         $v0, $zero, L_1512F95C
    if (ctx->r2 == 0) {
        // 0x1512F8D0: lwc1        $f16, 0x4C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_1512F95C;
    }
    // 0x1512F8D0: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1512F8D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1512F8D8: sw          $t7, 0x6C8($s0)
    MEM_W(0X6C8, ctx->r16) = ctx->r15;
    // 0x1512F8DC: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
    // 0x1512F8E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F8E4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1512F8E8: bgez        $t8, L_1512F8FC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1512F8EC: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1512F8FC;
    }
    // 0x1512F8EC: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512F8F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512F8F4: nop

    // 0x1512F8F8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1512F8FC:
    // 0x1512F8FC: swc1        $f6, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f6.u32l;
    // 0x1512F900: lw          $t9, 0x20($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X20);
    // 0x1512F904: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F908: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1512F90C: bgez        $t9, L_1512F920
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1512F910: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1512F920;
    }
    // 0x1512F910: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512F914: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512F918: nop

    // 0x1512F91C: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_1512F920:
    // 0x1512F920: swc1        $f10, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f10.u32l;
    // 0x1512F924: lw          $t1, 0x20($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X20);
    // 0x1512F928: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x1512F92C: sh          $t1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r9;
    // 0x1512F930: lw          $t5, 0x84($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X84);
    // 0x1512F934: and         $t4, $t5, $at
    ctx->r12 = ctx->r13 & ctx->r1;
    // 0x1512F938: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
    // 0x1512F93C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x1512F940: bnel        $t2, $zero, L_1512F960
    if (ctx->r10 != 0) {
        // 0x1512F944: lw          $t8, 0x1C($s1)
        ctx->r24 = MEM_W(ctx->r17, 0X1C);
            goto L_1512F960;
    }
    goto skip_36;
    // 0x1512F944: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
    skip_36:
    // 0x1512F948: lh          $t3, 0x4($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X4);
    // 0x1512F94C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1512F950: sw          $t7, 0x738($s0)
    MEM_W(0X738, ctx->r16) = ctx->r15;
    // 0x1512F954: ori         $t6, $t3, 0x4000
    ctx->r14 = ctx->r11 | 0X4000;
    // 0x1512F958: sw          $t6, 0x734($s0)
    MEM_W(0X734, ctx->r16) = ctx->r14;
L_1512F95C:
    // 0x1512F95C: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
L_1512F960:
    // 0x1512F960: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F964: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x1512F968: bgez        $t8, L_1512F97C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1512F96C: cvt.s.w     $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1512F97C;
    }
    // 0x1512F96C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1512F970: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512F974: nop

    // 0x1512F978: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_1512F97C:
    // 0x1512F97C: swc1        $f4, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f4.u32l;
    // 0x1512F980: lw          $t9, 0x20($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X20);
    // 0x1512F984: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1512F988: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1512F98C: bgez        $t9, L_1512F9A0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1512F990: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1512F9A0;
    }
    // 0x1512F990: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512F994: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512F998: nop

    // 0x1512F99C: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_1512F9A0:
    // 0x1512F9A0: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
    // 0x1512F9A4: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x1512F9A8: lw          $t1, 0x20($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X20);
    // 0x1512F9AC: sh          $t1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r9;
    // 0x1512F9B0: lwc1        $f14, 0x374($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X374);
    // 0x1512F9B4: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x1512F9B8: nop

    // 0x1512F9BC: bc1fl       L_1512FA70
    if (!c1cs) {
        // 0x1512F9C0: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_1512FA70;
    }
    goto skip_37;
    // 0x1512F9C0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_37:
    // 0x1512F9C4: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x1512F9C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1512F9CC: bnel        $t5, $at, L_1512FA70
    if (ctx->r13 != ctx->r1) {
        // 0x1512F9D0: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_1512FA70;
    }
    goto skip_38;
    // 0x1512F9D0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_38:
    // 0x1512F9D4: sub.s       $f8, $f14, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x1512F9D8: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x1512F9DC: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    // 0x1512F9E0: jal         0x150AD78C
    // 0x1512F9E4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_150AD78C(rdram, ctx);
        goto after_37;
    // 0x1512F9E4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_37:
    // 0x1512F9E8: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512F9EC: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1512F9F0: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    // 0x1512F9F4: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1512F9F8: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1512F9FC: lwc1        $f4, 0x2F8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x1512FA00: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1512FA04: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1512FA08: jal         0x150AD780
    // 0x1512FA0C: swc1        $f10, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f10.u32l;
    func_150AD780(rdram, ctx);
        goto after_38;
    // 0x1512FA0C: swc1        $f10, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f10.u32l;
    after_38:
    // 0x1512FA10: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512FA14: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1512FA18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512FA1C: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1512FA20: lwc1        $f16, 0x3758($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3758);
    // 0x1512FA24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512FA28: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1512FA2C: lwc1        $f6, 0x300($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X300);
    // 0x1512FA30: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1512FA34: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1512FA38: swc1        $f4, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f4.u32l;
    // 0x1512FA3C: lwc1        $f6, 0x375C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X375C);
    // 0x1512FA40: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1512FA44: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1512FA48: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    // 0x1512FA4C: lwc1        $f2, 0x14($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1512FA50: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x1512FA54: nop

    // 0x1512FA58: bc1fl       L_1512FA6C
    if (!c1cs) {
        // 0x1512FA5C: swc1        $f2, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f2.u32l;
            goto L_1512FA6C;
    }
    goto skip_39;
    // 0x1512FA5C: swc1        $f2, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f2.u32l;
    skip_39:
    // 0x1512FA60: b           L_1512FA6C
    // 0x1512FA64: swc1        $f16, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f16.u32l;
        goto L_1512FA6C;
    // 0x1512FA64: swc1        $f16, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f16.u32l;
    // 0x1512FA68: swc1        $f2, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f2.u32l;
L_1512FA6C:
    // 0x1512FA6C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_1512FA70:
    // 0x1512FA70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512FA74: lwc1        $f16, 0x3760($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3760);
    // 0x1512FA78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1512FA7C: bne         $v0, $at, L_1512FB04
    if (ctx->r2 != ctx->r1) {
        // 0x1512FA80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1512FB04;
    }
    // 0x1512FA80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FA84: lh          $t4, 0x10($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X10);
    // 0x1512FA88: lwc1        $f12, 0x18($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1512FA8C: lwc1        $f14, 0x20($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X20);
    // 0x1512FA90: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1512FA94: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1512FA98: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1512FA9C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512FAA0: sub.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x1512FAA4: mul.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x1512FAA8: add.s       $f4, $f12, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x1512FAAC: swc1        $f4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f4.u32l;
    // 0x1512FAB0: lh          $t2, 0x14($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X14);
    // 0x1512FAB4: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x1512FAB8: nop

    // 0x1512FABC: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1512FAC0: sub.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x1512FAC4: lwc1        $f6, 0x18($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1512FAC8: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1512FACC: add.s       $f8, $f14, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x1512FAD0: swc1        $f8, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f8.u32l;
    // 0x1512FAD4: lwc1        $f0, 0x2A4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2A4);
    // 0x1512FAD8: lwc1        $f2, 0x2AC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x1512FADC: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x1512FAE0: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1512FAE4: add.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x1512FAE8: swc1        $f8, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->f8.u32l;
    // 0x1512FAEC: lwc1        $f6, 0x20($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X20);
    // 0x1512FAF0: sub.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x1512FAF4: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1512FAF8: add.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1512FAFC: swc1        $f8, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f8.u32l;
    // 0x1512FB00: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_1512FB04:
    // 0x1512FB04: beql        $v0, $zero, L_1512FDF0
    if (ctx->r2 == 0) {
        // 0x1512FB08: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1512FDF0;
    }
    goto skip_40;
    // 0x1512FB08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_40:
    // 0x1512FB0C: jal         0x1512E140
    // 0x1512FB10: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_1512E140(rdram, ctx);
        goto after_39;
    // 0x1512FB10: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_39:
    // 0x1512FB14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FB18: jal         0x15124C38
    // 0x1512FB1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15124C38(rdram, ctx);
        goto after_40;
    // 0x1512FB1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_40:
    // 0x1512FB20: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512FB24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1512FB28: b           L_1512FDEC
    // 0x1512FB2C: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
        goto L_1512FDEC;
    // 0x1512FB2C: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
    // 0x1512FB30: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
L_1512FB34:
    // 0x1512FB34: bnel        $v0, $at, L_1512FB64
    if (ctx->r2 != ctx->r1) {
        // 0x1512FB38: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_1512FB64;
    }
    goto skip_41;
    // 0x1512FB38: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_41:
    // 0x1512FB3C: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x1512FB40: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x1512FB44: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1512FB48: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1512FB4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FB50: jal         0x15123934
    // 0x1512FB54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_41;
    // 0x1512FB54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_41:
    // 0x1512FB58: b           L_1512FDF0
    // 0x1512FB5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1512FDF0;
    // 0x1512FB5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1512FB60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_1512FB64:
    // 0x1512FB64: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1512FB68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FB6C: swc1        $f16, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f16.u32l;
    // 0x1512FB70: swc1        $f16, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f16.u32l;
    // 0x1512FB74: swc1        $f16, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f16.u32l;
    // 0x1512FB78: lh          $t6, 0x6CC($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X6CC);
    // 0x1512FB7C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x1512FB80: bnel        $t6, $zero, L_1512FB90
    if (ctx->r14 != 0) {
        // 0x1512FB84: lw          $t7, 0x6C8($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X6C8);
            goto L_1512FB90;
    }
    goto skip_42;
    // 0x1512FB84: lw          $t7, 0x6C8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X6C8);
    skip_42:
    // 0x1512FB88: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x1512FB8C: lw          $t7, 0x6C8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X6C8);
L_1512FB90:
    // 0x1512FB90: bnel        $t0, $t7, L_1512FBE4
    if (ctx->r8 != ctx->r15) {
        // 0x1512FB94: lw          $t9, 0x2C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X2C);
            goto L_1512FBE4;
    }
    goto skip_43;
    // 0x1512FB94: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
    skip_43:
    // 0x1512FB98: lh          $t8, 0x4($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4);
    // 0x1512FB9C: bnel        $t0, $t8, L_1512FBE4
    if (ctx->r8 != ctx->r24) {
        // 0x1512FBA0: lw          $t9, 0x2C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X2C);
            goto L_1512FBE4;
    }
    goto skip_44;
    // 0x1512FBA0: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
    skip_44:
    // 0x1512FBA4: lwc1        $f0, 0x2A4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2A4);
    // 0x1512FBA8: lwc1        $f6, 0x18($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1512FBAC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1512FBB0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1512FBB4: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x1512FBB8: lwc1        $f6, 0x20($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X20);
    // 0x1512FBBC: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1512FBC0: add.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x1512FBC4: swc1        $f8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f8.u32l;
    // 0x1512FBC8: lwc1        $f2, 0x2AC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x1512FBCC: swc1        $f16, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f16.u32l;
    // 0x1512FBD0: sub.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x1512FBD4: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1512FBD8: add.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1512FBDC: swc1        $f8, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f8.u32l;
    // 0x1512FBE0: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
L_1512FBE4:
    // 0x1512FBE4: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x1512FBE8: bnel        $t9, $at, L_1512FC0C
    if (ctx->r25 != ctx->r1) {
        // 0x1512FBEC: lw          $t5, 0x6C8($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X6C8);
            goto L_1512FC0C;
    }
    goto skip_45;
    // 0x1512FBEC: lw          $t5, 0x6C8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X6C8);
    skip_45:
    // 0x1512FBF0: sh          $t1, 0x272($s0)
    MEM_H(0X272, ctx->r16) = ctx->r9;
    // 0x1512FBF4: jal         0x151239CC
    // 0x1512FBF8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_151239CC(rdram, ctx);
        goto after_42;
    // 0x1512FBF8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_42:
    // 0x1512FBFC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1512FC00: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512FC04: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1512FC08: lw          $t5, 0x6C8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X6C8);
L_1512FC0C:
    // 0x1512FC0C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x1512FC10: bnel        $t0, $t5, L_1512FC68
    if (ctx->r8 != ctx->r13) {
        // 0x1512FC14: lbu         $t4, 0x23C($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X23C);
            goto L_1512FC68;
    }
    goto skip_46;
    // 0x1512FC14: lbu         $t4, 0x23C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X23C);
    skip_46:
    // 0x1512FC18: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x1512FC1C: bne         $v0, $zero, L_1512FC38
    if (ctx->r2 != 0) {
        // 0x1512FC20: nop
    
            goto L_1512FC38;
    }
    // 0x1512FC20: nop

    // 0x1512FC24: lwc1        $f6, 0x2A4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2A4);
    // 0x1512FC28: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x1512FC2C: swc1        $f6, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f6.u32l;
    // 0x1512FC30: lwc1        $f10, 0x2AC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x1512FC34: swc1        $f10, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f10.u32l;
L_1512FC38:
    // 0x1512FC38: bne         $v0, $at, L_1512FC64
    if (ctx->r2 != ctx->r1) {
        // 0x1512FC3C: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_1512FC64;
    }
    // 0x1512FC3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512FC40: lwc1        $f4, 0x3764($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3764);
    // 0x1512FC44: lbu         $a1, 0x23D($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X23D);
    // 0x1512FC48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FC4C: swc1        $f4, 0x670($s0)
    MEM_W(0X670, ctx->r16) = ctx->f4.u32l;
    // 0x1512FC50: jal         0x151254F4
    // 0x1512FC54: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_151254F4(rdram, ctx);
        goto after_43;
    // 0x1512FC54: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_43:
    // 0x1512FC58: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1512FC5C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1512FC60: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_1512FC64:
    // 0x1512FC64: lbu         $t4, 0x23C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X23C);
L_1512FC68:
    // 0x1512FC68: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x1512FC6C: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x1512FC70: beq         $t4, $zero, L_1512FC98
    if (ctx->r12 == 0) {
        // 0x1512FC74: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1512FC98;
    }
    // 0x1512FC74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FC78: lwc1        $f8, 0x2A4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2A4);
    // 0x1512FC7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1512FC80: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1512FC84: swc1        $f8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f8.u32l;
    // 0x1512FC88: lwc1        $f6, 0x2AC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x1512FC8C: swc1        $f2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f2.u32l;
    // 0x1512FC90: b           L_1512FCD4
    // 0x1512FC94: swc1        $f6, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f6.u32l;
        goto L_1512FCD4;
    // 0x1512FC94: swc1        $f6, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f6.u32l;
L_1512FC98:
    // 0x1512FC98: lwc1        $f12, 0x18($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1512FC9C: lwc1        $f10, 0x2A4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2A4);
    // 0x1512FCA0: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1512FCA4: lwc1        $f14, 0x20($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X20);
    // 0x1512FCA8: sub.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x1512FCAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1512FCB0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1512FCB4: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1512FCB8: add.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x1512FCBC: swc1        $f6, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f6.u32l;
    // 0x1512FCC0: lwc1        $f10, 0x2AC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x1512FCC4: sub.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x1512FCC8: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1512FCCC: add.s       $f6, $f14, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x1512FCD0: swc1        $f6, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f6.u32l;
L_1512FCD4:
    // 0x1512FCD4: lwc1        $f10, 0x18($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1512FCD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512FCDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1512FCE0: swc1        $f10, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->f10.u32l;
    // 0x1512FCE4: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x1512FCE8: swc1        $f4, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f4.u32l;
    // 0x1512FCEC: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1512FCF0: lwc1        $f6, 0x3768($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3768);
    // 0x1512FCF4: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1512FCF8: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x1512FCFC: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1512FD00: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1512FD04: nop

    // 0x1512FD08: bc1fl       L_1512FD1C
    if (!c1cs) {
        // 0x1512FD0C: swc1        $f0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
            goto L_1512FD1C;
    }
    goto skip_47;
    // 0x1512FD0C: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    skip_47:
    // 0x1512FD10: b           L_1512FD1C
    // 0x1512FD14: swc1        $f2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f2.u32l;
        goto L_1512FD1C;
    // 0x1512FD14: swc1        $f2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f2.u32l;
    // 0x1512FD18: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
L_1512FD1C:
    // 0x1512FD1C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1512FD20: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x1512FD24: nop

    // 0x1512FD28: bc1tl       L_1512FD48
    if (c1cs) {
        // 0x1512FD2C: sh          $zero, 0x8($v1)
        MEM_H(0X8, ctx->r3) = 0;
            goto L_1512FD48;
    }
    goto skip_48;
    // 0x1512FD2C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
    skip_48:
    // 0x1512FD30: lh          $t2, 0x4($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X4);
    // 0x1512FD34: bnel        $t0, $t2, L_1512FD48
    if (ctx->r8 != ctx->r10) {
        // 0x1512FD38: sh          $zero, 0x8($v1)
        MEM_H(0X8, ctx->r3) = 0;
            goto L_1512FD48;
    }
    goto skip_49;
    // 0x1512FD38: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
    skip_49:
    // 0x1512FD3C: b           L_1512FD48
    // 0x1512FD40: sh          $t0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r8;
        goto L_1512FD48;
    // 0x1512FD40: sh          $t0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r8;
    // 0x1512FD44: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
L_1512FD48:
    // 0x1512FD48: lw          $t3, 0x6C8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X6C8);
    // 0x1512FD4C: bnel        $t0, $t3, L_1512FDF0
    if (ctx->r8 != ctx->r11) {
        // 0x1512FD50: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1512FDF0;
    }
    goto skip_50;
    // 0x1512FD50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_50:
    // 0x1512FD54: sh          $t6, 0x272($s0)
    MEM_H(0X272, ctx->r16) = ctx->r14;
    // 0x1512FD58: sw          $zero, 0x614($s0)
    MEM_W(0X614, ctx->r16) = 0;
    // 0x1512FD5C: sw          $zero, 0x6C8($s0)
    MEM_W(0X6C8, ctx->r16) = 0;
    // 0x1512FD60: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
    // 0x1512FD64: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x1512FD68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1512FD6C: lwc1        $f8, 0x37C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x1512FD70: swc1        $f16, 0x8F0($s0)
    MEM_W(0X8F0, ctx->r16) = ctx->f16.u32l;
    // 0x1512FD74: swc1        $f16, 0x8F4($s0)
    MEM_W(0X8F4, ctx->r16) = ctx->f16.u32l;
    // 0x1512FD78: swc1        $f16, 0x8F8($s0)
    MEM_W(0X8F8, ctx->r16) = ctx->f16.u32l;
    // 0x1512FD7C: swc1        $f16, 0x8FC($s0)
    MEM_W(0X8FC, ctx->r16) = ctx->f16.u32l;
    // 0x1512FD80: swc1        $f16, 0x900($s0)
    MEM_W(0X900, ctx->r16) = ctx->f16.u32l;
    // 0x1512FD84: swc1        $f16, 0x904($s0)
    MEM_W(0X904, ctx->r16) = ctx->f16.u32l;
    // 0x1512FD88: swc1        $f16, 0x910($s0)
    MEM_W(0X910, ctx->r16) = ctx->f16.u32l;
    // 0x1512FD8C: swc1        $f16, 0x908($s0)
    MEM_W(0X908, ctx->r16) = ctx->f16.u32l;
    // 0x1512FD90: swc1        $f16, 0x918($s0)
    MEM_W(0X918, ctx->r16) = ctx->f16.u32l;
    // 0x1512FD94: swc1        $f16, 0x914($s0)
    MEM_W(0X914, ctx->r16) = ctx->f16.u32l;
    // 0x1512FD98: swc1        $f16, 0x90C($s0)
    MEM_W(0X90C, ctx->r16) = ctx->f16.u32l;
    // 0x1512FD9C: swc1        $f16, 0x91C($s0)
    MEM_W(0X91C, ctx->r16) = ctx->f16.u32l;
    // 0x1512FDA0: sh          $zero, 0x920($s0)
    MEM_H(0X920, ctx->r16) = 0;
    // 0x1512FDA4: sb          $zero, 0x92C($s0)
    MEM_B(0X92C, ctx->r16) = 0;
    // 0x1512FDA8: sb          $zero, 0x948($s0)
    MEM_B(0X948, ctx->r16) = 0;
    // 0x1512FDAC: swc1        $f8, 0x384($s0)
    MEM_W(0X384, ctx->r16) = ctx->f8.u32l;
    // 0x1512FDB0: swc1        $f0, 0x924($s0)
    MEM_W(0X924, ctx->r16) = ctx->f0.u32l;
    // 0x1512FDB4: jal         0x151239CC
    // 0x1512FDB8: swc1        $f0, 0x928($s0)
    MEM_W(0X928, ctx->r16) = ctx->f0.u32l;
    func_151239CC(rdram, ctx);
        goto after_44;
    // 0x1512FDB8: swc1        $f0, 0x928($s0)
    MEM_W(0X928, ctx->r16) = ctx->f0.u32l;
    after_44:
    // 0x1512FDBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FDC0: jal         0x151239CC
    // 0x1512FDC4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_151239CC(rdram, ctx);
        goto after_45;
    // 0x1512FDC4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_45:
    // 0x1512FDC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FDCC: jal         0x151239CC
    // 0x1512FDD0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_151239CC(rdram, ctx);
        goto after_46;
    // 0x1512FDD0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_46:
    // 0x1512FDD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FDD8: jal         0x151239CC
    // 0x1512FDDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_151239CC(rdram, ctx);
        goto after_47;
    // 0x1512FDDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_47:
    // 0x1512FDE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512FDE4: jal         0x151239CC
    // 0x1512FDE8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_151239CC(rdram, ctx);
        goto after_48;
    // 0x1512FDE8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_48:
L_1512FDEC:
    // 0x1512FDEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1512FDF0:
    // 0x1512FDF0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x1512FDF4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x1512FDF8: jr          $ra
    // 0x1512FDFC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x1512FDFC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_150486B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150486B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150486BC: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x150486C0: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x150486C4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x150486C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150486CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150486D0: bltz        $a1, L_150486E0
    if (SIGNED(ctx->r5) < 0) {
        // 0x150486D4: negu        $a0, $a1
        ctx->r4 = SUB32(0, ctx->r5);
            goto L_150486E0;
    }
    // 0x150486D4: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    // 0x150486D8: b           L_150486E0
    // 0x150486DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
        goto L_150486E0;
    // 0x150486DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_150486E0:
    // 0x150486E0: jal         0x150485E0
    // 0x150486E4: sh          $a1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r5;
    func_150485E0(rdram, ctx);
        goto after_0;
    // 0x150486E4: sh          $a1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r5;
    after_0:
    // 0x150486E8: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x150486EC: addiu       $at, $zero, -0x8000
    ctx->r1 = ADD32(0, -0X8000);
    // 0x150486F0: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    // 0x150486F4: bltz        $a1, L_15048708
    if (SIGNED(ctx->r5) < 0) {
        // 0x150486F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15048708;
    }
    // 0x150486F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150486FC: addiu       $t7, $zero, 0x7FFF
    ctx->r15 = ADD32(0, 0X7FFF);
    // 0x15048700: b           L_15048708
    // 0x15048704: subu        $a0, $t7, $v0
    ctx->r4 = SUB32(ctx->r15, ctx->r2);
        goto L_15048708;
    // 0x15048704: subu        $a0, $t7, $v0
    ctx->r4 = SUB32(ctx->r15, ctx->r2);
L_15048708:
    // 0x15048708: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x1504870C: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15048710: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x15048714: jr          $ra
    // 0x15048718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15048718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}

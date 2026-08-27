#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_15168F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15168F84: bne         $a0, $zero, L_15168FA0
    if (ctx->r4 != 0) {
        // 0x15168F88: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_15168FA0;
    }
    // 0x15168F88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15168F8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15168F90: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x15168F94: addiu       $t7, $zero, 0x41
    ctx->r15 = ADD32(0, 0X41);
    // 0x15168F98: jr          $ra
    // 0x15168F9C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    return;
    return;
    // 0x15168F9C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
L_15168FA0:
    // 0x15168FA0: bne         $a0, $at, L_15168FB8
    if (ctx->r4 != ctx->r1) {
        // 0x15168FA4: addiu       $t8, $zero, 0x42
        ctx->r24 = ADD32(0, 0X42);
            goto L_15168FB8;
    }
    // 0x15168FA4: addiu       $t8, $zero, 0x42
    ctx->r24 = ADD32(0, 0X42);
    // 0x15168FA8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x15168FAC: addiu       $t9, $zero, 0x4F
    ctx->r25 = ADD32(0, 0X4F);
    // 0x15168FB0: jr          $ra
    // 0x15168FB4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    return;
    return;
    // 0x15168FB4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
L_15168FB8:
    // 0x15168FB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15168FBC: bne         $a0, $at, L_15168FD4
    if (ctx->r4 != ctx->r1) {
        // 0x15168FC0: addiu       $t0, $zero, 0x50
        ctx->r8 = ADD32(0, 0X50);
            goto L_15168FD4;
    }
    // 0x15168FC0: addiu       $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
    // 0x15168FC4: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x15168FC8: addiu       $t1, $zero, 0x58
    ctx->r9 = ADD32(0, 0X58);
    // 0x15168FCC: jr          $ra
    // 0x15168FD0: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    return;
    return;
    // 0x15168FD0: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
L_15168FD4:
    // 0x15168FD4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15168FD8: bne         $a0, $at, L_15168FF0
    if (ctx->r4 != ctx->r1) {
        // 0x15168FDC: addiu       $t2, $zero, 0x59
        ctx->r10 = ADD32(0, 0X59);
            goto L_15168FF0;
    }
    // 0x15168FDC: addiu       $t2, $zero, 0x59
    ctx->r10 = ADD32(0, 0X59);
    // 0x15168FE0: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x15168FE4: addiu       $t3, $zero, 0x5C
    ctx->r11 = ADD32(0, 0X5C);
    // 0x15168FE8: jr          $ra
    // 0x15168FEC: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    return;
    return;
    // 0x15168FEC: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
L_15168FF0:
    // 0x15168FF0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15168FF4: bne         $a0, $at, L_1516900C
    if (ctx->r4 != ctx->r1) {
        // 0x15168FF8: addiu       $t4, $zero, 0x61
        ctx->r12 = ADD32(0, 0X61);
            goto L_1516900C;
    }
    // 0x15168FF8: addiu       $t4, $zero, 0x61
    ctx->r12 = ADD32(0, 0X61);
    // 0x15168FFC: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x15169000: addiu       $t5, $zero, 0x63
    ctx->r13 = ADD32(0, 0X63);
    // 0x15169004: jr          $ra
    // 0x15169008: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    return;
    return;
    // 0x15169008: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
L_1516900C:
    // 0x1516900C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15169010: bne         $a0, $at, L_1516902C
    if (ctx->r4 != ctx->r1) {
        // 0x15169014: addiu       $t8, $zero, 0x5D
        ctx->r24 = ADD32(0, 0X5D);
            goto L_1516902C;
    }
    // 0x15169014: addiu       $t8, $zero, 0x5D
    ctx->r24 = ADD32(0, 0X5D);
    // 0x15169018: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x1516901C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x15169020: addiu       $t7, $zero, 0x65
    ctx->r15 = ADD32(0, 0X65);
    // 0x15169024: jr          $ra
    // 0x15169028: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    return;
    return;
    // 0x15169028: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
L_1516902C:
    // 0x1516902C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x15169030: addiu       $t9, $zero, 0x60
    ctx->r25 = ADD32(0, 0X60);
    // 0x15169034: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x15169038: jr          $ra
    // 0x1516903C: nop

    return;
    return;
    // 0x1516903C: nop

;}
RECOMP_FUNC void func_150A7DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A7DA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150A7DA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150A7DA8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x150A7DAC: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x150A7DB0: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x150A7DB4: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x150A7DB8: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x150A7DBC: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x150A7DC0: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x150A7DC4: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x150A7DC8: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x150A7DCC: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x150A7DD0: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x150A7DD4: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x150A7DD8: sw          $a1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r5;
    // 0x150A7DDC: sw          $a2, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r6;
    // 0x150A7DE0: sw          $a3, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r7;
    // 0x150A7DE4: jr          $ra
    // 0x150A7DE8: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    return;
    return;
    // 0x150A7DE8: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x150A7DEC: nop

;}
RECOMP_FUNC void func_15143874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15143874: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15143878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514387C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15143880: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15143884: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15143888: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x1514388C: jal         0x151423D8
    // 0x15143890: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x15143890: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_0:
    // 0x15143894: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x15143898: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x1514389C: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151438A0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x151438A4: jal         0x151423D8
    // 0x151438A8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x151438A8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x151438AC: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151438B0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x151438B4: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x151438B8: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x151438BC: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x151438C0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x151438C4: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x151438C8: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x151438CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151438D0: jr          $ra
    // 0x151438D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151438D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1516706C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516706C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15167070: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15167074: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15167078: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1516707C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x15167080: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x15167084: addiu       $s1, $s1, -0x3490
    ctx->r17 = ADD32(ctx->r17, -0X3490);
    // 0x15167088: addiu       $s0, $s0, -0x349C
    ctx->r16 = ADD32(ctx->r16, -0X349C);
    // 0x1516708C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_15167090:
    // 0x15167090: beql        $v0, $zero, L_151670A4
    if (ctx->r2 == 0) {
        // 0x15167094: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_151670A4;
    }
    goto skip_0;
    // 0x15167094: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x15167098: jalr        $v0
    // 0x1516709C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x1516709C: nop

    after_0:
    // 0x151670A0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_151670A4:
    // 0x151670A4: bnel        $s0, $s1, L_15167090
    if (ctx->r16 != ctx->r17) {
        // 0x151670A8: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_15167090;
    }
    goto skip_1;
    // 0x151670A8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x151670AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151670B0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151670B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x151670B8: jr          $ra
    // 0x151670BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151670BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_15160090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15160090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15160094: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15160098: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1516009C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151600A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151600A4: lbu         $t7, 0x14($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X14);
    // 0x151600A8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151600AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151600B0: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x151600B4: lw          $v0, -0x4F1C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F1C);
    // 0x151600B8: beql        $v0, $zero, L_151600CC
    if (ctx->r2 == 0) {
        // 0x151600BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151600CC;
    }
    goto skip_0;
    // 0x151600BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151600C0: jalr        $v0
    // 0x151600C4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x151600C4: nop

    after_0:
    // 0x151600C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151600CC:
    // 0x151600CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151600D0: jr          $ra
    // 0x151600D4: nop

    return;
    return;
    // 0x151600D4: nop

;}
RECOMP_FUNC void func_150D8A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D8A34: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150D8A38: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150D8A3C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x150D8A40: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x150D8A44: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150D8A48: lw          $t6, 0x1D4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X1D4);
    // 0x150D8A4C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x150D8A50: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x150D8A54: beq         $t6, $zero, L_150D8AFC
    if (ctx->r14 == 0) {
        // 0x150D8A58: lbu         $a2, 0x47($sp)
        ctx->r6 = MEM_BU(ctx->r29, 0X47);
            goto L_150D8AFC;
    }
    // 0x150D8A58: lbu         $a2, 0x47($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X47);
    // 0x150D8A5C: jal         0x150D88E0
    // 0x150D8A60: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    func_150D88E0(rdram, ctx);
        goto after_0;
    // 0x150D8A60: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_0:
    // 0x150D8A64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D8A68: lwc1        $f4, 0xB30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XB30);
    // 0x150D8A6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D8A70: lwc1        $f6, 0xB34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XB34);
    // 0x150D8A74: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x150D8A78: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x150D8A7C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150D8A80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150D8A84: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150D8A88: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150D8A8C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x150D8A90: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x150D8A94: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x150D8A98: jal         0x151875E0
    // 0x150D8A9C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_151875E0(rdram, ctx);
        goto after_1;
    // 0x150D8A9C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x150D8AA0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x150D8AA4: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150D8AA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150D8AAC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D8AB0: lwc1        $f16, 0x180($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X180);
    // 0x150D8AB4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150D8AB8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150D8ABC: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x150D8AC0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150D8AC4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x150D8AC8: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x150D8ACC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150D8AD0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150D8AD4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x150D8AD8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150D8ADC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150D8AE0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150D8AE4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150D8AE8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150D8AEC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150D8AF0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150D8AF4: jal         0x15165F80
    // 0x150D8AF8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_15165F80(rdram, ctx);
        goto after_2;
    // 0x150D8AF8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_2:
L_150D8AFC:
    // 0x150D8AFC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150D8B00: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150D8B04: jr          $ra
    // 0x150D8B08: nop

    return;
    return;
    // 0x150D8B08: nop

;}
RECOMP_FUNC void func_15152B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15152B38: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x15152B3C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x15152B40: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x15152B44: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15152B48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15152B4C: andi        $s7, $a1, 0xFF
    ctx->r23 = ctx->r5 & 0XFF;
    // 0x15152B50: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x15152B54: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15152B58: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x15152B5C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x15152B60: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15152B64: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15152B68: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x15152B6C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15152B70: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x15152B74: jal         0x150ADA20
    // 0x15152B78: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15152B78: nop

    after_0:
    // 0x15152B7C: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x15152B80: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x15152B84: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15152B88: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x15152B8C: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x15152B90: addiu       $s4, $sp, 0x94
    ctx->r20 = ADD32(ctx->r29, 0X94);
    // 0x15152B94: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x15152B98: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x15152B9C: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x15152BA0: bne         $t7, $zero, L_15152BAC
    if (ctx->r15 != 0) {
        // 0x15152BA4: nop
    
            goto L_15152BAC;
    }
    // 0x15152BA4: nop

    // 0x15152BA8: break       7
    do_break(353708968);
L_15152BAC:
    // 0x15152BAC: sw          $t2, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r10;
    // 0x15152BB0: lw          $at, 0x10($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X10);
    // 0x15152BB4: mfhi        $t8
    ctx->r24 = hi;
    // 0x15152BB8: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x15152BBC: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x15152BC0: lhu         $t3, 0x40($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X40);
    // 0x15152BC4: sw          $t4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r12;
    // 0x15152BC8: addiu       $s6, $sp, 0x58
    ctx->r22 = ADD32(ctx->r29, 0X58);
    // 0x15152BCC: sh          $t3, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r11;
    // 0x15152BD0: lbu         $t5, 0x42($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X42);
    // 0x15152BD4: addiu       $s5, $sp, 0x5C
    ctx->r21 = ADD32(ctx->r29, 0X5C);
    // 0x15152BD8: sb          $t5, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r13;
    // 0x15152BDC: lbu         $t6, 0x43($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X43);
    // 0x15152BE0: sb          $t6, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r14;
    // 0x15152BE4: lbu         $t7, 0x44($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X44);
    // 0x15152BE8: sb          $t7, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = ctx->r15;
    // 0x15152BEC: lbu         $t8, 0x57($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X57);
    // 0x15152BF0: sb          $t8, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r24;
    // 0x15152BF4: lbu         $t9, 0x58($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X58);
    // 0x15152BF8: sb          $t9, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r25;
    // 0x15152BFC: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x15152C00: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x15152C04: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x15152C08: sw          $t0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r8;
    // 0x15152C0C: lh          $t2, 0x64($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X64);
    // 0x15152C10: sh          $t2, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r10;
    // 0x15152C14: lh          $t3, 0x66($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X66);
    // 0x15152C18: sh          $t3, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r11;
    // 0x15152C1C: lb          $t4, 0x70($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X70);
    // 0x15152C20: sb          $t4, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r12;
    // 0x15152C24: lb          $t5, 0x71($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X71);
    // 0x15152C28: sb          $t5, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r13;
    // 0x15152C2C: lh          $t6, 0x68($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X68);
    // 0x15152C30: sh          $t6, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r14;
    // 0x15152C34: lbu         $t7, 0x6A($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X6A);
    // 0x15152C38: sb          $t7, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = ctx->r15;
    // 0x15152C3C: lwc1        $f4, 0x6C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x15152C40: beq         $s3, $zero, L_15152F40
    if (ctx->r19 == 0) {
        // 0x15152C44: swc1        $f4, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
            goto L_15152F40;
    }
    // 0x15152C44: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
L_15152C48:
    // 0x15152C48: jal         0x150ADA20
    // 0x15152C4C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15152C4C: nop

    after_1:
    // 0x15152C50: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x15152C54: lw          $t0, 0x34($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X34);
    // 0x15152C58: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x15152C5C: divu        $zero, $v0, $t9
    lo = S32(U32(ctx->r2) / U32(ctx->r25)); hi = S32(U32(ctx->r2) % U32(ctx->r25));
    // 0x15152C60: mfhi        $t1
    ctx->r9 = hi;
    // 0x15152C64: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x15152C68: bne         $t9, $zero, L_15152C74
    if (ctx->r25 != 0) {
        // 0x15152C6C: nop
    
            goto L_15152C74;
    }
    // 0x15152C6C: nop

    // 0x15152C70: break       7
    do_break(353709168);
L_15152C74:
    // 0x15152C74: sb          $t2, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r10;
    // 0x15152C78: jal         0x150ADA20
    // 0x15152C7C: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15152C7C: nop

    after_2:
    // 0x15152C80: lh          $t3, 0x3E($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X3E);
    // 0x15152C84: lh          $t6, 0x3C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X3C);
    // 0x15152C88: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x15152C8C: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x15152C90: mfhi        $t5
    ctx->r13 = hi;
    // 0x15152C94: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x15152C98: bne         $t4, $zero, L_15152CA4
    if (ctx->r12 != 0) {
        // 0x15152C9C: nop
    
            goto L_15152CA4;
    }
    // 0x15152C9C: nop

    // 0x15152CA0: break       7
    do_break(353709216);
L_15152CA4:
    // 0x15152CA4: sh          $t7, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r15;
    // 0x15152CA8: jal         0x150ADA68
    // 0x15152CAC: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x15152CAC: nop

    after_3:
    // 0x15152CB0: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15152CB4: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15152CB8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15152CBC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15152CC0: jal         0x150ADA68
    // 0x15152CC4: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x15152CC4: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x15152CC8: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15152CCC: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15152CD0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15152CD4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15152CD8: jal         0x150ADA20
    // 0x15152CDC: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15152CDC: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x15152CE0: jal         0x150ADA20
    // 0x15152CE4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x15152CE4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_6:
    // 0x15152CE8: jal         0x150ADA68
    // 0x15152CEC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x15152CEC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_7:
    // 0x15152CF0: lh          $t8, 0x2E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2E);
    // 0x15152CF4: lh          $t4, 0x32($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X32);
    // 0x15152CF8: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15152CFC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x15152D00: divu        $zero, $s1, $t9
    lo = S32(U32(ctx->r17) / U32(ctx->r25)); hi = S32(U32(ctx->r17) % U32(ctx->r25));
    // 0x15152D04: mfhi        $t1
    ctx->r9 = hi;
    // 0x15152D08: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x15152D0C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15152D10: divu        $zero, $s2, $t5
    lo = S32(U32(ctx->r18) / U32(ctx->r13)); hi = S32(U32(ctx->r18) % U32(ctx->r13));
    // 0x15152D14: lwc1        $f18, 0x24($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X24);
    // 0x15152D18: lh          $t0, 0x2C($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2C);
    // 0x15152D1C: lh          $t7, 0x30($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X30);
    // 0x15152D20: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15152D24: mfhi        $t6
    ctx->r14 = hi;
    // 0x15152D28: addu        $a0, $t1, $t0
    ctx->r4 = ADD32(ctx->r9, ctx->r8);
    // 0x15152D2C: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x15152D30: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x15152D34: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x15152D38: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x15152D3C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x15152D40: bne         $t9, $zero, L_15152D4C
    if (ctx->r25 != 0) {
        // 0x15152D44: nop
    
            goto L_15152D4C;
    }
    // 0x15152D44: nop

    // 0x15152D48: break       7
    do_break(353709384);
L_15152D4C:
    // 0x15152D4C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x15152D50: bne         $t5, $zero, L_15152D5C
    if (ctx->r13 != 0) {
        // 0x15152D54: nop
    
            goto L_15152D5C;
    }
    // 0x15152D54: nop

    // 0x15152D58: break       7
    do_break(353709400);
L_15152D5C:
    // 0x15152D5C: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15152D60: jal         0x15143794
    // 0x15152D64: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_15143794(rdram, ctx);
        goto after_8;
    // 0x15152D64: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_8:
    // 0x15152D68: jal         0x150ADA20
    // 0x15152D6C: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x15152D6C: nop

    after_9:
    // 0x15152D70: lbu         $t1, 0x49($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X49);
    // 0x15152D74: lbu         $t3, 0x45($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X45);
    // 0x15152D78: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x15152D7C: divu        $zero, $v0, $t0
    lo = S32(U32(ctx->r2) / U32(ctx->r8)); hi = S32(U32(ctx->r2) % U32(ctx->r8));
    // 0x15152D80: mfhi        $t2
    ctx->r10 = hi;
    // 0x15152D84: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15152D88: bne         $t0, $zero, L_15152D94
    if (ctx->r8 != 0) {
        // 0x15152D8C: nop
    
            goto L_15152D94;
    }
    // 0x15152D8C: nop

    // 0x15152D90: break       7
    do_break(353709456);
L_15152D94:
    // 0x15152D94: sb          $t4, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r12;
    // 0x15152D98: jal         0x150ADA20
    // 0x15152D9C: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x15152D9C: nop

    after_10:
    // 0x15152DA0: lbu         $t5, 0x4A($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X4A);
    // 0x15152DA4: lbu         $t8, 0x46($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X46);
    // 0x15152DA8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x15152DAC: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x15152DB0: mfhi        $t7
    ctx->r15 = hi;
    // 0x15152DB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15152DB8: bne         $t6, $zero, L_15152DC4
    if (ctx->r14 != 0) {
        // 0x15152DBC: nop
    
            goto L_15152DC4;
    }
    // 0x15152DBC: nop

    // 0x15152DC0: break       7
    do_break(353709504);
L_15152DC4:
    // 0x15152DC4: sb          $t9, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r25;
    // 0x15152DC8: jal         0x150ADA20
    // 0x15152DCC: nop

    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x15152DCC: nop

    after_11:
    // 0x15152DD0: lbu         $t1, 0x4B($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X4B);
    // 0x15152DD4: lbu         $t3, 0x47($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X47);
    // 0x15152DD8: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x15152DDC: divu        $zero, $v0, $t0
    lo = S32(U32(ctx->r2) / U32(ctx->r8)); hi = S32(U32(ctx->r2) % U32(ctx->r8));
    // 0x15152DE0: mfhi        $t2
    ctx->r10 = hi;
    // 0x15152DE4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15152DE8: bne         $t0, $zero, L_15152DF4
    if (ctx->r8 != 0) {
        // 0x15152DEC: nop
    
            goto L_15152DF4;
    }
    // 0x15152DEC: nop

    // 0x15152DF0: break       7
    do_break(353709552);
L_15152DF4:
    // 0x15152DF4: sb          $t4, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r12;
    // 0x15152DF8: jal         0x150ADA20
    // 0x15152DFC: nop

    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x15152DFC: nop

    after_12:
    // 0x15152E00: lbu         $t5, 0x4C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X4C);
    // 0x15152E04: lbu         $t8, 0x48($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X48);
    // 0x15152E08: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x15152E0C: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x15152E10: mfhi        $t7
    ctx->r15 = hi;
    // 0x15152E14: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15152E18: bne         $t6, $zero, L_15152E24
    if (ctx->r14 != 0) {
        // 0x15152E1C: nop
    
            goto L_15152E24;
    }
    // 0x15152E1C: nop

    // 0x15152E20: break       7
    do_break(353709600);
L_15152E24:
    // 0x15152E24: sb          $t9, 0x72($sp)
    MEM_B(0X72, ctx->r29) = ctx->r25;
    // 0x15152E28: jal         0x150ADA20
    // 0x15152E2C: nop

    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x15152E2C: nop

    after_13:
    // 0x15152E30: lbu         $t1, 0x51($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X51);
    // 0x15152E34: lbu         $t3, 0x4D($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X4D);
    // 0x15152E38: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x15152E3C: divu        $zero, $v0, $t0
    lo = S32(U32(ctx->r2) / U32(ctx->r8)); hi = S32(U32(ctx->r2) % U32(ctx->r8));
    // 0x15152E40: mfhi        $t2
    ctx->r10 = hi;
    // 0x15152E44: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15152E48: bne         $t0, $zero, L_15152E54
    if (ctx->r8 != 0) {
        // 0x15152E4C: nop
    
            goto L_15152E54;
    }
    // 0x15152E4C: nop

    // 0x15152E50: break       7
    do_break(353709648);
L_15152E54:
    // 0x15152E54: sb          $t4, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r12;
    // 0x15152E58: jal         0x150ADA20
    // 0x15152E5C: nop

    func_150ADA20(rdram, ctx);
        goto after_14;
    // 0x15152E5C: nop

    after_14:
    // 0x15152E60: lbu         $t5, 0x52($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X52);
    // 0x15152E64: lbu         $t8, 0x4E($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4E);
    // 0x15152E68: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x15152E6C: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x15152E70: mfhi        $t7
    ctx->r15 = hi;
    // 0x15152E74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15152E78: bne         $t6, $zero, L_15152E84
    if (ctx->r14 != 0) {
        // 0x15152E7C: nop
    
            goto L_15152E84;
    }
    // 0x15152E7C: nop

    // 0x15152E80: break       7
    do_break(353709696);
L_15152E84:
    // 0x15152E84: sb          $t9, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r25;
    // 0x15152E88: jal         0x150ADA20
    // 0x15152E8C: nop

    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x15152E8C: nop

    after_15:
    // 0x15152E90: lbu         $t1, 0x53($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X53);
    // 0x15152E94: lbu         $t3, 0x4F($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X4F);
    // 0x15152E98: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x15152E9C: divu        $zero, $v0, $t0
    lo = S32(U32(ctx->r2) / U32(ctx->r8)); hi = S32(U32(ctx->r2) % U32(ctx->r8));
    // 0x15152EA0: mfhi        $t2
    ctx->r10 = hi;
    // 0x15152EA4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15152EA8: bne         $t0, $zero, L_15152EB4
    if (ctx->r8 != 0) {
        // 0x15152EAC: nop
    
            goto L_15152EB4;
    }
    // 0x15152EAC: nop

    // 0x15152EB0: break       7
    do_break(353709744);
L_15152EB4:
    // 0x15152EB4: sb          $t4, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r12;
    // 0x15152EB8: jal         0x150ADA20
    // 0x15152EBC: nop

    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x15152EBC: nop

    after_16:
    // 0x15152EC0: lbu         $t5, 0x54($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X54);
    // 0x15152EC4: lbu         $t8, 0x50($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X50);
    // 0x15152EC8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x15152ECC: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x15152ED0: mfhi        $t7
    ctx->r15 = hi;
    // 0x15152ED4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15152ED8: bne         $t6, $zero, L_15152EE4
    if (ctx->r14 != 0) {
        // 0x15152EDC: nop
    
            goto L_15152EE4;
    }
    // 0x15152EDC: nop

    // 0x15152EE0: break       7
    do_break(353709792);
L_15152EE4:
    // 0x15152EE4: sb          $t9, 0x76($sp)
    MEM_B(0X76, ctx->r29) = ctx->r25;
    // 0x15152EE8: jal         0x150ADA20
    // 0x15152EEC: nop

    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x15152EEC: nop

    after_17:
    // 0x15152EF0: lbu         $t1, 0x56($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X56);
    // 0x15152EF4: lbu         $t3, 0x55($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X55);
    // 0x15152EF8: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x15152EFC: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x15152F00: divu        $zero, $v0, $t0
    lo = S32(U32(ctx->r2) / U32(ctx->r8)); hi = S32(U32(ctx->r2) % U32(ctx->r8));
    // 0x15152F04: mfhi        $t2
    ctx->r10 = hi;
    // 0x15152F08: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15152F0C: bne         $t0, $zero, L_15152F18
    if (ctx->r8 != 0) {
        // 0x15152F10: nop
    
            goto L_15152F18;
    }
    // 0x15152F10: nop

    // 0x15152F14: break       7
    do_break(353709844);
L_15152F18:
    // 0x15152F18: sb          $t4, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r12;
    // 0x15152F1C: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x15152F20: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15152F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15152F28: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x15152F2C: jal         0x1515C2F0
    // 0x15152F30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1515C2F0(rdram, ctx);
        goto after_18;
    // 0x15152F30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x15152F34: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x15152F38: bne         $s3, $zero, L_15152C48
    if (ctx->r19 != 0) {
        // 0x15152F3C: nop
    
            goto L_15152C48;
    }
    // 0x15152F3C: nop

L_15152F40:
    // 0x15152F40: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15152F44: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15152F48: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15152F4C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x15152F50: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15152F54: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x15152F58: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x15152F5C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x15152F60: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x15152F64: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x15152F68: jr          $ra
    // 0x15152F6C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    return;
    // 0x15152F6C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_1506196C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506196C: addu        $t6, $a0, $a1
    ctx->r14 = ADD32(ctx->r4, ctx->r5);
    // 0x15061970: lbu         $t7, 0xB($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XB);
    // 0x15061974: lbu         $t8, 0x7($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X7);
    // 0x15061978: ori         $at, $zero, 0xFE01
    ctx->r1 = 0 | 0XFE01;
    // 0x1506197C: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15061980: mflo        $v1
    ctx->r3 = lo;
    // 0x15061984: sra         $t9, $v1, 8
    ctx->r25 = S32(SIGNED(ctx->r3) >> 8);
    // 0x15061988: bnel        $v1, $at, L_1506199C
    if (ctx->r3 != ctx->r1) {
        // 0x1506198C: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_1506199C;
    }
    goto skip_0;
    // 0x1506198C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    skip_0:
    // 0x15061990: b           L_1506199C
    // 0x15061994: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
        goto L_1506199C;
    // 0x15061994: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x15061998: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_1506199C:
    // 0x1506199C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150619A0: jr          $ra
    // 0x150619A4: nop

    return;
    return;
    // 0x150619A4: nop

;}
RECOMP_FUNC void func_1507E500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507E500: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1507E504: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1507E508: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1507E50C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1507E510: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1507E514: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1507E518: jal         0x1507E968
    // 0x1507E51C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1507E968(rdram, ctx);
        goto after_0;
    // 0x1507E51C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x1507E520: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x1507E524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507E528: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1507E52C: beql        $at, $zero, L_1507E5B8
    if (ctx->r1 == 0) {
        // 0x1507E530: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1507E5B8;
    }
    goto skip_0;
    // 0x1507E530: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1507E534: jal         0x1507E908
    // 0x1507E538: lbu         $a1, 0x6F($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6F);
    func_1507E908(rdram, ctx);
        goto after_1;
    // 0x1507E538: lbu         $a1, 0x6F($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6F);
    after_1:
    // 0x1507E53C: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x1507E540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507E544: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1507E548: beql        $t7, $zero, L_1507E578
    if (ctx->r15 == 0) {
        // 0x1507E54C: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_1507E578;
    }
    goto skip_1;
    // 0x1507E54C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x1507E550: jal         0x1507E9F8
    // 0x1507E554: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_1507E9F8(rdram, ctx);
        goto after_2;
    // 0x1507E554: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x1507E558: beq         $v0, $zero, L_1507E574
    if (ctx->r2 == 0) {
        // 0x1507E55C: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_1507E574;
    }
    // 0x1507E55C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x1507E560: lbu         $t8, 0x4($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X4);
    // 0x1507E564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507E568: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x1507E56C: jal         0x150302F0
    // 0x1507E570: lbu         $a1, -0x1($t9)
    ctx->r5 = MEM_BU(ctx->r25, -0X1);
    func_150302F0(rdram, ctx);
        goto after_3;
    // 0x1507E570: lbu         $a1, -0x1($t9)
    ctx->r5 = MEM_BU(ctx->r25, -0X1);
    after_3:
L_1507E574:
    // 0x1507E574: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_1507E578:
    // 0x1507E578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507E57C: sb          $t0, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = ctx->r8;
    // 0x1507E580: jal         0x1507E5C8
    // 0x1507E584: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_1507E5C8(rdram, ctx);
        goto after_4;
    // 0x1507E584: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_4:
    // 0x1507E588: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1507E58C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1507E590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507E594: beq         $t1, $zero, L_1507E5A4
    if (ctx->r9 == 0) {
        // 0x1507E598: nop
    
            goto L_1507E5A4;
    }
    // 0x1507E598: nop

    // 0x1507E59C: b           L_1507E5B4
    // 0x1507E5A0: sb          $t2, 0x135($s0)
    MEM_B(0X135, ctx->r16) = ctx->r10;
        goto L_1507E5B4;
    // 0x1507E5A0: sb          $t2, 0x135($s0)
    MEM_B(0X135, ctx->r16) = ctx->r10;
L_1507E5A4:
    // 0x1507E5A4: jal         0x1507E908
    // 0x1507E5A8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_1507E908(rdram, ctx);
        goto after_5;
    // 0x1507E5A8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x1507E5AC: lbu         $t3, 0x3($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X3);
    // 0x1507E5B0: sb          $t3, 0x135($s0)
    MEM_B(0X135, ctx->r16) = ctx->r11;
L_1507E5B4:
    // 0x1507E5B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1507E5B8:
    // 0x1507E5B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1507E5BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1507E5C0: jr          $ra
    // 0x1507E5C4: nop

    return;
    return;
    // 0x1507E5C4: nop

;}
RECOMP_FUNC void n_alAudioFrame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10019498: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1001949C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x100194A0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x100194A4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x100194A8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x100194AC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x100194B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x100194B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x100194B8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x100194BC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x100194C0: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x100194C4: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x100194C8: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x100194CC: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x100194D0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x100194D4: bne         $t9, $zero, L_100194EC
    if (ctx->r25 != 0) {
        // 0x100194D8: nop
    
            goto L_100194EC;
    }
    // 0x100194D8: nop

    // 0x100194DC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x100194E0: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x100194E4: b           L_100196D0
    // 0x100194E8: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
        goto L_100196D0;
    // 0x100194E8: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
L_100194EC:
    // 0x100194EC: jal         0x10019A04
    // 0x100194F0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    __n_nextSampleTime(rdram, ctx);
        goto after_0;
    // 0x100194F0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x100194F4: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x100194F8: lw          $t1, -0x45BC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45BC);
    // 0x100194FC: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x10019500: sw          $v0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->r2;
    // 0x10019504: lw          $t2, -0x45BC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X45BC);
    // 0x10019508: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x1001950C: lw          $t3, 0x1C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X1C);
    // 0x10019510: lw          $t4, 0x20($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X20);
    // 0x10019514: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x10019518: sltu        $at, $t5, $t6
    ctx->r1 = ctx->r13 < ctx->r14 ? 1 : 0;
    // 0x1001951C: beq         $at, $zero, L_100195A8
    if (ctx->r1 == 0) {
        // 0x10019520: nop
    
            goto L_100195A8;
    }
    // 0x10019520: nop

L_10019524:
    // 0x10019524: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x10019528: lw          $t7, -0x45BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45BC);
    // 0x1001952C: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x10019530: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x10019534: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x10019538: sw          $t9, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r25;
    // 0x1001953C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x10019540: lw          $t9, 0x8($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X8);
    // 0x10019544: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x10019548: jalr        $t9
    // 0x1001954C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x1001954C: nop

    after_1:
    // 0x10019550: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x10019554: jal         0x10019964
    // 0x10019558: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _n_timeToSamplesNoRound(rdram, ctx);
        goto after_2;
    // 0x10019558: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x1001955C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x10019560: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x10019564: lw          $t2, 0x10($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X10);
    // 0x10019568: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x1001956C: sw          $t3, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r11;
    // 0x10019570: jal         0x10019A04
    // 0x10019574: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    __n_nextSampleTime(rdram, ctx);
        goto after_3;
    // 0x10019574: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x10019578: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x1001957C: lw          $t4, -0x45BC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X45BC);
    // 0x10019580: lui         $t5, 0x8003
    ctx->r13 = S32(0X8003 << 16);
    // 0x10019584: sw          $v0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->r2;
    // 0x10019588: lw          $t5, -0x45BC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X45BC);
    // 0x1001958C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x10019590: lw          $t6, 0x1C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X1C);
    // 0x10019594: lw          $t8, 0x20($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X20);
    // 0x10019598: subu        $t7, $t6, $t8
    ctx->r15 = SUB32(ctx->r14, ctx->r24);
    // 0x1001959C: sltu        $at, $t7, $t0
    ctx->r1 = ctx->r15 < ctx->r8 ? 1 : 0;
    // 0x100195A0: bne         $at, $zero, L_10019524
    if (ctx->r1 != 0) {
        // 0x100195A4: nop
    
            goto L_10019524;
    }
    // 0x100195A4: nop

L_100195A8:
    // 0x100195A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x100195AC: lw          $t9, -0x45BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45BC);
    // 0x100195B0: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x100195B4: lw          $t2, 0x1C($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X1C);
    // 0x100195B8: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x100195BC: sw          $t3, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->r11;
    // 0x100195C0: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x100195C4: blez        $t1, L_100196A0
    if (SIGNED(ctx->r9) <= 0) {
        // 0x100195C8: nop
    
            goto L_100196A0;
    }
    // 0x100195C8: nop

L_100195CC:
    // 0x100195CC: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x100195D0: lw          $t4, -0x45BC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X45BC);
    // 0x100195D4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x100195D8: lw          $t5, 0x58($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X58);
    // 0x100195DC: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x100195E0: beq         $at, $zero, L_100195F0
    if (ctx->r1 == 0) {
        // 0x100195E4: nop
    
            goto L_100195F0;
    }
    // 0x100195E4: nop

    // 0x100195E8: b           L_100195F8
    // 0x100195EC: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
        goto L_100195F8;
    // 0x100195EC: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
L_100195F0:
    // 0x100195F0: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x100195F4: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_100195F8:
    // 0x100195F8: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x100195FC: lw          $t7, -0x45BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45BC);
    // 0x10019600: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x10019604: jal         0x1001FB40
    // 0x10019608: lw          $a0, 0x20($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X20);
    func_1001FB40(rdram, ctx);
        goto after_4;
    // 0x10019608: lw          $a0, 0x20($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X20);
    after_4:
    // 0x1001960C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x10019610: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x10019614: addiu       $t2, $t0, 0x8
    ctx->r10 = ADD32(ctx->r8, 0X8);
    // 0x10019618: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x1001961C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x10019620: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x10019624: lui         $t3, 0xD00
    ctx->r11 = S32(0XD00 << 16);
    // 0x10019628: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x1001962C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x10019630: addiu       $t4, $t1, 0x8
    ctx->r12 = ADD32(ctx->r9, 0X8);
    // 0x10019634: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x10019638: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x1001963C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x10019640: lui         $t6, 0x62E
    ctx->r14 = S32(0X62E << 16);
    // 0x10019644: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x10019648: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001964C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x10019650: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x10019654: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x10019658: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x1001965C: subu        $t3, $t0, $t2
    ctx->r11 = SUB32(ctx->r8, ctx->r10);
    // 0x10019660: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x10019664: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x10019668: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x1001966C: sll         $t4, $t1, 1
    ctx->r12 = S32(ctx->r9 << 1);
    // 0x10019670: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x10019674: addu        $t5, $t9, $t6
    ctx->r13 = ADD32(ctx->r25, ctx->r14);
    // 0x10019678: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x1001967C: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10019680: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x10019684: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x10019688: lw          $t7, 0x20($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X20);
    // 0x1001968C: addu        $t2, $t7, $t0
    ctx->r10 = ADD32(ctx->r15, ctx->r8);
    // 0x10019690: sw          $t2, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->r10;
    // 0x10019694: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x10019698: bgtz        $t3, L_100195CC
    if (SIGNED(ctx->r11) > 0) {
        // 0x1001969C: nop
    
            goto L_100195CC;
    }
    // 0x1001969C: nop

L_100196A0:
    // 0x100196A0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x100196A4: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x100196A8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x100196AC: subu        $t9, $t1, $t4
    ctx->r25 = SUB32(ctx->r9, ctx->r12);
    // 0x100196B0: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x100196B4: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x100196B8: jal         0x10019770
    // 0x100196BC: nop

    _n_collectPVoices(rdram, ctx);
        goto after_5;
    // 0x100196BC: nop

    after_5:
    // 0x100196C0: b           L_100196D0
    // 0x100196C4: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
        goto L_100196D0;
    // 0x100196C4: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x100196C8: b           L_100196D0
    // 0x100196CC: nop

        goto L_100196D0;
    // 0x100196CC: nop

L_100196D0:
    // 0x100196D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x100196D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x100196D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x100196DC: jr          $ra
    // 0x100196E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x100196E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_15190454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15190454: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x15190458: sw          $zero, 0x84($v0)
    MEM_W(0X84, ctx->r2) = 0;
    // 0x1519045C: jr          $ra
    // 0x15190460: nop

    return;
    return;
    // 0x15190460: nop

;}
RECOMP_FUNC void func_151D8DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8DB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D8DB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D8DBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151D8DC0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151D8DC4: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x151D8DC8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151D8DCC: addiu       $a0, $a0, -0x4D00
    ctx->r4 = ADD32(ctx->r4, -0X4D00);
    // 0x151D8DD0: jal         0x15169260
    // 0x151D8DD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15169260(rdram, ctx);
        goto after_0;
    // 0x151D8DD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x151D8DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D8DDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D8DE0: jr          $ra
    // 0x151D8DE4: nop

    return;
    return;
    // 0x151D8DE4: nop

;}
RECOMP_FUNC void func_150FCA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FCA00: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150FCA04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150FCA08: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x150FCA0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FCA10: swc1        $f0, 0x348($a0)
    MEM_W(0X348, ctx->r4) = ctx->f0.u32l;
    // 0x150FCA14: swc1        $f0, 0x34C($a0)
    MEM_W(0X34C, ctx->r4) = ctx->f0.u32l;
    // 0x150FCA18: swc1        $f4, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f4.u32l;
    // 0x150FCA1C: jr          $ra
    // 0x150FCA20: nop

    return;
    return;
    // 0x150FCA20: nop

;}
RECOMP_FUNC void func_1514AF74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514AF74: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1514AF78: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x1514AF7C: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x1514AF80: lwc1        $f2, 0x150($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X150);
    // 0x1514AF84: lwc1        $f12, 0x30($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X30);
    // 0x1514AF88: lwc1        $f14, 0x50($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X50);
    // 0x1514AF8C: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1514AF90: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1514AF94: lwc1        $f18, 0x4C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x1514AF98: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1514AF9C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x1514AFA0: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x1514AFA4: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    // 0x1514AFA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1514AFAC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1514AFB0: swc1        $f10, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
    // 0x1514AFB4: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1514AFB8: mul.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x1514AFBC: nop

    // 0x1514AFC0: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1514AFC4: nop

    // 0x1514AFC8: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1514AFCC: nop

    // 0x1514AFD0: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1514AFD4: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1514AFD8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1514AFDC: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1514AFE0: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x1514AFE4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1514AFE8: lwc1        $f4, 0x2C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x1514AFEC: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1514AFF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1514AFF4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1514AFF8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x1514AFFC: add.s       $f8, $f14, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x1514B000: bc1t        L_1514B024
    if (c1cs) {
        // 0x1514B004: swc1        $f8, 0x50($a0)
        MEM_W(0X50, ctx->r4) = ctx->f8.u32l;
            goto L_1514B024;
    }
    // 0x1514B004: swc1        $f8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f8.u32l;
    // 0x1514B008: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x1514B00C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1514B010: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1514B014: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x1514B018: nop

    // 0x1514B01C: bc1f        L_1514B02C
    if (!c1cs) {
        // 0x1514B020: nop
    
            goto L_1514B02C;
    }
    // 0x1514B020: nop

L_1514B024:
    // 0x1514B024: jr          $ra
    // 0x1514B028: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1514B028: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1514B02C:
    // 0x1514B02C: jr          $ra
    // 0x1514B030: nop

    return;
    return;
    // 0x1514B030: nop

;}
RECOMP_FUNC void func_150D88AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D88AC: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x150D88B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150D88B4: lbu         $t7, 0x6F($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6F);
    // 0x150D88B8: beql        $t7, $zero, L_150D88D0
    if (ctx->r15 == 0) {
        // 0x150D88BC: lw          $t0, 0x14($a0)
        ctx->r8 = MEM_W(ctx->r4, 0X14);
            goto L_150D88D0;
    }
    goto skip_0;
    // 0x150D88BC: lw          $t0, 0x14($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X14);
    skip_0:
    // 0x150D88C0: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x150D88C4: b           L_150D88D8
    // 0x150D88C8: sb          $zero, 0x9($t8)
    MEM_B(0X9, ctx->r24) = 0;
        goto L_150D88D8;
    // 0x150D88C8: sb          $zero, 0x9($t8)
    MEM_B(0X9, ctx->r24) = 0;
    // 0x150D88CC: lw          $t0, 0x14($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X14);
L_150D88D0:
    // 0x150D88D0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150D88D4: sb          $t9, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r25;
L_150D88D8:
    // 0x150D88D8: jr          $ra
    // 0x150D88DC: nop

    return;
    return;
    // 0x150D88DC: nop

;}
RECOMP_FUNC void func_1512C200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512C200: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1512C204: jr          $ra
    // 0x1512C208: nop

    return;
    return;
    // 0x1512C208: nop

;}
RECOMP_FUNC void func_151189AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151189AC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x151189B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151189B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151189B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151189BC: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x151189C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151189C4: jal         0x1511F990
    // 0x151189C8: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    func_1511F990(rdram, ctx);
        goto after_0;
    // 0x151189C8: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    after_0:
    // 0x151189CC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x151189D0: lbu         $v1, 0x73($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X73);
    // 0x151189D4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x151189D8: sll         $t0, $v0, 22
    ctx->r8 = S32(ctx->r2 << 22);
    // 0x151189DC: sra         $t7, $t0, 22
    ctx->r15 = S32(SIGNED(ctx->r8) >> 22);
    // 0x151189E0: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x151189E4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x151189E8: andi        $a1, $v0, 0xFC00
    ctx->r5 = ctx->r2 & 0XFC00;
    // 0x151189EC: sra         $t6, $a1, 10
    ctx->r14 = S32(SIGNED(ctx->r5) >> 10);
    // 0x151189F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151189F4: andi        $a0, $v1, 0x3
    ctx->r4 = ctx->r3 & 0X3;
    // 0x151189F8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x151189FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15118A00: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x15118A04: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15118A08: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15118A0C: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x15118A10: beq         $a0, $zero, L_15118A20
    if (ctx->r4 == 0) {
        // 0x15118A14: lwc1        $f16, 0x84($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
            goto L_15118A20;
    }
    // 0x15118A14: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x15118A18: bne         $a0, $at, L_15118A3C
    if (ctx->r4 != ctx->r1) {
        // 0x15118A1C: nop
    
            goto L_15118A3C;
    }
    // 0x15118A1C: nop

L_15118A20:
    // 0x15118A20: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x15118A24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15118A28: bne         $a0, $at, L_15118A3C
    if (ctx->r4 != ctx->r1) {
        // 0x15118A2C: andi        $t8, $v1, 0x4
        ctx->r24 = ctx->r3 & 0X4;
            goto L_15118A3C;
    }
    // 0x15118A2C: andi        $t8, $v1, 0x4
    ctx->r24 = ctx->r3 & 0X4;
    // 0x15118A30: beq         $t8, $zero, L_15118A3C
    if (ctx->r24 == 0) {
        // 0x15118A34: nop
    
            goto L_15118A3C;
    }
    // 0x15118A34: nop

    // 0x15118A38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_15118A3C:
    // 0x15118A3C: beq         $a0, $zero, L_15118A4C
    if (ctx->r4 == 0) {
        // 0x15118A40: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15118A4C;
    }
    // 0x15118A40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15118A44: bnel        $a0, $at, L_15118A58
    if (ctx->r4 != ctx->r1) {
        // 0x15118A48: lwc1        $f10, 0x64($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
            goto L_15118A58;
    }
    goto skip_0;
    // 0x15118A48: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    skip_0:
L_15118A4C:
    // 0x15118A4C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15118A50: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
    // 0x15118A54: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
L_15118A58:
    // 0x15118A58: c.eq.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl == ctx->f14.fl;
    // 0x15118A5C: nop

    // 0x15118A60: bc1fl       L_15118A84
    if (!c1cs) {
        // 0x15118A64: lwc1        $f0, 0x7C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
            goto L_15118A84;
    }
    goto skip_1;
    // 0x15118A64: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
    skip_1:
    // 0x15118A68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15118A6C: nop

    // 0x15118A70: c.eq.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl == ctx->f4.fl;
    // 0x15118A74: nop

    // 0x15118A78: bc1tl       L_15118D94
    if (c1cs) {
        // 0x15118A7C: swc1        $f16, 0x84($s0)
        MEM_W(0X84, ctx->r16) = ctx->f16.u32l;
            goto L_15118D94;
    }
    goto skip_2;
    // 0x15118A7C: swc1        $f16, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f16.u32l;
    skip_2:
    // 0x15118A80: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
L_15118A84:
    // 0x15118A84: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15118A88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15118A8C: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x15118A90: nop

    // 0x15118A94: bc1fl       L_15118AC8
    if (!c1cs) {
        // 0x15118A98: swc1        $f0, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
            goto L_15118AC8;
    }
    goto skip_3;
    // 0x15118A98: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    skip_3:
    // 0x15118A9C: beq         $a2, $zero, L_15118AB8
    if (ctx->r6 == 0) {
        // 0x15118AA0: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_15118AB8;
    }
    // 0x15118AA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15118AA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15118AA8: lwc1        $f8, 0x3138($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3138);
    // 0x15118AAC: swc1        $f8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
    // 0x15118AB0: b           L_15118AC4
    // 0x15118AB4: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
        goto L_15118AC4;
    // 0x15118AB4: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
L_15118AB8:
    // 0x15118AB8: lwc1        $f10, 0x313C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X313C);
    // 0x15118ABC: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
    // 0x15118AC0: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
L_15118AC4:
    // 0x15118AC4: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
L_15118AC8:
    // 0x15118AC8: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
    // 0x15118ACC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15118AD0: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x15118AD4: nop

    // 0x15118AD8: bc1fl       L_15118B0C
    if (!c1cs) {
        // 0x15118ADC: c.eq.s      $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl == ctx->f10.fl;
            goto L_15118B0C;
    }
    goto skip_4;
    // 0x15118ADC: c.eq.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl == ctx->f10.fl;
    skip_4:
    // 0x15118AE0: beq         $a2, $zero, L_15118AFC
    if (ctx->r6 == 0) {
        // 0x15118AE4: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_15118AFC;
    }
    // 0x15118AE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15118AE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15118AEC: lwc1        $f6, 0x3140($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3140);
    // 0x15118AF0: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    // 0x15118AF4: b           L_15118B08
    // 0x15118AF8: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
        goto L_15118B08;
    // 0x15118AF8: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
L_15118AFC:
    // 0x15118AFC: lwc1        $f8, 0x3144($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3144);
    // 0x15118B00: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
    // 0x15118B04: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
L_15118B08:
    // 0x15118B08: c.eq.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl == ctx->f10.fl;
L_15118B0C:
    // 0x15118B0C: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
    // 0x15118B10: bc1fl       L_15118B64
    if (!c1cs) {
        // 0x15118B14: lwc1        $f6, 0x64($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
            goto L_15118B64;
    }
    goto skip_5;
    // 0x15118B14: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    skip_5:
    // 0x15118B18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15118B1C: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x15118B20: subu        $t2, $t2, $a1
    ctx->r10 = SUB32(ctx->r10, ctx->r5);
    // 0x15118B24: c.eq.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl == ctx->f4.fl;
    // 0x15118B28: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15118B2C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x15118B30: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x15118B34: bc1f        L_15118B58
    if (!c1cs) {
        // 0x15118B38: addu        $t3, $t3, $t2
        ctx->r11 = ADD32(ctx->r11, ctx->r10);
            goto L_15118B58;
    }
    // 0x15118B38: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x15118B3C: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x15118B40: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15118B44: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x15118B48: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x15118B4C: lh          $t1, -0x6D9E($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X6D9E);
    // 0x15118B50: b           L_15118B60
    // 0x15118B54: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
        goto L_15118B60;
    // 0x15118B54: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
L_15118B58:
    // 0x15118B58: lh          $t3, -0x6DA0($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X6DA0);
    // 0x15118B5C: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
L_15118B60:
    // 0x15118B60: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
L_15118B64:
    // 0x15118B64: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    // 0x15118B68: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x15118B6C: add.s       $f12, $f6, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x15118B70: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x15118B74: swc1        $f14, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f14.u32l;
    // 0x15118B78: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x15118B7C: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    // 0x15118B80: jal         0x15048A70
    // 0x15118B84: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    func_15048A70(rdram, ctx);
        goto after_1;
    // 0x15118B84: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x15118B88: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15118B8C: abs.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = fabsf(ctx->f0.fl);
    // 0x15118B90: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x15118B94: abs.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = fabsf(ctx->f16.fl);
    // 0x15118B98: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x15118B9C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x15118BA0: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x15118BA4: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x15118BA8: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15118BAC: bc1f        L_15118C44
    if (!c1cs) {
        // 0x15118BB0: lwc1        $f18, 0x58($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
            goto L_15118C44;
    }
    // 0x15118BB0: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15118BB4: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15118BB8: neg.s       $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = -ctx->f16.fl;
    // 0x15118BBC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15118BC0: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15118BC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15118BC8: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x15118BCC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15118BD0: abs.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = fabsf(ctx->f16.fl);
    // 0x15118BD4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x15118BD8: nop

    // 0x15118BDC: bc1fl       L_15118C30
    if (!c1cs) {
        // 0x15118BE0: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_15118C30;
    }
    goto skip_6;
    // 0x15118BE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_6:
    // 0x15118BE4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15118BE8: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x15118BEC: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x15118BF0: c.eq.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
    // 0x15118BF4: addiu       $t5, $t5, -0x6DA0
    ctx->r13 = ADD32(ctx->r13, -0X6DA0);
    // 0x15118BF8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x15118BFC: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x15118C00: bc1f        L_15118C18
    if (!c1cs) {
        // 0x15118C04: addu        $v0, $t4, $t5
        ctx->r2 = ADD32(ctx->r12, ctx->r13);
            goto L_15118C18;
    }
    // 0x15118C04: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x15118C08: lh          $t6, 0x6($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X6);
    // 0x15118C0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15118C10: b           L_15118C24
    // 0x15118C14: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
        goto L_15118C24;
    // 0x15118C14: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
L_15118C18:
    // 0x15118C18: lh          $t7, 0x4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X4);
    // 0x15118C1C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x15118C20: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
L_15118C24:
    // 0x15118C24: b           L_15118C3C
    // 0x15118C28: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
        goto L_15118C3C;
    // 0x15118C28: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x15118C2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_15118C30:
    // 0x15118C30: nop

    // 0x15118C34: mul.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x15118C38: swc1        $f18, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f18.u32l;
L_15118C3C:
    // 0x15118C3C: b           L_15118CA8
    // 0x15118C40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
        goto L_15118CA8;
    // 0x15118C40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_15118C44:
    // 0x15118C44: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15118C48: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x15118C4C: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x15118C50: nop

    // 0x15118C54: bc1fl       L_15118C88
    if (!c1cs) {
        // 0x15118C58: sub.s       $f16, $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f18.fl;
            goto L_15118C88;
    }
    goto skip_7;
    // 0x15118C58: sub.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f18.fl;
    skip_7:
    // 0x15118C5C: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15118C60: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15118C64: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15118C68: nop

    // 0x15118C6C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x15118C70: nop

    // 0x15118C74: bc1fl       L_15118CA8
    if (!c1cs) {
        // 0x15118C78: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_15118CA8;
    }
    goto skip_8;
    // 0x15118C78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_8:
    // 0x15118C7C: b           L_15118CA4
    // 0x15118C80: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
        goto L_15118CA4;
    // 0x15118C80: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x15118C84: sub.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f18.fl;
L_15118C88:
    // 0x15118C88: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15118C8C: nop

    // 0x15118C90: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x15118C94: nop

    // 0x15118C98: bc1fl       L_15118CA8
    if (!c1cs) {
        // 0x15118C9C: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_15118CA8;
    }
    goto skip_9;
    // 0x15118C9C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_9:
    // 0x15118CA0: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_15118CA4:
    // 0x15118CA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_15118CA8:
    // 0x15118CA8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x15118CAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15118CB0: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x15118CB4: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x15118CB8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x15118CBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15118CC0: bc1f        L_15118CD0
    if (!c1cs) {
        // 0x15118CC4: lwc1        $f0, 0x64($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
            goto L_15118CD0;
    }
    // 0x15118CC4: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15118CC8: b           L_15118CD4
    // 0x15118CCC: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
        goto L_15118CD4;
    // 0x15118CCC: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
L_15118CD0:
    // 0x15118CD0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_15118CD4:
    // 0x15118CD4: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x15118CD8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15118CDC: addiu       $a2, $zero, 0x5DC0
    ctx->r6 = ADD32(0, 0X5DC0);
    // 0x15118CE0: addiu       $a3, $zero, 0x9C4
    ctx->r7 = ADD32(0, 0X9C4);
    // 0x15118CE4: bc1f        L_15118D04
    if (!c1cs) {
        // 0x15118CE8: addiu       $t4, $zero, 0x1194
        ctx->r12 = ADD32(0, 0X1194);
            goto L_15118D04;
    }
    // 0x15118CE8: addiu       $t4, $zero, 0x1194
    ctx->r12 = ADD32(0, 0X1194);
    // 0x15118CEC: mul.s       $f8, $f2, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x15118CF0: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x15118CF4: nop

    // 0x15118CF8: bc1fl       L_15118D08
    if (!c1cs) {
        // 0x15118CFC: c.lt.s      $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
            goto L_15118D08;
    }
    goto skip_10;
    // 0x15118CFC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    skip_10:
    // 0x15118D00: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
L_15118D04:
    // 0x15118D04: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
L_15118D08:
    // 0x15118D08: nop

    // 0x15118D0C: bc1fl       L_15118D28
    if (!c1cs) {
        // 0x15118D10: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_15118D28;
    }
    goto skip_11;
    // 0x15118D10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_11:
    // 0x15118D14: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15118D18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15118D1C: b           L_15118D48
    // 0x15118D20: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
        goto L_15118D48;
    // 0x15118D20: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x15118D24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_15118D28:
    // 0x15118D28: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15118D2C: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x15118D30: nop

    // 0x15118D34: bc1fl       L_15118D4C
    if (!c1cs) {
        // 0x15118D38: lbu         $t8, 0x73($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X73);
            goto L_15118D4C;
    }
    goto skip_12;
    // 0x15118D38: lbu         $t8, 0x73($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X73);
    skip_12:
    // 0x15118D3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15118D40: nop

    // 0x15118D44: sub.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f8.fl;
L_15118D48:
    // 0x15118D48: lbu         $t8, 0x73($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X73);
L_15118D4C:
    // 0x15118D4C: andi        $t1, $t8, 0xFFFC
    ctx->r9 = ctx->r24 & 0XFFFC;
    // 0x15118D50: sb          $t1, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r9;
    // 0x15118D54: or          $t2, $t1, $a0
    ctx->r10 = ctx->r9 | ctx->r4;
    // 0x15118D58: sb          $t2, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r10;
    // 0x15118D5C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x15118D60: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x15118D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15118D68: beq         $t3, $zero, L_15118D90
    if (ctx->r11 == 0) {
        // 0x15118D6C: or          $a1, $t3, $zero
        ctx->r5 = ctx->r11 | 0;
            goto L_15118D90;
    }
    // 0x15118D6C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x15118D70: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x15118D74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15118D78: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x15118D7C: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x15118D80: jal         0x15114D24
    // 0x15118D84: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    func_15114D24(rdram, ctx);
        goto after_2;
    // 0x15118D84: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x15118D88: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x15118D8C: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
L_15118D90:
    // 0x15118D90: swc1        $f16, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f16.u32l;
L_15118D94:
    // 0x15118D94: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15118D98: lbu         $t5, -0x164C($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X164C);
    // 0x15118D9C: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15118DA0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15118DA4: bne         $t5, $zero, L_15118DC0
    if (ctx->r13 != 0) {
        // 0x15118DA8: nop
    
            goto L_15118DC0;
    }
    // 0x15118DA8: nop

    // 0x15118DAC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15118DB0: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x15118DB4: nop

    // 0x15118DB8: bc1tl       L_15118F14
    if (c1cs) {
        // 0x15118DBC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15118F14;
    }
    goto skip_13;
    // 0x15118DBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_13:
L_15118DC0:
    // 0x15118DC0: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x15118DC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15118DC8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15118DCC: bnel        $t6, $at, L_15118E10
    if (ctx->r14 != ctx->r1) {
        // 0x15118DD0: lwc1        $f8, 0x64($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
            goto L_15118E10;
    }
    goto skip_14;
    // 0x15118DD0: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    skip_14:
    // 0x15118DD4: lw          $t7, -0x410C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X410C);
    // 0x15118DD8: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x15118DDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15118DE0: subu        $a0, $s0, $t7
    ctx->r4 = SUB32(ctx->r16, ctx->r15);
    // 0x15118DE4: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x15118DE8: mflo        $a0
    ctx->r4 = lo;
    // 0x15118DEC: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x15118DF0: jal         0x15022B08
    // 0x15118DF4: nop

    func_15022B08(rdram, ctx);
        goto after_3;
    // 0x15118DF4: nop

    after_3:
    // 0x15118DF8: beq         $v0, $zero, L_15118E0C
    if (ctx->r2 == 0) {
        // 0x15118DFC: lw          $t0, 0x4C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X4C);
            goto L_15118E0C;
    }
    // 0x15118DFC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x15118E00: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15118E04: b           L_15118E14
    // 0x15118E08: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
        goto L_15118E14;
    // 0x15118E08: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
L_15118E0C:
    // 0x15118E0C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
L_15118E10:
    // 0x15118E10: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
L_15118E14:
    // 0x15118E14: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x15118E18: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15118E1C: lw          $t2, -0x1610($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1610);
    // 0x15118E20: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15118E24: sra         $t9, $v1, 24
    ctx->r25 = S32(SIGNED(ctx->r3) >> 24);
    // 0x15118E28: bne         $t2, $at, L_15118E6C
    if (ctx->r10 != ctx->r1) {
        // 0x15118E2C: andi        $v1, $t9, 0xFF
        ctx->r3 = ctx->r25 & 0XFF;
            goto L_15118E6C;
    }
    // 0x15118E2C: andi        $v1, $t9, 0xFF
    ctx->r3 = ctx->r25 & 0XFF;
    // 0x15118E30: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15118E34: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15118E38: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x15118E3C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15118E40: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15118E44: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x15118E48: div.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x15118E4C: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x15118E50: sub.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x15118E54: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15118E58: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x15118E5C: jal         0x1000E75C
    // 0x15118E60: nop

    func_1000E75C(rdram, ctx);
        goto after_4;
    // 0x15118E60: nop

    after_4:
    // 0x15118E64: b           L_15118F14
    // 0x15118E68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15118F14;
    // 0x15118E68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15118E6C:
    // 0x15118E6C: beq         $v1, $zero, L_15118F10
    if (ctx->r3 == 0) {
        // 0x15118E70: lwc1        $f0, 0x64($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
            goto L_15118F10;
    }
    // 0x15118E70: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15118E74: bgez        $t0, L_15118E84
    if (SIGNED(ctx->r8) >= 0) {
        // 0x15118E78: abs.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = fabsf(ctx->f0.fl);
            goto L_15118E84;
    }
    // 0x15118E78: abs.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = fabsf(ctx->f0.fl);
    // 0x15118E7C: b           L_15118E88
    // 0x15118E80: negu        $v0, $t0
    ctx->r2 = SUB32(0, ctx->r8);
        goto L_15118E88;
    // 0x15118E80: negu        $v0, $t0
    ctx->r2 = SUB32(0, ctx->r8);
L_15118E84:
    // 0x15118E84: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_15118E88:
    // 0x15118E88: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x15118E8C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15118E90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15118E94: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15118E98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15118E9C: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    // 0x15118EA0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15118EA4: sub.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x15118EA8: div.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x15118EAC: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x15118EB0: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x15118EB4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x15118EB8: jal         0x1518804C
    // 0x15118EBC: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    func_1518804C(rdram, ctx);
        goto after_5;
    // 0x15118EBC: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x15118EC0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x15118EC4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15118EC8: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15118ECC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x15118ED0: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15118ED4: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15118ED8: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x15118EDC: jal         0x15173C60
    // 0x15118EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15173C60(rdram, ctx);
        goto after_6;
    // 0x15118EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x15118EE4: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15118EE8: lw          $t5, -0x1610($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1610);
    // 0x15118EEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15118EF0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x15118EF4: bnel        $t5, $at, L_15118F14
    if (ctx->r13 != ctx->r1) {
        // 0x15118EF8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15118F14;
    }
    goto skip_15;
    // 0x15118EF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_15:
    // 0x15118EFC: bne         $t6, $zero, L_15118F10
    if (ctx->r14 != 0) {
        // 0x15118F00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15118F10;
    }
    // 0x15118F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15118F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15118F08: jal         0x15173C90
    // 0x15118F0C: addiu       $a2, $zero, 0xF8
    ctx->r6 = ADD32(0, 0XF8);
    func_15173C90(rdram, ctx);
        goto after_7;
    // 0x15118F0C: addiu       $a2, $zero, 0xF8
    ctx->r6 = ADD32(0, 0XF8);
    after_7:
L_15118F10:
    // 0x15118F10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15118F14:
    // 0x15118F14: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15118F18: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x15118F1C: jr          $ra
    // 0x15118F20: nop

    return;
    return;
    // 0x15118F20: nop

;}
RECOMP_FUNC void func_15149838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15149838: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1514983C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x15149840: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15149844: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15149848: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x1514984C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15149850: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x15149854: lh          $t6, 0x11C($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X11C);
    // 0x15149858: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x1514985C: sh          $t8, 0x11C($s1)
    MEM_H(0X11C, ctx->r17) = ctx->r24;
    // 0x15149860: lh          $t9, 0x11C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X11C);
    // 0x15149864: bgezl       $t9, L_151498B8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15149868: addiu       $s0, $s1, 0x110
        ctx->r16 = ADD32(ctx->r17, 0X110);
            goto L_151498B8;
    }
    goto skip_0;
    // 0x15149868: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    skip_0:
    // 0x1514986C: jal         0x150ADA20
    // 0x15149870: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15149870: nop

    after_0:
    // 0x15149874: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    // 0x15149878: lh          $t0, 0xE($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XE);
    // 0x1514987C: divu        $zero, $v0, $t0
    lo = S32(U32(ctx->r2) / U32(ctx->r8)); hi = S32(U32(ctx->r2) % U32(ctx->r8));
    // 0x15149880: mfhi        $t1
    ctx->r9 = hi;
    // 0x15149884: sh          $t1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r9;
    // 0x15149888: bne         $t0, $zero, L_15149894
    if (ctx->r8 != 0) {
        // 0x1514988C: nop
    
            goto L_15149894;
    }
    // 0x1514988C: nop

    // 0x15149890: break       7
    do_break(353671312);
L_15149894:
    // 0x15149894: jal         0x150ADA68
    // 0x15149898: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x15149898: nop

    after_1:
    // 0x1514989C: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151498A0: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151498A4: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x151498A8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151498AC: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x151498B0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x151498B4: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
L_151498B8:
    // 0x151498B8: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151498BC: lwc1        $f0, 0x2C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x151498C0: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151498C4: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x151498C8: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x151498CC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151498D0: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x151498D4: swc1        $f8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f8.u32l;
    // 0x151498D8: lh          $t2, 0x24($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X24);
    // 0x151498DC: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x151498E0: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x151498E4: sh          $t4, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r12;
    // 0x151498E8: lh          $t5, 0x24($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X24);
    // 0x151498EC: bgezl       $t5, L_15149974
    if (SIGNED(ctx->r13) >= 0) {
        // 0x151498F0: lwc1        $f0, 0x30($s1)
        ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
            goto L_15149974;
    }
    goto skip_1;
    // 0x151498F0: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    skip_1:
    // 0x151498F4: jal         0x150ADA20
    // 0x151498F8: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151498F8: nop

    after_2:
    // 0x151498FC: lh          $t6, 0x26($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X26);
    // 0x15149900: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x15149904: mfhi        $t7
    ctx->r15 = hi;
    // 0x15149908: sh          $t7, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r15;
    // 0x1514990C: bne         $t6, $zero, L_15149918
    if (ctx->r14 != 0) {
        // 0x15149910: nop
    
            goto L_15149918;
    }
    // 0x15149910: nop

    // 0x15149914: break       7
    do_break(353671444);
L_15149918:
    // 0x15149918: jal         0x150ADA20
    // 0x1514991C: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1514991C: nop

    after_3:
    // 0x15149920: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x15149924: beq         $t8, $zero, L_15149950
    if (ctx->r24 == 0) {
        // 0x15149928: nop
    
            goto L_15149950;
    }
    // 0x15149928: nop

    // 0x1514992C: jal         0x150ADA68
    // 0x15149930: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x15149930: nop

    after_4:
    // 0x15149934: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15149938: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1514993C: sub.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x15149940: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15149944: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x15149948: b           L_15149970
    // 0x1514994C: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
        goto L_15149970;
    // 0x1514994C: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
L_15149950:
    // 0x15149950: jal         0x150ADA68
    // 0x15149954: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x15149954: nop

    after_5:
    // 0x15149958: lwc1        $f2, 0x14($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1514995C: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15149960: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x15149964: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15149968: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x1514996C: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
L_15149970:
    // 0x15149970: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
L_15149974:
    // 0x15149974: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15149978: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1514997C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15149980: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x15149984: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15149988: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1514998C: swc1        $f10, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f10.u32l;
    // 0x15149990: lh          $t9, 0x38($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X38);
    // 0x15149994: lw          $t0, -0x161C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X161C);
    // 0x15149998: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x1514999C: sh          $t1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r9;
    // 0x151499A0: lh          $t2, 0x38($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X38);
    // 0x151499A4: bgezl       $t2, L_15149A08
    if (SIGNED(ctx->r10) >= 0) {
        // 0x151499A8: lw          $v0, 0x24($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X24);
            goto L_15149A08;
    }
    goto skip_2;
    // 0x151499A8: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    skip_2:
    // 0x151499AC: jal         0x150ADA20
    // 0x151499B0: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151499B0: nop

    after_6:
    // 0x151499B4: lh          $t3, 0x3A($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X3A);
    // 0x151499B8: divu        $zero, $v0, $t3
    lo = S32(U32(ctx->r2) / U32(ctx->r11)); hi = S32(U32(ctx->r2) % U32(ctx->r11));
    // 0x151499BC: mfhi        $t4
    ctx->r12 = hi;
    // 0x151499C0: sh          $t4, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r12;
    // 0x151499C4: bne         $t3, $zero, L_151499D0
    if (ctx->r11 != 0) {
        // 0x151499C8: nop
    
            goto L_151499D0;
    }
    // 0x151499C8: nop

    // 0x151499CC: break       7
    do_break(353671628);
L_151499D0:
    // 0x151499D0: jal         0x150ADA20
    // 0x151499D4: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151499D4: nop

    after_7:
    // 0x151499D8: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x151499DC: lw          $t5, 0x2C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X2C);
    // 0x151499E0: subu        $t6, $t5, $v1
    ctx->r14 = SUB32(ctx->r13, ctx->r3);
    // 0x151499E4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151499E8: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x151499EC: mfhi        $t8
    ctx->r24 = hi;
    // 0x151499F0: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x151499F4: sw          $t9, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r25;
    // 0x151499F8: bne         $t7, $zero, L_15149A04
    if (ctx->r15 != 0) {
        // 0x151499FC: nop
    
            goto L_15149A04;
    }
    // 0x151499FC: nop

    // 0x15149A00: break       7
    do_break(353671680);
L_15149A04:
    // 0x15149A04: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_15149A08:
    // 0x15149A08: lw          $t0, 0x34($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X34);
    // 0x15149A0C: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15149A10: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15149A14: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x15149A18: lh          $t4, 0x1C($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X1C);
    // 0x15149A1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15149A20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15149A24: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x15149A28: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15149A2C: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x15149A30: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15149A34: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15149A38: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x15149A3C: nop

    // 0x15149A40: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x15149A44: beq         $at, $zero, L_15149A7C
    if (ctx->r1 == 0) {
        // 0x15149A48: sw          $t3, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r11;
            goto L_15149A7C;
    }
    // 0x15149A48: sw          $t3, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r11;
    // 0x15149A4C: lbu         $t5, 0x73($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X73);
    // 0x15149A50: lbu         $a1, 0x70($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X70);
    // 0x15149A54: lbu         $a2, 0x48($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X48);
    // 0x15149A58: lbu         $a3, 0x72($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X72);
    // 0x15149A5C: jal         0x1513F680
    // 0x15149A60: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_1513F680(rdram, ctx);
        goto after_8;
    // 0x15149A60: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_8:
    // 0x15149A64: lw          $t7, 0x58($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X58);
    // 0x15149A68: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x15149A6C: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x15149A70: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x15149A74: sh          $t6, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r14;
    // 0x15149A78: sw          $t8, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r24;
L_15149A7C:
    // 0x15149A7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15149A80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15149A84: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x15149A88: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x15149A8C: jr          $ra
    // 0x15149A90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15149A90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_151D9A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D9A20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D9A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D9A28: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151D9A2C: addiu       $t7, $t7, -0x4C4C
    ctx->r15 = ADD32(ctx->r15, -0X4C4C);
    // 0x151D9A30: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151D9A34: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x151D9A38: addiu       $t6, $sp, 0x20
    ctx->r14 = ADD32(ctx->r29, 0X20);
    // 0x151D9A3C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D9A40: jal         0x150ADA20
    // 0x151D9A44: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151D9A44: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    after_0:
    // 0x151D9A48: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x151D9A4C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151D9A50: addu        $v0, $sp, $t2
    ctx->r2 = ADD32(ctx->r29, ctx->r10);
    // 0x151D9A54: lbu         $v0, 0x23($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X23);
    // 0x151D9A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D9A5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D9A60: jr          $ra
    // 0x151D9A64: nop

    return;
    return;
    // 0x151D9A64: nop

;}
RECOMP_FUNC void func_15011360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15011360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15011364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15011368: jal         0x15008E00
    // 0x1501136C: nop

    func_15008E00(rdram, ctx);
        goto after_0;
    // 0x1501136C: nop

    after_0:
    // 0x15011370: jal         0x15008E10
    // 0x15011374: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_15008E10(rdram, ctx);
        goto after_1;
    // 0x15011374: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x15011378: jal         0x15008E10
    // 0x1501137C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_15008E10(rdram, ctx);
        goto after_2;
    // 0x1501137C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x15011380: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15011384: lw          $t6, 0x2E4C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2E4C);
    // 0x15011388: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x1501138C: addiu       $v0, $v0, 0xDF0
    ctx->r2 = ADD32(ctx->r2, 0XDF0);
    // 0x15011390: lbu         $t7, 0x14($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X14);
    // 0x15011394: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x15011398: beql        $t8, $zero, L_150113C8
    if (ctx->r24 == 0) {
        // 0x1501139C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150113C8;
    }
    goto skip_0;
    // 0x1501139C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150113A0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x150113A4: addiu       $t9, $zero, 0x30
    ctx->r25 = ADD32(0, 0X30);
    // 0x150113A8: addiu       $t1, $zero, 0x38
    ctx->r9 = ADD32(0, 0X38);
    // 0x150113AC: sb          $t9, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r25;
    // 0x150113B0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x150113B4: addiu       $t3, $zero, 0x5F
    ctx->r11 = ADD32(0, 0X5F);
    // 0x150113B8: sb          $t1, 0x6($t2)
    MEM_B(0X6, ctx->r10) = ctx->r9;
    // 0x150113BC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x150113C0: sb          $t3, 0x7($t4)
    MEM_B(0X7, ctx->r12) = ctx->r11;
    // 0x150113C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150113C8:
    // 0x150113C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150113CC: jr          $ra
    // 0x150113D0: nop

    return;
    return;
    // 0x150113D0: nop

;}
RECOMP_FUNC void func_151A2B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A2B84: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151A2B88: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x151A2B8C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151A2B90: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x151A2B94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A2B98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151A2B9C: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x151A2BA0: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151A2BA4: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151A2BA8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151A2BAC: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x151A2BB0: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151A2BB4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151A2BB8: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
    // 0x151A2BBC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151A2BC0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151A2BC4: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x151A2BC8: jr          $ra
    // 0x151A2BCC: nop

    return;
    return;
    // 0x151A2BCC: nop

;}
RECOMP_FUNC void func_1519BFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519BFBC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1519BFC0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1519BFC4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1519BFC8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1519BFCC: lb          $t7, 0x2C($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2C);
    // 0x1519BFD0: lw          $v0, 0x98($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X98);
    // 0x1519BFD4: lw          $v1, 0x94($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X94);
    // 0x1519BFD8: beql        $t7, $zero, L_1519C060
    if (ctx->r15 == 0) {
        // 0x1519BFDC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1519C060;
    }
    goto skip_0;
    // 0x1519BFDC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x1519BFE0: lhu         $a0, 0x130($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X130);
    // 0x1519BFE4: beql        $a0, $zero, L_1519C060
    if (ctx->r4 == 0) {
        // 0x1519BFE8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1519C060;
    }
    goto skip_1;
    // 0x1519BFE8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x1519BFEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1519BFF0: lb          $t8, 0x2D($t6)
    ctx->r24 = MEM_B(ctx->r14, 0X2D);
    // 0x1519BFF4: addiu       $t6, $zero, 0x1388
    ctx->r14 = ADD32(0, 0X1388);
    // 0x1519BFF8: addiu       $t7, $zero, 0x1F4
    ctx->r15 = ADD32(0, 0X1F4);
    // 0x1519BFFC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1519C000: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1519C004: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x1519C008: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x1519C00C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1519C010: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x1519C014: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519C018: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1519C01C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1519C020: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x1519C024: nop

    // 0x1519C028: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x1519C02C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1519C030: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1519C034: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x1519C038: nop

    // 0x1519C03C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x1519C040: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1519C044: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1519C048: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1519C04C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1519C050: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x1519C054: jal         0x1000F91C
    // 0x1519C058: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    func_1000F91C(rdram, ctx);
        goto after_0;
    // 0x1519C058: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_0:
    // 0x1519C05C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1519C060:
    // 0x1519C060: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1519C064: jr          $ra
    // 0x1519C068: nop

    return;
    return;
    // 0x1519C068: nop

;}
RECOMP_FUNC void func_151E4DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E4DD8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151E4DDC: lh          $t6, 0xB9A($t6)
    ctx->r14 = MEM_H(ctx->r14, 0XB9A);
    // 0x151E4DE0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x151E4DE4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4DE8: andi        $t7, $t6, 0x8020
    ctx->r15 = ctx->r14 & 0X8020;
    // 0x151E4DEC: beq         $t7, $zero, L_151E4DF8
    if (ctx->r15 == 0) {
        // 0x151E4DF0: nop
    
            goto L_151E4DF8;
    }
    // 0x151E4DF0: nop

    // 0x151E4DF4: sb          $t8, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r24;
L_151E4DF8:
    // 0x151E4DF8: jr          $ra
    // 0x151E4DFC: nop

    return;
    return;
    // 0x151E4DFC: nop

;}
RECOMP_FUNC void func_15163A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15163A18: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15163A1C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15163A20: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15163A24: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15163A28: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x15163A2C: bne         $a2, $at, L_15163A40
    if (ctx->r6 != ctx->r1) {
        // 0x15163A30: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_15163A40;
    }
    // 0x15163A30: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x15163A34: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x15163A38: jr          $ra
    // 0x15163A3C: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
    return;
    return;
    // 0x15163A3C: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
L_15163A40:
    // 0x15163A40: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x15163A44: bne         $v0, $at, L_15163A58
    if (ctx->r2 != ctx->r1) {
        // 0x15163A48: nop
    
            goto L_15163A58;
    }
    // 0x15163A48: nop

    // 0x15163A4C: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x15163A50: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15163A54: sb          $t8, 0x9($t9)
    MEM_B(0X9, ctx->r25) = ctx->r24;
L_15163A58:
    // 0x15163A58: jr          $ra
    // 0x15163A5C: nop

    return;
    return;
    // 0x15163A5C: nop

;}
RECOMP_FUNC void func_150B58F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B58F0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150B58F4: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x150B58F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150B58FC: addiu       $t7, $zero, 0x1A
    ctx->r15 = ADD32(0, 0X1A);
    // 0x150B5900: bne         $t6, $at, L_150B5910
    if (ctx->r14 != ctx->r1) {
        // 0x150B5904: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_150B5910;
    }
    // 0x150B5904: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x150B5908: jr          $ra
    // 0x150B590C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    return;
    // 0x150B590C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_150B5910:
    // 0x150B5910: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x150B5914: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150B5918: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x150B591C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150B5920: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x150B5924: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150B5928: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x150B592C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150B5930: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150B5934: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x150B5938: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x150B593C: lhu         $t9, -0x3CB6($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X3CB6);
    // 0x150B5940: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x150B5944: sh          $t9, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r25;
    // 0x150B5948: jr          $ra
    // 0x150B594C: nop

    return;
    return;
    // 0x150B594C: nop

;}
RECOMP_FUNC void func_150A5378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A5378: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150A537C: lw          $t2, 0x3668($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3668);
    // 0x150A5380: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x150A5384: lw          $t3, 0x366C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X366C);
L_150A5388:
    // 0x150A5388: sd          $zero, 0x0($t2)
    SD(0, 0X0, ctx->r10);
    // 0x150A538C: addiu       $t2, $t2, 0x8
    ctx->r10 = ADD32(ctx->r10, 0X8);
    // 0x150A5390: bne         $t2, $t3, L_150A5388
    if (ctx->r10 != ctx->r11) {
        // 0x150A5394: nop
    
            goto L_150A5388;
    }
    // 0x150A5394: nop

    // 0x150A5398: addiu       $sp, $sp, -0x160
    ctx->r29 = ADD32(ctx->r29, -0X160);
    // 0x150A539C: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x150A53A0: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x150A53A4: sw          $s2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r18;
    // 0x150A53A8: sw          $s3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r19;
    // 0x150A53AC: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x150A53B0: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x150A53B4: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x150A53B8: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    // 0x150A53BC: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    // 0x150A53C0: sw          $gp, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r28;
    // 0x150A53C4: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x150A53C8: swc1        $f21, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x150A53CC: swc1        $f22, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f22.u32l;
    // 0x150A53D0: swc1        $f23, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x150A53D4: swc1        $f24, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f24.u32l;
    // 0x150A53D8: swc1        $f25, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x150A53DC: swc1        $f26, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f26.u32l;
    // 0x150A53E0: swc1        $f27, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x150A53E4: swc1        $f28, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f28.u32l;
    // 0x150A53E8: swc1        $f29, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x150A53EC: swc1        $f30, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f30.u32l;
    // 0x150A53F0: swc1        $f31, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x150A53F4: sw          $ra, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r31;
    // 0x150A53F8: lw          $s6, 0x174($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X174);
    // 0x150A53FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150A5400: nop

    // 0x150A5404: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150A5408: lwc1        $f28, 0x35E0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X35E0);
    // 0x150A540C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150A5410: lwc1        $f27, 0x35E4($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, 0X35E4);
    // 0x150A5414: neg.s       $f28, $f28
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); 
    ctx->f28.fl = -ctx->f28.fl;
    // 0x150A5418: neg.s       $f27, $f27
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f27.fl); 
    ctx->f27.fl = -ctx->f27.fl;
    // 0x150A541C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150A5420: lwc1        $f29, 0x3670($at)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r1, 0X3670);
    // 0x150A5424: lwc1        $f20, 0x0($a2)
    ctx->f20.u32l = MEM_W(ctx->r6, 0X0);
    // 0x150A5428: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x150A542C: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
    // 0x150A5430: lwc1        $f22, 0x10($a2)
    ctx->f22.u32l = MEM_W(ctx->r6, 0X10);
    // 0x150A5434: lwc1        $f3, 0x14($a2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r6, 0X14);
    // 0x150A5438: lwc1        $f4, 0x18($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X18);
    // 0x150A543C: lwc1        $f24, 0x20($a2)
    ctx->f24.u32l = MEM_W(ctx->r6, 0X20);
    // 0x150A5440: lwc1        $f5, 0x24($a2)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r6, 0X24);
    // 0x150A5444: lwc1        $f6, 0x28($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X28);
    // 0x150A5448: lwc1        $f26, 0x30($a2)
    ctx->f26.u32l = MEM_W(ctx->r6, 0X30);
    // 0x150A544C: lwc1        $f7, 0x34($a2)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r6, 0X34);
    // 0x150A5450: lwc1        $f8, 0x38($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X38);
    // 0x150A5454: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x150A5458: lw          $s3, -0x41B8($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X41B8);
    // 0x150A545C: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x150A5460: lw          $s7, -0x41C4($s7)
    ctx->r23 = MEM_W(ctx->r23, -0X41C4);
    // 0x150A5464: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x150A5468: lw          $s4, 0x3668($s4)
    ctx->r20 = MEM_W(ctx->r20, 0X3668);
    // 0x150A546C: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x150A5470: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x150A5474: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x150A5478: addiu       $s5, $zero, 0x0
    ctx->r21 = ADD32(0, 0X0);
L_150A547C:
    // 0x150A547C: slt         $at, $s3, $s5
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x150A5480: bne         $at, $zero, L_150A548C
    if (ctx->r1 != 0) {
        // 0x150A5484: lh          $s0, 0x8($s3)
        ctx->r16 = MEM_H(ctx->r19, 0X8);
            goto L_150A548C;
    }
    // 0x150A5484: lh          $s0, 0x8($s3)
    ctx->r16 = MEM_H(ctx->r19, 0X8);
    // 0x150A5488: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
L_150A548C:
    // 0x150A548C: lh          $t8, 0x2($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2);
    // 0x150A5490: nor         $t6, $s6, $zero
    ctx->r14 = ~(ctx->r22 | 0);
    // 0x150A5494: and         $t8, $t8, $t6
    ctx->r24 = ctx->r24 & ctx->r14;
    // 0x150A5498: sh          $t8, 0x2($s3)
    MEM_H(0X2, ctx->r19) = ctx->r24;
    // 0x150A549C: lh          $t6, 0x0($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X0);
    // 0x150A54A0: and         $t0, $t6, $s6
    ctx->r8 = ctx->r14 & ctx->r22;
    // 0x150A54A4: bne         $t0, $zero, L_150A55FC
    if (ctx->r8 != 0) {
        // 0x150A54A8: nop
    
            goto L_150A55FC;
    }
    // 0x150A54A8: nop

    // 0x150A54AC: beq         $a3, $fp, L_150A5598
    if (ctx->r7 == ctx->r30) {
        // 0x150A54B0: lh          $s1, 0xA($s3)
        ctx->r17 = MEM_H(ctx->r19, 0XA);
            goto L_150A5598;
    }
    // 0x150A54B0: lh          $s1, 0xA($s3)
    ctx->r17 = MEM_H(ctx->r19, 0XA);
    // 0x150A54B4: lhu         $s2, 0x6($s3)
    ctx->r18 = MEM_HU(ctx->r19, 0X6);
    // 0x150A54B8: addu        $t0, $s0, $s2
    ctx->r8 = ADD32(ctx->r16, ctx->r18);
    // 0x150A54BC: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x150A54C0: jal         0x150A5AB8
    // 0x150A54C4: addu        $t2, $s1, $s2
    ctx->r10 = ADD32(ctx->r17, ctx->r18);
    func_150A5AB8(rdram, ctx);
        goto after_0;
    // 0x150A54C4: addu        $t2, $s1, $s2
    ctx->r10 = ADD32(ctx->r17, ctx->r18);
    after_0:
    // 0x150A54C8: or          $t4, $t3, $zero
    ctx->r12 = ctx->r11 | 0;
    // 0x150A54CC: or          $t7, $t3, $zero
    ctx->r15 = ctx->r11 | 0;
    // 0x150A54D0: jal         0x150A5AB8
    // 0x150A54D4: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    func_150A5AB8(rdram, ctx);
        goto after_1;
    // 0x150A54D4: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    after_1:
    // 0x150A54D8: bne         $t3, $zero, L_150A54E4
    if (ctx->r11 != 0) {
        // 0x150A54DC: addu        $t7, $t7, $t3
        ctx->r15 = ADD32(ctx->r15, ctx->r11);
            goto L_150A54E4;
    }
    // 0x150A54DC: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x150A54E0: bne         $t7, $zero, L_150A5598
    if (ctx->r15 != 0) {
        // 0x150A54E4: and         $t4, $t4, $t3
        ctx->r12 = ctx->r12 & ctx->r11;
            goto L_150A5598;
    }
L_150A54E4:
    // 0x150A54E4: and         $t4, $t4, $t3
    ctx->r12 = ctx->r12 & ctx->r11;
    // 0x150A54E8: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x150A54EC: jal         0x150A5AB8
    // 0x150A54F0: subu        $t0, $s0, $s2
    ctx->r8 = SUB32(ctx->r16, ctx->r18);
    func_150A5AB8(rdram, ctx);
        goto after_2;
    // 0x150A54F0: subu        $t0, $s0, $s2
    ctx->r8 = SUB32(ctx->r16, ctx->r18);
    after_2:
    // 0x150A54F4: bne         $t3, $zero, L_150A5500
    if (ctx->r11 != 0) {
        // 0x150A54F8: addu        $t7, $t7, $t3
        ctx->r15 = ADD32(ctx->r15, ctx->r11);
            goto L_150A5500;
    }
    // 0x150A54F8: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x150A54FC: bne         $t7, $zero, L_150A5598
    if (ctx->r15 != 0) {
        // 0x150A5500: and         $t4, $t4, $t3
        ctx->r12 = ctx->r12 & ctx->r11;
            goto L_150A5598;
    }
L_150A5500:
    // 0x150A5500: and         $t4, $t4, $t3
    ctx->r12 = ctx->r12 & ctx->r11;
    // 0x150A5504: jal         0x150A5AB8
    // 0x150A5508: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    func_150A5AB8(rdram, ctx);
        goto after_3;
    // 0x150A5508: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    after_3:
    // 0x150A550C: bne         $t3, $zero, L_150A5518
    if (ctx->r11 != 0) {
        // 0x150A5510: addu        $t7, $t7, $t3
        ctx->r15 = ADD32(ctx->r15, ctx->r11);
            goto L_150A5518;
    }
    // 0x150A5510: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x150A5514: bne         $t7, $zero, L_150A5598
    if (ctx->r15 != 0) {
        // 0x150A5518: and         $t4, $t4, $t3
        ctx->r12 = ctx->r12 & ctx->r11;
            goto L_150A5598;
    }
L_150A5518:
    // 0x150A5518: and         $t4, $t4, $t3
    ctx->r12 = ctx->r12 & ctx->r11;
    // 0x150A551C: addu        $t0, $s0, $s2
    ctx->r8 = ADD32(ctx->r16, ctx->r18);
    // 0x150A5520: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x150A5524: jal         0x150A5AB8
    // 0x150A5528: subu        $t2, $s1, $s2
    ctx->r10 = SUB32(ctx->r17, ctx->r18);
    func_150A5AB8(rdram, ctx);
        goto after_4;
    // 0x150A5528: subu        $t2, $s1, $s2
    ctx->r10 = SUB32(ctx->r17, ctx->r18);
    after_4:
    // 0x150A552C: bne         $t3, $zero, L_150A5538
    if (ctx->r11 != 0) {
        // 0x150A5530: addu        $t7, $t7, $t3
        ctx->r15 = ADD32(ctx->r15, ctx->r11);
            goto L_150A5538;
    }
    // 0x150A5530: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x150A5534: bne         $t7, $zero, L_150A5598
    if (ctx->r15 != 0) {
        // 0x150A5538: and         $t4, $t4, $t3
        ctx->r12 = ctx->r12 & ctx->r11;
            goto L_150A5598;
    }
L_150A5538:
    // 0x150A5538: and         $t4, $t4, $t3
    ctx->r12 = ctx->r12 & ctx->r11;
    // 0x150A553C: jal         0x150A5AB8
    // 0x150A5540: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    func_150A5AB8(rdram, ctx);
        goto after_5;
    // 0x150A5540: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    after_5:
    // 0x150A5544: bne         $t3, $zero, L_150A5550
    if (ctx->r11 != 0) {
        // 0x150A5548: addu        $t7, $t7, $t3
        ctx->r15 = ADD32(ctx->r15, ctx->r11);
            goto L_150A5550;
    }
    // 0x150A5548: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x150A554C: bne         $t7, $zero, L_150A5598
    if (ctx->r15 != 0) {
        // 0x150A5550: and         $t4, $t4, $t3
        ctx->r12 = ctx->r12 & ctx->r11;
            goto L_150A5598;
    }
L_150A5550:
    // 0x150A5550: and         $t4, $t4, $t3
    ctx->r12 = ctx->r12 & ctx->r11;
    // 0x150A5554: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x150A5558: jal         0x150A5AB8
    // 0x150A555C: subu        $t0, $s0, $s2
    ctx->r8 = SUB32(ctx->r16, ctx->r18);
    func_150A5AB8(rdram, ctx);
        goto after_6;
    // 0x150A555C: subu        $t0, $s0, $s2
    ctx->r8 = SUB32(ctx->r16, ctx->r18);
    after_6:
    // 0x150A5560: bne         $t3, $zero, L_150A556C
    if (ctx->r11 != 0) {
        // 0x150A5564: addu        $t7, $t7, $t3
        ctx->r15 = ADD32(ctx->r15, ctx->r11);
            goto L_150A556C;
    }
    // 0x150A5564: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x150A5568: bne         $t7, $zero, L_150A5598
    if (ctx->r15 != 0) {
        // 0x150A556C: and         $t4, $t4, $t3
        ctx->r12 = ctx->r12 & ctx->r11;
            goto L_150A5598;
    }
L_150A556C:
    // 0x150A556C: and         $t4, $t4, $t3
    ctx->r12 = ctx->r12 & ctx->r11;
    // 0x150A5570: jal         0x150A5AB8
    // 0x150A5574: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    func_150A5AB8(rdram, ctx);
        goto after_7;
    // 0x150A5574: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    after_7:
    // 0x150A5578: and         $t4, $t4, $t3
    ctx->r12 = ctx->r12 & ctx->r11;
    // 0x150A557C: bne         $zero, $t4, L_150A55FC
    if (0 != ctx->r12) {
        // 0x150A5580: addu        $t7, $t7, $t3
        ctx->r15 = ADD32(ctx->r15, ctx->r11);
            goto L_150A55FC;
    }
    // 0x150A5580: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x150A5584: bne         $t7, $zero, L_150A5598
    if (ctx->r15 != 0) {
        // 0x150A5588: nop
    
            goto L_150A5598;
    }
    // 0x150A5588: nop

    // 0x150A558C: lh          $s5, 0x4($s3)
    ctx->r21 = MEM_H(ctx->r19, 0X4);
    // 0x150A5590: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150A5594: addu        $s5, $s5, $s3
    ctx->r21 = ADD32(ctx->r21, ctx->r19);
L_150A5598:
    // 0x150A5598: or          $t8, $t8, $s6
    ctx->r24 = ctx->r24 | ctx->r22;
    // 0x150A559C: sh          $t8, 0x2($s3)
    MEM_H(0X2, ctx->r19) = ctx->r24;
    // 0x150A55A0: lh          $t5, 0xC($s3)
    ctx->r13 = MEM_H(ctx->r19, 0XC);
    // 0x150A55A4: beq         $t5, $zero, L_150A55B8
    if (ctx->r13 == 0) {
        // 0x150A55A8: addiu       $t7, $s3, 0xE
        ctx->r15 = ADD32(ctx->r19, 0XE);
            goto L_150A55B8;
    }
    // 0x150A55A8: addiu       $t7, $s3, 0xE
    ctx->r15 = ADD32(ctx->r19, 0XE);
    // 0x150A55AC: j           L_150A547C
    // 0x150A55B0: addu        $s3, $s3, $t5
    ctx->r19 = ADD32(ctx->r19, ctx->r13);
        goto L_150A547C;
    // 0x150A55B0: addu        $s3, $s3, $t5
    ctx->r19 = ADD32(ctx->r19, ctx->r13);
    // 0x150A55B4: addiu       $t7, $s3, 0xE
    ctx->r15 = ADD32(ctx->r19, 0XE);
L_150A55B8:
    // 0x150A55B8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_150A55BC:
    // 0x150A55BC: lbu         $t5, 0x0($t7)
    ctx->r13 = MEM_BU(ctx->r15, 0X0);
    // 0x150A55C0: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x150A55C4: beq         $t5, $zero, L_150A5640
    if (ctx->r13 == 0) {
        // 0x150A55C8: andi        $s0, $t5, 0x7F
        ctx->r16 = ctx->r13 & 0X7F;
            goto L_150A5640;
    }
    // 0x150A55C8: andi        $s0, $t5, 0x7F
    ctx->r16 = ctx->r13 & 0X7F;
    // 0x150A55CC: beql        $t5, $s0, L_150A55E4
    if (ctx->r13 == ctx->r16) {
        // 0x150A55D0: addu        $s0, $s0, $gp
        ctx->r16 = ADD32(ctx->r16, ctx->r28);
            goto L_150A55E4;
    }
    goto skip_0;
    // 0x150A55D0: addu        $s0, $s0, $gp
    ctx->r16 = ADD32(ctx->r16, ctx->r28);
    skip_0:
    // 0x150A55D4: lbu         $s2, 0x0($t7)
    ctx->r18 = MEM_BU(ctx->r15, 0X0);
    // 0x150A55D8: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x150A55DC: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x150A55E0: or          $s0, $s0, $s2
    ctx->r16 = ctx->r16 | ctx->r18;
L_150A55E4:
    // 0x150A55E4: addu        $v0, $s0, $s4
    ctx->r2 = ADD32(ctx->r16, ctx->r20);
    // 0x150A55E8: lb          $t0, 0x0($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X0);
    // 0x150A55EC: bne         $t0, $zero, L_150A55BC
    if (ctx->r8 != 0) {
        // 0x150A55F0: or          $gp, $s0, $zero
        ctx->r28 = ctx->r16 | 0;
            goto L_150A55BC;
    }
    // 0x150A55F0: or          $gp, $s0, $zero
    ctx->r28 = ctx->r16 | 0;
    // 0x150A55F4: j           L_150A55BC
    // 0x150A55F8: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
        goto L_150A55BC;
    // 0x150A55F8: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
L_150A55FC:
    // 0x150A55FC: lh          $s0, 0x4($s3)
    ctx->r16 = MEM_H(ctx->r19, 0X4);
    // 0x150A5600: nor         $t6, $s6, $zero
    ctx->r14 = ~(ctx->r22 | 0);
    // 0x150A5604: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x150A5608: addu        $s0, $s0, $s3
    ctx->r16 = ADD32(ctx->r16, ctx->r19);
L_150A560C:
    // 0x150A560C: lh          $t8, 0x2($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X2);
L_150A5610:
    // 0x150A5610: lh          $s2, 0xC($s1)
    ctx->r18 = MEM_H(ctx->r17, 0XC);
    // 0x150A5614: and         $t8, $t8, $t6
    ctx->r24 = ctx->r24 & ctx->r14;
    // 0x150A5618: sh          $t8, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r24;
    // 0x150A561C: bne         $s2, $zero, L_150A560C
    if (ctx->r18 != 0) {
        // 0x150A5620: addu        $s1, $s1, $s2
        ctx->r17 = ADD32(ctx->r17, ctx->r18);
            goto L_150A560C;
    }
    // 0x150A5620: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x150A5624: lh          $s2, 0x4($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X4);
    // 0x150A5628: beq         $s2, $zero, L_150A5654
    if (ctx->r18 == 0) {
        // 0x150A562C: addu        $s1, $s1, $s2
        ctx->r17 = ADD32(ctx->r17, ctx->r18);
            goto L_150A5654;
    }
    // 0x150A562C: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x150A5630: beq         $s0, $s1, L_150A5640
    if (ctx->r16 == ctx->r17) {
        // 0x150A5634: nop
    
            goto L_150A5640;
    }
    // 0x150A5634: nop

    // 0x150A5638: j           L_150A5610
    // 0x150A563C: lh          $t8, 0x2($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X2);
        goto L_150A5610;
    // 0x150A563C: lh          $t8, 0x2($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X2);
L_150A5640:
    // 0x150A5640: lh          $s0, 0x4($s3)
    ctx->r16 = MEM_H(ctx->r19, 0X4);
    // 0x150A5644: beq         $s0, $zero, L_150A5654
    if (ctx->r16 == 0) {
        // 0x150A5648: addu        $s3, $s3, $s0
        ctx->r19 = ADD32(ctx->r19, ctx->r16);
            goto L_150A5654;
    }
    // 0x150A5648: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
    // 0x150A564C: j           L_150A547C
    // 0x150A5650: nop

        goto L_150A547C;
    // 0x150A5650: nop

L_150A5654:
    // 0x150A5654: addiu       $t0, $sp, 0xF8
    ctx->r8 = ADD32(ctx->r29, 0XF8);
    // 0x150A5658: or          $t1, $sp, $zero
    ctx->r9 = ctx->r29 | 0;
L_150A565C:
    // 0x150A565C: sd          $zero, 0x58($t1)
    SD(0, 0X58, ctx->r9);
    // 0x150A5660: bne         $t1, $t0, L_150A565C
    if (ctx->r9 != ctx->r8) {
        // 0x150A5664: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_150A565C;
    }
    // 0x150A5664: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x150A5668: lui         $t0, 0xE600
    ctx->r8 = S32(0XE600 << 16);
    // 0x150A566C: dsll32      $t0, $t0, 0
    ctx->r8 = ctx->r8 << (0 + 32);
    // 0x150A5670: dmtc1       $t0, $f1
    ctx->f1.u64 = ctx->r8;
    // 0x150A5674: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x150A5678: dsll32      $t0, $t0, 0
    ctx->r8 = ctx->r8 << (0 + 32);
    // 0x150A567C: dmtc1       $t0, $f4
    ctx->f4.u64 = ctx->r8;
    // 0x150A5680: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150A5684: lw          $t1, 0x3668($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3668);
    // 0x150A5688: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x150A568C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x150A5690: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x150A5694: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150A5698: lwc1        $f13, -0x970($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X970);
    // 0x150A569C: lui         $fp, 0x101
    ctx->r30 = S32(0X101 << 16);
    // 0x150A56A0: ori         $fp, $fp, 0x101
    ctx->r30 = ctx->r30 | 0X101;
    // 0x150A56A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150A56A8: or          $t7, $zero, $zero
    ctx->r15 = 0 | 0;
    // 0x150A56AC: or          $t9, $zero, $zero
    ctx->r25 = 0 | 0;
    // 0x150A56B0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x150A56B4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x150A56B8: dmtc1       $zero, $f10
    ctx->f10.u64 = 0;
    // 0x150A56BC: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x150A56C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150A56C4: or          $t6, $zero, $zero
    ctx->r14 = 0 | 0;
    // 0x150A56C8: dmtc1       $zero, $f7
    ctx->f7.u64 = 0;
    // 0x150A56CC: or          $t8, $zero, $zero
    ctx->r24 = 0 | 0;
    // 0x150A56D0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x150A56D4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x150A56D8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x150A56DC: dmtc1       $zero, $f9
    ctx->f9.u64 = 0;
    // 0x150A56E0: dmtc1       $zero, $f8
    ctx->f8.u64 = 0;
    // 0x150A56E4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x150A56E8: dmtc1       $zero, $f2
    ctx->f2.u64 = 0;
    // 0x150A56EC: dmtc1       $zero, $f3
    ctx->f3.u64 = 0;
    // 0x150A56F0: dmtc1       $zero, $f5
    ctx->f5.u64 = 0;
    // 0x150A56F4: dmtc1       $zero, $f6
    ctx->f6.u64 = 0;
    // 0x150A56F8: dmtc1       $zero, $f0
    ctx->f0.u64 = 0;
    // 0x150A56FC: lui         $t2, 0xA000
    ctx->r10 = S32(0XA000 << 16);
    // 0x150A5700: j           L_150A579C
    // 0x150A5704: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    static_5_150A579C(rdram, ctx);
    return;
    // 0x150A5704: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
;}
RECOMP_FUNC void func_151C87E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C87E0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x151C87E4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x151C87E8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151C87EC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151C87F0: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x151C87F4: addiu       $a1, $sp, 0x4A
    ctx->r5 = ADD32(ctx->r29, 0X4A);
    // 0x151C87F8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x151C87FC: slti        $at, $v0, 0xBB
    ctx->r1 = SIGNED(ctx->r2) < 0XBB ? 1 : 0;
    // 0x151C8800: beq         $at, $zero, L_151C8840
    if (ctx->r1 == 0) {
        // 0x151C8804: addiu       $a3, $sp, 0x46
        ctx->r7 = ADD32(ctx->r29, 0X46);
            goto L_151C8840;
    }
    // 0x151C8804: addiu       $a3, $sp, 0x46
    ctx->r7 = ADD32(ctx->r29, 0X46);
    // 0x151C8808: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151C880C: beq         $v0, $at, L_151C8840
    if (ctx->r2 == ctx->r1) {
        // 0x151C8810: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_151C8840;
    }
    // 0x151C8810: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x151C8814: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x151C8818: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x151C881C: lw          $t7, 0x1C90($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1C90);
    // 0x151C8820: lwc1        $f8, 0x14C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x151C8824: lh          $t8, 0x1A($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X1A);
    // 0x151C8828: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x151C882C: nop

    // 0x151C8830: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151C8834: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151C8838: b           L_151C8850
    // 0x151C883C: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
        goto L_151C8850;
    // 0x151C883C: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
L_151C8840:
    // 0x151C8840: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x151C8844: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C8848: nop

    // 0x151C884C: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
L_151C8850:
    // 0x151C8850: jal         0x1507C3E0
    // 0x151C8854: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    func_1507C3E0(rdram, ctx);
        goto after_0;
    // 0x151C8854: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    after_0:
    // 0x151C8858: lh          $t9, 0x4A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4A);
    // 0x151C885C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151C8860: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x151C8864: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x151C8868: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151C886C: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x151C8870: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151C8874: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x151C8878: c.eq.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl == ctx->f18.fl;
    // 0x151C887C: nop

    // 0x151C8880: bc1fl       L_151C8894
    if (!c1cs) {
        // 0x151C8884: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_151C8894;
    }
    goto skip_0;
    // 0x151C8884: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_0:
    // 0x151C8888: b           L_151C8988
    // 0x151C888C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151C8988;
    // 0x151C888C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C8890: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_151C8894:
    // 0x151C8894: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151C8898: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151C889C: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x151C88A0: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x151C88A4: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x151C88A8: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151C88AC: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151C88B0: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x151C88B4: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x151C88B8: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x151C88BC: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151C88C0: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x151C88C4: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x151C88C8: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151C88CC: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151C88D0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x151C88D4: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x151C88D8: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x151C88DC: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151C88E0: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x151C88E4: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151C88E8: lwc1        $f12, 0x40($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151C88EC: lwc1        $f16, 0x48($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151C88F0: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x151C88F4: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x151C88F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C88FC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x151C8900: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151C8904: add.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x151C8908: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x151C890C: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x151C8910: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x151C8914: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x151C8918: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x151C891C: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x151C8920: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x151C8924: jal         0x15145128
    // 0x151C8928: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_15145128(rdram, ctx);
        goto after_1;
    // 0x151C8928: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x151C892C: bne         $v0, $zero, L_151C893C
    if (ctx->r2 != 0) {
        // 0x151C8930: addiu       $a0, $sp, 0x88
        ctx->r4 = ADD32(ctx->r29, 0X88);
            goto L_151C893C;
    }
    // 0x151C8930: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151C8934: b           L_151C8988
    // 0x151C8938: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151C8988;
    // 0x151C8938: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C893C:
    // 0x151C893C: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x151C8940: addiu       $t0, $sp, 0x60
    ctx->r8 = ADD32(ctx->r29, 0X60);
    // 0x151C8944: addiu       $t1, $sp, 0x54
    ctx->r9 = ADD32(ctx->r29, 0X54);
    // 0x151C8948: addiu       $t2, $sp, 0x50
    ctx->r10 = ADD32(ctx->r29, 0X50);
    // 0x151C894C: addiu       $t3, $sp, 0x4C
    ctx->r11 = ADD32(ctx->r29, 0X4C);
    // 0x151C8950: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x151C8954: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x151C8958: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x151C895C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x151C8960: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151C8964: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    // 0x151C8968: lw          $a3, 0xA8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA8);
    // 0x151C896C: jal         0x151451F0
    // 0x151C8970: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_151451F0(rdram, ctx);
        goto after_2;
    // 0x151C8970: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x151C8974: beql        $v0, $zero, L_151C8988
    if (ctx->r2 == 0) {
        // 0x151C8978: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_151C8988;
    }
    goto skip_1;
    // 0x151C8978: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x151C897C: b           L_151C8988
    // 0x151C8980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151C8988;
    // 0x151C8980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151C8984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C8988:
    // 0x151C8988: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151C898C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x151C8990: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x151C8994: jr          $ra
    // 0x151C8998: nop

    return;
    return;
    // 0x151C8998: nop

;}
RECOMP_FUNC void func_15061B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15061B4C: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x15061B50: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x15061B54: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x15061B58: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x15061B5C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x15061B60: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x15061B64: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x15061B68: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x15061B6C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x15061B70: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x15061B74: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15061B78: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x15061B7C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x15061B80: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x15061B84: jal         0x100226F0
    // 0x15061B88: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x15061B88: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x15061B8C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15061B90: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x15061B94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15061B98: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x15061B9C: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x15061BA0: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x15061BA4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x15061BA8: addiu       $s4, $s4, -0x3D68
    ctx->r20 = ADD32(ctx->r20, -0X3D68);
    // 0x15061BAC: addiu       $s7, $s7, -0x6BD4
    ctx->r23 = ADD32(ctx->r23, -0X6BD4);
    // 0x15061BB0: addiu       $s3, $s3, -0x3D30
    ctx->r19 = ADD32(ctx->r19, -0X3D30);
    // 0x15061BB4: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x15061BB8: addiu       $s6, $sp, 0x8C
    ctx->r22 = ADD32(ctx->r29, 0X8C);
    // 0x15061BBC: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x15061BC0: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
L_15061BC4:
    // 0x15061BC4: beq         $t6, $zero, L_150623A8
    if (ctx->r14 == 0) {
        // 0x15061BC8: nop
    
            goto L_150623A8;
    }
    // 0x15061BC8: nop

    // 0x15061BCC: lbu         $t7, 0x2FA($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X2FA);
    // 0x15061BD0: beq         $t7, $zero, L_150623A8
    if (ctx->r15 == 0) {
        // 0x15061BD4: nop
    
            goto L_150623A8;
    }
    // 0x15061BD4: nop

    // 0x15061BD8: lbu         $s0, 0x4($s3)
    ctx->r16 = MEM_BU(ctx->r19, 0X4);
    // 0x15061BDC: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x15061BE0: lbu         $t8, 0xA0($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XA0);
    // 0x15061BE4: bnel        $s0, $at, L_15061C70
    if (ctx->r16 != ctx->r1) {
        // 0x15061BE8: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_15061C70;
    }
    goto skip_0;
    // 0x15061BE8: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    skip_0:
    // 0x15061BEC: bne         $t8, $zero, L_15061C6C
    if (ctx->r24 != 0) {
        // 0x15061BF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15061C6C;
    }
    // 0x15061BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061BF4: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    // 0x15061BF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15061BFC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15061C00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061C04: jal         0x15062D10
    // 0x15061C08: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_1;
    // 0x15061C08: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x15061C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061C10: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x15061C14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15061C18: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15061C1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061C20: jal         0x15062D10
    // 0x15061C24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_2;
    // 0x15061C24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x15061C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061C2C: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    // 0x15061C30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15061C34: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15061C38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061C3C: jal         0x15062D10
    // 0x15061C40: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_3;
    // 0x15061C40: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x15061C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061C48: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x15061C4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15061C50: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15061C54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061C58: jal         0x15062D10
    // 0x15061C5C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_4;
    // 0x15061C5C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x15061C60: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15061C64: b           L_150623A8
    // 0x15061C68: sb          $t9, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r25;
        goto L_150623A8;
    // 0x15061C68: sb          $t9, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r25;
L_15061C6C:
    // 0x15061C6C: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
L_15061C70:
    // 0x15061C70: bne         $s0, $at, L_15061CF8
    if (ctx->r16 != ctx->r1) {
        // 0x15061C74: lbu         $t0, 0xA1($sp)
        ctx->r8 = MEM_BU(ctx->r29, 0XA1);
            goto L_15061CF8;
    }
    // 0x15061C74: lbu         $t0, 0xA1($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XA1);
    // 0x15061C78: bne         $t0, $zero, L_15061CF8
    if (ctx->r8 != 0) {
        // 0x15061C7C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15061CF8;
    }
    // 0x15061C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061C80: addiu       $a1, $zero, 0x1E9
    ctx->r5 = ADD32(0, 0X1E9);
    // 0x15061C84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15061C88: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15061C8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061C90: jal         0x15062D10
    // 0x15061C94: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_5;
    // 0x15061C94: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x15061C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061C9C: addiu       $a1, $zero, 0x1EB
    ctx->r5 = ADD32(0, 0X1EB);
    // 0x15061CA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15061CA4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15061CA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061CAC: jal         0x15062D10
    // 0x15061CB0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_6;
    // 0x15061CB0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_6:
    // 0x15061CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061CB8: addiu       $a1, $zero, 0x1ED
    ctx->r5 = ADD32(0, 0X1ED);
    // 0x15061CBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15061CC0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15061CC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061CC8: jal         0x15062D10
    // 0x15061CCC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_7;
    // 0x15061CCC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_7:
    // 0x15061CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061CD4: addiu       $a1, $zero, 0x1EF
    ctx->r5 = ADD32(0, 0X1EF);
    // 0x15061CD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15061CDC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15061CE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061CE4: jal         0x15062D10
    // 0x15061CE8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_8;
    // 0x15061CE8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_8:
    // 0x15061CEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15061CF0: b           L_150623A8
    // 0x15061CF4: sb          $t1, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r9;
        goto L_150623A8;
    // 0x15061CF4: sb          $t1, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r9;
L_15061CF8:
    // 0x15061CF8: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x15061CFC: bne         $s0, $at, L_15061E80
    if (ctx->r16 != ctx->r1) {
        // 0x15061D00: lbu         $t2, 0xA2($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0XA2);
            goto L_15061E80;
    }
    // 0x15061D00: lbu         $t2, 0xA2($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XA2);
    // 0x15061D04: bnel        $t2, $zero, L_15061E84
    if (ctx->r10 != 0) {
        // 0x15061D08: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_15061E84;
    }
    goto skip_1;
    // 0x15061D08: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    skip_1:
    // 0x15061D0C: jal         0x150ADA20
    // 0x15061D10: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x15061D10: nop

    after_9:
    // 0x15061D14: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x15061D18: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15061D1C: mfhi        $t3
    ctx->r11 = hi;
    // 0x15061D20: sltiu       $at, $t3, 0x12C
    ctx->r1 = ctx->r11 < 0X12C ? 1 : 0;
    // 0x15061D24: beql        $at, $zero, L_15061D4C
    if (ctx->r1 == 0) {
        // 0x15061D28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15061D4C;
    }
    goto skip_2;
    // 0x15061D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x15061D2C: jal         0x150ADA20
    // 0x15061D30: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x15061D30: nop

    after_10:
    // 0x15061D34: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15061D38: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15061D3C: mfhi        $t4
    ctx->r12 = hi;
    // 0x15061D40: addiu       $t5, $t4, -0x2
    ctx->r13 = ADD32(ctx->r12, -0X2);
    // 0x15061D44: sb          $t5, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r13;
    // 0x15061D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_15061D4C:
    // 0x15061D4C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x15061D50: addiu       $a2, $zero, -0x4
    ctx->r6 = ADD32(0, -0X4);
    // 0x15061D54: lb          $a3, 0x8($s4)
    ctx->r7 = MEM_B(ctx->r20, 0X8);
    // 0x15061D58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061D5C: jal         0x15062D10
    // 0x15061D60: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_11;
    // 0x15061D60: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_11:
    // 0x15061D64: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15061D68: addiu       $t7, $t7, 0x4020
    ctx->r15 = ADD32(ctx->r15, 0X4020);
    // 0x15061D6C: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x15061D70: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x15061D74: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x15061D78: beq         $v0, $zero, L_15061DDC
    if (ctx->r2 == 0) {
        // 0x15061D7C: nop
    
            goto L_15061DDC;
    }
    // 0x15061D7C: nop

    // 0x15061D80: lwc1        $f4, 0x4($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X4);
    // 0x15061D84: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x15061D88: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    // 0x15061D8C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15061D90: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x15061D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061D98: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x15061D9C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x15061DA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15061DA4: jal         0x15062E24
    // 0x15061DA8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15062E24(rdram, ctx);
        goto after_12;
    // 0x15061DA8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_12:
    // 0x15061DAC: lwc1        $f8, 0x0($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X0);
    // 0x15061DB0: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x15061DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061DB8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15061DBC: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    // 0x15061DC0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15061DC4: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x15061DC8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x15061DCC: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x15061DD0: addiu       $a3, $zero, 0x37
    ctx->r7 = ADD32(0, 0X37);
    // 0x15061DD4: jal         0x15062E24
    // 0x15061DD8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_15062E24(rdram, ctx);
        goto after_13;
    // 0x15061DD8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_13:
L_15061DDC:
    // 0x15061DDC: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15061DE0: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x15061DE4: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x15061DE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15061DEC: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x15061DF0: lwc1        $f18, 0x0($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X0);
    // 0x15061DF4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15061DF8: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15061DFC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15061E00: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15061E04: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15061E08: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x15061E0C: swc1        $f8, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f8.u32l;
    // 0x15061E10: lwc1        $f0, 0x0($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X0);
    // 0x15061E14: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x15061E18: nop

    // 0x15061E1C: bc1fl       L_15061E38
    if (!c1cs) {
        // 0x15061E20: lui         $at, 0xBF00
        ctx->r1 = S32(0XBF00 << 16);
            goto L_15061E38;
    }
    goto skip_3;
    // 0x15061E20: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    skip_3:
    // 0x15061E24: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15061E28: nop

    // 0x15061E2C: add.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x15061E30: swc1        $f4, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f4.u32l;
    // 0x15061E34: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
L_15061E38:
    // 0x15061E38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15061E3C: lwc1        $f18, 0x4($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X4);
    // 0x15061E40: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15061E44: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x15061E48: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15061E4C: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x15061E50: swc1        $f10, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f10.u32l;
    // 0x15061E54: lwc1        $f0, 0x4($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X4);
    // 0x15061E58: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x15061E5C: nop

    // 0x15061E60: bc1f        L_15061E78
    if (!c1cs) {
        // 0x15061E64: nop
    
            goto L_15061E78;
    }
    // 0x15061E64: nop

    // 0x15061E68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15061E6C: nop

    // 0x15061E70: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x15061E74: swc1        $f6, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f6.u32l;
L_15061E78:
    // 0x15061E78: b           L_150623A8
    // 0x15061E7C: sb          $t4, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r12;
        goto L_150623A8;
    // 0x15061E7C: sb          $t4, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r12;
L_15061E80:
    // 0x15061E80: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
L_15061E84:
    // 0x15061E84: bne         $s0, $at, L_15061EE8
    if (ctx->r16 != ctx->r1) {
        // 0x15061E88: lbu         $t5, 0xA3($sp)
        ctx->r13 = MEM_BU(ctx->r29, 0XA3);
            goto L_15061EE8;
    }
    // 0x15061E88: lbu         $t5, 0xA3($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XA3);
    // 0x15061E8C: bne         $t5, $zero, L_15061EE8
    if (ctx->r13 != 0) {
        // 0x15061E90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15061EE8;
    }
    // 0x15061E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061E94: lb          $v0, 0x9($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X9);
    // 0x15061E98: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x15061E9C: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    // 0x15061EA0: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x15061EA4: bne         $at, $zero, L_15061EB4
    if (ctx->r1 != 0) {
        // 0x15061EA8: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_15061EB4;
    }
    // 0x15061EA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15061EAC: b           L_15061EC0
    // 0x15061EB0: sb          $t6, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r14;
        goto L_15061EC0;
    // 0x15061EB0: sb          $t6, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r14;
L_15061EB4:
    // 0x15061EB4: bgtzl       $v0, L_15061EC4
    if (SIGNED(ctx->r2) > 0) {
        // 0x15061EB8: lb          $t7, 0xA($s4)
        ctx->r15 = MEM_B(ctx->r20, 0XA);
            goto L_15061EC4;
    }
    goto skip_4;
    // 0x15061EB8: lb          $t7, 0xA($s4)
    ctx->r15 = MEM_B(ctx->r20, 0XA);
    skip_4:
    // 0x15061EBC: sb          $fp, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r30;
L_15061EC0:
    // 0x15061EC0: lb          $t7, 0xA($s4)
    ctx->r15 = MEM_B(ctx->r20, 0XA);
L_15061EC4:
    // 0x15061EC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061EC8: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x15061ECC: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x15061ED0: sb          $t8, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r24;
    // 0x15061ED4: jal         0x15062D10
    // 0x15061ED8: lb          $a2, 0x9($s4)
    ctx->r6 = MEM_B(ctx->r20, 0X9);
    func_15062D10(rdram, ctx);
        goto after_14;
    // 0x15061ED8: lb          $a2, 0x9($s4)
    ctx->r6 = MEM_B(ctx->r20, 0X9);
    after_14:
    // 0x15061EDC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15061EE0: b           L_150623A8
    // 0x15061EE4: sb          $t9, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r25;
        goto L_150623A8;
    // 0x15061EE4: sb          $t9, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r25;
L_15061EE8:
    // 0x15061EE8: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x15061EEC: bne         $s0, $at, L_15061F70
    if (ctx->r16 != ctx->r1) {
        // 0x15061EF0: lbu         $t0, 0xA4($sp)
        ctx->r8 = MEM_BU(ctx->r29, 0XA4);
            goto L_15061F70;
    }
    // 0x15061EF0: lbu         $t0, 0xA4($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XA4);
    // 0x15061EF4: bne         $t0, $zero, L_15061F70
    if (ctx->r8 != 0) {
        // 0x15061EF8: lui         $t1, 0x8008
        ctx->r9 = S32(0X8008 << 16);
            goto L_15061F70;
    }
    // 0x15061EF8: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x15061EFC: lw          $t2, 0x1D4($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X1D4);
    // 0x15061F00: lw          $t1, 0x60F0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X60F0);
    // 0x15061F04: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x15061F08: beq         $t2, $zero, L_150623A8
    if (ctx->r10 == 0) {
        // 0x15061F0C: sw          $t1, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r9;
            goto L_150623A8;
    }
    // 0x15061F0C: sw          $t1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r9;
    // 0x15061F10: addiu       $s0, $s0, -0x3D68
    ctx->r16 = ADD32(ctx->r16, -0X3D68);
    // 0x15061F14: addiu       $s2, $sp, 0x90
    ctx->r18 = ADD32(ctx->r29, 0X90);
    // 0x15061F18: addiu       $s1, $sp, 0x88
    ctx->r17 = ADD32(ctx->r29, 0X88);
L_15061F1C:
    // 0x15061F1C: jal         0x150489B0
    // 0x15061F20: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    func_150489B0(rdram, ctx);
        goto after_15;
    // 0x15061F20: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    after_15:
    // 0x15061F24: add.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x15061F28: lbu         $t3, 0xB($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XB);
    // 0x15061F2C: lbu         $t4, 0x0($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X0);
    // 0x15061F30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15061F34: mul.s       $f8, $f18, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x15061F38: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x15061F3C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15061F40: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x15061F44: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
    // 0x15061F48: bne         $s1, $s6, L_15061F1C
    if (ctx->r17 != ctx->r22) {
        // 0x15061F4C: swc1        $f8, -0x4($s2)
        MEM_W(-0X4, ctx->r18) = ctx->f8.u32l;
            goto L_15061F1C;
    }
    // 0x15061F4C: swc1        $f8, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->f8.u32l;
    // 0x15061F50: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15061F54: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x15061F58: jal         0x1501B660
    // 0x15061F5C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    func_1501B660(rdram, ctx);
        goto after_16;
    // 0x15061F5C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_16:
    // 0x15061F60: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15061F64: sb          $t6, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r14;
    // 0x15061F68: b           L_150623A8
    // 0x15061F6C: nop

        goto L_150623A8;
    // 0x15061F6C: nop

L_15061F70:
    // 0x15061F70: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x15061F74: bne         $s0, $at, L_15061FA8
    if (ctx->r16 != ctx->r1) {
        // 0x15061F78: lbu         $t7, 0xA5($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0XA5);
            goto L_15061FA8;
    }
    // 0x15061F78: lbu         $t7, 0xA5($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XA5);
    // 0x15061F7C: bne         $t7, $zero, L_15061FA8
    if (ctx->r15 != 0) {
        // 0x15061F80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15061FA8;
    }
    // 0x15061F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061F84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x15061F88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15061F8C: addiu       $a3, $zero, -0x4
    ctx->r7 = ADD32(0, -0X4);
    // 0x15061F90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061F94: jal         0x15062D10
    // 0x15061F98: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_17;
    // 0x15061F98: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_17:
    // 0x15061F9C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15061FA0: b           L_150623A8
    // 0x15061FA4: sb          $t8, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r24;
        goto L_150623A8;
    // 0x15061FA4: sb          $t8, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r24;
L_15061FA8:
    // 0x15061FA8: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x15061FAC: bne         $s0, $at, L_1506208C
    if (ctx->r16 != ctx->r1) {
        // 0x15061FB0: lbu         $t9, 0xA6($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0XA6);
            goto L_1506208C;
    }
    // 0x15061FB0: lbu         $t9, 0xA6($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XA6);
    // 0x15061FB4: bne         $t9, $zero, L_15062014
    if (ctx->r25 != 0) {
        // 0x15061FB8: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_15062014;
    }
    // 0x15061FB8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15061FBC: sb          $t0, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = ctx->r8;
    // 0x15061FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061FC4: addiu       $a1, $zero, 0x173
    ctx->r5 = ADD32(0, 0X173);
    // 0x15061FC8: addiu       $a2, $zero, -0x4
    ctx->r6 = ADD32(0, -0X4);
    // 0x15061FCC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15061FD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061FD4: jal         0x15062D10
    // 0x15061FD8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_18;
    // 0x15061FD8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_18:
    // 0x15061FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061FE0: addiu       $a1, $zero, 0x175
    ctx->r5 = ADD32(0, 0X175);
    // 0x15061FE4: addiu       $a2, $zero, -0x2
    ctx->r6 = ADD32(0, -0X2);
    // 0x15061FE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15061FEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15061FF0: jal         0x15062D10
    // 0x15061FF4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_19;
    // 0x15061FF4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_19:
    // 0x15061FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061FFC: addiu       $a1, $zero, 0x177
    ctx->r5 = ADD32(0, 0X177);
    // 0x15062000: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x15062004: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15062008: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1506200C: jal         0x15062D10
    // 0x15062010: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_20;
    // 0x15062010: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_20:
L_15062014:
    // 0x15062014: lbu         $v0, 0xF($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XF);
    // 0x15062018: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1506201C: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x15062020: bne         $at, $zero, L_1506207C
    if (ctx->r1 != 0) {
        // 0x15062024: nop
    
            goto L_1506207C;
    }
    // 0x15062024: nop

    // 0x15062028: lbu         $v0, 0x69($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X69);
    // 0x1506202C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15062030: sb          $zero, 0xF($s4)
    MEM_B(0XF, ctx->r20) = 0;
    // 0x15062034: bne         $v0, $at, L_15062044
    if (ctx->r2 != ctx->r1) {
        // 0x15062038: addiu       $t1, $v0, 0x1
        ctx->r9 = ADD32(ctx->r2, 0X1);
            goto L_15062044;
    }
    // 0x15062038: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x1506203C: b           L_15062048
    // 0x15062040: sb          $zero, 0x69($s3)
    MEM_B(0X69, ctx->r19) = 0;
        goto L_15062048;
    // 0x15062040: sb          $zero, 0x69($s3)
    MEM_B(0X69, ctx->r19) = 0;
L_15062044:
    // 0x15062044: sb          $t1, 0x69($s3)
    MEM_B(0X69, ctx->r19) = ctx->r9;
L_15062048:
    // 0x15062048: lbu         $v0, 0x69($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X69);
    // 0x1506204C: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x15062050: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x15062054: bne         $at, $zero, L_15062068
    if (ctx->r1 != 0) {
        // 0x15062058: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15062068;
    }
    // 0x15062058: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1506205C: subu        $t3, $t2, $v1
    ctx->r11 = SUB32(ctx->r10, ctx->r3);
    // 0x15062060: b           L_1506206C
    // 0x15062064: sb          $t3, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r11;
        goto L_1506206C;
    // 0x15062064: sb          $t3, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r11;
L_15062068:
    // 0x15062068: sb          $v0, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r2;
L_1506206C:
    // 0x1506206C: lbu         $t4, 0x68($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X68);
    // 0x15062070: addiu       $t5, $t4, 0xF
    ctx->r13 = ADD32(ctx->r12, 0XF);
    // 0x15062074: b           L_150623A8
    // 0x15062078: sb          $t5, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r13;
        goto L_150623A8;
    // 0x15062078: sb          $t5, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r13;
L_1506207C:
    // 0x1506207C: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x15062080: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x15062084: b           L_150623A8
    // 0x15062088: sb          $t7, 0xF($s4)
    MEM_B(0XF, ctx->r20) = ctx->r15;
        goto L_150623A8;
    // 0x15062088: sb          $t7, 0xF($s4)
    MEM_B(0XF, ctx->r20) = ctx->r15;
L_1506208C:
    // 0x1506208C: addiu       $at, $zero, 0x45
    ctx->r1 = ADD32(0, 0X45);
    // 0x15062090: bnel        $s0, $at, L_150620C4
    if (ctx->r16 != ctx->r1) {
        // 0x15062094: addiu       $at, $zero, 0x5B
        ctx->r1 = ADD32(0, 0X5B);
            goto L_150620C4;
    }
    goto skip_5;
    // 0x15062094: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    skip_5:
    // 0x15062098: lbu         $v0, 0x6D($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X6D);
    // 0x1506209C: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x150620A0: bne         $at, $zero, L_150620B0
    if (ctx->r1 != 0) {
        // 0x150620A4: sll         $t8, $v0, 1
        ctx->r24 = S32(ctx->r2 << 1);
            goto L_150620B0;
    }
    // 0x150620A4: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x150620A8: b           L_150620B4
    // 0x150620AC: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
        goto L_150620B4;
    // 0x150620AC: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
L_150620B0:
    // 0x150620B0: addiu       $v0, $t8, 0x6
    ctx->r2 = ADD32(ctx->r24, 0X6);
L_150620B4:
    // 0x150620B4: sb          $v0, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r2;
    // 0x150620B8: b           L_150623A8
    // 0x150620BC: nop

        goto L_150623A8;
    // 0x150620BC: nop

    // 0x150620C0: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
L_150620C4:
    // 0x150620C4: bne         $s0, $at, L_15062108
    if (ctx->r16 != ctx->r1) {
        // 0x150620C8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15062108;
    }
    // 0x150620C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150620CC: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
L_150620D0:
    // 0x150620D0: lbu         $v0, 0x6C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X6C);
    // 0x150620D4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x150620D8: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x150620DC: bne         $at, $zero, L_150620EC
    if (ctx->r1 != 0) {
        // 0x150620E0: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_150620EC;
    }
    // 0x150620E0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x150620E4: b           L_150620F4
    // 0x150620E8: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
        goto L_150620F4;
    // 0x150620E8: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
L_150620EC:
    // 0x150620EC: addu        $t0, $s7, $t9
    ctx->r8 = ADD32(ctx->r23, ctx->r25);
    // 0x150620F0: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
L_150620F4:
    // 0x150620F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150620F8: bne         $a0, $s5, L_150620D0
    if (ctx->r4 != ctx->r21) {
        // 0x150620FC: sb          $v0, 0x67($v1)
        MEM_B(0X67, ctx->r3) = ctx->r2;
            goto L_150620D0;
    }
    // 0x150620FC: sb          $v0, 0x67($v1)
    MEM_B(0X67, ctx->r3) = ctx->r2;
    // 0x15062100: b           L_150623A8
    // 0x15062104: nop

        goto L_150623A8;
    // 0x15062104: nop

L_15062108:
    // 0x15062108: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
    // 0x1506210C: bnel        $s0, $at, L_150621AC
    if (ctx->r16 != ctx->r1) {
        // 0x15062110: addiu       $at, $zero, 0x8A
        ctx->r1 = ADD32(0, 0X8A);
            goto L_150621AC;
    }
    goto skip_6;
    // 0x15062110: addiu       $at, $zero, 0x8A
    ctx->r1 = ADD32(0, 0X8A);
    skip_6:
    // 0x15062114: lw          $t1, 0x2EC($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X2EC);
    // 0x15062118: beql        $t1, $zero, L_15062148
    if (ctx->r9 == 0) {
        // 0x1506211C: lbu         $v0, 0x10($s4)
        ctx->r2 = MEM_BU(ctx->r20, 0X10);
            goto L_15062148;
    }
    goto skip_7;
    // 0x1506211C: lbu         $v0, 0x10($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X10);
    skip_7:
    // 0x15062120: lbu         $v0, 0x10($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X10);
    // 0x15062124: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15062128: slti        $at, $v0, 0xEB
    ctx->r1 = SIGNED(ctx->r2) < 0XEB ? 1 : 0;
    // 0x1506212C: beq         $at, $zero, L_1506213C
    if (ctx->r1 == 0) {
        // 0x15062130: addiu       $t2, $v0, 0x14
        ctx->r10 = ADD32(ctx->r2, 0X14);
            goto L_1506213C;
    }
    // 0x15062130: addiu       $t2, $v0, 0x14
    ctx->r10 = ADD32(ctx->r2, 0X14);
    // 0x15062134: b           L_15062160
    // 0x15062138: sb          $t2, 0x10($s4)
    MEM_B(0X10, ctx->r20) = ctx->r10;
        goto L_15062160;
    // 0x15062138: sb          $t2, 0x10($s4)
    MEM_B(0X10, ctx->r20) = ctx->r10;
L_1506213C:
    // 0x1506213C: b           L_15062160
    // 0x15062140: sb          $t3, 0x10($s4)
    MEM_B(0X10, ctx->r20) = ctx->r11;
        goto L_15062160;
    // 0x15062140: sb          $t3, 0x10($s4)
    MEM_B(0X10, ctx->r20) = ctx->r11;
    // 0x15062144: lbu         $v0, 0x10($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X10);
L_15062148:
    // 0x15062148: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x1506214C: bne         $at, $zero, L_1506215C
    if (ctx->r1 != 0) {
        // 0x15062150: addiu       $t4, $v0, -0x14
        ctx->r12 = ADD32(ctx->r2, -0X14);
            goto L_1506215C;
    }
    // 0x15062150: addiu       $t4, $v0, -0x14
    ctx->r12 = ADD32(ctx->r2, -0X14);
    // 0x15062154: b           L_15062160
    // 0x15062158: sb          $t4, 0x10($s4)
    MEM_B(0X10, ctx->r20) = ctx->r12;
        goto L_15062160;
    // 0x15062158: sb          $t4, 0x10($s4)
    MEM_B(0X10, ctx->r20) = ctx->r12;
L_1506215C:
    // 0x1506215C: sb          $zero, 0x10($s4)
    MEM_B(0X10, ctx->r20) = 0;
L_15062160:
    // 0x15062160: lbu         $t5, 0x10($s4)
    ctx->r13 = MEM_BU(ctx->r20, 0X10);
    // 0x15062164: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15062168: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x1506216C: bgez        $t5, L_15062180
    if (SIGNED(ctx->r13) >= 0) {
        // 0x15062170: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_15062180;
    }
    // 0x15062170: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15062174: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15062178: nop

    // 0x1506217C: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_15062180:
    // 0x15062180: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15062184: lwc1        $f6, -0x6970($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6970);
    // 0x15062188: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1506218C: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x15062190: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x15062194: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15062198: jal         0x1501B660
    // 0x1506219C: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    func_1501B660(rdram, ctx);
        goto after_21;
    // 0x1506219C: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    after_21:
    // 0x150621A0: b           L_150623A8
    // 0x150621A4: nop

        goto L_150623A8;
    // 0x150621A4: nop

    // 0x150621A8: addiu       $at, $zero, 0x8A
    ctx->r1 = ADD32(0, 0X8A);
L_150621AC:
    // 0x150621AC: bne         $s0, $at, L_15062280
    if (ctx->r16 != ctx->r1) {
        // 0x150621B0: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_15062280;
    }
    // 0x150621B0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150621B4: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x150621B8: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x150621BC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150621C0: beq         $t6, $at, L_1506222C
    if (ctx->r14 == ctx->r1) {
        // 0x150621C4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_1506222C;
    }
    // 0x150621C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150621C8: lhu         $t7, 0x84($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X84);
    // 0x150621CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150621D0: addiu       $a1, $zero, 0x253
    ctx->r5 = ADD32(0, 0X253);
    // 0x150621D4: bne         $fp, $t7, L_150623A8
    if (ctx->r30 != ctx->r15) {
        // 0x150621D8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_150623A8;
    }
    // 0x150621D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150621DC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x150621E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150621E4: jal         0x15062D10
    // 0x150621E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_22;
    // 0x150621E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_22:
    // 0x150621EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150621F0: addiu       $a1, $zero, 0x255
    ctx->r5 = ADD32(0, 0X255);
    // 0x150621F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150621F8: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x150621FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15062200: jal         0x15062D10
    // 0x15062204: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_23;
    // 0x15062204: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_23:
    // 0x15062208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506220C: addiu       $a1, $zero, 0x257
    ctx->r5 = ADD32(0, 0X257);
    // 0x15062210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15062214: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x15062218: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1506221C: jal         0x15062D10
    // 0x15062220: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_24;
    // 0x15062220: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_24:
    // 0x15062224: b           L_150623A8
    // 0x15062228: nop

        goto L_150623A8;
    // 0x15062228: nop

L_1506222C:
    // 0x1506222C: lhu         $t8, 0x84($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X84);
    // 0x15062230: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15062234: addiu       $a3, $zero, 0x1000
    ctx->r7 = ADD32(0, 0X1000);
    // 0x15062238: bne         $fp, $t8, L_1506225C
    if (ctx->r30 != ctx->r24) {
        // 0x1506223C: addiu       $t0, $zero, 0x1000
        ctx->r8 = ADD32(0, 0X1000);
            goto L_1506225C;
    }
    // 0x1506223C: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
    // 0x15062240: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15062244: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x15062248: negu        $at, $v0
    ctx->r1 = SUB32(0, ctx->r2);
    // 0x1506224C: sll         $t9, $at, 2
    ctx->r25 = S32(ctx->r1 << 2);
    // 0x15062250: addu        $t9, $t9, $at
    ctx->r25 = ADD32(ctx->r25, ctx->r1);
    // 0x15062254: b           L_15062260
    // 0x15062258: sll         $v0, $t9, 3
    ctx->r2 = S32(ctx->r25 << 3);
        goto L_15062260;
    // 0x15062258: sll         $v0, $t9, 3
    ctx->r2 = S32(ctx->r25 << 3);
L_1506225C:
    // 0x1506225C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15062260:
    // 0x15062260: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x15062264: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15062268: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1506226C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15062270: jal         0x15062FC0
    // 0x15062274: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_15062FC0(rdram, ctx);
        goto after_25;
    // 0x15062274: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_25:
    // 0x15062278: b           L_150623A8
    // 0x1506227C: nop

        goto L_150623A8;
    // 0x1506227C: nop

L_15062280:
    // 0x15062280: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x15062284: bnel        $s0, $at, L_150622FC
    if (ctx->r16 != ctx->r1) {
        // 0x15062288: addiu       $at, $zero, 0x7B
        ctx->r1 = ADD32(0, 0X7B);
            goto L_150622FC;
    }
    goto skip_8;
    // 0x15062288: addiu       $at, $zero, 0x7B
    ctx->r1 = ADD32(0, 0X7B);
    skip_8:
    // 0x1506228C: lhu         $v0, 0x84($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X84);
    // 0x15062290: beql        $s5, $v0, L_150622A4
    if (ctx->r21 == ctx->r2) {
        // 0x15062294: lbu         $t2, 0x68($s3)
        ctx->r10 = MEM_BU(ctx->r19, 0X68);
            goto L_150622A4;
    }
    goto skip_9;
    // 0x15062294: lbu         $t2, 0x68($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X68);
    skip_9:
    // 0x15062298: bne         $fp, $v0, L_150622F0
    if (ctx->r30 != ctx->r2) {
        // 0x1506229C: addiu       $t8, $zero, 0xD
        ctx->r24 = ADD32(0, 0XD);
            goto L_150622F0;
    }
    // 0x1506229C: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x150622A0: lbu         $t2, 0x68($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X68);
L_150622A4:
    // 0x150622A4: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x150622A8: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x150622AC: bne         $t2, $at, L_150622B8
    if (ctx->r10 != ctx->r1) {
        // 0x150622B0: nop
    
            goto L_150622B8;
    }
    // 0x150622B0: nop

    // 0x150622B4: sb          $t3, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r11;
L_150622B8:
    // 0x150622B8: jal         0x150ADA20
    // 0x150622BC: nop

    func_150ADA20(rdram, ctx);
        goto after_26;
    // 0x150622BC: nop

    after_26:
    // 0x150622C0: andi        $t4, $v0, 0x3
    ctx->r12 = ctx->r2 & 0X3;
    // 0x150622C4: bne         $t4, $zero, L_150623A8
    if (ctx->r12 != 0) {
        // 0x150622C8: nop
    
            goto L_150623A8;
    }
    // 0x150622C8: nop

    // 0x150622CC: lbu         $t5, 0x68($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0X68);
    // 0x150622D0: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x150622D4: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x150622D8: bne         $t5, $at, L_150622E8
    if (ctx->r13 != ctx->r1) {
        // 0x150622DC: addiu       $t7, $zero, 0x15
        ctx->r15 = ADD32(0, 0X15);
            goto L_150622E8;
    }
    // 0x150622DC: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x150622E0: b           L_150623A8
    // 0x150622E4: sb          $t6, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r14;
        goto L_150623A8;
    // 0x150622E4: sb          $t6, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r14;
L_150622E8:
    // 0x150622E8: b           L_150623A8
    // 0x150622EC: sb          $t7, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r15;
        goto L_150623A8;
    // 0x150622EC: sb          $t7, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r15;
L_150622F0:
    // 0x150622F0: b           L_150623A8
    // 0x150622F4: sb          $t8, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r24;
        goto L_150623A8;
    // 0x150622F4: sb          $t8, 0x68($s3)
    MEM_B(0X68, ctx->r19) = ctx->r24;
    // 0x150622F8: addiu       $at, $zero, 0x7B
    ctx->r1 = ADD32(0, 0X7B);
L_150622FC:
    // 0x150622FC: bnel        $s0, $at, L_15062318
    if (ctx->r16 != ctx->r1) {
        // 0x15062300: addiu       $at, $zero, 0x92
        ctx->r1 = ADD32(0, 0X92);
            goto L_15062318;
    }
    goto skip_10;
    // 0x15062300: addiu       $at, $zero, 0x92
    ctx->r1 = ADD32(0, 0X92);
    skip_10:
    // 0x15062304: jal         0x150F1CB0
    // 0x15062308: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_150F1CB0(rdram, ctx);
        goto after_27;
    // 0x15062308: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_27:
    // 0x1506230C: b           L_150623A8
    // 0x15062310: nop

        goto L_150623A8;
    // 0x15062310: nop

    // 0x15062314: addiu       $at, $zero, 0x92
    ctx->r1 = ADD32(0, 0X92);
L_15062318:
    // 0x15062318: bne         $s0, $at, L_15062384
    if (ctx->r16 != ctx->r1) {
        // 0x1506231C: lbu         $t9, 0xA9($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0XA9);
            goto L_15062384;
    }
    // 0x1506231C: lbu         $t9, 0xA9($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XA9);
    // 0x15062320: bne         $t9, $zero, L_15062384
    if (ctx->r25 != 0) {
        // 0x15062324: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15062384;
    }
    // 0x15062324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15062328: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1506232C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15062330: addiu       $a3, $zero, -0x2
    ctx->r7 = ADD32(0, -0X2);
    // 0x15062334: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15062338: jal         0x15062D10
    // 0x1506233C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_28;
    // 0x1506233C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_28:
    // 0x15062340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15062344: addiu       $a1, $zero, 0x13B
    ctx->r5 = ADD32(0, 0X13B);
    // 0x15062348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1506234C: addiu       $a3, $zero, -0x2
    ctx->r7 = ADD32(0, -0X2);
    // 0x15062350: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15062354: jal         0x15062D10
    // 0x15062358: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_29;
    // 0x15062358: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_29:
    // 0x1506235C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15062360: addiu       $a1, $zero, 0x20D
    ctx->r5 = ADD32(0, 0X20D);
    // 0x15062364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15062368: addiu       $a3, $zero, -0x2
    ctx->r7 = ADD32(0, -0X2);
    // 0x1506236C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15062370: jal         0x15062D10
    // 0x15062374: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_30;
    // 0x15062374: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_30:
    // 0x15062378: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1506237C: b           L_150623A8
    // 0x15062380: sb          $t0, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r8;
        goto L_150623A8;
    // 0x15062380: sb          $t0, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r8;
L_15062384:
    // 0x15062384: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x15062388: bne         $s0, $at, L_150623A8
    if (ctx->r16 != ctx->r1) {
        // 0x1506238C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150623A8;
    }
    // 0x1506238C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15062390: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x15062394: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x15062398: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x1506239C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150623A0: jal         0x15062D10
    // 0x150623A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15062D10(rdram, ctx);
        goto after_31;
    // 0x150623A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_31:
L_150623A8:
    // 0x150623A8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150623AC: addiu       $t1, $t1, 0x121C
    ctx->r9 = ADD32(ctx->r9, 0X121C);
    // 0x150623B0: addiu       $s3, $s3, 0x32C
    ctx->r19 = ADD32(ctx->r19, 0X32C);
    // 0x150623B4: bnel        $s3, $t1, L_15061BC4
    if (ctx->r19 != ctx->r9) {
        // 0x150623B8: lw          $t6, 0x0($s3)
        ctx->r14 = MEM_W(ctx->r19, 0X0);
            goto L_15061BC4;
    }
    goto skip_11;
    // 0x150623B8: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    skip_11:
    // 0x150623BC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x150623C0: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x150623C4: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x150623C8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x150623CC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x150623D0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x150623D4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x150623D8: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x150623DC: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x150623E0: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x150623E4: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x150623E8: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x150623EC: jr          $ra
    // 0x150623F0: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x150623F0: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_1501FFE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501FFE8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1501FFEC: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x1501FFF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1501FFF4: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x1501FFF8: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x1501FFFC: addiu       $v1, $a2, -0x1
    ctx->r3 = ADD32(ctx->r6, -0X1);
    // 0x15020000: bltz        $v1, L_1502001C
    if (SIGNED(ctx->r3) < 0) {
        // 0x15020004: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_1502001C;
    }
    // 0x15020004: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x15020008: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x1502000C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x15020010: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15020014: b           L_15020028
    // 0x15020018: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_15020028;
    // 0x15020018: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_1502001C:
    // 0x1502001C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x15020020: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15020024: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_15020028:
    // 0x15020028: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x1502002C: addiu       $t7, $a2, 0x2
    ctx->r15 = ADD32(ctx->r6, 0X2);
    // 0x15020030: ori         $t8, $v0, 0x8
    ctx->r24 = ctx->r2 | 0X8;
    // 0x15020034: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15020038: beql        $at, $zero, L_1502004C
    if (ctx->r1 == 0) {
        // 0x1502003C: addu        $a2, $a0, $a1
        ctx->r6 = ADD32(ctx->r4, ctx->r5);
            goto L_1502004C;
    }
    goto skip_0;
    // 0x1502003C: addu        $a2, $a0, $a1
    ctx->r6 = ADD32(ctx->r4, ctx->r5);
    skip_0:
    // 0x15020040: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x15020044: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x15020048: addu        $a2, $a0, $a1
    ctx->r6 = ADD32(ctx->r4, ctx->r5);
L_1502004C:
    // 0x1502004C: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x15020050: beq         $at, $zero, L_15020338
    if (ctx->r1 == 0) {
        // 0x15020054: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_15020338;
    }
    // 0x15020054: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15020058: subu        $t2, $a2, $a0
    ctx->r10 = SUB32(ctx->r6, ctx->r4);
    // 0x1502005C: andi        $t9, $t2, 0x3
    ctx->r25 = ctx->r10 & 0X3;
    // 0x15020060: beq         $t9, $zero, L_15020124
    if (ctx->r25 == 0) {
        // 0x15020064: addu        $t1, $t9, $a0
        ctx->r9 = ADD32(ctx->r25, ctx->r4);
            goto L_15020124;
    }
    // 0x15020064: addu        $t1, $t9, $a0
    ctx->r9 = ADD32(ctx->r25, ctx->r4);
    // 0x15020068: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x1502006C: sll         $t3, $a3, 2
    ctx->r11 = S32(ctx->r7 << 2);
    // 0x15020070: subu        $t3, $t3, $a3
    ctx->r11 = SUB32(ctx->r11, ctx->r7);
    // 0x15020074: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15020078: sll         $t5, $a0, 3
    ctx->r13 = S32(ctx->r4 << 3);
    // 0x1502007C: addu        $a1, $s0, $t3
    ctx->r5 = ADD32(ctx->r16, ctx->r11);
    // 0x15020080: addu        $t0, $t4, $t5
    ctx->r8 = ADD32(ctx->r12, ctx->r13);
    // 0x15020084: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15020088: beq         $t1, $v1, L_150200DC
    if (ctx->r9 == ctx->r3) {
        // 0x1502008C: lh          $t6, 0x0($t0)
        ctx->r14 = MEM_H(ctx->r8, 0X0);
            goto L_150200DC;
    }
    // 0x1502008C: lh          $t6, 0x0($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X0);
L_15020090:
    // 0x15020090: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x15020094: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15020098: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x1502009C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150200A0: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x150200A4: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x150200A8: swc1        $f18, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->f18.u32l;
    // 0x150200AC: lh          $t7, -0x6($t0)
    ctx->r15 = MEM_H(ctx->r8, -0X6);
    // 0x150200B0: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x150200B4: nop

    // 0x150200B8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150200BC: swc1        $f18, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->f18.u32l;
    // 0x150200C0: lh          $t8, -0x4($t0)
    ctx->r24 = MEM_H(ctx->r8, -0X4);
    // 0x150200C4: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x150200C8: nop

    // 0x150200CC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150200D0: swc1        $f18, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f18.u32l;
    // 0x150200D4: bne         $t1, $v1, L_15020090
    if (ctx->r9 != ctx->r3) {
        // 0x150200D8: lh          $t6, 0x0($t0)
        ctx->r14 = MEM_H(ctx->r8, 0X0);
            goto L_15020090;
    }
    // 0x150200D8: lh          $t6, 0x0($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X0);
L_150200DC:
    // 0x150200DC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x150200E0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x150200E4: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x150200E8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150200EC: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x150200F0: swc1        $f18, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->f18.u32l;
    // 0x150200F4: lh          $t7, -0x6($t0)
    ctx->r15 = MEM_H(ctx->r8, -0X6);
    // 0x150200F8: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x150200FC: nop

    // 0x15020100: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15020104: swc1        $f18, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->f18.u32l;
    // 0x15020108: lh          $t8, -0x4($t0)
    ctx->r24 = MEM_H(ctx->r8, -0X4);
    // 0x1502010C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15020110: nop

    // 0x15020114: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15020118: swc1        $f18, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f18.u32l;
    // 0x1502011C: beql        $v1, $a2, L_1502033C
    if (ctx->r3 == ctx->r6) {
        // 0x15020120: andi        $t5, $v0, 0x1
        ctx->r13 = ctx->r2 & 0X1;
            goto L_1502033C;
    }
    goto skip_1;
    // 0x15020120: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    skip_1:
L_15020124:
    // 0x15020124: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x15020128: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x1502012C: subu        $t9, $t9, $a3
    ctx->r25 = SUB32(ctx->r25, ctx->r7);
    // 0x15020130: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15020134: sll         $t4, $v1, 3
    ctx->r12 = S32(ctx->r3 << 3);
    // 0x15020138: sll         $t5, $a2, 3
    ctx->r13 = S32(ctx->r6 << 3);
    // 0x1502013C: addu        $a1, $s0, $t9
    ctx->r5 = ADD32(ctx->r16, ctx->r25);
    // 0x15020140: addu        $a0, $t5, $t3
    ctx->r4 = ADD32(ctx->r13, ctx->r11);
    // 0x15020144: addu        $t0, $t3, $t4
    ctx->r8 = ADD32(ctx->r11, ctx->r12);
    // 0x15020148: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x1502014C: beq         $t0, $a0, L_1502024C
    if (ctx->r8 == ctx->r4) {
        // 0x15020150: lh          $t6, -0x20($t0)
        ctx->r14 = MEM_H(ctx->r8, -0X20);
            goto L_1502024C;
    }
    // 0x15020150: lh          $t6, -0x20($t0)
    ctx->r14 = MEM_H(ctx->r8, -0X20);
L_15020154:
    // 0x15020154: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x15020158: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x1502015C: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x15020160: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15020164: swc1        $f18, -0x30($a1)
    MEM_W(-0X30, ctx->r5) = ctx->f18.u32l;
    // 0x15020168: lh          $t7, -0x3E($t0)
    ctx->r15 = MEM_H(ctx->r8, -0X3E);
    // 0x1502016C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x15020170: nop

    // 0x15020174: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15020178: swc1        $f18, -0x2C($a1)
    MEM_W(-0X2C, ctx->r5) = ctx->f18.u32l;
    // 0x1502017C: lh          $t8, -0x3C($t0)
    ctx->r24 = MEM_H(ctx->r8, -0X3C);
    // 0x15020180: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15020184: nop

    // 0x15020188: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1502018C: swc1        $f18, -0x28($a1)
    MEM_W(-0X28, ctx->r5) = ctx->f18.u32l;
    // 0x15020190: lh          $t9, -0x38($t0)
    ctx->r25 = MEM_H(ctx->r8, -0X38);
    // 0x15020194: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x15020198: nop

    // 0x1502019C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150201A0: swc1        $f18, -0x24($a1)
    MEM_W(-0X24, ctx->r5) = ctx->f18.u32l;
    // 0x150201A4: lh          $t4, -0x36($t0)
    ctx->r12 = MEM_H(ctx->r8, -0X36);
    // 0x150201A8: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x150201AC: nop

    // 0x150201B0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150201B4: swc1        $f18, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->f18.u32l;
    // 0x150201B8: lh          $t5, -0x34($t0)
    ctx->r13 = MEM_H(ctx->r8, -0X34);
    // 0x150201BC: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x150201C0: nop

    // 0x150201C4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150201C8: swc1        $f18, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->f18.u32l;
    // 0x150201CC: lh          $t3, -0x30($t0)
    ctx->r11 = MEM_H(ctx->r8, -0X30);
    // 0x150201D0: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x150201D4: nop

    // 0x150201D8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150201DC: swc1        $f18, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->f18.u32l;
    // 0x150201E0: lh          $t6, -0x2E($t0)
    ctx->r14 = MEM_H(ctx->r8, -0X2E);
    // 0x150201E4: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x150201E8: nop

    // 0x150201EC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150201F0: swc1        $f18, -0x14($a1)
    MEM_W(-0X14, ctx->r5) = ctx->f18.u32l;
    // 0x150201F4: lh          $t7, -0x2C($t0)
    ctx->r15 = MEM_H(ctx->r8, -0X2C);
    // 0x150201F8: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x150201FC: nop

    // 0x15020200: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15020204: swc1        $f18, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->f18.u32l;
    // 0x15020208: lh          $t8, -0x28($t0)
    ctx->r24 = MEM_H(ctx->r8, -0X28);
    // 0x1502020C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15020210: nop

    // 0x15020214: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15020218: swc1        $f18, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->f18.u32l;
    // 0x1502021C: lh          $t9, -0x26($t0)
    ctx->r25 = MEM_H(ctx->r8, -0X26);
    // 0x15020220: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x15020224: nop

    // 0x15020228: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1502022C: swc1        $f18, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->f18.u32l;
    // 0x15020230: lh          $t4, -0x24($t0)
    ctx->r12 = MEM_H(ctx->r8, -0X24);
    // 0x15020234: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x15020238: nop

    // 0x1502023C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15020240: swc1        $f18, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f18.u32l;
    // 0x15020244: bne         $t0, $a0, L_15020154
    if (ctx->r8 != ctx->r4) {
        // 0x15020248: lh          $t6, -0x20($t0)
        ctx->r14 = MEM_H(ctx->r8, -0X20);
            goto L_15020154;
    }
    // 0x15020248: lh          $t6, -0x20($t0)
    ctx->r14 = MEM_H(ctx->r8, -0X20);
L_1502024C:
    // 0x1502024C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x15020250: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x15020254: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15020258: swc1        $f18, -0x30($a1)
    MEM_W(-0X30, ctx->r5) = ctx->f18.u32l;
    // 0x1502025C: lh          $t7, -0x1E($t0)
    ctx->r15 = MEM_H(ctx->r8, -0X1E);
    // 0x15020260: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x15020264: nop

    // 0x15020268: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1502026C: swc1        $f18, -0x2C($a1)
    MEM_W(-0X2C, ctx->r5) = ctx->f18.u32l;
    // 0x15020270: lh          $t8, -0x1C($t0)
    ctx->r24 = MEM_H(ctx->r8, -0X1C);
    // 0x15020274: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15020278: nop

    // 0x1502027C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15020280: swc1        $f18, -0x28($a1)
    MEM_W(-0X28, ctx->r5) = ctx->f18.u32l;
    // 0x15020284: lh          $t9, -0x18($t0)
    ctx->r25 = MEM_H(ctx->r8, -0X18);
    // 0x15020288: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x1502028C: nop

    // 0x15020290: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15020294: swc1        $f18, -0x24($a1)
    MEM_W(-0X24, ctx->r5) = ctx->f18.u32l;
    // 0x15020298: lh          $t4, -0x16($t0)
    ctx->r12 = MEM_H(ctx->r8, -0X16);
    // 0x1502029C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x150202A0: nop

    // 0x150202A4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150202A8: swc1        $f18, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->f18.u32l;
    // 0x150202AC: lh          $t5, -0x14($t0)
    ctx->r13 = MEM_H(ctx->r8, -0X14);
    // 0x150202B0: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x150202B4: nop

    // 0x150202B8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150202BC: swc1        $f18, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->f18.u32l;
    // 0x150202C0: lh          $t3, -0x10($t0)
    ctx->r11 = MEM_H(ctx->r8, -0X10);
    // 0x150202C4: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x150202C8: nop

    // 0x150202CC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150202D0: swc1        $f18, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->f18.u32l;
    // 0x150202D4: lh          $t6, -0xE($t0)
    ctx->r14 = MEM_H(ctx->r8, -0XE);
    // 0x150202D8: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x150202DC: nop

    // 0x150202E0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150202E4: swc1        $f18, -0x14($a1)
    MEM_W(-0X14, ctx->r5) = ctx->f18.u32l;
    // 0x150202E8: lh          $t7, -0xC($t0)
    ctx->r15 = MEM_H(ctx->r8, -0XC);
    // 0x150202EC: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x150202F0: nop

    // 0x150202F4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150202F8: swc1        $f18, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->f18.u32l;
    // 0x150202FC: lh          $t8, -0x8($t0)
    ctx->r24 = MEM_H(ctx->r8, -0X8);
    // 0x15020300: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15020304: nop

    // 0x15020308: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1502030C: swc1        $f18, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->f18.u32l;
    // 0x15020310: lh          $t9, -0x6($t0)
    ctx->r25 = MEM_H(ctx->r8, -0X6);
    // 0x15020314: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x15020318: nop

    // 0x1502031C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15020320: swc1        $f18, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->f18.u32l;
    // 0x15020324: lh          $t4, -0x4($t0)
    ctx->r12 = MEM_H(ctx->r8, -0X4);
    // 0x15020328: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x1502032C: nop

    // 0x15020330: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15020334: swc1        $f18, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f18.u32l;
L_15020338:
    // 0x15020338: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
L_1502033C:
    // 0x1502033C: bne         $t5, $zero, L_1502035C
    if (ctx->r13 != 0) {
        // 0x15020340: andi        $t3, $v0, 0x8
        ctx->r11 = ctx->r2 & 0X8;
            goto L_1502035C;
    }
    // 0x15020340: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
    // 0x15020344: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x15020348: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1502034C: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15020350: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x15020354: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x15020358: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
L_1502035C:
    // 0x1502035C: bnel        $t3, $zero, L_15020380
    if (ctx->r11 != 0) {
        // 0x15020360: lw          $s0, 0x4($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X4);
            goto L_15020380;
    }
    goto skip_2;
    // 0x15020360: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    skip_2:
    // 0x15020364: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15020368: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1502036C: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15020370: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x15020374: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
    // 0x15020378: swc1        $f18, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f18.u32l;
    // 0x1502037C: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
L_15020380:
    // 0x15020380: jr          $ra
    // 0x15020384: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x15020384: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_150F9A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F9A20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150F9A24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150F9A28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150F9A2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150F9A30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150F9A34: addiu       $a1, $zero, 0x4025
    ctx->r5 = ADD32(0, 0X4025);
    // 0x150F9A38: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150F9A3C: jal         0x1509BE40
    // 0x150F9A40: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x150F9A40: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_0:
    // 0x150F9A44: beql        $v0, $zero, L_150F9A78
    if (ctx->r2 == 0) {
        // 0x150F9A48: lw          $t0, 0x84($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X84);
            goto L_150F9A78;
    }
    goto skip_0;
    // 0x150F9A48: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    skip_0:
    // 0x150F9A4C: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x150F9A50: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x150F9A54: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x150F9A58: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x150F9A5C: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x150F9A60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F9A64: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x150F9A68: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
    // 0x150F9A6C: b           L_150F9A94
    // 0x150F9A70: swc1        $f4, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f4.u32l;
        goto L_150F9A94;
    // 0x150F9A70: swc1        $f4, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f4.u32l;
    // 0x150F9A74: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
L_150F9A78:
    // 0x150F9A78: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x150F9A7C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150F9A80: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x150F9A84: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    // 0x150F9A88: ori         $t3, $t1, 0x8
    ctx->r11 = ctx->r9 | 0X8;
    // 0x150F9A8C: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
    // 0x150F9A90: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
L_150F9A94:
    // 0x150F9A94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150F9A98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150F9A9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150F9AA0: jr          $ra
    // 0x150F9AA4: nop

    return;
    return;
    // 0x150F9AA4: nop

;}
RECOMP_FUNC void func_1500EB30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500EB30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1500EB34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1500EB38: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1500EB3C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1500EB40: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1500EB44: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x1500EB48: jal         0x150ADA20
    // 0x1500EB4C: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1500EB4C: nop

    after_0:
    // 0x1500EB50: andi        $a0, $v0, 0x7F
    ctx->r4 = ctx->r2 & 0X7F;
    // 0x1500EB54: addiu       $a0, $a0, 0xA
    ctx->r4 = ADD32(ctx->r4, 0XA);
    // 0x1500EB58: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x1500EB5C: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x1500EB60: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1500EB64: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1500EB68: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1500EB6C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1500EB70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1500EB74: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1500EB78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1500EB7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500EB80: jal         0x151491F4
    // 0x1500EB84: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151491F4(rdram, ctx);
        goto after_1;
    // 0x1500EB84: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x1500EB88: beq         $v0, $zero, L_1500EBB4
    if (ctx->r2 == 0) {
        // 0x1500EB8C: lw          $t0, 0x28($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X28);
            goto L_1500EBB4;
    }
    // 0x1500EB8C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1500EB90: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x1500EB94: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x1500EB98: sh          $t1, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = ctx->r9;
    // 0x1500EB9C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1500EBA0: sh          $t2, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r10;
    // 0x1500EBA4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x1500EBA8: sh          $t3, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r11;
    // 0x1500EBAC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x1500EBB0: sb          $t4, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r12;
L_1500EBB4:
    // 0x1500EBB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1500EBB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1500EBBC: jr          $ra
    // 0x1500EBC0: nop

    return;
    return;
    // 0x1500EBC0: nop

;}
RECOMP_FUNC void func_151D9EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D9EB0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x151D9EB4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x151D9EB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D9EBC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151D9EC0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151D9EC4: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x151D9EC8: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
    // 0x151D9ECC: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x151D9ED0: sh          $t8, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r24;
    // 0x151D9ED4: lh          $t9, 0x28($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X28);
    // 0x151D9ED8: bgezl       $t9, L_151D9FB0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x151D9EDC: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_151D9FB0;
    }
    goto skip_0;
    // 0x151D9EDC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x151D9EE0: jal         0x150ADA68
    // 0x151D9EE4: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151D9EE4: nop

    after_0:
    // 0x151D9EE8: jal         0x150ADA20
    // 0x151D9EEC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151D9EEC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x151D9EF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151D9EF4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151D9EF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D9EFC: lwc1        $f6, -0x4B9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4B9C);
    // 0x151D9F00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D9F04: lwc1        $f10, -0x4B98($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4B98);
    // 0x151D9F08: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x151D9F0C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D9F10: mfhi        $t0
    ctx->r8 = hi;
    // 0x151D9F14: addiu       $v1, $s0, 0x28
    ctx->r3 = ADD32(ctx->r16, 0X28);
    // 0x151D9F18: lbu         $a2, 0x16($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X16);
    // 0x151D9F1C: addiu       $t1, $t0, 0x23
    ctx->r9 = ADD32(ctx->r8, 0X23);
    // 0x151D9F20: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151D9F24: lbu         $t2, 0x14($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X14);
    // 0x151D9F28: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151D9F2C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151D9F30: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151D9F34: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151D9F38: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151D9F3C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151D9F40: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x151D9F44: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151D9F48: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x151D9F4C: lbu         $t3, 0x15($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X15);
    // 0x151D9F50: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151D9F54: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x151D9F58: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151D9F5C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x151D9F60: lbu         $t5, 0xC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XC);
    // 0x151D9F64: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151D9F68: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x151D9F6C: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x151D9F70: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x151D9F74: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x151D9F78: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x151D9F7C: addiu       $a1, $a1, 0x5480
    ctx->r5 = ADD32(ctx->r5, 0X5480);
    // 0x151D9F80: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x151D9F84: jal         0x151D9014
    // 0x151D9F88: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    func_151D9014(rdram, ctx);
        goto after_2;
    // 0x151D9F88: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    after_2:
    // 0x151D9F8C: jal         0x150ADA20
    // 0x151D9F90: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151D9F90: nop

    after_3:
    // 0x151D9F94: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x151D9F98: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D9F9C: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x151D9FA0: mfhi        $t7
    ctx->r15 = hi;
    // 0x151D9FA4: addiu       $t8, $t7, 0x1E
    ctx->r24 = ADD32(ctx->r15, 0X1E);
    // 0x151D9FA8: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x151D9FAC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_151D9FB0:
    // 0x151D9FB0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x151D9FB4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x151D9FB8: jr          $ra
    // 0x151D9FBC: nop

    return;
    return;
    // 0x151D9FBC: nop

;}
RECOMP_FUNC void func_151AF270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AF270: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151AF274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AF278: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x151AF27C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x151AF280: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151AF284: bne         $a3, $zero, L_151AF294
    if (ctx->r7 != 0) {
        // 0x151AF288: addiu       $a0, $zero, 0x28
        ctx->r4 = ADD32(0, 0X28);
            goto L_151AF294;
    }
    // 0x151AF288: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x151AF28C: b           L_151AF328
    // 0x151AF290: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151AF328;
    // 0x151AF290: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151AF294:
    // 0x151AF294: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x151AF298: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x151AF29C: jal         0x1516962C
    // 0x151AF2A0: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    func_1516962C(rdram, ctx);
        goto after_0;
    // 0x151AF2A0: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    after_0:
    // 0x151AF2A4: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x151AF2A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151AF2AC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151AF2B0: lbu         $t6, 0x3B($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3B);
    // 0x151AF2B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AF2B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151AF2BC: lwc1        $f4, -0x6234($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6234);
    // 0x151AF2C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AF2C4: lwc1        $f6, -0x6230($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6230);
    // 0x151AF2C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151AF2CC: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x151AF2D0: addiu       $t9, $zero, 0x140
    ctx->r25 = ADD32(0, 0X140);
    // 0x151AF2D4: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x151AF2D8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151AF2DC: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x151AF2E0: sb          $t7, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r15;
    // 0x151AF2E4: sb          $t8, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r24;
    // 0x151AF2E8: sh          $t9, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r25;
    // 0x151AF2EC: sb          $t0, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r8;
    // 0x151AF2F0: sb          $t1, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r9;
    // 0x151AF2F4: sb          $t2, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r10;
    // 0x151AF2F8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151AF2FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151AF300: lbu         $a2, 0x57($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X57);
    // 0x151AF304: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x151AF308: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x151AF30C: sb          $t6, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r14;
    // 0x151AF310: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x151AF314: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x151AF318: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x151AF31C: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x151AF320: jal         0x1513418C
    // 0x151AF324: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    func_1513418C(rdram, ctx);
        goto after_1;
    // 0x151AF324: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_1:
L_151AF328:
    // 0x151AF328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AF32C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151AF330: jr          $ra
    // 0x151AF334: nop

    return;
    return;
    // 0x151AF334: nop

;}
RECOMP_FUNC void func_151A37C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A37C0: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x151A37C4: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x151A37C8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151A37CC: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x151A37D0: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x151A37D4: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x151A37D8: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x151A37DC: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x151A37E0: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x151A37E4: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x151A37E8: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x151A37EC: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x151A37F0: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x151A37F4: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x151A37F8: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x151A37FC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x151A3800: lw          $s2, 0x98($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X98);
    // 0x151A3804: lw          $s6, 0x94($s1)
    ctx->r22 = MEM_W(ctx->r17, 0X94);
    // 0x151A3808: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x151A380C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151A3810: bnel        $t6, $zero, L_151A3824
    if (ctx->r14 != 0) {
        // 0x151A3814: lbu         $t7, 0x4($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X4);
            goto L_151A3824;
    }
    goto skip_0;
    // 0x151A3814: lbu         $t7, 0x4($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X4);
    skip_0:
    // 0x151A3818: b           L_151A3BA4
    // 0x151A381C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151A3BA4;
    // 0x151A381C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151A3820: lbu         $t7, 0x4($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X4);
L_151A3824:
    // 0x151A3824: lbu         $t8, 0x3B($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3B);
    // 0x151A3828: beql        $t7, $t8, L_151A383C
    if (ctx->r15 == ctx->r24) {
        // 0x151A382C: lhu         $t9, 0x1E($s1)
        ctx->r25 = MEM_HU(ctx->r17, 0X1E);
            goto L_151A383C;
    }
    goto skip_1;
    // 0x151A382C: lhu         $t9, 0x1E($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X1E);
    skip_1:
    // 0x151A3830: b           L_151A3BA4
    // 0x151A3834: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151A3BA4;
    // 0x151A3834: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151A3838: lhu         $t9, 0x1E($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X1E);
L_151A383C:
    // 0x151A383C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151A3840: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151A3844: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x151A3848: bne         $t0, $zero, L_151A3894
    if (ctx->r8 != 0) {
        // 0x151A384C: addiu       $s0, $s1, 0x10
        ctx->r16 = ADD32(ctx->r17, 0X10);
            goto L_151A3894;
    }
    // 0x151A384C: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    // 0x151A3850: jal         0x151A4E34
    // 0x151A3854: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_151A4E34(rdram, ctx);
        goto after_0;
    // 0x151A3854: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x151A3858: beq         $v0, $zero, L_151A388C
    if (ctx->r2 == 0) {
        // 0x151A385C: nop
    
            goto L_151A388C;
    }
    // 0x151A385C: nop

    // 0x151A3860: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151A3864: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151A3868: sw          $at, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->r1;
    // 0x151A386C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x151A3870: sw          $t2, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r10;
    // 0x151A3874: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151A3878: sw          $at, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->r1;
    // 0x151A387C: lhu         $t3, 0x1E($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X1E);
    // 0x151A3880: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x151A3884: b           L_151A3894
    // 0x151A3888: sh          $t4, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r12;
        goto L_151A3894;
    // 0x151A3888: sh          $t4, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r12;
L_151A388C:
    // 0x151A388C: b           L_151A3BA4
    // 0x151A3890: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151A3BA4;
    // 0x151A3890: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151A3894:
    // 0x151A3894: bne         $v0, $zero, L_151A3914
    if (ctx->r2 != 0) {
        // 0x151A3898: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_151A3914;
    }
    // 0x151A3898: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151A389C: jal         0x151A4E34
    // 0x151A38A0: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    func_151A4E34(rdram, ctx);
        goto after_1;
    // 0x151A38A0: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    after_1:
    // 0x151A38A4: bnel        $v0, $zero, L_151A3918
    if (ctx->r2 != 0) {
        // 0x151A38A8: lwc1        $f4, 0x10($s1)
        ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
            goto L_151A3918;
    }
    goto skip_2;
    // 0x151A38A8: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    skip_2:
    // 0x151A38AC: jal         0x151A4E9C
    // 0x151A38B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_151A4E9C(rdram, ctx);
        goto after_2;
    // 0x151A38B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x151A38B4: addiu       $s0, $sp, 0xD4
    ctx->r16 = ADD32(ctx->r29, 0XD4);
    // 0x151A38B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151A38BC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151A38C0: jal         0x10022EC0
    // 0x151A38C4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151A38C4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_3:
    // 0x151A38C8: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x151A38CC: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x151A38D0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151A38D4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151A38D8: lbu         $t7, 0xC($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0XC);
    // 0x151A38DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151A38E0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x151A38E4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151A38E8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x151A38EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151A38F0: jal         0x151491F4
    // 0x151A38F4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_151491F4(rdram, ctx);
        goto after_4;
    // 0x151A38F4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_4:
    // 0x151A38F8: beq         $v0, $zero, L_151A390C
    if (ctx->r2 == 0) {
        // 0x151A38FC: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_151A390C;
    }
    // 0x151A38FC: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151A3900: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151A3904: jal         0x10022EC0
    // 0x151A3908: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x151A3908: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_5:
L_151A390C:
    // 0x151A390C: b           L_151A3BA4
    // 0x151A3910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151A3BA4;
    // 0x151A3910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151A3914:
    // 0x151A3914: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
L_151A3918:
    // 0x151A3918: lwc1        $f6, 0x34($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X34);
    // 0x151A391C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A3920: lwc1        $f14, -0x72A8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X72A8);
    // 0x151A3924: sub.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151A3928: lwc1        $f8, 0x14($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14);
    // 0x151A392C: lwc1        $f10, 0x38($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X38);
    // 0x151A3930: lwc1        $f6, 0x3C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X3C);
    // 0x151A3934: abs.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = fabsf(ctx->f18.fl);
    // 0x151A3938: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x151A393C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x151A3940: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A3944: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151A3948: bc1t        L_151A3978
    if (c1cs) {
        // 0x151A394C: sub.s       $f12, $f4, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
            goto L_151A3978;
    }
    // 0x151A394C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151A3950: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x151A3954: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x151A3958: nop

    // 0x151A395C: bc1t        L_151A3978
    if (c1cs) {
        // 0x151A3960: nop
    
            goto L_151A3978;
    }
    // 0x151A3960: nop

    // 0x151A3964: abs.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = fabsf(ctx->f12.fl);
    // 0x151A3968: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x151A396C: nop

    // 0x151A3970: bc1fl       L_151A39AC
    if (!c1cs) {
        // 0x151A3974: mtc1        $at, $f24
        ctx->f24.u32l = ctx->r1;
            goto L_151A39AC;
    }
    goto skip_3;
    // 0x151A3974: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    skip_3:
L_151A3978:
    // 0x151A3978: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x151A397C: nop

    // 0x151A3980: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151A3984: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151A3988: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151A398C: lwc1        $f10, 0x14($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X14);
    // 0x151A3990: lwc1        $f8, 0x40($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X40);
    // 0x151A3994: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151A3998: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151A399C: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151A39A0: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151A39A4: swc1        $f6, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->f6.u32l;
    // 0x151A39A8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
L_151A39AC:
    // 0x151A39AC: lwc1        $f0, 0x40($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X40);
    // 0x151A39B0: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x151A39B4: swc1        $f2, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f2.u32l;
    // 0x151A39B8: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x151A39BC: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x151A39C0: bc1f        L_151A3BA0
    if (!c1cs) {
        // 0x151A39C4: addiu       $s5, $sp, 0xB4
        ctx->r21 = ADD32(ctx->r29, 0XB4);
            goto L_151A3BA0;
    }
    // 0x151A39C4: addiu       $s5, $sp, 0xB4
    ctx->r21 = ADD32(ctx->r29, 0XB4);
    // 0x151A39C8: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x151A39CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151A39D0: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151A39D4: div.s       $f0, $f24, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f24.fl, ctx->f10.fl);
    // 0x151A39D8: addiu       $v0, $s2, 0x34
    ctx->r2 = ADD32(ctx->r18, 0X34);
    // 0x151A39DC: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151A39E0: lwc1        $f8, 0x48($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X48);
    // 0x151A39E4: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
    // 0x151A39E8: sw          $at, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r1;
    // 0x151A39EC: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x151A39F0: add.s       $f22, $f8, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151A39F4: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
    // 0x151A39F8: sw          $t9, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r25;
    // 0x151A39FC: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151A3A00: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    // 0x151A3A04: lwc1        $f6, 0x24($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X24);
    // 0x151A3A08: lwc1        $f14, 0x20($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X20);
    // 0x151A3A0C: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x151A3A10: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
    // 0x151A3A14: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x151A3A18: mul.s       $f26, $f22, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x151A3A1C: nop

    // 0x151A3A20: mul.s       $f10, $f6, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x151A3A24: add.s       $f20, $f14, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x151A3A28: mul.s       $f28, $f18, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f28.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151A3A2C: nop

    // 0x151A3A30: mul.s       $f30, $f8, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f30.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151A3A34: sub.s       $f16, $f14, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f20.fl;
    // 0x151A3A38: mul.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151A3A3C: nop

    // 0x151A3A40: mul.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151A3A44: nop

L_151A3A48:
    // 0x151A3A48: lb          $t0, 0x2E($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X2E);
    // 0x151A3A4C: lw          $at, 0x0($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X0);
    // 0x151A3A50: multu       $t0, $s3
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A3A54: mflo        $t1
    ctx->r9 = lo;
    // 0x151A3A58: addu        $s0, $t1, $s6
    ctx->r16 = ADD32(ctx->r9, ctx->r22);
    // 0x151A3A5C: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x151A3A60: lw          $t4, 0x4($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X4);
    // 0x151A3A64: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x151A3A68: lw          $at, 0x8($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X8);
    // 0x151A3A6C: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x151A3A70: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x151A3A74: lh          $t5, 0x18($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X18);
    // 0x151A3A78: sh          $t5, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r13;
    // 0x151A3A7C: lh          $t6, 0x1A($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X1A);
    // 0x151A3A80: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x151A3A84: lbu         $t7, 0x44($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X44);
    // 0x151A3A88: sb          $t7, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r15;
    // 0x151A3A8C: swc1        $f12, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f12.u32l;
    // 0x151A3A90: jal         0x150ADA20
    // 0x151A3A94: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151A3A94: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x151A3A98: lbu         $t1, 0x29($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X29);
    // 0x151A3A9C: lbu         $t8, 0x44($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X44);
    // 0x151A3AA0: lbu         $t9, 0x28($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X28);
    // 0x151A3AA4: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x151A3AA8: divu        $zero, $v0, $t3
    lo = S32(U32(ctx->r2) / U32(ctx->r11)); hi = S32(U32(ctx->r2) % U32(ctx->r11));
    // 0x151A3AAC: mfhi        $t2
    ctx->r10 = hi;
    // 0x151A3AB0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x151A3AB4: addu        $t4, $t0, $t2
    ctx->r12 = ADD32(ctx->r8, ctx->r10);
    // 0x151A3AB8: lwc1        $f2, 0x84($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X84);
    // 0x151A3ABC: lwc1        $f12, 0x80($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151A3AC0: sb          $t4, 0x44($s2)
    MEM_B(0X44, ctx->r18) = ctx->r12;
    // 0x151A3AC4: sb          $s4, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r20;
    // 0x151A3AC8: lb          $t5, 0x2E($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X2E);
    // 0x151A3ACC: lbu         $t7, 0x25($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X25);
    // 0x151A3AD0: bne         $t3, $zero, L_151A3ADC
    if (ctx->r11 != 0) {
        // 0x151A3AD4: nop
    
            goto L_151A3ADC;
    }
    // 0x151A3AD4: nop

    // 0x151A3AD8: break       7
    do_break(354040536);
L_151A3ADC:
    // 0x151A3ADC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x151A3AE0: sb          $t6, 0x2E($s1)
    MEM_B(0X2E, ctx->r17) = ctx->r14;
    // 0x151A3AE4: lb          $v1, 0x2E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2E);
    // 0x151A3AE8: bnel        $t7, $v1, L_151A3AFC
    if (ctx->r15 != ctx->r3) {
        // 0x151A3AEC: lb          $t8, 0x2C($s1)
        ctx->r24 = MEM_B(ctx->r17, 0X2C);
            goto L_151A3AFC;
    }
    goto skip_4;
    // 0x151A3AEC: lb          $t8, 0x2C($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X2C);
    skip_4:
    // 0x151A3AF0: sb          $zero, 0x2E($s1)
    MEM_B(0X2E, ctx->r17) = 0;
    // 0x151A3AF4: lb          $v1, 0x2E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2E);
    // 0x151A3AF8: lb          $t8, 0x2C($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X2C);
L_151A3AFC:
    // 0x151A3AFC: lb          $v0, 0x2D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2D);
    // 0x151A3B00: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x151A3B04: bne         $v0, $v1, L_151A3B34
    if (ctx->r2 != ctx->r3) {
        // 0x151A3B08: sb          $t9, 0x2C($s1)
        MEM_B(0X2C, ctx->r17) = ctx->r25;
            goto L_151A3B34;
    }
    // 0x151A3B08: sb          $t9, 0x2C($s1)
    MEM_B(0X2C, ctx->r17) = ctx->r25;
    // 0x151A3B0C: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x151A3B10: sb          $t1, 0x2D($s1)
    MEM_B(0X2D, ctx->r17) = ctx->r9;
    // 0x151A3B14: lb          $t0, 0x2D($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X2D);
    // 0x151A3B18: lbu         $t3, 0x25($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X25);
    // 0x151A3B1C: bnel        $t3, $t0, L_151A3B2C
    if (ctx->r11 != ctx->r8) {
        // 0x151A3B20: lb          $t2, 0x2C($s1)
        ctx->r10 = MEM_B(ctx->r17, 0X2C);
            goto L_151A3B2C;
    }
    goto skip_5;
    // 0x151A3B20: lb          $t2, 0x2C($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X2C);
    skip_5:
    // 0x151A3B24: sb          $zero, 0x2D($s1)
    MEM_B(0X2D, ctx->r17) = 0;
    // 0x151A3B28: lb          $t2, 0x2C($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X2C);
L_151A3B2C:
    // 0x151A3B2C: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x151A3B30: sb          $t4, 0x2C($s1)
    MEM_B(0X2C, ctx->r17) = ctx->r12;
L_151A3B34:
    // 0x151A3B34: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x151A3B38: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x151A3B3C: add.s       $f20, $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f12.fl;
    // 0x151A3B40: add.s       $f10, $f6, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f28.fl;
    // 0x151A3B44: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x151A3B48: add.s       $f4, $f8, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x151A3B4C: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x151A3B50: add.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x151A3B54: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x151A3B58: sub.s       $f22, $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f26.fl;
    // 0x151A3B5C: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x151A3B60: lwc1        $f8, 0x40($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X40);
    // 0x151A3B64: sub.s       $f4, $f8, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f24.fl;
    // 0x151A3B68: swc1        $f4, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->f4.u32l;
    // 0x151A3B6C: lwc1        $f6, 0x40($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X40);
    // 0x151A3B70: c.lt.s      $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f24.fl < ctx->f6.fl;
    // 0x151A3B74: nop

    // 0x151A3B78: bc1t        L_151A3A48
    if (c1cs) {
        // 0x151A3B7C: nop
    
            goto L_151A3A48;
    }
    // 0x151A3B7C: nop

    // 0x151A3B80: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x151A3B84: lw          $at, 0x0($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X0);
    // 0x151A3B88: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x151A3B8C: lw          $t7, 0x4($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X4);
    // 0x151A3B90: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x151A3B94: lw          $at, 0x8($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X8);
    // 0x151A3B98: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x151A3B9C: swc1        $f22, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->f22.u32l;
L_151A3BA0:
    // 0x151A3BA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151A3BA4:
    // 0x151A3BA4: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x151A3BA8: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x151A3BAC: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x151A3BB0: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x151A3BB4: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x151A3BB8: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x151A3BBC: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x151A3BC0: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x151A3BC4: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x151A3BC8: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x151A3BCC: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x151A3BD0: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x151A3BD4: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x151A3BD8: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x151A3BDC: jr          $ra
    // 0x151A3BE0: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    return;
    // 0x151A3BE0: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_10002E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10002E50: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x10002E54: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x10002E58: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x10002E5C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x10002E60: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x10002E64: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x10002E68: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x10002E6C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x10002E70: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x10002E74: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x10002E78: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x10002E7C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x10002E80: lui         $fp, 0x8003
    ctx->r30 = S32(0X8003 << 16);
    // 0x10002E84: lui         $s7, 0x8004
    ctx->r23 = S32(0X8004 << 16);
    // 0x10002E88: lui         $s5, 0x8004
    ctx->r21 = S32(0X8004 << 16);
    // 0x10002E8C: lui         $s3, 0x8004
    ctx->r19 = S32(0X8004 << 16);
    // 0x10002E90: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x10002E94: addiu       $s3, $s3, -0x5A8B
    ctx->r19 = ADD32(ctx->r19, -0X5A8B);
    // 0x10002E98: addiu       $s5, $s5, -0x5A8D
    ctx->r21 = ADD32(ctx->r21, -0X5A8D);
    // 0x10002E9C: addiu       $s7, $s7, -0x5A8E
    ctx->r23 = ADD32(ctx->r23, -0X5A8E);
    // 0x10002EA0: addiu       $fp, $fp, 0x5910
    ctx->r30 = ADD32(ctx->r30, 0X5910);
    // 0x10002EA4: addiu       $s6, $sp, 0x5C
    ctx->r22 = ADD32(ctx->r29, 0X5C);
    // 0x10002EA8: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x10002EAC: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
L_10002EB0:
    // 0x10002EB0: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
L_10002EB4:
    // 0x10002EB4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x10002EB8: jal         0x10023440
    // 0x10002EBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x10002EBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x10002EC0: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x10002EC4: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x10002EC8: addiu       $t8, $t7, -0xA
    ctx->r24 = ADD32(ctx->r15, -0XA);
    // 0x10002ECC: sltiu       $at, $t8, 0x7
    ctx->r1 = ctx->r24 < 0X7 ? 1 : 0;
    // 0x10002ED0: beq         $at, $zero, L_10003010
    if (ctx->r1 == 0) {
        // 0x10002ED4: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_10003010;
    }
    // 0x10002ED4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x10002ED8: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10002EDC: addu        $at, $at, $t8
    gpr jr_addend_10002EE4 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x10002EE0: lw          $t8, -0x3F80($at)
    ctx->r24 = ADD32(ctx->r1, -0X3F80);
    // 0x10002EE4: jr          $t8
    // 0x10002EE8: nop

    switch (jr_addend_10002EE4 >> 2) {
        case 0: goto L_10002FF4; break;
        case 1: goto L_10002EEC; break;
        case 2: goto L_10002F40; break;
        case 3: goto L_10003010; break;
        case 4: goto L_10003010; break;
        case 5: goto L_10002F74; break;
        case 6: goto L_10002FB4; break;
        default: switch_error(__func__, 0x10002EE4, 0x8002C080);
    }
    // 0x10002EE8: nop

L_10002EEC:
    // 0x10002EEC: lbu         $t9, 0x0($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X0);
    // 0x10002EF0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x10002EF4: beql        $t9, $zero, L_10002F0C
    if (ctx->r25 == 0) {
        // 0x10002EF8: sb          $s4, 0x0($s5)
        MEM_B(0X0, ctx->r21) = ctx->r20;
            goto L_10002F0C;
    }
    goto skip_0;
    // 0x10002EF8: sb          $s4, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r20;
    skip_0:
    // 0x10002EFC: jal         0x10022E00
    // 0x10002F00: sb          $s4, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r20;
    osStopThread_recomp(rdram, ctx);
        goto after_1;
    // 0x10002F00: sb          $s4, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r20;
    after_1:
    // 0x10002F04: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
    // 0x10002F08: sb          $s4, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r20;
L_10002F0C:
    // 0x10002F0C: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x10002F10: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x10002F14: jal         0x10023440
    // 0x10002F18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x10002F18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x10002F1C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x10002F20: lw          $t9, 0x14($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X14);
    // 0x10002F24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10002F28: lw          $a1, 0xC($t0)
    ctx->r5 = MEM_W(ctx->r8, 0XC);
    // 0x10002F2C: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x10002F30: jalr        $t9
    // 0x10002F34: lw          $a3, 0x10($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x10002F34: lw          $a3, 0x10($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X10);
    after_3:
    // 0x10002F38: b           L_10003014
    // 0x10002F3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_10003014;
    // 0x10002F3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_10002F40:
    // 0x10002F40: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x10002F44: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x10002F48: jal         0x10023440
    // 0x10002F4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x10002F4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x10002F50: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x10002F54: lw          $t9, 0x14($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X14);
    // 0x10002F58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x10002F5C: lw          $a1, 0xC($t1)
    ctx->r5 = MEM_W(ctx->r9, 0XC);
    // 0x10002F60: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x10002F64: jalr        $t9
    // 0x10002F68: lw          $a3, 0x10($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x10002F68: lw          $a3, 0x10($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X10);
    after_5:
    // 0x10002F6C: b           L_10003014
    // 0x10002F70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_10003014;
    // 0x10002F70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_10002F74:
    // 0x10002F74: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x10002F78: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x10002F7C: jal         0x10023440
    // 0x10002F80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x10002F80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x10002F84: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x10002F88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10002F8C: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x10002F90: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x10002F94: lw          $a2, 0xC($t2)
    ctx->r6 = MEM_W(ctx->r10, 0XC);
    // 0x10002F98: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x10002F9C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x10002FA0: lw          $t9, 0x18($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X18);
    // 0x10002FA4: jalr        $t9
    // 0x10002FA8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x10002FA8: nop

    after_7:
    // 0x10002FAC: b           L_10003014
    // 0x10002FB0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_10003014;
    // 0x10002FB0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_10002FB4:
    // 0x10002FB4: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x10002FB8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x10002FBC: jal         0x10023440
    // 0x10002FC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x10002FC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x10002FC4: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x10002FC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x10002FCC: lw          $t5, 0x10($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X10);
    // 0x10002FD0: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    // 0x10002FD4: lw          $a2, 0xC($t4)
    ctx->r6 = MEM_W(ctx->r12, 0XC);
    // 0x10002FD8: lw          $a3, 0x8($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X8);
    // 0x10002FDC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x10002FE0: lw          $t9, 0x18($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X18);
    // 0x10002FE4: jalr        $t9
    // 0x10002FE8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x10002FE8: nop

    after_9:
    // 0x10002FEC: b           L_10003014
    // 0x10002FF0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_10003014;
    // 0x10002FF0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_10002FF4:
    // 0x10002FF4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x10002FF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10002FFC: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x10003000: jal         0x10023580
    // 0x10003004: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    osSendMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x10003004: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    after_10:
    // 0x10003008: b           L_10003014
    // 0x1000300C: nop

        goto L_10003014;
    // 0x1000300C: nop

L_10003010:
    // 0x10003010: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_10003014:
    // 0x10003014: bnel        $s0, $zero, L_10002EB4
    if (ctx->r16 != 0) {
        // 0x10003018: lw          $a0, 0x8($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X8);
            goto L_10002EB4;
    }
    goto skip_1;
    // 0x10003018: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    skip_1:
    // 0x1000301C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x10003020: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x10003024: jal         0x10023440
    // 0x10003028: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x10003028: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x1000302C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x10003030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10003034: jal         0x10023580
    // 0x10003038: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    osSendMesg_recomp(rdram, ctx);
        goto after_12;
    // 0x10003038: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    after_12:
    // 0x1000303C: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x10003040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10003044: jal         0x10023580
    // 0x10003048: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_13;
    // 0x10003048: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x1000304C: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x10003050: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x10003054: lhu         $t0, 0x0($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X0);
    // 0x10003058: bnel        $t0, $at, L_10002EB4
    if (ctx->r8 != ctx->r1) {
        // 0x1000305C: lw          $a0, 0x8($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X8);
            goto L_10002EB4;
    }
    goto skip_2;
    // 0x1000305C: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    skip_2:
    // 0x10003060: b           L_10002EB0
    // 0x10003064: sb          $zero, 0x0($s5)
    MEM_B(0X0, ctx->r21) = 0;
        goto L_10002EB0;
    // 0x10003064: sb          $zero, 0x0($s5)
    MEM_B(0X0, ctx->r21) = 0;
    // 0x10003068: nop

    // 0x1000306C: nop

    // 0x10003070: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x10003074: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x10003078: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x1000307C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x10003080: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x10003084: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x10003088: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x1000308C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x10003090: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x10003094: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x10003098: jr          $ra
    // 0x1000309C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x1000309C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_10011624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10011624: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x10011628: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x1001162C: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x10011630: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x10011634: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x10011638: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x1001163C: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x10011640: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x10011644: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x10011648: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x1001164C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x10011650: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x10011654: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x10011658: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    // 0x1001165C: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x10011660: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x10011664: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x10011668: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x1001166C: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x10011670: beq         $at, $zero, L_10011B84
    if (ctx->r1 == 0) {
        // 0x10011674: slt         $at, $a2, $t6
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r14) ? 1 : 0;
            goto L_10011B84;
    }
    // 0x10011674: slt         $at, $a2, $t6
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x10011678: beq         $at, $zero, L_10011B84
    if (ctx->r1 == 0) {
        // 0x1001167C: sll         $fp, $a2, 2
        ctx->r30 = S32(ctx->r6 << 2);
            goto L_10011B84;
    }
    // 0x1001167C: sll         $fp, $a2, 2
    ctx->r30 = S32(ctx->r6 << 2);
    // 0x10011680: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x10011684: subu        $fp, $fp, $a2
    ctx->r30 = SUB32(ctx->r30, ctx->r6);
    // 0x10011688: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1001168C: sll         $fp, $fp, 4
    ctx->r30 = S32(ctx->r30 << 4);
    // 0x10011690: lui         $s5, 0x8004
    ctx->r21 = S32(0X8004 << 16);
    // 0x10011694: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x10011698: addiu       $s5, $s5, 0x1F68
    ctx->r21 = ADD32(ctx->r21, 0X1F68);
    // 0x1001169C: addu        $s0, $t7, $fp
    ctx->r16 = ADD32(ctx->r15, ctx->r30);
    // 0x100116A0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
L_100116A4:
    // 0x100116A4: andi        $t8, $v0, 0x80
    ctx->r24 = ctx->r2 & 0X80;
    // 0x100116A8: bne         $t8, $zero, L_10011B60
    if (ctx->r24 != 0) {
        // 0x100116AC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_10011B60;
    }
    // 0x100116AC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x100116B0: andi        $t9, $v0, 0x1000
    ctx->r25 = ctx->r2 & 0X1000;
    // 0x100116B4: beq         $t9, $zero, L_100116D0
    if (ctx->r25 == 0) {
        // 0x100116B8: andi        $t1, $s1, 0x1
        ctx->r9 = ctx->r17 & 0X1;
            goto L_100116D0;
    }
    // 0x100116B8: andi        $t1, $s1, 0x1
    ctx->r9 = ctx->r17 & 0X1;
    // 0x100116BC: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x100116C0: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x100116C4: sw          $t0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r8;
    // 0x100116C8: b           L_10011B60
    // 0x100116CC: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
        goto L_10011B60;
    // 0x100116CC: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
L_100116D0:
    // 0x100116D0: beq         $t1, $zero, L_10011728
    if (ctx->r9 == 0) {
        // 0x100116D4: lhu         $s2, 0x24($s0)
        ctx->r18 = MEM_HU(ctx->r16, 0X24);
            goto L_10011728;
    }
    // 0x100116D4: lhu         $s2, 0x24($s0)
    ctx->r18 = MEM_HU(ctx->r16, 0X24);
    // 0x100116D8: beql        $s2, $zero, L_1001172C
    if (ctx->r18 == 0) {
        // 0x100116DC: andi        $t5, $s1, 0x2
        ctx->r13 = ctx->r17 & 0X2;
            goto L_1001172C;
    }
    goto skip_0;
    // 0x100116DC: andi        $t5, $s1, 0x2
    ctx->r13 = ctx->r17 & 0X2;
    skip_0:
    // 0x100116E0: jal         0x1000F3D0
    // 0x100116E4: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    func_1000F3D0(rdram, ctx);
        goto after_0;
    // 0x100116E4: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    after_0:
    // 0x100116E8: bne         $v0, $zero, L_10011728
    if (ctx->r2 != 0) {
        // 0x100116EC: addiu       $at, $zero, -0x2
        ctx->r1 = ADD32(0, -0X2);
            goto L_10011728;
    }
    // 0x100116EC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x100116F0: and         $t2, $s1, $at
    ctx->r10 = ctx->r17 & ctx->r1;
    // 0x100116F4: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x100116F8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x100116FC: bne         $t3, $zero, L_1001170C
    if (ctx->r11 != 0) {
        // 0x10011700: or          $s1, $t2, $zero
        ctx->r17 = ctx->r10 | 0;
            goto L_1001170C;
    }
    // 0x10011700: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x10011704: ori         $s1, $t2, 0x80
    ctx->r17 = ctx->r10 | 0X80;
    // 0x10011708: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
L_1001170C:
    // 0x1001170C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x10011710: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x10011714: sh          $zero, 0x26($s0)
    MEM_H(0X26, ctx->r16) = 0;
    // 0x10011718: sb          $zero, 0x22($s0)
    MEM_B(0X22, ctx->r16) = 0;
    // 0x1001171C: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x10011720: sw          $s1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r17;
    // 0x10011724: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
L_10011728:
    // 0x10011728: andi        $t5, $s1, 0x2
    ctx->r13 = ctx->r17 & 0X2;
L_1001172C:
    // 0x1001172C: bne         $t5, $zero, L_1001173C
    if (ctx->r13 != 0) {
        // 0x10011730: andi        $t6, $s1, 0x100
        ctx->r14 = ctx->r17 & 0X100;
            goto L_1001173C;
    }
    // 0x10011730: andi        $t6, $s1, 0x100
    ctx->r14 = ctx->r17 & 0X100;
    // 0x10011734: bnel        $s2, $zero, L_10011B58
    if (ctx->r18 != 0) {
        // 0x10011738: sh          $s2, 0x24($s0)
        MEM_H(0X24, ctx->r16) = ctx->r18;
            goto L_10011B58;
    }
    goto skip_1;
    // 0x10011738: sh          $s2, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r18;
    skip_1:
L_1001173C:
    // 0x1001173C: beq         $t6, $zero, L_10011754
    if (ctx->r14 == 0) {
        // 0x10011740: andi        $t7, $s1, 0x40
        ctx->r15 = ctx->r17 & 0X40;
            goto L_10011754;
    }
    // 0x10011740: andi        $t7, $s1, 0x40
    ctx->r15 = ctx->r17 & 0X40;
    // 0x10011744: addiu       $s3, $zero, 0x40
    ctx->r19 = ADD32(0, 0X40);
    // 0x10011748: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
    // 0x1001174C: b           L_10011758
    // 0x10011750: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10011758;
    // 0x10011750: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_10011754:
    // 0x10011754: addiu       $v0, $sp, 0xBC
    ctx->r2 = ADD32(ctx->r29, 0XBC);
L_10011758:
    // 0x10011758: beq         $t7, $zero, L_100117DC
    if (ctx->r15 == 0) {
        // 0x1001175C: addiu       $t2, $sp, 0xB4
        ctx->r10 = ADD32(ctx->r29, 0XB4);
            goto L_100117DC;
    }
    // 0x1001175C: addiu       $t2, $sp, 0xB4
    ctx->r10 = ADD32(ctx->r29, 0XB4);
    // 0x10011760: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x10011764: lwc1        $f6, 0x18($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X18);
    // 0x10011768: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x1001176C: lw          $t9, 0x4($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X4);
    // 0x10011770: lw          $t0, 0x8($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X8);
    // 0x10011774: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x10011778: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1001177C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x10011780: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x10011784: lhu         $t1, 0x8($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X8);
    // 0x10011788: addiu       $t3, $sp, 0xBC
    ctx->r11 = ADD32(ctx->r29, 0XBC);
    // 0x1001178C: addiu       $t4, $sp, 0xB4
    ctx->r12 = ADD32(ctx->r29, 0XB4);
    // 0x10011790: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x10011794: lh          $t2, 0xA($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XA);
    // 0x10011798: addiu       $t5, $sp, 0xAC
    ctx->r13 = ADD32(ctx->r29, 0XAC);
    // 0x1001179C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x100117A0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x100117A4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x100117A8: lw          $a1, 0xC($s5)
    ctx->r5 = MEM_W(ctx->r21, 0XC);
    // 0x100117AC: lw          $a2, 0x10($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X10);
    // 0x100117B0: lw          $a3, 0x14($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X14);
    // 0x100117B4: jal         0x1000A750
    // 0x100117B8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    func_1000A750(rdram, ctx);
        goto after_1;
    // 0x100117B8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_1:
    // 0x100117BC: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    // 0x100117C0: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x100117C4: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x100117C8: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x100117CC: mflo        $t8
    ctx->r24 = lo;
    // 0x100117D0: srl         $t9, $t8, 15
    ctx->r25 = S32(U32(ctx->r24) >> 15);
    // 0x100117D4: b           L_10011814
    // 0x100117D8: sw          $t9, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r25;
        goto L_10011814;
    // 0x100117D8: sw          $t9, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r25;
L_100117DC:
    // 0x100117DC: lhu         $t0, 0x8($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X8);
    // 0x100117E0: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    // 0x100117E4: lh          $a1, 0x4($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4);
    // 0x100117E8: lh          $a2, 0x6($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X6);
    // 0x100117EC: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x100117F0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x100117F4: lh          $t1, 0xA($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA);
    // 0x100117F8: addiu       $t3, $sp, 0xAC
    ctx->r11 = ADD32(ctx->r29, 0XAC);
    // 0x100117FC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x10011800: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x10011804: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x10011808: jal         0x100114D0
    // 0x1001180C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_100114D0(rdram, ctx);
        goto after_2;
    // 0x1001180C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_2:
    // 0x10011810: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
L_10011814:
    // 0x10011814: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x10011818: lbu         $t4, -0x19EB($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X19EB);
    // 0x1001181C: beql        $t4, $zero, L_1001182C
    if (ctx->r12 == 0) {
        // 0x10011820: lh          $t5, 0x20($s0)
        ctx->r13 = MEM_H(ctx->r16, 0X20);
            goto L_1001182C;
    }
    goto skip_2;
    // 0x10011820: lh          $t5, 0x20($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X20);
    skip_2:
    // 0x10011824: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x10011828: lh          $t5, 0x20($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X20);
L_1001182C:
    // 0x1001182C: andi        $t8, $s1, 0x10
    ctx->r24 = ctx->r17 & 0X10;
    // 0x10011830: sw          $t5, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r13;
    // 0x10011834: lbu         $t6, 0x23($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X23);
    // 0x10011838: sw          $t6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r14;
    // 0x1001183C: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x10011840: beq         $t8, $zero, L_100118A8
    if (ctx->r24 == 0) {
        // 0x10011844: sh          $t7, 0xA6($sp)
        MEM_H(0XA6, ctx->r29) = ctx->r15;
            goto L_100118A8;
    }
    // 0x10011844: sh          $t7, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r15;
    // 0x10011848: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x1001184C: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x10011850: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    // 0x10011854: beq         $v0, $zero, L_100118A8
    if (ctx->r2 == 0) {
        // 0x10011858: addiu       $a3, $sp, 0xBC
        ctx->r7 = ADD32(ctx->r29, 0XBC);
            goto L_100118A8;
    }
    // 0x10011858: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    // 0x1001185C: sw          $s1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r17;
    // 0x10011860: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x10011864: addiu       $t0, $sp, 0xA8
    ctx->r8 = ADD32(ctx->r29, 0XA8);
    // 0x10011868: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x1001186C: addiu       $t2, $sp, 0xA6
    ctx->r10 = ADD32(ctx->r29, 0XA6);
    // 0x10011870: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x10011874: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x10011878: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1001187C: jalr        $v0
    // 0x10011880: addu        $a0, $fp, $t9
    ctx->r4 = ADD32(ctx->r30, ctx->r25);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x10011880: addu        $a0, $fp, $t9
    ctx->r4 = ADD32(ctx->r30, ctx->r25);
    after_3:
    // 0x10011884: beq         $v0, $zero, L_100118A0
    if (ctx->r2 == 0) {
        // 0x10011888: lw          $a0, 0xC8($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XC8);
            goto L_100118A0;
    }
    // 0x10011888: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x1001188C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x10011890: jal         0x1000FE88
    // 0x10011894: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_1000FE88(rdram, ctx);
        goto after_4;
    // 0x10011894: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_4:
    // 0x10011898: b           L_10011B60
    // 0x1001189C: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
        goto L_10011B60;
    // 0x1001189C: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
L_100118A0:
    // 0x100118A0: lhu         $s2, 0x24($s0)
    ctx->r18 = MEM_HU(ctx->r16, 0X24);
    // 0x100118A4: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
L_100118A8:
    // 0x100118A8: lhu         $t3, 0xA6($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0XA6);
    // 0x100118AC: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x100118B0: beql        $t3, $zero, L_10011B58
    if (ctx->r11 == 0) {
        // 0x100118B4: sh          $s2, 0x24($s0)
        MEM_H(0X24, ctx->r16) = ctx->r18;
            goto L_10011B58;
    }
    goto skip_3;
    // 0x100118B4: sh          $s2, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r18;
    skip_3:
    // 0x100118B8: beq         $t4, $zero, L_10011B10
    if (ctx->r12 == 0) {
        // 0x100118BC: lw          $s3, 0xBC($sp)
        ctx->r19 = MEM_W(ctx->r29, 0XBC);
            goto L_10011B10;
    }
    // 0x100118BC: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x100118C0: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x100118C4: andi        $t5, $s3, 0x80
    ctx->r13 = ctx->r19 & 0X80;
    // 0x100118C8: andi        $t7, $s3, 0x7F
    ctx->r15 = ctx->r19 & 0X7F;
    // 0x100118CC: andi        $t8, $s1, 0x200
    ctx->r24 = ctx->r17 & 0X200;
    // 0x100118D0: sw          $t7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r15;
    // 0x100118D4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x100118D8: beq         $t8, $zero, L_10011900
    if (ctx->r24 == 0) {
        // 0x100118DC: or          $s4, $t5, $t6
        ctx->r20 = ctx->r13 | ctx->r14;
            goto L_10011900;
    }
    // 0x100118DC: or          $s4, $t5, $t6
    ctx->r20 = ctx->r13 | ctx->r14;
    // 0x100118E0: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x100118E4: subu        $s3, $v1, $t7
    ctx->r19 = SUB32(ctx->r3, ctx->r15);
    // 0x100118E8: bne         $s3, $v1, L_100118F8
    if (ctx->r19 != ctx->r3) {
        // 0x100118EC: sw          $s3, 0xBC($sp)
        MEM_W(0XBC, ctx->r29) = ctx->r19;
            goto L_100118F8;
    }
    // 0x100118EC: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
    // 0x100118F0: addiu       $s3, $zero, 0x7F
    ctx->r19 = ADD32(0, 0X7F);
    // 0x100118F4: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
L_100118F8:
    // 0x100118F8: xori        $t9, $s4, 0x80
    ctx->r25 = ctx->r20 ^ 0X80;
    // 0x100118FC: or          $s4, $t9, $zero
    ctx->r20 = ctx->r25 | 0;
L_10011900:
    // 0x10011900: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x10011904: jal         0x10019AB0
    // 0x10011908: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    alCents2Ratio(rdram, ctx);
        goto after_5;
    // 0x10011908: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    after_5:
    // 0x1001190C: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x10011910: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x10011914: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x10011918: bne         $v0, $zero, L_1001198C
    if (ctx->r2 != 0) {
        // 0x1001191C: lw          $t3, 0xB4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XB4);
            goto L_1001198C;
    }
    // 0x1001191C: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x10011920: andi        $v0, $s1, 0xC00
    ctx->r2 = ctx->r17 & 0XC00;
    // 0x10011924: beq         $v0, $zero, L_10011948
    if (ctx->r2 == 0) {
        // 0x10011928: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_10011948;
    }
    // 0x10011928: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001192C: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x10011930: bne         $v0, $at, L_10011940
    if (ctx->r2 != ctx->r1) {
        // 0x10011934: nop
    
            goto L_10011940;
    }
    // 0x10011934: nop

    // 0x10011938: b           L_10011950
    // 0x1001193C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10011950;
    // 0x1001193C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_10011940:
    // 0x10011940: b           L_10011950
    // 0x10011944: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_10011950;
    // 0x10011944: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_10011948:
    // 0x10011948: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1001194C: lbu         $v0, 0x1FD9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1FD9);
L_10011950:
    // 0x10011950: lw          $t0, 0xA8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA8);
    // 0x10011954: lhu         $a1, 0xA6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XA6);
    // 0x10011958: lhu         $a2, 0xB6($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XB6);
    // 0x1001195C: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    // 0x10011960: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x10011964: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x10011968: jal         0x10010BE8
    // 0x1001196C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_10010BE8(rdram, ctx);
        goto after_6;
    // 0x1001196C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_6:
    // 0x10011970: beq         $v0, $zero, L_10011ADC
    if (ctx->r2 == 0) {
        // 0x10011974: andi        $s2, $v0, 0xFFFF
        ctx->r18 = ctx->r2 & 0XFFFF;
            goto L_10011ADC;
    }
    // 0x10011974: andi        $s2, $v0, 0xFFFF
    ctx->r18 = ctx->r2 & 0XFFFF;
    // 0x10011978: lhu         $t2, 0xA6($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0XA6);
    // 0x1001197C: ori         $t1, $s1, 0x1
    ctx->r9 = ctx->r17 | 0X1;
    // 0x10011980: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x10011984: b           L_10011ADC
    // 0x10011988: sh          $t2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r10;
        goto L_10011ADC;
    // 0x10011988: sh          $t2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r10;
L_1001198C:
    // 0x1001198C: lhu         $t4, 0x26($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X26);
    // 0x10011990: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    // 0x10011994: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x10011998: beql        $t3, $t4, L_100119AC
    if (ctx->r11 == ctx->r12) {
        // 0x1001199C: lbu         $v0, 0x22($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X22);
            goto L_100119AC;
    }
    goto skip_4;
    // 0x1001199C: lbu         $v0, 0x22($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X22);
    skip_4:
    // 0x100119A0: jal         0x1000F85C
    // 0x100119A4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    func_1000F85C(rdram, ctx);
        goto after_7;
    // 0x100119A4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_7:
    // 0x100119A8: lbu         $v0, 0x22($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X22);
L_100119AC:
    // 0x100119AC: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x100119B0: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    // 0x100119B4: andi        $t6, $v0, 0x7F
    ctx->r14 = ctx->r2 & 0X7F;
    // 0x100119B8: beq         $t5, $t6, L_100119CC
    if (ctx->r13 == ctx->r14) {
        // 0x100119BC: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_100119CC;
    }
    // 0x100119BC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x100119C0: jal         0x1000F85C
    // 0x100119C4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_1000F85C(rdram, ctx);
        goto after_8;
    // 0x100119C4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_8:
    // 0x100119C8: lbu         $v0, 0x22($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X22);
L_100119CC:
    // 0x100119CC: lbu         $t7, 0x23($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X23);
    // 0x100119D0: andi        $t8, $v0, 0x80
    ctx->r24 = ctx->r2 & 0X80;
    // 0x100119D4: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    // 0x100119D8: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x100119DC: beq         $s4, $t9, L_100119EC
    if (ctx->r20 == ctx->r25) {
        // 0x100119E0: addiu       $a1, $zero, 0x100
        ctx->r5 = ADD32(0, 0X100);
            goto L_100119EC;
    }
    // 0x100119E0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x100119E4: jal         0x1000F85C
    // 0x100119E8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_1000F85C(rdram, ctx);
        goto after_9;
    // 0x100119E8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_9:
L_100119EC:
    // 0x100119EC: andi        $t0, $s1, 0x4
    ctx->r8 = ctx->r17 & 0X4;
    // 0x100119F0: beq         $t0, $zero, L_10011AB4
    if (ctx->r8 == 0) {
        // 0x100119F4: lw          $t2, 0xAC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XAC);
            goto L_10011AB4;
    }
    // 0x100119F4: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x100119F8: lhu         $t1, 0x28($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X28);
    // 0x100119FC: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x10011A00: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x10011A04: subu        $t4, $t1, $t2
    ctx->r12 = SUB32(ctx->r9, ctx->r10);
    // 0x10011A08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x10011A0C: multu       $t4, $t3
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10011A10: addiu       $t5, $zero, 0x16F
    ctx->r13 = ADD32(0, 0X16F);
    // 0x10011A14: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x10011A18: mflo        $v0
    ctx->r2 = lo;
    // 0x10011A1C: nop

    // 0x10011A20: nop

    // 0x10011A24: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x10011A28: mflo        $v0
    ctx->r2 = lo;
    // 0x10011A2C: slti        $at, $v0, 0x16F
    ctx->r1 = SIGNED(ctx->r2) < 0X16F ? 1 : 0;
    // 0x10011A30: bne         $at, $zero, L_10011A40
    if (ctx->r1 != 0) {
        // 0x10011A34: subu        $t7, $t5, $v0
        ctx->r15 = SUB32(ctx->r13, ctx->r2);
            goto L_10011A40;
    }
    // 0x10011A34: subu        $t7, $t5, $v0
    ctx->r15 = SUB32(ctx->r13, ctx->r2);
    // 0x10011A38: b           L_10011A90
    // 0x10011A3C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
        goto L_10011A90;
    // 0x10011A3C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_10011A40:
    // 0x10011A40: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x10011A44: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10011A48: lwc1        $f8, -0x3C00($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3C00);
    // 0x10011A4C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x10011A50: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x10011A54: div.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x10011A58: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x10011A5C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x10011A60: bc1fl       L_10011A74
    if (!c1cs) {
        // 0x10011A64: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_10011A74;
    }
    goto skip_5;
    // 0x10011A64: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_5:
    // 0x10011A68: b           L_10011A90
    // 0x10011A6C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
        goto L_10011A90;
    // 0x10011A6C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x10011A70: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_10011A74:
    // 0x10011A74: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x10011A78: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x10011A7C: nop

    // 0x10011A80: bc1f        L_10011A90
    if (!c1cs) {
        // 0x10011A84: nop
    
            goto L_10011A90;
    }
    // 0x10011A84: nop

    // 0x10011A88: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x10011A8C: nop

L_10011A90:
    // 0x10011A90: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x10011A94: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10011A98: lwc1        $f10, -0x3BFC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3BFC);
    // 0x10011A9C: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x10011AA0: lwc1        $f0, 0x2C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x10011AA4: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x10011AA8: mul.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x10011AAC: add.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x10011AB0: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
L_10011AB4:
    // 0x10011AB4: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x10011AB8: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x10011ABC: lw          $a2, 0x9C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X9C);
    // 0x10011AC0: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    // 0x10011AC4: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x10011AC8: nop

    // 0x10011ACC: bc1tl       L_10011AE0
    if (c1cs) {
        // 0x10011AD0: lw          $t8, 0xAC($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XAC);
            goto L_10011AE0;
    }
    goto skip_6;
    // 0x10011AD0: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    skip_6:
    // 0x10011AD4: jal         0x1000F85C
    // 0x10011AD8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_1000F85C(rdram, ctx);
        goto after_10;
    // 0x10011AD8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_10:
L_10011ADC:
    // 0x10011ADC: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
L_10011AE0:
    // 0x10011AE0: sh          $t8, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r24;
    // 0x10011AE4: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x10011AE8: sh          $t9, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r25;
    // 0x10011AEC: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x10011AF0: or          $t1, $t0, $s4
    ctx->r9 = ctx->r8 | ctx->r20;
    // 0x10011AF4: sb          $t1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r9;
    // 0x10011AF8: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
    // 0x10011AFC: sb          $t2, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r10;
    // 0x10011B00: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x10011B04: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
    // 0x10011B08: b           L_10011B58
    // 0x10011B0C: sh          $s2, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r18;
        goto L_10011B58;
    // 0x10011B0C: sh          $s2, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r18;
L_10011B10:
    // 0x10011B10: andi        $t4, $s1, 0x8
    ctx->r12 = ctx->r17 & 0X8;
    // 0x10011B14: beq         $t4, $zero, L_10011B40
    if (ctx->r12 == 0) {
        // 0x10011B18: lw          $a0, 0xC8($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XC8);
            goto L_10011B40;
    }
    // 0x10011B18: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10011B1C: beql        $s2, $zero, L_10011B30
    if (ctx->r18 == 0) {
        // 0x10011B20: addiu       $at, $zero, -0x2
        ctx->r1 = ADD32(0, -0X2);
            goto L_10011B30;
    }
    goto skip_7;
    // 0x10011B20: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    skip_7:
    // 0x10011B24: jal         0x100111C8
    // 0x10011B28: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    func_100111C8(rdram, ctx);
        goto after_11;
    // 0x10011B28: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    after_11:
    // 0x10011B2C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
L_10011B30:
    // 0x10011B30: and         $t3, $s1, $at
    ctx->r11 = ctx->r17 & ctx->r1;
    // 0x10011B34: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x10011B38: b           L_10011B54
    // 0x10011B3C: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
        goto L_10011B54;
    // 0x10011B3C: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
L_10011B40:
    // 0x10011B40: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x10011B44: jal         0x1000FE88
    // 0x10011B48: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_1000FE88(rdram, ctx);
        goto after_12;
    // 0x10011B48: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_12:
    // 0x10011B4C: b           L_10011B60
    // 0x10011B50: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
        goto L_10011B60;
    // 0x10011B50: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
L_10011B54:
    // 0x10011B54: sh          $s2, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r18;
L_10011B58:
    // 0x10011B58: sw          $s1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r17;
    // 0x10011B5C: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
L_10011B60:
    // 0x10011B60: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x10011B64: slt         $at, $s6, $v1
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x10011B68: addiu       $fp, $fp, 0x30
    ctx->r30 = ADD32(ctx->r30, 0X30);
    // 0x10011B6C: beq         $at, $zero, L_10011B84
    if (ctx->r1 == 0) {
        // 0x10011B70: addiu       $s0, $s0, 0x30
        ctx->r16 = ADD32(ctx->r16, 0X30);
            goto L_10011B84;
    }
    // 0x10011B70: addiu       $s0, $s0, 0x30
    ctx->r16 = ADD32(ctx->r16, 0X30);
    // 0x10011B74: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x10011B78: slt         $at, $s6, $t6
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x10011B7C: bnel        $at, $zero, L_100116A4
    if (ctx->r1 != 0) {
        // 0x10011B80: lw          $v0, 0x10($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X10);
            goto L_100116A4;
    }
    goto skip_8;
    // 0x10011B80: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    skip_8:
L_10011B84:
    // 0x10011B84: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x10011B88: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x10011B8C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x10011B90: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x10011B94: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x10011B98: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x10011B9C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x10011BA0: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x10011BA4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x10011BA8: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x10011BAC: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x10011BB0: jr          $ra
    // 0x10011BB4: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x10011BB4: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_151F7F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F7F60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151F7F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F7F68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151F7F6C: addiu       $t6, $zero, 0x1000
    ctx->r14 = ADD32(0, 0X1000);
    // 0x151F7F70: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x151F7F74: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x151F7F78: lw          $t8, 0x201C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X201C);
    // 0x151F7F7C: lw          $t9, 0x3F88($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X3F88);
    // 0x151F7F80: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x151F7F84: slti        $at, $t0, 0x1FFC
    ctx->r1 = SIGNED(ctx->r8) < 0X1FFC ? 1 : 0;
    // 0x151F7F88: bne         $at, $zero, L_151F7FD8
    if (ctx->r1 != 0) {
        // 0x151F7F8C: nop
    
            goto L_151F7FD8;
    }
    // 0x151F7F8C: nop

    // 0x151F7F90: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x151F7F94: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x151F7F98: addiu       $a1, $t1, 0x1C
    ctx->r5 = ADD32(ctx->r9, 0X1C);
    // 0x151F7F9C: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x151F7FA0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    // 0x151F7FA4: jal         0x10023A10
    // 0x151F7FA8: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    bcopy_recomp(rdram, ctx);
        goto after_0;
    // 0x151F7FA8: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_0:
    // 0x151F7FAC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x151F7FB0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x151F7FB4: lw          $t4, 0x201C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X201C);
    // 0x151F7FB8: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x151F7FBC: sw          $t6, 0x201C($t3)
    MEM_W(0X201C, ctx->r11) = ctx->r14;
    // 0x151F7FC0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x151F7FC4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x151F7FC8: lw          $t8, 0x2020($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2020);
    // 0x151F7FCC: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x151F7FD0: subu        $t1, $t8, $t0
    ctx->r9 = SUB32(ctx->r24, ctx->r8);
    // 0x151F7FD4: sw          $t1, 0x2020($t7)
    MEM_W(0X2020, ctx->r15) = ctx->r9;
L_151F7FD8:
    // 0x151F7FD8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x151F7FDC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151F7FE0: lw          $t4, 0x201C($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X201C);
    // 0x151F7FE4: lw          $t9, 0x4($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X4);
    // 0x151F7FE8: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x151F7FEC: addu        $a1, $t2, $t4
    ctx->r5 = ADD32(ctx->r10, ctx->r12);
    // 0x151F7FF0: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x151F7FF4: jalr        $t9
    // 0x151F7FF8: lw          $a2, 0x3F88($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X3F88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x151F7FF8: lw          $a2, 0x3F88($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X3F88);
    after_1:
    // 0x151F7FFC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x151F8000: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151F8004: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x151F8008: lw          $t3, 0x3F88($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X3F88);
    // 0x151F800C: slt         $at, $t5, $t3
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x151F8010: beq         $at, $zero, L_151F8034
    if (ctx->r1 == 0) {
        // 0x151F8014: nop
    
            goto L_151F8034;
    }
    // 0x151F8014: nop

    // 0x151F8018: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x151F801C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x151F8020: lw          $t1, 0x3F88($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X3F88);
    // 0x151F8024: addu        $a0, $t8, $t0
    ctx->r4 = ADD32(ctx->r24, ctx->r8);
    // 0x151F8028: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    // 0x151F802C: jal         0x100226F0
    // 0x151F8030: subu        $a1, $t1, $t0
    ctx->r5 = SUB32(ctx->r9, ctx->r8);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x151F8030: subu        $a1, $t1, $t0
    ctx->r5 = SUB32(ctx->r9, ctx->r8);
    after_2:
L_151F8034:
    // 0x151F8034: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x151F8038: lw          $t4, 0x18($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X18);
    // 0x151F803C: lw          $t2, 0x3F88($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X3F88);
    // 0x151F8040: addu        $t9, $t4, $t2
    ctx->r25 = ADD32(ctx->r12, ctx->r10);
    // 0x151F8044: sw          $t9, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->r25;
    // 0x151F8048: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151F804C: lw          $t5, 0x201C($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X201C);
    // 0x151F8050: lw          $t3, 0x3F88($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X3F88);
    // 0x151F8054: addu        $t8, $t5, $t3
    ctx->r24 = ADD32(ctx->r13, ctx->r11);
    // 0x151F8058: sw          $t8, 0x201C($t6)
    MEM_W(0X201C, ctx->r14) = ctx->r24;
    // 0x151F805C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x151F8060: lw          $t0, 0x201C($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X201C);
    // 0x151F8064: lw          $t4, 0x3F88($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X3F88);
    // 0x151F8068: b           L_151F8078
    // 0x151F806C: subu        $v0, $t0, $t4
    ctx->r2 = SUB32(ctx->r8, ctx->r12);
        goto L_151F8078;
    // 0x151F806C: subu        $v0, $t0, $t4
    ctx->r2 = SUB32(ctx->r8, ctx->r12);
    // 0x151F8070: b           L_151F8078
    // 0x151F8074: nop

        goto L_151F8078;
    // 0x151F8074: nop

L_151F8078:
    // 0x151F8078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F807C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151F8080: jr          $ra
    // 0x151F8084: nop

    return;
    return;
    // 0x151F8084: nop

;}
RECOMP_FUNC void func_151ED09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151ED09C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151ED0A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151ED0A4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151ED0A8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151ED0AC: addiu       $t7, $t7, 0x28
    ctx->r15 = ADD32(ctx->r15, 0X28);
    // 0x151ED0B0: lui         $t6, 0xDE00
    ctx->r14 = S32(0XDE00 << 16);
    // 0x151ED0B4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x151ED0B8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x151ED0BC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151ED0C0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151ED0C4: lw          $v1, 0xA90($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XA90);
    // 0x151ED0C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151ED0CC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151ED0D0: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x151ED0D4: slti        $at, $t8, 0x100
    ctx->r1 = SIGNED(ctx->r24) < 0X100 ? 1 : 0;
    // 0x151ED0D8: bne         $at, $zero, L_151ED0E4
    if (ctx->r1 != 0) {
        // 0x151ED0DC: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_151ED0E4;
    }
    // 0x151ED0DC: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x151ED0E0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151ED0E4:
    // 0x151ED0E4: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x151ED0E8: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151ED0EC: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x151ED0F0: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x151ED0F4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x151ED0F8: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x151ED0FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151ED100: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151ED104: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151ED108: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x151ED10C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x151ED110: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x151ED114: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x151ED118: addiu       $a1, $a1, 0x181C
    ctx->r5 = ADD32(ctx->r5, 0X181C);
    // 0x151ED11C: addiu       $a2, $zero, 0x92
    ctx->r6 = ADD32(0, 0X92);
    // 0x151ED120: addiu       $a3, $zero, 0x6C
    ctx->r7 = ADD32(0, 0X6C);
    // 0x151ED124: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151ED128: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x151ED12C: jal         0x151ED430
    // 0x151ED130: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_151ED430(rdram, ctx);
        goto after_0;
    // 0x151ED130: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151ED134: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x151ED138: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x151ED13C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x151ED140: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151ED144: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x151ED148: lui         $t6, 0xFFA6
    ctx->r14 = S32(0XFFA6 << 16);
    // 0x151ED14C: ori         $t6, $t6, 0xFF7F
    ctx->r14 = ctx->r14 | 0XFF7F;
    // 0x151ED150: ori         $t5, $t5, 0xD3FF
    ctx->r13 = ctx->r13 | 0XD3FF;
    // 0x151ED154: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x151ED158: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x151ED15C: lui         $t7, 0xFB00
    ctx->r15 = S32(0XFB00 << 16);
    // 0x151ED160: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
    // 0x151ED164: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151ED168: lbu         $t8, 0xB97($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0XB97);
    // 0x151ED16C: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x151ED170: lui         $at, 0xFF80
    ctx->r1 = S32(0XFF80 << 16);
    // 0x151ED174: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151ED178: ori         $at, $at, 0x2000
    ctx->r1 = ctx->r1 | 0X2000;
    // 0x151ED17C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151ED180: addiu       $a1, $a1, 0x1828
    ctx->r5 = ADD32(ctx->r5, 0X1828);
    // 0x151ED184: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x151ED188: addiu       $a2, $zero, 0x92
    ctx->r6 = ADD32(0, 0X92);
    // 0x151ED18C: addiu       $a3, $zero, 0x6C
    ctx->r7 = ADD32(0, 0X6C);
    // 0x151ED190: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x151ED194: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151ED198: mflo        $t0
    ctx->r8 = lo;
    // 0x151ED19C: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x151ED1A0: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x151ED1A4: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x151ED1A8: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x151ED1AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151ED1B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151ED1B4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151ED1B8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151ED1BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151ED1C0: jal         0x151ED430
    // 0x151ED1C4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_151ED430(rdram, ctx);
        goto after_1;
    // 0x151ED1C4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x151ED1C8: jal         0x15096934
    // 0x151ED1CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15096934(rdram, ctx);
        goto after_2;
    // 0x151ED1CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x151ED1D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151ED1D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151ED1D8: jr          $ra
    // 0x151ED1DC: nop

    return;
    return;
    // 0x151ED1DC: nop

;}
RECOMP_FUNC void func_10017100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017100: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10017104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10017108: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1001710C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x10017110: jal         0x10024880
    // 0x10017114: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x10017114: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x10017118: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x1001711C: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10017120: lw          $t6, -0x45D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45D8);
    // 0x10017124: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x10017128: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1001712C: beq         $t7, $zero, L_10017270
    if (ctx->r15 == 0) {
        // 0x10017130: nop
    
            goto L_10017270;
    }
    // 0x10017130: nop

    // 0x10017134: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x10017138: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1001713C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x10017140: sw          $t9, -0x45D8($at)
    MEM_W(-0X45D8, ctx->r1) = ctx->r25;
    // 0x10017144: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x10017148: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1001714C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x10017150: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x10017154: beq         $t2, $zero, L_1001716C
    if (ctx->r10 == 0) {
        // 0x10017158: nop
    
            goto L_1001716C;
    }
    // 0x10017158: nop

    // 0x1001715C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x10017160: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x10017164: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x10017168: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
L_1001716C:
    // 0x1001716C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x10017170: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x10017174: beq         $t7, $zero, L_1001718C
    if (ctx->r15 == 0) {
        // 0x10017178: nop
    
            goto L_1001718C;
    }
    // 0x10017178: nop

    // 0x1001717C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x10017180: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x10017184: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x10017188: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
L_1001718C:
    // 0x1001718C: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x10017190: lw          $t1, -0x45E0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45E0);
    // 0x10017194: beq         $t1, $zero, L_100171D4
    if (ctx->r9 == 0) {
        // 0x10017198: nop
    
            goto L_100171D4;
    }
    // 0x10017198: nop

    // 0x1001719C: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x100171A0: lw          $t2, -0x45E0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X45E0);
    // 0x100171A4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x100171A8: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x100171AC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x100171B0: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x100171B4: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x100171B8: lw          $t6, -0x45E0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45E0);
    // 0x100171BC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x100171C0: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x100171C4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x100171C8: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x100171CC: b           L_10017200
    // 0x100171D0: sw          $t7, -0x45E0($at)
    MEM_W(-0X45E0, ctx->r1) = ctx->r15;
        goto L_10017200;
    // 0x100171D0: sw          $t7, -0x45E0($at)
    MEM_W(-0X45E0, ctx->r1) = ctx->r15;
L_100171D4:
    // 0x100171D4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x100171D8: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x100171DC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x100171E0: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x100171E4: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x100171E8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x100171EC: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x100171F0: sw          $t1, -0x45E0($at)
    MEM_W(-0X45E0, ctx->r1) = ctx->r9;
    // 0x100171F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x100171F8: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x100171FC: sw          $t2, -0x45DC($at)
    MEM_W(-0X45DC, ctx->r1) = ctx->r10;
L_10017200:
    // 0x10017200: jal         0x10024880
    // 0x10017204: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x10017204: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x10017208: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1001720C: sw          $zero, 0xC($t3)
    MEM_W(0XC, ctx->r11) = 0;
    // 0x10017210: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x10017214: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x10017218: sh          $t4, 0x4C($t5)
    MEM_H(0X4C, ctx->r13) = ctx->r12;
    // 0x1001721C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x10017220: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x10017224: sw          $t6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->r14;
    // 0x10017228: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x1001722C: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x10017230: sb          $t8, 0x4E($t0)
    MEM_B(0X4E, ctx->r8) = ctx->r24;
    // 0x10017234: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x10017238: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x1001723C: sb          $t9, 0x54($t1)
    MEM_B(0X54, ctx->r9) = ctx->r25;
    // 0x10017240: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x10017244: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x10017248: sw          $t2, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r10;
    // 0x1001724C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x10017250: sb          $zero, 0x53($t4)
    MEM_B(0X53, ctx->r12) = 0;
    // 0x10017254: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x10017258: sw          $zero, 0x38($t5)
    MEM_W(0X38, ctx->r13) = 0;
    // 0x1001725C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x10017260: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x10017264: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x10017268: b           L_10017278
    // 0x1001726C: swc1        $f4, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f4.u32l;
        goto L_10017278;
    // 0x1001726C: swc1        $f4, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f4.u32l;
L_10017270:
    // 0x10017270: jal         0x10024880
    // 0x10017274: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x10017274: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
L_10017278:
    // 0x10017278: b           L_10017288
    // 0x1001727C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
        goto L_10017288;
    // 0x1001727C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x10017280: b           L_10017288
    // 0x10017284: nop

        goto L_10017288;
    // 0x10017284: nop

L_10017288:
    // 0x10017288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001728C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10017290: jr          $ra
    // 0x10017294: nop

    return;
    return;
    // 0x10017294: nop

;}
RECOMP_FUNC void func_150707C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150707C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150707CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150707D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150707D4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150707D8: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150707DC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150707E0: jal         0x150FDDA0
    // 0x150707E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150FDDA0(rdram, ctx);
        goto after_0;
    // 0x150707E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x150707E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150707EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150707F0: jr          $ra
    // 0x150707F4: nop

    return;
    return;
    // 0x150707F4: nop

;}
RECOMP_FUNC void func_1515BA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515BA1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515BA20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1515BA24: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x1515BA28: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1515BA2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515BA30: jal         0x1515AF90
    // 0x1515BA34: nop

    func_1515AF90(rdram, ctx);
        goto after_0;
    // 0x1515BA34: nop

    after_0:
    // 0x1515BA38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515BA3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1515BA40: jr          $ra
    // 0x1515BA44: nop

    return;
    return;
    // 0x1515BA44: nop

;}
RECOMP_FUNC void func_1519897C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519897C: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x15198980: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x15198984: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15198988: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x1519898C: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x15198990: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x15198994: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x15198998: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x1519899C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x151989A0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x151989A4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x151989A8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x151989AC: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x151989B0: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x151989B4: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x151989B8: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x151989BC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x151989C0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x151989C4: lw          $t6, 0x94($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X94);
    // 0x151989C8: lw          $v0, 0x98($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X98);
    // 0x151989CC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151989D0: addiu       $t8, $t8, -0x760
    ctx->r24 = ADD32(ctx->r24, -0X760);
    // 0x151989D4: sw          $t6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r14;
    // 0x151989D8: lwr         $at, 0x2($t8)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r24, 0X2);
    // 0x151989DC: addiu       $t7, $sp, 0x88
    ctx->r15 = ADD32(ctx->r29, 0X88);
    // 0x151989E0: swr         $at, 0x2($t7)
    do_swr(rdram, 0X2, ctx->r15, ctx->r1);
    // 0x151989E4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x151989E8: lw          $a1, 0x31C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X31C);
    // 0x151989EC: bnel        $a1, $zero, L_15198A00
    if (ctx->r5 != 0) {
        // 0x151989F0: lbu         $t2, 0x58($a1)
        ctx->r10 = MEM_BU(ctx->r5, 0X58);
            goto L_15198A00;
    }
    goto skip_0;
    // 0x151989F0: lbu         $t2, 0x58($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X58);
    skip_0:
    // 0x151989F4: b           L_15198C18
    // 0x151989F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15198C18;
    // 0x151989F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151989FC: lbu         $t2, 0x58($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X58);
L_15198A00:
    // 0x15198A00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15198A04: addiu       $t5, $sp, 0x88
    ctx->r13 = ADD32(ctx->r29, 0X88);
    // 0x15198A08: beq         $t2, $at, L_15198A24
    if (ctx->r10 == ctx->r1) {
        // 0x15198A0C: addiu       $fp, $zero, 0x4
        ctx->r30 = ADD32(0, 0X4);
            goto L_15198A24;
    }
    // 0x15198A0C: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x15198A10: lhu         $t3, 0x2F8($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X2F8);
    // 0x15198A14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15198A18: andi        $t4, $t3, 0xFEFF
    ctx->r12 = ctx->r11 & 0XFEFF;
    // 0x15198A1C: b           L_15198C18
    // 0x15198A20: sh          $t4, 0x2F8($v1)
    MEM_H(0X2F8, ctx->r3) = ctx->r12;
        goto L_15198C18;
    // 0x15198A20: sh          $t4, 0x2F8($v1)
    MEM_H(0X2F8, ctx->r3) = ctx->r12;
L_15198A24:
    // 0x15198A24: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x15198A28: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x15198A2C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15198A30: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x15198A34: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x15198A38: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x15198A3C: addiu       $s6, $s6, -0x2180
    ctx->r22 = ADD32(ctx->r22, -0X2180);
    // 0x15198A40: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
    // 0x15198A44: addiu       $s7, $zero, 0x9
    ctx->r23 = ADD32(0, 0X9);
    // 0x15198A48: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
    // 0x15198A4C: addiu       $s4, $zero, 0x24
    ctx->r20 = ADD32(0, 0X24);
    // 0x15198A50: addiu       $s3, $sp, 0x7C
    ctx->r19 = ADD32(ctx->r29, 0X7C);
L_15198A54:
    // 0x15198A54: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x15198A58: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15198A5C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15198A60: lbu         $t0, 0x0($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X0);
    // 0x15198A64: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x15198A68: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x15198A6C: lw          $v0, -0x31B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X31B0);
    // 0x15198A70: beq         $v0, $zero, L_15198C00
    if (ctx->r2 == 0) {
        // 0x15198A74: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15198C00;
    }
    // 0x15198A74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15198A78: lb          $t7, -0x2E70($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X2E70);
    // 0x15198A7C: lb          $s1, 0x2E($s2)
    ctx->r17 = MEM_B(ctx->r18, 0X2E);
    // 0x15198A80: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15198A84: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x15198A88: beq         $v0, $zero, L_15198BEC
    if (ctx->r2 == 0) {
        // 0x15198A8C: sb          $t8, -0x2E70($at)
        MEM_B(-0X2E70, ctx->r1) = ctx->r24;
            goto L_15198BEC;
    }
    // 0x15198A8C: sb          $t8, -0x2E70($at)
    MEM_B(-0X2E70, ctx->r1) = ctx->r24;
    // 0x15198A90: sll         $t1, $t8, 24
    ctx->r9 = S32(ctx->r24 << 24);
    // 0x15198A94: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x15198A98: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x15198A9C: addiu       $t4, $t4, -0x2E68
    ctx->r12 = ADD32(ctx->r12, -0X2E68);
    // 0x15198AA0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15198AA4: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x15198AA8: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
L_15198AAC:
    // 0x15198AAC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x15198AB0: lb          $t6, 0x2D($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X2D);
    // 0x15198AB4: lwc1        $f22, 0x98($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X98);
    // 0x15198AB8: lwc1        $f24, 0x9C($s0)
    ctx->f24.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x15198ABC: beq         $s1, $t6, L_15198BE0
    if (ctx->r17 == ctx->r14) {
        // 0x15198AC0: lwc1        $f26, 0xA0($s0)
        ctx->f26.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_15198BE0;
    }
    // 0x15198AC0: lwc1        $f26, 0xA0($s0)
    ctx->f26.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x15198AC4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_15198AC8:
    // 0x15198AC8: bgez        $s1, L_15198AD8
    if (SIGNED(ctx->r17) >= 0) {
        // 0x15198ACC: nop
    
            goto L_15198AD8;
    }
    // 0x15198ACC: nop

    // 0x15198AD0: lbu         $s1, 0x25($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X25);
    // 0x15198AD4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_15198AD8:
    // 0x15198AD8: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15198ADC: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x15198AE0: mflo        $t9
    ctx->r25 = lo;
    // 0x15198AE4: addu        $v0, $t0, $t9
    ctx->r2 = ADD32(ctx->r8, ctx->r25);
    // 0x15198AE8: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x15198AEC: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x15198AF0: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x15198AF4: sw          $t8, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r24;
    // 0x15198AF8: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x15198AFC: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x15198B00: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15198B04: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15198B08: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15198B0C: sub.s       $f2, $f4, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f22.fl;
    // 0x15198B10: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15198B14: sub.s       $f12, $f6, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x15198B18: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15198B1C: sub.s       $f14, $f8, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f26.fl;
    // 0x15198B20: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15198B24: nop

    // 0x15198B28: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15198B2C: nop

    // 0x15198B30: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15198B34: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15198B38: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15198B3C: add.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f28.fl;
    // 0x15198B40: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x15198B44: nop

    // 0x15198B48: bc1f        L_15198BBC
    if (!c1cs) {
        // 0x15198B4C: nop
    
            goto L_15198BBC;
    }
    // 0x15198B4C: nop

    // 0x15198B50: jal         0x15183ACC
    // 0x15198B54: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_15183ACC(rdram, ctx);
        goto after_0;
    // 0x15198B54: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x15198B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15198B5C: jal         0x15168B10
    // 0x15198B60: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_15168B10(rdram, ctx);
        goto after_1;
    // 0x15198B60: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_1:
    // 0x15198B64: lwc1        $f16, 0x98($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X98);
    // 0x15198B68: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x15198B6C: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x15198B70: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15198B74: sb          $s5, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r21;
    // 0x15198B78: lw          $t1, 0x6C($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X6C);
    // 0x15198B7C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15198B80: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x15198B84: sh          $s7, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r23;
    // 0x15198B88: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15198B8C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x15198B90: swc1        $f20, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f20.u32l;
    // 0x15198B94: swc1        $f20, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f20.u32l;
    // 0x15198B98: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15198B9C: swc1        $f30, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f30.u32l;
    // 0x15198BA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15198BA4: jal         0x1510F8D8
    // 0x15198BA8: sw          $t1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r9;
    func_1510F8D8(rdram, ctx);
        goto after_2;
    // 0x15198BA8: sw          $t1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r9;
    after_2:
    // 0x15198BAC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x15198BB0: sb          $fp, 0x91($s0)
    MEM_B(0X91, ctx->r16) = ctx->r30;
    // 0x15198BB4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15198BB8: swc1        $f18, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f18.u32l;
L_15198BBC:
    // 0x15198BBC: lb          $t5, 0x2D($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X2D);
    // 0x15198BC0: bnel        $s1, $t5, L_15198AC8
    if (ctx->r17 != ctx->r13) {
        // 0x15198BC4: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_15198AC8;
    }
    goto skip_1;
    // 0x15198BC4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_1:
    // 0x15198BC8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15198BCC: lb          $t6, -0x2E70($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X2E70);
    // 0x15198BD0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15198BD4: addiu       $t9, $t9, -0x2E68
    ctx->r25 = ADD32(ctx->r25, -0X2E68);
    // 0x15198BD8: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x15198BDC: addu        $v0, $t0, $t9
    ctx->r2 = ADD32(ctx->r8, ctx->r25);
L_15198BE0:
    // 0x15198BE0: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x15198BE4: bnel        $s0, $zero, L_15198AAC
    if (ctx->r16 != 0) {
        // 0x15198BE8: lw          $t5, 0x8($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X8);
            goto L_15198AAC;
    }
    goto skip_2;
    // 0x15198BE8: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    skip_2:
L_15198BEC:
    // 0x15198BEC: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15198BF0: lb          $t7, -0x2E70($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X2E70);
    // 0x15198BF4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15198BF8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x15198BFC: sb          $t8, -0x2E70($at)
    MEM_B(-0X2E70, ctx->r1) = ctx->r24;
L_15198C00:
    // 0x15198C00: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x15198C04: addiu       $t3, $sp, 0x8B
    ctx->r11 = ADD32(ctx->r29, 0X8B);
    // 0x15198C08: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x15198C0C: bne         $t2, $t3, L_15198A54
    if (ctx->r10 != ctx->r11) {
        // 0x15198C10: sw          $t2, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r10;
            goto L_15198A54;
    }
    // 0x15198C10: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x15198C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15198C18:
    // 0x15198C18: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x15198C1C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15198C20: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15198C24: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x15198C28: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x15198C2C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x15198C30: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x15198C34: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x15198C38: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x15198C3C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x15198C40: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x15198C44: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x15198C48: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x15198C4C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x15198C50: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x15198C54: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x15198C58: jr          $ra
    // 0x15198C5C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x15198C5C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_15008A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15008A60: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008A64: sh          $zero, -0x21F8($at)
    MEM_H(-0X21F8, ctx->r1) = 0;
    // 0x15008A68: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008A6C: sb          $zero, -0x21C0($at)
    MEM_B(-0X21C0, ctx->r1) = 0;
    // 0x15008A70: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008A74: sb          $zero, -0x2254($at)
    MEM_B(-0X2254, ctx->r1) = 0;
    // 0x15008A78: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008A7C: sw          $zero, -0x21D8($at)
    MEM_W(-0X21D8, ctx->r1) = 0;
    // 0x15008A80: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008A84: sw          $zero, -0x2250($at)
    MEM_W(-0X2250, ctx->r1) = 0;
    // 0x15008A88: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008A8C: sb          $zero, -0x21E4($at)
    MEM_B(-0X21E4, ctx->r1) = 0;
    // 0x15008A90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15008A94: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008A98: sb          $zero, -0x21E0($at)
    MEM_B(-0X21E0, ctx->r1) = 0;
    // 0x15008A9C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008AA0: swc1        $f0, -0x2238($at)
    MEM_W(-0X2238, ctx->r1) = ctx->f0.u32l;
    // 0x15008AA4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008AA8: swc1        $f0, -0x2228($at)
    MEM_W(-0X2228, ctx->r1) = ctx->f0.u32l;
    // 0x15008AAC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008AB0: sb          $zero, -0x21C4($at)
    MEM_B(-0X21C4, ctx->r1) = 0;
    // 0x15008AB4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008AB8: sb          $zero, -0x2253($at)
    MEM_B(-0X2253, ctx->r1) = 0;
    // 0x15008ABC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008AC0: sw          $zero, -0x21D4($at)
    MEM_W(-0X21D4, ctx->r1) = 0;
    // 0x15008AC4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008AC8: sw          $zero, -0x224C($at)
    MEM_W(-0X224C, ctx->r1) = 0;
    // 0x15008ACC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008AD0: sb          $zero, -0x21E3($at)
    MEM_B(-0X21E3, ctx->r1) = 0;
    // 0x15008AD4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008AD8: sb          $zero, -0x21DF($at)
    MEM_B(-0X21DF, ctx->r1) = 0;
    // 0x15008ADC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008AE0: swc1        $f0, -0x2234($at)
    MEM_W(-0X2234, ctx->r1) = ctx->f0.u32l;
    // 0x15008AE4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008AE8: swc1        $f0, -0x2224($at)
    MEM_W(-0X2224, ctx->r1) = ctx->f0.u32l;
    // 0x15008AEC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008AF0: sb          $zero, -0x21C3($at)
    MEM_B(-0X21C3, ctx->r1) = 0;
    // 0x15008AF4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008AF8: sb          $zero, -0x2252($at)
    MEM_B(-0X2252, ctx->r1) = 0;
    // 0x15008AFC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B00: sw          $zero, -0x21D0($at)
    MEM_W(-0X21D0, ctx->r1) = 0;
    // 0x15008B04: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B08: sw          $zero, -0x2248($at)
    MEM_W(-0X2248, ctx->r1) = 0;
    // 0x15008B0C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B10: sb          $zero, -0x21E2($at)
    MEM_B(-0X21E2, ctx->r1) = 0;
    // 0x15008B14: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B18: sb          $zero, -0x21DE($at)
    MEM_B(-0X21DE, ctx->r1) = 0;
    // 0x15008B1C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B20: swc1        $f0, -0x2230($at)
    MEM_W(-0X2230, ctx->r1) = ctx->f0.u32l;
    // 0x15008B24: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B28: swc1        $f0, -0x2220($at)
    MEM_W(-0X2220, ctx->r1) = ctx->f0.u32l;
    // 0x15008B2C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B30: sb          $zero, -0x21C2($at)
    MEM_B(-0X21C2, ctx->r1) = 0;
    // 0x15008B34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B38: sb          $zero, -0x2251($at)
    MEM_B(-0X2251, ctx->r1) = 0;
    // 0x15008B3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B40: sw          $zero, -0x21CC($at)
    MEM_W(-0X21CC, ctx->r1) = 0;
    // 0x15008B44: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B48: sw          $zero, -0x2244($at)
    MEM_W(-0X2244, ctx->r1) = 0;
    // 0x15008B4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B50: sb          $zero, -0x21E1($at)
    MEM_B(-0X21E1, ctx->r1) = 0;
    // 0x15008B54: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B58: sb          $zero, -0x21DD($at)
    MEM_B(-0X21DD, ctx->r1) = 0;
    // 0x15008B5C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B60: swc1        $f0, -0x222C($at)
    MEM_W(-0X222C, ctx->r1) = ctx->f0.u32l;
    // 0x15008B64: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B68: swc1        $f0, -0x221C($at)
    MEM_W(-0X221C, ctx->r1) = ctx->f0.u32l;
    // 0x15008B6C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B70: sb          $zero, -0x21C1($at)
    MEM_B(-0X21C1, ctx->r1) = 0;
    // 0x15008B74: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B78: sw          $zero, -0x21E8($at)
    MEM_W(-0X21E8, ctx->r1) = 0;
    // 0x15008B7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008B80: sb          $zero, -0x21C8($at)
    MEM_B(-0X21C8, ctx->r1) = 0;
    // 0x15008B84: jr          $ra
    // 0x15008B88: nop

    return;
    return;
    // 0x15008B88: nop

;}
RECOMP_FUNC void func_15076E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076E48: jr          $ra
    // 0x15076E4C: nop

    return;
    return;
    // 0x15076E4C: nop

;}
RECOMP_FUNC void func_15141C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15141C0C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x15141C10: slti        $at, $v0, 0x59
    ctx->r1 = SIGNED(ctx->r2) < 0X59 ? 1 : 0;
    // 0x15141C14: bne         $at, $zero, L_15141C3C
    if (ctx->r1 != 0) {
        // 0x15141C18: addiu       $t6, $v0, -0x79
        ctx->r14 = ADD32(ctx->r2, -0X79);
            goto L_15141C3C;
    }
    // 0x15141C18: addiu       $t6, $v0, -0x79
    ctx->r14 = ADD32(ctx->r2, -0X79);
    // 0x15141C1C: sltiu       $at, $t6, 0x2D
    ctx->r1 = ctx->r14 < 0X2D ? 1 : 0;
    // 0x15141C20: beq         $at, $zero, L_15141CB4
    if (ctx->r1 == 0) {
        // 0x15141C24: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15141CB4;
    }
    // 0x15141C24: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15141C28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15141C2C: addu        $at, $at, $t6
    gpr jr_addend_15141C34 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15141C30: lw          $t6, 0x5218($at)
    ctx->r14 = ADD32(ctx->r1, 0X5218);
    // 0x15141C34: jr          $t6
    // 0x15141C38: nop

    switch (jr_addend_15141C34 >> 2) {
        case 0: goto L_15141C5C; break;
        case 1: goto L_15141CB4; break;
        case 2: goto L_15141C6C; break;
        case 3: goto L_15141CB4; break;
        case 4: goto L_15141CB4; break;
        case 5: goto L_15141CB4; break;
        case 6: goto L_15141CB4; break;
        case 7: goto L_15141CB4; break;
        case 8: goto L_15141CB4; break;
        case 9: goto L_15141CB4; break;
        case 10: goto L_15141CB4; break;
        case 11: goto L_15141CB4; break;
        case 12: goto L_15141CB4; break;
        case 13: goto L_15141CB4; break;
        case 14: goto L_15141CB4; break;
        case 15: goto L_15141CB4; break;
        case 16: goto L_15141CB4; break;
        case 17: goto L_15141CB4; break;
        case 18: goto L_15141CB4; break;
        case 19: goto L_15141CB4; break;
        case 20: goto L_15141CB4; break;
        case 21: goto L_15141CB4; break;
        case 22: goto L_15141CB4; break;
        case 23: goto L_15141CB4; break;
        case 24: goto L_15141C7C; break;
        case 25: goto L_15141CB4; break;
        case 26: goto L_15141CB4; break;
        case 27: goto L_15141CB4; break;
        case 28: goto L_15141CB4; break;
        case 29: goto L_15141C74; break;
        case 30: goto L_15141CB4; break;
        case 31: goto L_15141CB4; break;
        case 32: goto L_15141CB4; break;
        case 33: goto L_15141CB4; break;
        case 34: goto L_15141CB4; break;
        case 35: goto L_15141CB4; break;
        case 36: goto L_15141CB4; break;
        case 37: goto L_15141CB4; break;
        case 38: goto L_15141CB4; break;
        case 39: goto L_15141CB4; break;
        case 40: goto L_15141CB4; break;
        case 41: goto L_15141CB4; break;
        case 42: goto L_15141CB4; break;
        case 43: goto L_15141CB4; break;
        case 44: goto L_15141C94; break;
        default: switch_error(__func__, 0x15141C34, 0x800A5218);
    }
    // 0x15141C38: nop

L_15141C3C:
    // 0x15141C3C: sltiu       $at, $v0, 0x59
    ctx->r1 = ctx->r2 < 0X59 ? 1 : 0;
    // 0x15141C40: beq         $at, $zero, L_15141CB4
    if (ctx->r1 == 0) {
        // 0x15141C44: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15141CB4;
    }
    // 0x15141C44: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15141C48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15141C4C: addu        $at, $at, $t7
    gpr jr_addend_15141C54 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15141C50: lw          $t7, 0x52CC($at)
    ctx->r15 = ADD32(ctx->r1, 0X52CC);
    // 0x15141C54: jr          $t7
    // 0x15141C58: nop

    switch (jr_addend_15141C54 >> 2) {
        case 0: goto L_15141C74; break;
        case 1: goto L_15141C74; break;
        case 2: goto L_15141C74; break;
        case 3: goto L_15141C74; break;
        case 4: goto L_15141C74; break;
        case 5: goto L_15141CB4; break;
        case 6: goto L_15141CB4; break;
        case 7: goto L_15141CB4; break;
        case 8: goto L_15141CB4; break;
        case 9: goto L_15141CB4; break;
        case 10: goto L_15141CB4; break;
        case 11: goto L_15141CB4; break;
        case 12: goto L_15141CB4; break;
        case 13: goto L_15141CB4; break;
        case 14: goto L_15141CB4; break;
        case 15: goto L_15141CB4; break;
        case 16: goto L_15141C7C; break;
        case 17: goto L_15141CB4; break;
        case 18: goto L_15141CB4; break;
        case 19: goto L_15141CB4; break;
        case 20: goto L_15141CB4; break;
        case 21: goto L_15141CB4; break;
        case 22: goto L_15141CB4; break;
        case 23: goto L_15141CB4; break;
        case 24: goto L_15141CB4; break;
        case 25: goto L_15141CB4; break;
        case 26: goto L_15141CB4; break;
        case 27: goto L_15141CB4; break;
        case 28: goto L_15141CB4; break;
        case 29: goto L_15141CB4; break;
        case 30: goto L_15141CB4; break;
        case 31: goto L_15141CB4; break;
        case 32: goto L_15141CB4; break;
        case 33: goto L_15141C64; break;
        case 34: goto L_15141CB4; break;
        case 35: goto L_15141CB4; break;
        case 36: goto L_15141CB4; break;
        case 37: goto L_15141CB4; break;
        case 38: goto L_15141CB4; break;
        case 39: goto L_15141CB4; break;
        case 40: goto L_15141CB4; break;
        case 41: goto L_15141CB4; break;
        case 42: goto L_15141CB4; break;
        case 43: goto L_15141C84; break;
        case 44: goto L_15141CB4; break;
        case 45: goto L_15141CB4; break;
        case 46: goto L_15141CB4; break;
        case 47: goto L_15141CB4; break;
        case 48: goto L_15141CB4; break;
        case 49: goto L_15141CB4; break;
        case 50: goto L_15141CB4; break;
        case 51: goto L_15141CB4; break;
        case 52: goto L_15141CB4; break;
        case 53: goto L_15141CB4; break;
        case 54: goto L_15141C94; break;
        case 55: goto L_15141CB4; break;
        case 56: goto L_15141CB4; break;
        case 57: goto L_15141CB4; break;
        case 58: goto L_15141CB4; break;
        case 59: goto L_15141CB4; break;
        case 60: goto L_15141CB4; break;
        case 61: goto L_15141CB4; break;
        case 62: goto L_15141CB4; break;
        case 63: goto L_15141CB4; break;
        case 64: goto L_15141CB4; break;
        case 65: goto L_15141CB4; break;
        case 66: goto L_15141CB4; break;
        case 67: goto L_15141CB4; break;
        case 68: goto L_15141CB4; break;
        case 69: goto L_15141CA4; break;
        case 70: goto L_15141CB4; break;
        case 71: goto L_15141CB4; break;
        case 72: goto L_15141CB4; break;
        case 73: goto L_15141CB4; break;
        case 74: goto L_15141CB4; break;
        case 75: goto L_15141CAC; break;
        case 76: goto L_15141CB4; break;
        case 77: goto L_15141CB4; break;
        case 78: goto L_15141CB4; break;
        case 79: goto L_15141CB4; break;
        case 80: goto L_15141CB4; break;
        case 81: goto L_15141CB4; break;
        case 82: goto L_15141CB4; break;
        case 83: goto L_15141C94; break;
        case 84: goto L_15141C8C; break;
        case 85: goto L_15141CB4; break;
        case 86: goto L_15141CB4; break;
        case 87: goto L_15141CB4; break;
        case 88: goto L_15141C9C; break;
        default: switch_error(__func__, 0x15141C54, 0x800A52CC);
    }
    // 0x15141C58: nop

L_15141C5C:
    // 0x15141C5C: jr          $ra
    // 0x15141C60: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    return;
    return;
    // 0x15141C60: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_15141C64:
    // 0x15141C64: jr          $ra
    // 0x15141C68: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    return;
    return;
    // 0x15141C68: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_15141C6C:
    // 0x15141C6C: jr          $ra
    // 0x15141C70: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    return;
    // 0x15141C70: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_15141C74:
    // 0x15141C74: jr          $ra
    // 0x15141C78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15141C78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15141C7C:
    // 0x15141C7C: jr          $ra
    // 0x15141C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15141C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15141C84:
    // 0x15141C84: jr          $ra
    // 0x15141C88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    return;
    // 0x15141C88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_15141C8C:
    // 0x15141C8C: jr          $ra
    // 0x15141C90: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    return;
    // 0x15141C90: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_15141C94:
    // 0x15141C94: jr          $ra
    // 0x15141C98: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    return;
    // 0x15141C98: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_15141C9C:
    // 0x15141C9C: jr          $ra
    // 0x15141CA0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    return;
    // 0x15141CA0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_15141CA4:
    // 0x15141CA4: jr          $ra
    // 0x15141CA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    return;
    // 0x15141CA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_15141CAC:
    // 0x15141CAC: jr          $ra
    // 0x15141CB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    return;
    // 0x15141CB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_15141CB4:
    // 0x15141CB4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x15141CB8: jr          $ra
    // 0x15141CBC: nop

    return;
    return;
    // 0x15141CBC: nop

;}
RECOMP_FUNC void func_1001B310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001B310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1001B314: lbu         $t7, 0x35($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X35);
    // 0x1001B318: lw          $t6, 0x60($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X60);
    // 0x1001B31C: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x1001B320: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1001B324: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1001B328: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x1001B32C: lbu         $t1, 0xA($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0XA);
    // 0x1001B330: andi        $t2, $t1, 0x80
    ctx->r10 = ctx->r9 & 0X80;
    // 0x1001B334: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x1001B338: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x1001B33C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1001B340: lwc1        $f4, 0x7C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X7C);
    // 0x1001B344: lbu         $t4, 0x35($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X35);
    // 0x1001B348: lw          $t3, 0x60($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X60);
    // 0x1001B34C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1001B350: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x1001B354: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x1001B358: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1001B35C: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x1001B360: lbu         $t6, 0xA($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0XA);
    // 0x1001B364: lwc1        $f4, 0x80($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X80);
    // 0x1001B368: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1001B36C: andi        $t8, $t6, 0x7F
    ctx->r24 = ctx->r14 & 0X7F;
    // 0x1001B370: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1001B374: nop

    // 0x1001B378: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x1001B37C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x1001B380: nop

    // 0x1001B384: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1001B388: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1001B38C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1001B390: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x1001B394: nop

    // 0x1001B398: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1001B39C: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x1001B3A0: slti        $at, $t5, 0x80
    ctx->r1 = SIGNED(ctx->r13) < 0X80 ? 1 : 0;
    // 0x1001B3A4: bne         $at, $zero, L_1001B3B4
    if (ctx->r1 != 0) {
        // 0x1001B3A8: nop
    
            goto L_1001B3B4;
    }
    // 0x1001B3A8: nop

    // 0x1001B3AC: b           L_1001B3B8
    // 0x1001B3B0: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
        goto L_1001B3B8;
    // 0x1001B3B0: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
L_1001B3B4:
    // 0x1001B3B4: lw          $a3, 0x10($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10);
L_1001B3B8:
    // 0x1001B3B8: bgez        $a3, L_1001B3C8
    if (SIGNED(ctx->r7) >= 0) {
        // 0x1001B3BC: nop
    
            goto L_1001B3C8;
    }
    // 0x1001B3BC: nop

    // 0x1001B3C0: b           L_1001B3E8
    // 0x1001B3C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_1001B3E8;
    // 0x1001B3C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_1001B3C8:
    // 0x1001B3C8: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x1001B3CC: slti        $at, $t7, 0x80
    ctx->r1 = SIGNED(ctx->r15) < 0X80 ? 1 : 0;
    // 0x1001B3D0: bne         $at, $zero, L_1001B3E0
    if (ctx->r1 != 0) {
        // 0x1001B3D4: nop
    
            goto L_1001B3E0;
    }
    // 0x1001B3D4: nop

    // 0x1001B3D8: b           L_1001B3E4
    // 0x1001B3DC: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
        goto L_1001B3E4;
    // 0x1001B3DC: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
L_1001B3E0:
    // 0x1001B3E0: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
L_1001B3E4:
    // 0x1001B3E4: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
L_1001B3E8:
    // 0x1001B3E8: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x1001B3EC: or          $v0, $a2, $t6
    ctx->r2 = ctx->r6 | ctx->r14;
    // 0x1001B3F0: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x1001B3F4: b           L_1001B404
    // 0x1001B3F8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_1001B404;
    // 0x1001B3F8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x1001B3FC: b           L_1001B404
    // 0x1001B400: nop

        goto L_1001B404;
    // 0x1001B400: nop

L_1001B404:
    // 0x1001B404: jr          $ra
    // 0x1001B408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1001B408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151C2AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C2AD0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x151C2AD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151C2AD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151C2ADC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151C2AE0: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x151C2AE4: addiu       $t6, $sp, 0x53
    ctx->r14 = ADD32(ctx->r29, 0X53);
    // 0x151C2AE8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151C2AEC: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x151C2AF0: lh          $a1, 0xB6($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XB6);
    // 0x151C2AF4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151C2AF8: jal         0x151D5D60
    // 0x151C2AFC: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x151C2AFC: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    after_0:
    // 0x151C2B00: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2B04: lbu         $t2, 0x53($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X53);
    // 0x151C2B08: beq         $v0, $zero, L_151C2B58
    if (ctx->r2 == 0) {
        // 0x151C2B0C: sw          $v0, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r2;
            goto L_151C2B58;
    }
    // 0x151C2B0C: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x151C2B10: beq         $t2, $zero, L_151C2B60
    if (ctx->r10 == 0) {
        // 0x151C2B14: lh          $t1, 0xB6($sp)
        ctx->r9 = MEM_H(ctx->r29, 0XB6);
            goto L_151C2B60;
    }
    // 0x151C2B14: lh          $t1, 0xB6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XB6);
    // 0x151C2B18: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x151C2B1C: addu        $v1, $s0, $t0
    ctx->r3 = ADD32(ctx->r16, ctx->r8);
    // 0x151C2B20: lw          $a0, 0x100($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X100);
    // 0x151C2B24: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x151C2B28: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x151C2B2C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x151C2B30: jal         0x10022EC0
    // 0x151C2B34: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151C2B34: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x151C2B38: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x151C2B3C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x151C2B40: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151C2B44: lw          $a0, 0x100($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X100);
    // 0x151C2B48: jal         0x10022EC0
    // 0x151C2B4C: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151C2B4C: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
    // 0x151C2B50: b           L_151C2B60
    // 0x151C2B54: nop

        goto L_151C2B60;
    // 0x151C2B54: nop

L_151C2B58:
    // 0x151C2B58: b           L_151C2E38
    // 0x151C2B5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151C2E38;
    // 0x151C2B5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C2B60:
    // 0x151C2B60: jal         0x15144B34
    // 0x151C2B64: lh          $a0, 0xB6($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XB6);
    func_15144B34(rdram, ctx);
        goto after_3;
    // 0x151C2B64: lh          $a0, 0xB6($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XB6);
    after_3:
    // 0x151C2B68: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151C2B6C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151C2B70: lw          $at, 0x34($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X34);
    // 0x151C2B74: addiu       $t3, $sp, 0xA4
    ctx->r11 = ADD32(ctx->r29, 0XA4);
    // 0x151C2B78: addiu       $v1, $s0, 0x110
    ctx->r3 = ADD32(ctx->r16, 0X110);
    // 0x151C2B7C: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151C2B80: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x151C2B84: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x151C2B88: lw          $at, 0x3C($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X3C);
    // 0x151C2B8C: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151C2B90: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x151C2B94: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151C2B98: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x151C2B9C: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151C2BA0: sub.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151C2BA4: lwc1        $f6, 0x18($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X18);
    // 0x151C2BA8: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151C2BAC: sub.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151C2BB0: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x151C2BB4: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151C2BB8: sub.s       $f2, $f16, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x151C2BBC: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    // 0x151C2BC0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151C2BC4: mul.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x151C2BC8: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151C2BCC: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151C2BD0: sub.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x151C2BD4: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x151C2BD8: mul.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x151C2BDC: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x151C2BE0: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C2BE4: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151C2BE8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151C2BEC: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151C2BF0: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x151C2BF4: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x151C2BF8: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151C2BFC: mul.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x151C2C00: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151C2C04: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151C2C08: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x151C2C0C: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    // 0x151C2C10: sub.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151C2C14: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    // 0x151C2C18: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x151C2C1C: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x151C2C20: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x151C2C24: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x151C2C28: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151C2C2C: mul.s       $f10, $f14, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x151C2C30: nop

    // 0x151C2C34: mul.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x151C2C38: sub.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151C2C3C: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x151C2C40: nop

    // 0x151C2C44: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151C2C48: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x151C2C4C: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151C2C50: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x151C2C54: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x151C2C58: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x151C2C5C: nop

    // 0x151C2C60: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x151C2C64: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151C2C68: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x151C2C6C: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151C2C70: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x151C2C74: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x151C2C78: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151C2C7C: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x151C2C80: bc1f        L_151C2C9C
    if (!c1cs) {
        // 0x151C2C84: nop
    
            goto L_151C2C9C;
    }
    // 0x151C2C84: nop

    // 0x151C2C88: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151C2C8C: nop

    // 0x151C2C90: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x151C2C94: b           L_151C2CC8
    // 0x151C2C98: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
        goto L_151C2CC8;
    // 0x151C2C98: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
L_151C2C9C:
    // 0x151C2C9C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151C2CA0: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151C2CA4: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x151C2CA8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151C2CAC: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151C2CB0: mul.s       $f12, $f18, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151C2CB4: nop

    // 0x151C2CB8: mul.s       $f14, $f8, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151C2CBC: nop

    // 0x151C2CC0: mul.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151C2CC4: nop

L_151C2CC8:
    // 0x151C2CC8: sub.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x151C2CCC: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2CD0: lwc1        $f0, 0x98($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X98);
    // 0x151C2CD4: lwc1        $f2, 0x9C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x151C2CD8: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C2CDC: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x151C2CE0: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x151C2CE4: nop

    // 0x151C2CE8: sh          $t9, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r25;
    // 0x151C2CEC: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151C2CF0: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2CF4: sub.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x151C2CF8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C2CFC: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x151C2D00: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x151C2D04: sh          $t1, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r9;
    // 0x151C2D08: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151C2D0C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2D10: sub.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x151C2D14: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C2D18: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C2D1C: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x151C2D20: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x151C2D24: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x151C2D28: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x151C2D2C: sh          $t4, 0x4($t3)
    MEM_H(0X4, ctx->r11) = ctx->r12;
    // 0x151C2D30: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2D34: lbu         $t7, 0x5C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X5C);
    // 0x151C2D38: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C2D3C: sb          $t7, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r15;
    // 0x151C2D40: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2D44: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C2D48: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x151C2D4C: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
    // 0x151C2D50: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2D54: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x151C2D58: add.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x151C2D5C: addiu       $t2, $t6, 0x10
    ctx->r10 = ADD32(ctx->r14, 0X10);
    // 0x151C2D60: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    // 0x151C2D64: sh          $t0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r8;
    // 0x151C2D68: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2D6C: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C2D70: sh          $t4, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r12;
    // 0x151C2D74: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2D78: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x151C2D7C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x151C2D80: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x151C2D84: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2D88: add.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x151C2D8C: sb          $zero, 0xF($t6)
    MEM_B(0XF, ctx->r14) = 0;
    // 0x151C2D90: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2D94: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C2D98: sh          $zero, 0x6($t1)
    MEM_H(0X6, ctx->r9) = 0;
    // 0x151C2D9C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2DA0: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C2DA4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151C2DA8: addiu       $t2, $t0, 0x10
    ctx->r10 = ADD32(ctx->r8, 0X10);
    // 0x151C2DAC: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    // 0x151C2DB0: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x151C2DB4: sb          $zero, 0xF($t2)
    MEM_B(0XF, ctx->r10) = 0;
    // 0x151C2DB8: sh          $zero, 0x6($t2)
    MEM_H(0X6, ctx->r10) = 0;
    // 0x151C2DBC: sh          $t4, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r12;
    // 0x151C2DC0: sh          $t7, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r15;
    // 0x151C2DC4: sh          $t9, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r25;
    // 0x151C2DC8: lwc1        $f4, 0xA4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x151C2DCC: addiu       $t6, $t2, 0x10
    ctx->r14 = ADD32(ctx->r10, 0X10);
    // 0x151C2DD0: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x151C2DD4: add.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x151C2DD8: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C2DDC: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x151C2DE0: nop

    // 0x151C2DE4: sh          $t0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r8;
    // 0x151C2DE8: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151C2DEC: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2DF0: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x151C2DF4: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C2DF8: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x151C2DFC: nop

    // 0x151C2E00: sh          $t4, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r12;
    // 0x151C2E04: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151C2E08: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2E0C: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151C2E10: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C2E14: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x151C2E18: nop

    // 0x151C2E1C: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x151C2E20: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2E24: lbu         $t2, 0x5C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X5C);
    // 0x151C2E28: sb          $t2, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r10;
    // 0x151C2E2C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x151C2E30: sh          $zero, 0x6($t0)
    MEM_H(0X6, ctx->r8) = 0;
    // 0x151C2E34: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
L_151C2E38:
    // 0x151C2E38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151C2E3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151C2E40: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x151C2E44: jr          $ra
    // 0x151C2E48: nop

    return;
    return;
    // 0x151C2E48: nop

;}
RECOMP_FUNC void func_15165C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15165C80: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15165C84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15165C88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15165C8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15165C90: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x15165C94: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x15165C98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165C9C: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15165CA0: lwc1        $f4, 0x6C70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6C70);
    // 0x15165CA4: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x15165CA8: mul.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15165CAC: lwc1        $f14, 0x0($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X0);
    // 0x15165CB0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x15165CB4: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x15165CB8: jal         0x150AD78C
    // 0x15165CBC: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    func_150AD78C(rdram, ctx);
        goto after_0;
    // 0x15165CBC: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x15165CC0: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x15165CC4: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15165CC8: mul.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15165CCC: jal         0x150AD780
    // 0x15165CD0: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    func_150AD780(rdram, ctx);
        goto after_1;
    // 0x15165CD0: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x15165CD4: lbu         $v0, 0x67($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X67);
    // 0x15165CD8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x15165CDC: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15165CE0: sra         $t7, $v0, 1
    ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
    // 0x15165CE4: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x15165CE8: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x15165CEC: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15165CF0: or          $t2, $t8, $zero
    ctx->r10 = ctx->r24 | 0;
    // 0x15165CF4: blez        $t8, L_15165EE0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x15165CF8: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_15165EE0;
    }
    // 0x15165CF8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x15165CFC: andi        $v1, $t8, 0x3
    ctx->r3 = ctx->r24 & 0X3;
    // 0x15165D00: beq         $v1, $zero, L_15165D98
    if (ctx->r3 == 0) {
        // 0x15165D04: nop
    
            goto L_15165D98;
    }
    // 0x15165D04: nop

    // 0x15165D08: mul.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x15165D0C: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x15165D10: or          $t3, $v1, $zero
    ctx->r11 = ctx->r3 | 0;
    // 0x15165D14: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x15165D18: trunc.w.s   $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x15165D1C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15165D20: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x15165D24: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x15165D28: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x15165D2C: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15165D30: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x15165D34: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    // 0x15165D38: negu        $t0, $a3
    ctx->r8 = SUB32(0, ctx->r7);
L_15165D3C:
    // 0x15165D3C: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x15165D40: addu        $v1, $a2, $t2
    ctx->r3 = ADD32(ctx->r6, ctx->r10);
    // 0x15165D44: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x15165D48: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x15165D4C: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x15165D50: sh          $t0, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r8;
    // 0x15165D54: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x15165D58: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x15165D5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15165D60: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x15165D64: addu        $t5, $a1, $t9
    ctx->r13 = ADD32(ctx->r5, ctx->r25);
    // 0x15165D68: sh          $a0, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r4;
    // 0x15165D6C: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x15165D70: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x15165D74: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x15165D78: sh          $a3, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r7;
    // 0x15165D7C: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x15165D80: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x15165D84: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x15165D88: bne         $t3, $t1, L_15165D3C
    if (ctx->r11 != ctx->r9) {
        // 0x15165D8C: sh          $a0, 0x2($t6)
        MEM_H(0X2, ctx->r14) = ctx->r4;
            goto L_15165D3C;
    }
    // 0x15165D8C: sh          $a0, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r4;
    // 0x15165D90: beq         $t1, $t2, L_15165EE0
    if (ctx->r9 == ctx->r10) {
        // 0x15165D94: nop
    
            goto L_15165EE0;
    }
    // 0x15165D94: nop

L_15165D98:
    // 0x15165D98: mul.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x15165D9C: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x15165DA0: addu        $v0, $t4, $t1
    ctx->r2 = ADD32(ctx->r12, ctx->r9);
    // 0x15165DA4: addu        $a2, $t4, $t1
    ctx->r6 = ADD32(ctx->r12, ctx->r9);
    // 0x15165DA8: trunc.w.s   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x15165DAC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15165DB0: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x15165DB4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x15165DB8: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x15165DBC: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15165DC0: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x15165DC4: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15165DC8: negu        $t0, $a3
    ctx->r8 = SUB32(0, ctx->r7);
L_15165DCC:
    // 0x15165DCC: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x15165DD0: addu        $v1, $a2, $t2
    ctx->r3 = ADD32(ctx->r6, ctx->r10);
    // 0x15165DD4: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x15165DD8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x15165DDC: addu        $t5, $a1, $t9
    ctx->r13 = ADD32(ctx->r5, ctx->r25);
    // 0x15165DE0: sh          $t0, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r8;
    // 0x15165DE4: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x15165DE8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x15165DEC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15165DF0: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x15165DF4: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x15165DF8: sh          $a0, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r4;
    // 0x15165DFC: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x15165E00: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x15165E04: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x15165E08: sh          $a3, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r7;
    // 0x15165E0C: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x15165E10: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x15165E14: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x15165E18: sh          $a0, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r4;
    // 0x15165E1C: lbu         $t5, -0x3($v0)
    ctx->r13 = MEM_BU(ctx->r2, -0X3);
    // 0x15165E20: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x15165E24: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x15165E28: sh          $t0, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r8;
    // 0x15165E2C: lbu         $t8, -0x3($v0)
    ctx->r24 = MEM_BU(ctx->r2, -0X3);
    // 0x15165E30: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x15165E34: addu        $t5, $a1, $t9
    ctx->r13 = ADD32(ctx->r5, ctx->r25);
    // 0x15165E38: sh          $a0, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r4;
    // 0x15165E3C: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x15165E40: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x15165E44: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x15165E48: sh          $a3, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r7;
    // 0x15165E4C: lbu         $t9, 0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1);
    // 0x15165E50: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x15165E54: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x15165E58: sh          $a0, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r4;
    // 0x15165E5C: lbu         $t7, -0x2($v0)
    ctx->r15 = MEM_BU(ctx->r2, -0X2);
    // 0x15165E60: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x15165E64: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x15165E68: sh          $t0, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r8;
    // 0x15165E6C: lbu         $t5, -0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, -0X2);
    // 0x15165E70: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x15165E74: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x15165E78: sh          $a0, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r4;
    // 0x15165E7C: lbu         $t8, 0x2($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X2);
    // 0x15165E80: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x15165E84: addu        $t5, $a1, $t9
    ctx->r13 = ADD32(ctx->r5, ctx->r25);
    // 0x15165E88: sh          $a3, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r7;
    // 0x15165E8C: lbu         $t6, 0x2($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2);
    // 0x15165E90: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x15165E94: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x15165E98: sh          $a0, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r4;
    // 0x15165E9C: lbu         $t9, -0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X1);
    // 0x15165EA0: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x15165EA4: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x15165EA8: sh          $t0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r8;
    // 0x15165EAC: lbu         $t7, -0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, -0X1);
    // 0x15165EB0: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x15165EB4: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x15165EB8: sh          $a0, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r4;
    // 0x15165EBC: lbu         $t5, 0x3($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X3);
    // 0x15165EC0: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x15165EC4: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x15165EC8: sh          $a3, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r7;
    // 0x15165ECC: lbu         $t8, 0x3($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X3);
    // 0x15165ED0: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x15165ED4: addu        $t5, $a1, $t9
    ctx->r13 = ADD32(ctx->r5, ctx->r25);
    // 0x15165ED8: bne         $t1, $t2, L_15165DCC
    if (ctx->r9 != ctx->r10) {
        // 0x15165EDC: sh          $a0, 0x2($t5)
        MEM_H(0X2, ctx->r13) = ctx->r4;
            goto L_15165DCC;
    }
    // 0x15165EDC: sh          $a0, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r4;
L_15165EE0:
    // 0x15165EE0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15165EE4: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x15165EE8: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15165EEC: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15165EF0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15165EF4: nop

    // 0x15165EF8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15165EFC: mul.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x15165F00: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x15165F04: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x15165F08: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15165F0C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x15165F10: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x15165F14: nop

    // 0x15165F18: bc1fl       L_15165F34
    if (!c1cs) {
        // 0x15165F1C: lwc1        $f2, 0x5C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_15165F34;
    }
    goto skip_0;
    // 0x15165F1C: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    skip_0:
    // 0x15165F20: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
    // 0x15165F24: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
    // 0x15165F28: b           L_15165F54
    // 0x15165F2C: swc1        $f2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f2.u32l;
        goto L_15165F54;
    // 0x15165F2C: swc1        $f2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f2.u32l;
    // 0x15165F30: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
L_15165F34:
    // 0x15165F34: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x15165F38: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x15165F3C: nop

    // 0x15165F40: bc1fl       L_15165F58
    if (!c1cs) {
        // 0x15165F44: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15165F58;
    }
    goto skip_1;
    // 0x15165F44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x15165F48: neg.s       $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = -ctx->f14.fl;
    // 0x15165F4C: swc1        $f10, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f10.u32l;
    // 0x15165F50: swc1        $f2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f2.u32l;
L_15165F54:
    // 0x15165F54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15165F58:
    // 0x15165F58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15165F5C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15165F60: jr          $ra
    // 0x15165F64: nop

    return;
    return;
    // 0x15165F64: nop

;}
RECOMP_FUNC void func_15149264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15149264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15149268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514926C: lbu         $t6, 0xD($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD);
    // 0x15149270: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15149274: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x15149278: beql        $t7, $zero, L_15149294
    if (ctx->r15 == 0) {
        // 0x1514927C: lb          $v0, 0x11($a0)
        ctx->r2 = MEM_B(ctx->r4, 0X11);
            goto L_15149294;
    }
    goto skip_0;
    // 0x1514927C: lb          $v0, 0x11($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X11);
    skip_0:
    // 0x15149280: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    // 0x15149284: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x15149288: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x1514928C: sh          $t0, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r8;
    // 0x15149290: lb          $v0, 0x11($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X11);
L_15149294:
    // 0x15149294: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15149298: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1514929C: beq         $v0, $at, L_151492BC
    if (ctx->r2 == ctx->r1) {
        // 0x151492A0: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_151492BC;
    }
    // 0x151492A0: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x151492A4: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x151492A8: lw          $t9, -0x5B18($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5B18);
    // 0x151492AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151492B0: jalr        $t9
    // 0x151492B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151492B4: nop

    after_0:
    // 0x151492B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_151492BC:
    // 0x151492BC: lh          $v0, 0xE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE);
    // 0x151492C0: bgez        $v0, L_151492F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151492C4: nop
    
            goto L_151492F8;
    }
    // 0x151492C4: nop

    // 0x151492C8: lb          $v1, 0x10($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X10);
    // 0x151492CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151492D0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151492D4: beq         $v1, $at, L_151492F8
    if (ctx->r3 == ctx->r1) {
        // 0x151492D8: sll         $t2, $v1, 2
        ctx->r10 = S32(ctx->r3 << 2);
            goto L_151492F8;
    }
    // 0x151492D8: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x151492DC: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x151492E0: lw          $t9, -0x5B40($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5B40);
    // 0x151492E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151492E8: jalr        $t9
    // 0x151492EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x151492EC: nop

    after_1:
    // 0x151492F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151492F4: lh          $v0, 0xE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE);
L_151492F8:
    // 0x151492F8: bgezl       $v0, L_1514930C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151492FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1514930C;
    }
    goto skip_1;
    // 0x151492FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15149300: jal         0x1516972C
    // 0x15149304: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x15149304: nop

    after_2:
    // 0x15149308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1514930C:
    // 0x1514930C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15149310: jr          $ra
    // 0x15149314: nop

    return;
    return;
    // 0x15149314: nop

;}
RECOMP_FUNC void func_1510D630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510D630: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1510D634: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1510D638: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1510D63C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1510D640: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1510D644: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x1510D648: addiu       $s0, $a1, 0x2
    ctx->r16 = ADD32(ctx->r5, 0X2);
    // 0x1510D64C: blez        $v0, L_1510D678
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1510D650: sll         $t6, $v0, 1
        ctx->r14 = S32(ctx->r2 << 1);
            goto L_1510D678;
    }
    // 0x1510D650: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x1510D654: addu        $s1, $t6, $a1
    ctx->r17 = ADD32(ctx->r14, ctx->r5);
    // 0x1510D658: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x1510D65C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
L_1510D660:
    // 0x1510D660: jal         0x1510D694
    // 0x1510D664: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_1510D694(rdram, ctx);
        goto after_0;
    // 0x1510D664: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x1510D668: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x1510D66C: bne         $s1, $s0, L_1510D660
    if (ctx->r17 != ctx->r16) {
        // 0x1510D670: nop
    
            goto L_1510D660;
    }
    // 0x1510D670: nop

    // 0x1510D674: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
L_1510D678:
    // 0x1510D678: jal         0x10004074
    // 0x1510D67C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_10004074(rdram, ctx);
        goto after_1;
    // 0x1510D67C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x1510D680: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1510D684: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1510D688: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1510D68C: jr          $ra
    // 0x1510D690: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1510D690: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_150412C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150412C0: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x150412C4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150412C8: lui         $t6, 0xD700
    ctx->r14 = S32(0XD700 << 16);
    // 0x150412CC: ori         $t6, $t6, 0x2
    ctx->r14 = ctx->r14 | 0X2;
    // 0x150412D0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150412D4: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x150412D8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x150412DC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150412E0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150412E4: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x150412E8: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x150412EC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150412F0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150412F4: lui         $t8, 0xFCFF
    ctx->r24 = S32(0XFCFF << 16);
    // 0x150412F8: lui         $t9, 0xFFFC
    ctx->r25 = S32(0XFFFC << 16);
    // 0x150412FC: ori         $t9, $t9, 0xF279
    ctx->r25 = ctx->r25 | 0XF279;
    // 0x15041300: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x15041304: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x15041308: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x1504130C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15041310: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x15041314: lui         $t2, 0xEF00
    ctx->r10 = S32(0XEF00 << 16);
    // 0x15041318: lui         $t3, 0x55
    ctx->r11 = S32(0X55 << 16);
    // 0x1504131C: ori         $t3, $t3, 0x204C
    ctx->r11 = ctx->r11 | 0X204C;
    // 0x15041320: ori         $t2, $t2, 0x2C0F
    ctx->r10 = ctx->r10 | 0X2C0F;
    // 0x15041324: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x15041328: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x1504132C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15041330: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x15041334: lui         $t4, 0xFD90
    ctx->r12 = S32(0XFD90 << 16);
    // 0x15041338: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1504133C: addiu       $v0, $v0, 0x4930
    ctx->r2 = ADD32(ctx->r2, 0X4930);
    // 0x15041340: ori         $t4, $t4, 0x3F
    ctx->r12 = ctx->r12 | 0X3F;
    // 0x15041344: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x15041348: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x1504134C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15041350: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15041354: lui         $t5, 0xFD90
    ctx->r13 = S32(0XFD90 << 16);
    // 0x15041358: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x1504135C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x15041360: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15041364: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15041368: lui         $t6, 0xF590
    ctx->r14 = S32(0XF590 << 16);
    // 0x1504136C: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x15041370: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x15041374: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x15041378: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1504137C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15041380: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x15041384: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x15041388: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x1504138C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15041390: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x15041394: lui         $t2, 0x77F
    ctx->r10 = S32(0X77F << 16);
    // 0x15041398: ori         $t2, $t2, 0xF200
    ctx->r10 = ctx->r10 | 0XF200;
    // 0x1504139C: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x150413A0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x150413A4: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x150413A8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150413AC: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x150413B0: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x150413B4: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x150413B8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150413BC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x150413C0: lui         $t3, 0xF580
    ctx->r11 = S32(0XF580 << 16);
    // 0x150413C4: ori         $t3, $t3, 0x800
    ctx->r11 = ctx->r11 | 0X800;
    // 0x150413C8: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x150413CC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x150413D0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150413D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150413D8: lui         $t5, 0xF
    ctx->r13 = S32(0XF << 16);
    // 0x150413DC: ori         $t5, $t5, 0xC1FC
    ctx->r13 = ctx->r13 | 0XC1FC;
    // 0x150413E0: lui         $t4, 0xF200
    ctx->r12 = S32(0XF200 << 16);
    // 0x150413E4: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x150413E8: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x150413EC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150413F0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150413F4: jr          $ra
    // 0x150413F8: nop

    return;
    return;
    // 0x150413F8: nop

;}
RECOMP_FUNC void func_15015910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15015910: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15015914: sb          $zero, -0x42B4($at)
    MEM_B(-0X42B4, ctx->r1) = 0;
    // 0x15015918: jr          $ra
    // 0x1501591C: nop

    return;
    return;
    // 0x1501591C: nop

;}
RECOMP_FUNC void func_15128030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15128030: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15128034: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x15128038: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1512803C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15128040: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x15128044: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x15128048: lbu         $v1, 0x23C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X23C);
    // 0x1512804C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15128050: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15128054: beq         $v1, $zero, L_15128070
    if (ctx->r3 == 0) {
        // 0x15128058: addiu       $s1, $s0, 0x7F4
        ctx->r17 = ADD32(ctx->r16, 0X7F4);
            goto L_15128070;
    }
    // 0x15128058: addiu       $s1, $s0, 0x7F4
    ctx->r17 = ADD32(ctx->r16, 0X7F4);
    // 0x1512805C: lwc1        $f4, 0x35A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X35A0);
    // 0x15128060: sh          $zero, 0x834($s0)
    MEM_H(0X834, ctx->r16) = 0;
    // 0x15128064: sh          $zero, 0x7F4($s0)
    MEM_H(0X7F4, ctx->r16) = 0;
    // 0x15128068: b           L_151283A0
    // 0x1512806C: swc1        $f4, 0x820($s0)
    MEM_W(0X820, ctx->r16) = ctx->f4.u32l;
        goto L_151283A0;
    // 0x1512806C: swc1        $f4, 0x820($s0)
    MEM_W(0X820, ctx->r16) = ctx->f4.u32l;
L_15128070:
    // 0x15128070: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x15128074: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15128078: beq         $v0, $zero, L_15128098
    if (ctx->r2 == 0) {
        // 0x1512807C: nop
    
            goto L_15128098;
    }
    // 0x1512807C: nop

    // 0x15128080: beq         $v0, $at, L_151280A0
    if (ctx->r2 == ctx->r1) {
        // 0x15128084: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151280A0;
    }
    // 0x15128084: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15128088: beql        $v0, $at, L_15128134
    if (ctx->r2 == ctx->r1) {
        // 0x1512808C: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_15128134;
    }
    goto skip_0;
    // 0x1512808C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_0:
    // 0x15128090: b           L_151283A4
    // 0x15128094: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_151283A4;
    // 0x15128094: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15128098:
    // 0x15128098: b           L_151283A0
    // 0x1512809C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151283A0;
    // 0x1512809C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151280A0:
    // 0x151280A0: lw          $v0, 0x3D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D0);
    // 0x151280A4: lwc1        $f6, 0x2F8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x151280A8: lwc1        $f10, 0x300($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X300);
    // 0x151280AC: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151280B0: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151280B4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x151280B8: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151280BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151280C0: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151280C4: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151280C8: nop

    // 0x151280CC: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151280D0: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151280D4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151280D8: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x151280DC: lwc1        $f8, 0x35C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X35C);
    // 0x151280E0: lwc1        $f6, 0x2FC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x151280E4: swc1        $f20, 0x5E8($s0)
    MEM_W(0X5E8, ctx->r16) = ctx->f20.u32l;
    // 0x151280E8: swc1        $f20, 0x660($s0)
    MEM_W(0X660, ctx->r16) = ctx->f20.u32l;
    // 0x151280EC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151280F0: swc1        $f20, 0x3A8($s0)
    MEM_W(0X3A8, ctx->r16) = ctx->f20.u32l;
    // 0x151280F4: swc1        $f20, 0x65C($s0)
    MEM_W(0X65C, ctx->r16) = ctx->f20.u32l;
    // 0x151280F8: jal         0x15125594
    // 0x151280FC: swc1        $f10, 0x83C($s0)
    MEM_W(0X83C, ctx->r16) = ctx->f10.u32l;
    func_15125594(rdram, ctx);
        goto after_0;
    // 0x151280FC: swc1        $f10, 0x83C($s0)
    MEM_W(0X83C, ctx->r16) = ctx->f10.u32l;
    after_0:
    // 0x15128100: lwc1        $f16, 0x37C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15128104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15128108: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x1512810C: addiu       $a2, $s1, 0x38
    ctx->r6 = ADD32(ctx->r17, 0X38);
    // 0x15128110: jal         0x151287E0
    // 0x15128114: swc1        $f16, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f16.u32l;
    func_151287E0(rdram, ctx);
        goto after_1;
    // 0x15128114: swc1        $f16, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f16.u32l;
    after_1:
    // 0x15128118: lhu         $t6, 0x40($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X40);
    // 0x1512811C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x15128120: sh          $t6, 0x840($s0)
    MEM_H(0X840, ctx->r16) = ctx->r14;
    // 0x15128124: swc1        $f20, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f20.u32l;
    // 0x15128128: sh          $t7, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r15;
    // 0x1512812C: lbu         $v1, 0x23C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X23C);
    // 0x15128130: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_15128134:
    // 0x15128134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15128138: lh          $v0, 0x840($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X840);
    // 0x1512813C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15128140: beq         $v1, $zero, L_1512815C
    if (ctx->r3 == 0) {
        // 0x15128144: sltiu       $a1, $v0, 0x1
        ctx->r5 = ctx->r2 < 0X1 ? 1 : 0;
            goto L_1512815C;
    }
    // 0x15128144: sltiu       $a1, $v0, 0x1
    ctx->r5 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x15128148: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1512814C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15128150: swc1        $f18, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f18.u32l;
    // 0x15128154: b           L_1512819C
    // 0x15128158: sh          $zero, 0x840($s0)
    MEM_H(0X840, ctx->r16) = 0;
        goto L_1512819C;
    // 0x15128158: sh          $zero, 0x840($s0)
    MEM_H(0X840, ctx->r16) = 0;
L_1512815C:
    // 0x1512815C: lhu         $t8, 0x40($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X40);
    // 0x15128160: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15128164: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15128168: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1512816C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15128170: bgez        $t8, L_15128184
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15128174: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_15128184;
    }
    // 0x15128174: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15128178: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1512817C: nop

    // 0x15128180: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_15128184:
    // 0x15128184: div.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15128188: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1512818C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15128190: nop

    // 0x15128194: sub.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x15128198: swc1        $f8, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f8.u32l;
L_1512819C:
    // 0x1512819C: jal         0x15123568
    // 0x151281A0: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    func_15123568(rdram, ctx);
        goto after_2;
    // 0x151281A0: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_2:
    // 0x151281A4: lwc1        $f16, 0x374($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X374);
    // 0x151281A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151281AC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x151281B0: swc1        $f16, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f16.u32l;
    // 0x151281B4: lwc1        $f6, 0x348($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X348);
    // 0x151281B8: lw          $t9, 0x3D0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X3D0);
    // 0x151281BC: swc1        $f6, 0x838($s0)
    MEM_W(0X838, ctx->r16) = ctx->f6.u32l;
    // 0x151281C0: lwc1        $f10, 0x14($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X14);
    // 0x151281C4: jal         0x15124C38
    // 0x151281C8: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
    func_15124C38(rdram, ctx);
        goto after_3;
    // 0x151281C8: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
    after_3:
    // 0x151281CC: lwc1        $f0, 0x2C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x151281D0: lw          $t0, 0x3D0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X3D0);
    // 0x151281D4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x151281D8: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x151281DC: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x151281E0: bc1f        L_15128204
    if (!c1cs) {
        // 0x151281E4: swc1        $f4, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->f4.u32l;
            goto L_15128204;
    }
    // 0x151281E4: swc1        $f4, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f4.u32l;
    // 0x151281E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151281EC: nop

    // 0x151281F0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
L_151281F4:
    // 0x151281F4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x151281F8: nop

    // 0x151281FC: bc1tl       L_151281F4
    if (c1cs) {
        // 0x15128200: add.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
            goto L_151281F4;
    }
    goto skip_1;
    // 0x15128200: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    skip_1:
L_15128204:
    // 0x15128204: lw          $v0, 0x3D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D0);
    // 0x15128208: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1512820C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15128210: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15128214: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x15128218: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1512821C: swc1        $f18, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->f18.u32l;
    // 0x15128220: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15128224: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x15128228: swc1        $f8, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->f8.u32l;
    // 0x1512822C: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15128230: swc1        $f0, 0x390($s0)
    MEM_W(0X390, ctx->r16) = ctx->f0.u32l;
    // 0x15128234: bc1f        L_1512825C
    if (!c1cs) {
        // 0x15128238: swc1        $f16, 0x2AC($s0)
        MEM_W(0X2AC, ctx->r16) = ctx->f16.u32l;
            goto L_1512825C;
    }
    // 0x15128238: swc1        $f16, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f16.u32l;
    // 0x1512823C: lwc1        $f0, 0x390($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X390);
    // 0x15128240: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
L_15128244:
    // 0x15128244: swc1        $f6, 0x390($s0)
    MEM_W(0X390, ctx->r16) = ctx->f6.u32l;
    // 0x15128248: lwc1        $f0, 0x390($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X390);
    // 0x1512824C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x15128250: nop

    // 0x15128254: bc1tl       L_15128244
    if (c1cs) {
        // 0x15128258: add.s       $f6, $f0, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
            goto L_15128244;
    }
    goto skip_2;
    // 0x15128258: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    skip_2:
L_1512825C:
    // 0x1512825C: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15128260: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x15128264: lwc1        $f18, 0x3C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x15128268: lw          $t1, 0x2C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X2C);
    // 0x1512826C: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x15128270: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x15128274: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x15128278: add.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1512827C: swc1        $f16, 0x2BC($s0)
    MEM_W(0X2BC, ctx->r16) = ctx->f16.u32l;
    // 0x15128280: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x15128284: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x15128288: lwc1        $f4, 0x3C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x1512828C: sub.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x15128290: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15128294: add.s       $f8, $f2, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x15128298: swc1        $f8, 0x2C0($s0)
    MEM_W(0X2C0, ctx->r16) = ctx->f8.u32l;
    // 0x1512829C: lwc1        $f16, 0x18($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X18);
    // 0x151282A0: lwc1        $f12, 0xC($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XC);
    // 0x151282A4: lwc1        $f10, 0x3C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x151282A8: sub.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x151282AC: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x151282B0: add.s       $f18, $f12, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x151282B4: beq         $t1, $at, L_151282E0
    if (ctx->r9 == ctx->r1) {
        // 0x151282B8: swc1        $f18, 0x2C4($s0)
        MEM_W(0X2C4, ctx->r16) = ctx->f18.u32l;
            goto L_151282E0;
    }
    // 0x151282B8: swc1        $f18, 0x2C4($s0)
    MEM_W(0X2C4, ctx->r16) = ctx->f18.u32l;
    // 0x151282BC: lwc1        $f12, 0x3C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x151282C0: lwc1        $f14, 0x20($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X20);
    // 0x151282C4: jal         0x15048720
    // 0x151282C8: lw          $a2, 0x2C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X2C);
    func_15048720(rdram, ctx);
        goto after_4;
    // 0x151282C8: lw          $a2, 0x2C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X2C);
    after_4:
    // 0x151282CC: swc1        $f0, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->f0.u32l;
    // 0x151282D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151282D4: lwc1        $f8, 0x35A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X35A4);
    // 0x151282D8: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151282DC: swc1        $f16, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f16.u32l;
L_151282E0:
    // 0x151282E0: lwc1        $f2, 0x1C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x151282E4: lwc1        $f6, 0x28($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X28);
    // 0x151282E8: lwc1        $f4, 0x3C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x151282EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151282F0: sub.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x151282F4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x151282F8: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x151282FC: add.s       $f8, $f2, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x15128300: swc1        $f8, -0x4000($at)
    MEM_W(-0X4000, ctx->r1) = ctx->f8.u32l;
    // 0x15128304: lwc1        $f16, 0x838($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X838);
    // 0x15128308: lwc1        $f0, 0x83C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X83C);
    // 0x1512830C: lwc1        $f10, 0x3C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x15128310: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15128314: sub.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x15128318: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1512831C: add.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x15128320: swc1        $f18, -0x3FFC($at)
    MEM_W(-0X3FFC, ctx->r1) = ctx->f18.u32l;
    // 0x15128324: lw          $a2, 0x34($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X34);
    // 0x15128328: jal         0x15048720
    // 0x1512832C: lwc1        $f12, 0x3C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X3C);
    func_15048720(rdram, ctx);
        goto after_5;
    // 0x1512832C: lwc1        $f12, 0x3C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X3C);
    after_5:
    // 0x15128330: swc1        $f0, 0x5E8($s0)
    MEM_W(0X5E8, ctx->r16) = ctx->f0.u32l;
    // 0x15128334: lw          $a2, 0x38($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X38);
    // 0x15128338: lwc1        $f12, 0x3C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x1512833C: jal         0x15048720
    // 0x15128340: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_15048720(rdram, ctx);
        goto after_6;
    // 0x15128340: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_6:
    // 0x15128344: swc1        $f0, 0x3A8($s0)
    MEM_W(0X3A8, ctx->r16) = ctx->f0.u32l;
    // 0x15128348: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1512834C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15128350: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15128354: beql        $t2, $zero, L_15128380
    if (ctx->r10 == 0) {
        // 0x15128358: lh          $t5, 0x840($s0)
        ctx->r13 = MEM_H(ctx->r16, 0X840);
            goto L_15128380;
    }
    goto skip_3;
    // 0x15128358: lh          $t5, 0x840($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X840);
    skip_3:
    // 0x1512835C: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x15128360: lwc1        $f8, 0x35A8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X35A8);
    // 0x15128364: sh          $zero, 0x834($s0)
    MEM_H(0X834, ctx->r16) = 0;
    // 0x15128368: ori         $t4, $t3, 0x8
    ctx->r12 = ctx->r11 | 0X8;
    // 0x1512836C: sh          $zero, 0x7F4($s0)
    MEM_H(0X7F4, ctx->r16) = 0;
    // 0x15128370: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
    // 0x15128374: b           L_151283A0
    // 0x15128378: swc1        $f8, 0x820($s0)
    MEM_W(0X820, ctx->r16) = ctx->f8.u32l;
        goto L_151283A0;
    // 0x15128378: swc1        $f8, 0x820($s0)
    MEM_W(0X820, ctx->r16) = ctx->f8.u32l;
    // 0x1512837C: lh          $t5, 0x840($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X840);
L_15128380:
    // 0x15128380: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x15128384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15128388: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x1512838C: sh          $t7, 0x840($s0)
    MEM_H(0X840, ctx->r16) = ctx->r15;
    // 0x15128390: lh          $t8, 0x840($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X840);
    // 0x15128394: bgez        $t8, L_151283A0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15128398: nop
    
            goto L_151283A0;
    }
    // 0x15128398: nop

    // 0x1512839C: sh          $zero, 0x840($s0)
    MEM_H(0X840, ctx->r16) = 0;
L_151283A0:
    // 0x151283A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151283A4:
    // 0x151283A4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x151283A8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x151283AC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x151283B0: jr          $ra
    // 0x151283B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151283B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1514B8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514B8B0: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x1514B8B4: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x1514B8B8: beql        $at, $zero, L_1514B8DC
    if (ctx->r1 == 0) {
        // 0x1514B8BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1514B8DC;
    }
    goto skip_0;
    // 0x1514B8BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x1514B8C0: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x1514B8C4: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x1514B8C8: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1514B8CC: beql        $at, $zero, L_1514B8DC
    if (ctx->r1 == 0) {
        // 0x1514B8D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1514B8DC;
    }
    goto skip_1;
    // 0x1514B8D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x1514B8D4: sb          $v1, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r3;
    // 0x1514B8D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1514B8DC:
    // 0x1514B8DC: jr          $ra
    // 0x1514B8E0: nop

    return;
    return;
    // 0x1514B8E0: nop

;}
RECOMP_FUNC void func_1501E81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501E81C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1501E820: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1501E824: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1501E828: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1501E82C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501E830: addiu       $t7, $t7, 0x35EA
    ctx->r15 = ADD32(ctx->r15, 0X35EA);
    // 0x1501E834: addu        $a2, $s0, $t7
    ctx->r6 = ADD32(ctx->r16, ctx->r15);
    // 0x1501E838: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x1501E83C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1501E840: lw          $t6, -0x4010($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4010);
    // 0x1501E844: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1501E848: beq         $t8, $zero, L_1501EA04
    if (ctx->r24 == 0) {
        // 0x1501E84C: sw          $t6, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r14;
            goto L_1501EA04;
    }
    // 0x1501E84C: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x1501E850: addiu       $t9, $t9, 0x35E8
    ctx->r25 = ADD32(ctx->r25, 0X35E8);
    // 0x1501E854: addu        $v1, $s0, $t9
    ctx->r3 = ADD32(ctx->r16, ctx->r25);
    // 0x1501E858: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x1501E85C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x1501E860: beq         $a0, $zero, L_1501E870
    if (ctx->r4 == 0) {
        // 0x1501E864: sb          $t1, 0x40($sp)
        MEM_B(0X40, ctx->r29) = ctx->r9;
            goto L_1501E870;
    }
    // 0x1501E864: sb          $t1, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r9;
    // 0x1501E868: b           L_1501E870
    // 0x1501E86C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_1501E870;
    // 0x1501E86C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_1501E870:
    // 0x1501E870: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x1501E874: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x1501E878: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x1501E87C: jal         0x15169040
    // 0x1501E880: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    func_15169040(rdram, ctx);
        goto after_0;
    // 0x1501E880: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x1501E884: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x1501E888: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x1501E88C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501E890: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1501E894: addiu       $t2, $zero, -0x64
    ctx->r10 = ADD32(0, -0X64);
    // 0x1501E898: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1501E89C: lhu         $t3, 0x3C8E($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X3C8E);
    // 0x1501E8A0: sw          $t2, 0x35B8($at)
    MEM_W(0X35B8, ctx->r1) = ctx->r10;
    // 0x1501E8A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501E8A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1501E8AC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1501E8B0: sw          $t3, 0x35B0($at)
    MEM_W(0X35B0, ctx->r1) = ctx->r11;
    // 0x1501E8B4: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x1501E8B8: jal         0x1501D258
    // 0x1501E8BC: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_1501D258(rdram, ctx);
        goto after_1;
    // 0x1501E8BC: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_1:
    // 0x1501E8C0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x1501E8C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501E8C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1501E8CC: sb          $zero, 0x0($t4)
    MEM_B(0X0, ctx->r12) = 0;
    // 0x1501E8D0: jal         0x1501E73C
    // 0x1501E8D4: sb          $zero, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = 0;
    func_1501E73C(rdram, ctx);
        goto after_2;
    // 0x1501E8D4: sb          $zero, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = 0;
    after_2:
    // 0x1501E8D8: jal         0x150233E4
    // 0x1501E8DC: nop

    func_150233E4(rdram, ctx);
        goto after_3;
    // 0x1501E8DC: nop

    after_3:
    // 0x1501E8E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501E8E4: sb          $zero, 0x3662($at)
    MEM_B(0X3662, ctx->r1) = 0;
    // 0x1501E8E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501E8EC: sb          $zero, 0x3683($at)
    MEM_B(0X3683, ctx->r1) = 0;
    // 0x1501E8F0: jal         0x150235DC
    // 0x1501E8F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150235DC(rdram, ctx);
        goto after_4;
    // 0x1501E8F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x1501E8F8: jal         0x1501EA18
    // 0x1501E8FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1501EA18(rdram, ctx);
        goto after_5;
    // 0x1501E8FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x1501E900: jal         0x1501E540
    // 0x1501E904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1501E540(rdram, ctx);
        goto after_6;
    // 0x1501E904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x1501E908: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1501E90C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501E910: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x1501E914: swc1        $f0, 0x3648($at)
    MEM_W(0X3648, ctx->r1) = ctx->f0.u32l;
    // 0x1501E918: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501E91C: swc1        $f0, 0x364C($at)
    MEM_W(0X364C, ctx->r1) = ctx->f0.u32l;
    // 0x1501E920: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501E924: swc1        $f0, 0x3650($at)
    MEM_W(0X3650, ctx->r1) = ctx->f0.u32l;
    // 0x1501E928: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1501E92C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x1501E930: lw          $a2, 0x1A0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1A0);
    // 0x1501E934: jal         0x1510B32C
    // 0x1501E938: lw          $a1, 0x19C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X19C);
    func_1510B32C(rdram, ctx);
        goto after_7;
    // 0x1501E938: lw          $a1, 0x19C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X19C);
    after_7:
    // 0x1501E93C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1501E940: lbu         $v1, 0x35C2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X35C2);
    // 0x1501E944: addiu       $t0, $zero, 0x25
    ctx->r8 = ADD32(0, 0X25);
    // 0x1501E948: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1501E94C: beq         $v1, $zero, L_1501E9C4
    if (ctx->r3 == 0) {
        // 0x1501E950: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_1501E9C4;
    }
    // 0x1501E950: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1501E954: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x1501E958: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x1501E95C: lbu         $a0, 0x35C3($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X35C3);
    // 0x1501E960: addiu       $a1, $v1, -0x1
    ctx->r5 = ADD32(ctx->r3, -0X1);
    // 0x1501E964: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x1501E968: bne         $t0, $a0, L_1501E988
    if (ctx->r8 != ctx->r4) {
        // 0x1501E96C: lui         $a3, 0x800C
        ctx->r7 = S32(0X800C << 16);
            goto L_1501E988;
    }
    // 0x1501E96C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x1501E970: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501E974: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x1501E978: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501E97C: sw          $t0, -0x1610($at)
    MEM_W(-0X1610, ctx->r1) = ctx->r8;
    // 0x1501E980: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x1501E984: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
L_1501E988:
    // 0x1501E988: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501E98C: lw          $t8, 0x3C94($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3C94);
    // 0x1501E990: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501E994: sb          $zero, 0x3671($at)
    MEM_B(0X3671, ctx->r1) = 0;
    // 0x1501E998: lbu         $a3, 0x3C90($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X3C90);
    // 0x1501E99C: jal         0x1501D348
    // 0x1501E9A0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1501D348(rdram, ctx);
        goto after_8;
    // 0x1501E9A0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_8:
    // 0x1501E9A4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1501E9A8: lbu         $t9, 0x35C3($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X35C3);
    // 0x1501E9AC: addiu       $t0, $zero, 0x25
    ctx->r8 = ADD32(0, 0X25);
    // 0x1501E9B0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x1501E9B4: bne         $t0, $t9, L_1501EA04
    if (ctx->r8 != ctx->r25) {
        // 0x1501E9B8: lui         $at, 0x800C
        ctx->r1 = S32(0X800C << 16);
            goto L_1501EA04;
    }
    // 0x1501E9B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501E9BC: b           L_1501EA04
    // 0x1501E9C0: sw          $t1, -0x1610($at)
    MEM_W(-0X1610, ctx->r1) = ctx->r9;
        goto L_1501EA04;
    // 0x1501E9C0: sw          $t1, -0x1610($at)
    MEM_W(-0X1610, ctx->r1) = ctx->r9;
L_1501E9C4:
    // 0x1501E9C4: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1501E9C8: lbu         $t2, 0x3C8B($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X3C8B);
    // 0x1501E9CC: beq         $t2, $zero, L_1501E9EC
    if (ctx->r10 == 0) {
        // 0x1501E9D0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_1501E9EC;
    }
    // 0x1501E9D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1501E9D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1501E9D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501E9DC: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x1501E9E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1501E9E4: jal         0x1517EE40
    // 0x1501E9E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1517EE40(rdram, ctx);
        goto after_9;
    // 0x1501E9E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_9:
L_1501E9EC:
    // 0x1501E9EC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501E9F0: sb          $zero, -0x27C($at)
    MEM_B(-0X27C, ctx->r1) = 0;
    // 0x1501E9F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501E9F8: sb          $zero, 0x3670($at)
    MEM_B(0X3670, ctx->r1) = 0;
    // 0x1501E9FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501EA00: sb          $zero, 0x3671($at)
    MEM_B(0X3671, ctx->r1) = 0;
L_1501EA04:
    // 0x1501EA04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1501EA08: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1501EA0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1501EA10: jr          $ra
    // 0x1501EA14: nop

    return;
    return;
    // 0x1501EA14: nop

;}
RECOMP_FUNC void func_15044CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15044CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15044CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15044CEC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x15044CF0: lw          $t9, 0x1C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1C);
    // 0x15044CF4: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x15044CF8: sh          $t6, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r14;
    // 0x15044CFC: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x15044D00: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    // 0x15044D04: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x15044D08: sh          $t8, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r24;
    // 0x15044D0C: lh          $v1, 0x0($t9)
    ctx->r3 = MEM_H(ctx->r25, 0X0);
    // 0x15044D10: bgez        $v1, L_15044D20
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15044D14: sra         $t0, $v1, 5
        ctx->r8 = S32(SIGNED(ctx->r3) >> 5);
            goto L_15044D20;
    }
    // 0x15044D14: sra         $t0, $v1, 5
    ctx->r8 = S32(SIGNED(ctx->r3) >> 5);
    // 0x15044D18: addiu       $at, $v1, 0x1F
    ctx->r1 = ADD32(ctx->r3, 0X1F);
    // 0x15044D1C: sra         $t0, $at, 5
    ctx->r8 = S32(SIGNED(ctx->r1) >> 5);
L_15044D20:
    // 0x15044D20: sh          $t0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r8;
    // 0x15044D24: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
    // 0x15044D28: jal         0x15044B78
    // 0x15044D2C: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    func_15044B78(rdram, ctx);
        goto after_0;
    // 0x15044D2C: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    after_0:
    // 0x15044D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15044D34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15044D38: jr          $ra
    // 0x15044D3C: nop

    return;
    return;
    // 0x15044D3C: nop

;}
RECOMP_FUNC void func_15019E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15019E60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15019E64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15019E68: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15019E6C: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
    // 0x15019E70: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x15019E74: addiu       $a1, $a1, 0x2FA4
    ctx->r5 = ADD32(ctx->r5, 0X2FA4);
    // 0x15019E78: beq         $v1, $zero, L_15019EC4
    if (ctx->r3 == 0) {
        // 0x15019E7C: addiu       $t6, $v1, 0x1
        ctx->r14 = ADD32(ctx->r3, 0X1);
            goto L_15019EC4;
    }
    // 0x15019E7C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x15019E80: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x15019E84: lui         $t7, 0xDC08
    ctx->r15 = S32(0XDC08 << 16);
    // 0x15019E88: ori         $t7, $t7, 0x8
    ctx->r15 = ctx->r15 | 0X8;
    // 0x15019E8C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15019E90: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15019E94: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x15019E98: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15019E9C: lw          $t0, -0x19D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X19D8);
    // 0x15019EA0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15019EA4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x15019EA8: sll         $t9, $t9, 7
    ctx->r25 = S32(ctx->r25 << 7);
    // 0x15019EAC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x15019EB0: addiu       $t2, $t1, 0x40
    ctx->r10 = ADD32(ctx->r9, 0X40);
    // 0x15019EB4: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x15019EB8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15019EBC: b           L_15019EEC
    // 0x15019EC0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
        goto L_15019EEC;
    // 0x15019EC0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
L_15019EC4:
    // 0x15019EC4: lui         $t3, 0xDC08
    ctx->r11 = S32(0XDC08 << 16);
    // 0x15019EC8: ori         $t3, $t3, 0x8
    ctx->r11 = ctx->r11 | 0X8;
    // 0x15019ECC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15019ED0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x15019ED4: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15019ED8: lw          $t4, -0x19D8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X19D8);
    // 0x15019EDC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15019EE0: addiu       $t5, $t4, 0x40
    ctx->r13 = ADD32(ctx->r12, 0X40);
    // 0x15019EE4: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x15019EE8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
L_15019EEC:
    // 0x15019EEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15019EF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15019EF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15019EF8: jal         0x1501A490
    // 0x15019EFC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1501A490(rdram, ctx);
        goto after_0;
    // 0x15019EFC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x15019F00: jal         0x151E8620
    // 0x15019F04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_151E8620(rdram, ctx);
        goto after_1;
    // 0x15019F04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x15019F08: jal         0x15043384
    // 0x15019F0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15043384(rdram, ctx);
        goto after_2;
    // 0x15019F0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x15019F10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15019F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15019F18: jr          $ra
    // 0x15019F1C: nop

    return;
    return;
    // 0x15019F1C: nop

;}
RECOMP_FUNC void func_1517E080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517E080: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1517E084: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1517E088: addiu       $v0, $v0, -0x229C
    ctx->r2 = ADD32(ctx->r2, -0X229C);
    // 0x1517E08C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1517E090: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1517E094: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1517E098: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x1517E09C: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    // 0x1517E0A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1517E0A4: beq         $v1, $zero, L_1517E0D0
    if (ctx->r3 == 0) {
        // 0x1517E0A8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_1517E0D0;
    }
    // 0x1517E0A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1517E0AC: lw          $v0, 0x24($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X24);
    // 0x1517E0B0: beq         $v0, $zero, L_1517E0C8
    if (ctx->r2 == 0) {
        // 0x1517E0B4: nop
    
            goto L_1517E0C8;
    }
    // 0x1517E0B4: nop

    // 0x1517E0B8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_1517E0BC:
    // 0x1517E0BC: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    // 0x1517E0C0: bnel        $v0, $zero, L_1517E0BC
    if (ctx->r2 != 0) {
        // 0x1517E0C4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1517E0BC;
    }
    goto skip_0;
    // 0x1517E0C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    skip_0:
L_1517E0C8:
    // 0x1517E0C8: b           L_1517E0D4
    // 0x1517E0CC: addiu       $t0, $v1, 0x24
    ctx->r8 = ADD32(ctx->r3, 0X24);
        goto L_1517E0D4;
    // 0x1517E0CC: addiu       $t0, $v1, 0x24
    ctx->r8 = ADD32(ctx->r3, 0X24);
L_1517E0D0:
    // 0x1517E0D0: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_1517E0D4:
    // 0x1517E0D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1517E0D8: jal         0x10003C40
    // 0x1517E0DC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1517E0DC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_0:
    // 0x1517E0E0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x1517E0E4: bne         $v0, $zero, L_1517E0F4
    if (ctx->r2 != 0) {
        // 0x1517E0E8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1517E0F4;
    }
    // 0x1517E0E8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1517E0EC: b           L_1517E124
    // 0x1517E0F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1517E124;
    // 0x1517E0F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1517E0F4:
    // 0x1517E0F4: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x1517E0F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1517E0FC: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x1517E100: sh          $zero, 0x28($v1)
    MEM_H(0X28, ctx->r3) = 0;
    // 0x1517E104: sb          $zero, 0x2E($v1)
    MEM_B(0X2E, ctx->r3) = 0;
    // 0x1517E108: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x1517E10C: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x1517E110: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1517E114: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1517E118: sb          $t6, 0x2F($v1)
    MEM_B(0X2F, ctx->r3) = ctx->r14;
    // 0x1517E11C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1517E120: sb          $t7, 0x30($v1)
    MEM_B(0X30, ctx->r3) = ctx->r15;
L_1517E124:
    // 0x1517E124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1517E128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1517E12C: jr          $ra
    // 0x1517E130: nop

    return;
    return;
    // 0x1517E130: nop

;}
RECOMP_FUNC void func_10010F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10010F30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10010F34: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x10010F38: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x10010F3C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x10010F40: lbu         $a3, 0x33($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X33);
    // 0x10010F44: lhu         $a2, 0x2E($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X2E);
    // 0x10010F48: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x10010F4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x10010F50: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10010F54: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x10010F58: lbu         $t8, 0x1FD9($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1FD9);
    // 0x10010F5C: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x10010F60: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x10010F64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10010F68: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x10010F6C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x10010F70: jal         0x10010BE8
    // 0x10010F74: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_10010BE8(rdram, ctx);
        goto after_0;
    // 0x10010F74: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x10010F78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x10010F7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10010F80: jr          $ra
    // 0x10010F84: nop

    return;
    return;
    // 0x10010F84: nop

;}
RECOMP_FUNC void func_15178E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15178E50: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15178E54: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x15178E58: lw          $v0, 0xDF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XDF0);
    // 0x15178E5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15178E60: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15178E64: lbu         $t6, 0x14($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X14);
    // 0x15178E68: bnel        $t6, $at, L_15178EA0
    if (ctx->r14 != ctx->r1) {
        // 0x15178E6C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15178EA0;
    }
    goto skip_0;
    // 0x15178E6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x15178E70: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x15178E74: lh          $t9, 0x16($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X16);
    // 0x15178E78: lwc1        $f4, 0x2FC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X2FC);
    // 0x15178E7C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15178E80: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x15178E84: nop

    // 0x15178E88: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15178E8C: beql        $at, $zero, L_15178EA0
    if (ctx->r1 == 0) {
        // 0x15178E90: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15178EA0;
    }
    goto skip_1;
    // 0x15178E90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x15178E94: jr          $ra
    // 0x15178E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15178E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15178E9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15178EA0:
    // 0x15178EA0: jr          $ra
    // 0x15178EA4: nop

    return;
    return;
    // 0x15178EA4: nop

;}
RECOMP_FUNC void func_1506AA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506AA48: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1506AA4C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1506AA50: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x1506AA54: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1506AA58: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x1506AA5C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x1506AA60: addiu       $t8, $sp, 0x3C
    ctx->r24 = ADD32(ctx->r29, 0X3C);
    // 0x1506AA64: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x1506AA68: lbu         $t7, 0x3B($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3B);
    // 0x1506AA6C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1506AA70: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1506AA74: sb          $t7, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r15;
    // 0x1506AA78: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x1506AA7C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1506AA80: addiu       $t4, $zero, 0x21
    ctx->r12 = ADD32(0, 0X21);
    // 0x1506AA84: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x1506AA88: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x1506AA8C: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x1506AA90: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x1506AA94: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x1506AA98: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1506AA9C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x1506AAA0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x1506AAA4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x1506AAA8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1506AAAC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x1506AAB0: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x1506AAB4: jal         0x15149130
    // 0x1506AAB8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x1506AAB8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x1506AABC: beq         $v0, $zero, L_1506AAD0
    if (ctx->r2 == 0) {
        // 0x1506AAC0: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1506AAD0;
    }
    // 0x1506AAC0: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1506AAC4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x1506AAC8: jal         0x10022EC0
    // 0x1506AACC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1506AACC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
L_1506AAD0:
    // 0x1506AAD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1506AAD4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1506AAD8: jr          $ra
    // 0x1506AADC: nop

    return;
    return;
    // 0x1506AADC: nop

;}
RECOMP_FUNC void func_150A9B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A9B0C: or          $t7, $ra, $zero
    ctx->r15 = ctx->r31 | 0;
    // 0x150A9B10: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x150A9B14: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x150A9B18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150A9B1C: lwc1        $f9, -0x930($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X930);
    // 0x150A9B20: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x150A9B24: mul.s       $f4, $f4, $f9
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f9.fl);
    // 0x150A9B28: jal         0x150AD780
    // 0x150A9B2C: mov.s       $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = ctx->f4.fl;
    func_150AD780(rdram, ctx);
        goto after_0;
    // 0x150A9B2C: mov.s       $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = ctx->f4.fl;
    after_0:
    // 0x150A9B30: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x150A9B34: jal         0x150AD78C
    // 0x150A9B38: mov.s       $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = ctx->f4.fl;
    func_150AD78C(rdram, ctx);
        goto after_1;
    // 0x150A9B38: mov.s       $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = ctx->f4.fl;
    after_1:
    // 0x150A9B3C: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    // 0x150A9B40: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x150A9B44: mul.s       $f6, $f6, $f9
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f9.fl);
    // 0x150A9B48: jal         0x150AD780
    // 0x150A9B4C: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    func_150AD780(rdram, ctx);
        goto after_2;
    // 0x150A9B4C: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    after_2:
    // 0x150A9B50: mov.s       $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f7.fl = ctx->f0.fl;
    // 0x150A9B54: jal         0x150AD78C
    // 0x150A9B58: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    func_150AD78C(rdram, ctx);
        goto after_3;
    // 0x150A9B58: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    after_3:
    // 0x150A9B5C: mov.s       $f13, $f0
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 0);
    ctx->f13.fl = ctx->f0.fl;
    // 0x150A9B60: mul.s       $f6, $f8, $f9
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f9.fl);
    // 0x150A9B64: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x150A9B68: jal         0x150AD780
    // 0x150A9B6C: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    func_150AD780(rdram, ctx);
        goto after_4;
    // 0x150A9B6C: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    after_4:
    // 0x150A9B70: mov.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.fl = ctx->f0.fl;
    // 0x150A9B74: jal         0x150AD78C
    // 0x150A9B78: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    func_150AD78C(rdram, ctx);
        goto after_5;
    // 0x150A9B78: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    after_5:
    // 0x150A9B7C: mul.s       $f10, $f1, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f1.fl, ctx->f4.fl);
    // 0x150A9B80: mov.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.fl = ctx->f0.fl;
    // 0x150A9B84: mul.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x150A9B88: neg.s       $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = -ctx->f0.fl;
    // 0x150A9B8C: mul.s       $f9, $f1, $f5
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f9.fl = MUL_S(ctx->f1.fl, ctx->f5.fl);
    // 0x150A9B90: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x150A9B94: mul.s       $f11, $f2, $f5
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f11.fl = MUL_S(ctx->f2.fl, ctx->f5.fl);
    // 0x150A9B98: nop

    // 0x150A9B9C: mul.s       $f2, $f4, $f7
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f7.fl);
    // 0x150A9BA0: nop

    // 0x150A9BA4: mul.s       $f5, $f4, $f8
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f5.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x150A9BA8: lwc1        $f19, 0x18($sp)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x150A9BAC: mul.s       $f18, $f9, $f7
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f18.fl = MUL_S(ctx->f9.fl, ctx->f7.fl);
    // 0x150A9BB0: nop

    // 0x150A9BB4: mul.s       $f14, $f3, $f13
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f14.fl = MUL_S(ctx->f3.fl, ctx->f13.fl);
    // 0x150A9BB8: add.s       $f14, $f18, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x150A9BBC: mul.s       $f18, $f9, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f9.fl, ctx->f8.fl);
    // 0x150A9BC0: nop

    // 0x150A9BC4: mul.s       $f15, $f3, $f7
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f15.fl = MUL_S(ctx->f3.fl, ctx->f7.fl);
    // 0x150A9BC8: add.s       $f15, $f18, $f15
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f15.fl = ctx->f18.fl + ctx->f15.fl;
    // 0x150A9BCC: mul.s       $f18, $f11, $f7
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f18.fl = MUL_S(ctx->f11.fl, ctx->f7.fl);
    // 0x150A9BD0: nop

    // 0x150A9BD4: mul.s       $f16, $f1, $f13
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f16.fl = MUL_S(ctx->f1.fl, ctx->f13.fl);
    // 0x150A9BD8: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x150A9BDC: mul.s       $f18, $f11, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f11.fl, ctx->f8.fl);
    // 0x150A9BE0: nop

    // 0x150A9BE4: mul.s       $f17, $f1, $f7
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f17.fl = MUL_S(ctx->f1.fl, ctx->f7.fl);
    // 0x150A9BE8: add.s       $f17, $f18, $f17
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f17.fl = ctx->f18.fl + ctx->f17.fl;
    // 0x150A9BEC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150A9BF0: lwc1        $f18, 0x14($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X14);
    // 0x150A9BF4: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150A9BF8: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x150A9BFC: mul.s       $f5, $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f0.fl);
    // 0x150A9C00: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x150A9C04: mul.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x150A9C08: swc1        $f5, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f_odd[(5 - 1) * 2];
    // 0x150A9C0C: mul.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150A9C10: swc1        $f14, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f14.u32l;
    // 0x150A9C14: mul.s       $f15, $f15, $f18
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f15.fl = MUL_S(ctx->f15.fl, ctx->f18.fl);
    // 0x150A9C18: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x150A9C1C: mul.s       $f16, $f16, $f19
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f19.fl);
    // 0x150A9C20: swc1        $f15, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f_odd[(15 - 1) * 2];
    // 0x150A9C24: mul.s       $f12, $f12, $f19
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f19.fl);
    // 0x150A9C28: swc1        $f16, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f16.u32l;
    // 0x150A9C2C: mul.s       $f17, $f17, $f19
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f17.fl = MUL_S(ctx->f17.fl, ctx->f19.fl);
    // 0x150A9C30: swc1        $f12, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f12.u32l;
    // 0x150A9C34: jr          $t7
    // 0x150A9C38: swc1        $f17, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(17 - 1) * 2];
    LOOKUP_FUNC(ctx->r15)(rdram, ctx);
    return;
    // 0x150A9C38: swc1        $f17, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(17 - 1) * 2];
;}
RECOMP_FUNC void func_15096A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15096A68: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15096A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15096A70: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15096A74: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15096A78: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x15096A7C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15096A80: addiu       $t8, $t8, 0x2DC0
    ctx->r24 = ADD32(ctx->r24, 0X2DC0);
    // 0x15096A84: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x15096A88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15096A8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15096A90: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x15096A94: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x15096A98: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15096A9C: addiu       $a3, $a3, 0x3600
    ctx->r7 = ADD32(ctx->r7, 0X3600);
    // 0x15096AA0: beq         $v0, $t1, L_15096ABC
    if (ctx->r2 == ctx->r9) {
        // 0x15096AA4: lui         $t2, 0x800E
        ctx->r10 = S32(0X800E << 16);
            goto L_15096ABC;
    }
    // 0x15096AA4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x15096AA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15096AAC: beq         $v0, $at, L_15096C14
    if (ctx->r2 == ctx->r1) {
        // 0x15096AB0: lui         $t6, 0x800E
        ctx->r14 = S32(0X800E << 16);
            goto L_15096C14;
    }
    // 0x15096AB0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15096AB4: b           L_15096CF8
    // 0x15096AB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15096CF8;
    // 0x15096AB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15096ABC:
    // 0x15096ABC: lbu         $t0, 0x1($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X1);
    // 0x15096AC0: lw          $t2, -0x4010($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4010);
    // 0x15096AC4: lbu         $t4, 0x2($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2);
    // 0x15096AC8: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x15096ACC: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x15096AD0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15096AD4: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x15096AD8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15096ADC: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x15096AE0: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x15096AE4: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x15096AE8: lwc1        $f4, 0x2C0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C0);
    // 0x15096AEC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15096AF0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15096AF4: swc1        $f4, 0x2DB8($at)
    MEM_W(0X2DB8, ctx->r1) = ctx->f4.u32l;
    // 0x15096AF8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15096AFC: sw          $t1, 0x2DB4($at)
    MEM_W(0X2DB4, ctx->r1) = ctx->r9;
    // 0x15096B00: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15096B04: lw          $v0, -0x3FE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3FE0);
    // 0x15096B08: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x15096B0C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x15096B10: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x15096B14: sb          $t6, -0x400C($at)
    MEM_B(-0X400C, ctx->r1) = ctx->r14;
    // 0x15096B18: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x15096B1C: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x15096B20: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x15096B24: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x15096B28: addu        $v0, $t5, $v0
    ctx->r2 = ADD32(ctx->r13, ctx->r2);
    // 0x15096B2C: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x15096B30: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x15096B34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15096B38: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x15096B3C: nop

    // 0x15096B40: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15096B44: swc1        $f8, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f8.u32l;
    // 0x15096B48: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x15096B4C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15096B50: nop

    // 0x15096B54: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15096B58: swc1        $f16, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f16.u32l;
    // 0x15096B5C: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x15096B60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15096B64: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x15096B68: nop

    // 0x15096B6C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15096B70: swc1        $f4, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f4.u32l;
    // 0x15096B74: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15096B78: swc1        $f6, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f6.u32l;
    // 0x15096B7C: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15096B80: swc1        $f8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f8.u32l;
    // 0x15096B84: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15096B88: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x15096B8C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x15096B90: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
    // 0x15096B94: jal         0x1512D560
    // 0x15096B98: swc1        $f10, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f10.u32l;
    func_1512D560(rdram, ctx);
        goto after_0;
    // 0x15096B98: swc1        $f10, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f10.u32l;
    after_0:
    // 0x15096B9C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15096BA0: addiu       $a2, $a3, 0x3600
    ctx->r6 = ADD32(ctx->r7, 0X3600);
    // 0x15096BA4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x15096BA8: jal         0x1512D560
    // 0x15096BAC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_1512D560(rdram, ctx);
        goto after_1;
    // 0x15096BAC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x15096BB0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x15096BB4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x15096BB8: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x15096BBC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x15096BC0: bnel        $t3, $zero, L_15096BE4
    if (ctx->r11 != 0) {
        // 0x15096BC4: lwc1        $f18, 0x10($v1)
        ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
            goto L_15096BE4;
    }
    goto skip_0;
    // 0x15096BC4: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x15096BC8: lw          $t4, 0x3D0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X3D0);
    // 0x15096BCC: sb          $zero, 0x7($t4)
    MEM_B(0X7, ctx->r12) = 0;
    // 0x15096BD0: lw          $v0, 0x3D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3D0);
    // 0x15096BD4: lw          $t5, 0x25C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X25C);
    // 0x15096BD8: ori         $t6, $t5, 0x200
    ctx->r14 = ctx->r13 | 0X200;
    // 0x15096BDC: sw          $t6, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r14;
    // 0x15096BE0: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
L_15096BE4:
    // 0x15096BE4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x15096BE8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15096BEC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15096BF0: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x15096BF4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x15096BF8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x15096BFC: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x15096C00: nop

    // 0x15096C04: sw          $t8, 0x2E30($at)
    MEM_W(0X2E30, ctx->r1) = ctx->r24;
    // 0x15096C08: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
    // 0x15096C0C: b           L_15096CF8
    // 0x15096C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15096CF8;
    // 0x15096C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15096C14:
    // 0x15096C14: lbu         $t4, 0x1($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X1);
    // 0x15096C18: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15096C1C: lbu         $t9, -0x1660($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1660);
    // 0x15096C20: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x15096C24: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x15096C28: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x15096C2C: lh          $t7, 0x4($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X4);
    // 0x15096C30: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x15096C34: lw          $t6, -0x4010($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4010);
    // 0x15096C38: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x15096C3C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x15096C40: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x15096C44: subu        $t8, $t7, $t9
    ctx->r24 = SUB32(ctx->r15, ctx->r25);
    // 0x15096C48: sh          $t8, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r24;
    // 0x15096C4C: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x15096C50: lw          $t2, 0x3D0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X3D0);
    // 0x15096C54: lbu         $t3, 0x1CA($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X1CA);
    // 0x15096C58: bnel        $t3, $zero, L_15096C68
    if (ctx->r11 != 0) {
        // 0x15096C5C: lh          $t4, 0x4($v1)
        ctx->r12 = MEM_H(ctx->r3, 0X4);
            goto L_15096C68;
    }
    goto skip_1;
    // 0x15096C5C: lh          $t4, 0x4($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X4);
    skip_1:
    // 0x15096C60: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x15096C64: lh          $t4, 0x4($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X4);
L_15096C68:
    // 0x15096C68: bgtzl       $t4, L_15096CF8
    if (SIGNED(ctx->r12) > 0) {
        // 0x15096C6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15096CF8;
    }
    goto skip_2;
    // 0x15096C6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x15096C70: lwc1        $f6, 0x20($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X20);
    // 0x15096C74: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x15096C78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15096C7C: swc1        $f6, 0x3A4($a0)
    MEM_W(0X3A4, ctx->r4) = ctx->f6.u32l;
    // 0x15096C80: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x15096C84: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x15096C88: bne         $t5, $zero, L_15096CA8
    if (ctx->r13 != 0) {
        // 0x15096C8C: nop
    
            goto L_15096CA8;
    }
    // 0x15096C8C: nop

    // 0x15096C90: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x15096C94: jal         0x1512D560
    // 0x15096C98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_1512D560(rdram, ctx);
        goto after_2;
    // 0x15096C98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_2:
    // 0x15096C9C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x15096CA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15096CA4: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
L_15096CA8:
    // 0x15096CA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15096CAC: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x15096CB0: bne         $t6, $zero, L_15096CD8
    if (ctx->r14 != 0) {
        // 0x15096CB4: sw          $zero, 0x2DB4($at)
        MEM_W(0X2DB4, ctx->r1) = 0;
            goto L_15096CD8;
    }
    // 0x15096CB4: sw          $zero, 0x2DB4($at)
    MEM_W(0X2DB4, ctx->r1) = 0;
    // 0x15096CB8: lw          $v0, 0x3D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3D0);
    // 0x15096CBC: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x15096CC0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15096CC4: lw          $t7, 0x25C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X25C);
    // 0x15096CC8: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x15096CCC: sw          $t9, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r25;
    // 0x15096CD0: lw          $t2, 0x3D0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X3D0);
    // 0x15096CD4: sb          $t8, 0x7($t2)
    MEM_B(0X7, ctx->r10) = ctx->r24;
L_15096CD8:
    // 0x15096CD8: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x15096CDC: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x15096CE0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15096CE4: lwc1        $f8, 0x2DB8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2DB8);
    // 0x15096CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15096CEC: b           L_15096CF8
    // 0x15096CF0: swc1        $f8, 0x2C0($a0)
    MEM_W(0X2C0, ctx->r4) = ctx->f8.u32l;
        goto L_15096CF8;
    // 0x15096CF0: swc1        $f8, 0x2C0($a0)
    MEM_W(0X2C0, ctx->r4) = ctx->f8.u32l;
    // 0x15096CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15096CF8:
    // 0x15096CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15096CFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15096D00: jr          $ra
    // 0x15096D04: nop

    return;
    return;
    // 0x15096D04: nop

;}
RECOMP_FUNC void func_1511BB04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511BB04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1511BB08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1511BB0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1511BB10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1511BB14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1511BB18: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1511BB1C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x1511BB20: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x1511BB24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1511BB28: bnel        $t6, $zero, L_1511BC90
    if (ctx->r14 != 0) {
        // 0x1511BB2C: lh          $t3, 0x10($s0)
        ctx->r11 = MEM_H(ctx->r16, 0X10);
            goto L_1511BC90;
    }
    goto skip_0;
    // 0x1511BB2C: lh          $t3, 0x10($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X10);
    skip_0:
    // 0x1511BB30: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x1511BB34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1511BB38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1511BB3C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x1511BB40: jal         0x10003C40
    // 0x1511BB44: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1511BB44: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x1511BB48: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x1511BB4C: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x1511BB50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1511BB54: blez        $t8, L_1511BC8C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x1511BB58: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1511BC8C;
    }
    // 0x1511BB58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1511BB5C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x1511BB60: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
L_1511BB64:
    // 0x1511BB64: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x1511BB68: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x1511BB6C: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x1511BB70: lh          $t1, 0x8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8);
    // 0x1511BB74: sh          $t1, -0x4($a2)
    MEM_H(-0X4, ctx->r6) = ctx->r9;
    // 0x1511BB78: lw          $t2, 0x28($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X28);
    // 0x1511BB7C: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x1511BB80: lh          $t4, 0xA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA);
    // 0x1511BB84: sh          $t4, -0x2($a2)
    MEM_H(-0X2, ctx->r6) = ctx->r12;
    // 0x1511BB88: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x1511BB8C: lw          $t5, 0x20($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X20);
    // 0x1511BB90: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x1511BB94: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x1511BB98: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x1511BB9C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1511BBA0: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x1511BBA4: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x1511BBA8: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x1511BBAC: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1511BBB0: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x1511BBB4: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x1511BBB8: lw          $t3, 0x28($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X28);
    // 0x1511BBBC: lw          $t1, 0x24($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X24);
    // 0x1511BBC0: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x1511BBC4: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x1511BBC8: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x1511BBCC: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x1511BBD0: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x1511BBD4: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x1511BBD8: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x1511BBDC: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x1511BBE0: lw          $t7, 0xC($t4)
    ctx->r15 = MEM_W(ctx->r12, 0XC);
    // 0x1511BBE4: sw          $t7, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r15;
    // 0x1511BBE8: lw          $t9, 0x20($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X20);
    // 0x1511BBEC: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x1511BBF0: addu        $a0, $t9, $v1
    ctx->r4 = ADD32(ctx->r25, ctx->r3);
    // 0x1511BBF4: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x1511BBF8: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x1511BBFC: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x1511BC00: lw          $t1, 0x20($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X20);
    // 0x1511BC04: lh          $t5, 0x12($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X12);
    // 0x1511BC08: addu        $a0, $t1, $v1
    ctx->r4 = ADD32(ctx->r9, ctx->r3);
    // 0x1511BC0C: lh          $t3, 0x2($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X2);
    // 0x1511BC10: addu        $t2, $t3, $t5
    ctx->r10 = ADD32(ctx->r11, ctx->r13);
    // 0x1511BC14: sh          $t2, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r10;
    // 0x1511BC18: lw          $t4, 0x20($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X20);
    // 0x1511BC1C: lh          $t9, 0x14($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X14);
    // 0x1511BC20: addu        $a0, $t4, $v1
    ctx->r4 = ADD32(ctx->r12, ctx->r3);
    // 0x1511BC24: lh          $t7, 0x4($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X4);
    // 0x1511BC28: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x1511BC2C: sh          $t6, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r14;
    // 0x1511BC30: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x1511BC34: lh          $t1, 0x10($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X10);
    // 0x1511BC38: addu        $a1, $t8, $v1
    ctx->r5 = ADD32(ctx->r24, ctx->r3);
    // 0x1511BC3C: lh          $t0, 0x0($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X0);
    // 0x1511BC40: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x1511BC44: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x1511BC48: lw          $t5, 0x24($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X24);
    // 0x1511BC4C: lh          $t4, 0x12($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X12);
    // 0x1511BC50: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    // 0x1511BC54: lh          $t2, 0x2($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X2);
    // 0x1511BC58: addu        $t7, $t2, $t4
    ctx->r15 = ADD32(ctx->r10, ctx->r12);
    // 0x1511BC5C: sh          $t7, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r15;
    // 0x1511BC60: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x1511BC64: lh          $t8, 0x14($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X14);
    // 0x1511BC68: addu        $a1, $t9, $v1
    ctx->r5 = ADD32(ctx->r25, ctx->r3);
    // 0x1511BC6C: lh          $t6, 0x4($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X4);
    // 0x1511BC70: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x1511BC74: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x1511BC78: sh          $t0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r8;
    // 0x1511BC7C: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x1511BC80: slt         $at, $a3, $t1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x1511BC84: bnel        $at, $zero, L_1511BB64
    if (ctx->r1 != 0) {
        // 0x1511BC88: lw          $t9, 0x28($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X28);
            goto L_1511BB64;
    }
    goto skip_1;
    // 0x1511BC88: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
    skip_1:
L_1511BC8C:
    // 0x1511BC8C: lh          $t3, 0x10($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X10);
L_1511BC90:
    // 0x1511BC90: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x1511BC94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1511BC98: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1511BC9C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1511BCA0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1511BCA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511BCA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511BCAC: lwc1        $f8, 0x31D0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X31D0);
    // 0x1511BCB0: lh          $t5, 0x14($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X14);
    // 0x1511BCB4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1511BCB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511BCBC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1511BCC0: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x1511BCC4: lw          $a0, 0x7C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7C);
    // 0x1511BCC8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x1511BCCC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1511BCD0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1511BCD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1511BCD8: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
    // 0x1511BCDC: sub.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1511BCE0: lwc1        $f4, 0x31D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X31D4);
    // 0x1511BCE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511BCE8: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
    // 0x1511BCEC: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1511BCF0: lwc1        $f8, 0x31D8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X31D8);
    // 0x1511BCF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511BCF8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x1511BCFC: sub.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x1511BD00: mul.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x1511BD04: lwc1        $f4, 0x31DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X31DC);
    // 0x1511BD08: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1511BD0C: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1511BD10: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x1511BD14: c.eq.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl == ctx->f18.fl;
    // 0x1511BD18: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x1511BD1C: bc1t        L_1511BD28
    if (c1cs) {
        // 0x1511BD20: sub.s       $f12, $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_1511BD28;
    }
    // 0x1511BD20: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x1511BD24: div.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
L_1511BD28:
    // 0x1511BD28: c.eq.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl == ctx->f18.fl;
    // 0x1511BD2C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1511BD30: bc1t        L_1511BD3C
    if (c1cs) {
        // 0x1511BD34: nop
    
            goto L_1511BD3C;
    }
    // 0x1511BD34: nop

    // 0x1511BD38: div.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f10.fl);
L_1511BD3C:
    // 0x1511BD3C: blez        $v0, L_1511BDE0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1511BD40: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_1511BDE0;
    }
    // 0x1511BD40: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1511BD44: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1511BD48: addiu       $a0, $a0, -0x1640
    ctx->r4 = ADD32(ctx->r4, -0X1640);
    // 0x1511BD4C: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
L_1511BD50:
    // 0x1511BD50: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x1511BD54: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x1511BD58: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x1511BD5C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x1511BD60: addu        $t8, $s0, $t6
    ctx->r24 = ADD32(ctx->r16, ctx->r14);
    // 0x1511BD64: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1511BD68: lw          $t0, 0x20($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X20);
    // 0x1511BD6C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1511BD70: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x1511BD74: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x1511BD78: mul.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x1511BD7C: add.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x1511BD80: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1511BD84: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x1511BD88: nop

    // 0x1511BD8C: sh          $t7, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r15;
    // 0x1511BD90: lh          $t3, -0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, -0X2);
    // 0x1511BD94: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x1511BD98: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x1511BD9C: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x1511BDA0: addu        $t6, $s0, $t9
    ctx->r14 = ADD32(ctx->r16, ctx->r25);
    // 0x1511BDA4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1511BDA8: lw          $t8, 0x20($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X20);
    // 0x1511BDAC: addu        $t0, $t8, $v1
    ctx->r8 = ADD32(ctx->r24, ctx->r3);
    // 0x1511BDB0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x1511BDB4: add.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x1511BDB8: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1511BDBC: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x1511BDC0: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1511BDC4: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x1511BDC8: nop

    // 0x1511BDCC: sh          $t2, 0xA($t0)
    MEM_H(0XA, ctx->r8) = ctx->r10;
    // 0x1511BDD0: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x1511BDD4: slt         $at, $a3, $t7
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1511BDD8: bnel        $at, $zero, L_1511BD50
    if (ctx->r1 != 0) {
        // 0x1511BDDC: lh          $t2, 0x0($v0)
        ctx->r10 = MEM_H(ctx->r2, 0X0);
            goto L_1511BD50;
    }
    goto skip_2;
    // 0x1511BDDC: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    skip_2:
L_1511BDE0:
    // 0x1511BDE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1511BDE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1511BDE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1511BDEC: jr          $ra
    // 0x1511BDF0: nop

    return;
    return;
    // 0x1511BDF0: nop

;}
RECOMP_FUNC void func_1506B198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B198: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506B19C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506B1A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506B1A4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506B1A8: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506B1AC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1506B1B0: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x1506B1B4: lhu         $a1, 0x84($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X84);
    // 0x1506B1B8: lw          $a2, 0x4C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4C);
    // 0x1506B1BC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1506B1C0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1506B1C4: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x1506B1C8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1506B1CC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1506B1D0: jal         0x1505E650
    // 0x1506B1D4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1506B1D4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x1506B1D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1506B1DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506B1E0: jr          $ra
    // 0x1506B1E4: nop

    return;
    return;
    // 0x1506B1E4: nop

;}
RECOMP_FUNC void func_15063570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15063570: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15063574: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15063578: addiu       $v1, $v1, -0x3D30
    ctx->r3 = ADD32(ctx->r3, -0X3D30);
    // 0x1506357C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15063580: subu        $t6, $a0, $v1
    ctx->r14 = SUB32(ctx->r4, ctx->r3);
    // 0x15063584: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x15063588: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x1506358C: mflo        $t7
    ctx->r15 = lo;
    // 0x15063590: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15063594: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15063598: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1506359C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x150635A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150635A4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150635A8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150635AC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150635B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150635B4: addu        $v0, $v1, $t8
    ctx->r2 = ADD32(ctx->r3, ctx->r24);
    // 0x150635B8: lw          $t0, 0x31C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X31C);
    // 0x150635BC: addiu       $t9, $zero, 0x3B
    ctx->r25 = ADD32(0, 0X3B);
    // 0x150635C0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x150635C4: sb          $t9, 0x78($t0)
    MEM_B(0X78, ctx->r8) = ctx->r25;
    // 0x150635C8: lw          $t2, 0x31C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X31C);
    // 0x150635CC: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    // 0x150635D0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x150635D4: sb          $t1, 0x11A($t2)
    MEM_B(0X11A, ctx->r10) = ctx->r9;
    // 0x150635D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x150635DC: jal         0x15083568
    // 0x150635E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15083568(rdram, ctx);
        goto after_0;
    // 0x150635E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x150635E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x150635E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150635EC: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x150635F0: sb          $t3, 0x8A($a0)
    MEM_B(0X8A, ctx->r4) = ctx->r11;
    // 0x150635F4: sb          $zero, 0x89($a0)
    MEM_B(0X89, ctx->r4) = 0;
    // 0x150635F8: sb          $zero, 0x83($a0)
    MEM_B(0X83, ctx->r4) = 0;
    // 0x150635FC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15063600: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15063604: addiu       $a1, $zero, 0x221
    ctx->r5 = ADD32(0, 0X221);
    // 0x15063608: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1506360C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x15063610: jal         0x1505E650
    // 0x15063614: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_1;
    // 0x15063614: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x15063618: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1506361C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15063620: jr          $ra
    // 0x15063624: nop

    return;
    return;
    // 0x15063624: nop

;}
RECOMP_FUNC void func_1513BA78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513BA78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513BA7C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1513BA80: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1513BA84: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1513BA88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513BA8C: lbu         $v0, 0x48($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X48);
    // 0x1513BA90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1513BA94: beq         $v0, $at, L_1513BAAC
    if (ctx->r2 == ctx->r1) {
        // 0x1513BA98: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1513BAAC;
    }
    // 0x1513BA98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1513BA9C: beq         $v0, $at, L_1513BABC
    if (ctx->r2 == ctx->r1) {
        // 0x1513BAA0: nop
    
            goto L_1513BABC;
    }
    // 0x1513BAA0: nop

    // 0x1513BAA4: b           L_1513BAC8
    // 0x1513BAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1513BAC8;
    // 0x1513BAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1513BAAC:
    // 0x1513BAAC: jal         0x15109064
    // 0x1513BAB0: nop

    func_15109064(rdram, ctx);
        goto after_0;
    // 0x1513BAB0: nop

    after_0:
    // 0x1513BAB4: b           L_1513BAC8
    // 0x1513BAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1513BAC8;
    // 0x1513BAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1513BABC:
    // 0x1513BABC: jal         0x151BA468
    // 0x1513BAC0: nop

    func_151BA468(rdram, ctx);
        goto after_1;
    // 0x1513BAC0: nop

    after_1:
    // 0x1513BAC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1513BAC8:
    // 0x1513BAC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513BACC: jr          $ra
    // 0x1513BAD0: nop

    return;
    return;
    // 0x1513BAD0: nop

;}
RECOMP_FUNC void func_15001A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15001A08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15001A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15001A10: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15001A14: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x15001A18: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x15001A1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15001A20: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x15001A24: lw          $a0, 0x1AF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1AF0);
    // 0x15001A28: jal         0x10023720
    // 0x15001A2C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    __osPiGetAccess_recomp(rdram, ctx);
        goto after_0;
    // 0x15001A2C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x15001A30: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x15001A34: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x15001A38: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x15001A3C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x15001A40: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x15001A44: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x15001A48: beq         $t8, $zero, L_15001A60
    if (ctx->r24 == 0) {
        // 0x15001A4C: nop
    
            goto L_15001A60;
    }
    // 0x15001A4C: nop

    // 0x15001A50: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_15001A54:
    // 0x15001A54: andi        $t9, $v0, 0x3
    ctx->r25 = ctx->r2 & 0X3;
    // 0x15001A58: bnel        $t9, $zero, L_15001A54
    if (ctx->r25 != 0) {
        // 0x15001A5C: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_15001A54;
    }
    goto skip_0;
    // 0x15001A5C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_0:
L_15001A60:
    // 0x15001A60: lw          $t0, 0x308($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X308);
    // 0x15001A64: lui         $at, 0xB000
    ctx->r1 = S32(0XB000 << 16);
    // 0x15001A68: ori         $at, $at, 0xD24
    ctx->r1 = ctx->r1 | 0XD24;
    // 0x15001A6C: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x15001A70: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x15001A74: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x15001A78: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x15001A7C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x15001A80: jal         0x10023764
    // 0x15001A84: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    __osPiRelAccess_recomp(rdram, ctx);
        goto after_1;
    // 0x15001A84: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_1:
    // 0x15001A88: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x15001A8C: lui         $at, 0x98CC
    ctx->r1 = S32(0X98CC << 16);
    // 0x15001A90: ori         $at, $at, 0xE31A
    ctx->r1 = ctx->r1 | 0XE31A;
    // 0x15001A94: beq         $t4, $at, L_15001AA4
    if (ctx->r12 == ctx->r1) {
        // 0x15001A98: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_15001AA4;
    }
    // 0x15001A98: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x15001A9C: sll         $t5, $a0, 1
    ctx->r13 = S32(ctx->r4 << 1);
    // 0x15001AA0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
L_15001AA4:
    // 0x15001AA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15001AA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15001AAC: jal         0x10003C40
    // 0x15001AB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x15001AB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x15001AB4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x15001AB8: addiu       $v1, $v1, 0xDDC
    ctx->r3 = ADD32(ctx->r3, 0XDDC);
    // 0x15001ABC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x15001AC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15001AC4: sw          $v0, 0xDE0($at)
    MEM_W(0XDE0, ctx->r1) = ctx->r2;
    // 0x15001AC8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15001ACC: sw          $zero, 0xDCC($at)
    MEM_W(0XDCC, ctx->r1) = 0;
    // 0x15001AD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15001AD4: sw          $zero, 0xDD0($at)
    MEM_W(0XDD0, ctx->r1) = 0;
    // 0x15001AD8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15001ADC: sh          $zero, -0x41D0($at)
    MEM_H(-0X41D0, ctx->r1) = 0;
    // 0x15001AE0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15001AE4: sh          $zero, -0x41CE($at)
    MEM_H(-0X41CE, ctx->r1) = 0;
    // 0x15001AE8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15001AEC: sh          $zero, -0x41CC($at)
    MEM_H(-0X41CC, ctx->r1) = 0;
    // 0x15001AF0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15001AF4: sh          $zero, -0x41CA($at)
    MEM_H(-0X41CA, ctx->r1) = 0;
    // 0x15001AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15001AFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15001B00: jr          $ra
    // 0x15001B04: nop

    return;
    return;
    // 0x15001B04: nop

    // 0x15001B08: jr          $ra
    // 0x15001B0C: nop

    return;
    return;
    // 0x15001B0C: nop

;}
RECOMP_FUNC void func_151E7EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E7EF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151E7EFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151E7F00: jal         0x151E7E9C
    // 0x151E7F04: nop

    func_151E7E9C(rdram, ctx);
        goto after_0;
    // 0x151E7F04: nop

    after_0:
    // 0x151E7F08: lui         $a1, 0x151E
    ctx->r5 = S32(0X151E << 16);
    // 0x151E7F0C: lui         $a2, 0x151E
    ctx->r6 = S32(0X151E << 16);
    // 0x151E7F10: addiu       $v0, $a1, -0x23E0
    ctx->r2 = ADD32(ctx->r5, -0X23E0);
    // 0x151E7F14: addiu       $a0, $a2, -0x182C
    ctx->r4 = ADD32(ctx->r6, -0X182C);
    // 0x151E7F18: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x151E7F1C: beq         $at, $zero, L_151E7F38
    if (ctx->r1 == 0) {
        // 0x151E7F20: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151E7F38;
    }
    // 0x151E7F20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151E7F24:
    // 0x151E7F24: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151E7F28: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x151E7F2C: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x151E7F30: bne         $at, $zero, L_151E7F24
    if (ctx->r1 != 0) {
        // 0x151E7F34: addu        $v1, $v1, $t6
        ctx->r3 = ADD32(ctx->r3, ctx->r14);
            goto L_151E7F24;
    }
    // 0x151E7F34: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
L_151E7F38:
    // 0x151E7F38: lui         $at, 0xBFC9
    ctx->r1 = S32(0XBFC9 << 16);
    // 0x151E7F3C: ori         $at, $at, 0x24E3
    ctx->r1 = ctx->r1 | 0X24E3;
    // 0x151E7F40: beq         $v1, $at, L_151E7F50
    if (ctx->r3 == ctx->r1) {
        // 0x151E7F44: lui         $t7, 0x1000
        ctx->r15 = S32(0X1000 << 16);
            goto L_151E7F50;
    }
    // 0x151E7F44: lui         $t7, 0x1000
    ctx->r15 = S32(0X1000 << 16);
    // 0x151E7F48: addiu       $t7, $t7, 0x3330
    ctx->r15 = ADD32(ctx->r15, 0X3330);
    // 0x151E7F4C: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
L_151E7F50:
    // 0x151E7F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151E7F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151E7F58: jr          $ra
    // 0x151E7F5C: nop

    return;
    return;
    // 0x151E7F5C: nop

;}
RECOMP_FUNC void func_15149368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15149368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514936C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15149370: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15149374: jal         0x15149318
    // 0x15149378: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15149318(rdram, ctx);
        goto after_0;
    // 0x15149378: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x1514937C: jal         0x15169824
    // 0x15149380: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_1;
    // 0x15149380: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x15149384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15149388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514938C: jr          $ra
    // 0x15149390: nop

    return;
    return;
    // 0x15149390: nop

;}
RECOMP_FUNC void func_15149550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15149550: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x15149554: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15149558: sw          $a2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r6;
    // 0x1514955C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15149560: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15149564: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15149568: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1514956C: sw          $a1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r5;
    // 0x15149570: sw          $a3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r7;
    // 0x15149574: lhu         $t7, 0x2A($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X2A);
    // 0x15149578: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1514957C: addiu       $t9, $sp, 0xB0
    ctx->r25 = ADD32(ctx->r29, 0XB0);
    // 0x15149580: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x15149584: sw          $t8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r24;
    // 0x15149588: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x1514958C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x15149590: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x15149594: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
    // 0x15149598: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x1514959C: beq         $a2, $zero, L_151495E4
    if (ctx->r6 == 0) {
        // 0x151495A0: sw          $at, 0x8($t9)
        MEM_W(0X8, ctx->r25) = ctx->r1;
            goto L_151495E4;
    }
    // 0x151495A0: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151495A4: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x151495A8: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x151495AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151495B0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x151495B4: jal         0x1510F800
    // 0x151495B8: sw          $t4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r12;
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x151495B8: sw          $t4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r12;
    after_0:
    // 0x151495BC: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x151495C0: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x151495C4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151495C8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151495CC: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x151495D0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x151495D4: jal         0x1510FD20
    // 0x151495D8: nop

    func_1510FD20(rdram, ctx);
        goto after_1;
    // 0x151495D8: nop

    after_1:
    // 0x151495DC: b           L_151495FC
    // 0x151495E0: sw          $v0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r2;
        goto L_151495FC;
    // 0x151495E0: sw          $v0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r2;
L_151495E4:
    // 0x151495E4: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x151495E8: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x151495EC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x151495F0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x151495F4: sw          $t8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r24;
    // 0x151495F8: sw          $zero, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = 0;
L_151495FC:
    // 0x151495FC: lbu         $v0, 0xFF($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XFF);
    // 0x15149600: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15149604: beq         $v0, $zero, L_15149638
    if (ctx->r2 == 0) {
        // 0x15149608: nop
    
            goto L_15149638;
    }
    // 0x15149608: nop

    // 0x1514960C: beq         $v0, $at, L_15149628
    if (ctx->r2 == ctx->r1) {
        // 0x15149610: addiu       $t1, $zero, 0x13
        ctx->r9 = ADD32(0, 0X13);
            goto L_15149628;
    }
    // 0x15149610: addiu       $t1, $zero, 0x13
    ctx->r9 = ADD32(0, 0X13);
    // 0x15149614: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15149618: beq         $v0, $at, L_15149630
    if (ctx->r2 == ctx->r1) {
        // 0x1514961C: addiu       $t0, $zero, 0x71
        ctx->r8 = ADD32(0, 0X71);
            goto L_15149630;
    }
    // 0x1514961C: addiu       $t0, $zero, 0x71
    ctx->r8 = ADD32(0, 0X71);
    // 0x15149620: b           L_15149638
    // 0x15149624: nop

        goto L_15149638;
    // 0x15149624: nop

L_15149628:
    // 0x15149628: b           L_1514965C
    // 0x1514962C: sb          $t1, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r9;
        goto L_1514965C;
    // 0x1514962C: sb          $t1, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r9;
L_15149630:
    // 0x15149630: b           L_1514965C
    // 0x15149634: sb          $t0, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r8;
        goto L_1514965C;
    // 0x15149634: sb          $t0, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r8;
L_15149638:
    // 0x15149638: jal         0x150ADA20
    // 0x1514963C: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1514963C: nop

    after_2:
    // 0x15149640: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x15149644: beq         $t9, $zero, L_15149658
    if (ctx->r25 == 0) {
        // 0x15149648: addiu       $t3, $zero, 0x14
        ctx->r11 = ADD32(0, 0X14);
            goto L_15149658;
    }
    // 0x15149648: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x1514964C: addiu       $t2, $zero, 0x13
    ctx->r10 = ADD32(0, 0X13);
    // 0x15149650: b           L_1514965C
    // 0x15149654: sb          $t2, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r10;
        goto L_1514965C;
    // 0x15149654: sb          $t2, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r10;
L_15149658:
    // 0x15149658: sb          $t3, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r11;
L_1514965C:
    // 0x1514965C: addiu       $t4, $zero, 0x301
    ctx->r12 = ADD32(0, 0X301);
    // 0x15149660: sh          $t4, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r12;
    // 0x15149664: lh          $t5, 0x24($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X24);
    // 0x15149668: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1514966C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15149670: sh          $t5, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r13;
    // 0x15149674: lbu         $t6, 0x26($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X26);
    // 0x15149678: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1514967C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15149680: sb          $t6, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r14;
    // 0x15149684: lbu         $t7, 0x27($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X27);
    // 0x15149688: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1514968C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15149690: sb          $t7, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r15;
    // 0x15149694: lbu         $t8, 0x28($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X28);
    // 0x15149698: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x1514969C: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x151496A0: sb          $t8, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = ctx->r24;
    // 0x151496A4: lbu         $t1, 0x29($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X29);
    // 0x151496A8: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x151496AC: sb          $t1, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r9;
    // 0x151496B0: lbu         $t0, 0x2C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2C);
    // 0x151496B4: sb          $t0, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r8;
    // 0x151496B8: lbu         $t9, 0x2D($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2D);
    // 0x151496BC: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x151496C0: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x151496C4: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x151496C8: sb          $t9, 0xD9($sp)
    MEM_B(0XD9, ctx->r29) = ctx->r25;
    // 0x151496CC: lwc1        $f16, 0x38($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151496D0: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x151496D4: swc1        $f18, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f18.u32l;
    // 0x151496D8: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x151496DC: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151496E0: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x151496E4: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151496E8: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151496EC: lwc1        $f4, 0x5780($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5780);
    // 0x151496F0: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x151496F4: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151496F8: sh          $zero, 0x50($sp)
    MEM_H(0X50, ctx->r29) = 0;
    // 0x151496FC: sh          $t2, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r10;
    // 0x15149700: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15149704: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x15149708: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514970C: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x15149710: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x15149714: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15149718: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x1514971C: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15149720: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15149724: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x15149728: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1514972C: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15149730: lwc1        $f8, 0x5784($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5784);
    // 0x15149734: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15149738: sh          $zero, 0x68($sp)
    MEM_H(0X68, ctx->r29) = 0;
    // 0x1514973C: sh          $t3, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r11;
    // 0x15149740: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x15149744: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15149748: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x1514974C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15149750: lwc1        $f10, 0x5788($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5788);
    // 0x15149754: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x15149758: lh          $t4, 0x20($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X20);
    // 0x1514975C: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x15149760: lh          $t5, 0x22($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X22);
    // 0x15149764: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x15149768: sh          $zero, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = 0;
    // 0x1514976C: sh          $t6, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r14;
    // 0x15149770: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x15149774: sw          $t5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r13;
    // 0x15149778: lwc1        $f16, 0x40($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1514977C: addu        $t1, $t4, $t5
    ctx->r9 = ADD32(ctx->r12, ctx->r13);
    // 0x15149780: sra         $t0, $t1, 1
    ctx->r8 = S32(SIGNED(ctx->r9) >> 1);
    // 0x15149784: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x15149788: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    // 0x1514978C: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x15149790: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x15149794: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x15149798: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x1514979C: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x151497A0: lbu         $t9, 0x34($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X34);
    // 0x151497A4: sb          $t9, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r25;
    // 0x151497A8: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151497AC: jal         0x150ADA20
    // 0x151497B0: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151497B0: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x151497B4: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x151497B8: beq         $t2, $zero, L_151497C8
    if (ctx->r10 == 0) {
        // 0x151497BC: addiu       $a0, $sp, 0x94
        ctx->r4 = ADD32(ctx->r29, 0X94);
            goto L_151497C8;
    }
    // 0x151497BC: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x151497C0: b           L_151497CC
    // 0x151497C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151497CC;
    // 0x151497C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151497C8:
    // 0x151497C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151497CC:
    // 0x151497CC: lbu         $t3, 0xF7($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XF7);
    // 0x151497D0: lbu         $a1, 0x2E($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2E);
    // 0x151497D4: lbu         $a3, 0x2F($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X2F);
    // 0x151497D8: ori         $t4, $v0, 0x2
    ctx->r12 = ctx->r2 | 0X2;
    // 0x151497DC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151497E0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151497E4: lw          $t5, 0x30($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X30);
    // 0x151497E8: lbu         $t7, 0x103($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X103);
    // 0x151497EC: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x151497F0: addiu       $t6, $t5, 0x50
    ctx->r14 = ADD32(ctx->r13, 0X50);
    // 0x151497F4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151497F8: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x151497FC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x15149800: jal         0x1513D524
    // 0x15149804: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_1513D524(rdram, ctx);
        goto after_4;
    // 0x15149804: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_4:
    // 0x15149808: beq         $v0, $zero, L_15149820
    if (ctx->r2 == 0) {
        // 0x1514980C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15149820;
    }
    // 0x1514980C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15149810: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x15149814: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x15149818: jal         0x10022EC0
    // 0x1514981C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x1514981C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_5:
L_15149820:
    // 0x15149820: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15149824: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15149828: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x1514982C: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    // 0x15149830: jr          $ra
    // 0x15149834: nop

    return;
    return;
    // 0x15149834: nop

;}
RECOMP_FUNC void func_151444DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151444DC: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x151444E0: beq         $at, $zero, L_151444FC
    if (ctx->r1 == 0) {
        // 0x151444E4: subu        $v0, $a1, $a2
        ctx->r2 = SUB32(ctx->r5, ctx->r6);
            goto L_151444FC;
    }
    // 0x151444E4: subu        $v0, $a1, $a2
    ctx->r2 = SUB32(ctx->r5, ctx->r6);
    // 0x151444E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151444EC: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
L_151444F0:
    // 0x151444F0: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x151444F4: bnel        $at, $zero, L_151444F0
    if (ctx->r1 != 0) {
        // 0x151444F8: subu        $a0, $a0, $v0
        ctx->r4 = SUB32(ctx->r4, ctx->r2);
            goto L_151444F0;
    }
    goto skip_0;
    // 0x151444F8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    skip_0:
L_151444FC:
    // 0x151444FC: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x15144500: beq         $at, $zero, L_1514451C
    if (ctx->r1 == 0) {
        // 0x15144504: subu        $v0, $a1, $a2
        ctx->r2 = SUB32(ctx->r5, ctx->r6);
            goto L_1514451C;
    }
    // 0x15144504: subu        $v0, $a1, $a2
    ctx->r2 = SUB32(ctx->r5, ctx->r6);
    // 0x15144508: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1514450C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_15144510:
    // 0x15144510: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x15144514: bnel        $at, $zero, L_15144510
    if (ctx->r1 != 0) {
        // 0x15144518: addu        $a0, $a0, $v0
        ctx->r4 = ADD32(ctx->r4, ctx->r2);
            goto L_15144510;
    }
    goto skip_1;
    // 0x15144518: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    skip_1:
L_1514451C:
    // 0x1514451C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15144520: jr          $ra
    // 0x15144524: nop

    return;
    return;
    // 0x15144524: nop

;}
RECOMP_FUNC void func_10007DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10007DAC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10007DB0: sw          $sp, -0x3704($at)
    MEM_W(-0X3704, ctx->r1) = ctx->r29;
    // 0x10007DB4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10007DB8: sw          $ra, -0x3708($at)
    MEM_W(-0X3708, ctx->r1) = ctx->r31;
    // 0x10007DBC: or          $s1, $ra, $zero
    ctx->r17 = ctx->r31 | 0;
    // 0x10007DC0: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x10007DC4: lw          $t1, -0x6300($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6300);
    // 0x10007DC8: andi        $t1, $t1, 0x2000
    ctx->r9 = ctx->r9 & 0X2000;
    // 0x10007DCC: beq         $t1, $zero, L_10008108
    if (ctx->r9 == 0) {
        // 0x10007DD0: nop
    
            goto L_10008108;
    }
    // 0x10007DD0: nop

    // 0x10007DD4: lui         $t1, 0x64
    ctx->r9 = S32(0X64 << 16);
L_10007DD8:
    // 0x10007DD8: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x10007DDC: bne         $t1, $zero, L_10007DD8
    if (ctx->r9 != 0) {
        // 0x10007DE0: nop
    
            goto L_10007DD8;
    }
    // 0x10007DE0: nop

    // 0x10007DE4: or          $a2, $ra, $zero
    ctx->r6 = ctx->r31 | 0;
    // 0x10007DE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10007DEC: jal         0x10026250
    // 0x10007DF0: nop

    osViBlack_recomp(rdram, ctx);
        goto after_0;
    // 0x10007DF0: nop

    after_0:
    // 0x10007DF4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x10007DF8: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10007DFC: lw          $a0, -0x51CC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X51CC);
    // 0x10007E00: slti        $at, $a0, 0x240
    ctx->r1 = SIGNED(ctx->r4) < 0X240 ? 1 : 0;
    // 0x10007E04: bne         $at, $zero, L_10007E38
    if (ctx->r1 != 0) {
        // 0x10007E08: nop
    
            goto L_10007E38;
    }
    // 0x10007E08: nop

    // 0x10007E0C: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x10007E10: addiu       $a1, $a1, -0x51E1
    ctx->r5 = ADD32(ctx->r5, -0X51E1);
    // 0x10007E14: addiu       $a0, $zero, 0x307
    ctx->r4 = ADD32(0, 0X307);
    // 0x10007E18: jal         0x10007CC4
    // 0x10007E1C: nop

    func_10007CC4(rdram, ctx);
        goto after_1;
    // 0x10007E1C: nop

    after_1:
    // 0x10007E20: jal         0x10024F10
    // 0x10007E24: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_2;
    // 0x10007E24: nop

    after_2:
    // 0x10007E28: lui         $ra, 0x8004
    ctx->r31 = S32(0X8004 << 16);
    // 0x10007E2C: lw          $ra, -0x3708($ra)
    ctx->r31 = MEM_W(ctx->r31, -0X3708);
    // 0x10007E30: jr          $ra
    // 0x10007E34: nop

    return;
    return;
    // 0x10007E34: nop

L_10007E38:
    // 0x10007E38: lw          $a1, 0x11C($k0)
    ctx->r5 = MEM_W(ctx->r26, 0X11C);
    // 0x10007E3C: jal         0x10007C74
    // 0x10007E40: nop

    func_10007C74(rdram, ctx);
        goto after_3;
    // 0x10007E40: nop

    after_3:
    // 0x10007E44: addi        $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x10007E48: lw          $a1, 0x120($k0)
    ctx->r5 = MEM_W(ctx->r26, 0X120);
    // 0x10007E4C: jal         0x10007C74
    // 0x10007E50: nop

    func_10007C74(rdram, ctx);
        goto after_4;
    // 0x10007E50: nop

    after_4:
    // 0x10007E54: addi        $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x10007E58: lw          $a1, 0x118($k0)
    ctx->r5 = MEM_W(ctx->r26, 0X118);
    // 0x10007E5C: jal         0x10007C74
    // 0x10007E60: nop

    func_10007C74(rdram, ctx);
        goto after_5;
    // 0x10007E60: nop

    after_5:
    // 0x10007E64: addi        $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x10007E68: lw          $a1, 0x124($k0)
    ctx->r5 = MEM_W(ctx->r26, 0X124);
    // 0x10007E6C: jal         0x10007C74
    // 0x10007E70: nop

    func_10007C74(rdram, ctx);
        goto after_6;
    // 0x10007E70: nop

    after_6:
    // 0x10007E74: addi        $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x10007E78: ld          $a1, 0x100($k0)
    ctx->r5 = LD(ctx->r26, 0X100);
    // 0x10007E7C: jal         0x10007C74
    // 0x10007E80: nop

    func_10007C74(rdram, ctx);
        goto after_7;
    // 0x10007E80: nop

    after_7:
    // 0x10007E84: addi        $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x10007E88: lw          $a1, 0x14($k0)
    ctx->r5 = MEM_W(ctx->r26, 0X14);
    // 0x10007E8C: jal         0x10007C74
    // 0x10007E90: nop

    func_10007C74(rdram, ctx);
        goto after_8;
    // 0x10007E90: nop

    after_8:
    // 0x10007E94: addi        $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x10007E98: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x10007E9C: lw          $a1, -0x3720($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3720);
    // 0x10007EA0: jal         0x10007C74
    // 0x10007EA4: nop

    func_10007C74(rdram, ctx);
        goto after_9;
    // 0x10007EA4: nop

    after_9:
    // 0x10007EA8: addi        $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x10007EAC: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10007EB0: sw          $a0, -0x51CC($at)
    MEM_W(-0X51CC, ctx->r1) = ctx->r4;
    // 0x10007EB4: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x10007EB8: addiu       $a1, $a1, -0x5201
    ctx->r5 = ADD32(ctx->r5, -0X5201);
    // 0x10007EBC: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x10007EC0: jal         0x10007CC4
    // 0x10007EC4: nop

    func_10007CC4(rdram, ctx);
        goto after_10;
    // 0x10007EC4: nop

    after_10:
    // 0x10007EC8: jal         0x10024F10
    // 0x10007ECC: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_11;
    // 0x10007ECC: nop

    after_11:
    // 0x10007ED0: lui         $s6, 0xA460
    ctx->r22 = S32(0XA460 << 16);
    // 0x10007ED4: lw          $s6, 0x10($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X10);
    // 0x10007ED8: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x10007EDC: lw          $s1, -0x418C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X418C);
    // 0x10007EE0: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x10007EE4: and         $s1, $s1, $at
    ctx->r17 = ctx->r17 & ctx->r1;
    // 0x10007EE8: lui         $at, 0x8001
    ctx->r1 = S32(0X8001 << 16);
    // 0x10007EEC: add         $s1, $s1, $at
    ctx->r17 = ADD32(ctx->r17, ctx->r1);
    // 0x10007EF0: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x10007EF4: addiu       $a1, $a1, 0x5958
    ctx->r5 = ADD32(ctx->r5, 0X5958);
    // 0x10007EF8: lui         $a0, 0x1600
    ctx->r4 = S32(0X1600 << 16);
    // 0x10007EFC: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    // 0x10007F00: addu        $sp, $a1, $s1
    ctx->r29 = ADD32(ctx->r5, ctx->r17);
    // 0x10007F04: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x10007F08: addiu       $a0, $zero, 0x76
    ctx->r4 = ADD32(0, 0X76);
    // 0x10007F0C: jal         0x10007C74
    // 0x10007F10: nop

    func_10007C74(rdram, ctx);
        goto after_12;
    // 0x10007F10: nop

    after_12:
    // 0x10007F14: jal         0x10024F10
    // 0x10007F18: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_13;
    // 0x10007F18: nop

    after_13:
    // 0x10007F1C: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x10007F20: lui         $a1, 0x1A
    ctx->r5 = S32(0X1A << 16);
    // 0x10007F24: addiu       $a1, $a1, -0x1578
    ctx->r5 = ADD32(ctx->r5, -0X1578);
    // 0x10007F28: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x10007F2C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x10007F30: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
    // 0x10007F34: lui         $a3, 0x1A
    ctx->r7 = S32(0X1A << 16);
    // 0x10007F38: addiu       $a3, $a3, 0x33E8
    ctx->r7 = ADD32(ctx->r7, 0X33E8);
    // 0x10007F3C: subu        $a3, $a3, $a1
    ctx->r7 = SUB32(ctx->r7, ctx->r5);
    // 0x10007F40: jal         0x10023850
    // 0x10007F44: nop

    osPiRawStartDma_recomp(rdram, ctx);
        goto after_14;
    // 0x10007F44: nop

    after_14:
    // 0x10007F48: andi        $t0, $v0, 0x5
    ctx->r8 = ctx->r2 & 0X5;
    // 0x10007F4C: beq         $t0, $zero, L_10007F78
    if (ctx->r8 == 0) {
        // 0x10007F50: nop
    
            goto L_10007F78;
    }
    // 0x10007F50: nop

    // 0x10007F54: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x10007F58: addiu       $a1, $a1, -0x51F3
    ctx->r5 = ADD32(ctx->r5, -0X51F3);
    // 0x10007F5C: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x10007F60: jal         0x10007CC4
    // 0x10007F64: nop

    func_10007CC4(rdram, ctx);
        goto after_15;
    // 0x10007F64: nop

    after_15:
    // 0x10007F68: jal         0x10024F10
    // 0x10007F6C: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_16;
    // 0x10007F6C: nop

    after_16:
L_10007F70:
    // 0x10007F70: j           L_10007F70
    pause_self(rdram);
    // 0x10007F74: nop

L_10007F78:
    // 0x10007F78: jal         0x100262C0
    // 0x10007F7C: nop

    osPiGetStatus_recomp(rdram, ctx);
        goto after_17;
    // 0x10007F7C: nop

    after_17:
    // 0x10007F80: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x10007F84: bne         $t0, $zero, L_10007F78
    if (ctx->r8 != 0) {
        // 0x10007F88: nop
    
            goto L_10007F78;
    }
    // 0x10007F88: nop

    // 0x10007F8C: bne         $s6, $zero, L_10007FA0
    if (ctx->r22 != 0) {
        // 0x10007F90: nop
    
            goto L_10007FA0;
    }
    // 0x10007F90: nop

    // 0x10007F94: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x10007F98: lui         $at, 0xA460
    ctx->r1 = S32(0XA460 << 16);
    // 0x10007F9C: sw          $t0, 0x10($at)
    MEM_W(0X10, ctx->r1) = ctx->r8;
L_10007FA0:
    // 0x10007FA0: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x10007FA4: addiu       $a1, $a1, -0x51FA
    ctx->r5 = ADD32(ctx->r5, -0X51FA);
    // 0x10007FA8: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x10007FAC: jal         0x10007CC4
    // 0x10007FB0: nop

    func_10007CC4(rdram, ctx);
        goto after_18;
    // 0x10007FB0: nop

    after_18:
    // 0x10007FB4: jal         0x10024F10
    // 0x10007FB8: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_19;
    // 0x10007FB8: nop

    after_19:
    // 0x10007FBC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x10007FC0: jal         0x100262D0
    // 0x10007FC4: nop

    osUnmapTLB_recomp(rdram, ctx);
        goto after_20;
    // 0x10007FC4: nop

    after_20:
    // 0x10007FC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10007FCC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x10007FD0: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x10007FD4: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x10007FD8: lui         $a2, 0x1600
    ctx->r6 = S32(0X1600 << 16);
    // 0x10007FDC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x10007FE0: lui         $at, 0xFFF
    ctx->r1 = S32(0XFFF << 16);
    // 0x10007FE4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x10007FE8: and         $a3, $s1, $at
    ctx->r7 = ctx->r17 & ctx->r1;
    // 0x10007FEC: lui         $t0, 0x1
    ctx->r8 = S32(0X1 << 16);
    // 0x10007FF0: add         $t0, $a3, $t0
    ctx->r8 = ADD32(ctx->r7, ctx->r8);
    // 0x10007FF4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x10007FF8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x10007FFC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x10008000: jal         0x10026310
    // 0x10008004: nop

    osMapTLB_recomp(rdram, ctx);
        goto after_21;
    // 0x10008004: nop

    after_21:
    // 0x10008008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1000800C: lui         $a0, 0x1600
    ctx->r4 = S32(0X1600 << 16);
    // 0x10008010: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x10008014: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x10008018: jal         0x10022D10
    // 0x1000801C: nop

    osInvalDCache_recomp(rdram, ctx);
        goto after_22;
    // 0x1000801C: nop

    after_22:
    // 0x10008020: lui         $a0, 0x1600
    ctx->r4 = S32(0X1600 << 16);
    // 0x10008024: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x10008028: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x1000802C: jal         0x10022C90
    // 0x10008030: nop

    osInvalICache_recomp(rdram, ctx);
        goto after_23;
    // 0x10008030: nop

    after_23:
    // 0x10008034: lui         $t0, 0x1600
    ctx->r8 = S32(0X1600 << 16);
    // 0x10008038: addiu       $t0, $t0, 0xB14
    ctx->r8 = ADD32(ctx->r8, 0XB14);
    // 0x1000803C: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x10008040: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x10008044: addiu       $a0, $zero, 0xB6
    ctx->r4 = ADD32(0, 0XB6);
    // 0x10008048: jal         0x10007C74
    // 0x1000804C: nop

    func_10007C74(rdram, ctx);
        goto after_24;
    // 0x1000804C: nop

    after_24:
    // 0x10008050: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x10008054: addiu       $a1, $a1, -0x51E8
    ctx->r5 = ADD32(ctx->r5, -0X51E8);
    // 0x10008058: addiu       $a0, $zero, 0xD6
    ctx->r4 = ADD32(0, 0XD6);
    // 0x1000805C: jal         0x10007CC4
    // 0x10008060: nop

    func_10007CC4(rdram, ctx);
        goto after_25;
    // 0x10008060: nop

    after_25:
    // 0x10008064: jal         0x10024F10
    // 0x10008068: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_26;
    // 0x10008068: nop

    after_26:
    // 0x1000806C: or          $a0, $k0, $zero
    ctx->r4 = ctx->r26 | 0;
    // 0x10008070: jal         0x16000B14
    // 0x10008074: nop

    func_16000B14(rdram, ctx);
        goto after_27;
    // 0x10008074: nop

    after_27:
    // 0x10008078: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
    // 0x1000807C: beq         $v0, $zero, L_10008094
    if (ctx->r2 == 0) {
        // 0x10008080: nop
    
            goto L_10008094;
    }
    // 0x10008080: nop

    // 0x10008084: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x10008088: addiu       $v0, $v0, 0x7760
    ctx->r2 = ADD32(ctx->r2, 0X7760);
    // 0x1000808C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10008090: sw          $v0, -0x3708($at)
    MEM_W(-0X3708, ctx->r1) = ctx->r2;
L_10008094:
    // 0x10008094: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_10008098:
    // 0x10008098: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1000809C: jal         0x100262D0
    // 0x100080A0: nop

    osUnmapTLB_recomp(rdram, ctx);
        goto after_28;
    // 0x100080A0: nop

    after_28:
    // 0x100080A4: addi        $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x100080A8: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x100080AC: bne         $s1, $at, L_10008098
    if (ctx->r17 != ctx->r1) {
        // 0x100080B0: nop
    
            goto L_10008098;
    }
    // 0x100080B0: nop

    // 0x100080B4: jal         0x10001420
    // 0x100080B8: nop

    func_10001420(rdram, ctx);
        goto after_29;
    // 0x100080B8: nop

    after_29:
    // 0x100080BC: jal         0x10005BE0
    // 0x100080C0: nop

    func_10005BE0(rdram, ctx);
        goto after_30;
    // 0x100080C0: nop

    after_30:
    // 0x100080C4: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x100080C8: addiu       $t1, $t0, 0x4000
    ctx->r9 = ADD32(ctx->r8, 0X4000);
L_100080CC:
    // 0x100080CC: cache       0x00, 0x0($t0)

    // 0x100080D0: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x100080D4: bne         $at, $zero, L_100080CC
    if (ctx->r1 != 0) {
        // 0x100080D8: addiu       $t0, $t0, 0x20
        ctx->r8 = ADD32(ctx->r8, 0X20);
            goto L_100080CC;
    }
    // 0x100080D8: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x100080DC: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x100080E0: addiu       $a1, $a1, -0x5214
    ctx->r5 = ADD32(ctx->r5, -0X5214);
    // 0x100080E4: addiu       $a0, $zero, 0x300
    ctx->r4 = ADD32(0, 0X300);
    // 0x100080E8: jal         0x10007CC4
    // 0x100080EC: nop

    func_10007CC4(rdram, ctx);
        goto after_31;
    // 0x100080EC: nop

    after_31:
    // 0x100080F0: jal         0x10024F10
    // 0x100080F4: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_32;
    // 0x100080F4: nop

    after_32:
    // 0x100080F8: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x100080FC: sw          $zero, -0x51CC($at)
    MEM_W(-0X51CC, ctx->r1) = 0;
    // 0x10008100: lui         $sp, 0x8004
    ctx->r29 = S32(0X8004 << 16);
    // 0x10008104: lw          $sp, -0x3704($sp)
    ctx->r29 = MEM_W(ctx->r29, -0X3704);
L_10008108:
    // 0x10008108: lui         $ra, 0x8004
    ctx->r31 = S32(0X8004 << 16);
    // 0x1000810C: lw          $ra, -0x3708($ra)
    ctx->r31 = MEM_W(ctx->r31, -0X3708);
    // 0x10008110: jr          $ra
    // 0x10008114: nop

    return;
    return;
    // 0x10008114: nop

;}
RECOMP_FUNC void func_15004F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15004F10: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x15004F14: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15004F18: sb          $t6, 0x4000($at)
    MEM_B(0X4000, ctx->r1) = ctx->r14;
    // 0x15004F1C: jr          $ra
    // 0x15004F20: nop

    return;
    return;
    // 0x15004F20: nop

;}
RECOMP_FUNC void func_150FB29C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FB29C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150FB2A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150FB2A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150FB2A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150FB2AC: lh          $t6, 0x66($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X66);
    // 0x150FB2B0: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x150FB2B4: lh          $a2, 0x120($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X120);
    // 0x150FB2B8: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x150FB2BC: addiu       $a0, $s0, 0x43
    ctx->r4 = ADD32(ctx->r16, 0X43);
    // 0x150FB2C0: jal         0x150FB240
    // 0x150FB2C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_150FB240(rdram, ctx);
        goto after_0;
    // 0x150FB2C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x150FB2C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150FB2CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150FB2D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150FB2D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150FB2D8: jr          $ra
    // 0x150FB2DC: nop

    return;
    return;
    // 0x150FB2DC: nop

;}
RECOMP_FUNC void func_15077EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077EEC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15077EF0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15077EF4: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15077EF8: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15077EFC: sb          $t6, 0x254($t7)
    MEM_B(0X254, ctx->r15) = ctx->r14;
    // 0x15077F00: jr          $ra
    // 0x15077F04: nop

    return;
    return;
    // 0x15077F04: nop

;}
RECOMP_FUNC void func_15165B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15165B80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15165B84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15165B88: lwc1        $f4, 0x11C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X11C);
    // 0x15165B8C: lw          $a2, 0x114($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X114);
    // 0x15165B90: lw          $a3, 0x118($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X118);
    // 0x15165B94: addiu       $a1, $a0, 0x108
    ctx->r5 = ADD32(ctx->r4, 0X108);
    // 0x15165B98: jal         0x15165BB0
    // 0x15165B9C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_15165BB0(rdram, ctx);
        goto after_0;
    // 0x15165B9C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x15165BA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15165BA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15165BA8: jr          $ra
    // 0x15165BAC: nop

    return;
    return;
    // 0x15165BAC: nop

;}
RECOMP_FUNC void func_15195738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15195738: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1519573C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15195740: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15195744: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15195748: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1519574C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15195750: jal         0x150ADA20
    // 0x15195754: sb          $t6, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15195754: sb          $t6, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r14;
    after_0:
    // 0x15195758: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x1519575C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15195760: mfhi        $t7
    ctx->r15 = hi;
    // 0x15195764: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x15195768: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x1519576C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x15195770: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15195774: sh          $t8, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r24;
    // 0x15195778: sb          $t9, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r25;
    // 0x1519577C: sb          $t0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r8;
    // 0x15195780: sb          $t1, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r9;
    // 0x15195784: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15195788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1519578C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15195790: jal         0x151D8868
    // 0x15195794: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151D8868(rdram, ctx);
        goto after_1;
    // 0x15195794: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x15195798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519579C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151957A0: jr          $ra
    // 0x151957A4: nop

    return;
    return;
    // 0x151957A4: nop

;}
RECOMP_FUNC void func_151745F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151745F0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151745F4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151745F8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151745FC: addiu       $v0, $v0, -0x2C04
    ctx->r2 = ADD32(ctx->r2, -0X2C04);
    // 0x15174600: addiu       $v1, $v1, -0x2CB8
    ctx->r3 = ADD32(ctx->r3, -0X2CB8);
    // 0x15174604: lbu         $t6, 0xC($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XC);
L_15174608:
    // 0x15174608: bnel        $t6, $zero, L_15174678
    if (ctx->r14 != 0) {
        // 0x1517460C: addiu       $v1, $v1, 0x3C
        ctx->r3 = ADD32(ctx->r3, 0X3C);
            goto L_15174678;
    }
    goto skip_0;
    // 0x1517460C: addiu       $v1, $v1, 0x3C
    ctx->r3 = ADD32(ctx->r3, 0X3C);
    skip_0:
    // 0x15174610: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x15174614: lb          $t8, 0x13($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X13);
    // 0x15174618: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x1517461C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x15174620: swc1        $f12, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f12.u32l;
    // 0x15174624: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x15174628: sb          $t7, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r15;
    // 0x1517462C: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x15174630: sb          $t8, 0x34($v1)
    MEM_B(0X34, ctx->r3) = ctx->r24;
    // 0x15174634: beq         $a3, $zero, L_1517466C
    if (ctx->r7 == 0) {
        // 0x15174638: sw          $t9, 0x38($v1)
        MEM_W(0X38, ctx->r3) = ctx->r25;
            goto L_1517466C;
    }
    // 0x15174638: sw          $t9, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r25;
    // 0x1517463C: or          $t2, $a3, $zero
    ctx->r10 = ctx->r7 | 0;
    // 0x15174640: or          $t3, $v1, $zero
    ctx->r11 = ctx->r3 | 0;
    // 0x15174644: addiu       $t1, $a3, 0x24
    ctx->r9 = ADD32(ctx->r7, 0X24);
L_15174648:
    // 0x15174648: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x1517464C: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x15174650: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x15174654: sw          $at, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r1;
    // 0x15174658: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x1517465C: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x15174660: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x15174664: bne         $t2, $t1, L_15174648
    if (ctx->r10 != ctx->r9) {
        // 0x15174668: sw          $at, 0xC($t3)
        MEM_W(0XC, ctx->r11) = ctx->r1;
            goto L_15174648;
    }
    // 0x15174668: sw          $at, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r1;
L_1517466C:
    // 0x1517466C: jr          $ra
    // 0x15174670: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15174670: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15174674: addiu       $v1, $v1, 0x3C
    ctx->r3 = ADD32(ctx->r3, 0X3C);
L_15174678:
    // 0x15174678: bnel        $v1, $v0, L_15174608
    if (ctx->r3 != ctx->r2) {
        // 0x1517467C: lbu         $t6, 0xC($v1)
        ctx->r14 = MEM_BU(ctx->r3, 0XC);
            goto L_15174608;
    }
    goto skip_1;
    // 0x1517467C: lbu         $t6, 0xC($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XC);
    skip_1:
    // 0x15174680: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15174684: jr          $ra
    // 0x15174688: nop

    return;
    return;
    // 0x15174688: nop

;}
RECOMP_FUNC void func_151ACB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151ACB60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151ACB64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151ACB68: lw          $t6, 0x1C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C);
    // 0x151ACB6C: lw          $t7, 0x31C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X31C);
    // 0x151ACB70: lw          $v0, 0x9C($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X9C);
    // 0x151ACB74: beql        $v0, $zero, L_151ACB88
    if (ctx->r2 == 0) {
        // 0x151ACB78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151ACB88;
    }
    goto skip_0;
    // 0x151ACB78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151ACB7C: jal         0x151AE3A8
    // 0x151ACB80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_151AE3A8(rdram, ctx);
        goto after_0;
    // 0x151ACB80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151ACB84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151ACB88:
    // 0x151ACB88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151ACB8C: jr          $ra
    // 0x151ACB90: nop

    return;
    return;
    // 0x151ACB90: nop

;}
RECOMP_FUNC void func_1502225C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502225C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15022260: addiu       $t6, $t6, 0x3510
    ctx->r14 = ADD32(ctx->r14, 0X3510);
    // 0x15022264: addu        $v1, $a1, $t6
    ctx->r3 = ADD32(ctx->r5, ctx->r14);
    // 0x15022268: lbu         $a2, 0x0($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X0);
    // 0x1502226C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15022270: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x15022274: blez        $a2, L_150222B0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x15022278: or          $a3, $a2, $zero
        ctx->r7 = ctx->r6 | 0;
            goto L_150222B0;
    }
    // 0x15022278: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x1502227C: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x15022280: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x15022284: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15022288: addiu       $t8, $t8, 0x3518
    ctx->r24 = ADD32(ctx->r24, 0X3518);
    // 0x1502228C: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x15022290: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
L_15022294:
    // 0x15022294: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x15022298: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1502229C: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x150222A0: beq         $a0, $t9, L_150222D8
    if (ctx->r4 == ctx->r25) {
        // 0x150222A4: nop
    
            goto L_150222D8;
    }
    // 0x150222A4: nop

    // 0x150222A8: bne         $at, $zero, L_15022294
    if (ctx->r1 != 0) {
        // 0x150222AC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_15022294;
    }
    // 0x150222AC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_150222B0:
    // 0x150222B0: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x150222B4: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x150222B8: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x150222BC: addu        $t1, $t1, $a1
    ctx->r9 = ADD32(ctx->r9, ctx->r5);
    // 0x150222C0: addu        $t2, $t1, $a2
    ctx->r10 = ADD32(ctx->r9, ctx->r6);
    // 0x150222C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150222C8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x150222CC: sb          $a0, 0x3518($at)
    MEM_B(0X3518, ctx->r1) = ctx->r4;
    // 0x150222D0: addiu       $t3, $a2, 0x1
    ctx->r11 = ADD32(ctx->r6, 0X1);
    // 0x150222D4: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
L_150222D8:
    // 0x150222D8: jr          $ra
    // 0x150222DC: nop

    return;
    return;
    // 0x150222DC: nop

;}
RECOMP_FUNC void func_1512D560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512D560: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1512D564: addiu       $v1, $v1, -0x3D50
    ctx->r3 = ADD32(ctx->r3, -0X3D50);
    // 0x1512D568: addiu       $a3, $zero, 0xB0
    ctx->r7 = ADD32(0, 0XB0);
    // 0x1512D56C: lbu         $t7, 0x23D($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X23D);
    // 0x1512D570: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1512D574: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x1512D578: multu       $t7, $a3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512D57C: mflo        $t8
    ctx->r24 = lo;
    // 0x1512D580: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x1512D584: lw          $t9, 0xAC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XAC);
    // 0x1512D588: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x1512D58C: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x1512D590: sw          $a1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r5;
    // 0x1512D594: lbu         $t3, 0x23D($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X23D);
    // 0x1512D598: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x1512D59C: multu       $t3, $a3
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512D5A0: mflo        $t4
    ctx->r12 = lo;
    // 0x1512D5A4: addu        $v0, $t2, $t4
    ctx->r2 = ADD32(ctx->r10, ctx->r12);
    // 0x1512D5A8: lw          $t5, 0xAC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XAC);
    // 0x1512D5AC: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x1512D5B0: addu        $t6, $v0, $t7
    ctx->r14 = ADD32(ctx->r2, ctx->r15);
    // 0x1512D5B4: sw          $a2, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r6;
    // 0x1512D5B8: lbu         $t9, 0x23D($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X23D);
    // 0x1512D5BC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x1512D5C0: multu       $t9, $a3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512D5C4: mflo        $t0
    ctx->r8 = lo;
    // 0x1512D5C8: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x1512D5CC: lw          $t1, 0xAC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XAC);
    // 0x1512D5D0: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x1512D5D4: sw          $t3, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r11;
    // 0x1512D5D8: lbu         $t4, 0x23D($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X23D);
    // 0x1512D5DC: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x1512D5E0: multu       $t4, $a3
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512D5E4: mflo        $t5
    ctx->r13 = lo;
    // 0x1512D5E8: addu        $v0, $t2, $t5
    ctx->r2 = ADD32(ctx->r10, ctx->r13);
    // 0x1512D5EC: lw          $t7, 0xAC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XAC);
    // 0x1512D5F0: bne         $t7, $at, L_1512D5FC
    if (ctx->r15 != ctx->r1) {
        // 0x1512D5F4: nop
    
            goto L_1512D5FC;
    }
    // 0x1512D5F4: nop

    // 0x1512D5F8: sw          $zero, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = 0;
L_1512D5FC:
    // 0x1512D5FC: jr          $ra
    // 0x1512D600: nop

    return;
    return;
    // 0x1512D600: nop

;}
RECOMP_FUNC void func_15074E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15074E80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15074E84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15074E88: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15074E8C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15074E90: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x15074E94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15074E98: addiu       $a2, $sp, 0x1F
    ctx->r6 = ADD32(ctx->r29, 0X1F);
    // 0x15074E9C: jal         0x15194794
    // 0x15074EA0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_15194794(rdram, ctx);
        goto after_0;
    // 0x15074EA0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x15074EA4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x15074EA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15074EAC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15074EB0: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x15074EB4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x15074EB8: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x15074EBC: bne         $t6, $at, L_15074ED8
    if (ctx->r14 != ctx->r1) {
        // 0x15074EC0: lui         $t0, 0x6
        ctx->r8 = S32(0X6 << 16);
            goto L_15074ED8;
    }
    // 0x15074EC0: lui         $t0, 0x6
    ctx->r8 = S32(0X6 << 16);
    // 0x15074EC4: sb          $t7, 0x125($t8)
    MEM_B(0X125, ctx->r24) = ctx->r15;
    // 0x15074EC8: sb          $t9, 0x125($a1)
    MEM_B(0X125, ctx->r5) = ctx->r25;
    // 0x15074ECC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15074ED0: jal         0x15072740
    // 0x15074ED4: sw          $t0, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r8;
    func_15072740(rdram, ctx);
        goto after_1;
    // 0x15074ED4: sw          $t0, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r8;
    after_1:
L_15074ED8:
    // 0x15074ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15074EDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15074EE0: jr          $ra
    // 0x15074EE4: nop

    return;
    return;
    // 0x15074EE4: nop

;}
RECOMP_FUNC void func_1500EBC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500EBC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1500EBC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1500EBCC: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    // 0x1500EBD0: addiu       $a1, $zero, 0x23B
    ctx->r5 = ADD32(0, 0X23B);
    // 0x1500EBD4: addiu       $a2, $zero, -0x628
    ctx->r6 = ADD32(0, -0X628);
    // 0x1500EBD8: addiu       $a3, $zero, 0x1A6
    ctx->r7 = ADD32(0, 0X1A6);
    // 0x1500EBDC: jal         0x1500EB30
    // 0x1500EBE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_0;
    // 0x1500EBE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x1500EBE4: addiu       $a0, $zero, -0x17
    ctx->r4 = ADD32(0, -0X17);
    // 0x1500EBE8: addiu       $a1, $zero, 0x31D
    ctx->r5 = ADD32(0, 0X31D);
    // 0x1500EBEC: addiu       $a2, $zero, -0x8BB
    ctx->r6 = ADD32(0, -0X8BB);
    // 0x1500EBF0: addiu       $a3, $zero, -0x91
    ctx->r7 = ADD32(0, -0X91);
    // 0x1500EBF4: jal         0x1500EB30
    // 0x1500EBF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_1;
    // 0x1500EBF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x1500EBFC: addiu       $a0, $zero, 0x71
    ctx->r4 = ADD32(0, 0X71);
    // 0x1500EC00: addiu       $a1, $zero, 0x2E9
    ctx->r5 = ADD32(0, 0X2E9);
    // 0x1500EC04: addiu       $a2, $zero, -0x8C6
    ctx->r6 = ADD32(0, -0X8C6);
    // 0x1500EC08: addiu       $a3, $zero, -0xBE
    ctx->r7 = ADD32(0, -0XBE);
    // 0x1500EC0C: jal         0x1500EB30
    // 0x1500EC10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_2;
    // 0x1500EC10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x1500EC14: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    // 0x1500EC18: addiu       $a1, $zero, 0x464
    ctx->r5 = ADD32(0, 0X464);
    // 0x1500EC1C: addiu       $a2, $zero, -0x6CD
    ctx->r6 = ADD32(0, -0X6CD);
    // 0x1500EC20: addiu       $a3, $zero, 0x1E1
    ctx->r7 = ADD32(0, 0X1E1);
    // 0x1500EC24: jal         0x1500EB30
    // 0x1500EC28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_3;
    // 0x1500EC28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x1500EC2C: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    // 0x1500EC30: addiu       $a1, $zero, 0x464
    ctx->r5 = ADD32(0, 0X464);
    // 0x1500EC34: addiu       $a2, $zero, -0x618
    ctx->r6 = ADD32(0, -0X618);
    // 0x1500EC38: addiu       $a3, $zero, 0x283
    ctx->r7 = ADD32(0, 0X283);
    // 0x1500EC3C: jal         0x1500EB30
    // 0x1500EC40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_4;
    // 0x1500EC40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x1500EC44: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    // 0x1500EC48: addiu       $a1, $zero, 0x464
    ctx->r5 = ADD32(0, 0X464);
    // 0x1500EC4C: addiu       $a2, $zero, -0x450
    ctx->r6 = ADD32(0, -0X450);
    // 0x1500EC50: addiu       $a3, $zero, 0x394
    ctx->r7 = ADD32(0, 0X394);
    // 0x1500EC54: jal         0x1500EB30
    // 0x1500EC58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_5;
    // 0x1500EC58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x1500EC5C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1500EC60: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500EC64: addiu       $a0, $zero, 0x5B8
    ctx->r4 = ADD32(0, 0X5B8);
    // 0x1500EC68: addiu       $a1, $zero, 0x447
    ctx->r5 = ADD32(0, 0X447);
    // 0x1500EC6C: addiu       $a2, $zero, -0xA5E
    ctx->r6 = ADD32(0, -0XA5E);
    // 0x1500EC70: jal         0x1500EB30
    // 0x1500EC74: addiu       $a3, $zero, -0x1EC
    ctx->r7 = ADD32(0, -0X1EC);
    func_1500EB30(rdram, ctx);
        goto after_6;
    // 0x1500EC74: addiu       $a3, $zero, -0x1EC
    ctx->r7 = ADD32(0, -0X1EC);
    after_6:
    // 0x1500EC78: addiu       $a0, $zero, 0x5A8
    ctx->r4 = ADD32(0, 0X5A8);
    // 0x1500EC7C: addiu       $a1, $zero, 0x447
    ctx->r5 = ADD32(0, 0X447);
    // 0x1500EC80: addiu       $a2, $zero, -0x97F
    ctx->r6 = ADD32(0, -0X97F);
    // 0x1500EC84: addiu       $a3, $zero, 0x1F6
    ctx->r7 = ADD32(0, 0X1F6);
    // 0x1500EC88: jal         0x1500EB30
    // 0x1500EC8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_7;
    // 0x1500EC8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x1500EC90: addiu       $a0, $zero, 0x581
    ctx->r4 = ADD32(0, 0X581);
    // 0x1500EC94: addiu       $a1, $zero, 0x45C
    ctx->r5 = ADD32(0, 0X45C);
    // 0x1500EC98: addiu       $a2, $zero, -0x7C9
    ctx->r6 = ADD32(0, -0X7C9);
    // 0x1500EC9C: addiu       $a3, $zero, -0x17B
    ctx->r7 = ADD32(0, -0X17B);
    // 0x1500ECA0: jal         0x1500EB30
    // 0x1500ECA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_8;
    // 0x1500ECA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x1500ECA8: addiu       $a0, $zero, 0x57B
    ctx->r4 = ADD32(0, 0X57B);
    // 0x1500ECAC: addiu       $a1, $zero, 0x460
    ctx->r5 = ADD32(0, 0X460);
    // 0x1500ECB0: addiu       $a2, $zero, -0x239
    ctx->r6 = ADD32(0, -0X239);
    // 0x1500ECB4: addiu       $a3, $zero, -0x194
    ctx->r7 = ADD32(0, -0X194);
    // 0x1500ECB8: jal         0x1500EB30
    // 0x1500ECBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_9;
    // 0x1500ECBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x1500ECC0: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    // 0x1500ECC4: addiu       $a1, $zero, 0x55B
    ctx->r5 = ADD32(0, 0X55B);
    // 0x1500ECC8: addiu       $a2, $zero, -0x4F1
    ctx->r6 = ADD32(0, -0X4F1);
    // 0x1500ECCC: addiu       $a3, $zero, -0x20D
    ctx->r7 = ADD32(0, -0X20D);
    // 0x1500ECD0: jal         0x1500EB30
    // 0x1500ECD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_10;
    // 0x1500ECD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x1500ECD8: addiu       $a0, $zero, 0x37C
    ctx->r4 = ADD32(0, 0X37C);
    // 0x1500ECDC: addiu       $a1, $zero, 0x885
    ctx->r5 = ADD32(0, 0X885);
    // 0x1500ECE0: addiu       $a2, $zero, -0x6DF
    ctx->r6 = ADD32(0, -0X6DF);
    // 0x1500ECE4: addiu       $a3, $zero, 0x6C8
    ctx->r7 = ADD32(0, 0X6C8);
    // 0x1500ECE8: jal         0x1500EB30
    // 0x1500ECEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_11;
    // 0x1500ECEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x1500ECF0: addiu       $a0, $zero, 0x2FB
    ctx->r4 = ADD32(0, 0X2FB);
    // 0x1500ECF4: addiu       $a1, $zero, 0x885
    ctx->r5 = ADD32(0, 0X885);
    // 0x1500ECF8: addiu       $a2, $zero, -0x4C9
    ctx->r6 = ADD32(0, -0X4C9);
    // 0x1500ECFC: addiu       $a3, $zero, 0x676
    ctx->r7 = ADD32(0, 0X676);
    // 0x1500ED00: jal         0x1500EB30
    // 0x1500ED04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_12;
    // 0x1500ED04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x1500ED08: addiu       $a0, $zero, 0x4B9
    ctx->r4 = ADD32(0, 0X4B9);
    // 0x1500ED0C: addiu       $a1, $zero, 0x885
    ctx->r5 = ADD32(0, 0X885);
    // 0x1500ED10: addiu       $a2, $zero, -0x383
    ctx->r6 = ADD32(0, -0X383);
    // 0x1500ED14: addiu       $a3, $zero, 0x560
    ctx->r7 = ADD32(0, 0X560);
    // 0x1500ED18: jal         0x1500EB30
    // 0x1500ED1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_13;
    // 0x1500ED1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x1500ED20: addiu       $a0, $zero, 0x6B7
    ctx->r4 = ADD32(0, 0X6B7);
    // 0x1500ED24: addiu       $a1, $zero, 0x885
    ctx->r5 = ADD32(0, 0X885);
    // 0x1500ED28: addiu       $a2, $zero, -0x30D
    ctx->r6 = ADD32(0, -0X30D);
    // 0x1500ED2C: addiu       $a3, $zero, -0x235
    ctx->r7 = ADD32(0, -0X235);
    // 0x1500ED30: jal         0x1500EB30
    // 0x1500ED34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_14;
    // 0x1500ED34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_14:
    // 0x1500ED38: addiu       $a0, $zero, 0x48A
    ctx->r4 = ADD32(0, 0X48A);
    // 0x1500ED3C: addiu       $a1, $zero, 0x885
    ctx->r5 = ADD32(0, 0X885);
    // 0x1500ED40: addiu       $a2, $zero, -0x284
    ctx->r6 = ADD32(0, -0X284);
    // 0x1500ED44: addiu       $a3, $zero, 0x59D
    ctx->r7 = ADD32(0, 0X59D);
    // 0x1500ED48: jal         0x1500EB30
    // 0x1500ED4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1500EB30(rdram, ctx);
        goto after_15;
    // 0x1500ED4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x1500ED50: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500ED54: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1500ED58: addiu       $a0, $zero, 0x78C
    ctx->r4 = ADD32(0, 0X78C);
    // 0x1500ED5C: addiu       $a1, $zero, 0x885
    ctx->r5 = ADD32(0, 0X885);
    // 0x1500ED60: addiu       $a2, $zero, -0x4F2
    ctx->r6 = ADD32(0, -0X4F2);
    // 0x1500ED64: jal         0x1500EB30
    // 0x1500ED68: addiu       $a3, $zero, -0x26F
    ctx->r7 = ADD32(0, -0X26F);
    func_1500EB30(rdram, ctx);
        goto after_16;
    // 0x1500ED68: addiu       $a3, $zero, -0x26F
    ctx->r7 = ADD32(0, -0X26F);
    after_16:
    // 0x1500ED6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1500ED70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1500ED74: jr          $ra
    // 0x1500ED78: nop

    return;
    return;
    // 0x1500ED78: nop

;}
RECOMP_FUNC void func_151AFC88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AFC88: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x151AFC8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151AFC90: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x151AFC94: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x151AFC98: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x151AFC9C: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x151AFCA0: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x151AFCA4: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x151AFCA8: addiu       $t7, $zero, 0xE03
    ctx->r15 = ADD32(0, 0XE03);
    // 0x151AFCAC: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x151AFCB0: sb          $t6, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r14;
    // 0x151AFCB4: sh          $t7, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r15;
    // 0x151AFCB8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x151AFCBC: jal         0x150ADA20
    // 0x151AFCC0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151AFCC0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    after_0:
    // 0x151AFCC4: andi        $t9, $v0, 0xF
    ctx->r25 = ctx->r2 & 0XF;
    // 0x151AFCC8: addiu       $t0, $t9, 0x19
    ctx->r8 = ADD32(ctx->r25, 0X19);
    // 0x151AFCCC: addiu       $t1, $zero, 0xB0
    ctx->r9 = ADD32(0, 0XB0);
    // 0x151AFCD0: addiu       $t2, $zero, 0xA0
    ctx->r10 = ADD32(0, 0XA0);
    // 0x151AFCD4: addiu       $t3, $zero, 0x2A
    ctx->r11 = ADD32(0, 0X2A);
    // 0x151AFCD8: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x151AFCDC: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x151AFCE0: addiu       $t6, $zero, 0x6A
    ctx->r14 = ADD32(0, 0X6A);
    // 0x151AFCE4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151AFCE8: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    // 0x151AFCEC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x151AFCF0: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x151AFCF4: sb          $t1, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r9;
    // 0x151AFCF8: sb          $t2, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r10;
    // 0x151AFCFC: sb          $t3, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r11;
    // 0x151AFD00: sb          $t4, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r12;
    // 0x151AFD04: sb          $t5, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r13;
    // 0x151AFD08: sb          $t6, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r14;
    // 0x151AFD0C: jal         0x150ADA20
    // 0x151AFD10: sb          $t7, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151AFD10: sb          $t7, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r15;
    after_1:
    // 0x151AFD14: addiu       $at, $zero, 0x9C
    ctx->r1 = ADD32(0, 0X9C);
    // 0x151AFD18: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AFD1C: mfhi        $t8
    ctx->r24 = hi;
    // 0x151AFD20: addiu       $t9, $t8, 0x64
    ctx->r25 = ADD32(ctx->r24, 0X64);
    // 0x151AFD24: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151AFD28: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151AFD2C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x151AFD30: sb          $t9, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r25;
    // 0x151AFD34: sb          $t0, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r8;
    // 0x151AFD38: sb          $t1, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r9;
    // 0x151AFD3C: jal         0x150ADA68
    // 0x151AFD40: sb          $t2, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r10;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151AFD40: sb          $t2, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r10;
    after_2:
    // 0x151AFD44: lui         $at, 0x434A
    ctx->r1 = S32(0X434A << 16);
    // 0x151AFD48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AFD4C: lui         $at, 0x42CA
    ctx->r1 = S32(0X42CA << 16);
    // 0x151AFD50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AFD54: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151AFD58: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x151AFD5C: lwc1        $f16, 0xB4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x151AFD60: lwc1        $f18, 0xB8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x151AFD64: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x151AFD68: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x151AFD6C: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x151AFD70: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AFD74: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x151AFD78: jal         0x150ADA20
    // 0x151AFD7C: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151AFD7C: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x151AFD80: jal         0x150ADA68
    // 0x151AFD84: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151AFD84: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_4:
    // 0x151AFD88: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x151AFD8C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x151AFD90: lh          $a0, 0xCA($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XCA);
    // 0x151AFD94: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    // 0x151AFD98: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x151AFD9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AFDA0: lwc1        $f4, -0x5EF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5EF0);
    // 0x151AFDA4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x151AFDA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AFDAC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151AFDB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AFDB4: lwc1        $f16, -0x5EEC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5EEC);
    // 0x151AFDB8: mfhi        $t3
    ctx->r11 = hi;
    // 0x151AFDBC: addiu       $a1, $t3, -0x14
    ctx->r5 = ADD32(ctx->r11, -0X14);
    // 0x151AFDC0: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x151AFDC4: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x151AFDC8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AFDCC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151AFDD0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x151AFDD4: jal         0x15143794
    // 0x151AFDD8: nop

    func_15143794(rdram, ctx);
        goto after_5;
    // 0x151AFDD8: nop

    after_5:
    // 0x151AFDDC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151AFDE0: addiu       $t6, $zero, 0xE05
    ctx->r14 = ADD32(0, 0XE05);
    // 0x151AFDE4: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x151AFDE8: jal         0x150ADA20
    // 0x151AFDEC: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151AFDEC: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x151AFDF0: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x151AFDF4: beq         $t7, $zero, L_151AFE04
    if (ctx->r15 == 0) {
        // 0x151AFDF8: lw          $t8, 0x8C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X8C);
            goto L_151AFE04;
    }
    // 0x151AFDF8: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x151AFDFC: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x151AFE00: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
L_151AFE04:
    // 0x151AFE04: jal         0x150ADA20
    // 0x151AFE08: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151AFE08: nop

    after_7:
    // 0x151AFE0C: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x151AFE10: beq         $t0, $zero, L_151AFE24
    if (ctx->r8 == 0) {
        // 0x151AFE14: addiu       $t3, $zero, 0x6
        ctx->r11 = ADD32(0, 0X6);
            goto L_151AFE24;
    }
    // 0x151AFE14: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x151AFE18: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x151AFE1C: ori         $t2, $t1, 0x80
    ctx->r10 = ctx->r9 | 0X80;
    // 0x151AFE20: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
L_151AFE24:
    // 0x151AFE24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AFE28: lwc1        $f6, -0x5EE8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5EE8);
    // 0x151AFE2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AFE30: lwc1        $f8, -0x5EE4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5EE4);
    // 0x151AFE34: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151AFE38: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x151AFE3C: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x151AFE40: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x151AFE44: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151AFE48: sb          $t3, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r11;
    // 0x151AFE4C: sb          $t4, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r12;
    // 0x151AFE50: sh          $t5, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r13;
    // 0x151AFE54: sh          $t6, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r14;
    // 0x151AFE58: sh          $t7, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r15;
    // 0x151AFE5C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151AFE60: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x151AFE64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151AFE68: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x151AFE6C: lbu         $a3, 0xE3($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XE3);
    // 0x151AFE70: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x151AFE74: jal         0x15130374
    // 0x151AFE78: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_15130374(rdram, ctx);
        goto after_8;
    // 0x151AFE78: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x151AFE7C: beq         $v0, $zero, L_151AFE90
    if (ctx->r2 == 0) {
        // 0x151AFE80: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_151AFE90;
    }
    // 0x151AFE80: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x151AFE84: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151AFE88: jal         0x10022EC0
    // 0x151AFE8C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x151AFE8C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_9:
L_151AFE90:
    // 0x151AFE90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151AFE94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151AFE98: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x151AFE9C: jr          $ra
    // 0x151AFEA0: nop

    return;
    return;
    // 0x151AFEA0: nop

;}
RECOMP_FUNC void func_15036F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15036F34: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x15036F38: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15036F3C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15036F40: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x15036F44: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x15036F48: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15036F4C: lbu         $t8, 0x3E78($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3E78);
    // 0x15036F50: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x15036F54: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    // 0x15036F58: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15036F5C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x15036F60: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15036F64: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15036F68: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15036F6C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x15036F70: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15036F74: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15036F78: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x15036F7C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15036F80: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15036F84: addiu       $t6, $t6, -0x3D30
    ctx->r14 = ADD32(ctx->r14, -0X3D30);
    // 0x15036F88: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x15036F8C: addu        $v1, $t9, $t6
    ctx->r3 = ADD32(ctx->r25, ctx->r14);
    // 0x15036F90: lbu         $t7, 0x4($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4);
    // 0x15036F94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15036F98: lwc1        $f4, -0x7CA0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7CA0);
    // 0x15036F9C: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x15036FA0: addiu       $t8, $t7, -0x5
    ctx->r24 = ADD32(ctx->r15, -0X5);
    // 0x15036FA4: sltiu       $at, $t8, 0xB1
    ctx->r1 = ctx->r24 < 0XB1 ? 1 : 0;
    // 0x15036FA8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15036FAC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x15036FB0: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x15036FB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15036FB8: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x15036FBC: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x15036FC0: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x15036FC4: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x15036FC8: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x15036FCC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x15036FD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15036FD4: beq         $at, $zero, L_15037684
    if (ctx->r1 == 0) {
        // 0x15036FD8: swc1        $f4, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
            goto L_15037684;
    }
    // 0x15036FD8: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x15036FDC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15036FE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15036FE4: addu        $at, $at, $t8
    gpr jr_addend_15036FEC = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15036FE8: lw          $t8, -0x7C9C($at)
    ctx->r24 = ADD32(ctx->r1, -0X7C9C);
    // 0x15036FEC: jr          $t8
    // 0x15036FF0: nop

    switch (jr_addend_15036FEC >> 2) {
        case 0: goto L_150374D0; break;
        case 1: goto L_15037684; break;
        case 2: goto L_15037684; break;
        case 3: goto L_15037684; break;
        case 4: goto L_15037684; break;
        case 5: goto L_15037684; break;
        case 6: goto L_15037684; break;
        case 7: goto L_15037494; break;
        case 8: goto L_15037684; break;
        case 9: goto L_15037684; break;
        case 10: goto L_15037684; break;
        case 11: goto L_15037684; break;
        case 12: goto L_150370EC; break;
        case 13: goto L_15037500; break;
        case 14: goto L_15037684; break;
        case 15: goto L_15037118; break;
        case 16: goto L_15037684; break;
        case 17: goto L_15037494; break;
        case 18: goto L_15037684; break;
        case 19: goto L_15037684; break;
        case 20: goto L_15037684; break;
        case 21: goto L_15037684; break;
        case 22: goto L_15037684; break;
        case 23: goto L_15037684; break;
        case 24: goto L_15037684; break;
        case 25: goto L_15037684; break;
        case 26: goto L_15037684; break;
        case 27: goto L_150374BC; break;
        case 28: goto L_15037158; break;
        case 29: goto L_15037494; break;
        case 30: goto L_15037684; break;
        case 31: goto L_15037684; break;
        case 32: goto L_15037684; break;
        case 33: goto L_15037684; break;
        case 34: goto L_15037684; break;
        case 35: goto L_150373C0; break;
        case 36: goto L_15037310; break;
        case 37: goto L_15037684; break;
        case 38: goto L_1503740C; break;
        case 39: goto L_15037684; break;
        case 40: goto L_1503747C; break;
        case 41: goto L_15037684; break;
        case 42: goto L_15037684; break;
        case 43: goto L_15037684; break;
        case 44: goto L_15037058; break;
        case 45: goto L_15037684; break;
        case 46: goto L_15037684; break;
        case 47: goto L_15037240; break;
        case 48: goto L_15037684; break;
        case 49: goto L_15037464; break;
        case 50: goto L_15037684; break;
        case 51: goto L_15037684; break;
        case 52: goto L_15037684; break;
        case 53: goto L_15037434; break;
        case 54: goto L_15037684; break;
        case 55: goto L_15037684; break;
        case 56: goto L_15037434; break;
        case 57: goto L_15037684; break;
        case 58: goto L_15037684; break;
        case 59: goto L_15037684; break;
        case 60: goto L_15037684; break;
        case 61: goto L_15037684; break;
        case 62: goto L_15037684; break;
        case 63: goto L_150373AC; break;
        case 64: goto L_15037684; break;
        case 65: goto L_15037684; break;
        case 66: goto L_15037390; break;
        case 67: goto L_15037684; break;
        case 68: goto L_15037684; break;
        case 69: goto L_15037374; break;
        case 70: goto L_15037324; break;
        case 71: goto L_15037684; break;
        case 72: goto L_15037684; break;
        case 73: goto L_15037684; break;
        case 74: goto L_15037684; break;
        case 75: goto L_15037360; break;
        case 76: goto L_15037684; break;
        case 77: goto L_15037684; break;
        case 78: goto L_1503744C; break;
        case 79: goto L_150372F8; break;
        case 80: goto L_15037684; break;
        case 81: goto L_15037684; break;
        case 82: goto L_15037684; break;
        case 83: goto L_150372D0; break;
        case 84: goto L_15037684; break;
        case 85: goto L_150372BC; break;
        case 86: goto L_150372E4; break;
        case 87: goto L_15037684; break;
        case 88: goto L_15037684; break;
        case 89: goto L_15037030; break;
        case 90: goto L_150372BC; break;
        case 91: goto L_15037684; break;
        case 92: goto L_15037684; break;
        case 93: goto L_15037684; break;
        case 94: goto L_15037684; break;
        case 95: goto L_15037684; break;
        case 96: goto L_15037684; break;
        case 97: goto L_15037684; break;
        case 98: goto L_15037684; break;
        case 99: goto L_15037684; break;
        case 100: goto L_15037268; break;
        case 101: goto L_15037684; break;
        case 102: goto L_15037684; break;
        case 103: goto L_1503722C; break;
        case 104: goto L_15037684; break;
        case 105: goto L_15037684; break;
        case 106: goto L_15037684; break;
        case 107: goto L_15037684; break;
        case 108: goto L_15037684; break;
        case 109: goto L_15037684; break;
        case 110: goto L_15037684; break;
        case 111: goto L_150372BC; break;
        case 112: goto L_15037684; break;
        case 113: goto L_15037254; break;
        case 114: goto L_15037684; break;
        case 115: goto L_15037684; break;
        case 116: goto L_15037144; break;
        case 117: goto L_150372BC; break;
        case 118: goto L_1503716C; break;
        case 119: goto L_15037210; break;
        case 120: goto L_150374A8; break;
        case 121: goto L_15037684; break;
        case 122: goto L_15037684; break;
        case 123: goto L_15037684; break;
        case 124: goto L_15037684; break;
        case 125: goto L_15036FF4; break;
        case 126: goto L_15037684; break;
        case 127: goto L_15037684; break;
        case 128: goto L_15037684; break;
        case 129: goto L_15037094; break;
        case 130: goto L_15037080; break;
        case 131: goto L_15037684; break;
        case 132: goto L_15037684; break;
        case 133: goto L_1503727C; break;
        case 134: goto L_1503706C; break;
        case 135: goto L_150374BC; break;
        case 136: goto L_150372BC; break;
        case 137: goto L_15037684; break;
        case 138: goto L_15037684; break;
        case 139: goto L_15037684; break;
        case 140: goto L_15037684; break;
        case 141: goto L_15037684; break;
        case 142: goto L_150374BC; break;
        case 143: goto L_15037684; break;
        case 144: goto L_15037684; break;
        case 145: goto L_15037684; break;
        case 146: goto L_15037044; break;
        case 147: goto L_15037684; break;
        case 148: goto L_150370C0; break;
        case 149: goto L_15037360; break;
        case 150: goto L_15037360; break;
        case 151: goto L_15037684; break;
        case 152: goto L_15037684; break;
        case 153: goto L_15037684; break;
        case 154: goto L_15037684; break;
        case 155: goto L_15037684; break;
        case 156: goto L_15037684; break;
        case 157: goto L_15037008; break;
        case 158: goto L_15037684; break;
        case 159: goto L_1503701C; break;
        case 160: goto L_1503744C; break;
        case 161: goto L_15037684; break;
        case 162: goto L_15037684; break;
        case 163: goto L_15037684; break;
        case 164: goto L_15037684; break;
        case 165: goto L_15037684; break;
        case 166: goto L_15037684; break;
        case 167: goto L_15037684; break;
        case 168: goto L_150374D0; break;
        case 169: goto L_150374D0; break;
        case 170: goto L_150374D0; break;
        case 171: goto L_15037684; break;
        case 172: goto L_15037684; break;
        case 173: goto L_15037684; break;
        case 174: goto L_15037494; break;
        case 175: goto L_15037684; break;
        case 176: goto L_15037080; break;
        default: switch_error(__func__, 0x15036FEC, 0x80098364);
    }
    // 0x15036FF0: nop

L_15036FF4:
    // 0x15036FF4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15036FF8: addiu       $s0, $zero, 0xC
    ctx->r16 = ADD32(0, 0XC);
    // 0x15036FFC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x15037000: b           L_15037544
    // 0x15037004: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037004: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037008:
    // 0x15037008: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1503700C: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x15037010: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x15037014: b           L_15037544
    // 0x15037018: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037018: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_1503701C:
    // 0x1503701C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037020: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x15037024: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x15037028: b           L_15037544
    // 0x1503702C: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x1503702C: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037030:
    // 0x15037030: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037034: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x15037038: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x1503703C: b           L_15037544
    // 0x15037040: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037040: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037044:
    // 0x15037044: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037048: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x1503704C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x15037050: b           L_15037544
    // 0x15037054: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037054: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037058:
    // 0x15037058: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1503705C: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x15037060: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x15037064: b           L_15037544
    // 0x15037068: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037068: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_1503706C:
    // 0x1503706C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037070: addiu       $s0, $zero, 0x21
    ctx->r16 = ADD32(0, 0X21);
    // 0x15037074: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x15037078: b           L_15037544
    // 0x1503707C: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x1503707C: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037080:
    // 0x15037080: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037084: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x15037088: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x1503708C: b           L_15037544
    // 0x15037090: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037090: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037094:
    // 0x15037094: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037098: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
    // 0x1503709C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x150370A0: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x150370A4: bne         $v0, $zero, L_150370B8
    if (ctx->r2 != 0) {
        // 0x150370A8: nop
    
            goto L_150370B8;
    }
    // 0x150370A8: nop

    // 0x150370AC: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x150370B0: b           L_15037544
    // 0x150370B4: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
        goto L_15037544;
    // 0x150370B4: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
L_150370B8:
    // 0x150370B8: b           L_15037544
    // 0x150370BC: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
        goto L_15037544;
    // 0x150370BC: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_150370C0:
    // 0x150370C0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150370C4: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
    // 0x150370C8: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x150370CC: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x150370D0: bne         $v0, $zero, L_150370E4
    if (ctx->r2 != 0) {
        // 0x150370D4: nop
    
            goto L_150370E4;
    }
    // 0x150370D4: nop

    // 0x150370D8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x150370DC: b           L_15037544
    // 0x150370E0: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
        goto L_15037544;
    // 0x150370E0: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
L_150370E4:
    // 0x150370E4: b           L_15037544
    // 0x150370E8: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
        goto L_15037544;
    // 0x150370E8: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_150370EC:
    // 0x150370EC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150370F0: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
    // 0x150370F4: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x150370F8: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x150370FC: bne         $v0, $zero, L_15037110
    if (ctx->r2 != 0) {
        // 0x15037100: nop
    
            goto L_15037110;
    }
    // 0x15037100: nop

    // 0x15037104: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x15037108: b           L_15037544
    // 0x1503710C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
        goto L_15037544;
    // 0x1503710C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
L_15037110:
    // 0x15037110: b           L_15037544
    // 0x15037114: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
        goto L_15037544;
    // 0x15037114: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_15037118:
    // 0x15037118: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1503711C: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
    // 0x15037120: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x15037124: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x15037128: bne         $v0, $zero, L_1503713C
    if (ctx->r2 != 0) {
        // 0x1503712C: nop
    
            goto L_1503713C;
    }
    // 0x1503712C: nop

    // 0x15037130: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x15037134: b           L_15037544
    // 0x15037138: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
        goto L_15037544;
    // 0x15037138: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
L_1503713C:
    // 0x1503713C: b           L_15037544
    // 0x15037140: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
        goto L_15037544;
    // 0x15037140: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_15037144:
    // 0x15037144: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037148: addiu       $s0, $zero, 0x1B
    ctx->r16 = ADD32(0, 0X1B);
    // 0x1503714C: addiu       $s1, $zero, 0x1A
    ctx->r17 = ADD32(0, 0X1A);
    // 0x15037150: b           L_15037544
    // 0x15037154: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037154: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037158:
    // 0x15037158: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1503715C: addiu       $s0, $zero, 0x19
    ctx->r16 = ADD32(0, 0X19);
    // 0x15037160: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
    // 0x15037164: b           L_15037544
    // 0x15037168: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037168: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_1503716C:
    // 0x1503716C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037170: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
    // 0x15037174: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x15037178: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x1503717C: bne         $v0, $zero, L_1503718C
    if (ctx->r2 != 0) {
        // 0x15037180: lui         $at, 0xC325
        ctx->r1 = S32(0XC325 << 16);
            goto L_1503718C;
    }
    // 0x15037180: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x15037184: b           L_15037544
    // 0x15037188: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
        goto L_15037544;
    // 0x15037188: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
L_1503718C:
    // 0x1503718C: lhu         $a0, 0x84($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X84);
    // 0x15037190: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15037194: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x15037198: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x1503719C: beq         $a0, $at, L_150371C0
    if (ctx->r4 == ctx->r1) {
        // 0x150371A0: addiu       $t0, $zero, 0x7
        ctx->r8 = ADD32(0, 0X7);
            goto L_150371C0;
    }
    // 0x150371A0: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x150371A4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150371A8: beq         $a0, $at, L_150371C0
    if (ctx->r4 == ctx->r1) {
        // 0x150371AC: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_150371C0;
    }
    // 0x150371AC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x150371B0: beq         $a0, $at, L_150371C8
    if (ctx->r4 == ctx->r1) {
        // 0x150371B4: addiu       $t9, $zero, 0x7E
        ctx->r25 = ADD32(0, 0X7E);
            goto L_150371C8;
    }
    // 0x150371B4: addiu       $t9, $zero, 0x7E
    ctx->r25 = ADD32(0, 0X7E);
    // 0x150371B8: b           L_150371DC
    // 0x150371BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_150371DC;
    // 0x150371BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_150371C0:
    // 0x150371C0: b           L_150371DC
    // 0x150371C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
        goto L_150371DC;
    // 0x150371C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_150371C8:
    // 0x150371C8: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
    // 0x150371CC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x150371D0: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x150371D4: b           L_150371DC
    // 0x150371D8: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
        goto L_150371DC;
    // 0x150371D8: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
L_150371DC:
    // 0x150371DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150371E0: bne         $v0, $at, L_15037200
    if (ctx->r2 != ctx->r1) {
        // 0x150371E4: addiu       $s0, $zero, 0x1A
        ctx->r16 = ADD32(0, 0X1A);
            goto L_15037200;
    }
    // 0x150371E4: addiu       $s0, $zero, 0x1A
    ctx->r16 = ADD32(0, 0X1A);
    // 0x150371E8: addiu       $s0, $zero, 0x16
    ctx->r16 = ADD32(0, 0X16);
    // 0x150371EC: addiu       $s1, $zero, 0x16
    ctx->r17 = ADD32(0, 0X16);
    // 0x150371F0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x150371F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150371F8: b           L_15037544
    // 0x150371FC: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
        goto L_15037544;
    // 0x150371FC: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
L_15037200:
    // 0x15037200: addiu       $s1, $zero, 0x1A
    ctx->r17 = ADD32(0, 0X1A);
    // 0x15037204: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15037208: b           L_15037544
    // 0x1503720C: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
        goto L_15037544;
    // 0x1503720C: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
L_15037210:
    // 0x15037210: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037214: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x15037218: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1503721C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15037220: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x15037224: b           L_15037544
    // 0x15037228: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037228: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_1503722C:
    // 0x1503722C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037230: addiu       $s0, $zero, 0x11
    ctx->r16 = ADD32(0, 0X11);
    // 0x15037234: addiu       $s1, $zero, 0x10
    ctx->r17 = ADD32(0, 0X10);
    // 0x15037238: b           L_15037544
    // 0x1503723C: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x1503723C: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037240:
    // 0x15037240: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037244: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x15037248: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x1503724C: b           L_15037544
    // 0x15037250: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037250: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037254:
    // 0x15037254: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037258: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x1503725C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x15037260: b           L_15037544
    // 0x15037264: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037264: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037268:
    // 0x15037268: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1503726C: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x15037270: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x15037274: b           L_15037544
    // 0x15037278: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037278: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_1503727C:
    // 0x1503727C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15037280: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x15037284: bnel        $t6, $zero, L_15037688
    if (ctx->r14 != 0) {
        // 0x15037288: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_15037688;
    }
    goto skip_0;
    // 0x15037288: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x1503728C: lw          $t7, 0x2E8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2E8);
    // 0x15037290: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15037294: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x15037298: beq         $t7, $at, L_15037684
    if (ctx->r15 == ctx->r1) {
        // 0x1503729C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_15037684;
    }
    // 0x1503729C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150372A0: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x150372A4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150372A8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150372AC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150372B0: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x150372B4: b           L_15037544
    // 0x150372B8: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x150372B8: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_150372BC:
    // 0x150372BC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150372C0: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x150372C4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x150372C8: b           L_15037544
    // 0x150372CC: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x150372CC: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_150372D0:
    // 0x150372D0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150372D4: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x150372D8: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x150372DC: b           L_15037544
    // 0x150372E0: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x150372E0: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_150372E4:
    // 0x150372E4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150372E8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x150372EC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x150372F0: b           L_15037544
    // 0x150372F4: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x150372F4: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_150372F8:
    // 0x150372F8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150372FC: addiu       $s0, $zero, 0x1D
    ctx->r16 = ADD32(0, 0X1D);
    // 0x15037300: addiu       $s1, $zero, 0x1C
    ctx->r17 = ADD32(0, 0X1C);
    // 0x15037304: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15037308: b           L_15037544
    // 0x1503730C: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x1503730C: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037310:
    // 0x15037310: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037314: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x15037318: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x1503731C: b           L_15037544
    // 0x15037320: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037320: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037324:
    // 0x15037324: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037328: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
    // 0x1503732C: addiu       $s0, $zero, 0x2C
    ctx->r16 = ADD32(0, 0X2C);
    // 0x15037330: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x15037334: bne         $v0, $zero, L_15037358
    if (ctx->r2 != 0) {
        // 0x15037338: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_15037358;
    }
    // 0x15037338: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1503733C: addiu       $s0, $zero, 0x2B
    ctx->r16 = ADD32(0, 0X2B);
    // 0x15037340: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x15037344: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x15037348: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x1503734C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15037350: b           L_15037544
    // 0x15037354: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
        goto L_15037544;
    // 0x15037354: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
L_15037358:
    // 0x15037358: b           L_15037544
    // 0x1503735C: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
        goto L_15037544;
    // 0x1503735C: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
L_15037360:
    // 0x15037360: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037364: addiu       $s0, $zero, 0xD
    ctx->r16 = ADD32(0, 0XD);
    // 0x15037368: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x1503736C: b           L_15037544
    // 0x15037370: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037370: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037374:
    // 0x15037374: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037378: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x1503737C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15037380: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15037384: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15037388: b           L_15037544
    // 0x1503738C: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x1503738C: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037390:
    // 0x15037390: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037394: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x15037398: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1503739C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150373A0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150373A4: b           L_15037544
    // 0x150373A8: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x150373A8: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_150373AC:
    // 0x150373AC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150373B0: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x150373B4: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x150373B8: b           L_15037544
    // 0x150373BC: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x150373BC: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_150373C0:
    // 0x150373C0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150373C4: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
    // 0x150373C8: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x150373CC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x150373D0: bne         $v0, $zero, L_150373F8
    if (ctx->r2 != 0) {
        // 0x150373D4: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_150373F8;
    }
    // 0x150373D4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150373D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150373DC: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x150373E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150373E4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150373E8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150373EC: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x150373F0: b           L_15037544
    // 0x150373F4: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
        goto L_15037544;
    // 0x150373F4: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
L_150373F8:
    // 0x150373F8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150373FC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15037400: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x15037404: b           L_15037544
    // 0x15037408: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
        goto L_15037544;
    // 0x15037408: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
L_1503740C:
    // 0x1503740C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037410: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x15037414: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15037418: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x1503741C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x15037420: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15037424: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15037428: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1503742C: b           L_15037544
    // 0x15037430: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037430: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037434:
    // 0x15037434: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037438: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x1503743C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x15037440: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x15037444: b           L_15037544
    // 0x15037448: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037448: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_1503744C:
    // 0x1503744C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037450: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x15037454: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15037458: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x1503745C: b           L_15037544
    // 0x15037460: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037460: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037464:
    // 0x15037464: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037468: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x1503746C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x15037470: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x15037474: b           L_15037544
    // 0x15037478: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037478: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_1503747C:
    // 0x1503747C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037480: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x15037484: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x15037488: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1503748C: b           L_15037544
    // 0x15037490: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x15037490: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_15037494:
    // 0x15037494: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037498: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x1503749C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x150374A0: b           L_15037544
    // 0x150374A4: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x150374A4: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_150374A8:
    // 0x150374A8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150374AC: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x150374B0: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x150374B4: b           L_15037544
    // 0x150374B8: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x150374B8: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_150374BC:
    // 0x150374BC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150374C0: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x150374C4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x150374C8: b           L_15037544
    // 0x150374CC: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
        goto L_15037544;
    // 0x150374CC: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
L_150374D0:
    // 0x150374D0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150374D4: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
    // 0x150374D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150374DC: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
    // 0x150374E0: bne         $v0, $zero, L_150374F8
    if (ctx->r2 != 0) {
        // 0x150374E4: nop
    
            goto L_150374F8;
    }
    // 0x150374E4: nop

    // 0x150374E8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x150374EC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x150374F0: b           L_15037544
    // 0x150374F4: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
        goto L_15037544;
    // 0x150374F4: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
L_150374F8:
    // 0x150374F8: b           L_15037544
    // 0x150374FC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_15037544;
    // 0x150374FC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_15037500:
    // 0x15037500: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037504: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
    // 0x15037508: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1503750C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x15037510: bne         $v0, $zero, L_15037524
    if (ctx->r2 != 0) {
        // 0x15037514: addiu       $ra, $zero, 0x1
        ctx->r31 = ADD32(0, 0X1);
            goto L_15037524;
    }
    // 0x15037514: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
    // 0x15037518: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x1503751C: b           L_15037540
    // 0x15037520: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_15037540;
    // 0x15037520: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_15037524:
    // 0x15037524: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15037528: bne         $v0, $at, L_1503753C
    if (ctx->r2 != ctx->r1) {
        // 0x1503752C: addiu       $s0, $zero, 0x5
        ctx->r16 = ADD32(0, 0X5);
            goto L_1503753C;
    }
    // 0x1503752C: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x15037530: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x15037534: b           L_15037540
    // 0x15037538: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_15037540;
    // 0x15037538: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_1503753C:
    // 0x1503753C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_15037540:
    // 0x15037540: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_15037544:
    // 0x15037544: beq         $a1, $zero, L_15037568
    if (ctx->r5 == 0) {
        // 0x15037548: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_15037568;
    }
    // 0x15037548: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503754C: lwc1        $f0, -0x79D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X79D8);
    // 0x15037550: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15037554: addiu       $a2, $a2, 0x3FE8
    ctx->r6 = ADD32(ctx->r6, 0X3FE8);
    // 0x15037558: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x1503755C: swc1        $f0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f0.u32l;
    // 0x15037560: b           L_1503762C
    // 0x15037564: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
        goto L_1503762C;
    // 0x15037564: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
L_15037568:
    // 0x15037568: beql        $v0, $zero, L_15037578
    if (ctx->r2 == 0) {
        // 0x1503756C: sll         $t6, $t1, 2
        ctx->r14 = S32(ctx->r9 << 2);
            goto L_15037578;
    }
    goto skip_1;
    // 0x1503756C: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    skip_1:
    // 0x15037570: beq         $a2, $zero, L_1503762C
    if (ctx->r6 == 0) {
        // 0x15037574: sll         $t6, $t1, 2
        ctx->r14 = S32(ctx->r9 << 2);
            goto L_1503762C;
    }
    // 0x15037574: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
L_15037578:
    // 0x15037578: subu        $t6, $t6, $t1
    ctx->r14 = SUB32(ctx->r14, ctx->r9);
    // 0x1503757C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x15037580: addiu       $t7, $t7, -0x7F98
    ctx->r15 = ADD32(ctx->r15, -0X7F98);
    // 0x15037584: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15037588: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1503758C: lwc1        $f6, -0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0X8);
    // 0x15037590: lwc1        $f8, -0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X18);
    // 0x15037594: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x15037598: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1503759C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150375A0: addiu       $t9, $sp, 0x84
    ctx->r25 = ADD32(ctx->r29, 0X84);
    // 0x150375A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150375A8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x150375AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x150375B0: addiu       $a0, $a0, 0x3FE8
    ctx->r4 = ADD32(ctx->r4, 0X3FE8);
    // 0x150375B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150375B8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x150375BC: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x150375C0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x150375C4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x150375C8: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x150375CC: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    // 0x150375D0: sw          $t1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r9;
    // 0x150375D4: sw          $t3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r11;
    // 0x150375D8: sw          $t4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r12;
    // 0x150375DC: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x150375E0: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    // 0x150375E4: jal         0x1503B708
    // 0x150375E8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_1503B708(rdram, ctx);
        goto after_0;
    // 0x150375E8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x150375EC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150375F0: addiu       $v1, $v1, 0x3FE8
    ctx->r3 = ADD32(ctx->r3, 0X3FE8);
    // 0x150375F4: lwc1        $f2, 0x80($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150375F8: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x150375FC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15037600: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037604: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x15037608: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x1503760C: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x15037610: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x15037614: swc1        $f18, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f18.u32l;
    // 0x15037618: lbu         $t6, 0x3E78($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3E78);
    // 0x1503761C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x15037620: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x15037624: lbu         $v0, 0x3FFA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FFA);
    // 0x15037628: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
L_1503762C:
    // 0x1503762C: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x15037630: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x15037634: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15037638: addiu       $a2, $a2, 0x3FE8
    ctx->r6 = ADD32(ctx->r6, 0X3FE8);
    // 0x1503763C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15037640: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15037644: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x15037648: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x1503764C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x15037650: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x15037654: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x15037658: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x1503765C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15037660: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x15037664: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x15037668: jal         0x15038620
    // 0x1503766C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    func_15038620(rdram, ctx);
        goto after_1;
    // 0x1503766C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    after_1:
    // 0x15037670: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15037674: addiu       $v0, $v0, 0x3FFA
    ctx->r2 = ADD32(ctx->r2, 0X3FFA);
    // 0x15037678: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x1503767C: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x15037680: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_15037684:
    // 0x15037684: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_15037688:
    // 0x15037688: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x1503768C: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x15037690: jr          $ra
    // 0x15037694: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    return;
    // 0x15037694: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_1519F4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519F4F0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x1519F4F4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1519F4F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1519F4FC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1519F500: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x1519F504: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x1519F508: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x1519F50C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x1519F510: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x1519F514: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x1519F518: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x1519F51C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x1519F520: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x1519F524: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1519F528: lb          $t6, 0x2C($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2C);
    // 0x1519F52C: lw          $s6, 0x98($s0)
    ctx->r22 = MEM_W(ctx->r16, 0X98);
    // 0x1519F530: lw          $fp, 0x94($s0)
    ctx->r30 = MEM_W(ctx->r16, 0X94);
    // 0x1519F534: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x1519F538: beql        $at, $zero, L_1519F55C
    if (ctx->r1 == 0) {
        // 0x1519F53C: lb          $s2, 0x2E($s0)
        ctx->r18 = MEM_B(ctx->r16, 0X2E);
            goto L_1519F55C;
    }
    goto skip_0;
    // 0x1519F53C: lb          $s2, 0x2E($s0)
    ctx->r18 = MEM_B(ctx->r16, 0X2E);
    skip_0:
    // 0x1519F540: lbu         $t7, 0x4($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X4);
    // 0x1519F544: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x1519F548: beql        $t8, $zero, L_1519F55C
    if (ctx->r24 == 0) {
        // 0x1519F54C: lb          $s2, 0x2E($s0)
        ctx->r18 = MEM_B(ctx->r16, 0X2E);
            goto L_1519F55C;
    }
    goto skip_1;
    // 0x1519F54C: lb          $s2, 0x2E($s0)
    ctx->r18 = MEM_B(ctx->r16, 0X2E);
    skip_1:
    // 0x1519F550: b           L_1519F7B8
    // 0x1519F554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519F7B8;
    // 0x1519F554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519F558: lb          $s2, 0x2E($s0)
    ctx->r18 = MEM_B(ctx->r16, 0X2E);
L_1519F55C:
    // 0x1519F55C: lb          $t9, 0x2D($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X2D);
    // 0x1519F560: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519F564: addiu       $s7, $zero, 0x24
    ctx->r23 = ADD32(0, 0X24);
    // 0x1519F568: beq         $s2, $t9, L_1519F740
    if (ctx->r18 == ctx->r25) {
        // 0x1519F56C: lui         $s5, 0x800C
        ctx->r21 = S32(0X800C << 16);
            goto L_1519F740;
    }
    // 0x1519F56C: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x1519F570: lwc1        $f22, -0x7310($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X7310);
    // 0x1519F574: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1519F578: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x1519F57C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1519F580: addiu       $s4, $s4, -0x161C
    ctx->r20 = ADD32(ctx->r20, -0X161C);
    // 0x1519F584: addiu       $s5, $s5, -0x165C
    ctx->r21 = ADD32(ctx->r21, -0X165C);
    // 0x1519F588: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_1519F58C:
    // 0x1519F58C: bgez        $s2, L_1519F59C
    if (SIGNED(ctx->r18) >= 0) {
        // 0x1519F590: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_1519F59C;
    }
    // 0x1519F590: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1519F594: lbu         $s2, 0x25($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0X25);
    // 0x1519F598: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_1519F59C:
    // 0x1519F59C: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519F5A0: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x1519F5A4: mflo        $t0
    ctx->r8 = lo;
    // 0x1519F5A8: addu        $s1, $t0, $fp
    ctx->r17 = ADD32(ctx->r8, ctx->r30);
    // 0x1519F5AC: lh          $t1, 0x18($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X18);
    // 0x1519F5B0: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x1519F5B4: sh          $t3, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r11;
    // 0x1519F5B8: lh          $t4, 0x18($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X18);
    // 0x1519F5BC: bgezl       $t4, L_1519F5CC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1519F5C0: lh          $v0, 0x12($s1)
        ctx->r2 = MEM_H(ctx->r17, 0X12);
            goto L_1519F5CC;
    }
    goto skip_2;
    // 0x1519F5C0: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
    skip_2:
    // 0x1519F5C4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x1519F5C8: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
L_1519F5CC:
    // 0x1519F5CC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1519F5D0: sh          $t5, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r13;
    // 0x1519F5D4: blezl       $v0, L_1519F5F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1519F5D8: lh          $t8, 0x34($s6)
        ctx->r24 = MEM_H(ctx->r22, 0X34);
            goto L_1519F5F0;
    }
    goto skip_3;
    // 0x1519F5D8: lh          $t8, 0x34($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X34);
    skip_3:
    // 0x1519F5DC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x1519F5E0: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x1519F5E4: b           L_1519F608
    // 0x1519F5E8: sh          $t7, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r15;
        goto L_1519F608;
    // 0x1519F5E8: sh          $t7, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r15;
    // 0x1519F5EC: lh          $t8, 0x34($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X34);
L_1519F5F0:
    // 0x1519F5F0: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x1519F5F4: lh          $t1, 0x10($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X10);
    // 0x1519F5F8: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519F5FC: mflo        $t0
    ctx->r8 = lo;
    // 0x1519F600: subu        $t2, $t1, $t0
    ctx->r10 = SUB32(ctx->r9, ctx->r8);
    // 0x1519F604: sh          $t2, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r10;
L_1519F608:
    // 0x1519F608: lwc1        $f4, 0x3C($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X3C);
    // 0x1519F60C: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x1519F610: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x1519F614: lwc1        $f18, 0x1C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x1519F618: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1519F61C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1519F620: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1519F624: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x1519F628: lwc1        $f4, 0x0($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X0);
    // 0x1519F62C: lwc1        $f16, 0x20($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X20);
    // 0x1519F630: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1519F634: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1519F638: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x1519F63C: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x1519F640: lwc1        $f18, 0x0($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X0);
    // 0x1519F644: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1519F648: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1519F64C: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x1519F650: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1519F654: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x1519F658: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x1519F65C: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1519F660: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x1519F664: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1519F668: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x1519F66C: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x1519F670: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x1519F674: bc1t        L_1519F694
    if (c1cs) {
        // 0x1519F678: swc1        $f10, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
            goto L_1519F694;
    }
    // 0x1519F678: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x1519F67C: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1519F680: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1519F684: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x1519F688: nop

    // 0x1519F68C: bc1fl       L_1519F6A0
    if (!c1cs) {
        // 0x1519F690: lwc1        $f4, 0x8($s1)
        ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
            goto L_1519F6A0;
    }
    goto skip_4;
    // 0x1519F690: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    skip_4:
L_1519F694:
    // 0x1519F694: b           L_1519F6D4
    // 0x1519F698: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_1519F6D4;
    // 0x1519F698: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x1519F69C: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
L_1519F6A0:
    // 0x1519F6A0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x1519F6A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1519F6A8: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x1519F6AC: addiu       $a3, $s0, 0x60
    ctx->r7 = ADD32(ctx->r16, 0X60);
    // 0x1519F6B0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x1519F6B4: jal         0x15045800
    // 0x1519F6B8: nop

    func_15045800(rdram, ctx);
        goto after_0;
    // 0x1519F6B8: nop

    after_0:
    // 0x1519F6BC: beql        $v0, $zero, L_1519F6D4
    if (ctx->r2 == 0) {
        // 0x1519F6C0: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_1519F6D4;
    }
    goto skip_5;
    // 0x1519F6C0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_5:
    // 0x1519F6C4: lwc1        $f8, 0x60($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
    // 0x1519F6C8: b           L_1519F6D4
    // 0x1519F6CC: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
        goto L_1519F6D4;
    // 0x1519F6CC: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x1519F6D0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_1519F6D4:
    // 0x1519F6D4: lh          $t3, 0x10($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X10);
    // 0x1519F6D8: bgez        $t3, L_1519F6E4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x1519F6DC: nop
    
            goto L_1519F6E4;
    }
    // 0x1519F6DC: nop

    // 0x1519F6E0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_1519F6E4:
    // 0x1519F6E4: beql        $s3, $zero, L_1519F738
    if (ctx->r19 == 0) {
        // 0x1519F6E8: lb          $t1, 0x2D($s0)
        ctx->r9 = MEM_B(ctx->r16, 0X2D);
            goto L_1519F738;
    }
    goto skip_6;
    // 0x1519F6E8: lb          $t1, 0x2D($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X2D);
    skip_6:
    // 0x1519F6EC: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x1519F6F0: beq         $s2, $v0, L_1519F724
    if (ctx->r18 == ctx->r2) {
        // 0x1519F6F4: addiu       $t4, $v0, 0x1
        ctx->r12 = ADD32(ctx->r2, 0X1);
            goto L_1519F724;
    }
L_1519F6F4:
    // 0x1519F6F4: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x1519F6F8: sb          $t4, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r12;
    // 0x1519F6FC: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x1519F700: lbu         $t5, 0x25($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X25);
    // 0x1519F704: bnel        $t5, $v0, L_1519F718
    if (ctx->r13 != ctx->r2) {
        // 0x1519F708: lb          $t6, 0x2C($s0)
        ctx->r14 = MEM_B(ctx->r16, 0X2C);
            goto L_1519F718;
    }
    goto skip_7;
    // 0x1519F708: lb          $t6, 0x2C($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2C);
    skip_7:
    // 0x1519F70C: sb          $zero, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = 0;
    // 0x1519F710: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x1519F714: lb          $t6, 0x2C($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2C);
L_1519F718:
    // 0x1519F718: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x1519F71C: bne         $s2, $v0, L_1519F6F4
    if (ctx->r18 != ctx->r2) {
        // 0x1519F720: sb          $t7, 0x2C($s0)
        MEM_B(0X2C, ctx->r16) = ctx->r15;
            goto L_1519F6F4;
    }
    // 0x1519F720: sb          $t7, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r15;
L_1519F724:
    // 0x1519F724: multu       $v0, $s7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519F728: mflo        $t8
    ctx->r24 = lo;
    // 0x1519F72C: addu        $t9, $fp, $t8
    ctx->r25 = ADD32(ctx->r30, ctx->r24);
    // 0x1519F730: sh          $zero, 0x10($t9)
    MEM_H(0X10, ctx->r25) = 0;
    // 0x1519F734: lb          $t1, 0x2D($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X2D);
L_1519F738:
    // 0x1519F738: bnel        $s2, $t1, L_1519F58C
    if (ctx->r18 != ctx->r9) {
        // 0x1519F73C: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_1519F58C;
    }
    goto skip_8;
    // 0x1519F73C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    skip_8:
L_1519F740:
    // 0x1519F740: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x1519F744: addiu       $s4, $s4, -0x161C
    ctx->r20 = ADD32(ctx->r20, -0X161C);
    // 0x1519F748: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x1519F74C: lh          $t0, 0x48($s6)
    ctx->r8 = MEM_H(ctx->r22, 0X48);
    // 0x1519F750: lh          $t4, 0x46($s6)
    ctx->r12 = MEM_H(ctx->r22, 0X46);
    // 0x1519F754: addiu       $s7, $zero, 0x24
    ctx->r23 = ADD32(0, 0X24);
    // 0x1519F758: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519F75C: mflo        $t3
    ctx->r11 = lo;
    // 0x1519F760: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x1519F764: sh          $t5, 0x46($s6)
    MEM_H(0X46, ctx->r22) = ctx->r13;
    // 0x1519F768: lb          $t6, 0x2C($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2C);
    // 0x1519F76C: blezl       $t6, L_1519F7A4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x1519F770: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_1519F7A4;
    }
    goto skip_9;
    // 0x1519F770: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_9:
    // 0x1519F774: lb          $t7, 0x2D($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X2D);
    // 0x1519F778: multu       $t7, $s7
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519F77C: mflo        $t8
    ctx->r24 = lo;
    // 0x1519F780: addu        $v0, $fp, $t8
    ctx->r2 = ADD32(ctx->r30, ctx->r24);
    // 0x1519F784: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1519F788: swc1        $f16, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f16.u32l;
    // 0x1519F78C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1519F790: swc1        $f18, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f18.u32l;
    // 0x1519F794: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1519F798: b           L_1519F7B4
    // 0x1519F79C: swc1        $f10, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f10.u32l;
        goto L_1519F7B4;
    // 0x1519F79C: swc1        $f10, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f10.u32l;
    // 0x1519F7A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_1519F7A4:
    // 0x1519F7A4: nop

    // 0x1519F7A8: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x1519F7AC: swc1        $f0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f0.u32l;
    // 0x1519F7B0: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
L_1519F7B4:
    // 0x1519F7B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519F7B8:
    // 0x1519F7B8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1519F7BC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1519F7C0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x1519F7C4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1519F7C8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x1519F7CC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x1519F7D0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x1519F7D4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x1519F7D8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x1519F7DC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x1519F7E0: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x1519F7E4: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x1519F7E8: jr          $ra
    // 0x1519F7EC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x1519F7EC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_15114CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15114CC4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15114CC8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15114CCC: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x15114CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15114CD4: beq         $v1, $zero, L_15114D1C
    if (ctx->r3 == 0) {
        // 0x15114CD8: nop
    
            goto L_15114D1C;
    }
    // 0x15114CD8: nop

    // 0x15114CDC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x15114CE0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15114CE4: bnel        $t6, $zero, L_15114CFC
    if (ctx->r14 != 0) {
        // 0x15114CE8: sw          $t8, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = ctx->r24;
            goto L_15114CFC;
    }
    goto skip_0;
    // 0x15114CE8: sw          $t8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r24;
    skip_0:
    // 0x15114CEC: lw          $t7, 0x1C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1C);
    // 0x15114CF0: bne         $t7, $zero, L_15114D1C
    if (ctx->r15 != 0) {
        // 0x15114CF4: nop
    
            goto L_15114D1C;
    }
    // 0x15114CF4: nop

    // 0x15114CF8: sw          $t8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r24;
L_15114CFC:
    // 0x15114CFC: lh          $t9, 0x10($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X10);
    // 0x15114D00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15114D04: sh          $t9, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r25;
    // 0x15114D08: lh          $t0, 0x12($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X12);
    // 0x15114D0C: sh          $t0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r8;
    // 0x15114D10: lh          $t1, 0x14($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X14);
    // 0x15114D14: jr          $ra
    // 0x15114D18: sh          $t1, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r9;
    return;
    return;
    // 0x15114D18: sh          $t1, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r9;
L_15114D1C:
    // 0x15114D1C: jr          $ra
    // 0x15114D20: nop

    return;
    return;
    // 0x15114D20: nop

;}
RECOMP_FUNC void func_15178268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15178268: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x1517826C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15178270: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15178274: lw          $t0, 0x14($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X14);
    // 0x15178278: lh          $a2, 0x2A($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X2A);
    // 0x1517827C: lw          $t6, 0x18($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X18);
    // 0x15178280: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15178284: nop

    // 0x15178288: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1517828C: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x15178290: lw          $t7, 0x1C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1C);
    // 0x15178294: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x15178298: nop

    // 0x1517829C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151782A0: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x151782A4: lw          $t8, 0x20($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X20);
    // 0x151782A8: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x151782AC: nop

    // 0x151782B0: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151782B4: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x151782B8: lh          $t9, 0x32($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X32);
    // 0x151782BC: slti        $at, $t9, 0x321
    ctx->r1 = SIGNED(ctx->r25) < 0X321 ? 1 : 0;
    // 0x151782C0: bnel        $at, $zero, L_151782D4
    if (ctx->r1 != 0) {
        // 0x151782C4: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_151782D4;
    }
    goto skip_0;
    // 0x151782C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    skip_0:
    // 0x151782C8: b           L_151782D4
    // 0x151782CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_151782D4;
    // 0x151782CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151782D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_151782D4:
    // 0x151782D4: lh          $t1, 0x30($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X30);
    // 0x151782D8: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x151782DC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x151782E0: nop

    // 0x151782E4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151782E8: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151782EC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151782F0: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151782F4: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x151782F8: sub.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x151782FC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15178300: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15178304: sub.s       $f16, $f4, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x15178308: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1517830C: nop

    // 0x15178310: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x15178314: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15178318: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1517831C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15178320: nop

    // 0x15178324: bc1f        L_15178358
    if (!c1cs) {
        // 0x15178328: nop
    
            goto L_15178358;
    }
    // 0x15178328: nop

    // 0x1517832C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15178330: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15178334: nop

    // 0x15178338: div.s       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1517833C: mul.s       $f8, $f14, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x15178340: nop

    // 0x15178344: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15178348: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x1517834C: add.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x15178350: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x15178354: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
L_15178358:
    // 0x15178358: lh          $t2, 0x20($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X20);
    // 0x1517835C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15178360: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x15178364: nop

    // 0x15178368: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1517836C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15178370: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x15178374: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x15178378: lh          $t3, 0x24($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X24);
    // 0x1517837C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x15178380: nop

    // 0x15178384: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15178388: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1517838C: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x15178390: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x15178394: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x15178398: bne         $v1, $zero, L_151783F0
    if (ctx->r3 != 0) {
        // 0x1517839C: addiu       $a0, $sp, 0x4C
        ctx->r4 = ADD32(ctx->r29, 0X4C);
            goto L_151783F0;
    }
    // 0x1517839C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x151783A0: sw          $a1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r5;
    // 0x151783A4: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x151783A8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x151783AC: jal         0x150490A8
    // 0x151783B0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_150490A8(rdram, ctx);
        goto after_0;
    // 0x151783B0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_0:
    // 0x151783B4: jal         0x150ADA20
    // 0x151783B8: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151783B8: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    after_1:
    // 0x151783BC: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x151783C0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x151783C4: andi        $t4, $v0, 0x1F
    ctx->r12 = ctx->r2 & 0X1F;
    // 0x151783C8: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x151783CC: addiu       $a0, $a0, -0xF
    ctx->r4 = ADD32(ctx->r4, -0XF);
    // 0x151783D0: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x151783D4: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x151783D8: bne         $a3, $zero, L_151783E8
    if (ctx->r7 != 0) {
        // 0x151783DC: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_151783E8;
    }
    // 0x151783DC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x151783E0: b           L_15178400
    // 0x151783E4: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
        goto L_15178400;
    // 0x151783E4: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
L_151783E8:
    // 0x151783E8: b           L_15178400
    // 0x151783EC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_15178400;
    // 0x151783EC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_151783F0:
    // 0x151783F0: sra         $a0, $v0, 4
    ctx->r4 = S32(SIGNED(ctx->r2) >> 4);
    // 0x151783F4: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x151783F8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x151783FC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
L_15178400:
    // 0x15178400: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15178404: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x15178408: or          $t8, $t7, $v1
    ctx->r24 = ctx->r15 | ctx->r3;
    // 0x1517840C: sw          $t8, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r24;
    // 0x15178410: beq         $a3, $zero, L_15178420
    if (ctx->r7 == 0) {
        // 0x15178414: lbu         $v0, 0x3B($a1)
        ctx->r2 = MEM_BU(ctx->r5, 0X3B);
            goto L_15178420;
    }
    // 0x15178414: lbu         $v0, 0x3B($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3B);
    // 0x15178418: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x1517841C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_15178420:
    // 0x15178420: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15178424: beql        $at, $zero, L_15178438
    if (ctx->r1 == 0) {
        // 0x15178428: negu        $v1, $v0
        ctx->r3 = SUB32(0, ctx->r2);
            goto L_15178438;
    }
    goto skip_1;
    // 0x15178428: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
    skip_1:
    // 0x1517842C: b           L_15178438
    // 0x15178430: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_15178438;
    // 0x15178430: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15178434: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_15178438:
    // 0x15178438: subu        $v0, $a0, $a2
    ctx->r2 = SUB32(ctx->r4, ctx->r6);
    // 0x1517843C: bgezl       $v0, L_15178450
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15178440: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15178450;
    }
    goto skip_2;
    // 0x15178440: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    skip_2:
    // 0x15178444: b           L_15178450
    // 0x15178448: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
        goto L_15178450;
    // 0x15178448: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
    // 0x1517844C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_15178450:
    // 0x15178450: slti        $at, $a0, 0x80
    ctx->r1 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x15178454: bnel        $at, $zero, L_15178464
    if (ctx->r1 != 0) {
        // 0x15178458: addu        $a2, $a2, $v1
        ctx->r6 = ADD32(ctx->r6, ctx->r3);
            goto L_15178464;
    }
    goto skip_3;
    // 0x15178458: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    skip_3:
    // 0x1517845C: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x15178460: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
L_15178464:
    // 0x15178464: bgezl       $a2, L_15178478
    if (SIGNED(ctx->r6) >= 0) {
        // 0x15178468: slti        $at, $a2, 0x100
        ctx->r1 = SIGNED(ctx->r6) < 0X100 ? 1 : 0;
            goto L_15178478;
    }
    goto skip_4;
    // 0x15178468: slti        $at, $a2, 0x100
    ctx->r1 = SIGNED(ctx->r6) < 0X100 ? 1 : 0;
    skip_4:
    // 0x1517846C: b           L_15178484
    // 0x15178470: addiu       $a2, $a2, 0x100
    ctx->r6 = ADD32(ctx->r6, 0X100);
        goto L_15178484;
    // 0x15178470: addiu       $a2, $a2, 0x100
    ctx->r6 = ADD32(ctx->r6, 0X100);
    // 0x15178474: slti        $at, $a2, 0x100
    ctx->r1 = SIGNED(ctx->r6) < 0X100 ? 1 : 0;
L_15178478:
    // 0x15178478: bnel        $at, $zero, L_15178488
    if (ctx->r1 != 0) {
        // 0x1517847C: lh          $t1, 0x32($t0)
        ctx->r9 = MEM_H(ctx->r8, 0X32);
            goto L_15178488;
    }
    goto skip_5;
    // 0x1517847C: lh          $t1, 0x32($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X32);
    skip_5:
    // 0x15178480: addiu       $a2, $a2, -0x100
    ctx->r6 = ADD32(ctx->r6, -0X100);
L_15178484:
    // 0x15178484: lh          $t1, 0x32($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X32);
L_15178488:
    // 0x15178488: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    // 0x1517848C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x15178490: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x15178494: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x15178498: sw          $a1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r5;
    // 0x1517849C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151784A0: jal         0x15048A40
    // 0x151784A4: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    func_15048A40(rdram, ctx);
        goto after_2;
    // 0x151784A4: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x151784A8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x151784AC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x151784B0: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151784B4: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151784B8: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x151784BC: jal         0x150489B0
    // 0x151784C0: sw          $t3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r11;
    func_150489B0(rdram, ctx);
        goto after_3;
    // 0x151784C0: sw          $t3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r11;
    after_3:
    // 0x151784C4: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x151784C8: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x151784CC: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x151784D0: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x151784D4: sh          $t4, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r12;
    // 0x151784D8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x151784DC: sh          $a2, 0x2A($a1)
    MEM_H(0X2A, ctx->r5) = ctx->r6;
    // 0x151784E0: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x151784E4: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151784E8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x151784EC: jal         0x150ADA20
    // 0x151784F0: sh          $t6, 0x28($a1)
    MEM_H(0X28, ctx->r5) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151784F0: sh          $t6, 0x28($a1)
    MEM_H(0X28, ctx->r5) = ctx->r14;
    after_4:
    // 0x151784F4: andi        $v1, $v0, 0x7F
    ctx->r3 = ctx->r2 & 0X7F;
    // 0x151784F8: addiu       $v1, $v1, 0x64
    ctx->r3 = ADD32(ctx->r3, 0X64);
    // 0x151784FC: jal         0x150ADA20
    // 0x15178500: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15178500: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    after_5:
    // 0x15178504: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15178508: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1517850C: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15178510: andi        $t7, $v0, 0x3F
    ctx->r15 = ctx->r2 & 0X3F;
    // 0x15178514: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x15178518: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1517851C: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x15178520: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x15178524: bgez        $t7, L_1517853C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x15178528: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1517853C;
    }
    // 0x15178528: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1517852C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15178530: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15178534: nop

    // 0x15178538: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_1517853C:
    // 0x1517853C: lh          $t8, 0x22($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X22);
    // 0x15178540: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15178544: negu        $t9, $v1
    ctx->r25 = SUB32(0, ctx->r3);
    // 0x15178548: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x1517854C: nop

    // 0x15178550: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15178554: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x15178558: nop

    // 0x1517855C: bc1fl       L_15178570
    if (!c1cs) {
        // 0x15178560: sh          $v1, 0x32($a1)
        MEM_H(0X32, ctx->r5) = ctx->r3;
            goto L_15178570;
    }
    goto skip_6;
    // 0x15178560: sh          $v1, 0x32($a1)
    MEM_H(0X32, ctx->r5) = ctx->r3;
    skip_6:
    // 0x15178564: b           L_15178570
    // 0x15178568: sh          $t9, 0x32($a1)
    MEM_H(0X32, ctx->r5) = ctx->r25;
        goto L_15178570;
    // 0x15178568: sh          $t9, 0x32($a1)
    MEM_H(0X32, ctx->r5) = ctx->r25;
    // 0x1517856C: sh          $v1, 0x32($a1)
    MEM_H(0X32, ctx->r5) = ctx->r3;
L_15178570:
    // 0x15178570: lh          $v0, 0x30($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X30);
    // 0x15178574: addiu       $t1, $zero, 0x400
    ctx->r9 = ADD32(0, 0X400);
    // 0x15178578: slti        $at, $v0, 0x401
    ctx->r1 = SIGNED(ctx->r2) < 0X401 ? 1 : 0;
    // 0x1517857C: bnel        $at, $zero, L_15178590
    if (ctx->r1 != 0) {
        // 0x15178580: slti        $at, $v0, -0x400
        ctx->r1 = SIGNED(ctx->r2) < -0X400 ? 1 : 0;
            goto L_15178590;
    }
    goto skip_7;
    // 0x15178580: slti        $at, $v0, -0x400
    ctx->r1 = SIGNED(ctx->r2) < -0X400 ? 1 : 0;
    skip_7:
    // 0x15178584: b           L_1517859C
    // 0x15178588: sh          $t1, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r9;
        goto L_1517859C;
    // 0x15178588: sh          $t1, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r9;
    // 0x1517858C: slti        $at, $v0, -0x400
    ctx->r1 = SIGNED(ctx->r2) < -0X400 ? 1 : 0;
L_15178590:
    // 0x15178590: beq         $at, $zero, L_1517859C
    if (ctx->r1 == 0) {
        // 0x15178594: addiu       $t2, $zero, -0x400
        ctx->r10 = ADD32(0, -0X400);
            goto L_1517859C;
    }
    // 0x15178594: addiu       $t2, $zero, -0x400
    ctx->r10 = ADD32(0, -0X400);
    // 0x15178598: sh          $t2, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r10;
L_1517859C:
    // 0x1517859C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151785A0: lw          $v0, -0x4010($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4010);
    // 0x151785A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151785A8: lwc1        $f6, 0x71E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X71E0);
    // 0x151785AC: lwc1        $f4, 0x380($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X380);
    // 0x151785B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151785B4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151785B8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151785BC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x151785C0: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x151785C4: nop

    // 0x151785C8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x151785CC: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x151785D0: nop

    // 0x151785D4: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x151785D8: beql        $a0, $zero, L_15178628
    if (ctx->r4 == 0) {
        // 0x151785DC: mfc1        $a0, $f10
        ctx->r4 = (int32_t)ctx->f10.u32l;
            goto L_15178628;
    }
    goto skip_8;
    // 0x151785DC: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    skip_8:
    // 0x151785E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151785E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151785E8: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151785EC: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x151785F0: nop

    // 0x151785F4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x151785F8: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x151785FC: nop

    // 0x15178600: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x15178604: bne         $a0, $zero, L_1517861C
    if (ctx->r4 != 0) {
        // 0x15178608: nop
    
            goto L_1517861C;
    }
    // 0x15178608: nop

    // 0x1517860C: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x15178610: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15178614: b           L_15178634
    // 0x15178618: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_15178634;
    // 0x15178618: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_1517861C:
    // 0x1517861C: b           L_15178634
    // 0x15178620: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_15178634;
    // 0x15178620: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x15178624: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
L_15178628:
    // 0x15178628: nop

    // 0x1517862C: bltz        $a0, L_1517861C
    if (SIGNED(ctx->r4) < 0) {
        // 0x15178630: nop
    
            goto L_1517861C;
    }
    // 0x15178630: nop

L_15178634:
    // 0x15178634: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x15178638: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x1517863C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x15178640: sb          $t4, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r12;
    // 0x15178644: jal         0x15048A40
    // 0x15178648: sw          $a1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r5;
    func_15048A40(rdram, ctx);
        goto after_6;
    // 0x15178648: sw          $a1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r5;
    after_6:
    // 0x1517864C: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x15178650: jal         0x150489B0
    // 0x15178654: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_150489B0(rdram, ctx);
        goto after_7;
    // 0x15178654: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x15178658: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x1517865C: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15178660: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x15178664: lh          $t5, 0x26($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X26);
    // 0x15178668: lh          $t6, 0x28($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X28);
    // 0x1517866C: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x15178670: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x15178674: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15178678: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1517867C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15178680: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15178684: nop

    // 0x15178688: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1517868C: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x15178690: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15178694: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x15178698: nop

    // 0x1517869C: bltz        $v0, L_151786AC
    if (SIGNED(ctx->r2) < 0) {
        // 0x151786A0: nop
    
            goto L_151786AC;
    }
    // 0x151786A0: nop

    // 0x151786A4: b           L_151786B4
    // 0x151786A8: sh          $zero, 0x44($a1)
    MEM_H(0X44, ctx->r5) = 0;
        goto L_151786B4;
    // 0x151786A8: sh          $zero, 0x44($a1)
    MEM_H(0X44, ctx->r5) = 0;
L_151786AC:
    // 0x151786AC: sh          $t8, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r24;
    // 0x151786B0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_151786B4:
    // 0x151786B4: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x151786B8: bnel        $at, $zero, L_151786CC
    if (ctx->r1 != 0) {
        // 0x151786BC: slti        $at, $v0, 0x101
        ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
            goto L_151786CC;
    }
    goto skip_9;
    // 0x151786BC: slti        $at, $v0, 0x101
    ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    skip_9:
    // 0x151786C0: b           L_15178724
    // 0x151786C4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_15178724;
    // 0x151786C4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x151786C8: slti        $at, $v0, 0x101
    ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
L_151786CC:
    // 0x151786CC: bnel        $at, $zero, L_151786E0
    if (ctx->r1 != 0) {
        // 0x151786D0: lh          $t9, 0x26($a1)
        ctx->r25 = MEM_H(ctx->r5, 0X26);
            goto L_151786E0;
    }
    goto skip_10;
    // 0x151786D0: lh          $t9, 0x26($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X26);
    skip_10:
    // 0x151786D4: b           L_15178724
    // 0x151786D8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_15178724;
    // 0x151786D8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x151786DC: lh          $t9, 0x26($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X26);
L_151786E0:
    // 0x151786E0: lh          $t1, 0x28($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X28);
    // 0x151786E4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x151786E8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x151786EC: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151786F0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151786F4: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151786F8: nop

    // 0x151786FC: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15178700: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15178704: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15178708: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x1517870C: nop

    // 0x15178710: bltz        $v0, L_15178720
    if (SIGNED(ctx->r2) < 0) {
        // 0x15178714: nop
    
            goto L_15178720;
    }
    // 0x15178714: nop

    // 0x15178718: b           L_15178724
    // 0x1517871C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_15178724;
    // 0x1517871C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_15178720:
    // 0x15178720: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_15178724:
    // 0x15178724: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x15178728: lh          $t5, 0x1C($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X1C);
    // 0x1517872C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x15178730: lw          $t4, -0x35B4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X35B4);
    // 0x15178734: xori        $t6, $t5, 0x100
    ctx->r14 = ctx->r13 ^ 0X100;
    // 0x15178738: sh          $t6, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r14;
    // 0x1517873C: sw          $t4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r12;
    // 0x15178740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15178744: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x15178748: jr          $ra
    // 0x1517874C: nop

    return;
    return;
    // 0x1517874C: nop

;}
RECOMP_FUNC void func_1506EE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506EE38: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506EE3C: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506EE40: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506EE44: lw          $t7, 0x1580($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1580);
    // 0x1506EE48: lw          $t6, 0x25C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X25C);
    // 0x1506EE4C: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x1506EE50: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x1506EE54: sw          $t9, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r25;
    // 0x1506EE58: jr          $ra
    // 0x1506EE5C: nop

    return;
    return;
    // 0x1506EE5C: nop

;}
RECOMP_FUNC void func_151ABD54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151ABD54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151ABD58: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151ABD5C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151ABD60: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151ABD64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151ABD68: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151ABD6C: bne         $a2, $zero, L_151ABDA8
    if (ctx->r6 != 0) {
        // 0x151ABD70: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_151ABDA8;
    }
    // 0x151ABD70: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151ABD74: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x151ABD78: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x151ABD7C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x151ABD80: beq         $t7, $t8, L_151ABD98
    if (ctx->r15 == ctx->r24) {
        // 0x151ABD84: nop
    
            goto L_151ABD98;
    }
    // 0x151ABD84: nop

    // 0x151ABD88: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x151ABD8C: lbu         $t0, 0x4($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X4);
    // 0x151ABD90: bnel        $t9, $t0, L_151ABDF4
    if (ctx->r25 != ctx->r8) {
        // 0x151ABD94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151ABDF4;
    }
    goto skip_0;
    // 0x151ABD94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_151ABD98:
    // 0x151ABD98: jal         0x1516972C
    // 0x151ABD9C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151ABD9C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x151ABDA0: b           L_151ABDF4
    // 0x151ABDA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151ABDF4;
    // 0x151ABDA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151ABDA8:
    // 0x151ABDA8: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x151ABDAC: bne         $v0, $at, L_151ABDF0
    if (ctx->r2 != ctx->r1) {
        // 0x151ABDB0: addiu       $v0, $a3, 0x28
        ctx->r2 = ADD32(ctx->r7, 0X28);
            goto L_151ABDF0;
    }
    // 0x151ABDB0: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x151ABDB4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x151ABDB8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151ABDBC: bnel        $v1, $a0, L_151ABDDC
    if (ctx->r3 != ctx->r4) {
        // 0x151ABDC0: lw          $t3, 0x4($a1)
        ctx->r11 = MEM_W(ctx->r5, 0X4);
            goto L_151ABDDC;
    }
    goto skip_1;
    // 0x151ABDC0: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    skip_1:
    // 0x151ABDC4: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x151ABDC8: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x151ABDCC: lbu         $t2, 0x9($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X9);
    // 0x151ABDD0: b           L_151ABDF0
    // 0x151ABDD4: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
        goto L_151ABDF0;
    // 0x151ABDD4: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
    // 0x151ABDD8: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
L_151ABDDC:
    // 0x151ABDDC: bnel        $t3, $a0, L_151ABDF4
    if (ctx->r11 != ctx->r4) {
        // 0x151ABDE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151ABDF4;
    }
    goto skip_2;
    // 0x151ABDE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x151ABDE4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x151ABDE8: lbu         $t4, 0x8($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X8);
    // 0x151ABDEC: sb          $t4, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r12;
L_151ABDF0:
    // 0x151ABDF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151ABDF4:
    // 0x151ABDF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151ABDF8: jr          $ra
    // 0x151ABDFC: nop

    return;
    return;
    // 0x151ABDFC: nop

;}
RECOMP_FUNC void func_151BD43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BD43C: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x151BD440: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x151BD444: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x151BD448: lw          $s0, 0xCC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XCC);
    // 0x151BD44C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151BD450: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151BD454: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x151BD458: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x151BD45C: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x151BD460: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x151BD464: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151BD468: lui         $t0, 0x20
    ctx->r8 = S32(0X20 << 16);
    // 0x151BD46C: lbu         $t6, 0x74($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X74);
    // 0x151BD470: addiu       $t8, $zero, 0x29
    ctx->r24 = ADD32(0, 0X29);
    // 0x151BD474: addiu       $t9, $zero, 0xE03
    ctx->r25 = ADD32(0, 0XE03);
    // 0x151BD478: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x151BD47C: beq         $t7, $at, L_151BD73C
    if (ctx->r15 == ctx->r1) {
        // 0x151BD480: ori         $t0, $t0, 0x5
        ctx->r8 = ctx->r8 | 0X5;
            goto L_151BD73C;
    }
    // 0x151BD480: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x151BD484: sb          $t8, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r24;
    // 0x151BD488: sh          $t9, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r25;
    // 0x151BD48C: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x151BD490: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x151BD494: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x151BD498: jal         0x150ADA68
    // 0x151BD49C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151BD49C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    after_0:
    // 0x151BD4A0: lui         $at, 0x437B
    ctx->r1 = S32(0X437B << 16);
    // 0x151BD4A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BD4A8: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x151BD4AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151BD4B0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151BD4B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD4B8: lwc1        $f16, -0x57AC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X57AC);
    // 0x151BD4BC: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x151BD4C0: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x151BD4C4: sh          $t1, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r9;
    // 0x151BD4C8: sh          $t2, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r10;
    // 0x151BD4CC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151BD4D0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151BD4D4: jal         0x150ADA20
    // 0x151BD4D8: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151BD4D8: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x151BD4DC: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x151BD4E0: beq         $t3, $zero, L_151BD4F0
    if (ctx->r11 == 0) {
        // 0x151BD4E4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151BD4F0;
    }
    // 0x151BD4E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151BD4E8: b           L_151BD4F0
    // 0x151BD4EC: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_151BD4F0;
    // 0x151BD4EC: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_151BD4F0:
    // 0x151BD4F0: jal         0x150ADA20
    // 0x151BD4F4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151BD4F4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_2:
    // 0x151BD4F8: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x151BD4FC: beq         $t4, $zero, L_151BD50C
    if (ctx->r12 == 0) {
        // 0x151BD500: lw          $v1, 0x2C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X2C);
            goto L_151BD50C;
    }
    // 0x151BD500: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x151BD504: b           L_151BD510
    // 0x151BD508: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_151BD510;
    // 0x151BD508: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_151BD50C:
    // 0x151BD50C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151BD510:
    // 0x151BD510: ori         $t5, $v0, 0x7
    ctx->r13 = ctx->r2 | 0X7;
    // 0x151BD514: or          $t1, $t5, $v1
    ctx->r9 = ctx->r13 | ctx->r3;
    // 0x151BD518: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD51C: lwc1        $f4, -0x57A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X57A8);
    // 0x151BD520: ori         $t2, $t1, 0xDE00
    ctx->r10 = ctx->r9 | 0XDE00;
    // 0x151BD524: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x151BD528: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x151BD52C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151BD530: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD534: lwc1        $f6, -0x57A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X57A4);
    // 0x151BD538: sw          $t2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r10;
    // 0x151BD53C: sb          $t3, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r11;
    // 0x151BD540: sb          $t4, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r12;
    // 0x151BD544: sb          $t5, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r13;
    // 0x151BD548: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x151BD54C: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x151BD550: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x151BD554: addiu       $t9, $zero, 0xDD
    ctx->r25 = ADD32(0, 0XDD);
    // 0x151BD558: addiu       $t0, $zero, 0xD3
    ctx->r8 = ADD32(0, 0XD3);
    // 0x151BD55C: addiu       $t1, $zero, 0xCD
    ctx->r9 = ADD32(0, 0XCD);
    // 0x151BD560: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151BD564: addiu       $t3, $zero, 0x57
    ctx->r11 = ADD32(0, 0X57);
    // 0x151BD568: addiu       $t4, $zero, 0x55
    ctx->r12 = ADD32(0, 0X55);
    // 0x151BD56C: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x151BD570: sb          $t6, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r14;
    // 0x151BD574: sb          $t7, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r15;
    // 0x151BD578: sh          $t8, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r24;
    // 0x151BD57C: sb          $t9, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r25;
    // 0x151BD580: sb          $t0, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r8;
    // 0x151BD584: sb          $t1, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r9;
    // 0x151BD588: sb          $t2, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r10;
    // 0x151BD58C: sb          $t3, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r11;
    // 0x151BD590: sb          $t4, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r12;
    // 0x151BD594: sb          $t5, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r13;
    // 0x151BD598: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x151BD59C: jal         0x150ADA20
    // 0x151BD5A0: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151BD5A0: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x151BD5A4: addiu       $at, $zero, 0x9C
    ctx->r1 = ADD32(0, 0X9C);
    // 0x151BD5A8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151BD5AC: mfhi        $t6
    ctx->r14 = hi;
    // 0x151BD5B0: addiu       $t7, $t6, 0x64
    ctx->r15 = ADD32(ctx->r14, 0X64);
    // 0x151BD5B4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151BD5B8: sb          $t7, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r15;
    // 0x151BD5BC: jal         0x150ADA20
    // 0x151BD5C0: sb          $t8, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151BD5C0: sb          $t8, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r24;
    after_4:
    // 0x151BD5C4: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x151BD5C8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151BD5CC: mfhi        $t9
    ctx->r25 = hi;
    // 0x151BD5D0: addiu       $t0, $t9, 0x19
    ctx->r8 = ADD32(ctx->r25, 0X19);
    // 0x151BD5D4: jal         0x150ADA68
    // 0x151BD5D8: sh          $t0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r8;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x151BD5D8: sh          $t0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r8;
    after_5:
    // 0x151BD5DC: lui         $at, 0x4254
    ctx->r1 = S32(0X4254 << 16);
    // 0x151BD5E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151BD5E4: lui         $at, 0x4244
    ctx->r1 = S32(0X4244 << 16);
    // 0x151BD5E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151BD5EC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151BD5F0: lw          $v0, 0xBC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XBC);
    // 0x151BD5F4: lwc1        $f2, 0xC8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x151BD5F8: addiu       $t7, $zero, 0x13
    ctx->r15 = ADD32(0, 0X13);
    // 0x151BD5FC: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x151BD600: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151BD604: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x151BD608: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151BD60C: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x151BD610: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x151BD614: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151BD618: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151BD61C: lwc1        $f10, 0x74($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X74);
    // 0x151BD620: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151BD624: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151BD628: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x151BD62C: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x151BD630: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151BD634: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x151BD638: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x151BD63C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151BD640: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x151BD644: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x151BD648: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151BD64C: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x151BD650: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x151BD654: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151BD658: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x151BD65C: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x151BD660: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151BD664: lwc1        $f6, 0x14($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X14);
    // 0x151BD668: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151BD66C: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x151BD670: lw          $t2, 0x1C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1C);
    // 0x151BD674: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x151BD678: lwc1        $f6, 0x18($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X18);
    // 0x151BD67C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151BD680: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x151BD684: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
    // 0x151BD688: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x151BD68C: lwc1        $f6, 0x1C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x151BD690: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151BD694: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151BD698: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151BD69C: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x151BD6A0: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151BD6A4: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151BD6A8: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151BD6AC: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151BD6B0: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x151BD6B4: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151BD6B8: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151BD6BC: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x151BD6C0: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151BD6C4: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x151BD6C8: lw          $t4, 0x1C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1C);
    // 0x151BD6CC: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x151BD6D0: lw          $t5, 0x1C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1C);
    // 0x151BD6D4: lbu         $t6, 0x3B($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X3B);
    // 0x151BD6D8: sb          $t7, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r15;
    // 0x151BD6DC: sb          $t6, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r14;
    // 0x151BD6E0: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x151BD6E4: lwc1        $f16, 0x14($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X14);
    // 0x151BD6E8: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x151BD6EC: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    // 0x151BD6F0: lwc1        $f4, 0x18($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X18);
    // 0x151BD6F4: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x151BD6F8: lw          $t0, 0x1C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1C);
    // 0x151BD6FC: lwc1        $f18, 0x1C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x151BD700: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x151BD704: lbu         $t1, 0x1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1);
    // 0x151BD708: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x151BD70C: jal         0x15130374
    // 0x151BD710: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_15130374(rdram, ctx);
        goto after_6;
    // 0x151BD710: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_6:
    // 0x151BD714: beq         $v0, $zero, L_151BD73C
    if (ctx->r2 == 0) {
        // 0x151BD718: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151BD73C;
    }
    // 0x151BD718: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151BD71C: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x151BD720: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x151BD724: jal         0x10022EC0
    // 0x151BD728: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x151BD728: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_7:
    // 0x151BD72C: addiu       $a0, $s0, 0xB0
    ctx->r4 = ADD32(ctx->r16, 0XB0);
    // 0x151BD730: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x151BD734: jal         0x10022EC0
    // 0x151BD738: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x151BD738: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
L_151BD73C:
    // 0x151BD73C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151BD740: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x151BD744: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x151BD748: jr          $ra
    // 0x151BD74C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x151BD74C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_1510E634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510E634: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1510E638: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1510E63C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1510E640: lui         $t6, 0xDA38
    ctx->r14 = S32(0XDA38 << 16);
    // 0x1510E644: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x1510E648: addiu       $t7, $t7, -0x6B90
    ctx->r15 = ADD32(ctx->r15, -0X6B90);
    // 0x1510E64C: ori         $t6, $t6, 0x3
    ctx->r14 = ctx->r14 | 0X3;
    // 0x1510E650: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x1510E654: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x1510E658: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510E65C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1510E660: jr          $ra
    // 0x1510E664: nop

    return;
    return;
    // 0x1510E664: nop

;}
RECOMP_FUNC void func_150F695C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F695C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x150F6960: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150F6964: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150F6968: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x150F696C: addiu       $t7, $sp, 0xA4
    ctx->r15 = ADD32(ctx->r29, 0XA4);
    // 0x150F6970: addiu       $t8, $sp, 0x98
    ctx->r24 = ADD32(ctx->r29, 0X98);
    // 0x150F6974: addiu       $t9, $sp, 0x8C
    ctx->r25 = ADD32(ctx->r29, 0X8C);
    // 0x150F6978: addiu       $t0, $sp, 0x88
    ctx->r8 = ADD32(ctx->r29, 0X88);
    // 0x150F697C: addiu       $t1, $sp, 0x86
    ctx->r9 = ADD32(ctx->r29, 0X86);
    // 0x150F6980: addiu       $t2, $sp, 0x85
    ctx->r10 = ADD32(ctx->r29, 0X85);
    // 0x150F6984: addiu       $t3, $sp, 0x80
    ctx->r11 = ADD32(ctx->r29, 0X80);
    // 0x150F6988: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x150F698C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x150F6990: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x150F6994: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x150F6998: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x150F699C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x150F69A0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150F69A4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150F69A8: jal         0x15137F30
    // 0x150F69AC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_15137F30(rdram, ctx);
        goto after_0;
    // 0x150F69AC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_0:
    // 0x150F69B0: jal         0x150ADA68
    // 0x150F69B4: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150F69B4: nop

    after_1:
    // 0x150F69B8: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x150F69BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F69C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F69C4: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150F69C8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150F69CC: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x150F69D0: jal         0x150ADA68
    // 0x150F69D4: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150F69D4: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x150F69D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F69DC: lwc1        $f4, 0x1B74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1B74);
    // 0x150F69E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150F69E4: lw          $t5, 0xC4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC4);
    // 0x150F69E8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x150F69EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F69F0: bc1fl       L_150F6A00
    if (!c1cs) {
        // 0x150F69F4: andi        $t4, $v0, 0xFF
        ctx->r12 = ctx->r2 & 0XFF;
            goto L_150F6A00;
    }
    goto skip_0;
    // 0x150F69F4: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    skip_0:
    // 0x150F69F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F69FC: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
L_150F6A00:
    // 0x150F6A00: beq         $t4, $zero, L_150F6A20
    if (ctx->r12 == 0) {
        // 0x150F6A04: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_150F6A20;
    }
    // 0x150F6A04: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x150F6A08: lw          $a1, 0x1C($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X1C);
    // 0x150F6A0C: sb          $v1, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r3;
    // 0x150F6A10: jal         0x1504715C
    // 0x150F6A14: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    func_1504715C(rdram, ctx);
        goto after_3;
    // 0x150F6A14: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_3:
    // 0x150F6A18: b           L_150F6A38
    // 0x150F6A1C: lbu         $v1, 0x5B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X5B);
        goto L_150F6A38;
    // 0x150F6A1C: lbu         $v1, 0x5B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X5B);
L_150F6A20:
    // 0x150F6A20: lwc1        $f6, 0x1B78($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1B78);
    // 0x150F6A24: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x150F6A28: sb          $zero, 0x78($sp)
    MEM_B(0X78, ctx->r29) = 0;
    // 0x150F6A2C: sb          $zero, 0x79($sp)
    MEM_B(0X79, ctx->r29) = 0;
    // 0x150F6A30: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x150F6A34: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
L_150F6A38:
    // 0x150F6A38: beq         $v1, $zero, L_150F6A74
    if (ctx->r3 == 0) {
        // 0x150F6A3C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150F6A74;
    }
    // 0x150F6A3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150F6A40: jal         0x150ADA68
    // 0x150F6A44: sb          $v1, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r3;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150F6A44: sb          $v1, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r3;
    after_4:
    // 0x150F6A48: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150F6A4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F6A50: lbu         $v1, 0x5B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X5B);
    // 0x150F6A54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150F6A58: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x150F6A5C: nop

    // 0x150F6A60: bc1f        L_150F6A74
    if (!c1cs) {
        // 0x150F6A64: nop
    
            goto L_150F6A74;
    }
    // 0x150F6A64: nop

    // 0x150F6A68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F6A6C: b           L_150F6A74
    // 0x150F6A70: nop

        goto L_150F6A74;
    // 0x150F6A70: nop

L_150F6A74:
    // 0x150F6A74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F6A78: lwc1        $f0, 0x1B7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1B7C);
    // 0x150F6A7C: lh          $t6, 0x86($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X86);
    // 0x150F6A80: lbu         $t7, 0x85($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X85);
    // 0x150F6A84: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150F6A88: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x150F6A8C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150F6A90: addiu       $t9, $sp, 0x5C
    ctx->r25 = ADD32(ctx->r29, 0X5C);
    // 0x150F6A94: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150F6A98: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x150F6A9C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x150F6AA0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x150F6AA4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x150F6AA8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x150F6AAC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150F6AB0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x150F6AB4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150F6AB8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150F6ABC: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x150F6AC0: lbu         $t2, 0xC($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XC);
    // 0x150F6AC4: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
    // 0x150F6AC8: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x150F6ACC: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x150F6AD0: lbu         $t4, 0x1($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1);
    // 0x150F6AD4: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x150F6AD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150F6ADC: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x150F6AE0: jal         0x151D9014
    // 0x150F6AE4: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    func_151D9014(rdram, ctx);
        goto after_5;
    // 0x150F6AE4: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    after_5:
    // 0x150F6AE8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150F6AEC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x150F6AF0: jr          $ra
    // 0x150F6AF4: nop

    return;
    return;
    // 0x150F6AF4: nop

;}
RECOMP_FUNC void func_150497E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150497E0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x150497E4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x150497E8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x150497EC: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x150497F0: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x150497F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150497F8: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150497FC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x15049800: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15049804: mul.s       $f14, $f4, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15049808: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1504980C: lui         $at, 0xBFC0
    ctx->r1 = S32(0XBFC0 << 16);
    // 0x15049810: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15049814: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x15049818: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1504981C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15049820: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15049824: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15049828: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1504982C: lui         $at, 0xC020
    ctx->r1 = S32(0XC020 << 16);
    // 0x15049830: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x15049834: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15049838: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x1504983C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15049840: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x15049844: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x15049848: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1504984C: add.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x15049850: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15049854: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15049858: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x1504985C: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15049860: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x15049864: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15049868: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1504986C: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15049870: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x15049874: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x15049878: add.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x1504987C: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15049880: swc1        $f6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f6.u32l;
    // 0x15049884: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15049888: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1504988C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15049890: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15049894: add.s       $f2, $f8, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x15049898: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x1504989C: jr          $ra
    // 0x150498A0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x150498A0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_150F644C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F644C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F6450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F6454: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F6458: jal         0x150F6400
    // 0x150F645C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F6400(rdram, ctx);
        goto after_0;
    // 0x150F645C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F6460: jal         0x1513CAA0
    // 0x150F6464: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1513CAA0(rdram, ctx);
        goto after_1;
    // 0x150F6464: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F6468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F646C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F6470: jr          $ra
    // 0x150F6474: nop

    return;
    return;
    // 0x150F6474: nop

;}
RECOMP_FUNC void func_150C3D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C3D5C: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x150C3D60: sw          $s0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r16;
    // 0x150C3D64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C3D68: sw          $ra, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r31;
    // 0x150C3D6C: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C3D70: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C3D74: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C3D78: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C3D7C: addiu       $t4, $zero, 0x578
    ctx->r12 = ADD32(0, 0X578);
    // 0x150C3D80: addiu       $t5, $zero, 0x500
    ctx->r13 = ADD32(0, 0X500);
    // 0x150C3D84: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150C3D88: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150C3D8C: addiu       $t6, $zero, 0x320
    ctx->r14 = ADD32(0, 0X320);
    // 0x150C3D90: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150C3D94: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150C3D98: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x150C3D9C: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150C3DA0: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x150C3DA4: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x150C3DA8: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150C3DAC: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x150C3DB0: addiu       $t7, $zero, 0x4B0
    ctx->r15 = ADD32(0, 0X4B0);
    // 0x150C3DB4: addiu       $t8, $zero, 0x200
    ctx->r24 = ADD32(0, 0X200);
    // 0x150C3DB8: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x150C3DBC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150C3DC0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150C3DC4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x150C3DC8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x150C3DCC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x150C3DD0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x150C3DD4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x150C3DD8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x150C3DDC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150C3DE0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150C3DE4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150C3DE8: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x150C3DEC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150C3DF0: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    // 0x150C3DF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150C3DF8: jal         0x151B9BF0
    // 0x150C3DFC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_151B9BF0(rdram, ctx);
        goto after_0;
    // 0x150C3DFC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_0:
    // 0x150C3E00: lui         $a0, 0xC234
    ctx->r4 = S32(0XC234 << 16);
    // 0x150C3E04: ori         $a0, $a0, 0x59B8
    ctx->r4 = ctx->r4 | 0X59B8;
    // 0x150C3E08: jal         0x150C3D48
    // 0x150C3E0C: sw          $a0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r4;
    func_150C3D48(rdram, ctx);
        goto after_1;
    // 0x150C3E0C: sw          $a0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r4;
    after_1:
    // 0x150C3E10: lui         $t9, 0x151F
    ctx->r25 = S32(0X151F << 16);
    // 0x150C3E14: addiu       $t9, $t9, -0xFC0
    ctx->r25 = ADD32(ctx->r25, -0XFC0);
    // 0x150C3E18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150C3E1C: jalr        $t9
    // 0x150C3E20: addiu       $a1, $sp, 0xFC
    ctx->r5 = ADD32(ctx->r29, 0XFC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x150C3E20: addiu       $a1, $sp, 0xFC
    ctx->r5 = ADD32(ctx->r29, 0XFC);
    after_2:
    // 0x150C3E24: lw          $t3, 0xFC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XFC);
    // 0x150C3E28: lui         $at, 0x330
    ctx->r1 = S32(0X330 << 16);
    // 0x150C3E2C: ori         $at, $at, 0xC820
    ctx->r1 = ctx->r1 | 0XC820;
    // 0x150C3E30: beq         $t3, $at, L_150C3E50
    if (ctx->r11 == ctx->r1) {
        // 0x150C3E34: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_150C3E50;
    }
    // 0x150C3E34: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x150C3E38: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x150C3E3C: addiu       $v0, $v0, 0x4074
    ctx->r2 = ADD32(ctx->r2, 0X4074);
    // 0x150C3E40: lui         $t4, 0x3E0
    ctx->r12 = S32(0X3E0 << 16);
    // 0x150C3E44: ori         $t4, $t4, 0x8
    ctx->r12 = ctx->r12 | 0X8;
    // 0x150C3E48: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x150C3E4C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_150C3E50:
    // 0x150C3E50: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150C3E54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C3E58: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C3E5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C3E60: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x150C3E64: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    // 0x150C3E68: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C3E6C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150C3E70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C3E74: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x150C3E78: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C3E7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C3E80: lwc1        $f18, 0x338($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X338);
    // 0x150C3E84: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x150C3E88: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x150C3E8C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150C3E90: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x150C3E94: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x150C3E98: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x150C3E9C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150C3EA0: addiu       $a1, $zero, 0xCB
    ctx->r5 = ADD32(0, 0XCB);
    // 0x150C3EA4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x150C3EA8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150C3EAC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x150C3EB0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x150C3EB4: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x150C3EB8: jal         0x15171200
    // 0x150C3EBC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    func_15171200(rdram, ctx);
        goto after_3;
    // 0x150C3EBC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x150C3EC0: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C3EC4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150C3EC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C3ECC: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C3ED0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C3ED4: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C3ED8: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x150C3EDC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150C3EE0: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x150C3EE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C3EE8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C3EEC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150C3EF0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150C3EF4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150C3EF8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150C3EFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150C3F00: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x150C3F04: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x150C3F08: jal         0x151709B4
    // 0x150C3F0C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_151709B4(rdram, ctx);
        goto after_4;
    // 0x150C3F0C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x150C3F10: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C3F14: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C3F18: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C3F1C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150C3F20: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x150C3F24: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x150C3F28: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150C3F2C: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x150C3F30: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x150C3F34: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150C3F38: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x150C3F3C: sll         $t3, $a0, 16
    ctx->r11 = S32(ctx->r4 << 16);
    // 0x150C3F40: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
    // 0x150C3F44: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x150C3F48: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x150C3F4C: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150C3F50: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x150C3F54: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150C3F58: addiu       $t0, $zero, 0x51
    ctx->r8 = ADD32(0, 0X51);
    // 0x150C3F5C: addiu       $t6, $zero, 0x51
    ctx->r14 = ADD32(0, 0X51);
    // 0x150C3F60: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x150C3F64: addiu       $t7, $zero, 0x51
    ctx->r15 = ADD32(0, 0X51);
    // 0x150C3F68: addiu       $t8, $zero, 0x51
    ctx->r24 = ADD32(0, 0X51);
    // 0x150C3F6C: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x150C3F70: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x150C3F74: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x150C3F78: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x150C3F7C: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x150C3F80: sw          $t5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r13;
    // 0x150C3F84: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
    // 0x150C3F88: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x150C3F8C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150C3F90: addiu       $t4, $zero, 0x578
    ctx->r12 = ADD32(0, 0X578);
    // 0x150C3F94: addiu       $t5, $zero, 0x190
    ctx->r13 = ADD32(0, 0X190);
    // 0x150C3F98: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150C3F9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150C3FA0: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x150C3FA4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150C3FA8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150C3FAC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150C3FB0: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x150C3FB4: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x150C3FB8: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x150C3FBC: sw          $t9, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r25;
    // 0x150C3FC0: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    // 0x150C3FC4: sw          $t7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r15;
    // 0x150C3FC8: sw          $t3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r11;
    // 0x150C3FCC: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
    // 0x150C3FD0: sw          $t0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r8;
    // 0x150C3FD4: sw          $t5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r13;
    // 0x150C3FD8: sw          $t4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r12;
    // 0x150C3FDC: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    // 0x150C3FE0: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x150C3FE4: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x150C3FE8: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x150C3FEC: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x150C3FF0: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x150C3FF4: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x150C3FF8: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x150C3FFC: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x150C4000: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x150C4004: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x150C4008: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x150C400C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x150C4010: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x150C4014: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x150C4018: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x150C401C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x150C4020: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x150C4024: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150C4028: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150C402C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150C4030: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150C4034: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150C4038: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150C403C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150C4040: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150C4044: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150C4048: jal         0x1516D99C
    // 0x150C404C: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    func_1516D99C(rdram, ctx);
        goto after_5;
    // 0x150C404C: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    after_5:
    // 0x150C4050: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x150C4054: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150C4058: sb          $t1, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = ctx->r9;
    // 0x150C405C: jal         0x150ADA20
    // 0x150C4060: sb          $t2, 0xED($sp)
    MEM_B(0XED, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150C4060: sb          $t2, 0xED($sp)
    MEM_B(0XED, ctx->r29) = ctx->r10;
    after_6:
    // 0x150C4064: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x150C4068: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150C406C: mfhi        $t9
    ctx->r25 = hi;
    // 0x150C4070: addiu       $t3, $t9, 0xA
    ctx->r11 = ADD32(ctx->r25, 0XA);
    // 0x150C4074: sh          $t3, 0xEE($sp)
    MEM_H(0XEE, ctx->r29) = ctx->r11;
    // 0x150C4078: sb          $zero, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = 0;
    // 0x150C407C: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C4080: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150C4084: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x150C4088: nop

    // 0x150C408C: sw          $t5, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r13;
    // 0x150C4090: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C4094: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150C4098: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x150C409C: nop

    // 0x150C40A0: sw          $t7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r15;
    // 0x150C40A4: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C40A8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150C40AC: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x150C40B0: jal         0x150ADA20
    // 0x150C40B4: sw          $t0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150C40B4: sw          $t0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r8;
    after_7:
    // 0x150C40B8: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x150C40BC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150C40C0: mfhi        $a2
    ctx->r6 = hi;
    // 0x150C40C4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150C40C8: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x150C40CC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150C40D0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150C40D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150C40D8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x150C40DC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x150C40E0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x150C40E4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150C40E8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150C40EC: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x150C40F0: addiu       $a0, $sp, 0xEC
    ctx->r4 = ADD32(ctx->r29, 0XEC);
    // 0x150C40F4: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    // 0x150C40F8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150C40FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150C4100: jal         0x151602C0
    // 0x150C4104: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_151602C0(rdram, ctx);
        goto after_8;
    // 0x150C4104: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_8:
    // 0x150C4108: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x150C410C: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x150C4110: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    // 0x150C4114: jr          $ra
    // 0x150C4118: nop

    return;
    return;
    // 0x150C4118: nop

    // 0x150C411C: nop

;}
RECOMP_FUNC void func_151990AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151990AC: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x151990B0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x151990B4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x151990B8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x151990BC: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x151990C0: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x151990C4: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x151990C8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x151990CC: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x151990D0: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x151990D4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x151990D8: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x151990DC: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x151990E0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x151990E4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x151990E8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x151990EC: lwc1        $f4, 0x10($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X10);
    // 0x151990F0: lw          $s4, 0x98($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X98);
    // 0x151990F4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151990F8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151990FC: lbu         $t6, 0x80($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X80);
    // 0x15199100: addiu       $t8, $t8, -0x7890
    ctx->r24 = ADD32(ctx->r24, -0X7890);
    // 0x15199104: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x15199108: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x1519910C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15199110: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15199114: sh          $t0, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r8;
    // 0x15199118: lwc1        $f8, 0x14($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X14);
    // 0x1519911C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x15199120: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x15199124: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15199128: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1519912C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15199130: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15199134: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x15199138: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1519913C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15199140: sh          $t2, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r10;
    // 0x15199144: lwc1        $f4, 0x18($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X18);
    // 0x15199148: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x1519914C: addiu       $t0, $zero, 0x12
    ctx->r8 = ADD32(0, 0X12);
    // 0x15199150: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15199154: addiu       $t1, $t1, 0x514
    ctx->r9 = ADD32(ctx->r9, 0X514);
    // 0x15199158: addiu       $t2, $zero, 0x12C
    ctx->r10 = ADD32(0, 0X12C);
    // 0x1519915C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x15199160: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x15199164: sb          $zero, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = 0;
    // 0x15199168: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
    // 0x1519916C: sb          $zero, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = 0;
    // 0x15199170: sb          $t5, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r13;
    // 0x15199174: sb          $t6, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r14;
    // 0x15199178: sb          $t7, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r15;
    // 0x1519917C: sb          $zero, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = 0;
    // 0x15199180: sb          $zero, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = 0;
    // 0x15199184: sb          $zero, 0xC6($sp)
    MEM_B(0XC6, ctx->r29) = 0;
    // 0x15199188: sb          $t8, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r24;
    // 0x1519918C: sb          $t9, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r25;
    // 0x15199190: sh          $t0, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r8;
    // 0x15199194: sh          $zero, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = 0;
    // 0x15199198: sh          $zero, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = 0;
    // 0x1519919C: sw          $t1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r9;
    // 0x151991A0: sh          $t2, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r10;
    // 0x151991A4: addiu       $s6, $sp, 0x94
    ctx->r22 = ADD32(ctx->r29, 0X94);
    // 0x151991A8: sh          $t4, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r12;
L_151991AC:
    // 0x151991AC: jal         0x150ADA68
    // 0x151991B0: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151991B0: nop

    after_0:
    // 0x151991B4: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151991B8: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151991BC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151991C0: jal         0x150ADA20
    // 0x151991C4: add.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f4.fl;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151991C4: add.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f4.fl;
    after_1:
    // 0x151991C8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151991CC: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x151991D0: jal         0x150ADA20
    // 0x151991D4: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151991D4: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    after_2:
    // 0x151991D8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x151991DC: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x151991E0: andi        $t4, $s2, 0xFF
    ctx->r12 = ctx->r18 & 0XFF;
    // 0x151991E4: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x151991E8: or          $s2, $t4, $zero
    ctx->r18 = ctx->r12 | 0;
    // 0x151991EC: jal         0x151423D8
    // 0x151991F0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x151991F0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_3:
    // 0x151991F4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x151991F8: jal         0x151423D8
    // 0x151991FC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x151991FC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_4:
    // 0x15199200: addiu       $a0, $s2, -0x40
    ctx->r4 = ADD32(ctx->r18, -0X40);
    // 0x15199204: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15199208: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x1519920C: jal         0x151423D8
    // 0x15199210: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x15199210: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_5:
    // 0x15199214: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x15199218: jal         0x151423D8
    // 0x1519921C: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x1519921C: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_6:
    // 0x15199220: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15199224: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x15199228: lwc1        $f10, 0x4($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X4);
    // 0x1519922C: mul.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x15199230: nop

    // 0x15199234: mul.s       $f8, $f12, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x15199238: nop

    // 0x1519923C: mul.s       $f4, $f2, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x15199240: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15199244: mul.s       $f8, $f12, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x15199248: lwc1        $f6, 0x8($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X8);
    // 0x1519924C: sub.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15199250: lwc1        $f10, 0x10($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X10);
    // 0x15199254: sub.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x15199258: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1519925C: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x15199260: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15199264: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x15199268: nop

    // 0x1519926C: sh          $t8, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r24;
    // 0x15199270: lwc1        $f10, 0x14($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X14);
    // 0x15199274: sub.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x15199278: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x1519927C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15199280: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x15199284: nop

    // 0x15199288: sh          $t0, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r8;
    // 0x1519928C: lwc1        $f10, 0x18($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X18);
    // 0x15199290: sub.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x15199294: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x15199298: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1519929C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x151992A0: jal         0x150ADA20
    // 0x151992A4: sh          $t2, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151992A4: sh          $t2, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r10;
    after_7:
    // 0x151992A8: lh          $t3, 0xE($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE);
    // 0x151992AC: lh          $t6, 0xC($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XC);
    // 0x151992B0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x151992B4: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x151992B8: mfhi        $t5
    ctx->r13 = hi;
    // 0x151992BC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x151992C0: bne         $t4, $zero, L_151992CC
    if (ctx->r12 != 0) {
        // 0x151992C4: nop
    
            goto L_151992CC;
    }
    // 0x151992C4: nop

    // 0x151992C8: break       7
    do_break(353997512);
L_151992CC:
    // 0x151992CC: sh          $t7, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r15;
    // 0x151992D0: jal         0x150ADA20
    // 0x151992D4: nop

    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151992D4: nop

    after_8:
    // 0x151992D8: lh          $t8, 0x12($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X12);
    // 0x151992DC: lh          $t1, 0x10($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X10);
    // 0x151992E0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x151992E4: divu        $zero, $v0, $t9
    lo = S32(U32(ctx->r2) / U32(ctx->r25)); hi = S32(U32(ctx->r2) % U32(ctx->r25));
    // 0x151992E8: mfhi        $t0
    ctx->r8 = hi;
    // 0x151992EC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x151992F0: bne         $t9, $zero, L_151992FC
    if (ctx->r25 != 0) {
        // 0x151992F4: nop
    
            goto L_151992FC;
    }
    // 0x151992F4: nop

    // 0x151992F8: break       7
    do_break(353997560);
L_151992FC:
    // 0x151992FC: sb          $t2, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r10;
    // 0x15199300: jal         0x150ADA20
    // 0x15199304: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x15199304: nop

    after_9:
    // 0x15199308: lh          $t3, 0x16($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X16);
    // 0x1519930C: lh          $t6, 0x14($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X14);
    // 0x15199310: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x15199314: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x15199318: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x1519931C: mfhi        $t5
    ctx->r13 = hi;
    // 0x15199320: addu        $t9, $t5, $t6
    ctx->r25 = ADD32(ctx->r13, ctx->r14);
    // 0x15199324: sh          $t9, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r25;
    // 0x15199328: sh          $t9, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r25;
    // 0x1519932C: lbu         $t0, 0xC($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0XC);
    // 0x15199330: bne         $t4, $zero, L_1519933C
    if (ctx->r12 != 0) {
        // 0x15199334: nop
    
            goto L_1519933C;
    }
    // 0x15199334: nop

    // 0x15199338: break       7
    do_break(353997624);
L_1519933C:
    // 0x1519933C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x15199340: lbu         $t1, 0x1($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X1);
    // 0x15199344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15199348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519934C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15199350: jal         0x15167D84
    // 0x15199354: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_15167D84(rdram, ctx);
        goto after_10;
    // 0x15199354: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_10:
    // 0x15199358: lwc1        $f10, 0x88($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X88);
    // 0x1519935C: sub.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f28.fl;
    // 0x15199360: swc1        $f4, 0x88($s4)
    MEM_W(0X88, ctx->r20) = ctx->f4.u32l;
    // 0x15199364: lwc1        $f6, 0x88($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X88);
    // 0x15199368: c.lt.s      $f28, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f28.fl < ctx->f6.fl;
    // 0x1519936C: nop

    // 0x15199370: bc1t        L_151991AC
    if (c1cs) {
        // 0x15199374: nop
    
            goto L_151991AC;
    }
    // 0x15199374: nop

    // 0x15199378: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x1519937C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x15199380: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x15199384: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x15199388: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x1519938C: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x15199390: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x15199394: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x15199398: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x1519939C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x151993A0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x151993A4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x151993A8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x151993AC: jr          $ra
    // 0x151993B0: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    return;
    // 0x151993B0: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_1506BF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BF5C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1506BF60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1506BF64: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506BF68: lw          $v1, 0x1580($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1580);
    // 0x1506BF6C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506BF70: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x1506BF74: andi        $t6, $v1, 0x7FF
    ctx->r14 = ctx->r3 & 0X7FF;
    // 0x1506BF78: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x1506BF7C: lbu         $v0, 0x4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X4);
    // 0x1506BF80: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506BF84: addiu       $at, $zero, 0x4000
    ctx->r1 = ADD32(0, 0X4000);
    // 0x1506BF88: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x1506BF8C: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x1506BF90: lw          $a0, 0x1C90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C90);
    // 0x1506BF94: srl         $a3, $v1, 24
    ctx->r7 = S32(U32(ctx->r3) >> 24);
    // 0x1506BF98: sll         $t2, $v1, 15
    ctx->r10 = S32(ctx->r3 << 15);
    // 0x1506BF9C: lbu         $t8, 0x4($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X4);
    // 0x1506BFA0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x1506BFA4: beq         $t8, $zero, L_1506BFC8
    if (ctx->r24 == 0) {
        // 0x1506BFA8: nop
    
            goto L_1506BFC8;
    }
    // 0x1506BFA8: nop

    // 0x1506BFAC: lbu         $t9, 0x5($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X5);
    // 0x1506BFB0: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x1506BFB4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1506BFB8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x1506BFBC: lw          $t1, 0x6CAC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6CAC);
    // 0x1506BFC0: b           L_1506BFC8
    // 0x1506BFC4: lbu         $a2, 0x0($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X0);
        goto L_1506BFC8;
    // 0x1506BFC4: lbu         $a2, 0x0($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X0);
L_1506BFC8:
    // 0x1506BFC8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506BFCC: addiu       $a0, $a0, 0x187C
    ctx->r4 = ADD32(ctx->r4, 0X187C);
    // 0x1506BFD0: andi        $v0, $v1, 0xC000
    ctx->r2 = ctx->r3 & 0XC000;
    // 0x1506BFD4: beq         $v0, $at, L_1506BFF0
    if (ctx->r2 == ctx->r1) {
        // 0x1506BFD8: sw          $zero, 0x0($a0)
        MEM_W(0X0, ctx->r4) = 0;
            goto L_1506BFF0;
    }
    // 0x1506BFD8: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x1506BFDC: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x1506BFE0: beq         $v0, $at, L_1506C000
    if (ctx->r2 == ctx->r1) {
        // 0x1506BFE4: nop
    
            goto L_1506C000;
    }
    // 0x1506BFE4: nop

    // 0x1506BFE8: b           L_1506C008
    // 0x1506BFEC: nop

        goto L_1506C008;
    // 0x1506BFEC: nop

L_1506BFF0:
    // 0x1506BFF0: beq         $a2, $a3, L_1506C008
    if (ctx->r6 == ctx->r7) {
        // 0x1506BFF4: nop
    
            goto L_1506C008;
    }
    // 0x1506BFF4: nop

    // 0x1506BFF8: b           L_1506C320
    // 0x1506BFFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506C320;
    // 0x1506BFFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506C000:
    // 0x1506C000: beql        $a2, $a3, L_1506C320
    if (ctx->r6 == ctx->r7) {
        // 0x1506C004: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1506C320;
    }
    goto skip_0;
    // 0x1506C004: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_1506C008:
    // 0x1506C008: bgez        $t2, L_1506C018
    if (SIGNED(ctx->r10) >= 0) {
        // 0x1506C00C: addiu       $t3, $v1, 0x1
        ctx->r11 = ADD32(ctx->r3, 0X1);
            goto L_1506C018;
    }
    // 0x1506C00C: addiu       $t3, $v1, 0x1
    ctx->r11 = ADD32(ctx->r3, 0X1);
    // 0x1506C010: b           L_1506C31C
    // 0x1506C014: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
        goto L_1506C31C;
    // 0x1506C014: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
L_1506C018:
    // 0x1506C018: andi        $v0, $v1, 0x3800
    ctx->r2 = ctx->r3 & 0X3800;
    // 0x1506C01C: beq         $v0, $zero, L_1506C290
    if (ctx->r2 == 0) {
        // 0x1506C020: addiu       $a2, $zero, 0x7D00
        ctx->r6 = ADD32(0, 0X7D00);
            goto L_1506C290;
    }
    // 0x1506C020: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x1506C024: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x1506C028: beq         $v0, $at, L_1506C2B0
    if (ctx->r2 == ctx->r1) {
        // 0x1506C02C: sh          $a2, 0x46($sp)
        MEM_H(0X46, ctx->r29) = ctx->r6;
            goto L_1506C2B0;
    }
    // 0x1506C02C: sh          $a2, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r6;
    // 0x1506C030: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x1506C034: beq         $v0, $at, L_1506C05C
    if (ctx->r2 == ctx->r1) {
        // 0x1506C038: lui         $t4, 0x8008
        ctx->r12 = S32(0X8008 << 16);
            goto L_1506C05C;
    }
    // 0x1506C038: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x1506C03C: addiu       $at, $zero, 0x3000
    ctx->r1 = ADD32(0, 0X3000);
    // 0x1506C040: beq         $v0, $at, L_1506C308
    if (ctx->r2 == ctx->r1) {
        // 0x1506C044: lhu         $a0, 0x4E($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X4E);
            goto L_1506C308;
    }
    // 0x1506C044: lhu         $a0, 0x4E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4E);
    // 0x1506C048: addiu       $at, $zero, 0x3800
    ctx->r1 = ADD32(0, 0X3800);
    // 0x1506C04C: beq         $v0, $at, L_1506C2D0
    if (ctx->r2 == ctx->r1) {
        // 0x1506C050: nop
    
            goto L_1506C2D0;
    }
    // 0x1506C050: nop

    // 0x1506C054: b           L_1506C320
    // 0x1506C058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506C320;
    // 0x1506C058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506C05C:
    // 0x1506C05C: lw          $t4, 0x2FA0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2FA0);
    // 0x1506C060: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x1506C064: beql        $at, $zero, L_1506C320
    if (ctx->r1 == 0) {
        // 0x1506C068: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1506C320;
    }
    goto skip_1;
    // 0x1506C068: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x1506C06C: jal         0x1510F8CC
    // 0x1506C070: lw          $a0, 0x184($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X184);
    func_1510F8CC(rdram, ctx);
        goto after_0;
    // 0x1506C070: lw          $a0, 0x184($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X184);
    after_0:
    // 0x1506C074: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x1506C078: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x1506C07C: bne         $v0, $at, L_1506C0D0
    if (ctx->r2 != ctx->r1) {
        // 0x1506C080: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_1506C0D0;
    }
    // 0x1506C080: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x1506C084: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1506C088: lw          $t5, 0x154C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X154C);
    // 0x1506C08C: lui         $at, 0xC188
    ctx->r1 = S32(0XC188 << 16);
    // 0x1506C090: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506C094: lh          $t6, 0xCC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XCC);
    // 0x1506C098: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    // 0x1506C09C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1506C0A0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1506C0A4: nop

    // 0x1506C0A8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1506C0AC: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x1506C0B0: nop

    // 0x1506C0B4: bc1f        L_1506C0D0
    if (!c1cs) {
        // 0x1506C0B8: nop
    
            goto L_1506C0D0;
    }
    // 0x1506C0B8: nop

    // 0x1506C0BC: jal         0x1000F568
    // 0x1506C0C0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_1000F568(rdram, ctx);
        goto after_1;
    // 0x1506C0C0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x1506C0C4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x1506C0C8: b           L_1506C138
    // 0x1506C0CC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
        goto L_1506C138;
    // 0x1506C0CC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
L_1506C0D0:
    // 0x1506C0D0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506C0D4: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x1506C0D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506C0DC: lwc1        $f10, -0x63B8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X63B8);
    // 0x1506C0E0: lwc1        $f0, 0x118($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X118);
    // 0x1506C0E4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1506C0E8: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x1506C0EC: nop

    // 0x1506C0F0: bc1tl       L_1506C128
    if (c1cs) {
        // 0x1506C0F4: addiu       $a1, $sp, 0x46
        ctx->r5 = ADD32(ctx->r29, 0X46);
            goto L_1506C128;
    }
    goto skip_2;
    // 0x1506C0F4: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    skip_2:
    // 0x1506C0F8: lwc1        $f16, 0x18($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X18);
    // 0x1506C0FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1506C100: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x1506C104: nop

    // 0x1506C108: bc1fl       L_1506C128
    if (!c1cs) {
        // 0x1506C10C: addiu       $a1, $sp, 0x46
        ctx->r5 = ADD32(ctx->r29, 0X46);
            goto L_1506C128;
    }
    goto skip_3;
    // 0x1506C10C: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    skip_3:
    // 0x1506C110: jal         0x10011EB8
    // 0x1506C114: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_10011EB8(rdram, ctx);
        goto after_2;
    // 0x1506C114: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x1506C118: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x1506C11C: b           L_1506C138
    // 0x1506C120: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
        goto L_1506C138;
    // 0x1506C120: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x1506C124: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
L_1506C128:
    // 0x1506C128: jal         0x10011EB8
    // 0x1506C12C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_10011EB8(rdram, ctx);
        goto after_3;
    // 0x1506C12C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_3:
    // 0x1506C130: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x1506C134: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
L_1506C138:
    // 0x1506C138: beq         $v0, $zero, L_1506C31C
    if (ctx->r2 == 0) {
        // 0x1506C13C: lui         $a1, 0x800D
        ctx->r5 = S32(0X800D << 16);
            goto L_1506C31C;
    }
    // 0x1506C13C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506C140: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x1506C144: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1506C148: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x1506C14C: lw          $v0, 0x31C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X31C);
    // 0x1506C150: beql        $v0, $zero, L_1506C164
    if (ctx->r2 == 0) {
        // 0x1506C154: lwc1        $f0, 0x20($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
            goto L_1506C164;
    }
    goto skip_4;
    // 0x1506C154: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    skip_4:
    // 0x1506C158: b           L_1506C164
    // 0x1506C15C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
        goto L_1506C164;
    // 0x1506C15C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1506C160: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
L_1506C164:
    // 0x1506C164: bne         $a3, $at, L_1506C178
    if (ctx->r7 != ctx->r1) {
        // 0x1506C168: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_1506C178;
    }
    // 0x1506C168: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1506C16C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1506C170: b           L_1506C188
    // 0x1506C174: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
        goto L_1506C188;
    // 0x1506C174: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_1506C178:
    // 0x1506C178: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1506C17C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1506C180: nop

    // 0x1506C184: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_1506C188:
    // 0x1506C188: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1506C18C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1506C190: lhu         $a0, 0x4E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4E);
    // 0x1506C194: bc1f        L_1506C1A0
    if (!c1cs) {
        // 0x1506C198: div.s       $f6, $f18, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
            goto L_1506C1A0;
    }
    // 0x1506C198: div.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x1506C19C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_1506C1A0:
    // 0x1506C1A0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x1506C1A4: addiu       $t9, $zero, 0x9C4
    ctx->r25 = ADD32(0, 0X9C4);
    // 0x1506C1A8: bc1f        L_1506C1B4
    if (!c1cs) {
        // 0x1506C1AC: nop
    
            goto L_1506C1B4;
    }
    // 0x1506C1AC: nop

    // 0x1506C1B0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_1506C1B4:
    // 0x1506C1B4: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1506C1B8: lhu         $a2, 0x46($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X46);
    // 0x1506C1BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506C1C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1506C1C4: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x1506C1C8: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x1506C1CC: bgez        $a2, L_1506C1E0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x1506C1D0: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1506C1E0;
    }
    // 0x1506C1D0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1506C1D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1506C1D8: nop

    // 0x1506C1DC: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_1506C1E0:
    // 0x1506C1E0: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1506C1E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1506C1E8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1506C1EC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x1506C1F0: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x1506C1F4: nop

    // 0x1506C1F8: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x1506C1FC: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x1506C200: nop

    // 0x1506C204: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x1506C208: beql        $a2, $zero, L_1506C258
    if (ctx->r6 == 0) {
        // 0x1506C20C: mfc1        $a2, $f6
        ctx->r6 = (int32_t)ctx->f6.u32l;
            goto L_1506C258;
    }
    goto skip_5;
    // 0x1506C20C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    skip_5:
    // 0x1506C210: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506C214: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1506C218: sub.s       $f6, $f18, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x1506C21C: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x1506C220: nop

    // 0x1506C224: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1506C228: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x1506C22C: nop

    // 0x1506C230: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x1506C234: bne         $a2, $zero, L_1506C24C
    if (ctx->r6 != 0) {
        // 0x1506C238: nop
    
            goto L_1506C24C;
    }
    // 0x1506C238: nop

    // 0x1506C23C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x1506C240: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1506C244: b           L_1506C264
    // 0x1506C248: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_1506C264;
    // 0x1506C248: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_1506C24C:
    // 0x1506C24C: b           L_1506C264
    // 0x1506C250: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_1506C264;
    // 0x1506C250: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1506C254: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
L_1506C258:
    // 0x1506C258: nop

    // 0x1506C25C: bltz        $a2, L_1506C24C
    if (SIGNED(ctx->r6) < 0) {
        // 0x1506C260: nop
    
            goto L_1506C24C;
    }
    // 0x1506C260: nop

L_1506C264:
    // 0x1506C264: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x1506C268: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x1506C26C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x1506C270: bne         $a3, $at, L_1506C290
    if (ctx->r7 != ctx->r1) {
        // 0x1506C274: or          $a2, $t8, $zero
        ctx->r6 = ctx->r24 | 0;
            goto L_1506C290;
    }
    // 0x1506C274: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x1506C278: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    // 0x1506C27C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1506C280: jal         0x10010630
    // 0x1506C284: sh          $t8, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r24;
    func_10010630(rdram, ctx);
        goto after_4;
    // 0x1506C284: sh          $t8, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r24;
    after_4:
    // 0x1506C288: b           L_1506C320
    // 0x1506C28C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506C320;
    // 0x1506C28C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506C290:
    // 0x1506C290: addiu       $t0, $zero, 0x9C4
    ctx->r8 = ADD32(0, 0X9C4);
    // 0x1506C294: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1506C298: lhu         $a0, 0x4E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4E);
    // 0x1506C29C: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    // 0x1506C2A0: jal         0x10010154
    // 0x1506C2A4: sh          $a2, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r6;
    func_10010154(rdram, ctx);
        goto after_5;
    // 0x1506C2A4: sh          $a2, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r6;
    after_5:
    // 0x1506C2A8: b           L_1506C320
    // 0x1506C2AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506C320;
    // 0x1506C2AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506C2B0:
    // 0x1506C2B0: addiu       $t1, $zero, 0x9C4
    ctx->r9 = ADD32(0, 0X9C4);
    // 0x1506C2B4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x1506C2B8: lhu         $a0, 0x4E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4E);
    // 0x1506C2BC: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x1506C2C0: jal         0x10010344
    // 0x1506C2C4: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_10010344(rdram, ctx);
        goto after_6;
    // 0x1506C2C4: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_6:
    // 0x1506C2C8: b           L_1506C320
    // 0x1506C2CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506C320;
    // 0x1506C2CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506C2D0:
    // 0x1506C2D0: jal         0x1001147C
    // 0x1506C2D4: lhu         $a0, 0x8E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X8E);
    func_1001147C(rdram, ctx);
        goto after_7;
    // 0x1506C2D4: lhu         $a0, 0x8E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X8E);
    after_7:
    // 0x1506C2D8: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x1506C2DC: lhu         $a2, 0x46($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X46);
    // 0x1506C2E0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506C2E4: beq         $v0, $v1, L_1506C31C
    if (ctx->r2 == ctx->r3) {
        // 0x1506C2E8: andi        $a0, $v1, 0xFFFF
        ctx->r4 = ctx->r3 & 0XFFFF;
            goto L_1506C31C;
    }
    // 0x1506C2E8: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x1506C2EC: addiu       $t2, $zero, 0x9C4
    ctx->r10 = ADD32(0, 0X9C4);
    // 0x1506C2F0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1506C2F4: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x1506C2F8: jal         0x10010154
    // 0x1506C2FC: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_10010154(rdram, ctx);
        goto after_8;
    // 0x1506C2FC: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_8:
    // 0x1506C300: b           L_1506C320
    // 0x1506C304: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506C320;
    // 0x1506C304: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506C308:
    // 0x1506C308: addiu       $t3, $zero, 0x9C4
    ctx->r11 = ADD32(0, 0X9C4);
    // 0x1506C30C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1506C310: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x1506C314: jal         0x10010630
    // 0x1506C318: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_10010630(rdram, ctx);
        goto after_9;
    // 0x1506C318: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_9:
L_1506C31C:
    // 0x1506C31C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506C320:
    // 0x1506C320: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1506C324: jr          $ra
    // 0x1506C328: nop

    return;
    return;
    // 0x1506C328: nop

;}
RECOMP_FUNC void func_15167E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15167E0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15167E10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15167E14: lh          $v0, 0x38($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X38);
    // 0x15167E18: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x15167E1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15167E20: beq         $v0, $at, L_15167E4C
    if (ctx->r2 == ctx->r1) {
        // 0x15167E24: lui         $t0, 0x800C
        ctx->r8 = S32(0X800C << 16);
            goto L_15167E4C;
    }
    // 0x15167E24: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15167E28: addiu       $t0, $t0, -0x161C
    ctx->r8 = ADD32(ctx->r8, -0X161C);
    // 0x15167E2C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x15167E30: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x15167E34: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    // 0x15167E38: lh          $t8, 0x38($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X38);
    // 0x15167E3C: bgezl       $t8, L_15167E50
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15167E40: lb          $v0, 0x3A($a0)
        ctx->r2 = MEM_B(ctx->r4, 0X3A);
            goto L_15167E50;
    }
    goto skip_0;
    // 0x15167E40: lb          $v0, 0x3A($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3A);
    skip_0:
    // 0x15167E44: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x15167E48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_15167E4C:
    // 0x15167E4C: lb          $v0, 0x3A($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3A);
L_15167E50:
    // 0x15167E50: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15167E54: addiu       $t0, $t0, -0x161C
    ctx->r8 = ADD32(ctx->r8, -0X161C);
    // 0x15167E58: blezl       $v0, L_15167E84
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15167E5C: lb          $v0, 0x2F($a0)
        ctx->r2 = MEM_B(ctx->r4, 0X2F);
            goto L_15167E84;
    }
    goto skip_1;
    // 0x15167E5C: lb          $v0, 0x2F($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2F);
    skip_1:
    // 0x15167E60: lbu         $v1, 0x3F($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3F);
    // 0x15167E64: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15167E68: beq         $at, $zero, L_15167E78
    if (ctx->r1 == 0) {
        // 0x15167E6C: subu        $t9, $v1, $v0
        ctx->r25 = SUB32(ctx->r3, ctx->r2);
            goto L_15167E78;
    }
    // 0x15167E6C: subu        $t9, $v1, $v0
    ctx->r25 = SUB32(ctx->r3, ctx->r2);
    // 0x15167E70: b           L_15167E80
    // 0x15167E74: sb          $t9, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r25;
        goto L_15167E80;
    // 0x15167E74: sb          $t9, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r25;
L_15167E78:
    // 0x15167E78: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x15167E7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_15167E80:
    // 0x15167E80: lb          $v0, 0x2F($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2F);
L_15167E84:
    // 0x15167E84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15167E88: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x15167E8C: beq         $v0, $at, L_15167EC0
    if (ctx->r2 == ctx->r1) {
        // 0x15167E90: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_15167EC0;
    }
    // 0x15167E90: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x15167E94: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x15167E98: lw          $v1, -0x3638($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3638);
    // 0x15167E9C: beql        $v1, $zero, L_15167EC4
    if (ctx->r3 == 0) {
        // 0x15167EA0: lh          $t2, 0x38($a0)
        ctx->r10 = MEM_H(ctx->r4, 0X38);
            goto L_15167EC4;
    }
    goto skip_2;
    // 0x15167EA0: lh          $t2, 0x38($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X38);
    skip_2:
    // 0x15167EA4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15167EA8: jalr        $v1
    // 0x15167EAC: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x15167EAC: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    after_0:
    // 0x15167EB0: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15167EB4: addiu       $t0, $t0, -0x161C
    ctx->r8 = ADD32(ctx->r8, -0X161C);
    // 0x15167EB8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15167EBC: lbu         $a3, 0x1B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1B);
L_15167EC0:
    // 0x15167EC0: lh          $t2, 0x38($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X38);
L_15167EC4:
    // 0x15167EC4: beql        $t2, $zero, L_151680CC
    if (ctx->r10 == 0) {
        // 0x15167EC8: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_151680CC;
    }
    goto skip_3;
    // 0x15167EC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    skip_3:
    // 0x15167ECC: lh          $t3, 0x30($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X30);
    // 0x15167ED0: lh          $t4, 0x32($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X32);
    // 0x15167ED4: lh          $v0, 0x22($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X22);
    // 0x15167ED8: lbu         $t7, 0x2E($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X2E);
    // 0x15167EDC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x15167EE0: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
    // 0x15167EE4: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x15167EE8: lh          $t8, 0x30($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X30);
    // 0x15167EEC: sll         $t6, $v0, 8
    ctx->r14 = S32(ctx->r2 << 8);
    // 0x15167EF0: or          $v0, $t6, $t7
    ctx->r2 = ctx->r14 | ctx->r15;
    // 0x15167EF4: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15167EF8: lh          $t5, 0x26($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X26);
    // 0x15167EFC: lh          $v1, 0x20($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X20);
    // 0x15167F00: lbu         $t4, 0x2C($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X2C);
    // 0x15167F04: lh          $a2, 0x1E($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X1E);
    // 0x15167F08: sll         $t3, $v1, 8
    ctx->r11 = S32(ctx->r3 << 8);
    // 0x15167F0C: or          $v1, $t3, $t4
    ctx->r3 = ctx->r11 | ctx->r12;
    // 0x15167F10: mflo        $a1
    ctx->r5 = lo;
    // 0x15167F14: addu        $t2, $v0, $a1
    ctx->r10 = ADD32(ctx->r2, ctx->r5);
    // 0x15167F18: sra         $t1, $t2, 8
    ctx->r9 = S32(SIGNED(ctx->r10) >> 8);
    // 0x15167F1C: sh          $t1, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r9;
    // 0x15167F20: sb          $t2, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r10;
    // 0x15167F24: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x15167F28: lh          $t2, 0x28($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X28);
    // 0x15167F2C: lh          $v0, 0x24($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X24);
    // 0x15167F30: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15167F34: lbu         $t1, 0x2D($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X2D);
    // 0x15167F38: sll         $t9, $v0, 8
    ctx->r25 = S32(ctx->r2 << 8);
    // 0x15167F3C: or          $v0, $t9, $t1
    ctx->r2 = ctx->r25 | ctx->r9;
    // 0x15167F40: mflo        $a1
    ctx->r5 = lo;
    // 0x15167F44: addu        $t8, $v1, $a1
    ctx->r24 = ADD32(ctx->r3, ctx->r5);
    // 0x15167F48: sra         $t7, $t8, 8
    ctx->r15 = S32(SIGNED(ctx->r24) >> 8);
    // 0x15167F4C: sh          $t7, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r15;
    // 0x15167F50: sb          $t8, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r24;
    // 0x15167F54: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x15167F58: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15167F5C: mflo        $a1
    ctx->r5 = lo;
    // 0x15167F60: addu        $t5, $v0, $a1
    ctx->r13 = ADD32(ctx->r2, ctx->r5);
    // 0x15167F64: sra         $t4, $t5, 8
    ctx->r12 = S32(SIGNED(ctx->r13) >> 8);
    // 0x15167F68: sh          $t4, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r12;
    // 0x15167F6C: beq         $a2, $zero, L_151680CC
    if (ctx->r6 == 0) {
        // 0x15167F70: sb          $t5, 0x2D($a0)
        MEM_B(0X2D, ctx->r4) = ctx->r13;
            goto L_151680CC;
    }
    // 0x15167F70: sb          $t5, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = ctx->r13;
    // 0x15167F74: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x15167F78: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x15167F7C: lh          $t8, 0x1C($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X1C);
    // 0x15167F80: multu       $a2, $t9
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15167F84: lbu         $v1, 0x4($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X4);
    // 0x15167F88: sll         $t7, $v1, 8
    ctx->r15 = S32(ctx->r3 << 8);
    // 0x15167F8C: addiu       $v1, $t7, -0x1
    ctx->r3 = ADD32(ctx->r15, -0X1);
    // 0x15167F90: mflo        $t1
    ctx->r9 = lo;
    // 0x15167F94: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x15167F98: sh          $t2, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r10;
    // 0x15167F9C: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x15167FA0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15167FA4: beq         $at, $zero, L_15168044
    if (ctx->r1 == 0) {
        // 0x15167FA8: nop
    
            goto L_15168044;
    }
    // 0x15167FA8: nop

    // 0x15167FAC: lhu         $a1, 0x44($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X44);
    // 0x15167FB0: andi        $t3, $a1, 0x20
    ctx->r11 = ctx->r5 & 0X20;
    // 0x15167FB4: beq         $t3, $zero, L_15167FC8
    if (ctx->r11 == 0) {
        // 0x15167FB8: ori         $t4, $a1, 0x80
        ctx->r12 = ctx->r5 | 0X80;
            goto L_15167FC8;
    }
    // 0x15167FB8: ori         $t4, $a1, 0x80
    ctx->r12 = ctx->r5 | 0X80;
    // 0x15167FBC: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x15167FC0: b           L_151680CC
    // 0x15167FC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_151680CC;
    // 0x15167FC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_15167FC8:
    // 0x15167FC8: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x15167FCC: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x15167FD0: beq         $t6, $zero, L_15168020
    if (ctx->r14 == 0) {
        // 0x15167FD4: sh          $t4, 0x44($a0)
        MEM_H(0X44, ctx->r4) = ctx->r12;
            goto L_15168020;
    }
    // 0x15167FD4: sh          $t4, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r12;
    // 0x15167FD8: lh          $t7, 0x1C($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1C);
    // 0x15167FDC: lh          $t1, 0x1E($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X1E);
    // 0x15167FE0: div         $zero, $t7, $v1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r3)));
    // 0x15167FE4: mfhi        $t9
    ctx->r25 = hi;
    // 0x15167FE8: subu        $t8, $v1, $t9
    ctx->r24 = SUB32(ctx->r3, ctx->r25);
    // 0x15167FEC: bne         $v1, $zero, L_15167FF8
    if (ctx->r3 != 0) {
        // 0x15167FF0: nop
    
            goto L_15167FF8;
    }
    // 0x15167FF0: nop

    // 0x15167FF4: break       7
    do_break(353796084);
L_15167FF8:
    // 0x15167FF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15167FFC: bne         $v1, $at, L_15168010
    if (ctx->r3 != ctx->r1) {
        // 0x15168000: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15168010;
    }
    // 0x15168000: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15168004: bne         $t7, $at, L_15168010
    if (ctx->r15 != ctx->r1) {
        // 0x15168008: nop
    
            goto L_15168010;
    }
    // 0x15168008: nop

    // 0x1516800C: break       6
    do_break(353796108);
L_15168010:
    // 0x15168010: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x15168014: sh          $t8, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r24;
    // 0x15168018: b           L_151680CC
    // 0x1516801C: sh          $t2, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r10;
        goto L_151680CC;
    // 0x1516801C: sh          $t2, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r10;
L_15168020:
    // 0x15168020: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x15168024: subu        $t3, $v0, $v1
    ctx->r11 = SUB32(ctx->r2, ctx->r3);
L_15168028:
    // 0x15168028: sh          $t3, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r11;
    // 0x1516802C: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x15168030: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15168034: bnel        $at, $zero, L_15168028
    if (ctx->r1 != 0) {
        // 0x15168038: subu        $t3, $v0, $v1
        ctx->r11 = SUB32(ctx->r2, ctx->r3);
            goto L_15168028;
    }
    goto skip_4;
    // 0x15168038: subu        $t3, $v0, $v1
    ctx->r11 = SUB32(ctx->r2, ctx->r3);
    skip_4:
    // 0x1516803C: b           L_151680CC
    // 0x15168040: nop

        goto L_151680CC;
    // 0x15168040: nop

L_15168044:
    // 0x15168044: bgez        $v0, L_151680CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15168048: nop
    
            goto L_151680CC;
    }
    // 0x15168048: nop

    // 0x1516804C: lhu         $a1, 0x44($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X44);
    // 0x15168050: andi        $t4, $a1, 0x40
    ctx->r12 = ctx->r5 & 0X40;
    // 0x15168054: beq         $t4, $zero, L_15168068
    if (ctx->r12 == 0) {
        // 0x15168058: andi        $t5, $a1, 0x2
        ctx->r13 = ctx->r5 & 0X2;
            goto L_15168068;
    }
    // 0x15168058: andi        $t5, $a1, 0x2
    ctx->r13 = ctx->r5 & 0X2;
    // 0x1516805C: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x15168060: b           L_151680CC
    // 0x15168064: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_151680CC;
    // 0x15168064: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_15168068:
    // 0x15168068: beq         $t5, $zero, L_151680AC
    if (ctx->r13 == 0) {
        // 0x1516806C: negu        $t6, $v0
        ctx->r14 = SUB32(0, ctx->r2);
            goto L_151680AC;
    }
    // 0x1516806C: negu        $t6, $v0
    ctx->r14 = SUB32(0, ctx->r2);
    // 0x15168070: div         $zero, $t6, $v1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r3)));
    // 0x15168074: mfhi        $t7
    ctx->r15 = hi;
    // 0x15168078: negu        $t9, $a2
    ctx->r25 = SUB32(0, ctx->r6);
    // 0x1516807C: bne         $v1, $zero, L_15168088
    if (ctx->r3 != 0) {
        // 0x15168080: nop
    
            goto L_15168088;
    }
    // 0x15168080: nop

    // 0x15168084: break       7
    do_break(353796228);
L_15168088:
    // 0x15168088: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1516808C: bne         $v1, $at, L_151680A0
    if (ctx->r3 != ctx->r1) {
        // 0x15168090: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151680A0;
    }
    // 0x15168090: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15168094: bne         $t6, $at, L_151680A0
    if (ctx->r14 != ctx->r1) {
        // 0x15168098: nop
    
            goto L_151680A0;
    }
    // 0x15168098: nop

    // 0x1516809C: break       6
    do_break(353796252);
L_151680A0:
    // 0x151680A0: sh          $t7, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r15;
    // 0x151680A4: b           L_151680CC
    // 0x151680A8: sh          $t9, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r25;
        goto L_151680CC;
    // 0x151680A8: sh          $t9, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r25;
L_151680AC:
    // 0x151680AC: addu        $t8, $v0, $v1
    ctx->r24 = ADD32(ctx->r2, ctx->r3);
L_151680B0:
    // 0x151680B0: sh          $t8, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r24;
    // 0x151680B4: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x151680B8: bltzl       $v0, L_151680B0
    if (SIGNED(ctx->r2) < 0) {
        // 0x151680BC: addu        $t8, $v0, $v1
        ctx->r24 = ADD32(ctx->r2, ctx->r3);
            goto L_151680B0;
    }
    goto skip_5;
    // 0x151680BC: addu        $t8, $v0, $v1
    ctx->r24 = ADD32(ctx->r2, ctx->r3);
    skip_5:
    // 0x151680C0: b           L_151680CC
    // 0x151680C4: nop

        goto L_151680CC;
    // 0x151680C4: nop

    // 0x151680C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_151680CC:
    // 0x151680CC: beql        $a3, $zero, L_1516810C
    if (ctx->r7 == 0) {
        // 0x151680D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1516810C;
    }
    goto skip_6;
    // 0x151680D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x151680D4: lb          $v0, 0x48($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X48);
    // 0x151680D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151680DC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151680E0: beq         $v0, $at, L_15168100
    if (ctx->r2 == ctx->r1) {
        // 0x151680E4: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_15168100;
    }
    // 0x151680E4: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x151680E8: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x151680EC: lw          $t9, -0x35E0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X35E0);
    // 0x151680F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151680F4: jalr        $t9
    // 0x151680F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x151680F8: nop

    after_1:
    // 0x151680FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_15168100:
    // 0x15168100: jal         0x1516972C
    // 0x15168104: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x15168104: nop

    after_2:
    // 0x15168108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1516810C:
    // 0x1516810C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15168110: jr          $ra
    // 0x15168114: nop

    return;
    return;
    // 0x15168114: nop

;}
